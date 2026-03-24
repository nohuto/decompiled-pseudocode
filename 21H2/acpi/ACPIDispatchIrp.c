/*
 * XREFs of ACPIDispatchIrp @ 0x1C0001010
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalDecrementIrpReferenceCount @ 0x1C000E778 (ACPIInternalDecrementIrpReferenceCount.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000EA0C (WPP_RECORDER_SF_qq.c)
 *     ACPIWakeEmptyRequestQueue @ 0x1C00257CC (ACPIWakeEmptyRequestQueue.c)
 *     ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck @ 0x1C002D448 (ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck.c)
 *     ACPIThermalReleaseCoolingInterfaces @ 0x1C0031680 (ACPIThermalReleaseCoolingInterfaces.c)
 *     _guard_dispatch_icall_nop @ 0x1C0032180 (_guard_dispatch_icall_nop.c)
 *     EnableDisableRegionSpacesForDevice @ 0x1C005C920 (EnableDisableRegionSpacesForDevice.c)
 *     ACPIWakeDeferredRestoreEnables @ 0x1C006191C (ACPIWakeDeferredRestoreEnables.c)
 *     ACPIInternalNotifyAvailableDeviceObject @ 0x1C00A2218 (ACPIInternalNotifyAvailableDeviceObject.c)
 */

__int64 __fastcall ACPIDispatchIrp(ULONG_PTR BugCheckParameter3, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  KIRQL v5; // al
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdx
  unsigned __int8 MajorFunction; // al
  __int64 MinorFunction; // rcx
  unsigned int Status; // edi
  KPROCESSOR_MODE RequestorMode; // dl
  unsigned int v14; // eax
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  KIRQL v17; // al
  __int64 v18; // rdi
  __int64 v19; // rdi
  unsigned int (__fastcall *v20)(ULONG_PTR, PIRP); // rdi
  __int64 v21; // rdx
  __int64 v22; // rdi
  __int64 (__fastcall *v23)(ULONG_PTR, PIRP); // rdi
  unsigned int LowPart; // ecx
  bool v25; // zf
  struct _KEVENT Event; // [rsp+40h] [rbp-38h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  memset(&Event, 0, sizeof(Event));
  v5 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v6 = *(_QWORD *)(BugCheckParameter3 + 64);
  if ( v6 )
  {
    if ( *(_DWORD *)(v6 + 16) != 1599293264 )
      KeBugCheckEx(0xA3u, 2uLL, 0x90234uLL, BugCheckParameter3, *(_QWORD *)(BugCheckParameter3 + 64));
    if ( (*(_BYTE *)(v6 + 8) & 4) == 0 )
    {
      v7 = *(_QWORD *)(v6 + 24);
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 688));
      goto LABEL_5;
    }
    v6 = 0LL;
  }
  v7 = 0LL;
LABEL_5:
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v5);
  if ( v6 )
  {
    MajorFunction = CurrentStackLocation->MajorFunction;
    MinorFunction = CurrentStackLocation->MinorFunction;
    if ( CurrentStackLocation->MajorFunction == 15 )
    {
LABEL_7:
      v7 += 8LL;
      goto LABEL_8;
    }
    if ( MajorFunction == 27 )
    {
      if ( (_BYTE)MinorFunction )
      {
        v19 = *(_QWORD *)(v7 + 24);
        if ( (unsigned __int8)MinorFunction >= 0x1Au )
          v20 = *(unsigned int (__fastcall **)(ULONG_PTR, PIRP))(v19 + 208);
        else
          v20 = *(unsigned int (__fastcall **)(ULONG_PTR, PIRP))(v19 + 8 * MinorFunction);
        switch ( (_BYTE)MinorFunction )
        {
          case 0xB:
            if ( (*(_DWORD *)(v6 + 8) & 0x200LL) == 0 )
              _InterlockedOr64((volatile signed __int64 *)(v6 + 8), 0x200uLL);
            break;
          case 7:
            if ( *(_DWORD *)(v6 + 328) == 2 && (*(_DWORD *)(v6 + 8) & 0x200LL) != 0 )
            {
              *(_DWORD *)(v6 + 332) = 2;
              *(_DWORD *)(v6 + 328) = 3;
              ACPIInternalNotifyAvailableDeviceObject(v6);
              if ( (*(_DWORD *)(v6 + 628) & 0x300) != 0 )
              {
                LOBYTE(v21) = 1;
                EnableDisableRegionSpacesForDevice(v6, v21);
              }
              ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck(v6);
            }
            break;
          case 2:
          case 0x17:
            if ( *(_DWORD *)(v6 + 328) == 3 )
            {
              if ( (*(_DWORD *)(v6 + 628) & 0x300) != 0 )
                EnableDisableRegionSpacesForDevice(v6, 0LL);
              *(_DWORD *)(v6 + 332) = 3;
              *(_DWORD *)(v6 + 328) = 2;
            }
            ACPIThermalReleaseCoolingInterfaces(v6);
            _InterlockedAnd64((volatile signed __int64 *)(v6 + 8), 0xFFFFFFFFFFFFFDFFuLL);
            KeInitializeEvent(&Event, SynchronizationEvent, 0);
            *(_QWORD *)(v6 + 712) = &Event;
            ACPIWakeEmptyRequestQueue(v6);
            ACPIInternalDecrementIrpReferenceCount(v6);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 688), 0xFFFFFFFF) != 1 )
              KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
            _InterlockedIncrement((volatile signed __int32 *)(v6 + 688));
            *(_QWORD *)(v6 + 712) = 0LL;
            if ( v20 )
            {
              return v20(BugCheckParameter3, Irp);
            }
            else
            {
              Status = -1073741822;
              Irp->IoStatus.Status = -1073741822;
              IofCompleteRequest(Irp, 0);
            }
            return Status;
        }
      }
      else
      {
        v20 = *(unsigned int (__fastcall **)(ULONG_PTR, PIRP))(v7 + 16);
      }
      if ( v20 )
      {
        Status = v20(BugCheckParameter3, Irp);
        goto LABEL_10;
      }
