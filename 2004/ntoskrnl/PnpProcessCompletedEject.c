/*
 * XREFs of PnpProcessCompletedEject @ 0x14089F3B0
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1407303C4 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     PnpCompleteDeviceEvent @ 0x1406497B8 (PnpCompleteDeviceEvent.c)
 *     PnpDisableWatchdog @ 0x1406498CC (PnpDisableWatchdog.c)
 *     PpDevNodeUnlockTree @ 0x1406A5D00 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1406A5E2C (PpDevNodeLockTree.c)
 *     PnpTrackQueryRemoveDevices @ 0x140722390 (PnpTrackQueryRemoveDevices.c)
 *     PnpInvalidateRelationsInList @ 0x140731BE8 (PnpInvalidateRelationsInList.c)
 *     IopFreeRelationList @ 0x140732EAC (IopFreeRelationList.c)
 *     PpProfileMarkAllTransitioningDocksEjected @ 0x1408A85EC (PpProfileMarkAllTransitioningDocksEjected.c)
 *     PnpSetDeviceRemovalSafe @ 0x1408A8DA4 (PnpSetDeviceRemovalSafe.c)
 *     IopWarmEjectDevice @ 0x1408B1510 (IopWarmEjectDevice.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall PnpProcessCompletedEject(PVOID P)
{
  int v1; // esi
  __int64 v3; // rcx
  _QWORD *v4; // rcx
  PVOID *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 *v8; // rcx
  _QWORD *v9; // rdi
  __int64 v10; // rcx

  v1 = 0;
  if ( *((_DWORD *)P + 23) > 1u )
  {
    *((_BYTE *)P + 89) = 0;
    v1 = IopWarmEjectDevice(*((_QWORD *)P + 7));
  }
  v3 = *((_QWORD *)P + 12);
  if ( v3 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(v3 + 32))(*(_QWORD *)(v3 + 8), 1LL);
    (*(void (__fastcall **)(_QWORD))(*((_QWORD *)P + 12) + 24LL))(*(_QWORD *)(*((_QWORD *)P + 12) + 8LL));
  }
  PpDevNodeLockTree(1);
  v4 = *(_QWORD **)P;
  if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P || (v5 = (PVOID *)*((_QWORD *)P + 1), *v5 != P) )
    __fastfail(3u);
  *v5 = v4;
  v4[1] = v5;
  v6 = *((_QWORD *)P + 7);
  if ( v6 )
    v7 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL);
  else
    v7 = 0LL;
  v8 = (__int64 *)*((_QWORD *)P + 8);
  if ( v8 )
  {
    if ( *((_BYTE *)P + 88) )
    {
      PpProfileMarkAllTransitioningDocksEjected();
      v8 = (__int64 *)*((_QWORD *)P + 8);
    }
    PnpInvalidateRelationsInList(v8, 4u, 0, 1);
    PnpTrackQueryRemoveDevices(*((_QWORD *)P + 8), 0);
    IopFreeRelationList(*((_QWORD **)P + 8));
    *(_QWORD *)(v7 + 696) = 0LL;
  }
  else
  {
    *((_BYTE *)P + 89) = 0;
  }
  PpDevNodeUnlockTree(1);
  v9 = (_QWORD *)*((_QWORD *)P + 6);
  if ( v9 )
  {
    v10 = v9[13];
    if ( v10 )
    {
      PnpDisableWatchdog(v10);
      v9[13] = 0LL;
    }
    PnpCompleteDeviceEvent(v9, v1);
  }
  if ( *((_BYTE *)P + 89) )
    PnpSetDeviceRemovalSafe(*((PVOID *)P + 7));
  HalPutDmaAdapter(*((PADAPTER_OBJECT *)P + 7));
  ExFreePoolWithTag(P, 0);
}
