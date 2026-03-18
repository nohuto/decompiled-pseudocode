/*
 * XREFs of PopSetSystemAwayMode @ 0x1408E3140
 * Callers:
 *     PopIssueActionRequest @ 0x140761B68 (PopIssueActionRequest.c)
 * Callees:
 *     KeInitializeDpc @ 0x140204F10 (KeInitializeDpc.c)
 *     KeResetEvent @ 0x1402055D0 (KeResetEvent.c)
 *     KiSetTimerEx @ 0x140236270 (KiSetTimerEx.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     PopDiagTraceEventNoPayload @ 0x14031D664 (PopDiagTraceEventNoPayload.c)
 *     PopNotifyConsoleUserPresent @ 0x14075E690 (PopNotifyConsoleUserPresent.c)
 *     PopSetAwayModeStatus @ 0x1408E30C4 (PopSetAwayModeStatus.c)
 */

__int64 __fastcall PopSetSystemAwayMode(int a1)
{
  unsigned int v1; // ebx
  char v2; // dl

  v1 = 0;
  if ( a1 )
  {
    if ( !byte_140C23ED1 )
    {
      if ( byte_140C23ED0 )
      {
        KeResetEvent(&PopUserPresentCompletedEvent);
        _InterlockedExchange(&dword_140C23ED4, 1);
        if ( _InterlockedCompareExchange(&PopUserPresentSetStatus, 0, 0) )
          KeWaitForSingleObject(&PopUserPresentCompletedEvent, Executive, 0, 0, 0LL);
        KeInitializeDpc(
          &PopAwayModeUserPresenceDpcObject,
          (PKDEFERRED_ROUTINE)PopAwayModeUserPresenceDpc,
          &dword_140C23ED4);
        KiSetTimerEx(
          (__int64)&PopAwayModeUserPresenceTimer,
          -30000000LL,
          0,
          0,
          (__int64)&PopAwayModeUserPresenceDpcObject);
        PopDiagTraceEventNoPayload(&POP_ETW_EVENT_AWAYMODE);
        PopSetAwayModeStatus(1);
      }
      else
      {
        return (unsigned int)-1073741811;
      }
    }
  }
  else if ( byte_140C23ED1 )
  {
    PopSetAwayModeStatus(0);
    PopNotifyConsoleUserPresent(0, v2, PopAwaymodeExitReason);
  }
  return v1;
}