LABEL_80:
      Status = -1073741822;
      Irp->IoStatus.Status = -1073741822;
      IofCompleteRequest(Irp, 0);
LABEL_10:
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 688), 0xFFFFFFFF) != 1 )
        return Status;
LABEL_11:
      KeSetEvent(*(PRKEVENT *)(v6 + 712), 0, 0);
      return Status;
    }
    if ( MajorFunction == 22 )
    {
      v22 = *(_QWORD *)(v7 + 32);
      if ( (unsigned __int8)MinorFunction >= 4u )
        v23 = *(__int64 (__fastcall **)(ULONG_PTR, PIRP))(v22 + 32);
      else
        v23 = *(__int64 (__fastcall **)(ULONG_PTR, PIRP))(v22 + 8 * MinorFunction);
      if ( (_BYTE)MinorFunction == 2 && !CurrentStackLocation->Parameters.Create.Options )
      {
        LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
        if ( *(_DWORD *)(v6 + 508) != LowPart )
        {
          v25 = *(_DWORD *)(v6 + 328) == 3;
          *(_DWORD *)(v6 + 508) = LowPart;
          if ( v25 && (*(_DWORD *)(v6 + 628) & 0x300) != 0 )
          {
            LOBYTE(v8) = LowPart == 1;
            EnableDisableRegionSpacesForDevice(v6, v8);
          }
        }
      }
      if ( CurrentStackLocation->MinorFunction == 2
        && !CurrentStackLocation->Parameters.Create.Options
        && CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 1
        && (*(_QWORD *)(v6 + 8) & 0x8000000000000LL) == 0
        && (*(_DWORD *)(v6 + 960) & 0x1000LL) != 0 )
      {
        Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 688));
        Irp->IoStatus.Status = 0;
        ACPIWakeDeferredRestoreEnables(v6, v8, Irp);
        Status = 259;
      }
      else if ( v23 )
      {
        Status = v23(BugCheckParameter3, Irp);
      }
      else
      {
        Status = -1073741822;
        Irp->IoStatus.Status = -1073741822;
        IofCompleteRequest(Irp, 0);
      }
      ACPIInternalDecrementIrpReferenceCount(v6);
      return Status;
    }
    if ( MajorFunction )
    {
      if ( MajorFunction == 14 )
      {
        RequestorMode = Irp->RequestorMode;
        if ( !RequestorMode
          || (Irp->Flags & 0x400000) != 0
          || RootDeviceExtension
          && BugCheckParameter3 == *(_QWORD *)(RootDeviceExtension + 728)
          && SeSinglePrivilegeCheck((LUID)7LL, RequestorMode) )
        {
          goto LABEL_7;
        }
        v14 = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
        if ( v14 == 3325956
          || v14 == 3325952
          || (v15 = v14 - 3325968, (unsigned int)v15 <= 0x38) && (v16 = 0x111110001111111LL, _bittest64(&v16, v15)) )
        {
          Status = -1073741637;
          Irp->IoStatus.Status = -1073741637;
        }
        else
        {
          v17 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
          v18 = *(_QWORD *)(BugCheckParameter3 + 64);
          if ( v18 )
          {
            if ( *(_DWORD *)(v18 + 16) != 1599293264 )
              KeBugCheckEx(0xA3u, 2uLL, 0x901A5uLL, BugCheckParameter3, *(_QWORD *)(BugCheckParameter3 + 64));
          }
          KeReleaseSpinLock(&AcpiDeviceTreeLock, v17);
          if ( *(_QWORD *)(v18 + 736) )
          {
            ++Irp->CurrentLocation;
            ++Irp->Tail.Overlay.CurrentStackLocation;
            Status = IofCallDriver(*(PDEVICE_OBJECT *)(v18 + 736), Irp);
            goto LABEL_29;
          }
          Status = Irp->IoStatus.Status;
        }
        IofCompleteRequest(Irp, 0);
LABEL_29:
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 688), 0xFFFFFFFF) != 1 )
          return Status;
        goto LABEL_11;
      }
      if ( MajorFunction != 2 )
      {
        if ( MajorFunction == 23 )
          v7 += 40LL;
        else
          v7 += 48LL;
      }
    }
LABEL_8:
    if ( *(_QWORD *)v7 )
    {
      Status = (*(__int64 (__fastcall **)(ULONG_PTR, PIRP))v7)(BugCheckParameter3, Irp);
      goto LABEL_10;
    }
    goto LABEL_80;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_qq(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      6,
      17,
      (__int64)&WPP_6862a416d8603aba0a2e2af82566a863_Traceguids,
      BugCheckParameter3,
      (char)Irp);
  }
  Irp->IoStatus.Status = -1073741810;
  IofCompleteRequest(Irp, 0);
  return 3221225486LL;
}
