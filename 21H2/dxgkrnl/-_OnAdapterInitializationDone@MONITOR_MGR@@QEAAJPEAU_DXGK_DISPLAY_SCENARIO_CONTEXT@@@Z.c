/*
 * XREFs of ?_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02185D4
 * Callers:
 *     MonitorInitializeAdapterDone @ 0x1C0218564 (MonitorInitializeAdapterDone.c)
 * Callees:
 *     ?DmmGetEmergentSimulatedTarget@@YAJQEAXPEAI@Z @ 0x1C01B1404 (-DmmGetEmergentSimulatedTarget@@YAJQEAXPEAI@Z.c)
 *     ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C021864C (-_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_OnAdapterInitializationDone(
        MONITOR_MGR *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  int EmergentSimulatedTarget; // eax
  int v5; // ecx
  __int64 result; // rax

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
  EmergentSimulatedTarget = DmmGetEmergentSimulatedTarget(
                              *(DXGADAPTER **)(*((_QWORD *)this + 3) + 16LL),
                              (unsigned int *)this + 18);
  v5 = *((_DWORD *)this + 18);
  if ( EmergentSimulatedTarget < 0 )
  {
    if ( v5 == -1 )
      goto LABEL_4;
    goto LABEL_3;
  }
  if ( v5 == -1 )
LABEL_3:
    WdLogSingleEntry0(1LL);
LABEL_4:
  MONITOR_MGR::_CreateBootPersistentMonitors(this, a2);
  result = 0LL;
  *((_BYTE *)this + 21) = 1;
  return result;
}
