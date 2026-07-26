/*
 * XREFs of NdisCloseAdapter @ 0x1C013AA30
 * Callers:
 *     NdisCloseAdapterEx @ 0x1C0097C30 (NdisCloseAdapterEx.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C013AF90 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006E8C (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000DC70 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     PktMonClientComponentUnregister @ 0x1C00267C4 (PktMonClientComponentUnregister.c)
 *     WPP_RECORDER_SF_qqZZ @ 0x1C0029330 (WPP_RECORDER_SF_qqZZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 *     ?ndisCleanUpForProtocol@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0096968 (-ndisCleanUpForProtocol@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     McTemplateK0jqxz_EtwWriteTransfer @ 0x1C0097B2C (McTemplateK0jqxz_EtwWriteTransfer.c)
 *     ?ndisQueueWorkitem@@YAXPEAU_WORK_QUEUE_ITEM@@@Z @ 0x1C00AA454 (-ndisQueueWorkitem@@YAXPEAU_WORK_QUEUE_ITEM@@@Z.c)
 *     ?GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ @ 0x1C00F87D8 (-GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ.c)
 *     ?ndisMKillOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0138B58 (-ndisMKillOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 */

void __fastcall NdisCloseAdapter(int *a1, struct _NDIS_OPEN_BLOCK *a2)
{
  KIRQL v4; // al
  struct _NDIS_OPEN_BLOCK *NextGlobalOpen; // rsi
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rsi
  _NDIS_PROTOCOL_BLOCK *ProtocolHandle; // rbp
  unsigned __int8 v12; // dl
  int v13; // eax
  void (__fastcall **BusInterface)(_QWORD); // rcx
  KIRQL v15; // al
  char v16[8]; // [rsp+30h] [rbp-38h]

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x1Cu,
      (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
      a2);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
  NextGlobalOpen = ndisGlobalOpenList;
  v6 = 0;
  while ( NextGlobalOpen && NextGlobalOpen != a2 )
    NextGlobalOpen = NextGlobalOpen->NextGlobalOpen;
  KeReleaseSpinLock(&ndisGlobalOpenListLock, v4);
  if ( !NextGlobalOpen )
  {
    *a1 = 0;
    goto LABEL_25;
  }
  MiniportHandle = a2->MiniportHandle;
  ProtocolHandle = a2->ProtocolHandle;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqZZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      v9,
      0x1Du,
      (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
      (char)MiniportHandle,
      (char)a2,
      &ProtocolHandle->Name.Length,
      &MiniportHandle->pAdapterInstanceName->Length);
  if ( (byte_1C00E6081 & 2) != 0 )
    McTemplateK0jqxz_EtwWriteTransfer(
      v8,
      v7,
      &MiniportHandle->InterfaceGuid,
      (__int64)&MiniportHandle->InterfaceGuid,
      MiniportHandle->IfIndex,
      MiniportHandle->NetLuid.Value,
      ProtocolHandle->Name.Buffer);
  PktMonClientComponentUnregister(&a2->PktMonComp.CompHandle);
  if ( ProtocolHandle->MajorNdisVersion < 6u )
  {
    if ( !a2->PendingLegacyUnbind
      || (struct NDIS_BIND_LINK_BASE *)a2->Bind != Ndis::BindEngine::GetCurrentLink(&MiniportHandle->BindEngine) )
    {
      v15 = KeAcquireSpinLockRaiseToDpc(&a2->SpinLock);
      a2->OpenFlags |= 0x40000000u;
      KeReleaseSpinLock(&a2->SpinLock, v15);
      ndisQueueWorkitem(&a2->UnsolicitedUnbindComplete);
LABEL_23:
      v13 = 259;
      goto LABEL_24;
    }
LABEL_18:
    a2->PendingLegacyUnbind = 0;
    if ( (MiniportHandle->PnPFlags & 0x2000) != 0 )
    {
      BusInterface = (void (__fastcall **)(_QWORD))MiniportHandle->BusInterface;
      if ( BusInterface )
        BusInterface[5](BusInterface[1]);
    }
    ndisCleanUpForProtocol(a2, v12);
    ndisMKillOpen(a2);
    goto LABEL_23;
  }
  a2->CallingFromNdis6Protocol = 0;
  if ( ProtocolHandle->MutexOwnerThread == KeGetCurrentThread() )
    goto LABEL_18;
  v13 = -1073741823;
LABEL_24:
  *a1 = v13;
  v6 = v13;
LABEL_25:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v16 = v6;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x1Eu,
      (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
      (char)a2,
      *(_QWORD *)v16);
  }
}
