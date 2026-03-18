/*
 * XREFs of DpiFdoHandleRemoveDevice @ 0x1C02C58C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C00188E0 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     DpiCheckSpbResourceLeakage @ 0x1C00577C4 (DpiCheckSpbResourceLeakage.c)
 *     DpiFdoHandleStopDevice @ 0x1C02C5CF0 (DpiFdoHandleStopDevice.c)
 *     DpiFdoRemoveChildDescriptors @ 0x1C02C727C (DpiFdoRemoveChildDescriptors.c)
 *     DpiFdoResetFdo @ 0x1C02C7344 (DpiFdoResetFdo.c)
 *     DpiAcpiUnregisterAcpiCallbacks @ 0x1C02D1CB8 (DpiAcpiUnregisterAcpiCallbacks.c)
 *     DpiLdaUnLinkDeviceFromChain @ 0x1C02D3C00 (DpiLdaUnLinkDeviceFromChain.c)
 *     DpiDxgkDdiRemoveDevice @ 0x1C02D41A0 (DpiDxgkDdiRemoveDevice.c)
 *     DpiPdoDestroyPendingPdoObjects @ 0x1C02D46C0 (DpiPdoDestroyPendingPdoObjects.c)
 */

__int64 __fastcall DpiFdoHandleRemoveDevice(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  char *DeviceExtension; // rdi
  __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  PVOID *v15; // rax
  __int64 v16; // rcx
  void *v17; // rcx
  _DWORD *v18; // rcx
  _DWORD *v19; // rcx
  void *v20; // rcx
  int v21; // eax
  void (__fastcall *v22)(_QWORD); // rax
  void (__fastcall *v23)(_QWORD); // rax
  void (__fastcall *v24)(_QWORD); // rax
  void (__fastcall *v25)(_QWORD); // rax
  unsigned int v26; // ebx

  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  v5 = *((_QWORD *)DeviceExtension + 5);
  AcquireMiniportListMutex();
  if ( (PDEVICE_OBJECT)qword_1C00AFCC0 == DeviceObject )
  {
    v8 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v8 + 24) = -1073741637LL;
    WdLogEvent5_WdError(v8);
    qword_1C00AFCC0 = 0LL;
  }
  _InterlockedExchange64(&qword_1C00AFA50, 0LL);
  KeReleaseMutex(Mutex, 0);
  v9 = *((_DWORD *)DeviceExtension + 4);
  if ( v9 == 1953656900 )
  {
    v10 = *((_DWORD *)DeviceExtension + 5);
    if ( v10 == 2 || v10 == 3 )
    {
      v9 = 1953656900;
      v11 = *((_DWORD *)DeviceExtension + 60);
      if ( v11 == 1 || v11 == 2 )
      {
        DpiFdoHandleStopDevice(DeviceObject, Irp);
        v9 = *((_DWORD *)DeviceExtension + 4);
      }
    }
  }
  if ( v9 == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
    DpiPdoDestroyPendingPdoObjects(DeviceObject);
  IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)DeviceExtension + 2, Irp, 0x20u);
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
    DpiFdoRemoveChildDescriptors(DeviceObject);
  *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244] = *((_DWORD *)DeviceExtension + 60);
  v12 = *((_DWORD *)DeviceExtension + 59);
  ++*((_DWORD *)DeviceExtension + 69);
  *((_DWORD *)DeviceExtension + 60) = v12;
  *((_DWORD *)DeviceExtension + 59) = 7;
  AcquireMiniportListMutex();
  if ( (PDEVICE_OBJECT)qword_1C00AFCB8 == DeviceObject )
    qword_1C00AFCB8 = 0LL;
  _InterlockedExchange64(&qword_1C00AFA50, 0LL);
  KeReleaseMutex(Mutex, 0);
  KeWaitForSingleObject((PVOID)(v5 + 72), Executive, 0, 0, 0LL);
  v14 = *(_QWORD **)DeviceExtension;
  if ( *(char **)(*(_QWORD *)DeviceExtension + 8LL) != DeviceExtension
    || (v15 = (PVOID *)*((_QWORD *)DeviceExtension + 1), *v15 != DeviceExtension) )
  {
    __fastfail(3u);
  }
  *v15 = v14;
  v14[1] = v15;
  --*(_DWORD *)(v5 + 128);
  v16 = *((_QWORD *)DeviceExtension + 21);
  if ( *(_DWORD *)(v16 + 104) == 1 )
  {
    ExDeleteResourceLite((PERESOURCE)v16);
    v17 = (void *)*((_QWORD *)DeviceExtension + 21);
    if ( v17 )
    {
      ExFreePoolWithTag(v17, 0);
      *((_QWORD *)DeviceExtension + 21) = 0LL;
    }
  }
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && (unsigned int)(*((_DWORD *)DeviceExtension + 5) - 2) <= 1 )
  {
    v18 = (_DWORD *)*((_QWORD *)DeviceExtension + 182);
    if ( v18[2] == 1 && v18 )
    {
      ExFreePoolWithTag(v18, 0);
      *((_QWORD *)DeviceExtension + 182) = 0LL;
    }
    v19 = (_DWORD *)*((_QWORD *)DeviceExtension + 183);
    if ( v19[2] == 1 && v19 )
    {
      ExFreePoolWithTag(v19, 0);
      *((_QWORD *)DeviceExtension + 183) = 0LL;
    }
    if ( *((_DWORD *)DeviceExtension + 126) )
      DpiLdaUnLinkDeviceFromChain(DeviceObject);
    v20 = (void *)*((_QWORD *)DeviceExtension + 139);
    if ( v20 )
    {
      ExFreePoolWithTag(v20, 0);
      *((_QWORD *)DeviceExtension + 139) = 0LL;
    }
    DpiCheckSpbResourceLeakage((__int64)DeviceExtension, v13);
  }
  KeReleaseMutex((PRKMUTEX)(v5 + 72), 0);
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 )
  {
    v21 = *((_DWORD *)DeviceExtension + 5);
    if ( v21 == 2 )
    {
      DpiFdoResetFdo(DeviceObject);
    }
    else if ( v21 != 3 )
    {
      goto LABEL_51;
    }
    if ( DeviceExtension[1157] == 1 )
      DpiAcpiUnregisterAcpiCallbacks(DeviceObject);
    v22 = (void (__fastcall *)(_QWORD))*((_QWORD *)DeviceExtension + 73);
    if ( v22 )
    {
      v22(*((_QWORD *)DeviceExtension + 71));
      memset(DeviceExtension + 560, 0, 0x40uLL);
    }
    v23 = (void (__fastcall *)(_QWORD))*((_QWORD *)DeviceExtension + 81);
    if ( v23 )
    {
      v23(*((_QWORD *)DeviceExtension + 79));
      *((_OWORD *)DeviceExtension + 39) = 0LL;
      *((_OWORD *)DeviceExtension + 40) = 0LL;
      *((_OWORD *)DeviceExtension + 41) = 0LL;
    }
    v24 = (void (__fastcall *)(_QWORD))*((_QWORD *)DeviceExtension + 87);
    if ( v24 )
    {
      v24(*((_QWORD *)DeviceExtension + 85));
      memset(DeviceExtension + 672, 0, 0xB8uLL);
    }
    v25 = (void (__fastcall *)(_QWORD))*((_QWORD *)DeviceExtension + 110);
    if ( v25 )
    {
      v25(*((_QWORD *)DeviceExtension + 108));
      memset(DeviceExtension + 856, 0, 0x58uLL);
    }
    RtlFreeUnicodeString((PUNICODE_STRING)DeviceExtension + 32);
    RtlFreeUnicodeString((PUNICODE_STRING)DeviceExtension + 33);
  }
LABEL_51:
  Irp->IoStatus.Status = 0;
  ++Irp->CurrentLocation;
  ++Irp->Tail.Overlay.CurrentStackLocation;
  v26 = IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
  DpiDxgkDdiRemoveDevice(v5, *((_QWORD *)DeviceExtension + 6));
  IoDetachDevice(*((PDEVICE_OBJECT *)DeviceExtension + 20));
  IoDeleteDevice(DeviceObject);
  return v26;
}
