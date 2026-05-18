/*
 * XREFs of sub_1800E9A20 @ 0x1800E9A20
 * Callers:
 *     sub_18007C500 @ 0x18007C500 (sub_18007C500.c)
 *     sub_18007C7D8 @ 0x18007C7D8 (sub_18007C7D8.c)
 *     sub_18007D560 @ 0x18007D560 (sub_18007D560.c)
 *     sub_18007FB54 @ 0x18007FB54 (sub_18007FB54.c)
 *     sub_180080510 @ 0x180080510 (sub_180080510.c)
 * Callees:
 *     sub_18004134C @ 0x18004134C (sub_18004134C.c)
 *     _Query_perf_counter @ 0x180125252 (_Query_perf_counter.c)
 *     _Query_perf_frequency @ 0x180125258 (_Query_perf_frequency.c)
 */

__int64 __fastcall sub_1800E9A20(__int64 a1, __int64 a2)
{
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  float v6; // xmm0_4
  __int64 v7; // rcx
  float *v8; // rdx
  float *v9; // r9
  __int64 result; // rax
  float v11[6]; // [rsp+20h] [rbp-18h] BYREF

  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  v6 = (float)(int)(1000000000 * (perf_counter / perf_frequency)
                  + 1000000000 * (perf_counter % perf_frequency) / perf_frequency
                  - *(_DWORD *)(a2 + 16))
     / 1000000.0;
  v7 = a1 + 8 * (*(int *)(a2 + 8) + 2LL * *(int *)(a2 + 8) + 7);
  v8 = *(float **)(v7 + 8);
  v11[0] = v6;
  if ( *(float **)(v7 + 16) == v8 )
  {
    sub_18004134C((const void **)v7, v8, v11);
  }
  else
  {
    *v8 = v6;
    *(_QWORD *)(v7 + 8) = v8 + 1;
  }
  v9 = *(float **)(a1 + 280);
  if ( ((((unsigned __int64)v9 - *(_QWORD *)(a1 + 272)) ^ (*(_QWORD *)(a1 + 24LL * *(int *)(a2 + 8) + 64)
                                                         - *(_QWORD *)(a1 + 24LL * *(int *)(a2 + 8) + 56))) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
  {
    if ( *(float **)(a1 + 288) == v9 )
    {
      return sub_18004134C((const void **)(a1 + 272), *(_BYTE **)(a1 + 280), v11);
    }
    else
    {
      result = (__int64)(v9 + 1);
      *v9 = v11[0];
      *(_QWORD *)(a1 + 280) = v9 + 1;
    }
  }
  else
  {
    result = *(_QWORD *)(a1 + 280);
    *(float *)(result - 4) = v11[0] + *(float *)(result - 4);
  }
  return result;
}
