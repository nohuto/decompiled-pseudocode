/*
 * XREFs of ExFreeToPagedLookasideList @ 0x1C0029DEC
 * Callers:
 *     ?CompletePnPTransition@DXGSESSIONMGR@@QEAAXPEAX@Z @ 0x1C0217D04 (-CompletePnPTransition@DXGSESSIONMGR@@QEAAXPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

void __stdcall ExFreeToPagedLookasideList(PPAGED_LOOKASIDE_LIST Lookaside, PVOID Entry)
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
