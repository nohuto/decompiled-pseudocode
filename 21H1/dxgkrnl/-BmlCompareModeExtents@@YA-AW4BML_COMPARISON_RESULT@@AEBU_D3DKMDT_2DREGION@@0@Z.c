/*
 * XREFs of ?BmlCompareModeExtents@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1C00E59E8
 * Callers:
 *     BmlDoesTargetModeObeyConstraint @ 0x1C00E165C (BmlDoesTargetModeObeyConstraint.c)
 *     BmlFillPreferredMonitorMode @ 0x1C00E1B18 (BmlFillPreferredMonitorMode.c)
 *     ?BmlGetTargetModePreferenceOnMonitor@@YA?AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARGETMODE@@EPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C00E1CFC (-BmlGetTargetModePreferenceOnMonitor@@YA-AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARG.c)
 *     BmlGetModeCategoryForRegion @ 0x1C00E54E8 (BmlGetModeCategoryForRegion.c)
 *     BmlGetNextBestSourceMode @ 0x1C00E5604 (BmlGetNextBestSourceMode.c)
 *     BmlDoesSourceModeObeyConstraint @ 0x1C00E588C (BmlDoesSourceModeObeyConstraint.c)
 *     BmlCompareSourceModesWithContentRes @ 0x1C02E717C (BmlCompareSourceModesWithContentRes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BmlCompareModeExtents(int *a1, _DWORD *a2)
{
  int v2; // r8d
  unsigned int v3; // eax
  unsigned int v4; // ecx

  v2 = *a1;
  if ( (unsigned int)*a1 > *a2 )
    return 1LL;
  v3 = a1[1];
  v4 = a2[1];
  if ( v3 > v4 )
    return 1LL;
  if ( v2 == *a2 && v3 == v4 )
    return 0LL;
  return 0xFFFFFFFFLL;
}
