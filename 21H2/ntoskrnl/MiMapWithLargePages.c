/*
 * XREFs of MiMapWithLargePages @ 0x1403B8C5C
 * Callers:
 *     MiInsertInSystemSpace @ 0x140305B30 (MiInsertInSystemSpace.c)
 *     MiMapContiguousMemoryLarge @ 0x1403B89C4 (MiMapContiguousMemoryLarge.c)
 *     MiMapSystemImageWithLargePage @ 0x1408DA530 (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiLockPageTableInternal @ 0x1402B33F0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiGetSharedVm @ 0x1402BF850 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402C13E0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 */

void __fastcall MiMapWithLargePages(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        char a6,
        int a7)
{
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // r9
  __int64 v10; // r15
  int v11; // ebp
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rsi
  unsigned int v16; // ebp
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  _DWORD *v21; // r9
  unsigned __int64 v22; // rbp
  unsigned __int64 v23; // r13
  unsigned __int64 v24; // rdi
  unsigned __int8 v25; // al
  unsigned __int8 v26; // r14
  unsigned __int64 v27; // r14
  unsigned __int64 v28; // rbx
  int v29; // r12d
  unsigned __int64 *v30; // r14
  unsigned __int64 v31; // r13
  unsigned __int64 ValidPte; // rbx
  unsigned __int64 v33; // rdi
  int v34; // r12d
  bool v35; // zf
  __int64 v36; // rcx
  LONG *SharedVm; // rbx
  bool v38; // zf
  unsigned __int64 v40; // [rsp+78h] [rbp+10h]
  unsigned __int64 v42; // [rsp+88h] [rbp+20h]
  unsigned __int8 v43[8]; // [rsp+98h] [rbp+30h]

  v8 = MiLargePageSizes[a5];
  v9 = a3;
  v40 = v8;
  v10 = a1;
  v11 = a6 & 7;
  v42 = a4 / v8;
  v12 = a4 / v8;
  v13 = v8 * (a4 / v8);
  v14 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v9 <= 0xFFFFFFFFFLL && ((*(_QWORD *)(48 * v9 - 0x57FFFFFFFD8LL) >> 50) & 1) != 0 )
    a7 = *(unsigned __int8 *)(48 * v9 - 0x57FFFFFFFDELL) >> 6;
  if ( a7 )
  {
    if ( a7 == 2 )
      v11 |= 0x18u;
  }
  else
  {
    v11 |= 8u;
  }
  v16 = v11 | 0xA0000000;
  if ( !(a4 % v8) )
    goto LABEL_6;
  v30 = (unsigned __int64 *)(v14 + 8 * v13);
  v31 = v14 + 8 * a4;
  ValidPte = MiMakeValidPte(0LL, v13 + v9, v16);
  if ( (unsigned __int64)v30 >= v31 )
    goto LABEL_32;
  do
  {
    v33 = ValidPte;
    v34 = 0;
    if ( !MiPteInShadowRange((unsigned __int64)v30) )
      goto LABEL_28;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v34 = 1;
      if ( HIBYTE(word_140C4E048) )
        goto LABEL_28;
      v35 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_28;
      v35 = (ValidPte & 1) == 0;
    }
    if ( !v35 )
      v33 = ValidPte | 0x8000000000000000uLL;
LABEL_28:
    *v30 = v33;
    if ( v34 )
      MiWritePteShadow((__int64)v30, v33);
    ++v30;
    ValidPte ^= (ValidPte ^ (ValidPte + 4096)) & 0xFFFFFFFFF000LL;
  }
  while ( (unsigned __int64)v30 < v31 );
  v10 = a1;
  v8 = v40;
LABEL_32:
  v12 = v42;
  v9 = a3;
LABEL_6:
  v17 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !a5 )
  {
    v36 = 1LL;
    do
    {
      v17 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v36;
    }
    while ( v36 );
  }
  v18 = MiMakeValidPte(0LL, v9, v16 | 0x4000000);
  v22 = 0LL;
  v23 = v17 + 8 * v12;
  v24 = v18;
  if ( a5 )
  {
    v25 = MiLockWorkingSetShared(v10, v19, v20, v21);
  }
  else
  {
    SharedVm = MiGetSharedVm(v10);
    v25 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
  }
  v43[0] = v25;
  v26 = v25;
  if ( v17 < v23 )
  {
    v27 = v8 << 12;
    while ( 1 )
    {
      if ( !a5 )
        goto LABEL_14;
      if ( v22 )
      {
        if ( (v17 & 0xFFF) != 0 )
          goto LABEL_14;
        MiUnlockPageTableInternal(v10, v22);
      }
      v22 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(v10, v22, 0);
LABEL_14:
      v28 = v24;
      v29 = 0;
      if ( MiPteInShadowRange(v17) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v29 = 1;
          if ( !HIBYTE(word_140C4E048) )
          {
            v38 = (v24 & 1) == 0;
            goto LABEL_51;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v38 = (v24 & 1) == 0;
LABEL_51:
          if ( !v38 )
            v28 = v24 | 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v17 = v28;
      if ( v29 )
        MiWritePteShadow(v17, v28);
      v17 += 8LL;
      v24 ^= (v24 ^ (v27 + v24)) & 0xFFFFFFFFF000LL;
      if ( v17 >= v23 )
      {
        v26 = v43[0];
        break;
      }
    }
  }
  if ( a5 )
  {
    if ( v22 )
      MiUnlockPageTableInternal(v10, v22);
    MiUnlockWorkingSetShared(v10, v26);
  }
  else
  {
    MiUnlockWorkingSetExclusive(v10, v26);
  }
}
