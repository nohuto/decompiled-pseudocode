/*
 * XREFs of PopScreenOff @ 0x1408EBC38
 * Callers:
 *     NtPowerInformation @ 0x14070B1B0 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x14070C7D4 (PopPowerInformationInternal.c)
 *     PopIssueActionRequest @ 0x140761B68 (PopIssueActionRequest.c)
 * Callees:
 *     PopBlockSessionSwitch @ 0x1407653C0 (PopBlockSessionSwitch.c)
 *     PopControlMonitor @ 0x140765600 (PopControlMonitor.c)
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
