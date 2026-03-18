/*
 * XREFs of ExpInitializeTimeChangeWorker @ 0x1405CF690
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x14079F494 (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x1402D6620 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x14033E040 (KeInitializeDpc.c)
 */

void __fastcall ExpInitializeTimeChangeWorker(__int64 a1, KDEFERRED_ROUTINE *a2, void *a3, __int64 a4, __int64 a5)
{
  KeInitializeDpc((PRKDPC)a1, a2, a3);
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 144) = ExpTimeZoneWork;
  *(_QWORD *)(a1 + 152) = a5;
  KeInitializeTimerEx((PKTIMER)(a1 + 64), NotificationTimer);
}
