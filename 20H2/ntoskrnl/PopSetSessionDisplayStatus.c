/*
 * XREFs of PopSetSessionDisplayStatus @ 0x14077DBD8
 * Callers:
 *     PopSessionDisconnected @ 0x140775B28 (PopSessionDisconnected.c)
 *     PopSetDisplayStatus @ 0x1407768CC (PopSetDisplayStatus.c)
 *     PopSessionConnected @ 0x140789BF0 (PopSessionConnected.c)
 * Callees:
 *     PopPrintEx @ 0x140364760 (PopPrintEx.c)
 *     PopSetPowerSettingValue @ 0x1406FA718 (PopSetPowerSettingValue.c)
 *     PopDiagTraceSessionStates @ 0x140720C64 (PopDiagTraceSessionStates.c)
 */

__int64 __fastcall PopSetSessionDisplayStatus(unsigned int a1, int a2, char a3)
{
  __int64 *v6; // r8
  int Src; // [rsp+48h] [rbp+10h] BYREF

  Src = a2;
  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_DISPLAY_STATE, a1, a2);
  v6 = (__int64 *)">>>>>";
  if ( !a3 )
    v6 = qword_1407D94F0;
  PopPrintEx(3u, (__int64)"PopAdaptive: %sSession %u display state: %u\n", v6, a1, a2);
  PopSetPowerSettingValue(&GUID_SESSION_DISPLAY_STATUS, a1, 0, 4u, &Src);
  return PopSetPowerSettingValue(&GUID_SESSION_DISPLAY_STATUS, a1, 1, 4u, &Src);
}
