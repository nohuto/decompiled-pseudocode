/*
 * XREFs of ?_GetPseudoSpecializedState@DXGMONITOR@@QEAAJPEA_N0@Z @ 0x1C013E1C0
 * Callers:
 *     MonitorGetPseudoSpecializedState @ 0x1C013E10C (MonitorGetPseudoSpecializedState.c)
 *     ?_ReadAppOverridesFromMonitorDataStore@DXGMONITOR@@QEAAJPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C01902D4 (-_ReadAppOverridesFromMonitorDataStore@DXGMONITOR@@QEAAJPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z.c)
 * Callees:
 *     MonitorAreSpecializedDisplaysSupported @ 0x1C013E208 (MonitorAreSpecializedDisplaysSupported.c)
 */

__int64 __fastcall DXGMONITOR::_GetPseudoSpecializedState(DXGMONITOR *this, bool *a2, bool *a3)
{
  int v3; // r9d
  int v4; // eax

  v3 = *((_DWORD *)this + 10) >> 12;
  *a2 = 0;
  *a3 = v3 & 1;
  v4 = *((_DWORD *)this + 148);
  if ( !v4 || (v3 & 1) != 0 && v4 == 2 )
    *a2 = (unsigned int)MonitorAreSpecializedDisplaysSupported() != 0;
  return 0LL;
}
