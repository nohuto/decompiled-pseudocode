/*
 * XREFs of ?TriggerMonitorColorimetryChangedWnf@DXGMONITOR@@QEAAJXZ @ 0x1C02F433C
 * Callers:
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C01548F8 (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGMONITOR::TriggerMonitorColorimetryChangedWnf(DXGMONITOR *this)
{
  int updated; // eax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rax

  updated = ZwUpdateWnfStateData(&WNF_DX_DISPLAY_COLORIMETRY_DATA_CHANGED, 0LL, 0LL, 0LL, 0LL, 0, 0);
  v4 = updated;
  if ( updated < 0 )
  {
    v5 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v5 + 24) = v4;
    WdLogEvent5_WdError(v5);
  }
  return (unsigned int)v4;
}
