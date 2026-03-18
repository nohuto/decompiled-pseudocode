/*
 * XREFs of DpiFdoHandleSystemPower @ 0x1C01F02DC
 * Callers:
 *     DpiFdoDispatchPower @ 0x1C01F02B0 (DpiFdoDispatchPower.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C0012BA4 (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     DpiEnableD3Requests @ 0x1C016E8A8 (DpiEnableD3Requests.c)
 *     DpiDxgkDdiSetPowerState @ 0x1C01F0768 (DpiDxgkDdiSetPowerState.c)
 *     DpiFdoStopMiracastSession @ 0x1C01F0830 (DpiFdoStopMiracastSession.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C01F3230 (DpiFdoInvalidateChildRelations.c)
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1C01F43EC (DpiAcquirePostDisplayInfoFromBgfx.c)
 *     DpiKsrSetBootGraphicsInformation @ 0x1C03944F0 (DpiKsrSetBootGraphicsInformation.c)
 *     DpiKsrStopAdapter @ 0x1C03945BC (DpiKsrStopAdapter.c)
 */

NTSTATUS __fastcall DpiFdoHandleSystemPower(PDEVICE_OBJECT DeviceObject, IRP *Context, __int64 a3, __int64 a4)
{
  char *DeviceExtension; // rsi
  bool v5; // al
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  IRP *v8; // r12
  struct _IO_REMOVE_LOCK *v9; // rbx
  struct _IO_STACK_LOCATION *v10; // rax
  struct _IO_STACK_LOCATION *v11; // rax
  NTSTATUS v12; // eax
  int Status; // r15d
  __int64 v14; // rdx
  unsigned int LowPart; // eax
  __int64 v16; // rcx
  POWER_STATE v17; // ebx
  DWORD v18; // eax
  __int64 v19; // rcx
  NTSTATUS v21; // eax
  int v22; // ebx
  NTSTATUS v23; // eax
  __int64 v24; // rdx
  char v25; // [rsp+40h] [rbp-79h]
  char v26; // [rsp+41h] [rbp-78h]
  union _LARGE_INTEGER Timeout; // [rsp+48h] [rbp-71h] BYREF
  PDEVICE_OBJECT v28; // [rsp+50h] [rbp-69h]
  PIO_REMOVE_LOCK RemoveLock; // [rsp+58h] [rbp-61h]
  struct _KEVENT Event; // [rsp+60h] [rbp-59h] BYREF
  _QWORD v31[10]; // [rsp+80h] [rbp-39h] BYREF

  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  v5 = 0;
  CurrentStackLocation = Context->Tail.Overlay.CurrentStackLocation;
  v28 = DeviceObject;
  memset(&Event, 0, sizeof(Event));
  v26 = 0;
  v8 = Context;
  if ( CurrentStackLocation->MinorFunction != 2 )
  {
    if ( CurrentStackLocation->MinorFunction != 3 )
    {
      ++Context->CurrentLocation;
      Context->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
      return PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), Context);
    }
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 1 )
    {
      Timeout.QuadPart = -300000000LL;
      LOBYTE(Context) = 1;
      DpiFdoStopMiracastSession(DeviceObject, Context, &Timeout, 131LL);
    }
LABEL_7:
    v9 = (struct _IO_REMOVE_LOCK *)(DeviceExtension + 64);
    RemoveLock = (PIO_REMOVE_LOCK)(DeviceExtension + 64);
    IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 2, v8, File, 1u, 0x20u);
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v10 = v8->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v10[-1].MajorFunction = *(_OWORD *)&v10->MajorFunction;
    *(_OWORD *)&v10[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v10->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&v10[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v10->Parameters.SetQuota + 6);
    v10[-1].FileObject = v10->FileObject;
    v10[-1].Control = 0;
    v11 = v8->Tail.Overlay.CurrentStackLocation;
    v11[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)DpiFdoPowerCompletionRoutine;
    v11[-1].Context = &Event;
    v11[-1].Control = -32;
    PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), v8);
    v12 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = v12;
    if ( v12 )
    {
      WdLogSingleEntry1(2LL, v12);
      goto LABEL_36;
    }
    Status = v8->IoStatus.Status;
    if ( Status < 0 )
    {
      WdLogSingleEntry1(3LL, CurrentStackLocation->MinorFunction);
      goto LABEL_37;
    }
    if ( CurrentStackLocation->MinorFunction == 2
      && DeviceExtension[1159]
      && CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 1
      && *((_DWORD *)DeviceExtension + 71) != 1 )
    {
      Timeout.QuadPart = -150000000LL;
      v23 = KeWaitForSingleObject(DeviceExtension + 1240, Executive, 0, 0, &Timeout);
      v24 = 258LL;
      if ( v23 == 258 )
      {
LABEL_60:
        WdLogSingleEntry1(2LL, v24);
        goto LABEL_11;
      }
      if ( v23 < 0 || (v23 = KeWaitForSingleObject(DeviceExtension + 1264, Executive, 0, 0, 0LL), v23 < 0) )
      {
        v24 = v23;
        goto LABEL_60;
      }
    }
