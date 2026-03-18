/*
 * XREFs of PopUserPresentSetWorker @ 0x14077C770
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     KiSetTimerEx @ 0x1402C90A0 (KiSetTimerEx.c)
 *     PopSetNotificationWork @ 0x1402DF45C (PopSetNotificationWork.c)
 *     KeInitializeDpc @ 0x1402E3AC0 (KeInitializeDpc.c)
 *     PopNotifyConsoleUserPresent @ 0x140760A60 (PopNotifyConsoleUserPresent.c)
 */

LONG __fastcall PopUserPresentSetWorker(unsigned int a1, char a2)
{
  LONG result; // eax

  if ( byte_140C238B1 )
  {
    _InterlockedExchange(&dword_140C238B8, 1);
    KeInitializeDpc(&PopAwayModeUserPresenceDpcObject, (PKDEFERRED_ROUTINE)PopAwayModeUserPresenceDpc, &dword_140C238B8);
    KiSetTimerEx((__int64)&PopAwayModeUserPresenceTimer, -30000000LL, 0, 0, (__int64)&PopAwayModeUserPresenceDpcObject);
    PopAwaymodeExitReason = a1;
    PopSetNotificationWork(0x40u);
  }
  PopNotifyConsoleUserPresent(0, a2, a1);
  _InterlockedExchange(&PopUserPresentSetStatus, 0);
  result = _InterlockedCompareExchange(&dword_140C238B4, 0, 0);
  if ( result )
    return KeSetEvent(&PopUserPresentCompletedEvent, 0, 0);
  return result;
}
