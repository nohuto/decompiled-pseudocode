/*
 * XREFs of PopUserPresentSetWorker @ 0x14077A360
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeDpc @ 0x140204F10 (KeInitializeDpc.c)
 *     KiSetTimerEx @ 0x140236270 (KiSetTimerEx.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     PopSetNotificationWork @ 0x14035ED80 (PopSetNotificationWork.c)
 *     PopNotifyConsoleUserPresent @ 0x14075E690 (PopNotifyConsoleUserPresent.c)
 */

LONG __fastcall PopUserPresentSetWorker(unsigned int a1, char a2)
{
  LONG result; // eax

  if ( byte_140C23ED1 )
  {
    _InterlockedExchange(&dword_140C23ED8, 1);
    KeInitializeDpc(&PopAwayModeUserPresenceDpcObject, (PKDEFERRED_ROUTINE)PopAwayModeUserPresenceDpc, &dword_140C23ED8);
    KiSetTimerEx((__int64)&PopAwayModeUserPresenceTimer, -30000000LL, 0, 0, (__int64)&PopAwayModeUserPresenceDpcObject);
    PopAwaymodeExitReason = a1;
    PopSetNotificationWork(0x40u);
  }
  PopNotifyConsoleUserPresent(0, a2, a1);
  _InterlockedExchange(&PopUserPresentSetStatus, 0);
  result = _InterlockedCompareExchange(&dword_140C23ED4, 0, 0);
  if ( result )
    return KeSetEvent(&PopUserPresentCompletedEvent, 0, 0);
  return result;
}
