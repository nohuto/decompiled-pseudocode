/*
 * XREFs of ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x180054F10
 * Callers:
 *     ?DeleteExpiredHints@ActivationHints@@AEAAXXZ @ 0x180054E60 (-DeleteExpiredHints@ActivationHints@@AEAAXXZ.c)
 *     ?AddHint@ActivationHints@@UEAAJUAppIdInfo@@PEAUIUnknown@@@Z @ 0x1803A94B0 (-AddHint@ActivationHints@@UEAAJUAppIdInfo@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::chrono::steady_clock::now(_QWORD *a1)
{
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax

  perf_frequency = _Query_perf_frequency();
  perf_counter = _Query_perf_counter();
  *a1 = 1000000000 * (perf_counter / perf_frequency) + 1000000000 * (perf_counter % perf_frequency) / perf_frequency;
  return a1;
}
