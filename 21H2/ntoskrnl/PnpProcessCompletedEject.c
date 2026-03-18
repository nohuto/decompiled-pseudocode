/*
 * XREFs of PnpProcessCompletedEject @ 0x140947450
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1407655BC (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     PnpFreeWatchdog @ 0x1402D3C18 (PnpFreeWatchdog.c)
 *     ExDeleteTimer @ 0x1402D3D40 (ExDeleteTimer.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     PnpRecordBlackbox @ 0x14074ED04 (PnpRecordBlackbox.c)
 *     IopFreeRelationList @ 0x140767600 (IopFreeRelationList.c)
 *     PpDevNodeUnlockTree @ 0x140775698 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14077572C (PpDevNodeLockTree.c)
 *     PnpCompleteDeviceEvent @ 0x1407D78A0 (PnpCompleteDeviceEvent.c)
 *     PnpInvalidateRelationsInList @ 0x14080E8D0 (PnpInvalidateRelationsInList.c)
 *     PpProfileMarkAllTransitioningDocksEjected @ 0x14094FEE4 (PpProfileMarkAllTransitioningDocksEjected.c)
 *     PnpWatchdogEtwWrite @ 0x140950084 (PnpWatchdogEtwWrite.c)
 *     PnpSetDeviceRemovalSafe @ 0x1409509D8 (PnpSetDeviceRemovalSafe.c)
 *     PnpTrackQueryRemoveDevices @ 0x140950DA4 (PnpTrackQueryRemoveDevices.c)
 *     IopWarmEjectDevice @ 0x14095A67C (IopWarmEjectDevice.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall PnpProcessCompletedEject(PVOID P)
{
  int v1; // r14d
  __int64 v3; // rcx
  _QWORD *v4; // rcx
  PVOID *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  unsigned int **v8; // rcx
  _QWORD *v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rbp
  int v12; // edx

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
  v8 = (unsigned int **)*((_QWORD *)P + 8);
  if ( v8 )
  {
    if ( *((_BYTE *)P + 88) )
    {
      PpProfileMarkAllTransitioningDocksEjected();
      v8 = (unsigned int **)*((_QWORD *)P + 8);
    }
    PnpInvalidateRelationsInList(v8, 4u, 0, 1);
    PnpTrackQueryRemoveDevices(*((_QWORD *)P + 8), 0LL);
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
      v11 = *(_QWORD *)(v10 + 8);
      ExDeleteTimer(*(_QWORD *)(v11 + 56), 1, 1, 0LL);
      *(_QWORD *)(v11 + 56) = 0LL;
      if ( *(int *)(v11 + 96) > 0 )
        KeWaitForSingleObject((PVOID)(v11 + 104), Executive, 0, 0, 0LL);
      ExFreePoolWithTag((PVOID)v11, 0x54645750u);
      v12 = *(_DWORD *)(v10 + 16);
      *(_QWORD *)(v10 + 8) = 0LL;
      PnpRecordBlackbox(0LL, v12);
      if ( *(_BYTE *)(v10 + 32) )
        PnpWatchdogEtwWrite(v10, 0LL);
      PnpFreeWatchdog((void *)v10);
      v9[13] = 0LL;
    }
    PnpCompleteDeviceEvent(v9, v1);
  }
  if ( *((_BYTE *)P + 89) )
    PnpSetDeviceRemovalSafe(*((PVOID *)P + 7));
  ObfDereferenceObject(*((PVOID *)P + 7));
  ExFreePoolWithTag(P, 0);
}
