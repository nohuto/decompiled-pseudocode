/*
 * XREFs of ?SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z @ 0x1C0038764
 * Callers:
 *     ?SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z @ 0x1C001A2C4 (-SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z.c)
 *     DxgSetPowerComponentIdleCBInternal @ 0x1C00419D0 (DxgSetPowerComponentIdleCBInternal.c)
 *     DxgSetPowerComponentIdleForceAsyncCBInternal @ 0x1C0041A50 (DxgSetPowerComponentIdleForceAsyncCBInternal.c)
 *     ?DisableStablePowerState@DXGADAPTER@@QEAAXXZ @ 0x1C020B674 (-DisableStablePowerState@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReleaseComponentReferencesHelper@DXGGLOBAL@@QEAAXXZ @ 0x1C0269DB0 (-ReleaseComponentReferencesHelper@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ?SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z @ 0x1C00387E0 (-SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z.c)
 */

void __fastcall DXGADAPTER::SetPowerComponentIdleCBInternal(DXGADAPTER *this, __int64 a2, unsigned int a3)
{
  unsigned int v4; // edi
  __int64 v6; // rax

  v4 = a2;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 736) )
  {
    v6 = WdLogNewEntry5_WdCriticalError(this, a2);
    *(_QWORD *)(v6 + 24) = 275LL;
    *(_QWORD *)(v6 + 32) = 23LL;
    *(_QWORD *)(v6 + 40) = this;
    *(_OWORD *)(v6 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v6);
  }
  DXGADAPTER::SetPowerComponentIdleCBWorker(this, v4, a3);
}
