/*
 * XREFs of RIMPopulatePointerDevice @ 0x1C0161EB4
 * Callers:
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0167698 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     Win32AllocPool @ 0x1C003C610 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     RIMCheckPressureUsageStatus @ 0x1C015C3B8 (RIMCheckPressureUsageStatus.c)
 *     RIMGetDeviceButtons @ 0x1C015DD0C (RIMGetDeviceButtons.c)
 *     RIMIsEssentialUsage @ 0x1C015F124 (RIMIsEssentialUsage.c)
 *     RIMIsInputUsagePresent @ 0x1C0161CD0 (RIMIsInputUsagePresent.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C0163688 (rimHidP_GetSpecificValueCaps.c)
 *     RIMIDEValidateLogicalDeviceSize @ 0x1C0169CDC (RIMIDEValidateLogicalDeviceSize.c)
 *     RIMComputeSpecificHighMetricValue @ 0x1C017F8C8 (RIMComputeSpecificHighMetricValue.c)
 *     RIMRetrieveNormalizationRange @ 0x1C017F9C4 (RIMRetrieveNormalizationRange.c)
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
  unsigned int v15; // r12d
  unsigned int v16; // r14d
  __int16 *v17; // r13
  __int16 v18; // r15
  unsigned __int16 v19; // r15
  __int64 v20; // rcx
  __int16 v21; // ax
  __m128i v22; // xmm5
  __int128 v23; // xmm2
  __int128 v24; // xmm3
  __int128 v25; // xmm4
  __m128i v26; // xmm5
  __int128 v27; // xmm2
  __int128 v28; // xmm3
  __int128 v29; // xmm4
  __int64 v30; // rdx
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int64 v34; // rdx
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
    v15 = 0;
    v16 = 0;
    v39 = 0;
    if ( v50 )
    {
      v17 = v52;
      do
      {
        if ( v16 >= 6 )
          break;
        v18 = *v17;
        if ( *v17 == 2 )
          v18 = 1;
        v19 = *(_WORD *)(v12 + 72LL * v15 + 56) | ((*(_WORD *)(v12 + 72LL * v15) | (unsigned __int16)(16 * v18)) << 8);
        if ( (unsigned int)RIMIsEssentialUsage(v19) )
        {
          v20 = 60LL * v39;
          *(_WORD *)(v20 + a2 + 352) = *(_WORD *)(v12 + 72LL * v15);
          *(_WORD *)(v20 + a2 + 364) = *(_WORD *)(v12 + 72LL * v15 + 56);
          *(_DWORD *)(v20 + a2 + 356) = *(unsigned __int8 *)(v12 + 72LL * v15 + 2);
          *(_WORD *)(v20 + a2 + 362) = *(_WORD *)(v12 + 72LL * v15 + 10);
          *(_DWORD *)(v20 + a2 + 368) = *(unsigned __int8 *)(v12 + 72LL * v15 + 16);
          *(_DWORD *)(v20 + a2 + 384) = *(_DWORD *)(v12 + 72LL * v15 + 40);
          *(_DWORD *)(v20 + a2 + 388) = *(_DWORD *)(v12 + 72LL * v15 + 44);
          *(_DWORD *)(v20 + a2 + 392) = *(_DWORD *)(v12 + 72LL * v15 + 48);
          *(_DWORD *)(v20 + a2 + 396) = *(_DWORD *)(v12 + 72LL * v15 + 52);
          *(_WORD *)(v20 + a2 + 408) = *(_WORD *)(v12 + 72LL * v15 + 18);
          if ( (*(_DWORD *)(a2 + 312) & 0x2000) != 0 )
          {
            v21 = *(_WORD *)(v12 + 72LL * v15 + 56);
            if ( v21 == 48 && *(_WORD *)(v12 + 72LL * v15) == 1 )
            {
              v22 = *(__m128i *)(v12 + 72LL * v15 + 48);
              v41 = v15;
              v23 = *(_OWORD *)(v12 + 72LL * v15);
              v24 = *(_OWORD *)(v12 + 72LL * v15 + 16);
              v25 = *(_OWORD *)(v12 + 72LL * v15 + 32);
              v44 = *(_QWORD *)(v12 + 72LL * v15 + 64);
              v43[0] = v23;
              v43[1] = v24;
              v43[2] = v25;
              v43[3] = v22;
              *(_DWORD *)(a2 + 148) = RIMComputeSpecificHighMetricValue(
                                        (unsigned int)(_mm_cvtsi128_si32(_mm_srli_si128(v22, 4)) - _mm_cvtsi128_si32(v22)),
                                        v43)
                                    + 1;
              *(_DWORD *)(a2 + 124) = *(_DWORD *)(v12 + 72LL * v15 + 40);
              *(_DWORD *)(a2 + 132) = *(_DWORD *)(v12 + 72LL * v15 + 44) + 1;
              v21 = *(_WORD *)(v12 + 72LL * v15 + 56);
            }
            if ( v21 == 49 && *(_WORD *)(v12 + 72LL * v15) == 1 )
            {
              v26 = *(__m128i *)(v12 + 72LL * v15 + 48);
              v40 = v15;
              v27 = *(_OWORD *)(v12 + 72LL * v15);
              v28 = *(_OWORD *)(v12 + 72LL * v15 + 16);
              v29 = *(_OWORD *)(v12 + 72LL * v15 + 32);
              v46 = *(_QWORD *)(v12 + 72LL * v15 + 64);
              v45[0] = v27;
              v45[1] = v28;
              v45[2] = v29;
              v45[3] = v26;
              *(_DWORD *)(a2 + 152) = RIMComputeSpecificHighMetricValue(
                                        (unsigned int)(_mm_cvtsi128_si32(_mm_srli_si128(v26, 4)) - _mm_cvtsi128_si32(v26)),
                                        v45)
                                    + 1;
              *(_DWORD *)(a2 + 128) = *(_DWORD *)(v12 + 72LL * v15 + 40);
              *(_DWORD *)(a2 + 136) = *(_DWORD *)(v12 + 72LL * v15 + 44) + 1;
            }
          }
          RIMCheckPressureUsageStatus(a1, a2, v19);
          v30 = 16LL * v39;
          *(_DWORD *)(a2 + 16 * (v39 + 2LL)) = v39;
          *(_WORD *)(v30 + a2 + 28) = *(_WORD *)(v12 + 72LL * v15);
          *(_WORD *)(v30 + a2 + 30) = *(_WORD *)(v12 + 72LL * v15 + 56);
          v31 = *(_OWORD *)(v12 + 72LL * v15 + 16);
          v47[0] = *(_OWORD *)(v12 + 72LL * v15);
          v32 = *(_OWORD *)(v12 + 72LL * v15 + 32);
          v47[1] = v31;
          v33 = *(_OWORD *)(v12 + 72LL * v15 + 48);
          v47[2] = v32;
          v48 = *(_QWORD *)(v12 + 72LL * v15 + 64);
          v47[3] = v33;
          RIMRetrieveNormalizationRange(v19, v47, a2 + v30 + 36);
          v16 = ++v39;
        }
        else
        {
          v16 = v39;
        }
        ++v15;
      }
      while ( v15 < v50 );
      v6 = v51;
      v5 = v52;
    }
    if ( v5[1] == 13 && *v5 == 2 && RIMIsInputUsagePresent(v6, v14, 0x5Bu) && RIMIsInputUsagePresent(v6, v34, 0x91u) )
      *(_DWORD *)(a2 + 312) |= 0x10000u;
    v35 = (*(_DWORD *)(a2 + 312) & 0x2000) == 0;
    *(_DWORD *)(a2 + 724) = v16;
    if ( v35 )
      v36 = v42;
    else
      v36 = RIMIDEValidateLogicalDeviceSize(a2, v41, v40);
    if ( v36 >= 0 && (int)RIMGetDeviceButtons(a1, a2, v6, v5, v37) >= 0 )
      v7 = 1;
  }
  Win32FreePool(v12);
  return v7;
}
