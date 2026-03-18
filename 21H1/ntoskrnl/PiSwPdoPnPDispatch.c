/*
 * XREFs of PiSwPdoPnPDispatch @ 0x140737A70
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     IofCompleteRequest @ 0x140248710 (IofCompleteRequest.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     PnpAllocatePWSTR @ 0x1406AA0A8 (PnpAllocatePWSTR.c)
 *     _PnpStringFromGuid @ 0x1406AB274 (_PnpStringFromGuid.c)
 *     PiSwProcessRemove @ 0x14071EAD8 (PiSwProcessRemove.c)
 *     PiSwDestroyDeviceObject @ 0x14071EBF8 (PiSwDestroyDeviceObject.c)
 *     PiSwCompleteCreate @ 0x140753438 (PiSwCompleteCreate.c)
 *     PnpAllocateMultiSZ @ 0x140753F7C (PnpAllocateMultiSZ.c)
 *     PiSwDeviceMakeCompatibleIds @ 0x14075D36C (PiSwDeviceMakeCompatibleIds.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x14075E8E0 (PiSwDeviceInterfacesUpdateState.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiSwPdoPnPDispatch(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  _DWORD *DeviceExtension; // rdi
  signed int Status; // ebx
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
  signed int MultiSZ; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  struct _KTHREAD *v27; // rax
  _QWORD *v28; // r10
  ULONG Length; // ecx
  ULONG v30; // ecx
  ULONG v31; // ecx
  ULONG v32; // ecx
  wchar_t *v33; // rax
  struct _KTHREAD *v34; // rax
  __int64 v35; // rdx
  ULONG v36; // ecx
  struct _KTHREAD *v37; // rax
  __int64 v38; // rdx
  GUID *PoolWithTag; // rax
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR Information; // rax
  ULONG_PTR v42; // rdx
  unsigned __int64 v43; // rax
  void *v44; // rcx
  struct _KTHREAD *v45; // rax
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  struct _KTHREAD *v50; // rax
  int v51; // eax
  _QWORD *v52; // rax
  ULONG_PTR v53; // rbx

  DeviceExtension = DeviceObject->DeviceExtension;
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
          v42 = Information | 2;
          v43 = Information & 0xFFFFFFFFFFFFFFFDuLL;
          if ( (*(_DWORD *)(*(_QWORD *)DeviceExtension + 64LL) & 4) == 0 )
            v42 = v43;
          Irp->IoStatus.Information = v42;
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
          v45 = KeGetCurrentThread();
          --v45->KernelApcDisable;
          ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
          v46 = DeviceExtension[2] | 4;
          DeviceExtension[2] = v46;
          PiSwProcessRemove((__int64)DeviceObject, (v46 & 8) != 0);
LABEL_59:
          ExReleaseResourceLite(&PiSwLockObj);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v47, v48, v49);
          goto LABEL_20;
        }
        if ( v19 != 2 )
          goto LABEL_26;
        PiSwCompleteCreate(DeviceObject);
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
    v27 = KeGetCurrentThread();
    --v27->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    v28 = *(_QWORD **)DeviceExtension;
    if ( !*(_QWORD *)DeviceExtension )
      goto LABEL_69;
    Length = CurrentStackLocation->Parameters.Read.Length;
    if ( Length )
    {
      v30 = Length - 1;
      if ( !v30 )
      {
        v44 = (void *)v28[3];
        if ( !v44 )
          goto LABEL_25;
        MultiSZ = PnpAllocateMultiSZ(v44);
        goto LABEL_24;
      }
      v31 = v30 - 1;
      if ( !v31 )
      {
        MultiSZ = PiSwDeviceMakeCompatibleIds(*(_QWORD *)DeviceExtension, &Irp->IoStatus.Information);
        goto LABEL_24;
      }
      v32 = v31 - 1;
      if ( v32 )
      {
        if ( v32 != 2 || !v28[5] )
          goto LABEL_25;
        v33 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x4EuLL, 0x57706E50u);
        Irp->IoStatus.Information = (ULONG_PTR)v33;
        if ( !v33 )
        {
          Status = -1073741670;
          goto LABEL_25;
        }
        MultiSZ = PnpStringFromGuid(*(int **)(*(_QWORD *)DeviceExtension + 40LL), v33);
        goto LABEL_24;
      }
      v20 = (const wchar_t *)v28[2];
    }
    else
    {
      v20 = (const wchar_t *)v28[1];
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
    v34 = KeGetCurrentThread();
    --v34->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    v35 = *(_QWORD *)DeviceExtension;
    if ( !*(_QWORD *)DeviceExtension )
      goto LABEL_69;
    v36 = CurrentStackLocation->Parameters.Read.Length;
    if ( v36 )
    {
      if ( v36 != 1 )
        goto LABEL_25;
      v20 = *(const wchar_t **)(v35 + 56);
    }
    else
    {
      v20 = *(const wchar_t **)(v35 + 48);
    }
    if ( !v20 )
      goto LABEL_25;
    v21 = 0x7FFFFFFFLL;
    goto LABEL_23;
  }
  if ( !CurrentStackLocation->MinorFunction )
  {
    v37 = KeGetCurrentThread();
    --v37->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    if ( (DeviceExtension[2] & 1) == 0 )
    {
      LOBYTE(v38) = 1;
      Status = PiSwDeviceInterfacesUpdateState(*(_QWORD *)DeviceExtension, v38);
      if ( Status < 0 )
        PiSwDeviceInterfacesUpdateState(*(_QWORD *)DeviceExtension, 0LL);
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
    v50 = KeGetCurrentThread();
    --v50->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    v51 = DeviceExtension[2] | 2;
    DeviceExtension[2] = v51;
    PiSwProcessRemove((__int64)DeviceObject, (v51 & 8) != 0);
    if ( (DeviceExtension[2] & 8) == 0 )
      PiSwDestroyDeviceObject(DeviceObject);
    goto LABEL_59;
  }
  if ( MinorFunction <= 6 )
    goto LABEL_20;
  if ( MinorFunction == 7 )
  {
    if ( CurrentStackLocation->Parameters.Read.Length != 4 )
      goto LABEL_26;
    v52 = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x57706E50u);
    v53 = (ULONG_PTR)v52;
    if ( v52 )
    {
      *(_DWORD *)v52 = 1;
      v52[1] = DeviceObject;
      ObfReferenceObject(DeviceObject);
      Irp->IoStatus.Information = v53;
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
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v23, v24, v25);
      goto LABEL_26;
    }
    goto LABEL_69;
  }
LABEL_26:
  Irp->IoStatus.Status = Status;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)Status;
}
