/*
 * XREFs of MiUpdatePrivateDemandZeroView @ 0x14052D5D8
 * Callers:
 *     MiMapViewOfImageSection @ 0x140686B20 (MiMapViewOfImageSection.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140211F40 (KeShouldYieldProcessor.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiIncreaseUsedPtesCount @ 0x140314524 (MiIncreaseUsedPtesCount.c)
 *     MiWorkingSetIsContended @ 0x140316520 (MiWorkingSetIsContended.c)
 *     MiGetUsedPtesHandle @ 0x1403177B0 (MiGetUsedPtesHandle.c)
 *     MiMakeSystemAddressValid @ 0x1403190E0 (MiMakeSystemAddressValid.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x14033B890 (MiGetProtoPteAddress.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
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
  __int64 v28; // rdx
  __int64 v29; // r8
  _DWORD *v30; // r9
  unsigned __int8 v31; // si
  __int64 v32; // rdx
  __int64 v33; // r8
  _DWORD *v34; // r9
  unsigned __int64 v35; // rbx
  int v36; // r13d
  __int64 v37; // r8
  __int64 v38; // r9
  bool v39; // zf
  __int64 v40; // rbx
  __int64 v41; // rcx
  __int64 v43; // [rsp+30h] [rbp-78h] BYREF
  __int64 v44; // [rsp+38h] [rbp-70h]
  __int64 UsedPtesHandle; // [rsp+40h] [rbp-68h]
  __int64 v46; // [rsp+48h] [rbp-60h]
  unsigned __int64 v47; // [rsp+50h] [rbp-58h]
  unsigned __int64 v48; // [rsp+58h] [rbp-50h]
  unsigned __int8 v49; // [rsp+B0h] [rbp+8h]
  unsigned __int64 v52; // [rsp+C8h] [rbp+20h]

  v3 = *(unsigned int *)(a2 + 24);
  v4 = *(unsigned __int8 *)(a2 + 32);
  v43 = 0LL;
  v5 = a2;
  v44 = a1 + 1664;
  v6 = 0LL;
  v7 = v3 | (v4 << 32);
  v8 = (unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32;
  v9 = *(unsigned int *)(a2 + 28);
  v46 = 0LL;
  v10 = v9 | v8;
  ProtoPteAddress = MiGetProtoPteAddress(a2, v7, 6, &v43);
  v52 = ProtoPteAddress;
  v12 = *(_QWORD *)(v5 + 80) + 8 * (v10 - v7);
  v47 = v12;
  v13 = v43;
  v14 = 8 * (v7 & 0xFFFFFFFFFLL) - 0x98000000000LL;
  while ( 1 )
  {
    if ( !v13 )
      return v6;
    v15 = v12;
    v16 = *(_QWORD *)(v13 + 8);
    if ( v16 + 8 * (*(unsigned int *)(v13 + 44) - 1LL) <= v12 )
      v15 = v16 + 8 * (*(unsigned int *)(v13 + 44) - 1LL);
    v39 = (*(_BYTE *)(v13 + 34) & 2) == 0;
    v48 = v15;
    if ( v39 )
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
    v41 = 8LL * (unsigned int)((__int64)(v15 - ProtoPteAddress + 8) >> 3);
    ProtoPteAddress += v41;
    v14 += v41;
    v52 = ProtoPteAddress;
    if ( ProtoPteAddress > v12 )
      return v6;
    v13 = *(_QWORD *)(v13 + 16);
    v43 = v13;
  }
  if ( ProtoPteAddress < v16 )
  {
    v52 = v16;
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
      v12 = v47;
      v52 = ProtoPteAddress;
    }
    if ( (v17 & 0xA) != 0xA )
    {
      v6 += (unsigned int)v20;
      v46 = v6;
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
    v25 = v44;
    v26 = 0LL;
    UsedPtesHandle = 0LL;
    v27 = v24;
    v31 = MiLockWorkingSetShared(v44, v28, v29, v30);
    v49 = v31;
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
        MiUnlockWorkingSetShared(v25, v31);
        MiLockWorkingSetShared(v25, v32, v33, v34);
      }
      MiMakeSystemAddressValid(v14, 0LL, (*(_DWORD *)(v5 + 48) >> 12) & 0x3F, v31, 0);
      UsedPtesHandle = MiGetUsedPtesHandle((__int64)(v14 << 25) >> 16);
      v26 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
LABEL_35:
      v35 = v27;
      v36 = 0;
      if ( MiPteInShadowRange(v14) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v36 = 1;
          if ( !HIBYTE(word_140C4E048) )
          {
            v39 = (v27 & 1) == 0;
            goto LABEL_41;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v39 = (v27 & 1) == 0;
LABEL_41:
          if ( !v39 )
            v35 = v27 | 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v14 = v35;
      if ( v36 )
        MiWritePteShadow(v14, v35);
      MiIncreaseUsedPtesCount(UsedPtesHandle, 1LL, v37, v38);
      v5 = a2;
      v14 += 8LL;
      LODWORD(v20) = v20 - 1;
      if ( !(_DWORD)v20 )
      {
        ProtoPteAddress = v52;
        v15 = v48;
        v40 = v44;
        if ( v26 )
          MiUnlockPageTableInternal(v44, v26);
        MiUnlockWorkingSetShared(v40, v49);
        v12 = v47;
        v13 = v43;
        v6 = v46;
        v5 = a2;
        goto LABEL_50;
      }
    }
  }
  return v6;
}
