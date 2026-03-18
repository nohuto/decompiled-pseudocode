/*
 * XREFs of ExFreeToNPagedLookasideList @ 0x1C0060AA8
 * Callers:
 *     DpiFdoHandleQueryConnectionChange @ 0x1C0060660 (DpiFdoHandleQueryConnectionChange.c)
 *     DpiPdoPollingWorkItem @ 0x1C03978B0 (DpiPdoPollingWorkItem.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

void __stdcall ExFreeToNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside, PVOID Entry)
{
  ++Lookaside->L.TotalFrees;
  if ( ExQueryDepthSList(&Lookaside->L.ListHead) < Lookaside->L.Depth )
  {
    ExpInterlockedPushEntrySList(&Lookaside->L.ListHead, (PSLIST_ENTRY)Entry);
  }
  else
  {
    ++Lookaside->L.FreeMisses;
    ((void (__fastcall *)(PVOID))Lookaside->L.FreeEx)(Entry);
  }
}
