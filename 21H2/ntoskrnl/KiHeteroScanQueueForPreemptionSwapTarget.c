/*
 * XREFs of KiHeteroScanQueueForPreemptionSwapTarget @ 0x140574294
 * Callers:
 *     KiCheckPreferredHeteroProcessor @ 0x140308640 (KiCheckPreferredHeteroProcessor.c)
 *     KiHeteroAttemptPreemptionSwap @ 0x140573DBC (KiHeteroAttemptPreemptionSwap.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     KiFindBiasedSetMember @ 0x14056AAA4 (KiFindBiasedSetMember.c)
 *     KiHeteroComputeThreadImportance @ 0x140573FB4 (KiHeteroComputeThreadImportance.c)
 *     KiHeteroIsSwapBeneficialForPerformance @ 0x140574244 (KiHeteroIsSwapBeneficialForPerformance.c)
 */

__int64 __fastcall KiHeteroScanQueueForPreemptionSwapTarget(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v7; // rbp
  unsigned int v8; // edi
  _BYTE *v9; // r13
  unsigned __int64 v10; // r11
  unsigned int v11; // edi
  unsigned __int16 v12; // r9
  __int64 v13; // r15
  unsigned int v14; // esi
  __int64 v15; // rax
  __int64 v16; // r10
  unsigned int v17; // ecx
  unsigned __int16 v18; // ax
  __int16 v19; // si
  unsigned __int64 v20; // rbx
  unsigned int i; // r9d
  __int64 v22; // r10
  unsigned int v23; // esi
  __int64 v24; // r8
  unsigned __int8 v25; // r9
  unsigned __int8 v26; // dl
  char v27; // dl
  _BYTE *v28; // r10
  int v29; // ecx
  int v30; // ebx
  __int64 v32; // [rsp+20h] [rbp-108h]
  int v33; // [rsp+28h] [rbp-100h]
  _BYTE *v36; // [rsp+40h] [rbp-E8h]
  _BYTE v37[128]; // [rsp+50h] [rbp-D8h] BYREF

  v5 = *(unsigned __int8 *)(a1 + 657);
  v7 = v5;
  v8 = *(unsigned __int8 *)(a1 + 656);
  v32 = a4 & *(_QWORD *)(a1 + 664);
  v33 = *(unsigned __int8 *)(a1 + 657);
  v36 = &v37[v5];
  memmove(&v37[v5], (const void *)(a1 + 528), *(unsigned __int8 *)(a1 + 656));
  v9 = &v37[v5 + 64];
  memmove(&v37[v5 + 64], (const void *)(a1 + 592), v8);
  v10 = 0LL;
  v11 = v5 + v8;
  v12 = -1;
  v13 = 0LL;
  v14 = v5;
  if ( (unsigned int)v5 < v11 )
  {
    v15 = v32;
    v16 = (unsigned int)v5;
    do
    {
      if ( (v15 & (1LL << v14)) != 0 )
      {
        if ( (v37[v16] & 0x7F) <= *(char *)a5 )
        {
          v17 = v37[v16 + 64] & 7;
          if ( v17 <= 2 || v17 == 5 )
          {
            v18 = KiHeteroComputeThreadImportance(v17, v37[v16] & 0x7F);
            if ( v18 <= *(_WORD *)(a5 + 18) )
            {
              v13 |= 1LL << v14;
              if ( v18 < v12 )
                v12 = v18;
            }
          }
        }
        v15 = v32;
      }
      ++v14;
      ++v16;
    }
    while ( v14 < v11 );
  }
  if ( !v13 )
    return 0LL;
  v19 = *(_WORD *)(a5 + 18);
  if ( v12 == v19 )
  {
    if ( KiHgsPlusEnabled == (_BYTE)v10 )
      return 0LL;
    v20 = v10;
    v23 = v5;
    if ( (unsigned int)v5 < v11 )
    {
      v24 = a3;
      do
      {
        if ( (v13 & (1LL << v23)) != 0 )
        {
          v25 = *(_BYTE *)(a5 + 16);
          v26 = (*v9 >> 3) & 7;
          if ( v26 != v25
            && KiHeteroIsSwapBeneficialForPerformance(
                 KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(a2 + 208) + v23]],
                 v26,
                 v24,
                 v25) )
          {
            v20 |= 1LL << v23;
          }
        }
        ++v23;
        ++v9;
      }
      while ( v23 < v11 );
      LODWORD(v5) = v33;
    }
  }
  else
  {
    v20 = v10;
    for ( i = v5; i < v11; ++v7 )
    {
      if ( (v13 & (1LL << i)) != 0
        && (unsigned __int16)KiHeteroComputeThreadImportance(v37[v7 + 64] & 7, v37[v7] & 0x7F) != v19 )
      {
        v20 |= v22;
      }
      ++i;
    }
  }
  if ( !v20 )
    return 0LL;
  v27 = 63;
  if ( (unsigned int)v5 < v11 )
  {
    v28 = v36;
    do
    {
      if ( (v20 & (1LL << v5)) != 0 )
      {
        v29 = *v28 & 0x7F;
        if ( v29 >= v27 )
        {
          if ( v29 == v27 )
            v10 |= 1LL << v5;
        }
        else
        {
          v10 = 1LL << v5;
          v27 = *v28 & 0x7F;
        }
      }
      LODWORD(v5) = v5 + 1;
      ++v28;
    }
    while ( (unsigned int)v5 < v11 );
  }
  v30 = *(unsigned __int8 *)(a2 + 208);
  return KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * v30
                                                             + (unsigned int)KiFindBiasedSetMember(
                                                                               v10,
                                                                               *(unsigned __int8 *)(a2 + 209))]];
}
