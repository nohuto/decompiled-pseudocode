/*
 * XREFs of NVMeUpdateResumeLatencyTolerance @ 0x1C000F7B4
 * Callers:
 *     NVMePowerSetFState @ 0x1C000EEE8 (NVMePowerSetFState.c)
 *     NVMePowerSettingChangeNotification @ 0x1C000F178 (NVMePowerSettingChangeNotification.c)
 *     NVMeSystemPowerHint @ 0x1C000F6F0 (NVMeSystemPowerHint.c)
 * Callees:
 *     <none>
 */

bool __fastcall NVMeUpdateResumeLatencyTolerance(__int64 a1)
{
  unsigned int v1; // edi
  unsigned int v2; // ebx
  int v3; // eax
  bool v4; // zf

  v1 = *(_DWORD *)(a1 + 1664);
  if ( *(_DWORD *)(a1 + 1660) == 1 )
  {
    v2 = *(_DWORD *)(a1 + 104);
    if ( v2 == -1 )
      v2 = *(_DWORD *)(a1 + 1668);
  }
  else
  {
    v2 = *(_DWORD *)(a1 + 100);
    if ( v2 == -1 )
    {
      v3 = *(unsigned __int8 *)(a1 + 1658);
      if ( !(_BYTE)v3 || v3 >= *(unsigned __int8 *)(a1 + 1657) - 1 || (v2 = *(_DWORD *)(a1 + 1680), v1 > v2) )
        v2 = *(_DWORD *)(a1 + 1672);
    }
  }
  *(_DWORD *)(a1 + 1664) = v2;
  v4 = v1 == v2;
  if ( v1 != v2 )
  {
    StorPortDebugPrint(3LL, "StorNVMe - POWER: Current Resume Latency Tolerance changed from %dms to %dms\n", v1, v2);
    v4 = v1 == v2;
  }
  return !v4;
}
