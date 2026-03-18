/*
 * XREFs of ExFlushTb @ 0x14063F75C
 * Callers:
 *     KeFlushSingleTb @ 0x1402EA644 (KeFlushSingleTb.c)
 *     KeFlushTb @ 0x1402F391C (KeFlushTb.c)
 *     KeFlushMultipleRangeTb @ 0x1402F3C40 (KeFlushMultipleRangeTb.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     KeFlushSingleCurrentTb @ 0x1403AD304 (KeFlushSingleCurrentTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x1403AD40C (KeFlushMultipleRangeCurrentTb.c)
 *     KeFlushEntireTb @ 0x1403C39C0 (KeFlushEntireTb.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
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
