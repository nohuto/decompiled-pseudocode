/*
 * XREFs of ?_WorkItemThunk@FxSystemWorkItem@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C0003600
 * Callers:
 *     <none>
 * Callees:
 *     ?DecrementWorkItemQueued@FxSystemWorkItem@@QEAAXXZ @ 0x1C0003628 (-DecrementWorkItemQueued@FxSystemWorkItem@@QEAAXXZ.c)
 *     ?WorkItemHandler@FxSystemWorkItem@@AEAAXXZ @ 0x1C0003920 (-WorkItemHandler@FxSystemWorkItem@@AEAAXXZ.c)
 */

void __fastcall FxSystemWorkItem::_WorkItemThunk(_DEVICE_OBJECT *DeviceObject, FxSystemWorkItem *Context)
{
  FxSystemWorkItem::WorkItemHandler(Context);
  FxSystemWorkItem::DecrementWorkItemQueued(Context);
}
