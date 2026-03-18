/*
 * XREFs of ACPIIrpDispatchDeviceControl @ 0x1C0001410
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDispatchForwardIrp @ 0x1C0001660 (ACPIDispatchForwardIrp.c)
 *     ACPIIoctlEvalControlMethod @ 0x1C001BC74 (ACPIIoctlEvalControlMethod.c)
 *     ACPIIoctlEnumChildren @ 0x1C001F2D4 (ACPIIoctlEnumChildren.c)
 *     ACPIIoctlRegisterOpRegionHandler @ 0x1C0029204 (ACPIIoctlRegisterOpRegionHandler.c)
 *     ACPIIoctlGetDeviceSpecificData @ 0x1C002B560 (ACPIIoctlGetDeviceSpecificData.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C002D9AC (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIIoctlRegisterDeviceFirmwareLock @ 0x1C002DB1C (ACPIIoctlRegisterDeviceFirmwareLock.c)
 *     ACPIIoctlAcquireGlobalLock @ 0x1C0057FBC (ACPIIoctlAcquireGlobalLock.c)
 *     ACPIIoctlEvaluateUsb4Osc @ 0x1C00587F4 (ACPIIoctlEvaluateUsb4Osc.c)
 *     ACPIIoctlGetDeviceInformation @ 0x1C0058990 (ACPIIoctlGetDeviceInformation.c)
 *     ACPIIoctlQueryDeviceBiosNameEx @ 0x1C0058C04 (ACPIIoctlQueryDeviceBiosNameEx.c)
 *     ACPIIoctlReleaseGlobalLock @ 0x1C0058CE0 (ACPIIoctlReleaseGlobalLock.c)
 *     ACPIIoctlUnRegisterOpRegionHandler @ 0x1C0058D6C (ACPIIoctlUnRegisterOpRegionHandler.c)
 *     ACPIIoctlUnregisterDeviceFirmwareLockHandler @ 0x1C0058DD4 (ACPIIoctlUnregisterDeviceFirmwareLockHandler.c)
 *     ACPIIoctlQueryDeviceBiosName @ 0x1C00AF388 (ACPIIoctlQueryDeviceBiosName.c)
 *     ACPIIoctlTranslateBiosResources @ 0x1C00AF43C (ACPIIoctlTranslateBiosResources.c)
 */

__int64 __fastcall ACPIIrpDispatchDeviceControl(ULONG_PTR BugCheckParameter3, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  KPROCESSOR_MODE RequestorMode; // dl
  ULONG_PTR v5; // rsi
  unsigned int LowPart; // eax
  KIRQL v7; // al
  __int64 v8; // rdi
  unsigned int Status; // edi
  __int64 result; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  RequestorMode = Irp->RequestorMode;
  v5 = BugCheckParameter3;
  if ( RequestorMode )
  {
    BugCheckParameter3 = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    if ( (Irp->Flags & 0x400000) == 0 )
    {
      if ( RootDeviceExtension && v5 == *(_QWORD *)(RootDeviceExtension + 768) && (_DWORD)BugCheckParameter3 == 3325952 )
      {
        if ( SeSinglePrivilegeCheck((LUID)7LL, RequestorMode) )
          goto LABEL_2;
      }
      else if ( (_DWORD)BugCheckParameter3 != 3325956 && (_DWORD)BugCheckParameter3 != 3325952 )
      {
        v11 = (unsigned int)(BugCheckParameter3 - 3325968);
        if ( (unsigned int)v11 > 0x38 || (v12 = 0x111110001111111LL, !_bittest64(&v12, v11)) )
        {
          v7 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
          v8 = *(_QWORD *)(v5 + 64);
          if ( v8 && *(_DWORD *)(v8 + 16) != 1599293264 )
            KeBugCheckEx(0xA3u, 2uLL, 0x901A5uLL, v5, *(_QWORD *)(v5 + 64));
          goto LABEL_5;
        }
      }
      Status = -1073741637;
      Irp->IoStatus.Status = -1073741637;
      goto LABEL_44;
    }
    if ( (_DWORD)BugCheckParameter3 != 3325956 && (_DWORD)BugCheckParameter3 != 3325952 )
    {
      BugCheckParameter3 = (unsigned int)(BugCheckParameter3 - 3325976);
      if ( (unsigned int)BugCheckParameter3 > 0x30 )
        return (unsigned int)ACPIDispatchForwardIrp(v5, Irp);
      v13 = 0x1111100011111LL;
      if ( !_bittest64(&v13, BugCheckParameter3) )
        return (unsigned int)ACPIDispatchForwardIrp(v5, Irp);
    }
  }
LABEL_2:
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( LowPart < 0x32C000 )
  {
LABEL_3:
    v7 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    v8 = *(_QWORD *)(v5 + 64);
    if ( v8 )
    {
      if ( *(_DWORD *)(v8 + 16) != 1599293264 )
        KeBugCheckEx(0xA3u, 2uLL, 0x901A5uLL, v5, *(_QWORD *)(v5 + 64));
    }
LABEL_5:
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v7);
    if ( *(_QWORD *)(v8 + 776) )
    {
      ++Irp->CurrentLocation;
      ++Irp->Tail.Overlay.CurrentStackLocation;
      return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(v8 + 776), Irp);
    }
    Status = Irp->IoStatus.Status;
