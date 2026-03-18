/*
 * XREFs of MiUpdatePrivateDemandZeroView @ 0x140527EC8
 * Callers:
 *     MiMapViewOfImageSection @ 0x140601270 (MiMapViewOfImageSection.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiGetUsedPtesHandle @ 0x140245EC0 (MiGetUsedPtesHandle.c)
 *     MiMakeSystemAddressValid @ 0x1402556E0 (MiMakeSystemAddressValid.c)
 *     MiIncreaseUsedPtesCount @ 0x1402562E0 (MiIncreaseUsedPtesCount.c)
 *     MiWorkingSetIsContended @ 0x1402589C0 (MiWorkingSetIsContended.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     MiGetProtoPteAddress @ 0x14029A830 (MiGetProtoPteAddress.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     MiSwizzleInvalidPte @ 0x1402B6040 (MiSwizzleInvalidPte.c)
 *     KeShouldYieldProcessor @ 0x140327BB0 (KeShouldYieldProcessor.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
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
  unsigned __int64 v29; // rbx
  int v30; // r13d
  __int64 v31; // r8
  bool v32; // zf
  __int64 v33; // rbx
  __int64 v34; // rcx
  __int64 v36; // [rsp+30h] [rbp-78h] BYREF
  __int64 v37; // [rsp+38h] [rbp-70h]
  __int64 UsedPtesHandle; // [rsp+40h] [rbp-68h]
  __int64 v39; // [rsp+48h] [rbp-60h]
  unsigned __int64 v40; // [rsp+50h] [rbp-58h]
  unsigned __int64 v41; // [rsp+58h] [rbp-50h]
  unsigned __int8 v42; // [rsp+B0h] [rbp+8h]
  unsigned __int64 v45; // [rsp+C8h] [rbp+20h]

  v3 = *(unsigned int *)(a2 + 24);
  v4 = *(unsigned __int8 *)(a2 + 32);
  v36 = 0LL;
  v5 = a2;
  v37 = a1 + 1664;
  v6 = 0LL;
  v7 = v3 | (v4 << 32);
  v8 = (unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32;
  v9 = *(unsigned int *)(a2 + 28);
  v39 = 0LL;
  v10 = v9 | v8;
  ProtoPteAddress = MiGetProtoPteAddress(a2, v7, 6, &v36);
  v45 = ProtoPteAddress;
  v12 = *(_QWORD *)(v5 + 80) + 8 * (v10 - v7);
  v40 = v12;
  v13 = v36;
  v14 = 8 * (v7 & 0xFFFFFFFFFLL) - 0x98000000000LL;
  while ( 1 )
  {
    if ( !v13 )
      return v6;
    v15 = v12;
    v16 = *(_QWORD *)(v13 + 8);
    if ( v16 + 8 * (*(unsigned int *)(v13 + 44) - 1LL) <= v12 )
      v15 = v16 + 8 * (*(unsigned int *)(v13 + 44) - 1LL);
    v32 = (*(_BYTE *)(v13 + 34) & 2) == 0;
    v41 = v15;
    if ( v32 )
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
    v34 = 8LL * (unsigned int)((__int64)(v15 - ProtoPteAddress + 8) >> 3);
    ProtoPteAddress += v34;
    v14 += v34;
    v45 = ProtoPteAddress;
    if ( ProtoPteAddress > v12 )
      return v6;
    v13 = *(_QWORD *)(v13 + 16);
    v36 = v13;
  }
  if ( ProtoPteAddress < v16 )
  {
    v45 = v16;
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
      v12 = v40;
      v45 = ProtoPteAddress;
    }
    if ( (v17 & 0xA) != 0xA )
    {
      v6 += (unsigned int)v20;
      v39 = v6;
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
    v25 = v37;
    v26 = 0LL;
    UsedPtesHandle = 0LL;
    v27 = v24;
    v28 = MiLockWorkingSetShared(v37);
    v42 = v28;
    while ( 1 )
    {
      if ( v26 )
      {
        if ( (v14 & 0xFFF) != 0 )
          goto LABEL_35;
        MiUnlockPageTableInternal(v25, v26);
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
      v29 = v27;
      v30 = 0;
      if ( MiPteInShadowRange(v14) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v30 = 1;
          if ( !HIBYTE(word_140C4DE08) )
          {
            v32 = (v27 & 1) == 0;
            goto LABEL_41;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v32 = (v27 & 1) == 0;
LABEL_41:
          if ( !v32 )
            v29 = v27 | 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v14 = v29;
      if ( v30 )
        MiWritePteShadow(v14, v29, v31);
      MiIncreaseUsedPtesCount(UsedPtesHandle, 1LL);
      v5 = a2;
      v14 += 8LL;
      LODWORD(v20) = v20 - 1;
      if ( !(_DWORD)v20 )
      {
        ProtoPteAddress = v45;
        v15 = v41;
        v33 = v37;
        if ( v26 )
          MiUnlockPageTableInternal(v37, v26);
        MiUnlockWorkingSetShared(v33, v42);
        v12 = v40;
        v13 = v36;
        v6 = v39;
        v5 = a2;
        goto LABEL_50;
      }
    }
  }
  return v6;
}
