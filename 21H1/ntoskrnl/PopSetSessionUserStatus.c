/*
 * XREFs of PopSetSessionUserStatus @ 0x1406FEBAC
 * Callers:
 *     PopConsoleSessionPassiveInput @ 0x1406FE518 (PopConsoleSessionPassiveInput.c)
 *     PopSessionInputChange @ 0x1406FE594 (PopSessionInputChange.c)
 *     PopRemoteSessionActiveInput @ 0x14075E388 (PopRemoteSessionActiveInput.c)
 *     PopSessionDisconnected @ 0x140765138 (PopSessionDisconnected.c)
 *     PopCheckConsoleTimeouts @ 0x1408F08E4 (PopCheckConsoleTimeouts.c)
 *     PopInputDisabled @ 0x1408F0A2C (PopInputDisabled.c)
 * Callees:
 *     PopPrintEx @ 0x14033C680 (PopPrintEx.c)
 *     PopDiagTraceSessionStates @ 0x1406FE880 (PopDiagTraceSessionStates.c)
 *     PopEvaluateGlobalUserStatus @ 0x1406FEC90 (PopEvaluateGlobalUserStatus.c)
 *     PopPrintUserActivityPresence @ 0x1406FEDC0 (PopPrintUserActivityPresence.c)
 *     PopSetPowerSettingValue @ 0x14070F018 (PopSetPowerSettingValue.c)
 *     PopExtendConnectionState @ 0x1407BC844 (PopExtendConnectionState.c)
 */

__int64 __fastcall PopSetSessionUserStatus(unsigned int a1, unsigned int a2)
{
  const wchar_t *v4; // rax
  unsigned int Src; // [rsp+40h] [rbp+8h] BYREF

  if ( (_DWORD)PopConsoleContext == a1 && a1 != -1 )
    LODWORD(qword_140C20600) = a2;
  Src = a2;
  v4 = (const wchar_t *)PopPrintUserActivityPresence(a2);
  PopPrintEx(3u, (__int64)"PopAdaptive: Session %u user presence/activity state: %S\n", a1, v4);
  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_INPUT_STATE, a1, a2);
  PopSetPowerSettingValue(&GUID_SESSION_USER_PRESENCE, &Src);
  PopSetPowerSettingValue(&GUID_SESSION_USER_PRESENCE, &Src);
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
