/*
 * XREFs of DpiGdiHandleAsyncDisplayCallout @ 0x1C02C6290
 * Callers:
 *     <none>
 * Callees:
 *     DpiGdiSyncDisplayCallout @ 0x1C02C62DC (DpiGdiSyncDisplayCallout.c)
 */

void __fastcall DpiGdiHandleAsyncDisplayCallout(PVOID IoObject, _QWORD *Context, PIO_WORKITEM IoWorkItem)
{
  DpiGdiSyncDisplayCallout(*Context);
  IoFreeWorkItem(IoWorkItem);
  ExFreePoolWithTag(Context, 0);
}
