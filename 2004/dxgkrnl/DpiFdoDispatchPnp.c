/*
 * XREFs of DpiFdoDispatchPnp @ 0x1C0198F50
 * Callers:
 *     <none>
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C001E440 (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     DpiEnableD3Requests @ 0x1C00E20CC (DpiEnableD3Requests.c)
 *     DpiFdoOpenDeviceFileObjectIfNeeded @ 0x1C01834C8 (DpiFdoOpenDeviceFileObjectIfNeeded.c)
 *     DpiFdoCloseDeviceFileObject @ 0x1C02C87F8 (DpiFdoCloseDeviceFileObject.c)
 */

__int64 __fastcall DpiFdoDispatchPnp(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 DeviceExtension; // [rsp+20h] [rbp-98h]
  char v12; // [rsp+28h] [rbp-90h]
  int Status; // [rsp+2Ch] [rbp-8Ch]
  UCHAR MinorFunction; // [rsp+30h] [rbp-88h]
  struct _IO_STACK_LOCATION *CurrentStackLocation; // [rsp+40h] [rbp-78h]
  POWER_STATE State; // [rsp+48h] [rbp-70h] BYREF
  unsigned int v17; // [rsp+4Ch] [rbp-6Ch]
  unsigned int v18; // [rsp+50h] [rbp-68h]
  _QWORD *v19; // [rsp+58h] [rbp-60h]
  _QWORD *v20; // [rsp+60h] [rbp-58h]
  __int64 v21; // [rsp+68h] [rbp-50h]
  __int64 v22; // [rsp+70h] [rbp-48h]
  __int64 v23; // [rsp+78h] [rbp-40h]
  POWER_STATE v24; // [rsp+80h] [rbp-38h]
  __int64 v25; // [rsp+88h] [rbp-30h]
  __int64 v26; // [rsp+98h] [rbp-20h]

  v25 = 0LL;
  Status = -1073741637;
  v12 = 0;
  DeviceExtension = (__int64)a1->DeviceExtension;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v25 = *(_QWORD *)(DeviceExtension + 40);
  if ( CurrentStackLocation->MinorFunction < 0x18u
    && *(_QWORD *)(DeviceExtension + 8LL * CurrentStackLocation->MinorFunction + 288) )
  {
    return (*(unsigned int (__fastcall **)(struct _DEVICE_OBJECT *, IRP *))(DeviceExtension
                                                                          + 8LL * CurrentStackLocation->MinorFunction
                                                                          + 288))(
             a1,
             a2);
  }
  MinorFunction = CurrentStackLocation->MinorFunction;
  switch ( MinorFunction )
  {
    case 0u:
      memset(&State, 0, sizeof(State));
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(DeviceExtension + 484) )
        DpiCheckForOutstandingD3Requests(DeviceExtension);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(DeviceExtension + 168), 1u);
      State.SystemState = PowerSystemWorking;
      *(_DWORD *)(DeviceExtension + 284) = 1;
      *(_DWORD *)(DeviceExtension + 280) = 1;
      v24.SystemState = PoSetPowerState(a1, DevicePowerState, State).SystemState;
      *(_DWORD *)(DeviceExtension + 4LL * (*(_DWORD *)(DeviceExtension + 276) % 8u) + 244) = *(_DWORD *)(DeviceExtension + 240);
      ++*(_DWORD *)(DeviceExtension + 276);
      *(_DWORD *)(DeviceExtension + 240) = *(_DWORD *)(DeviceExtension + 236);
      *(_DWORD *)(DeviceExtension + 236) = 2;
      Status = 0;
      if ( *(_BYTE *)(DeviceExtension + 484) )
        DpiEnableD3Requests(*(_QWORD *)(DeviceExtension + 24));
      ExReleaseResourceLite(*(PERESOURCE *)(DeviceExtension + 168));
      KeLeaveCriticalRegion();
      break;
    case 1u:
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(DeviceExtension + 484) )
        DpiCheckForOutstandingD3Requests(DeviceExtension);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(DeviceExtension + 168), 1u);
      if ( byte_1C00B1B11 && !*(_BYTE *)(DeviceExtension + 481) || *(_BYTE *)(DeviceExtension + 480) )
      {
        v12 = 1;
        Status = -1073741823;
        v20 = (_QWORD *)WdLogNewEntry5_WdError(v6, v5);
        v20[3] = a1;
        v20[4] = (unsigned __int8)byte_1C00B1B11;
        v20[5] = *(unsigned __int8 *)(DeviceExtension + 480);
        WdLogEvent5_WdError(v20);
      }
      else if ( *(_DWORD *)(DeviceExtension + 236) == 6 )
      {
        Status = 0;
      }
      else
      {
        if ( *(_DWORD *)(DeviceExtension + 236) == 4 )
        {
          v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v6, v5);
          v19[3] = 275LL;
          v19[4] = 21LL;
          v19[5] = DeviceExtension;
          v19[6] = -1073741823LL;
          WdLogEvent5_WdCriticalError(v19);
        }
        if ( DeviceExtension
          && *(_DWORD *)(DeviceExtension + 16) == 1953656900
          && (*(_DWORD *)(DeviceExtension + 20) == 2 || *(_DWORD *)(DeviceExtension + 20) == 3) )
        {
          DpiFdoCloseDeviceFileObject(DeviceExtension);
        }
        *(_DWORD *)(DeviceExtension + 4LL * (*(_DWORD *)(DeviceExtension + 276) % 8u) + 244) = *(_DWORD *)(DeviceExtension + 240);
        ++*(_DWORD *)(DeviceExtension + 276);
        *(_DWORD *)(DeviceExtension + 240) = *(_DWORD *)(DeviceExtension + 236);
        *(_DWORD *)(DeviceExtension + 236) = 5;
        Status = 0;
      }
      if ( *(_BYTE *)(DeviceExtension + 484) )
        DpiEnableD3Requests(*(_QWORD *)(DeviceExtension + 24));
      goto LABEL_81;
    case 3u:
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(DeviceExtension + 484) )
        DpiCheckForOutstandingD3Requests(DeviceExtension);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(DeviceExtension + 168), 1u);
      v12 = 1;
      IoForwardIrpSynchronously(*(PDEVICE_OBJECT *)(DeviceExtension + 160), a2);
      Status = a2->IoStatus.Status;
      if ( Status >= 0 )
      {
        if ( *(_DWORD *)(DeviceExtension + 236) == 5 )
        {
          *(_DWORD *)(DeviceExtension + 236) = *(_DWORD *)(DeviceExtension + 240);
          v18 = *(_DWORD *)(DeviceExtension + 276) - 1;
          *(_DWORD *)(DeviceExtension + 276) = v18;
          *(_DWORD *)(DeviceExtension + 240) = *(_DWORD *)(DeviceExtension + 4LL * (v18 % 8) + 244);
          if ( DeviceExtension
            && *(_DWORD *)(DeviceExtension + 16) == 1953656900
            && (*(_DWORD *)(DeviceExtension + 20) == 2 || *(_DWORD *)(DeviceExtension + 20) == 3) )
          {
            Status = DpiFdoOpenDeviceFileObjectIfNeeded(DeviceExtension);
            if ( Status < 0 )
            {
              v22 = WdLogNewEntry5_WdError(v8, v7);
              *(_QWORD *)(v22 + 24) = Status;
              WdLogEvent5_WdError(v22);
            }
          }
        }
        else if ( *(_DWORD *)(DeviceExtension + 236) == 6 )
        {
          *(_BYTE *)(DeviceExtension + 232) = 1;
          IoInvalidateDeviceState(*(PDEVICE_OBJECT *)(DeviceExtension + 152));
        }
      }
      if ( *(_BYTE *)(DeviceExtension + 484) )
        DpiEnableD3Requests(*(_QWORD *)(DeviceExtension + 24));
      goto LABEL_81;
    case 4u:
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(DeviceExtension + 484) )
        DpiCheckForOutstandingD3Requests(DeviceExtension);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(DeviceExtension + 168), 1u);
      v3 = *(unsigned int *)(DeviceExtension + 240);
      *(_DWORD *)(DeviceExtension + 4LL * (*(_DWORD *)(DeviceExtension + 276) % 8u) + 244) = v3;
      ++*(_DWORD *)(DeviceExtension + 276);
      v4 = *(unsigned int *)(DeviceExtension + 236);
      *(_DWORD *)(DeviceExtension + 240) = v4;
      *(_DWORD *)(DeviceExtension + 236) = 4;
      Status = 0;
      v21 = WdLogNewEntry5_WdEvent(v4, v3);
      *(_QWORD *)(v21 + 24) = a1;
      WdLogEvent5_WdEvent(v21);
      if ( *(_BYTE *)(DeviceExtension + 484) )
        DpiEnableD3Requests(*(_QWORD *)(DeviceExtension + 24));
      goto LABEL_81;
    case 5u:
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(DeviceExtension + 484) )
        DpiCheckForOutstandingD3Requests(DeviceExtension);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(DeviceExtension + 168), 1u);
      if ( byte_1C00B1B11 && !*(_BYTE *)(DeviceExtension + 481) || *(_BYTE *)(DeviceExtension + 480) )
      {
        v12 = 1;
        Status = -1073741823;
      }
      else
      {
        v12 = 1;
        Status = -1073741808;
      }
      if ( *(_BYTE *)(DeviceExtension + 484) )
        DpiEnableD3Requests(*(_QWORD *)(DeviceExtension + 24));
      goto LABEL_81;
    case 6u:
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(DeviceExtension + 484) )
        DpiCheckForOutstandingD3Requests(DeviceExtension);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(DeviceExtension + 168), 1u);
      v12 = 1;
      IoForwardIrpSynchronously(*(PDEVICE_OBJECT *)(DeviceExtension + 160), a2);
      Status = a2->IoStatus.Status;
      if ( Status >= 0 && *(_DWORD *)(DeviceExtension + 236) == 3 )
      {
        *(_DWORD *)(DeviceExtension + 236) = *(_DWORD *)(DeviceExtension + 240);
        v17 = *(_DWORD *)(DeviceExtension + 276) - 1;
        *(_DWORD *)(DeviceExtension + 276) = v17;
        *(_DWORD *)(DeviceExtension + 240) = *(_DWORD *)(DeviceExtension + 4LL * (v17 % 8) + 244);
      }
      if ( *(_BYTE *)(DeviceExtension + 484) )
        DpiEnableD3Requests(*(_QWORD *)(DeviceExtension + 24));
      goto LABEL_81;
    case 9u:
      if ( DeviceExtension
        && *(_DWORD *)(DeviceExtension + 16) == 1953656900
        && (*(_DWORD *)(DeviceExtension + 20) == 2 || *(_DWORD *)(DeviceExtension + 20) == 3) )
      {
        v12 = 1;
        IoForwardIrpSynchronously(*(PDEVICE_OBJECT *)(DeviceExtension + 160), a2);
        Status = a2->IoStatus.Status;
        qmemcpy((void *)(DeviceExtension + 1296), CurrentStackLocation->Parameters.Create.SecurityContext, 0x40uLL);
      }
      break;
    case 0x14u:
      v12 = 1;
      IoForwardIrpSynchronously(*(PDEVICE_OBJECT *)(DeviceExtension + 160), a2);
      Status = a2->IoStatus.Status;
      if ( Status >= 0 || Status == -1073741637 )
      {
        if ( DeviceExtension
          && *(_DWORD *)(DeviceExtension + 16) == 1953656900
          && *(_DWORD *)(DeviceExtension + 20) == 4 )
        {
          Status = 0;
          a2->IoStatus.Information |= 2uLL;
        }
        else
        {
          if ( *(_BYTE *)(DeviceExtension + 232) == 1 )
          {
            Status = 0;
            a2->IoStatus.Information |= 4uLL;
          }
          else if ( *(_BYTE *)(DeviceExtension + 480) )
          {
            Status = 0;
            a2->IoStatus.Information |= 0x22uLL;
          }
          if ( DeviceExtension )
          {
            if ( *(_DWORD *)(DeviceExtension + 16) == 1953656900 && *(_DWORD *)(DeviceExtension + 20) == 2 )
            {
              v26 = DeviceExtension;
              if ( *(_BYTE *)(DeviceExtension + 5444) )
                a2->IoStatus.Information |= 0x100uLL;
            }
          }
        }
      }
      break;
    case 0x17u:
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(DeviceExtension + 484) )
        DpiCheckForOutstandingD3Requests(DeviceExtension);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(DeviceExtension + 168), 1u);
      v9 = *(unsigned int *)(DeviceExtension + 240);
      *(_DWORD *)(DeviceExtension + 4LL * (*(_DWORD *)(DeviceExtension + 276) % 8u) + 244) = v9;
      ++*(_DWORD *)(DeviceExtension + 276);
      v10 = *(unsigned int *)(DeviceExtension + 236);
      *(_DWORD *)(DeviceExtension + 240) = v10;
      *(_DWORD *)(DeviceExtension + 236) = 6;
      Status = 0;
      v23 = WdLogNewEntry5_WdEvent(v10, v9);
      *(_QWORD *)(v23 + 24) = a1;
      WdLogEvent5_WdEvent(v23);
      if ( *(_BYTE *)(DeviceExtension + 484) )
        DpiEnableD3Requests(*(_QWORD *)(DeviceExtension + 24));
LABEL_81:
      ExReleaseResourceLite(*(PERESOURCE *)(DeviceExtension + 168));
      KeLeaveCriticalRegion();
      break;
  }
  if ( v12 || Status < 0 && Status != -1073741637 )
  {
    a2->IoStatus.Status = Status;
    IofCompleteRequest(a2, 1);
  }
  else
  {
    if ( Status != -1073741637 )
      a2->IoStatus.Status = Status;
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 160), a2);
  }
  return (unsigned int)Status;
}
