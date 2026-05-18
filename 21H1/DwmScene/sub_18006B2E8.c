/*
 * XREFs of sub_18006B2E8 @ 0x18006B2E8
 * Callers:
 *     sub_18007354C @ 0x18007354C (sub_18007354C.c)
 * Callees:
 *     sub_1801163DC @ 0x1801163DC (sub_1801163DC.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _Query_perf_counter @ 0x18011F982 (_Query_perf_counter.c)
 *     _Query_perf_frequency @ 0x18011F988 (_Query_perf_frequency.c)
 */

__int64 __fastcall sub_18006B2E8(__int64 a1)
{
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 v4; // rax

  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  v4 = 1000000000 * (perf_counter / perf_frequency) + 1000000000 * (perf_counter % perf_frequency) / perf_frequency;
  *(_QWORD *)(a1 + 440) = v4;
  return sub_1801163DC(
           &unk_1802085A0,
           3LL,
           "RenderDevice startup duration to attach complete: %8.3fms",
           (float)((float)(v4 - *(_DWORD *)(a1 + 424)) / 1000000.0));
}
