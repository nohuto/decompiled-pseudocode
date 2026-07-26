/*
 * XREFs of ?ndisCloseIrpHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0006AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006C9C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006E8C (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E000 (WPP_RECORDER_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 *     ?ndisDummyHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_OBJECT_HEADER@@PEAU_IRP@@@Z @ 0x1C006A9B0 (-ndisDummyHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_OBJECT_HEADER@@PEAU_IRP@@@Z.c)
 */

__int64 __fastcall ndisCloseIrpHandler(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  struct _NDIS_MINIPORT_BLOCK *DeviceExtension; // rbx
  struct _IRP *v3; // rdi
  _IO_STACK_LOCATION *CurrentStackLocation; // r15
  _FILE_OBJECT *FileObject; // rax
  unsigned int v7; // esi
  _BYTE *FsContext; // r12
  KIRQL v9; // al
  KIRQL v10; // dl
  int v11; // edx
  void (__fastcall **BusInterface)(_QWORD); // rcx
  char v14; // [rsp+30h] [rbp-38h]
  KIRQL NewIrql; // [rsp+70h] [rbp+8h] BYREF

  DeviceExtension = (struct _NDIS_MINIPORT_BLOCK *)a1->DeviceExtension;
  v3 = a2;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( DeviceExtension->Header.Type == 17 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v14 = (char)a2;
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)a2,
        11,
        29,
        (struct _GUID *)&WPP_51efd63ed52c3a002f03851f2f400cea_Traceguids,
        (char)DeviceExtension,
        v14);
    }
    FileObject = CurrentStackLocation->FileObject;
    v7 = 0;
    FsContext = FileObject->FsContext;
    FileObject->FsContext = 0LL;
    v9 = KeAcquireSpinLockRaiseToDpc(&DeviceExtension->Ref.SpinLock);
    NewIrql = v9;
    if ( FsContext[24] )
      --DeviceExtension->NumAdminOpens;
    else
      --DeviceExtension->NumUserOpens;
    KeReleaseSpinLock(&DeviceExtension->Ref.SpinLock, v9);
    ExFreePoolWithTag(FsContext, 0);
    ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(DeviceExtension, &NewIrql);
    v10 = NewIrql;
    --DeviceExtension->UserModeOpenReferences;
    DeviceExtension->MiniportThread = 0LL;
    KeReleaseSpinLock(&DeviceExtension->Lock, v10);
    MmUnlockPagableImageSection(ImageSectionHandle);
    _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
    ndisDereferenceMiniport(DeviceExtension, MPREF_UM_HANDLE);
    if ( (DeviceExtension->PnPFlags & 0x2000) != 0 )
    {
      BusInterface = (void (__fastcall **)(_QWORD))DeviceExtension->BusInterface;
      if ( BusInterface )
        BusInterface[5](BusInterface[1]);
    }
    v3->IoStatus.Status = 0;
    IofCompleteRequest(v3, 2);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 4;
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v11,
        11,
        30,
        (struct _GUID *)&WPP_51efd63ed52c3a002f03851f2f400cea_Traceguids,
        (char)DeviceExtension,
        (char)v3);
    }
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)a2,
        11,
        28,
        (struct _GUID *)&WPP_51efd63ed52c3a002f03851f2f400cea_Traceguids,
        (char)DeviceExtension,
        (char)v3);
    }
    return (unsigned int)ndisDummyHandler(a1, &DeviceExtension->Header, v3);
  }
  return v7;
}
