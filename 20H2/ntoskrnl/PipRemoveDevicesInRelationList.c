/*
 * XREFs of PipRemoveDevicesInRelationList @ 0x14076D69C
 * Callers:
 *     PnpDelayedRemoveWorker @ 0x14076D540 (PnpDelayedRemoveWorker.c)
 * Callees:
 *     IopSortRelationListForRemove @ 0x14074010C (IopSortRelationListForRemove.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140740B58 (PnpUnlinkDeviceRemovalRelations.c)
 *     PnpDeleteLockedDeviceNodes @ 0x140741100 (PnpDeleteLockedDeviceNodes.c)
 *     IopFreeRelationList @ 0x14074233C (IopFreeRelationList.c)
 *     IopRemoveRelationFromList @ 0x1408B52C4 (IopRemoveRelationFromList.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PipRemoveDevicesInRelationList(PVOID P)
{
  __int64 v1; // rax
  __int64 v3; // rdi
  bool v4; // si
  unsigned int v5; // ebp
  __int64 v6; // rcx

  v1 = *((_QWORD *)P + 7);
  if ( v1 )
    v3 = *(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL);
  else
    v3 = 0LL;
  if ( v3 )
  {
    v4 = 0;
    if ( (*(_DWORD *)(v3 + 396) & 0x10) == 0 )
      v4 = *(_QWORD *)(v3 + 16) != 0LL;
    v5 = IopSortRelationListForRemove(*((_QWORD *)P + 8));
    PnpDeleteLockedDeviceNodes(*((_QWORD *)P + 7), *((_QWORD *)P + 8), 2, 0, *((_DWORD *)P + 21), 0, 0LL, 0LL);
    if ( v4 )
    {
      if ( *(_DWORD *)(v3 + 300) == 782 )
        IopRemoveRelationFromList(*((_QWORD *)P + 8), *((_QWORD *)P + 7));
      PnpUnlinkDeviceRemovalRelations(v6, *((_QWORD *)P + 8));
    }
  }
  else
  {
    v5 = -1073741823;
  }
  IopFreeRelationList(*((_QWORD **)P + 8));
  ExFreePoolWithTag(P, 0);
  return v5;
}
