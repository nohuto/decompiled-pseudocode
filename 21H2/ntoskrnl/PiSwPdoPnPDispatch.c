/*
 * XREFs of PiSwPdoPnPDispatch @ 0x140763800
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     PiSwProcessRemove @ 0x1406619F8 (PiSwProcessRemove.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x1407635A4 (PiSwDeviceInterfacesUpdateState.c)
 *     PiSwDeviceMakeCompatibleIds @ 0x1407640D8 (PiSwDeviceMakeCompatibleIds.c)
 *     PiSwCompleteCreate @ 0x14076426C (PiSwCompleteCreate.c)
 *     PnpAllocateMultiSZ @ 0x140764814 (PnpAllocateMultiSZ.c)
 *     _PnpStringFromGuid @ 0x140773030 (_PnpStringFromGuid.c)
 *     PnpAllocatePWSTR @ 0x14077DE70 (PnpAllocatePWSTR.c)
 *     PiSwDestroyDeviceObject @ 0x140953508 (PiSwDestroyDeviceObject.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiSwPdoPnPDispatch(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  _DWORD *DeviceExtension; // rdi
  NTSTATUS Status; // ebx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  unsigned int MinorFunction; // ecx
  struct _KTHREAD *v8; // rax
  PIO_SECURITY_CONTEXT SecurityContext; // r8
  __m128i si128; // xmm0
  int v11; // ecx
  int v12; // edx
  int v13; // ecx
  int v14; // edx
  unsigned int v15; // ecx
  struct _KTHREAD *v16; // rax
  _QWORD *v17; // r10
  ULONG Length; // ecx
  ULONG v19; // ecx
  ULONG v20; // ecx
  ULONG v21; // ecx
  const wchar_t *v22; // rcx
  NTSTATUS MultiSZ; // eax
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  struct _KTHREAD *v29; // rax
  __int64 v30; // rdx
  ULONG v31; // ecx
  ULONG_PTR Pool2; // rax
  ULONG_PTR v33; // rax
  void *v34; // rcx
  struct _KTHREAD *v35; // rax
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR Information; // rax
  ULONG_PTR v38; // rdx
  unsigned __int64 v39; // rax
  struct _KTHREAD *v40; // rax
  int v41; // ebx
  int v42; // ebx
  __int64 v43; // rax
  ULONG_PTR v44; // rbx
  struct _KTHREAD *v45; // rax
  int v46; // edx
  char v47; // cl
  __int64 v48; // rax

  DeviceExtension = DeviceObject->DeviceExtension;
  Status = Irp->IoStatus.Status;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( (DeviceExtension[2] & 0x10) != 0 )
  {
    Status = -1073741810;
    goto LABEL_23;
  }
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( MinorFunction > 0xC )
  {
    v15 = MinorFunction - 19;
    if ( v15 )
    {
      v25 = v15 - 1;
      if ( !v25 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
        if ( *(_QWORD *)DeviceExtension )
        {
          Information = Irp->IoStatus.Information;
          v38 = Information | 2;
          v39 = Information & 0xFFFFFFFFFFFFFFFDuLL;
          if ( (*(_DWORD *)(*(_QWORD *)DeviceExtension + 64LL) & 4) == 0 )
            v38 = v39;
          Irp->IoStatus.Information = v38;
          goto LABEL_12;
        }
LABEL_73:
        Status = -1073741810;
        goto LABEL_22;
      }
      v26 = v25 - 1;
      if ( v26 )
      {
        v27 = v26 - 1;
        if ( !v27 )
        {
          Status = CurrentStackLocation->Parameters.SetLock.Lock != 0 ? 0xC00000BB : 0;
          goto LABEL_23;
        }
        v28 = v27 - 1;
        if ( !v28 )
        {
          v45 = KeGetCurrentThread();
          --v45->KernelApcDisable;
          ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
          v46 = DeviceExtension[2] | 4;
          DeviceExtension[2] = v46;
          v47 = v46;
          if ( (v46 & 8) != 0 )
          {
            v48 = *(_QWORD *)DeviceExtension;
            if ( *(_QWORD *)DeviceExtension )
            {
              if ( *(PDEVICE_OBJECT *)(v48 + 120) == DeviceObject && (*(_DWORD *)(v48 + 4) & 2) != 0 )
              {
                v47 = v46 | 0x40;
                DeviceExtension[2] = v46 | 0x40;
              }
            }
          }
          PiSwProcessRemove((__int64)DeviceObject, (v47 & 0x48) == 8);
          goto LABEL_59;
        }
        if ( v28 != 2 )
          goto LABEL_23;
        PiSwCompleteCreate(DeviceObject);
      }
      else
      {
        Pool2 = ExAllocatePool2(256LL, 24LL, 1466986064LL);
        if ( !Pool2 )
          goto LABEL_71;
        *(_DWORD *)(Pool2 + 20) = 0;
        *(_DWORD *)(Pool2 + 16) = 15;
        *(GUID *)Pool2 = GUID_BUS_TYPE_SW_DEVICE;
        Irp->IoStatus.Information = Pool2;
      }
LABEL_30:
      Status = 0;
      goto LABEL_23;
    }
    v16 = KeGetCurrentThread();
    --v16->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    v17 = *(_QWORD **)DeviceExtension;
    if ( !*(_QWORD *)DeviceExtension )
      goto LABEL_73;
    Length = CurrentStackLocation->Parameters.Read.Length;
    if ( Length )
    {
      v19 = Length - 1;
      if ( !v19 )
      {
        v34 = (void *)v17[3];
        if ( !v34 )
          goto LABEL_22;
        MultiSZ = PnpAllocateMultiSZ(v34);
        goto LABEL_21;
      }
      v20 = v19 - 1;
      if ( !v20 )
      {
        MultiSZ = PiSwDeviceMakeCompatibleIds(*(_QWORD *)DeviceExtension, &Irp->IoStatus.Information);
        goto LABEL_21;
      }
      v21 = v20 - 1;
      if ( v21 )
      {
        if ( v21 != 2 || !v17[5] )
          goto LABEL_22;
        v33 = ExAllocatePool2(256LL, 78LL, 1466986064LL);
        Irp->IoStatus.Information = v33;
        if ( !v33 )
        {
          Status = -1073741670;
          goto LABEL_22;
        }
        MultiSZ = PnpStringFromGuid(*(_QWORD *)(*(_QWORD *)DeviceExtension + 40LL), v33);
        goto LABEL_21;
      }
      v22 = (const wchar_t *)v17[2];
    }
    else
    {
      v22 = (const wchar_t *)v17[1];
    }
LABEL_20:
    MultiSZ = PnpAllocatePWSTR(v22);
LABEL_21:
    Status = MultiSZ;
    goto LABEL_22;
  }
  if ( MinorFunction == 12 )
  {
    v29 = KeGetCurrentThread();
    --v29->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    v30 = *(_QWORD *)DeviceExtension;
    if ( !*(_QWORD *)DeviceExtension )
      goto LABEL_73;
    v31 = CurrentStackLocation->Parameters.Read.Length;
    if ( v31 )
    {
      if ( v31 != 1 )
        goto LABEL_22;
      v22 = *(const wchar_t **)(v30 + 56);
    }
    else
    {
      v22 = *(const wchar_t **)(v30 + 48);
    }
    if ( !v22 )
      goto LABEL_22;
    goto LABEL_20;
  }
  if ( !CurrentStackLocation->MinorFunction )
  {
    v35 = KeGetCurrentThread();
    --v35->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    if ( (DeviceExtension[2] & 1) == 0 )
    {
      Status = PiSwDeviceInterfacesUpdateState(*(_QWORD *)DeviceExtension, 1);
      if ( Status < 0 )
        PiSwDeviceInterfacesUpdateState(*(_QWORD *)DeviceExtension, 0);
      else
        DeviceExtension[2] |= 1u;
      goto LABEL_22;
    }
    goto LABEL_12;
  }
  if ( MinorFunction == 1 )
    goto LABEL_30;
  if ( MinorFunction == 2 )
  {
    v40 = KeGetCurrentThread();
    --v40->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    v41 = DeviceExtension[2] | 2;
    DeviceExtension[2] = v41;
    v42 = v41 & 0x48;
    PiSwProcessRemove((__int64)DeviceObject, v42 == 8);
    if ( v42 != 8 )
      PiSwDestroyDeviceObject(DeviceObject);
LABEL_59:
    ExReleaseResourceLite(&PiSwLockObj);
    KeLeaveCriticalRegion();
    goto LABEL_30;
  }
  if ( MinorFunction <= 6 )
    goto LABEL_30;
  if ( MinorFunction == 7 )
  {
    if ( CurrentStackLocation->Parameters.Read.Length != 4 )
      goto LABEL_23;
    v43 = ExAllocatePool2(256LL, 16LL, 1466986064LL);
    v44 = v43;
    if ( v43 )
    {
      *(_DWORD *)v43 = 1;
      *(_QWORD *)(v43 + 8) = DeviceObject;
      ObfReferenceObject(DeviceObject);
      Irp->IoStatus.Information = v44;
      goto LABEL_30;
    }
LABEL_71:
    Status = -1073741670;
    goto LABEL_23;
  }
  if ( MinorFunction == 9 )
  {
    v8 = KeGetCurrentThread();
    --v8->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    if ( *(_QWORD *)DeviceExtension )
    {
      SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      SecurityContext->DesiredAccess = 0;
      SecurityContext->FullCreateOptions = 1;
      *(__m128i *)&SecurityContext[1].SecurityQos = si128;
      SecurityContext[1].DesiredAccess = _mm_cvtsi128_si32(si128);
      SecurityContext[1].FullCreateOptions = 0;
      LODWORD(SecurityContext[2].SecurityQos) = 0;
      v11 = HIDWORD(SecurityContext->SecurityQos) | 0x240;
      HIDWORD(SecurityContext->SecurityQos) = v11;
      v12 = v11 ^ ((unsigned __int8)v11 ^ (unsigned __int8)(16 * *(_DWORD *)(*(_QWORD *)DeviceExtension + 64LL))) & 0x10;
      HIDWORD(SecurityContext->SecurityQos) = v12;
      v13 = v12 ^ ((unsigned __int8)v12 ^ (unsigned __int8)((unsigned __int8)*(_DWORD *)(*(_QWORD *)DeviceExtension
                                                                                       + 64LL) << 6)) & 0x80;
      HIDWORD(SecurityContext->SecurityQos) = v13;
      v14 = v13 ^ (v13 ^ (*(_DWORD *)(*(_QWORD *)DeviceExtension + 64LL) << 15)) & 0x20000;
      HIDWORD(SecurityContext->SecurityQos) = v14;
      HIDWORD(SecurityContext->SecurityQos) = v14 ^ ((unsigned __int16)v14 ^ (unsigned __int16)~(32
                                                                                               * *(_DWORD *)(*(_QWORD *)DeviceExtension + 64LL))) & 0x100;
LABEL_12:
      Status = 0;
LABEL_22:
      ExReleaseResourceLite(&PiSwLockObj);
      KeLeaveCriticalRegion();
      goto LABEL_23;
    }
    goto LABEL_73;
  }
LABEL_23:
  Irp->IoStatus.Status = Status;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)Status;
}
