/*
 * XREFs of ExFlushTb @ 0x1405B1C88
 * Callers:
 *     KeFlushTb @ 0x14021E550 (KeFlushTb.c)
 *     KeFlushMultipleRangeTb @ 0x14023A4F0 (KeFlushMultipleRangeTb.c)
 *     KeFlushSingleTb @ 0x14031CE3C (KeFlushSingleTb.c)
 *     KeFlushSingleCurrentTb @ 0x1403875C8 (KeFlushSingleCurrentTb.c)
 *     KeFlushEntireTb @ 0x1403B3140 (KeFlushEntireTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x1403C5EEC (KeFlushMultipleRangeCurrentTb.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

struct _KTHREAD *__fastcall ExFlushTb(unsigned int a1, __int64 a2, int a3)
{
  struct _KTHREAD *result; // rax
  struct _LIST_ENTRY *Flink; // rcx

  result = KeGetCurrentThread();
  if ( a3 != 1 )
    return (struct _KTHREAD *)(*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(HalIommuDispatch + 80))(
                                ExpSvmIommuSystemContext,
                                a1,
                                a2);
  Flink = result->ApcState.Process[2].ProfileListHead.Flink;
  if ( Flink )
    return (struct _KTHREAD *)(*(__int64 (__fastcall **)(struct _LIST_ENTRY *, _QWORD, __int64))(HalIommuDispatch + 72))(
                                Flink,
                                a1,
                                a2);
  return result;
}
