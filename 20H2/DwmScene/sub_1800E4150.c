/*
 * XREFs of sub_1800E4150 @ 0x1800E4150
 * Callers:
 *     sub_180076C30 @ 0x180076C30 (sub_180076C30.c)
 *     sub_180076F08 @ 0x180076F08 (sub_180076F08.c)
 *     sub_180077C90 @ 0x180077C90 (sub_180077C90.c)
 *     sub_18007A284 @ 0x18007A284 (sub_18007A284.c)
 *     sub_18007AC40 @ 0x18007AC40 (sub_18007AC40.c)
 * Callees:
 *     sub_18003BA7C @ 0x18003BA7C (sub_18003BA7C.c)
 *     _Query_perf_counter @ 0x18011F982 (_Query_perf_counter.c)
 *     _Query_perf_frequency @ 0x18011F988 (_Query_perf_frequency.c)
 */

__int64 __fastcall sub_1800E4150(__int64 a1, __int64 a2)
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
    sub_18003BA7C((const void **)v7, v8, v11);
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
      return sub_18003BA7C((const void **)(a1 + 272), *(_BYTE **)(a1 + 280), v11);
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