LABEL_11:
    KeEnterCriticalRegion();
    if ( DeviceExtension[484] )
      DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
    if ( CurrentStackLocation->MinorFunction == 2 )
    {
      LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
      if ( LowPart > 1 )
        *((_DWORD *)DeviceExtension + 70) = LowPart;
    }
    v16 = (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    v17.SystemState = *(SYSTEM_POWER_STATE *)&DeviceExtension[4 * v16 + 1312];
    if ( DeviceExtension[1159] )
      goto LABEL_33;
    if ( !DeviceExtension[480] )
    {
      v26 = 1;
      v8->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      v21 = PoRequestPowerIrp(
              DeviceObject,
              CurrentStackLocation->MinorFunction,
              v17,
              (PREQUEST_POWER_COMPLETE)DpiFdoDevicePowerCompletionCallback,
              v8,
              0LL);
      Status = v21;
      if ( v21 != 259 )
        WdLogSingleEntry1(2LL, v21);
      goto LABEL_33;
    }
    Status = 0;
    if ( *((_DWORD *)DeviceExtension + 4) != 1953656900
      || *((_DWORD *)DeviceExtension + 5) != 2
      || *((_DWORD *)DeviceExtension + 59) != 2
      || CurrentStackLocation->MinorFunction != 2 )
    {
LABEL_32:
      *((_DWORD *)DeviceExtension + 70) = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
LABEL_33:
      if ( DeviceExtension[484] )
        DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
      ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
      KeLeaveCriticalRegion();
      v9 = RemoveLock;
LABEL_36:
      if ( Status == 259 )
        return Status;
LABEL_37:
      PoStartNextPowerIrp(v8);
      v8->IoStatus.Status = Status;
      IofCompleteRequest(v8, 0);
      IoReleaseRemoveLockEx(v9, v8, 0x20u);
      if ( v26 )
        return 259;
      return Status;
    }
    Timeout.LowPart = CurrentStackLocation->Parameters.Create.EaLength;
    if ( !DeviceExtension[1154] || (v25 = 1, (unsigned int)(dword_1C01307F0 - 4) > 1) )
      v25 = 0;
    if ( v17.SystemState != PowerSystemWorking )
    {
LABEL_28:
      if ( v25 && v17.SystemState < *((_DWORD *)DeviceExtension + 71) && byte_1C0130810 )
      {
        LOBYTE(v14) = 1;
        DpiAcquirePostDisplayInfoFromBgfx(&xmmword_1C0130750, v14, 0LL);
        byte_1C0130810 = 0;
        dword_1C013083C = 1;
        qword_1C01307F8 = (__int64)KeGetCurrentThread();
        qword_1C0130800 = (__int64)DeviceObject;
      }
      ((void (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))DpiDxgkDdiSetPowerState)(
        *((_QWORD *)DeviceExtension + 5),
        *((_QWORD *)DeviceExtension + 6),
        -1,
        (POWER_STATE)v17.SystemState,
        Timeout.LowPart);
      if ( v25 )
      {
        if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 5 )
        {
          byte_1C0130810 = 1;
          LOBYTE(v19) = 1;
          InbvNotifyDisplayOwnershipChange(v19, DpiEnterSystemDisplay);
        }
        else if ( v17.SystemState < *((_DWORD *)DeviceExtension + 71) )
        {
          xmmword_1C0130760 = 0LL;
          DWORD2(xmmword_1C0130760) = -1;
          xmmword_1C0130750 = 0LL;
          memset(&xmmword_1C0130770, 0, 0x80uLL);
          qword_1C0130800 = 0LL;
          qword_1C01307F8 = (__int64)KeGetCurrentThread();
        }
      }
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite((PERESOURCE)(DeviceExtension + 3792), 1u);
      *((POWER_STATE *)DeviceExtension + 71) = v17;
      ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 3792));
      KeLeaveCriticalRegion();
      if ( v17.SystemState == PowerSystemWorking )
      {
        memset(v31, 0, 0x48uLL);
        EtwActivityIdControl(3u, (LPGUID)&v31[1]);
        v31[8] = MEMORY[0xFFFFF78000000014];
        LODWORD(v31[3]) = 11;
        LOBYTE(v31[6]) = -1;
        DpiFdoInvalidateChildRelations(v28, 6LL, v31);
      }
      goto LABEL_32;
    }
    v18 = Timeout.LowPart;
    if ( Timeout.LowPart != 3 )
    {
LABEL_27:
      Timeout.LowPart = v18;
      goto LABEL_28;
    }
    if ( (int)v16 >= 2 )
    {
      if ( (int)v16 <= 4 )
      {
        Timeout.LowPart = 2;
        WdLogSingleEntry1(4LL, DeviceObject);
        goto LABEL_67;
      }
      if ( (_DWORD)v16 == 5 )
      {
        WdLogSingleEntry1(4LL, DeviceObject);
LABEL_67:
        v18 = Timeout.LowPart;
        goto LABEL_27;
      }
    }
    WdLogSingleEntry1(2LL, DeviceObject);
    goto LABEL_67;
  }
  if ( DeviceExtension && *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
    v5 = DeviceExtension[5000] != 0;
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 6 )
    goto LABEL_7;
  if ( v5 )
    goto LABEL_7;
  if ( !HIBYTE(word_1C0130998) )
    goto LABEL_7;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_KsrDisplay__private_reporting,
    0xB841E8u,
    a3,
    a4,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_SupportComputeOnlyAdapters_logged_traits,
    1);
  v22 = DpiKsrStopAdapter(DeviceObject, v8);
  if ( v22 == -1073741637 )
    goto LABEL_7;
  if ( (unsigned int)(dword_1C01307F0 - 1) <= 1 )
    DpiKsrSetBootGraphicsInformation();
  return v22;
}
