/*
 * XREFs of ?DxgkpComponentIdleListTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C003DEA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessComponentIdleList@DXGADAPTER@@QEAAXXZ @ 0x1C00379A8 (-ProcessComponentIdleList@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DxgkpComponentIdleListTimerDpc(
        struct _KDPC *Dpc,
        KSPIN_LOCK *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  DXGADAPTER::ProcessComponentIdleList(DeferredContext);
}
