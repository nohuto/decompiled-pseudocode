/*
 * XREFs of RIMPopulatePointerDevice @ 0x1C016A764
 * Callers:
 *     RIMIDECreatePointerDeviceInfo @ 0x1C016FF48 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C008D7C0 (Win32AllocPool.c)
 *     RIMCheckPressureUsageStatus @ 0x1C0164C68 (RIMCheckPressureUsageStatus.c)
 *     RIMGetDeviceButtons @ 0x1C01665BC (RIMGetDeviceButtons.c)
 *     RIMIsEssentialUsage @ 0x1C01679D4 (RIMIsEssentialUsage.c)
 *     RIMIsInputUsagePresent @ 0x1C016A580 (RIMIsInputUsagePresent.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C016BF38 (rimHidP_GetSpecificValueCaps.c)
 *     RIMIDEValidateLogicalDeviceSize @ 0x1C017258C (RIMIDEValidateLogicalDeviceSize.c)
 *     RIMComputeSpecificHighMetricValue @ 0x1C01879F8 (RIMComputeSpecificHighMetricValue.c)
 *     RIMRetrieveNormalizationRange @ 0x1C0187AF4 (RIMRetrieveNormalizationRange.c)
 */

__int64 __fastcall RIMPopulatePointerDevice(__int64 a1, __int64 a2, __int64 a3, __int16 *a4)
{
  __int16 *v5; // r15
  __int64 v6; // r13
  unsigned int v7; // esi
  int v8; // r8d
  int SpecificValueCaps; // eax
  __int64 v10; // rcx
  _DWORD *v11; // rax
  __int64 v12; // rdi
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned int v16; // r12d
  unsigned int v17; // r14d
  __int16 *v18; // r13
  __int16 v19; // r15
  unsigned __int16 v20; // r15
  __int64 v21; // rcx
  __int16 v22; // ax
  __m128i v23; // xmm5
  __int128 v24; // xmm2
  __int128 v25; // xmm3
  __int128 v26; // xmm4
  __m128i v27; // xmm5
  __int128 v28; // xmm2
  __int128 v29; // xmm3
  __int128 v30; // xmm4
  __int64 v31; // rdx
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  bool v35; // zf
  int v36; // eax
  unsigned int v37; // [rsp+20h] [rbp-E0h]
  unsigned int v39; // [rsp+40h] [rbp-C0h]
  unsigned int v40; // [rsp+44h] [rbp-BCh]
  unsigned int v41; // [rsp+48h] [rbp-B8h]
  int v42; // [rsp+4Ch] [rbp-B4h]
  _OWORD v43[4]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v44; // [rsp+A0h] [rbp-60h]
  _OWORD v45[4]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v46; // [rsp+F0h] [rbp-10h]
  _OWORD v47[4]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v48; // [rsp+140h] [rbp+40h]
  unsigned __int16 v50; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v51; // [rsp+1B0h] [rbp+B0h]
  __int16 *v52; // [rsp+1B8h] [rbp+B8h]

  v52 = a4;
  v51 = a3;
  v5 = a4;
  v6 = a3;
  v7 = 0;
  v41 = -1;
  v8 = *(unsigned __int16 *)(a2 + 728);
  v40 = -1;
  v50 = 0;
  SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 0, v8, 0, 0LL, (__int64)&v50, a3);
  if ( SpecificValueCaps && SpecificValueCaps != -1072627705 )
    return 0LL;
  v10 = 6LL;
  v11 = (_DWORD *)(a2 + 32);
  do
  {
    *v11 = -1;
    v11 += 4;
    --v10;
  }
  while ( v10 );
  v12 = Win32AllocPool(72LL * v50, 0x6A6E6952u);
  if ( !v12 )
    return 0LL;
  v42 = rimHidP_GetSpecificValueCaps(0, 0, *(unsigned __int16 *)(a2 + 728), 0, v12, (__int64)&v50, v6);
  if ( v42 >= 0 )
  {
    v16 = 0;
    v17 = 0;
    v39 = 0;
    if ( v50 )
    {
      v18 = v52;
      do
      {
        if ( v17 >= 6 )
          break;
        v19 = *v18;
        if ( *v18 == 2 )
          v19 = 1;
        v20 = *(_WORD *)(v12 + 72LL * v16 + 56) | ((*(_WORD *)(v12 + 72LL * v16) | (unsigned __int16)(16 * v19)) << 8);
        if ( (unsigned int)RIMIsEssentialUsage(v20) )
        {
          v21 = 60LL * v39;
          *(_WORD *)(v21 + a2 + 352) = *(_WORD *)(v12 + 72LL * v16);
          *(_WORD *)(v21 + a2 + 364) = *(_WORD *)(v12 + 72LL * v16 + 56);
          *(_DWORD *)(v21 + a2 + 356) = *(unsigned __int8 *)(v12 + 72LL * v16 + 2);
          *(_WORD *)(v21 + a2 + 362) = *(_WORD *)(v12 + 72LL * v16 + 10);
          *(_DWORD *)(v21 + a2 + 368) = *(unsigned __int8 *)(v12 + 72LL * v16 + 16);
          *(_DWORD *)(v21 + a2 + 384) = *(_DWORD *)(v12 + 72LL * v16 + 40);
          *(_DWORD *)(v21 + a2 + 388) = *(_DWORD *)(v12 + 72LL * v16 + 44);
          *(_DWORD *)(v21 + a2 + 392) = *(_DWORD *)(v12 + 72LL * v16 + 48);
          *(_DWORD *)(v21 + a2 + 396) = *(_DWORD *)(v12 + 72LL * v16 + 52);
          *(_WORD *)(v21 + a2 + 408) = *(_WORD *)(v12 + 72LL * v16 + 18);
          if ( (*(_DWORD *)(a2 + 312) & 0x2000) != 0 )
          {
            v22 = *(_WORD *)(v12 + 72LL * v16 + 56);
            if ( v22 == 48 && *(_WORD *)(v12 + 72LL * v16) == 1 )
            {
              v23 = *(__m128i *)(v12 + 72LL * v16 + 48);
              v41 = v16;
              v24 = *(_OWORD *)(v12 + 72LL * v16);
              v25 = *(_OWORD *)(v12 + 72LL * v16 + 16);
              v26 = *(_OWORD *)(v12 + 72LL * v16 + 32);
              v44 = *(_QWORD *)(v12 + 72LL * v16 + 64);
              v43[0] = v24;
              v43[1] = v25;
              v43[2] = v26;
              v43[3] = v23;
              *(_DWORD *)(a2 + 148) = RIMComputeSpecificHighMetricValue(
                                        (unsigned int)(_mm_cvtsi128_si32(_mm_srli_si128(v23, 4)) - _mm_cvtsi128_si32(v23)),
                                        v43)
                                    + 1;
              *(_DWORD *)(a2 + 124) = *(_DWORD *)(v12 + 72LL * v16 + 40);
              *(_DWORD *)(a2 + 132) = *(_DWORD *)(v12 + 72LL * v16 + 44) + 1;
              v22 = *(_WORD *)(v12 + 72LL * v16 + 56);
            }
            if ( v22 == 49 && *(_WORD *)(v12 + 72LL * v16) == 1 )
            {
              v27 = *(__m128i *)(v12 + 72LL * v16 + 48);
              v40 = v16;
              v28 = *(_OWORD *)(v12 + 72LL * v16);
              v29 = *(_OWORD *)(v12 + 72LL * v16 + 16);
              v30 = *(_OWORD *)(v12 + 72LL * v16 + 32);
              v46 = *(_QWORD *)(v12 + 72LL * v16 + 64);
              v45[0] = v28;
              v45[1] = v29;
              v45[2] = v30;
              v45[3] = v27;
              *(_DWORD *)(a2 + 152) = RIMComputeSpecificHighMetricValue(
                                        (unsigned int)(_mm_cvtsi128_si32(_mm_srli_si128(v27, 4)) - _mm_cvtsi128_si32(v27)),
                                        v45)
                                    + 1;
              *(_DWORD *)(a2 + 128) = *(_DWORD *)(v12 + 72LL * v16 + 40);
              *(_DWORD *)(a2 + 136) = *(_DWORD *)(v12 + 72LL * v16 + 44) + 1;
            }
          }
          RIMCheckPressureUsageStatus(a1, a2, v20);
          v31 = 16LL * v39;
          *(_DWORD *)(a2 + 16 * (v39 + 2LL)) = v39;
          *(_WORD *)(v31 + a2 + 28) = *(_WORD *)(v12 + 72LL * v16);
          *(_WORD *)(v31 + a2 + 30) = *(_WORD *)(v12 + 72LL * v16 + 56);
          v32 = *(_OWORD *)(v12 + 72LL * v16 + 16);
          v47[0] = *(_OWORD *)(v12 + 72LL * v16);
          v33 = *(_OWORD *)(v12 + 72LL * v16 + 32);
          v47[1] = v32;
          v34 = *(_OWORD *)(v12 + 72LL * v16 + 48);
          v47[2] = v33;
          v48 = *(_QWORD *)(v12 + 72LL * v16 + 64);
          v47[3] = v34;
          RIMRetrieveNormalizationRange(v20, v47, a2 + v31 + 36);
          v17 = ++v39;
        }
        else
        {
          v17 = v39;
        }
        ++v16;
      }
      while ( v16 < v50 );
      v6 = v51;
      v5 = v52;
    }
    if ( v5[1] == 13 && *v5 == 2 && RIMIsInputUsagePresent(v6, v14, 0x5Bu) && RIMIsInputUsagePresent(v6, v14, 0x91u) )
      *(_DWORD *)(a2 + 312) |= 0x10000u;
    v35 = (*(_DWORD *)(a2 + 312) & 0x2000) == 0;
    *(_DWORD *)(a2 + 724) = v17;
    if ( v35 )
      v36 = v42;
    else
      v36 = RIMIDEValidateLogicalDeviceSize(a2, v41, v40);
    if ( v36 >= 0 && (int)RIMGetDeviceButtons(a1, a2, v6, v5, v37) >= 0 )
      v7 = 1;
  }
  Win32FreePool(v12, v14, v15);
  return v7;
}
