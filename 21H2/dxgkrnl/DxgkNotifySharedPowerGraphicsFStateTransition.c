/*
 * XREFs of DxgkNotifySharedPowerGraphicsFStateTransition @ 0x1C00540C8
 * Callers:
 *     ?SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z @ 0x1C0014D90 (-SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z.c)
 *     ?SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z @ 0x1C00170F0 (-SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z.c)
 *     ?PowerRuntimeComponentIdleStateCallback_Worker@DXGADAPTER@@QEAAXKKE@Z @ 0x1C001A984 (-PowerRuntimeComponentIdleStateCallback_Worker@DXGADAPTER@@QEAAXKKE@Z.c)
 *     ?CompleteFStateTransitionCB@DXGADAPTER@@QEAAXI@Z @ 0x1C00434B8 (-CompleteFStateTransitionCB@DXGADAPTER@@QEAAXI@Z.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?NotifySharedPowerGraphicsFStateTransition@DXGGLOBAL@@QEAAXQEAXKIE@Z @ 0x1C00539A4 (-NotifySharedPowerGraphicsFStateTransition@DXGGLOBAL@@QEAAXQEAXKIE@Z.c)
 */

void __fastcall DxgkNotifySharedPowerGraphicsFStateTransition(void *a1, unsigned int a2, unsigned int a3, char a4)
{
  KSPIN_LOCK *Global; // rax

  Global = (KSPIN_LOCK *)DXGGLOBAL_GetGlobal();
  DXGGLOBAL::NotifySharedPowerGraphicsFStateTransition(Global, a1, a2, a3, a4);
}
