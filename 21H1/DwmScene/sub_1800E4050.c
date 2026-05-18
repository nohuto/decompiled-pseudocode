/*
 * XREFs of sub_1800E4050 @ 0x1800E4050
 * Callers:
 *     sub_18007235C @ 0x18007235C (sub_18007235C.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_1800619A8 @ 0x1800619A8 (sub_1800619A8.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 *     sub_1800CB940 @ 0x1800CB940 (sub_1800CB940.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     _Query_perf_counter @ 0x18011F982 (_Query_perf_counter.c)
 *     _Query_perf_frequency @ 0x18011F988 (_Query_perf_frequency.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_1800E4050(__int64 a1, unsigned __int64 a2)
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
    sub_1800619A8(a1);
    if ( a2 >= (*(_QWORD *)(a1 + 40) - *(_QWORD *)(a1 + 32)) / 56LL )
    {
      sub_18000FD48(v9);
      v7 = sub_18000FD48(v8);
      sub_1800CB940(pExceptionObject, v7, 65LL, (__int64)v9, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    perf_frequency = Query_perf_frequency();
    perf_counter = Query_perf_counter();
    *(_QWORD *)(56 * a2 + *(_QWORD *)(a1 + 32) + 48) = 1000000000 * (perf_counter % perf_frequency) / perf_frequency
                                                     + 1000000000 * (perf_counter / perf_frequency);
    return sub_180061A34(a1);
  }
  return result;
}
