/*
 * XREFs of ?GetPseudoSpecializedState@MonitorUsageState@DxgMonitor@@QEBAXPEA_N00@Z @ 0x1C0163C60
 * Callers:
 *     MonitorGetPseudoSpecializedState @ 0x1C0163BCC (MonitorGetPseudoSpecializedState.c)
 *     ?_ReadAppOverridesFromMonitorDataStore@MonitorUsageState@DxgMonitor@@AEAAXPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02173CC (-_ReadAppOverridesFromMonitorDataStore@MonitorUsageState@DxgMonitor@@AEAAXPEAW4_D3DKMT_DISPLAY_T.c)
 * Callees:
 *     MonitorAreSpecializedDisplaysSupported @ 0x1C0008E58 (MonitorAreSpecializedDisplaysSupported.c)
 */

void __fastcall DxgMonitor::MonitorUsageState::GetPseudoSpecializedState(
        DxgMonitor::MonitorUsageState *this,
        bool *a2,
        bool *a3,
        bool *a4)
{
  BOOL v7; // eax
  int v8; // ecx
  bool v9; // al

  *a4 = *((_BYTE *)this + 21);
  *a2 = 0;
  v7 = MonitorAreSpecializedDisplaysSupported();
  v8 = *((_DWORD *)this + 4);
  v9 = v7;
  *a3 = v9;
  if ( !v8 || *((_BYTE *)this + 21) && v8 == 2 )
    *a2 = v9;
}
