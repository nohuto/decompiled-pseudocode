/*
 * XREFs of sub_1800E9920 @ 0x1800E9920
 * Callers:
 *     sub_180077C2C @ 0x180077C2C (sub_180077C2C.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_180067278 @ 0x180067278 (sub_180067278.c)
 *     sub_180067304 @ 0x180067304 (sub_180067304.c)
 *     sub_1800D1210 @ 0x1800D1210 (sub_1800D1210.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     _Query_perf_counter @ 0x180125252 (_Query_perf_counter.c)
 *     _Query_perf_frequency @ 0x180125258 (_Query_perf_frequency.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_1800E9920(__int64 a1, unsigned __int64 a2)
{
  char result; // al
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 *v7; // rax
  _QWORD v8[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v9[4]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+80h] [rbp-48h] BYREF

  result = *(_BYTE *)(a1 + 8);
  if ( result )
  {
    sub_180067278(a1);
    if ( a2 >= (*(_QWORD *)(a1 + 40) - *(_QWORD *)(a1 + 32)) / 56LL )
    {
      sub_18000FE28(v9);
      v7 = sub_18000FE28(v8);
      sub_1800D1210(pExceptionObject, v7, 65LL, (__int64)v9, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    perf_frequency = Query_perf_frequency();
    perf_counter = Query_perf_counter();
    *(_QWORD *)(56 * a2 + *(_QWORD *)(a1 + 32) + 48) = 1000000000 * (perf_counter % perf_frequency) / perf_frequency
                                                     + 1000000000 * (perf_counter / perf_frequency);
    return sub_180067304(a1);
  }
  return result;
}
