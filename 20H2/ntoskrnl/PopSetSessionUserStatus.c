/*
 * XREFs of PopSetSessionUserStatus @ 0x140720A50
 * Callers:
 *     PopSessionInputChange @ 0x140720ED0 (PopSessionInputChange.c)
 *     PopConsoleSessionPassiveInput @ 0x14072120C (PopConsoleSessionPassiveInput.c)
 *     PopRemoteSessionActiveInput @ 0x14076ED08 (PopRemoteSessionActiveInput.c)
 *     PopSessionDisconnected @ 0x140775B28 (PopSessionDisconnected.c)
 *     PopCheckConsoleTimeouts @ 0x1408F77E4 (PopCheckConsoleTimeouts.c)
 *     PopInputDisabled @ 0x1408F792C (PopInputDisabled.c)
 * Callees:
 *     PopPrintEx @ 0x140364760 (PopPrintEx.c)
 *     PopSetPowerSettingValue @ 0x1406FA718 (PopSetPowerSettingValue.c)
 *     PopEvaluateGlobalUserStatus @ 0x140720B34 (PopEvaluateGlobalUserStatus.c)
 *     PopDiagTraceSessionStates @ 0x140720C64 (PopDiagTraceSessionStates.c)
 *     PopPrintUserActivityPresence @ 0x140720D14 (PopPrintUserActivityPresence.c)
 *     PopExtendConnectionState @ 0x1407CE244 (PopExtendConnectionState.c)
 */

__int64 __fastcall PopSetSessionUserStatus(unsigned int a1, unsigned int a2)
{
  const wchar_t *v4; // rax
  unsigned int Src; // [rsp+40h] [rbp+8h] BYREF

  if ( (_DWORD)PopConsoleContext == a1 && a1 != -1 )
    LODWORD(qword_140C204C0) = a2;
  Src = a2;
  v4 = (const wchar_t *)PopPrintUserActivityPresence(a2);
  PopPrintEx(3u, (__int64)"PopAdaptive: Session %u user presence/activity state: %S\n", a1, v4);
  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_INPUT_STATE);
  PopSetPowerSettingValue(&GUID_SESSION_USER_PRESENCE, a1, 0, 4u, &Src);
  PopSetPowerSettingValue(&GUID_SESSION_USER_PRESENCE, a1, 1, 4u, &Src);
  if ( PopMaximumConnectionSessions )
  {
    if ( a1 >= PopMaximumConnectionSessions )
      PopExtendConnectionState(a1);
    if ( PopMaximumConnectionSessions )
    {
      if ( a2 )
        _bittestandreset((signed __int32 *)PopConnectionBitmap.Buffer, a1);
      else
        _bittestandset((signed __int32 *)PopConnectionBitmap.Buffer, a1);
    }
  }
  return PopEvaluateGlobalUserStatus();
}
