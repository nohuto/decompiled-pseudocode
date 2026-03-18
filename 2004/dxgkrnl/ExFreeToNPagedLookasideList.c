/*
 * XREFs of ExFreeToNPagedLookasideList @ 0x1C00209CC
 * Callers:
 *     DpiFdoHandleQueryConnectionChange @ 0x1C00208E8 (DpiFdoHandleQueryConnectionChange.c)
 *     ?CompletePnPTransition@DXGSESSIONMGR@@QEAAXPEAX@Z @ 0x1C01957E4 (-CompletePnPTransition@DXGSESSIONMGR@@QEAAXPEAX@Z.c)
 *     DpiPdoPollingWorkItem @ 0x1C02D8FA0 (DpiPdoPollingWorkItem.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 */

void __stdcall ExFreeToNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside, PVOID Entry)
{
  ++Lookaside->L.TotalFrees;
  if ( ExQueryDepthSList(&Lookaside->L.ListHead) >= Lookaside->L.Depth )
  {
    ++Lookaside->L.FreeMisses;
    ((void (__fastcall *)(PVOID))Lookaside->L.FreeEx)(Entry);
  }
  else
  {
    ExpInterlockedPushEntrySList(&Lookaside->L.ListHead, (PSLIST_ENTRY)Entry);
  }
}
