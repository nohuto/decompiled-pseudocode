/*
 * XREFs of DpiFdoHandleSurpriseRemoval @ 0x1C02CA670
 * Callers:
 *     <none>
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C001E440 (DpiCheckForOutstandingD3Requests.c)
 *     DpiEnableD3Requests @ 0x1C00E20CC (DpiEnableD3Requests.c)
 *     DpiFdoHandleStopDevice @ 0x1C02CA270 (DpiFdoHandleStopDevice.c)
 *     DpiFdoIsDevicePresent @ 0x1C02CB034 (DpiFdoIsDevicePresent.c)
 *     DpiDxgkDdiNotifySurpriseRemoval @ 0x1C02D8570 (DpiDxgkDdiNotifySurpriseRemoval.c)
 */

NTSTATUS __fastcall DpiFdoHandleSurpriseRemoval(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  __int64 DeviceExtension; // rdi
  int IsDevicePresent; // r14d
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  int v13; // eax
  int v14; // eax
  __int64 v15; // rax
  char v17; // [rsp+40h] [rbp+8h] BYREF

  DeviceExtension = (__int64)a1->DeviceExtension;
  IsDevicePresent = 0;
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(DeviceExtension + 484) )
    DpiCheckForOutstandingD3Requests(DeviceExtension);
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(DeviceExtension + 168), 1u);
  v8 = *(_DWORD *)(DeviceExtension + 236);
  if ( v8 != 6 )
  {
    v9 = 0LL;
    if ( !*(_DWORD *)(DeviceExtension + 504) || *(_BYTE *)(DeviceExtension + 508) )
    {
      if ( *(_DWORD *)(DeviceExtension + 16) == 1953656900 && *(_DWORD *)(DeviceExtension + 20) == 2 )
        v9 = DeviceExtension;
    }
    else
    {
      v10 = *(_QWORD *)(DeviceExtension + 2728);
      if ( v10 )
        v9 = *(_QWORD *)(v10 + 64);
    }
    if ( !*(_BYTE *)(DeviceExtension + 232)
      && (v8 == 2 || *(_DWORD *)(DeviceExtension + 240) == 2 && ((v8 - 3) & 0xFFFFFFFD) == 0) )
    {
      v17 = 0;
      IsDevicePresent = DpiFdoIsDevicePresent(DeviceExtension, &v17);
      if ( IsDevicePresent < 0 )
        goto LABEL_20;
      if ( !v17 )
      {
        *(_BYTE *)(DeviceExtension + 1160) = 1;
        if ( v9 )
          IsDevicePresent = DpiDxgkDdiNotifySurpriseRemoval(
                              *(_QWORD *)(DeviceExtension + 40),
                              *(_QWORD *)(DeviceExtension + 48),
                              v9,
                              1LL);
      }
      if ( IsDevicePresent < 0 )
      {
LABEL_20:
        *(_BYTE *)(DeviceExtension + 1161) = 1;
        v12 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v11, v6);
        v12[3] = 275LL;
        v12[4] = 25LL;
        v12[5] = 2LL - (*(_BYTE *)(DeviceExtension + 1152) != 0);
        v12[6] = *(unsigned int *)(DeviceExtension + 1124);
        v12[7] = *(unsigned int *)(DeviceExtension + 1128);
        WdLogEvent5_WdCriticalError(v12);
      }
    }
    if ( v9 == DeviceExtension )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite((PERESOURCE)(v9 + 3792), 1u);
      *(_DWORD *)(v9 + 4LL * (*(_DWORD *)(v9 + 276) & 7) + 244) = *(_DWORD *)(v9 + 240);
      v13 = *(_DWORD *)(v9 + 236);
      ++*(_DWORD *)(v9 + 276);
      *(_DWORD *)(v9 + 240) = v13;
      *(_DWORD *)(v9 + 236) = 6;
      ExReleaseResourceLite((PERESOURCE)(v9 + 3792));
      KeLeaveCriticalRegion();
    }
    else
    {
      v7 = *(_DWORD *)(DeviceExtension + 276) & 7;
      *(_DWORD *)(DeviceExtension + 4 * v7 + 244) = *(_DWORD *)(DeviceExtension + 240);
      v14 = *(_DWORD *)(DeviceExtension + 236);
      ++*(_DWORD *)(DeviceExtension + 276);
      *(_DWORD *)(DeviceExtension + 240) = v14;
      *(_DWORD *)(DeviceExtension + 236) = 6;
    }
  }
  v15 = WdLogNewEntry5_WdEvent(v7, v6);
  *(_QWORD *)(v15 + 24) = a1;
  WdLogEvent5_WdEvent(v15);
  if ( *(_BYTE *)(DeviceExtension + 484) )
    DpiEnableD3Requests(*(_QWORD *)(DeviceExtension + 24));
  ExReleaseResourceLite(*(PERESOURCE *)(DeviceExtension + 168));
  KeLeaveCriticalRegion();
  if ( (unsigned int)(*(_DWORD *)(DeviceExtension + 240) - 1) <= 1 )
    DpiFdoHandleStopDevice(a1, a2);
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  a2->IoStatus.Status = IsDevicePresent;
  return IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 160), a2);
}
