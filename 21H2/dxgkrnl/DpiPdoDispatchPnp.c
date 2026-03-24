/*
 * XREFs of DpiPdoDispatchPnp @ 0x1C0168730
 * Callers:
 *     <none>
 * Callees:
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000D178 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001E4B0 (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     DpiEnableD3Requests @ 0x1C00E28DC (DpiEnableD3Requests.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C0121730 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C01219AC (DpiAcquireCoreSyncAccessSafe.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C01763B8 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C0176430 (DxgkReleaseAdapterDdiSync.c)
 *     DpiDxgkDdiQueryInterface @ 0x1C017FAAC (DpiDxgkDdiQueryInterface.c)
 *     MonitorNotifyDeviceNodeReady @ 0x1C018F74C (MonitorNotifyDeviceNodeReady.c)
 *     DpiTestQueryInterface @ 0x1C019CF64 (DpiTestQueryInterface.c)
 *     ?DpiBrightnessQueryInterface@@YAJPEAU_DEVICE_OBJECT@@PEAU_QUERY_INTERFACE@@@Z @ 0x1C019CFC8 (-DpiBrightnessQueryInterface@@YAJPEAU_DEVICE_OBJECT@@PEAU_QUERY_INTERFACE@@@Z.c)
 *     DpiPdoHandleStopDevice @ 0x1C02D90A0 (DpiPdoHandleStopDevice.c)
 */

__int64 __fastcall DpiPdoDispatchPnp(PDEVICE_OBJECT Pdo, IRP *Tag)
{
  char *DeviceExtension; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  __int64 MinorFunction; // rcx
  __int64 v7; // r13
  __int64 (__fastcall *v8)(PDEVICE_OBJECT); // rax
  int Status; // edi
  __int64 v11; // r12
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
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rax
  struct _IO_REMOVE_LOCK *v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // rax
  _QUERY_INTERFACE v35; // [rsp+40h] [rbp-30h] BYREF
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
      goto LABEL_24;
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
        v26 = *((_DWORD *)DeviceExtension + 69) & 7;
        *(_DWORD *)&DeviceExtension[4 * v26 + 244] = *((_DWORD *)DeviceExtension + 60);
        v27 = *((_DWORD *)DeviceExtension + 59);
        ++*((_DWORD *)DeviceExtension + 69);
        *((_DWORD *)DeviceExtension + 60) = v27;
        *((_DWORD *)DeviceExtension + 59) = 6;
        v29 = WdLogNewEntry5_WdEvent(v26, v28);
        *(_QWORD *)(v29 + 24) = Pdo;
        WdLogEvent5_WdEvent(v29);
        goto LABEL_50;
      }
      if ( v15 == 2 )
      {
        if ( !DeviceExtension[510] && *(_DWORD *)(v7 + 2736) >= 2u )
          IoInvalidateDeviceRelations(Pdo, PowerRelations);
        v23 = *((_DWORD *)DeviceExtension + 124) == 1;
        DeviceExtension[510] = 1;
        if ( !v23 || DeviceExtension[944] )
          goto LABEL_18;
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
      goto LABEL_24;
    }
