/*
 * XREFs of PiSwPdoPnPDispatch @ 0x140748500
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140221C70 (ExAcquireResourceExclusiveLite.c)
 *     IofCompleteRequest @ 0x140292560 (IofCompleteRequest.c)
 *     PnpAllocatePWSTR @ 0x140640358 (PnpAllocatePWSTR.c)
 *     _PnpStringFromGuid @ 0x1406413C4 (_PnpStringFromGuid.c)
 *     PiSwProcessRemove @ 0x14072E868 (PiSwProcessRemove.c)
 *     PiSwDestroyDeviceObject @ 0x14072E988 (PiSwDestroyDeviceObject.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x140746690 (PiSwDeviceInterfacesUpdateState.c)
 *     PiSwCompleteCreate @ 0x140746764 (PiSwCompleteCreate.c)
 *     PnpAllocateMultiSZ @ 0x140747620 (PnpAllocateMultiSZ.c)
 *     PiSwDeviceMakeCompatibleIds @ 0x140747BA0 (PiSwDeviceMakeCompatibleIds.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiSwPdoPnPDispatch(struct _DEVICE_OBJECT *Object, PIRP Irp)
{
  _DWORD *DeviceExtension; // rdi
  NTSTATUS Status; // ebx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  unsigned int MinorFunction; // ecx
  struct _KTHREAD *v8; // rax
  PIO_SECURITY_CONTEXT SecurityContext; // r8
  __m128i si128; // xmm0
  int v11; // ecx
  int v12; // edx
  int v13; // ecx
  int v14; // edx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  const wchar_t *v20; // rcx
  size_t v21; // rdx
  NTSTATUS MultiSZ; // eax
  struct _KTHREAD *v24; // rax
  __int64 v25; // r8
  _QWORD *v26; // r10
  ULONG Length; // ecx
  ULONG v28; // ecx
  ULONG v29; // ecx
  ULONG v30; // ecx
  wchar_t *v31; // rax
  struct _KTHREAD *v32; // rax
  __int64 v33; // rdx
  ULONG v34; // ecx
  struct _KTHREAD *v35; // rax
  GUID *PoolWithTag; // rax
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR Information; // rax
  ULONG_PTR v39; // rdx
  unsigned __int64 v40; // rax
  void *v41; // rcx
  struct _KTHREAD *v42; // rax
  int v43; // eax
  struct _KTHREAD *v44; // rax
  int v45; // eax
  _QWORD *v46; // rax
  ULONG_PTR v47; // rbx

  DeviceExtension = Object->DeviceExtension;
  Status = Irp->IoStatus.Status;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( (DeviceExtension[2] & 0x10) != 0 )
  {
    Status = -1073741810;
    goto LABEL_26;
  }
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( MinorFunction > 0xC )
  {
    v15 = MinorFunction - 19;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( !v16 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
        if ( *(_QWORD *)DeviceExtension )
        {
          Information = Irp->IoStatus.Information;
          v39 = Information | 2;
          v40 = Information & 0xFFFFFFFFFFFFFFFDuLL;
          if ( (*(_DWORD *)(*(_QWORD *)DeviceExtension + 64LL) & 4) == 0 )
            v39 = v40;
          Irp->IoStatus.Information = v39;
          goto LABEL_12;
        }
LABEL_69:
        Status = -1073741810;
        goto LABEL_25;
      }
      v17 = v16 - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( !v18 )
        {
          Status = CurrentStackLocation->Parameters.SetLock.Lock != 0 ? 0xC00000BB : 0;
          goto LABEL_26;
        }
        v19 = v18 - 1;
        if ( !v19 )
        {
          v42 = KeGetCurrentThread();
          --v42->KernelApcDisable;
          ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
          v43 = DeviceExtension[2] | 4;
          DeviceExtension[2] = v43;
          PiSwProcessRemove((__int64)Object, (v43 & 8) != 0);
LABEL_59:
          ExReleaseResourceLite(&PiSwLockObj);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          goto LABEL_20;
        }
        if ( v19 != 2 )
          goto LABEL_26;
        PiSwCompleteCreate(Object);
      }
      else
      {
        PoolWithTag = (GUID *)ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x57706E50u);
        if ( !PoolWithTag )
          goto LABEL_67;
        *(_DWORD *)&PoolWithTag[1].Data2 = 0;
        PoolWithTag[1].Data1 = 15;
        *PoolWithTag = GUID_BUS_TYPE_SW_DEVICE;
        Irp->IoStatus.Information = (ULONG_PTR)PoolWithTag;
      }
LABEL_20:
      Status = 0;
      goto LABEL_26;
    }
    v24 = KeGetCurrentThread();
    --v24->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    v26 = *(_QWORD **)DeviceExtension;
    if ( !*(_QWORD *)DeviceExtension )
      goto LABEL_69;
    Length = CurrentStackLocation->Parameters.Read.Length;
    if ( Length )
    {
      v28 = Length - 1;
      if ( !v28 )
      {
        v41 = (void *)v26[3];
        if ( !v41 )
          goto LABEL_25;
        MultiSZ = PnpAllocateMultiSZ(v41, 0x7FFFFFFFLL, v25, &Irp->IoStatus.Information);
        goto LABEL_24;
      }
      v29 = v28 - 1;
      if ( !v29 )
      {
        MultiSZ = PiSwDeviceMakeCompatibleIds(*(_QWORD *)DeviceExtension, &Irp->IoStatus.Information);
        goto LABEL_24;
      }
      v30 = v29 - 1;
      if ( v30 )
      {
        if ( v30 != 2 || !v26[5] )
          goto LABEL_25;
        v31 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x4EuLL, 0x57706E50u);
        Irp->IoStatus.Information = (ULONG_PTR)v31;
        if ( !v31 )
        {
          Status = -1073741670;
          goto LABEL_25;
        }
        MultiSZ = PnpStringFromGuid(*(int **)(*(_QWORD *)DeviceExtension + 40LL), v31);
        goto LABEL_24;
      }
      v20 = (const wchar_t *)v26[2];
    }
    else
    {
      v20 = (const wchar_t *)v26[1];
    }
    v21 = 200LL;
LABEL_23:
    MultiSZ = PnpAllocatePWSTR(v20, v21, 0x57706E50u, (PVOID *)&Irp->IoStatus.Information);
LABEL_24:
    Status = MultiSZ;
    goto LABEL_25;
  }
  if ( MinorFunction == 12 )
  {
    v32 = KeGetCurrentThread();
    --v32->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    v33 = *(_QWORD *)DeviceExtension;
    if ( !*(_QWORD *)DeviceExtension )
      goto LABEL_69;
    v34 = CurrentStackLocation->Parameters.Read.Length;
    if ( v34 )
    {
      if ( v34 != 1 )
        goto LABEL_25;
      v20 = *(const wchar_t **)(v33 + 56);
    }
    else
    {
      v20 = *(const wchar_t **)(v33 + 48);
    }
    if ( !v20 )
      goto LABEL_25;
    v21 = 0x7FFFFFFFLL;
    goto LABEL_23;
  }
  if ( !CurrentStackLocation->MinorFunction )
  {
    v35 = KeGetCurrentThread();
    --v35->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    if ( (DeviceExtension[2] & 1) == 0 )
    {
      Status = PiSwDeviceInterfacesUpdateState(*(_QWORD *)DeviceExtension, 1u);
      if ( Status < 0 )
        PiSwDeviceInterfacesUpdateState(*(_QWORD *)DeviceExtension, 0);
      else
        DeviceExtension[2] |= 1u;
      goto LABEL_25;
    }
    goto LABEL_12;
  }
  if ( MinorFunction == 1 )
    goto LABEL_20;
  if ( MinorFunction == 2 )
  {
    v44 = KeGetCurrentThread();
    --v44->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    v45 = DeviceExtension[2] | 2;
    DeviceExtension[2] = v45;
    PiSwProcessRemove((__int64)Object, (v45 & 8) != 0);
    if ( (DeviceExtension[2] & 8) == 0 )
      PiSwDestroyDeviceObject(Object);
    goto LABEL_59;
  }
  if ( MinorFunction <= 6 )
    goto LABEL_20;
  if ( MinorFunction == 7 )
  {
    if ( CurrentStackLocation->Parameters.Read.Length != 4 )
      goto LABEL_26;
    v46 = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x57706E50u);
    v47 = (ULONG_PTR)v46;
    if ( v46 )
    {
      *(_DWORD *)v46 = 1;
      v46[1] = Object;
      ObfReferenceObject(Object);
      Irp->IoStatus.Information = v47;
      goto LABEL_20;
    }
LABEL_67:
    Status = -1073741670;
    goto LABEL_26;
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
LABEL_25:
      ExReleaseResourceLite(&PiSwLockObj);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      goto LABEL_26;
    }
    goto LABEL_69;
  }
LABEL_26:
  Irp->IoStatus.Status = Status;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)Status;
}
