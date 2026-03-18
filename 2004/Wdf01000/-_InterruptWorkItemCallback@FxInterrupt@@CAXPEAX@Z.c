/*
 * XREFs of ?_InterruptWorkItemCallback@FxInterrupt@@CAXPEAX@Z @ 0x1C0089EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?WorkItemHandler@FxInterrupt@@QEAAXXZ @ 0x1C008A550 (-WorkItemHandler@FxInterrupt@@QEAAXXZ.c)
 */

void __fastcall FxInterrupt::_InterruptWorkItemCallback(FxInterrupt *DeferredContext)
{
  FxInterrupt::WorkItemHandler(DeferredContext);
}
