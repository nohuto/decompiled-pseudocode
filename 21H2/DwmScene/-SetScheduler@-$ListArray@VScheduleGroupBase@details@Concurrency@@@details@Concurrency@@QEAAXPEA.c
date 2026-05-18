/*
 * XREFs of ?SetScheduler@?$ListArray@VScheduleGroupBase@details@Concurrency@@@details@Concurrency@@QEAAXPEAVSchedulerBase@23@@Z @ 0x18006810C
 * Callers:
 *     sub_180079508 @ 0x180079508 (sub_180079508.c)
 *     sub_1800795CC @ 0x1800795CC (sub_1800795CC.c)
 * Callees:
 *     <none>
 */

void __fastcall Concurrency::details::ListArray<Concurrency::details::ScheduleGroupBase>::SetScheduler(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a1 + 72) = a2;
}
