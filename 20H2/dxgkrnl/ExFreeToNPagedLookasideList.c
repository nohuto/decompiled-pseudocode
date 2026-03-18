/*
 * XREFs of ExFreeToNPagedLookasideList @ 0x1C0020A2C
 * Callers:
 *     DpiFdoHandleQueryConnectionChange @ 0x1C0020948 (DpiFdoHandleQueryConnectionChange.c)
 *     ?CompletePnPTransition@DXGSESSIONMGR@@QEAAXPEAX@Z @ 0x1C0194634 (-CompletePnPTransition@DXGSESSIONMGR@@QEAAXPEAX@Z.c)
 *     DpiPdoPollingWorkItem @ 0x1C02D7FE0 (DpiPdoPollingWorkItem.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
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
