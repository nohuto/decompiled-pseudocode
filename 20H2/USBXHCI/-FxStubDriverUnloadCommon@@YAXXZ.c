/*
 * XREFs of ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C00507C0
 * Callers:
 *     FxDriverEntryWorker @ 0x1C00182B4 (FxDriverEntryWorker.c)
 *     FxStubDriverUnload @ 0x1C0050800 (FxStubDriverUnload.c)
 * Callees:
 *     ?FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z @ 0x1C0050834 (-FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z.c)
 */

void __fastcall FxStubDriverUnloadCommon(struct _WDF_BIND_INFO *a1)
{
  FxStubUnbindClasses(a1);
  WdfVersionUnbind(&DestinationString, &WdfBindInfo, WdfDriverGlobals);
}
