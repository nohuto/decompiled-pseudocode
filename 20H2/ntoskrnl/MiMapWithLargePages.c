/*
 * XREFs of MiMapWithLargePages @ 0x1403B80EC
 * Callers:
 *     MiInsertInSystemSpace @ 0x14024C1E0 (MiInsertInSystemSpace.c)
 *     MiMapContiguousMemoryLarge @ 0x1403B7E54 (MiMapContiguousMemoryLarge.c)
 *     MiMapSystemImageWithLargePage @ 0x1408DCC10 (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiLockPageTableInternal @ 0x14026FE10 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MiGetSharedVm @ 0x14027C730 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027F090 (MiUnlockWorkingSetExclusive.c)
 *     MiMakeValidPte @ 0x1402B1B40 (MiMakeValidPte.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
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
  unsigned __int64 v19; // rbp
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // rdi
  unsigned __int8 v22; // al
  unsigned __int8 v23; // r14
  unsigned __int64 v24; // r14
  unsigned __int64 v25; // rbx
  int v26; // r12d
  __int64 v27; // r8
  unsigned __int64 *v28; // r14
  unsigned __int64 v29; // r13
  unsigned __int64 ValidPte; // rbx
  unsigned __int64 v31; // rdi
  int v32; // r12d
  __int64 v33; // r8
  bool v34; // zf
  __int64 v35; // rcx
  LONG *SharedVm; // rbx
  bool v37; // zf
  unsigned __int64 v39; // [rsp+78h] [rbp+10h]
  unsigned __int64 v41; // [rsp+88h] [rbp+20h]
  unsigned __int8 v42[8]; // [rsp+98h] [rbp+30h]

  v8 = MiLargePageSizes[a5];
  v9 = a3;
  v39 = v8;
  v10 = a1;
  v11 = a6 & 7;
  v41 = a4 / v8;
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
  v28 = (unsigned __int64 *)(v14 + 8 * v13);
  v29 = v14 + 8 * a4;
  ValidPte = MiMakeValidPte(0LL, v13 + v9, v16, v9);
  if ( (unsigned __int64)v28 >= v29 )
    goto LABEL_32;
  do
  {
    v31 = ValidPte;
    v32 = 0;
    if ( !MiPteInShadowRange((unsigned __int64)v28) )
      goto LABEL_28;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v32 = 1;
      if ( HIBYTE(word_140C4DE88) )
        goto LABEL_28;
      v34 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_28;
      v34 = (ValidPte & 1) == 0;
    }
    if ( !v34 )
      v31 = ValidPte | 0x8000000000000000uLL;
LABEL_28:
    *v28 = v31;
    if ( v32 )
      MiWritePteShadow((__int64)v28, v31, v33);
    ++v28;
    ValidPte ^= (ValidPte ^ (ValidPte + 4096)) & 0xFFFFFFFFF000LL;
  }
  while ( (unsigned __int64)v28 < v29 );
  v10 = a1;
  v8 = v39;
LABEL_32:
  v12 = v41;
  v9 = a3;
LABEL_6:
  v17 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !a5 )
  {
    v35 = 1LL;
    do
    {
      v17 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v35;
    }
    while ( v35 );
  }
  v18 = MiMakeValidPte(0LL, v9, v16 | 0x4000000, v9);
  v19 = 0LL;
  v20 = v17 + 8 * v12;
  v21 = v18;
  if ( a5 )
  {
    v22 = MiLockWorkingSetShared(v10);
  }
  else
  {
    SharedVm = MiGetSharedVm(v10);
    v22 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
  }
  v42[0] = v22;
  v23 = v22;
  if ( v17 < v20 )
  {
    v24 = v8 << 12;
    while ( 1 )
    {
      if ( !a5 )
        goto LABEL_14;
      if ( v19 )
      {
        if ( (v17 & 0xFFF) != 0 )
          goto LABEL_14;
        MiUnlockPageTableInternal(v10, v19);
      }
      v19 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(v10, v19, 0LL);
LABEL_14:
      v25 = v21;
      v26 = 0;
      if ( MiPteInShadowRange(v17) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v26 = 1;
          if ( !HIBYTE(word_140C4DE88) )
          {
            v37 = (v21 & 1) == 0;
            goto LABEL_51;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v37 = (v21 & 1) == 0;
LABEL_51:
          if ( !v37 )
            v25 = v21 | 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v17 = v25;
      if ( v26 )
        MiWritePteShadow(v17, v25, v27);
      v17 += 8LL;
      v21 ^= (v21 ^ (v24 + v21)) & 0xFFFFFFFFF000LL;
      if ( v17 >= v20 )
      {
        v23 = v42[0];
        break;
      }
    }
  }
  if ( a5 )
  {
    if ( v19 )
      MiUnlockPageTableInternal(v10, v19);
    MiUnlockWorkingSetShared(v10, v23);
  }
  else
  {
    MiUnlockWorkingSetExclusive(v10, v23);
  }
}
