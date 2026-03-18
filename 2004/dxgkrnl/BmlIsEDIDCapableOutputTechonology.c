/*
 * XREFs of BmlIsEDIDCapableOutputTechonology @ 0x1C0139210
 * Callers:
 *     BmlFillPreferredMonitorMode @ 0x1C0138818 (BmlFillPreferredMonitorMode.c)
 *     ?BmlGetTargetModePreferenceOnMonitor@@YA?AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARGETMODE@@EPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C01389FC (-BmlGetTargetModePreferenceOnMonitor@@YA-AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARG.c)
 * Callees:
 *     <none>
 */

bool __fastcall BmlIsEDIDCapableOutputTechonology(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 80);
  return v1 != 0x80000000 && v1 != -1 && (v1 <= 0 || v1 > 3 && v1 != 6 && (v1 <= 7 || v1 > 9 && (v1 <= 10 || v1 > 14)));
}
