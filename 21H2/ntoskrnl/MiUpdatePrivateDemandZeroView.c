/*
 * XREFs of MiUpdatePrivateDemandZeroView @ 0x140593E88
 * Callers:
 *     MiMapViewOfImageSection @ 0x1406F9990 (MiMapViewOfImageSection.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     MiIncreaseUsedPtesCount @ 0x14028FB74 (MiIncreaseUsedPtesCount.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiSwizzleInvalidPte @ 0x1402CCC50 (MiSwizzleInvalidPte.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MiGetUsedPtesHandle @ 0x1402D03D0 (MiGetUsedPtesHandle.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x140319600 (MiGetProtoPteAddress.c)
 *     MiMakeSystemAddressValid @ 0x14032CE60 (MiMakeSystemAddressValid.c)
 *     MiWorkingSetIsContended @ 0x1403531F0 (MiWorkingSetIsContended.c)
 */

__int64 __fastcall MiUpdatePrivateDemandZeroView(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  __int64 v4; // r13
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v8; // r12
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rbx
  unsigned __int64 ProtoPteAddress; // rsi
  unsigned __int64 v13; // r8
  __int64 v14; // rbp
  ULONG_PTR v15; // r14
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rdx
  bool v18; // zf
  unsigned int v19; // ebx
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // r15
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned int v25; // ecx
  unsigned __int64 v26; // r12
  unsigned __int64 UsedPtesHandle; // rdi
  __int64 v28; // rbx
  unsigned __int8 v29; // bp
  __int64 v30; // r9
  __int64 v31; // rcx
  __int64 v33; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int64 v34; // [rsp+38h] [rbp-70h]
  __int64 v35; // [rsp+40h] [rbp-68h]
  __int64 v36; // [rsp+48h] [rbp-60h]
  unsigned __int64 v37; // [rsp+50h] [rbp-58h]
  unsigned __int8 v38; // [rsp+B0h] [rbp+8h]
  unsigned __int64 v41; // [rsp+C8h] [rbp+20h]

  v3 = *(unsigned int *)(a2 + 24);
  v4 = a1 + 1664;
  v5 = *(unsigned __int8 *)(a2 + 32);
  v6 = *(unsigned __int8 *)(a2 + 33);
  v33 = 0LL;
  v8 = 0LL;
  v9 = v3 | (v5 << 32);
  v10 = *(unsigned int *)(a2 + 28);
  v35 = 0LL;
  v11 = v10 | (v6 << 32);
  ProtoPteAddress = MiGetProtoPteAddress(a2, v9, 6, &v33);
  v41 = ProtoPteAddress;
  v13 = *(_QWORD *)(a2 + 80) + 8 * (v11 - v9);
  v34 = v13;
  v14 = v33;
  v15 = 8 * (v9 & 0xFFFFFFFFFLL) - 0x98000000000LL;
  while ( 1 )
  {
    v36 = v14;
    if ( !v14 )
      return v8;
    v16 = v13;
    v17 = *(_QWORD *)(v14 + 8);
    if ( v17 + 8 * (*(unsigned int *)(v14 + 44) - 1LL) <= v13 )
      v16 = v17 + 8 * (*(unsigned int *)(v14 + 44) - 1LL);
    v18 = (*(_BYTE *)(v14 + 34) & 2) == 0;
    v37 = v16;
    if ( v18 )
    {
      v19 = *(unsigned __int16 *)(v14 + 32);
      if ( (v19 & 8) == 0 || (v19 & 0xA) == 0xA )
      {
        v20 = *(_DWORD *)(v14 + 40);
        if ( v20 )
          v17 += 8 * ((unsigned __int64)(unsigned int)((v20 << 9) - 1) >> 12) + 8;
        if ( v17 <= v16 )
          break;
      }
    }
LABEL_40:
    v31 = 8LL * (unsigned int)((__int64)(v16 - ProtoPteAddress + 8) >> 3);
    ProtoPteAddress += v31;
    v15 += v31;
    v41 = ProtoPteAddress;
    if ( ProtoPteAddress > v13 )
      return v8;
    v14 = *(_QWORD *)(v14 + 16);
    v33 = v14;
  }
  if ( ProtoPteAddress < v17 )
  {
    v41 = v17;
    v21 = v17 - ProtoPteAddress;
    ProtoPteAddress = v17;
    v15 += 8 * (v21 >> 3);
  }
  if ( ProtoPteAddress <= v13 )
  {
    v22 = 0LL;
    if ( ProtoPteAddress <= v16 )
    {
      do
      {
        v23 = MI_READ_PTE_LOCK_FREE(ProtoPteAddress);
        if ( (v23 & 1) != 0 )
        {
          LODWORD(v24) = v19 >> 1;
        }
        else
        {
          if ( !v23 )
            break;
          v24 = v23 >> 5;
        }
        if ( (v24 & 0x1F) == 0x18 )
          break;
        v22 = (unsigned int)(v22 + 1);
        ProtoPteAddress += 8LL;
      }
      while ( ProtoPteAddress <= v16 );
      v13 = v34;
      v41 = ProtoPteAddress;
    }
    if ( (v19 & 0xA) != 0xA )
    {
      v8 += (unsigned int)v22;
      v35 = v8;
    }
    if ( !a3 || !(_DWORD)v22 )
    {
      v15 += 8 * v22;
      goto LABEL_40;
    }
    v25 = v19 >> 1;
    if ( (v19 & 8) != 0 )
      LOBYTE(v25) = v25 & 2 | 4;
    v26 = 0LL;
    UsedPtesHandle = 0LL;
    v28 = MiSwizzleInvalidPte(32LL * (v25 & 0x1F));
    v29 = MiLockWorkingSetShared(v4);
    v38 = v29;
    while ( 1 )
    {
      if ( !v26 )
        goto LABEL_31;
      if ( (v15 & 0xFFF) == 0 )
        break;
LABEL_35:
      *(_QWORD *)v15 = v28;
      MiIncreaseUsedPtesCount(UsedPtesHandle, 1u);
      v15 += 8LL;
      LODWORD(v22) = v22 - 1;
      if ( !(_DWORD)v22 )
      {
        ProtoPteAddress = v41;
        v16 = v37;
        v14 = v36;
        if ( v26 )
          MiUnlockPageTableInternal(v4, v26);
        MiUnlockWorkingSetShared(v4, v38);
        v13 = v34;
        v8 = v35;
        goto LABEL_40;
      }
    }
    MiUnlockPageTableInternal(v4, v26);
LABEL_31:
    if ( MiWorkingSetIsContended(v4) || KeShouldYieldProcessor() )
    {
      MiUnlockWorkingSetShared(v4, v29);
      MiLockWorkingSetShared(v4);
    }
    LOBYTE(v30) = v29;
    MiMakeSystemAddressValid(v15, 0LL, (*(_DWORD *)(a2 + 48) >> 12) & 0x7F, v30, 0);
    UsedPtesHandle = MiGetUsedPtesHandle((__int64)(v15 << 25) >> 16);
    v26 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    goto LABEL_35;
  }
  return v8;
}