LABEL_44:
    IofCompleteRequest(Irp, 0);
    return Status;
  }
  switch ( LowPart )
  {
    case 0x32C000u:
    case 0x32C01Cu:
    case 0x32C040u:
    case 0x32C048u:
      result = ACPIIoctlAsyncEvalControlMethod(v5, Irp, CurrentStackLocation);
      break;
    case 0x32C004u:
    case 0x32C018u:
    case 0x32C03Cu:
    case 0x32C044u:
      result = ACPIIoctlEvalControlMethod(v5, Irp, CurrentStackLocation);
      break;
    case 0x32C008u:
      result = ACPIIoctlRegisterOpRegionHandler(v5, Irp, CurrentStackLocation);
      break;
    case 0x32C00Cu:
      return (unsigned int)ACPIIoctlUnRegisterOpRegionHandler(v5, Irp, CurrentStackLocation);
    case 0x32C010u:
      return (unsigned int)ACPIIoctlAcquireGlobalLock(BugCheckParameter3, Irp, CurrentStackLocation);
    case 0x32C014u:
      return (unsigned int)ACPIIoctlReleaseGlobalLock(BugCheckParameter3, Irp, CurrentStackLocation);
    case 0x32C020u:
      result = ACPIIoctlEnumChildren(v5, Irp, CurrentStackLocation);
      break;
    case 0x32C024u:
      return (unsigned int)ACPIIoctlQueryDeviceBiosName(v5, Irp, CurrentStackLocation);
    case 0x32C028u:
      return (unsigned int)ACPIIoctlGetDeviceInformation(v5, Irp, CurrentStackLocation);
    case 0x32C02Cu:
      return (unsigned int)ACPIIoctlTranslateBiosResources(v5, Irp, CurrentStackLocation);
    case 0x32C030u:
      result = ACPIIoctlRegisterDeviceFirmwareLock(v5, Irp, CurrentStackLocation);
      break;
    case 0x32C034u:
      return (unsigned int)ACPIIoctlUnregisterDeviceFirmwareLockHandler(BugCheckParameter3, Irp, CurrentStackLocation);
    case 0x32C038u:
      result = ACPIIoctlGetDeviceSpecificData(v5, Irp, CurrentStackLocation);
      break;
    case 0x32C04Cu:
      return (unsigned int)ACPIIoctlEvaluateUsb4Osc(v5, Irp);
    case 0x32C050u:
      return (unsigned int)ACPIIoctlQueryDeviceBiosNameEx(v5, Irp, CurrentStackLocation);
    default:
      goto LABEL_3;
  }
  return result;
}
