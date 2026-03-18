/*
 * XREFs of PopSetSystemAwayMode @ 0x1408E43C0
 * Callers:
 *     PopIssueActionRequest @ 0x140763448 (PopIssueActionRequest.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x140297C10 (KeResetEvent.c)
 *     KiSetTimerEx @ 0x1402C90A0 (KiSetTimerEx.c)
 *     KeInitializeDpc @ 0x1402E3AC0 (KeInitializeDpc.c)
 *     PopDiagTraceEventNoPayload @ 0x14035B1A4 (PopDiagTraceEventNoPayload.c)
 *     PopNotifyConsoleUserPresent @ 0x140760A60 (PopNotifyConsoleUserPresent.c)
 *     PopSetAwayModeStatus @ 0x1408E4344 (PopSetAwayModeStatus.c)
 */

__int64 __fastcall PopSetSystemAwayMode(int a1)
{
  unsigned int v1; // ebx
  char v2; // dl

  v1 = 0;
  if ( a1 )
  {
    if ( !byte_140C238B1 )
    {
      if ( byte_140C238B0 )
      {
        KeResetEvent(&PopUserPresentCompletedEvent);
        _InterlockedExchange(&dword_140C238B4, 1);
        if ( _InterlockedCompareExchange(&PopUserPresentSetStatus, 0, 0) )
          KeWaitForSingleObject(&PopUserPresentCompletedEvent, Executive, 0, 0, 0LL);
        KeInitializeDpc(
          &PopAwayModeUserPresenceDpcObject,
          (PKDEFERRED_ROUTINE)PopAwayModeUserPresenceDpc,
          &dword_140C238B4);
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
  else if ( byte_140C238B1 )
  {
    PopSetAwayModeStatus(0);
    PopNotifyConsoleUserPresent(0, v2, PopAwaymodeExitReason);
  }
  return v1;
}
