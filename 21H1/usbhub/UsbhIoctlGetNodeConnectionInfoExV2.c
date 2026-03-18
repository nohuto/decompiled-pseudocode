/*
 * XREFs of UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1C003FC88
 * Callers:
 *     UsbhFdoDeviceControl @ 0x1C002A170 (UsbhFdoDeviceControl.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     UsbhLatchPdo @ 0x1C0016B5C (UsbhLatchPdo.c)
 *     UsbhGetPortData @ 0x1C0016CA0 (UsbhGetPortData.c)
 *     UsbhUnlatchPdo @ 0x1C00171A0 (UsbhUnlatchPdo.c)
 *     Usb_Disconnected @ 0x1C001CEB4 (Usb_Disconnected.c)
 *     memset @ 0x1C001D340 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E0B4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E188 (WPP_RECORDER_SF_d.c)
 *     UsbhAcquireApiLock @ 0x1C003D9B0 (UsbhAcquireApiLock.c)
 *     UsbhIoctlTraceOutput @ 0x1C0040ACC (UsbhIoctlTraceOutput.c)
 *     UsbhIoctlValidateParameters @ 0x1C0040CF4 (UsbhIoctlValidateParameters.c)
 *     UsbhReleaseApiLock @ 0x1C0041094 (UsbhReleaseApiLock.c)
 *     UsbhException @ 0x1C004A608 (UsbhException.c)
 */

__int64 __fastcall UsbhIoctlGetNodeConnectionInfoExV2(__int64 a1, PIRP Irp, __int64 a3)
{
  _DWORD *v6; // rax
  _IRP *MasterIrp; // r14
  size_t v8; // r12
  _DWORD *v9; // r13
  int v10; // edi
  int Type; // r15d
  int MdlAddress; // ebx
  int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // rbx
  int v16; // r10d
  __int64 v18; // [rsp+28h] [rbp-60h]
  int v19; // [rsp+48h] [rbp-40h]
  char v20; // [rsp+98h] [rbp+10h] BYREF
  int v21; // [rsp+A0h] [rbp+18h] BYREF

  v20 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x1Eu,
      (__int64)&WPP_5e274af30a573d3e0e39e592c1d024f3_Traceguids);
  v21 = 279;
  v6 = FdoExt(a1);
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v8 = *(unsigned int *)(a3 + 8);
  v9 = v6;
  Log(a1, 32, 1768898147, (__int64)Irp, (__int64)MasterIrp);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x1Fu,
      (__int64)&WPP_5e274af30a573d3e0e39e592c1d024f3_Traceguids);
  v10 = UsbhAcquireApiLock(a1, 0xF00D0015, &v20);
  if ( (v10 & 0xC0000000) != 0xC0000000 )
  {
    v10 = UsbhIoctlValidateParameters(a1, 16, 16);
    if ( (v10 & 0xC0000000) != 0xC0000000 )
    {
      if ( *(_DWORD *)(&MasterIrp->Size + 1) >= 0x10u )
      {
        Type = (unsigned __int16)MasterIrp->Type;
        MdlAddress = (int)MasterIrp->MdlAddress;
        memset(MasterIrp, 0, v8);
        *(_DWORD *)&MasterIrp->Type = Type;
        if ( (MdlAddress & 4) != 0 && UsbhGetPortData(a1, Type) )
        {
          *(_DWORD *)(&MasterIrp->Size + 1) = 16;
          Irp->IoStatus.Information = 16LL;
          v13 = LODWORD(MasterIrp->MdlAddress) | 1;
          LODWORD(MasterIrp->MdlAddress) = v13;
          if ( (v9[640] & 0x8000) != 0 )
            LODWORD(MasterIrp->MdlAddress) = v13 | 2;
          v14 = UsbhLatchPdo(a1, Type, (__int64)Irp, 0x496F3063u);
          v15 = v14;
          if ( v14 )
          {
            if ( (PdoExt(v14)[355] & 0x80000) != 0 )
              HIDWORD(MasterIrp->MdlAddress) |= 2u;
            UsbhUnlatchPdo(a1, v15, (__int64)Irp, 0x496F3063u);
          }
        }
        else
        {
          v10 = -1073741811;
        }
      }
      else
      {
        v10 = -1073741811;
      }
    }
  }
  Log(a1, 32, 1768897635, (__int64)Irp, v10);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v18) = v10;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      v16 - 30,
      v16,
      (__int64)&WPP_5e274af30a573d3e0e39e592c1d024f3_Traceguids,
      v18);
  }
  if ( (v10 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v10) )
  {
    LOBYTE(v19) = 0;
    UsbhException(a1, 0, 91, (int)&v21, 4, v10, 0, usbfile_ioctl_c, 1062, v19);
  }
  if ( v20 )
    UsbhReleaseApiLock(a1, 4027383829LL);
  UsbhIoctlTraceOutput(a1, Irp);
  Irp->IoStatus.Status = v10;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v10;
}
