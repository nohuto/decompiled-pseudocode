/*
 * XREFs of ?SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z @ 0x1C0038238
 * Callers:
 *     ?SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z @ 0x1C001A264 (-SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z.c)
 *     DxgSetPowerComponentActiveNoWaitCB @ 0x1C00419A0 (DxgSetPowerComponentActiveNoWaitCB.c)
 *     DxgSetPowerComponentActiveNoWaitForceAsyncCB @ 0x1C00419D0 (DxgSetPowerComponentActiveNoWaitForceAsyncCB.c)
 *     ?EnableStablePowerState@DXGADAPTER@@QEAAXXZ @ 0x1C020D078 (-EnableStablePowerState@DXGADAPTER@@QEAAXXZ.c)
 *     ?StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ @ 0x1C020F93C (-StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ.c)
 *     DxgSetPowerComponentActiveCBInternal @ 0x1C0251790 (DxgSetPowerComponentActiveCBInternal.c)
 *     ?CsExitInitiatedWnfCallbackInternal@DXGGLOBAL@@QEAAX_K_J@Z @ 0x1C0268898 (-CsExitInitiatedWnfCallbackInternal@DXGGLOBAL@@QEAAX_K_J@Z.c)
 * Callees:
 *     ?SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z @ 0x1C00382C4 (-SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z.c)
 */

void __fastcall DXGADAPTER::SetPowerComponentActiveCBInternal(
        DXGADAPTER *this,
        __int64 a2,
        unsigned __int8 a3,
        unsigned int a4)
{
  unsigned int v6; // edi
  __int64 v8; // rax

  v6 = a2;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 736) )
  {
    v8 = WdLogNewEntry5_WdCriticalError(this, a2);
    *(_QWORD *)(v8 + 24) = 275LL;
    *(_QWORD *)(v8 + 32) = 23LL;
    *(_QWORD *)(v8 + 40) = this;
    *(_OWORD *)(v8 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v8);
  }
  DXGADAPTER::SetPowerComponentActiveCBWorker(this, v6, a3, a4);
}
