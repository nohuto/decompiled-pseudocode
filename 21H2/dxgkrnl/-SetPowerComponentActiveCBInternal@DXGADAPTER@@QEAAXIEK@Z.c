/*
 * XREFs of ?SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z @ 0x1C0014C64
 * Callers:
 *     ?SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z @ 0x1C0014AB4 (-SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z.c)
 *     DxgSetPowerComponentActiveNoWaitCB @ 0x1C004BB90 (DxgSetPowerComponentActiveNoWaitCB.c)
 *     DxgSetPowerComponentActiveCBInternal @ 0x1C01C9260 (DxgSetPowerComponentActiveCBInternal.c)
 *     ?CsExitInitiatedWnfCallbackInternal@DXGGLOBAL@@QEAAX_K_J@Z @ 0x1C01F1FFC (-CsExitInitiatedWnfCallbackInternal@DXGGLOBAL@@QEAAX_K_J@Z.c)
 *     ?StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ @ 0x1C0215198 (-StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ.c)
 *     ?EnableStablePowerState@DXGADAPTER@@QEAAXXZ @ 0x1C02BB714 (-EnableStablePowerState@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z @ 0x1C0014D90 (-SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z.c)
 */

void __fastcall DXGADAPTER::SetPowerComponentActiveCBInternal(
        DXGADAPTER *this,
        unsigned int a2,
        unsigned __int8 a3,
        unsigned int a4)
{
  if ( a2 >= *((_DWORD *)this + 760) )
    WdLogSingleEntry5(0LL, 275LL, 23LL, this, 0LL, 0LL);
  DXGADAPTER::SetPowerComponentActiveCBWorker(this, a2, a3, a4);
}
