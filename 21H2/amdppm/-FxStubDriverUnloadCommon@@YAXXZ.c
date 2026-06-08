/*
 * XREFs of ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C0002804
 * Callers:
 *     FxDriverEntryWorker @ 0x1C0002874 (FxDriverEntryWorker.c)
 *     FxStubDriverUnload @ 0x1C00029A0 (FxStubDriverUnload.c)
 * Callees:
 *     ?FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z @ 0x1C0002BA8 (-FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z.c)
 */

void __fastcall FxStubDriverUnloadCommon(struct _WDF_BIND_INFO *a1)
{
  FxStubUnbindClasses(a1);
  WdfVersionUnbind(&DestinationString, &WdfBindInfo, WdfDriverGlobals);
}
