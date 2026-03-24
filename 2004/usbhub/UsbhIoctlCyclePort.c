/*
 * XREFs of UsbhIoctlCyclePort @ 0x1C003DF14
 * Callers:
 *     UsbhFdoDeviceControl @ 0x1C002A170 (UsbhFdoDeviceControl.c)
 * Callees:
 *     UsbhDecHubBusy @ 0x1C0003610 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C0004060 (UsbhIncHubBusy.c)
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     UsbhLatchPdo @ 0x1C0016B5C (UsbhLatchPdo.c)
 *     UsbhUnlatchPdo @ 0x1C00171A0 (UsbhUnlatchPdo.c)
 *     Usb_Disconnected @ 0x1C001CEB4 (Usb_Disconnected.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E0B4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E188 (WPP_RECORDER_SF_d.c)
 *     UsbhCycleDevicePort @ 0x1C0036CFC (UsbhCycleDevicePort.c)
 *     UsbhAcquireApiLock @ 0x1C003D9B0 (UsbhAcquireApiLock.c)
 *     UsbhIoctlTraceOutput @ 0x1C0040ACC (UsbhIoctlTraceOutput.c)
 *     UsbhIoctlValidateParameters @ 0x1C0040CF4 (UsbhIoctlValidateParameters.c)
 *     UsbhReleaseApiLock @ 0x1C0041094 (UsbhReleaseApiLock.c)
 *     UsbhVerifyCallerIsAdmin @ 0x1C00410FC (UsbhVerifyCallerIsAdmin.c)
 *     UsbhException @ 0x1C004A608 (UsbhException.c)
 *     UsbhUpdateUxdSettings @ 0x1C005B7C4 (UsbhUpdateUxdSettings.c)
 */

__int64 __fastcall UsbhIoctlCyclePort(__int64 a1, PIRP Irp)
{
  int v4; // r14d
  _IRP *MasterIrp; // r15
  _DWORD *v6; // rax
  _QWORD *v7; // r12
  int v8; // ebx
  __int64 v9; // rbp
  char IsAdmin; // al
  __int64 v11; // r8
  char v12; // bl
  int v13; // eax
  __int64 v14; // rdx
  __int64 v16; // [rsp+28h] [rbp-70h]
  int v17; // [rsp+48h] [rbp-50h]
  int v18; // [rsp+50h] [rbp-48h] BYREF
  int v19; // [rsp+54h] [rbp-44h] BYREF
  char v20; // [rsp+A8h] [rbp+10h] BYREF
  char v21; // [rsp+B8h] [rbp+20h] BYREF

  v21 = 0;
  v18 = 0;
  v20 = 0;
  v4 = 0;
  Log(a1, 32, 1768898097, (__int64)Irp, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0xFu,
      (__int64)&WPP_5e274af30a573d3e0e39e592c1d024f3_Traceguids);
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v19 = 7;
  Log(a1, 32, 1768898098, (__int64)Irp, (__int64)MasterIrp);
  v6 = FdoExt(a1);
  v7 = (_QWORD *)UsbhIncHubBusy(a1, (__int64)(v6 + 434), (__int64)Irp, 1430414185, 1);
  if ( v7 )
  {
    v8 = UsbhAcquireApiLock(a1, 0xF00D0002, &v21);
    if ( (v8 & 0xC0000000) != 0xC0000000 )
    {
      v8 = UsbhIoctlValidateParameters(a1, 4, 8);
      if ( (v8 & 0xC0000000) != 0xC0000000 )
      {
        v9 = UsbhLatchPdo(a1, MasterIrp->Type, (__int64)Irp, 0x496F3034u);
        if ( v9 )
        {
          IsAdmin = UsbhVerifyCallerIsAdmin();
          LOBYTE(v11) = 1;
          v12 = IsAdmin;
          UsbhUpdateUxdSettings(a1, v9, v11, &v20);
          if ( LODWORD(WPP_MAIN_CB.Dpc.ProcessorHistory) || v20 || v12 )
          {
            v13 = UsbhCycleDevicePort(a1, v9, &v18);
            v4 = v18;
            v8 = v13;
          }
          else
          {
            v8 = -1073741637;
          }
          UsbhUnlatchPdo(a1, v9, (__int64)Irp, 0x496F3034u);
        }
        else
        {
          Log(a1, 32, 1733845872, *(unsigned int *)&MasterIrp->Type, (__int64)MasterIrp);
          v8 = -1073741667;
          v4 = -1073713152;
        }
        Irp->IoStatus.Information = 8LL;
        *(_DWORD *)(&MasterIrp->Size + 1) = v4;
      }
    }
  }
  else
  {
    v8 = -1073741670;
  }
  Log(a1, 32, 1768897586, (__int64)Irp, v8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v16) = v8;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x10u,
      (__int64)&WPP_5e274af30a573d3e0e39e592c1d024f3_Traceguids,
      v16);
  }
  if ( (v8 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v8) )
  {
    LOBYTE(v17) = 0;
    UsbhException(a1, 0, 91, (int)&v19, 4, v8, 0, usbfile_ioctl_c, 384, v17);
  }
  if ( v21 )
    UsbhReleaseApiLock(a1, 4027383810LL);
  UsbhIoctlTraceOutput(a1, Irp);
  FdoExt(a1);
  UsbhDecHubBusy(a1, v14, v7);
  Irp->IoStatus.Status = v8;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v8;
}
