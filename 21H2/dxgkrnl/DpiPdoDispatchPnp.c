/*
 * XREFs of DpiPdoDispatchPnp @ 0x1C01E4250
 * Callers:
 *     <none>
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C0012BA4 (DpiCheckForOutstandingD3Requests.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C0019DE4 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     DpiEnableD3Requests @ 0x1C016E8A8 (DpiEnableD3Requests.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C01B40A0 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C01B445C (DpiAcquireCoreSyncAccessSafe.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C01EF8F4 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C01EF978 (DxgkReleaseAdapterDdiSync.c)
 *     DpiDxgkDdiQueryInterface @ 0x1C01FA498 (DpiDxgkDdiQueryInterface.c)
 *     MonitorNotifyDeviceNodeReady @ 0x1C020643C (MonitorNotifyDeviceNodeReady.c)
 *     DpiPdoHandleStopDevice @ 0x1C0397690 (DpiPdoHandleStopDevice.c)
 */

__int64 __fastcall DpiPdoDispatchPnp(PDEVICE_OBJECT Pdo, IRP *Tag)
{
  char *DeviceExtension; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  __int64 MinorFunction; // rcx
  __int64 v7; // r13
  __int64 (__fastcall *v8)(PDEVICE_OBJECT); // rax
  int Status; // edi
  __int64 v11; // rdi
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  struct _LUID *v16; // rdx
  DXGADAPTER *v17; // rcx
  ULONG v18; // r9d
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  bool v23; // zf
  int v24; // eax
  int v25; // eax
  int v26; // eax
  struct _IO_REMOVE_LOCK *v27; // rcx
  int v28; // eax
  PIO_SECURITY_CONTEXT SecurityContext; // [rsp+40h] [rbp-30h] BYREF
  USHORT Size; // [rsp+48h] [rbp-28h]
  USHORT Version; // [rsp+4Ah] [rbp-26h]
  int v32; // [rsp+4Ch] [rbp-24h]
  LARGE_INTEGER ByteOffset; // [rsp+50h] [rbp-20h]
  struct _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // [rsp+58h] [rbp-18h]
  int v35; // [rsp+60h] [rbp-10h]
  int v36; // [rsp+64h] [rbp-Ch]
  unsigned int Data; // [rsp+A0h] [rbp+30h] BYREF

  DeviceExtension = (char *)Pdo->DeviceExtension;
  CurrentStackLocation = Tag->Tail.Overlay.CurrentStackLocation;
  MinorFunction = CurrentStackLocation->MinorFunction;
  v7 = *(_QWORD *)(*((_QWORD *)DeviceExtension + 4) + 64LL);
  if ( (unsigned __int8)MinorFunction < 0x18u )
  {
    v8 = *(__int64 (__fastcall **)(PDEVICE_OBJECT))&DeviceExtension[8 * MinorFunction + 288];
    if ( v8 )
    {
      Status = v8(Pdo);
      goto LABEL_4;
    }
  }
  if ( (unsigned int)MinorFunction > 8 )
  {
    v12 = MinorFunction - 10;
    if ( !v12 )
      goto LABEL_19;
    v13 = v12 - 1;
    if ( v13 )
    {
      v14 = v13 - 11;
      if ( !v14 )
      {
        Status = -1073741823;
        goto LABEL_5;
      }
      v15 = v14 - 1;
      if ( !v15 )
      {
        KeEnterCriticalRegion();
        if ( DeviceExtension[484] )
          DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
        ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
        Status = 0;
        *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244] = *((_DWORD *)DeviceExtension + 60);
        v26 = *((_DWORD *)DeviceExtension + 59);
        ++*((_DWORD *)DeviceExtension + 69);
        *((_DWORD *)DeviceExtension + 60) = v26;
        *((_DWORD *)DeviceExtension + 59) = 6;
        WdLogSingleEntry1(4LL, Pdo);
        goto LABEL_45;
      }
      if ( v15 == 2 )
      {
        if ( !DeviceExtension[510] && *(_DWORD *)(v7 + 2736) >= 2u )
          IoInvalidateDeviceRelations(Pdo, PowerRelations);
        v23 = *((_DWORD *)DeviceExtension + 124) == 1;
        DeviceExtension[510] = 1;
        if ( !v23 || DeviceExtension[944] )
          goto LABEL_13;
        Status = DpiAcquireCoreSyncAccessSafe((__int64)Pdo, 1);
        if ( Status >= 0 )
        {
          v17 = *(DXGADAPTER **)(v7 + 3896);
          Data = 0;
          if ( DXGADAPTER::IsAdapterSessionized(v17, v16, &Data, 0LL) )
            IoSetDevicePropertyData(Pdo, &DEVPKEY_Device_SessionId, 0, v18, 7u, 4u, &Data);
          MonitorNotifyDeviceNodeReady(*(DXGADAPTER **)(v7 + 3896), *((_DWORD *)DeviceExtension + 126));
          DeviceExtension[944] = 1;
          DpiReleaseCoreSyncAccessSafe((__int64)Pdo, 1);
        }
        goto LABEL_4;
      }
      goto LABEL_19;
    }
LABEL_20:
    Status = 0;
    goto LABEL_5;
  }
  if ( (_DWORD)MinorFunction == 8 )
  {
    v11 = *((_QWORD *)DeviceExtension + 5);
    if ( Tag->IoStatus.Status != -1073741637 )
      goto LABEL_13;
    SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
    Size = CurrentStackLocation->Parameters.QueryInterface.Size;
    Version = CurrentStackLocation->Parameters.QueryInterface.Version;
    ByteOffset = CurrentStackLocation->Parameters.Read.ByteOffset;
    Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
    v35 = *((_DWORD *)DeviceExtension + 126);
    v32 = 0;
    v36 = 0;
    if ( !*(_QWORD *)(v11 + 256) || (int)DpiAcquireCoreSyncAccessSafe((__int64)Pdo, 1) < 0 )
      goto LABEL_13;
    DxgkAcquireAdapterDdiSync(*(_QWORD *)(v7 + 3896), 1LL);
    Status = DpiDxgkDdiQueryInterface(v11, *((_QWORD *)DeviceExtension + 6), &SecurityContext);
    DxgkReleaseAdapterDdiSync(*(_QWORD *)(v7 + 3896));
    DpiReleaseCoreSyncAccessSafe((__int64)Pdo, 1);
    if ( Status >= 0 )
    {
      CurrentStackLocation->Parameters.WMI.ProviderId = (ULONG_PTR)SecurityContext;
      CurrentStackLocation->Parameters.QueryInterface.Size = Size;
      CurrentStackLocation->Parameters.QueryInterface.Version = Version;
      CurrentStackLocation->Parameters.Read.ByteOffset = ByteOffset;
      CurrentStackLocation->Parameters.CreatePipe.Parameters = Parameters;
    }
LABEL_4:
    if ( Status != -1073741637 )
      goto LABEL_5;
LABEL_13:
    Status = Tag->IoStatus.Status;
    goto LABEL_5;
  }
  v19 = MinorFunction - 1;
  if ( !v19 )
  {
    KeEnterCriticalRegion();
    if ( DeviceExtension[484] )
      DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
    *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244] = *((_DWORD *)DeviceExtension + 60);
    v25 = *((_DWORD *)DeviceExtension + 59);
    ++*((_DWORD *)DeviceExtension + 69);
    *((_DWORD *)DeviceExtension + 59) = 5;
    goto LABEL_42;
  }
  v20 = v19 - 1;
  if ( !v20 )
  {
    if ( *((_DWORD *)DeviceExtension + 60) == 2 )
      DpiPdoHandleStopDevice(Pdo);
    v27 = (struct _IO_REMOVE_LOCK *)(DeviceExtension + 64);
    if ( DeviceExtension[509] )
    {
      IoReleaseRemoveLockEx(v27, Tag, 0x20u);
    }
    else
    {
      IoReleaseRemoveLockAndWaitEx(v27, Tag, 0x20u);
      IoQueueWorkItem(*((PIO_WORKITEM *)DeviceExtension + 119), DpiPdoDestroyPdo, DelayedWorkQueue, 0LL);
    }
    *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244] = *((_DWORD *)DeviceExtension + 60);
    v28 = *((_DWORD *)DeviceExtension + 59);
    ++*((_DWORD *)DeviceExtension + 69);
    *((_DWORD *)DeviceExtension + 60) = v28;
    *((_DWORD *)DeviceExtension + 59) = 7;
    WdLogSingleEntry1(4LL, Pdo);
    goto LABEL_20;
  }
  v21 = v20 - 1;
  if ( v21 )
  {
    v22 = v21 - 2;
    if ( !v22 )
    {
      KeEnterCriticalRegion();
      if ( DeviceExtension[484] )
        DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
      *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244] = *((_DWORD *)DeviceExtension + 60);
      v25 = *((_DWORD *)DeviceExtension + 59);
      ++*((_DWORD *)DeviceExtension + 69);
      *((_DWORD *)DeviceExtension + 59) = 3;
      goto LABEL_42;
    }
    if ( v22 == 1 )
    {
      KeEnterCriticalRegion();
      if ( DeviceExtension[484] )
        DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
      v23 = *((_DWORD *)DeviceExtension + 59) == 3;
      goto LABEL_39;
    }
LABEL_19:
    Status = Tag->IoStatus.Status;
    goto LABEL_4;
  }
  KeEnterCriticalRegion();
  if ( DeviceExtension[484] )
    DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
  v23 = *((_DWORD *)DeviceExtension + 59) == 5;
LABEL_39:
  if ( v23 )
  {
    v24 = *((_DWORD *)DeviceExtension + 60);
    --*((_DWORD *)DeviceExtension + 69);
    *((_DWORD *)DeviceExtension + 59) = v24;
    v25 = *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244];
LABEL_42:
    *((_DWORD *)DeviceExtension + 60) = v25;
  }
  Status = 0;
LABEL_45:
  if ( DeviceExtension[484] )
    DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
  ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
  KeLeaveCriticalRegion();
LABEL_5:
  Tag->IoStatus.Status = Status;
  IofCompleteRequest(Tag, 0);
  return (unsigned int)Status;
}
