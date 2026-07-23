/*
 * XREFs of PiSwPdoPnPDispatch @ 0x14074F280
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     IofCompleteRequest @ 0x1402E7CE0 (IofCompleteRequest.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     PnpAllocatePWSTR @ 0x14062CF38 (PnpAllocatePWSTR.c)
 *     _PnpStringFromGuid @ 0x14062D230 (_PnpStringFromGuid.c)
 *     PiSwProcessRemove @ 0x140732D98 (PiSwProcessRemove.c)
 *     PiSwDestroyDeviceObject @ 0x140732EB8 (PiSwDestroyDeviceObject.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x14074D77C (PiSwDeviceInterfacesUpdateState.c)
 *     PiSwCompleteCreate @ 0x14074D850 (PiSwCompleteCreate.c)
 *     PnpAllocateMultiSZ @ 0x14074E39C (PnpAllocateMultiSZ.c)
 *     PiSwDeviceMakeCompatibleIds @ 0x14074E91C (PiSwDeviceMakeCompatibleIds.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
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
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  struct _KTHREAD *v27; // rax
  __int64 v28; // r8
  _QWORD *v29; // r10
  ULONG Length; // ecx
  ULONG v31; // ecx
  ULONG v32; // ecx
  ULONG v33; // ecx
  wchar_t *v34; // rax
  struct _KTHREAD *v35; // rax
  __int64 v36; // rdx
  ULONG v37; // ecx
  struct _KTHREAD *v38; // rax
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
          PiSwProcessRemove((__int64)Object, (v46 & 8) != 0);
LABEL_59:
          ExReleaseResourceLite(&PiSwLockObj);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v47, v48, v49);
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
    v27 = KeGetCurrentThread();
    --v27->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    v29 = *(_QWORD **)DeviceExtension;
    if ( !*(_QWORD *)DeviceExtension )
      goto LABEL_69;
    Length = CurrentStackLocation->Parameters.Read.Length;
    if ( Length )
    {
      v31 = Length - 1;
      if ( !v31 )
      {
        v44 = (void *)v29[3];
        if ( !v44 )
          goto LABEL_25;
        MultiSZ = PnpAllocateMultiSZ(v44, 0x7FFFFFFFLL, v28, &Irp->IoStatus.Information);
        goto LABEL_24;
      }
      v32 = v31 - 1;
      if ( !v32 )
      {
        MultiSZ = PiSwDeviceMakeCompatibleIds(*(_QWORD *)DeviceExtension, &Irp->IoStatus.Information);
        goto LABEL_24;
      }
      v33 = v32 - 1;
      if ( v33 )
      {
        if ( v33 != 2 || !v29[5] )
          goto LABEL_25;
        v34 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x4EuLL, 0x57706E50u);
        Irp->IoStatus.Information = (ULONG_PTR)v34;
        if ( !v34 )
        {
          Status = -1073741670;
          goto LABEL_25;
        }
        MultiSZ = PnpStringFromGuid(*(int **)(*(_QWORD *)DeviceExtension + 40LL), v34);
        goto LABEL_24;
      }
      v20 = (const wchar_t *)v29[2];
    }
    else
    {
      v20 = (const wchar_t *)v29[1];
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
    v35 = KeGetCurrentThread();
    --v35->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    v36 = *(_QWORD *)DeviceExtension;
    if ( !*(_QWORD *)DeviceExtension )
      goto LABEL_69;
    v37 = CurrentStackLocation->Parameters.Read.Length;
    if ( v37 )
    {
      if ( v37 != 1 )
        goto LABEL_25;
      v20 = *(const wchar_t **)(v36 + 56);
    }
    else
    {
      v20 = *(const wchar_t **)(v36 + 48);
    }
    if ( !v20 )
      goto LABEL_25;
    v21 = 0x7FFFFFFFLL;
    goto LABEL_23;
  }
  if ( !CurrentStackLocation->MinorFunction )
  {
    v38 = KeGetCurrentThread();
    --v38->KernelApcDisable;
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
    v50 = KeGetCurrentThread();
    --v50->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    v51 = DeviceExtension[2] | 2;
    DeviceExtension[2] = v51;
    PiSwProcessRemove((__int64)Object, (v51 & 8) != 0);
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
    v52 = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x57706E50u);
    v53 = (ULONG_PTR)v52;
    if ( v52 )
    {
      *(_DWORD *)v52 = 1;
      v52[1] = Object;
      ObfReferenceObject(Object);
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
