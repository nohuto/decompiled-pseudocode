/*
 * XREFs of ?_InterruptWorkItemCallback@FxInterrupt@@CAXPEAX@Z @ 0x1C00895C0
 * Callers:
 *     <none>
 * Callees:
 *     ?WorkItemHandler@FxInterrupt@@QEAAXXZ @ 0x1C0089C50 (-WorkItemHandler@FxInterrupt@@QEAAXXZ.c)
 */

void __fastcall FxInterrupt::_InterruptWorkItemCallback(FxInterrupt *DeferredContext)
{
  FxInterrupt::WorkItemHandler(DeferredContext);
}
