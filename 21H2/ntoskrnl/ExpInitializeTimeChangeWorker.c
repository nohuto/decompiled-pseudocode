/*
 * XREFs of ExpInitializeTimeChangeWorker @ 0x1405D19CC
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x1407A9754 (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x140266A80 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x140269650 (KeInitializeDpc.c)
 */

void __fastcall ExpInitializeTimeChangeWorker(__int64 a1, KDEFERRED_ROUTINE *a2, void *a3, __int64 a4, __int64 a5)
{
  KeInitializeDpc((PRKDPC)a1, a2, a3);
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 144) = ExpTimeZoneWork;
  *(_QWORD *)(a1 + 152) = a5;
  KeInitializeTimerEx((PKTIMER)(a1 + 64), NotificationTimer);
}
