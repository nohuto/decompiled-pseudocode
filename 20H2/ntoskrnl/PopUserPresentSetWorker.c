/*
 * XREFs of PopUserPresentSetWorker @ 0x14078AD70
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     KiSetTimerEx @ 0x140247520 (KiSetTimerEx.c)
 *     KeInitializeDpc @ 0x14033E040 (KeInitializeDpc.c)
 *     PopSetNotificationWork @ 0x140362C50 (PopSetNotificationWork.c)
 *     PopNotifyConsoleUserPresent @ 0x14076F070 (PopNotifyConsoleUserPresent.c)
 */

LONG __fastcall PopUserPresentSetWorker(unsigned int a1, char a2)
{
  LONG result; // eax

  if ( byte_140C23D51 )
  {
    _InterlockedExchange(&dword_140C23D58, 1);
    KeInitializeDpc(&PopAwayModeUserPresenceDpcObject, (PKDEFERRED_ROUTINE)PopAwayModeUserPresenceDpc, &dword_140C23D58);
    KiSetTimerEx((__int64)&PopAwayModeUserPresenceTimer, -30000000LL, 0, 0, (__int64)&PopAwayModeUserPresenceDpcObject);
    PopAwaymodeExitReason = a1;
    PopSetNotificationWork(0x40u);
  }
  PopNotifyConsoleUserPresent(0, a2, a1);
  _InterlockedExchange(&PopUserPresentSetStatus, 0);
  result = _InterlockedCompareExchange(&dword_140C23D54, 0, 0);
  if ( result )
    return KeSetEvent(&PopUserPresentCompletedEvent, 0, 0);
  return result;
}
