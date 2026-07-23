/*
 * XREFs of PopSetSessionUserStatus @ 0x140712330
 * Callers:
 *     PopConsoleSessionPassiveInput @ 0x140711D64 (PopConsoleSessionPassiveInput.c)
 *     PopSessionInputChange @ 0x140711DE0 (PopSessionInputChange.c)
 *     PopRemoteSessionActiveInput @ 0x1407606F8 (PopRemoteSessionActiveInput.c)
 *     PopSessionDisconnected @ 0x140766AF8 (PopSessionDisconnected.c)
 *     PopCheckConsoleTimeouts @ 0x1408F1BD4 (PopCheckConsoleTimeouts.c)
 *     PopInputDisabled @ 0x1408F1D1C (PopInputDisabled.c)
 * Callees:
 *     PopPrintEx @ 0x1403612F8 (PopPrintEx.c)
 *     PopSetPowerSettingValue @ 0x1406A7D78 (PopSetPowerSettingValue.c)
 *     PopDiagTraceSessionStates @ 0x1407120CC (PopDiagTraceSessionStates.c)
 *     PopEvaluateGlobalUserStatus @ 0x140712414 (PopEvaluateGlobalUserStatus.c)
 *     PopPrintUserActivityPresence @ 0x140712544 (PopPrintUserActivityPresence.c)
 *     PopExtendConnectionState @ 0x1407BF9B4 (PopExtendConnectionState.c)
 */

__int64 __fastcall PopSetSessionUserStatus(unsigned int a1, unsigned int a2)
{
  const wchar_t *v4; // rax
  unsigned int Src; // [rsp+40h] [rbp+8h] BYREF

  if ( (_DWORD)PopConsoleContext == a1 && a1 != -1 )
    LODWORD(qword_140C20360) = a2;
  Src = a2;
  v4 = (const wchar_t *)PopPrintUserActivityPresence(a2);
  PopPrintEx(3u, (__int64)"PopAdaptive: Session %u user presence/activity state: %S\n", a1, v4);
  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_INPUT_STATE, a1, a2);
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
