/*
 * XREFs of ?ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C012DC7C
 * Callers:
 *     ?ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00FFE80 (-ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INF.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000DC70 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x1C001A1C8 (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qqZZ @ 0x1C0029330 (WPP_RECORDER_SF_qqZZ.c)
 *     McTemplateK0juqjzzz_EtwWriteTransfer @ 0x1C0065310 (McTemplateK0juqjzzz_EtwWriteTransfer.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C00F86F0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisFInvokeRestart@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_RESTART_PARAMETERS@@@Z @ 0x1C00FFFE4 (-ndisFInvokeRestart@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_RESTART_PARAMETERS@@@Z.c)
 */

__int64 __fastcall ndisRestartFilterInner(struct _NDIS_FILTER_BLOCK *a1, struct NDIS_RESTART_INFORMATION *a2)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // rdi
  KIRQL v5; // dl
  __int64 v6; // rdx
  __int64 v7; // r8
  _NDIS_FILTER_BLOCK *LowerFilter; // rcx
  unsigned int v9; // edi
  KIRQL v10; // dl
  _NDIS_MINIPORT_BLOCK *v12; // rcx
  KIRQL v13; // dl
  char v14[8]; // [rsp+38h] [rbp-39h]
  __int128 v15; // [rsp+58h] [rbp-19h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-9h] BYREF
  struct _NDIS_FILTER_RESTART_PARAMETERS v17; // [rsp+80h] [rbp+Fh] BYREF
  KIRQL NewIrql; // [rsp+D8h] [rbp+67h] BYREF

  Miniport = a1->Miniport;
  *((_DWORD *)&v17.MiniportPhysicalMediaType + 1) = 0;
  *(&v17.LowerIfIndex + 1) = 0;
  *(_QWORD *)&v17.Flags = 0LL;
  v15 = 0LL;
  memset(&Event, 0, sizeof(Event));
  NewIrql = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xFu,
      (struct _GUID *)&WPP_3188c4384181338fe0d477b94428bcd6_Traceguids,
      a1);
  NDIS_ACQUIRE_FILTER_SPIN_LOCK(a1, &NewIrql);
  v5 = NewIrql;
  a1->LockThread = 0LL;
  LOBYTE(a1->Flags) = 0;
  a1->Flags |= 0x20u;
  KeReleaseSpinLock(&a1->Lock, v5);
  a1->State = NdisFilterRestarting;
  if ( (byte_1C00E6083 & 1) != 0 )
    McTemplateK0juqjzzz_EtwWriteTransfer(
      (__int64)&a1->Miniport->InterfaceGuid,
      (__int64)a1->FilterInstanceName.__ptr_.__value_,
      &a1->InterfaceGuid,
      (__int64)&a1->InterfaceGuid,
      3,
      3,
      (__int64)&a1->Miniport->InterfaceGuid,
      a1->Miniport->pAdapterInstanceName->Buffer,
      a1->FilterInstanceName.__ptr_.__value_->Buffer,
      a1->FilterFriendlyName->Buffer);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  LowerFilter = a1->LowerFilter;
  a1->AsyncOpContext = (_FILTER_PAUSE_RESTART_CONTEXT *)&v15;
  v17.Header = (_NDIS_OBJECT_HEADER)3146139;
  v17.RestartAttributes = &a2->Attributes;
  if ( LowerFilter )
  {
    v17.MiniportMediaType = LowerFilter->MediaType;
    v17.MiniportPhysicalMediaType = LowerFilter->PhysicalMediaType;
    v17.LowerIfIndex = LowerFilter->IfIndex;
    v17.LowerIfNetLuid.Value = LowerFilter->IfBlock->NetLuid.Value;
  }
  else
  {
    v12 = a1->Miniport;
    v17.MiniportMediaType = v12->MiniportMediaType;
    v17.MiniportPhysicalMediaType = v12->MiniportPhysicalMediumType;
    v17.LowerIfIndex = v12->IfIndex;
    v17.LowerIfNetLuid.Value = v12->NetLuid.Value;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqZZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      v7,
      0x10u,
      (struct _GUID *)&WPP_3188c4384181338fe0d477b94428bcd6_Traceguids,
      (char)Miniport,
      (char)a1,
      &a1->FilterDriver->DefaultFilterCharacteristics.FriendlyName.Length,
      &Miniport->pAdapterInstanceName->Length);
  v9 = ndisFInvokeRestart(a1, &v17);
  if ( v9 == 259 )
  {
    ndisWaitForKernelObject(&Event);
    v9 = DWORD2(v15);
  }
  a1->AsyncOpContext = 0LL;
  if ( v9 )
  {
    a1->State = NdisFilterPaused;
    if ( (byte_1C00E6083 & 1) != 0 )
      McTemplateK0juqjzzz_EtwWriteTransfer(
        (__int64)&a1->Miniport->InterfaceGuid,
        (__int64)a1->FilterInstanceName.__ptr_.__value_,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        2,
        4,
        (__int64)&a1->Miniport->InterfaceGuid,
        a1->Miniport->pAdapterInstanceName->Buffer,
        a1->FilterInstanceName.__ptr_.__value_->Buffer,
        a1->FilterFriendlyName->Buffer);
    NDIS_ACQUIRE_FILTER_SPIN_LOCK(a1, &NewIrql);
    v13 = NewIrql;
    a1->LockThread = 0LL;
    LOBYTE(a1->Flags) = 0;
    a1->Flags |= 4u;
    KeReleaseSpinLock(&a1->Lock, v13);
  }
  else
  {
    a1->IfBlock->AccessType = a2->General.AccessType;
    a1->IfBlock->ConnectionType = a2->General.ConnectionType;
    a1->IfBlock->ifMtu = a2->General.MtuSize;
    NDIS_ACQUIRE_FILTER_SPIN_LOCK(a1, &NewIrql);
    v10 = NewIrql;
    a1->LockThread = 0LL;
    LOBYTE(a1->Flags) = 0;
    a1->Flags |= 0x10u;
    KeReleaseSpinLock(&a1->Lock, v10);
    a1->State = NdisFilterRunning;
    if ( (byte_1C00E6083 & 1) != 0 )
      McTemplateK0juqjzzz_EtwWriteTransfer(
        (__int64)&a1->Miniport->InterfaceGuid,
        (__int64)a1->FilterInstanceName.__ptr_.__value_,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        4,
        5,
        (__int64)&a1->Miniport->InterfaceGuid,
        a1->Miniport->pAdapterInstanceName->Buffer,
        a1->FilterInstanceName.__ptr_.__value_->Buffer,
        a1->FilterFriendlyName->Buffer);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v14 = v9;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x11u,
      (struct _GUID *)&WPP_3188c4384181338fe0d477b94428bcd6_Traceguids,
      (char)a1,
      *(_QWORD *)v14);
  }
  return v9;
}
