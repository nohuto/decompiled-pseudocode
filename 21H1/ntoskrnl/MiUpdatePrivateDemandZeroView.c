/*
 * XREFs of MiUpdatePrivateDemandZeroView @ 0x140527878
 * Callers:
 *     MiMapViewOfImageSection @ 0x1406362B0 (MiMapViewOfImageSection.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x140207D20 (MiGetProtoPteAddress.c)
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiSwizzleInvalidPte @ 0x1402233C0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiGetUsedPtesHandle @ 0x14029EEF0 (MiGetUsedPtesHandle.c)
 *     MiMakeSystemAddressValid @ 0x1402AE710 (MiMakeSystemAddressValid.c)
 *     MiIncreaseUsedPtesCount @ 0x1402AF310 (MiIncreaseUsedPtesCount.c)
 *     MiWorkingSetIsContended @ 0x1402B19F0 (MiWorkingSetIsContended.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x1402EE280 (KeShouldYieldProcessor.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 */

__int64 __fastcall MiUpdatePrivateDemandZeroView(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // r13
  __int64 v6; // r15
  __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  unsigned __int64 ProtoPteAddress; // rsi
  unsigned __int64 v12; // r8
  __int64 v13; // rbx
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rdx
  unsigned int v17; // edi
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // r12
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned int v23; // ecx
  __int64 v24; // rax
  __int64 v25; // rbp
  unsigned __int64 v26; // r15
  unsigned __int64 v27; // rdi
  unsigned __int8 v28; // si
  __int64 v29; // r8
  unsigned __int64 v30; // rbx
  int v31; // r13d
  __int64 v32; // r8
  __int64 v33; // r9
  bool v34; // zf
  __int64 v35; // rbx
  __int64 v36; // rcx
  __int64 v38; // [rsp+30h] [rbp-78h] BYREF
  __int64 v39; // [rsp+38h] [rbp-70h]
  __int64 UsedPtesHandle; // [rsp+40h] [rbp-68h]
  __int64 v41; // [rsp+48h] [rbp-60h]
  unsigned __int64 v42; // [rsp+50h] [rbp-58h]
  unsigned __int64 v43; // [rsp+58h] [rbp-50h]
  unsigned __int8 v44; // [rsp+B0h] [rbp+8h]
  unsigned __int64 v47; // [rsp+C8h] [rbp+20h]

  v3 = *(unsigned int *)(a2 + 24);
  v4 = *(unsigned __int8 *)(a2 + 32);
  v38 = 0LL;
  v5 = a2;
  v39 = a1 + 1664;
  v6 = 0LL;
  v7 = v3 | (v4 << 32);
  v8 = (unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32;
  v9 = *(unsigned int *)(a2 + 28);
  v41 = 0LL;
  v10 = v9 | v8;
  ProtoPteAddress = MiGetProtoPteAddress(a2, v7, 6, &v38);
  v47 = ProtoPteAddress;
  v12 = *(_QWORD *)(v5 + 80) + 8 * (v10 - v7);
  v42 = v12;
  v13 = v38;
  v14 = 8 * (v7 & 0xFFFFFFFFFLL) - 0x98000000000LL;
  while ( 1 )
  {
    if ( !v13 )
      return v6;
    v15 = v12;
    v16 = *(_QWORD *)(v13 + 8);
    if ( v16 + 8 * (*(unsigned int *)(v13 + 44) - 1LL) <= v12 )
      v15 = v16 + 8 * (*(unsigned int *)(v13 + 44) - 1LL);
    v34 = (*(_BYTE *)(v13 + 34) & 2) == 0;
    v43 = v15;
    if ( v34 )
    {
      v17 = *(unsigned __int16 *)(v13 + 32);
      if ( (v17 & 8) == 0 || (v17 & 0xA) == 0xA )
      {
        v18 = *(_DWORD *)(v13 + 40);
        if ( v18 )
          v16 += 8 * ((unsigned __int64)(unsigned int)((v18 << 9) - 1) >> 12) + 8;
        if ( v16 <= v15 )
          break;
      }
    }
LABEL_50:
    v36 = 8LL * (unsigned int)((__int64)(v15 - ProtoPteAddress + 8) >> 3);
    ProtoPteAddress += v36;
    v14 += v36;
    v47 = ProtoPteAddress;
    if ( ProtoPteAddress > v12 )
      return v6;
    v13 = *(_QWORD *)(v13 + 16);
    v38 = v13;
  }
  if ( ProtoPteAddress < v16 )
  {
    v47 = v16;
    v19 = v16 - ProtoPteAddress;
    ProtoPteAddress = v16;
    v14 += 8 * (v19 >> 3);
  }
  if ( ProtoPteAddress <= v12 )
  {
    v20 = 0LL;
    if ( ProtoPteAddress <= v15 )
    {
      do
      {
        v21 = MI_READ_PTE_LOCK_FREE(ProtoPteAddress);
        if ( (v21 & 1) != 0 )
        {
          LODWORD(v22) = v17 >> 1;
        }
        else
        {
          if ( !v21 )
            break;
          v22 = v21 >> 5;
        }
        if ( (v22 & 0x1F) == 0x18 )
          break;
        v20 = (unsigned int)(v20 + 1);
        ProtoPteAddress += 8LL;
      }
      while ( ProtoPteAddress <= v15 );
      v12 = v42;
      v47 = ProtoPteAddress;
    }
    if ( (v17 & 0xA) != 0xA )
    {
      v6 += (unsigned int)v20;
      v41 = v6;
    }
    if ( !a3 || !(_DWORD)v20 )
    {
      v14 += 8 * v20;
      goto LABEL_50;
    }
    v23 = v17 >> 1;
    if ( (v17 & 8) != 0 )
      LOBYTE(v23) = v23 & 2 | 4;
    v24 = MiSwizzleInvalidPte(32LL * (v23 & 0x1F));
    v25 = v39;
    v26 = 0LL;
    UsedPtesHandle = 0LL;
    v27 = v24;
    v28 = MiLockWorkingSetShared(v39);
    v44 = v28;
    while ( 1 )
    {
      if ( v26 )
      {
        if ( (v14 & 0xFFF) != 0 )
          goto LABEL_35;
        MiUnlockPageTableInternal(v25, v26, v29);
      }
      if ( MiWorkingSetIsContended(v25) || KeShouldYieldProcessor() )
      {
        MiUnlockWorkingSetShared(v25, v28);
        MiLockWorkingSetShared(v25);
      }
      MiMakeSystemAddressValid(v14, 0LL, (*(_DWORD *)(v5 + 48) >> 12) & 0x3F, v28, 0);
      UsedPtesHandle = MiGetUsedPtesHandle((__int64)(v14 << 25) >> 16);
      v26 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
LABEL_35:
      v30 = v27;
      v31 = 0;
      if ( MiPteInShadowRange(v14) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v31 = 1;
          if ( !HIBYTE(word_140C4DF48) )
          {
            v34 = (v27 & 1) == 0;
            goto LABEL_41;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v34 = (v27 & 1) == 0;
LABEL_41:
          if ( !v34 )
            v30 = v27 | 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v14 = v30;
      if ( v31 )
        MiWritePteShadow(v14, v30);
      MiIncreaseUsedPtesCount(UsedPtesHandle, 1LL, v32, v33);
      v5 = a2;
      v14 += 8LL;
      LODWORD(v20) = v20 - 1;
      if ( !(_DWORD)v20 )
      {
        ProtoPteAddress = v47;
        v15 = v43;
        v35 = v39;
        if ( v26 )
          MiUnlockPageTableInternal(v39, v26, v29);
        MiUnlockWorkingSetShared(v35, v44);
        v12 = v42;
        v13 = v38;
        v6 = v41;
        v5 = a2;
        goto LABEL_50;
      }
    }
  }
  return v6;
}
