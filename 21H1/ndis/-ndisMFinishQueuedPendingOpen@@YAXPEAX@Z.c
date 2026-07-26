/*
 * XREFs of ?ndisMFinishQueuedPendingOpen@@YAXPEAX@Z @ 0x1C01355E0
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006E8C (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0018D70 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C00196A4 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisDereferenceAfNotification@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C00B5788 (-ndisDereferenceAfNotification@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisCreateNotifyQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAUCO_ADDRESS_FAMILY@@PEAPEAU_NDIS_AF_NOTIFY@@@Z @ 0x1C013B3B0 (-ndisCreateNotifyQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAUCO_ADDRESS_FAMILY.c)
 *     ?ndisNotifyAfRegistration@@YAXPEAX@Z @ 0x1C013B700 (-ndisNotifyAfRegistration@@YAXPEAX@Z.c)
 */

void __fastcall ndisMFinishQueuedPendingOpen(struct _NDIS_OPEN_BLOCK **P)
{
  struct _NDIS_OPEN_BLOCK *v1; // rbx
  struct _NDIS_MINIPORT_BLOCK *MiniportHandle; // rsi
  KIRQL v4; // dl
  KIRQL NewIrql; // [rsp+50h] [rbp+8h] BYREF
  PVOID Pa; // [rsp+58h] [rbp+10h] BYREF

  v1 = *P;
  Pa = 0LL;
  NewIrql = 0;
  MiniportHandle = v1->MiniportHandle;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x12u,
      (struct _GUID *)&WPP_c1b31223335c304c22f5aac6e772b23d_Traceguids,
      v1);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(MiniportHandle, &NewIrql);
  ndisCreateNotifyQueue(MiniportHandle, v1, 0LL, (struct _NDIS_AF_NOTIFY **)&Pa);
  v4 = NewIrql;
  MiniportHandle->MiniportThread = 0LL;
  KeReleaseSpinLock(&MiniportHandle->Lock, v4);
  if ( Pa )
    ndisNotifyAfRegistration(Pa);
  ExFreePoolWithTag(P, 0);
  ndisDereferenceAfNotification(v1);
  ndisMDereferenceOpenUnlocked((__int64)v1, 0);
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x13u,
      (struct _GUID *)&WPP_c1b31223335c304c22f5aac6e772b23d_Traceguids,
      v1);
}
