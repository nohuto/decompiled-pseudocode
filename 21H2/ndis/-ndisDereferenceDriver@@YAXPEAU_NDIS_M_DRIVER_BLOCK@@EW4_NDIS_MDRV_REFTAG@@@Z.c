/*
 * XREFs of ?ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z @ 0x1C001BD2C
 * Callers:
 *     ?ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x1C001B924 (-ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferenceTopMiniportByNameForNsi@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU1@KKEW4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C001BA78 (-ndisReferenceTopMiniportByNameForNsi@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU1@KKEW4_NDIS_NSI_REFTAG@@.c)
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C0036BC0 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     NdisAllocateIoWorkItem @ 0x1C0039440 (NdisAllocateIoWorkItem.c)
 *     NdisIMDeInitializeDeviceInstance @ 0x1C0060700 (NdisIMDeInitializeDeviceInstance.c)
 *     NdisLWMUninitializeNetworkInterface @ 0x1C0060FA0 (NdisLWMUninitializeNetworkInterface.c)
 *     NdisFreeIoWorkItem @ 0x1C0071540 (NdisFreeIoWorkItem.c)
 *     ?ndisPnPIrpStopDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C00808D8 (-ndisPnPIrpStopDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1C0096E48 (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 *     ndisMTimerObjectDpc @ 0x1C00BCCE0 (ndisMTimerObjectDpc.c)
 *     ?ndisInternalDeregisterMiniportDriver@@YAXPEAX@Z @ 0x1C0115360 (-ndisInternalDeregisterMiniportDriver@@YAXPEAX@Z.c)
 *     ?ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C011DEF4 (-ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisWdfPostReleaseHardware@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011E438 (-ndisWdfPostReleaseHardware@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z @ 0x1C012BA8C (-ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C012F258 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 *     ?ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0135680 (-ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0138C30 (-ndisMUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     NdisDereferenceWithTag @ 0x1C000F0A0 (NdisDereferenceWithTag.c)
 *     NdisFreeRefCount @ 0x1C00BE920 (NdisFreeRefCount.c)
 */

void __fastcall ndisDereferenceDriver(struct _NDIS_M_DRIVER_BLOCK *a1, char a2, unsigned __int8 a3)
{
  _REFERENCE_EX *p_Ref; // rsi
  KIRQL v7; // r15
  KIRQL v8; // bp
  char v10; // bl
  struct _NDIS_M_DRIVER_BLOCK *v11; // rcx
  struct _NDIS_M_DRIVER_BLOCK **p_NextDriver; // rdx
  PVOID v13; // rcx
  wchar_t *Buffer; // rcx
  _NDIS_WRAPPER_HANDLE *NdisDriverInfo; // rcx
  _NDIS_PENDING_IM_INSTANCE *PendingDeviceList; // rcx
  _NDIS_PENDING_IM_INSTANCE *Next; // rbx

  p_Ref = &a1->Ref;
  v7 = 0;
  v8 = KeAcquireSpinLockRaiseToDpc(&a1->Ref.SpinLock);
  NdisDereferenceWithTag((ULONG_PTR)p_Ref->RefCountTracker, a3);
  if ( p_Ref->ReferenceCount-- == 1 )
  {
    v10 = 1;
    if ( !p_Ref->ZeroBased )
    {
      NdisFreeRefCount((ULONG_PTR)p_Ref->RefCountTracker);
      p_Ref->RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)1;
    }
  }
  else
  {
    v10 = 0;
  }
  KeReleaseSpinLock(&p_Ref->SpinLock, v8);
  if ( v10 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x14u,
        0x17u,
        (struct _GUID *)&WPP_5f235f4f575e31f0149e7e439a696049_Traceguids,
        a1);
    if ( !a2 )
      v7 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    v11 = ndisMiniDriverList;
    p_NextDriver = &ndisMiniDriverList;
    while ( v11 )
    {
      if ( v11 == a1 )
      {
        v13 = ndisDriverObject;
        *p_NextDriver = a1->NextDriver;
        ObfDereferenceObject(v13);
        break;
      }
      p_NextDriver = &v11->NextDriver;
      v11 = v11->NextDriver;
    }
    if ( !a2 )
      KeReleaseSpinLock(&ndisMiniDriverListLock, v7);
    Buffer = a1->ImageName.Buffer;
    if ( Buffer )
    {
      ExFreePoolWithTag(Buffer, 0);
      a1->ImageName.Buffer = 0LL;
    }
    NdisDriverInfo = a1->NdisDriverInfo;
    if ( NdisDriverInfo )
    {
      ExFreePoolWithTag(NdisDriverInfo, 0);
      a1->NdisDriverInfo = 0LL;
    }
    if ( (a1->Flags & 1) != 0 )
    {
      PendingDeviceList = a1->PendingDeviceList;
      if ( PendingDeviceList )
      {
        do
        {
          Next = PendingDeviceList->Next;
          ExFreePoolWithTag(PendingDeviceList, 0);
          PendingDeviceList = Next;
        }
        while ( Next );
      }
    }
    KeSetEvent(&a1->MiniportsRemovedEvent, 0, 0);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x14u,
        0x18u,
        (struct _GUID *)&WPP_5f235f4f575e31f0149e7e439a696049_Traceguids,
        a1);
  }
}
