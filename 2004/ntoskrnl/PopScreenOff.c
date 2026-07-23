/*
 * XREFs of PopScreenOff @ 0x1408ECEB8
 * Callers:
 *     NtPowerInformation @ 0x140649BC0 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x14064B1E4 (PopPowerInformationInternal.c)
 *     PopIssueActionRequest @ 0x140763448 (PopIssueActionRequest.c)
 * Callees:
 *     PopBlockSessionSwitch @ 0x140766D80 (PopBlockSessionSwitch.c)
 *     PopControlMonitor @ 0x140766FC0 (PopControlMonitor.c)
 */

ULONG __fastcall PopScreenOff(int a1)
{
  ULONG v3; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v4; // [rsp+38h] [rbp+10h] BYREF
  int v5; // [rsp+3Ch] [rbp+14h]

  v3 = -1;
  PopBlockSessionSwitch(1, &v3);
  v4 = 0;
  v5 = a1;
  PopControlMonitor(&v4, v3);
  return PopBlockSessionSwitch(0, &v3);
}