LABEL_25:
    Status = 0;
    goto LABEL_5;
  }
  if ( (_DWORD)MinorFunction == 8 )
  {
    v11 = *((_QWORD *)DeviceExtension + 5);
    if ( Tag->IoStatus.Status != -1073741637 )
      goto LABEL_18;
    v35.InterfaceType = CurrentStackLocation->Parameters.QueryInterface.InterfaceType;
    v35.Size = CurrentStackLocation->Parameters.QueryInterface.Size;
    v35.Version = CurrentStackLocation->Parameters.QueryInterface.Version;
    v35.Interface = CurrentStackLocation->Parameters.QueryInterface.Interface;
    v35.InterfaceSpecificData = CurrentStackLocation->Parameters.CreatePipe.Parameters;
    v35.DeviceUid = *((_DWORD *)DeviceExtension + 126);
    *(_DWORD *)(&v35.Version + 1) = 0;
    *(&v35.DeviceUid + 1) = 0;
    if ( !*(_QWORD *)(v11 + 256) )
      goto LABEL_15;
    if ( (int)DpiAcquireCoreSyncAccessSafe((__int64)Pdo, 1) < 0 )
    {
      Status = -1073741637;
    }
    else
    {
      Status = DpiBrightnessQueryInterface(*((PVOID *)DeviceExtension + 4), &v35);
      if ( Status == -1073741198 )
      {
        DxgkAcquireAdapterDdiSync(*(_QWORD *)(v7 + 3896), 1LL);
        Status = DpiDxgkDdiQueryInterface(v11, *((_QWORD *)DeviceExtension + 6), &v35);
        DxgkReleaseAdapterDdiSync(*(_QWORD *)(v7 + 3896));
      }
      DpiReleaseCoreSyncAccessSafe((__int64)Pdo, 1);
    }
    if ( Status == -1073741637 )
LABEL_15:
      Status = DpiTestQueryInterface(Pdo, &v35);
    if ( Status >= 0 )
    {
      CurrentStackLocation->Parameters.WMI.ProviderId = (ULONG_PTR)v35.InterfaceType;
      CurrentStackLocation->Parameters.QueryInterface.Size = v35.Size;
      CurrentStackLocation->Parameters.QueryInterface.Version = v35.Version;
      CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart = (LONGLONG)v35.Interface;
      CurrentStackLocation->Parameters.CreatePipe.Parameters = (PNAMED_PIPE_CREATE_PARAMETERS)v35.InterfaceSpecificData;
    }
LABEL_4:
    if ( Status != -1073741637 )
      goto LABEL_5;
LABEL_18:
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
    goto LABEL_47;
  }
  v20 = v19 - 1;
  if ( !v20 )
  {
    if ( *((_DWORD *)DeviceExtension + 60) == 2 )
      DpiPdoHandleStopDevice(Pdo);
    v30 = (struct _IO_REMOVE_LOCK *)(DeviceExtension + 64);
    if ( DeviceExtension[509] )
    {
      IoReleaseRemoveLockEx(v30, Tag, 0x20u);
    }
    else
    {
      IoReleaseRemoveLockAndWaitEx(v30, Tag, 0x20u);
      IoQueueWorkItem(*((PIO_WORKITEM *)DeviceExtension + 119), DpiPdoDestroyPdo, DelayedWorkQueue, 0LL);
    }
    v32 = *((_DWORD *)DeviceExtension + 69) & 7;
    *(_DWORD *)&DeviceExtension[4 * v32 + 244] = *((_DWORD *)DeviceExtension + 60);
    v33 = *((_DWORD *)DeviceExtension + 59);
    ++*((_DWORD *)DeviceExtension + 69);
    *((_DWORD *)DeviceExtension + 60) = v33;
    *((_DWORD *)DeviceExtension + 59) = 7;
    v34 = WdLogNewEntry5_WdEvent(v32, v31);
    *(_QWORD *)(v34 + 24) = Pdo;
    WdLogEvent5_WdEvent(v34);
    goto LABEL_25;
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
      goto LABEL_47;
    }
    if ( v22 == 1 )
    {
      KeEnterCriticalRegion();
      if ( DeviceExtension[484] )
        DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
      v23 = *((_DWORD *)DeviceExtension + 59) == 3;
      goto LABEL_44;
    }
LABEL_24:
    Status = Tag->IoStatus.Status;
    goto LABEL_4;
  }
  KeEnterCriticalRegion();
  if ( DeviceExtension[484] )
    DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
  v23 = *((_DWORD *)DeviceExtension + 59) == 5;
LABEL_44:
  if ( v23 )
  {
    v24 = *((_DWORD *)DeviceExtension + 60);
    --*((_DWORD *)DeviceExtension + 69);
    *((_DWORD *)DeviceExtension + 59) = v24;
    v25 = *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244];
LABEL_47:
    *((_DWORD *)DeviceExtension + 60) = v25;
  }
  Status = 0;
LABEL_50:
  if ( DeviceExtension[484] )
    DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
  ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
  KeLeaveCriticalRegion();
LABEL_5:
  Tag->IoStatus.Status = Status;
  IofCompleteRequest(Tag, 0);
  return (unsigned int)Status;
}
