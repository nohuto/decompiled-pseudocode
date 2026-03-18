/*
 * XREFs of ExpTrackRaiseLimitNotification @ 0x14063BD64
 * Callers:
 *     ExpLimitDpcInsertEntry @ 0x14063B3D4 (ExpLimitDpcInsertEntry.c)
 *     ExpTrackTableGetMoreLimit @ 0x14063BDD0 (ExpTrackTableGetMoreLimit.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall ExpTrackRaiseLimitNotification(__int64 a1)
{
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 96), 1, 0) )
  {
    RtlpInterlockedPushEntrySList(&stru_140CE1EE0, (PSLIST_ENTRY)(a1 + 80));
    if ( !_InterlockedCompareExchange(&dword_140CE1EF0, 1, 0) )
    {
      stru_140CE1EF8.Parameter = 0LL;
      stru_140CE1EF8.List.Flink = 0LL;
      stru_140CE1EF8.WorkerRoutine = (void (__fastcall *)(void *))ExpPlProcessNotifications;
      ExQueueWorkItem(&stru_140CE1EF8, NormalWorkQueue);
    }
  }
}
