/*
 * XREFs of PopSetSessionDisplayStatus @ 0x14076F628
 * Callers:
 *     PopSessionDisconnected @ 0x140766AF8 (PopSessionDisconnected.c)
 *     PopSetDisplayStatus @ 0x1407682C0 (PopSetDisplayStatus.c)
 *     PopSessionConnected @ 0x14077B5F0 (PopSessionConnected.c)
 * Callees:
 *     PopPrintEx @ 0x1403612F8 (PopPrintEx.c)
 *     PopSetPowerSettingValue @ 0x1406A7D78 (PopSetPowerSettingValue.c)
 *     PopDiagTraceSessionStates @ 0x1407120CC (PopDiagTraceSessionStates.c)
 */

__int64 __fastcall PopSetSessionDisplayStatus(unsigned int a1, int a2, char a3)
{
  __int64 *v6; // r8
  int Src; // [rsp+48h] [rbp+10h] BYREF

  Src = a2;
  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_DISPLAY_STATE, a1, a2);
  v6 = (__int64 *)">>>>>";
  if ( !a3 )
    v6 = qword_1407CAD30;
  PopPrintEx(3u, (__int64)"PopAdaptive: %sSession %u display state: %u\n", v6, a1, a2);
  PopSetPowerSettingValue(&GUID_SESSION_DISPLAY_STATUS, a1, 0, 4u, &Src);
  return PopSetPowerSettingValue(&GUID_SESSION_DISPLAY_STATUS, a1, 1, 4u, &Src);
}
