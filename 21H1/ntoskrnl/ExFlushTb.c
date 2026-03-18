/*
 * XREFs of ExFlushTb @ 0x1405B1568
 * Callers:
 *     KeFlushTb @ 0x1402775A0 (KeFlushTb.c)
 *     KeFlushMultipleRangeTb @ 0x140293520 (KeFlushMultipleRangeTb.c)
 *     KeFlushSingleTb @ 0x14034C17C (KeFlushSingleTb.c)
 *     KeFlushSingleCurrentTb @ 0x140386658 (KeFlushSingleCurrentTb.c)
 *     KeFlushEntireTb @ 0x1403AD4C0 (KeFlushEntireTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x1403C4F7C (KeFlushMultipleRangeCurrentTb.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
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
