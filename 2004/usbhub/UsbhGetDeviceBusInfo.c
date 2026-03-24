/*
 * XREFs of UsbhGetDeviceBusInfo @ 0x1C002B680
 * Callers:
 *     UsbhFdoReturnDeviceBusInfo @ 0x1C0030934 (UsbhFdoReturnDeviceBusInfo.c)
 *     UsbhAcquireBusInfo @ 0x1C0048600 (UsbhAcquireBusInfo.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001D340 (memset.c)
 *     Usbh_HubGetDeviceBusContext @ 0x1C002DE60 (Usbh_HubGetDeviceBusContext.c)
 *     Usbh_UsbdInterfaceDereference @ 0x1C002DFF8 (Usbh_UsbdInterfaceDereference.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E0B4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E188 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C002E474 (WPP_RECORDER_SF_ddd.c)
 *     WPP_RECORDER_SF_dq @ 0x1C002E55C (WPP_RECORDER_SF_dq.c)
 */

__int64 __fastcall UsbhGetDeviceBusInfo(__int64 a1, __int64 a2, _DWORD *a3, unsigned int a4)
{
  __int64 v4; // rbx
  _DWORD *v8; // r15
  __int64 v9; // r10
  void *v10; // r11
  _DWORD *v12; // rax
  int DeviceBusContext; // eax
  __int64 v14; // r14
  int v15; // edi
  int v16; // edx
  int v17; // r8d
  __int64 v18; // r10
  void *v19; // r11
  void (__fastcall *v20)(__int64); // rax
  int v21; // r9d
  unsigned int v22; // r8d
  _DWORD *PoolWithTag; // rax
  _DWORD *v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 (__fastcall *v27)(__int64, __int64, _DWORD *, size_t *, unsigned int *); // r10
  int v28; // edx
  int v29; // r8d
  int v30; // r9d
  int v31; // [rsp+20h] [rbp-30h]
  unsigned int v32; // [rsp+40h] [rbp-10h] BYREF
  __int64 v33; // [rsp+48h] [rbp-8h] BYREF
  size_t Size; // [rsp+98h] [rbp+48h] BYREF

  v4 = a4;
  LODWORD(Size) = 0;
  v32 = 0;
  v33 = 0LL;
  v8 = FdoExt(a1);
  Log(a1, 8, 1734632041, (unsigned int)v4, (__int64)a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      11,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
      v4);
  if ( (unsigned int)v4 < 0x10 )
  {
    Log(a1, 8, 1734632005, v4, (__int64)a3);
    if ( WPP_RECORDER_INITIALIZED != v10 )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 12, v9);
    }
    return 3221225507LL;
  }
  if ( a2 )
  {
    v12 = PdoExt(a2);
    DeviceBusContext = Usbh_HubGetDeviceBusContext(a1, *((_QWORD *)v12 + 145), &v33);
    v14 = v33;
    v15 = DeviceBusContext;
    Log(a1, 8, 1734631985, DeviceBusContext, v33);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dq(
        WPP_GLOBAL_Control->DeviceExtension,
        v16,
        v17,
        13,
        (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
        v15,
        v14);
  }
  else
  {
    Log(a1, 8, 1734631986, 0LL, 0LL);
    if ( WPP_RECORDER_INITIALIZED != v19 && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 14, v18);
    v14 = *((_QWORD *)v8 + 570);
    v20 = (void (__fastcall *)(__int64))*((_QWORD *)FdoExt(a1) + 571);
    if ( v20 )
      v20(v14);
    v15 = 0;
  }
  if ( v15 >= 0 )
  {
    Log(a1, 8, 1734631987, 0LL, 0LL);
    v22 = v21 + 16;
    LODWORD(Size) = v21 + 16;
    while ( 1 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v22, 0x42554855u);
      v24 = PoolWithTag;
      if ( !PoolWithTag )
        break;
      memset(PoolWithTag, 0, (unsigned int)Size);
      v25 = *(_QWORD *)(a1 + 64);
      v26 = 0LL;
      v32 = 0;
      v27 = *(__int64 (__fastcall **)(__int64, __int64, _DWORD *, size_t *, unsigned int *))(v25 + 4608);
      if ( v27 )
      {
        v15 = v27(v14, 1LL, v24, &Size, &v32);
        v26 = v32;
      }
      else
      {
        v15 = -1073741822;
      }
      Log(a1, 8, 1734631988, (__int64)v24, v26);
      if ( v15 != -1073741789 )
        goto LABEL_28;
      LODWORD(Size) = v32;
      Log(a1, 8, 1734631989, v32, -1073741789LL);
      ExFreePoolWithTag(v24, 0);
      v22 = Size;
    }
    v15 = -1073741670;
LABEL_28:
    Usbh_UsbdInterfaceDereference(a1, v14);
    if ( v15 < 0 )
      goto LABEL_33;
    if ( v24 )
    {
      a3[1] = *v24;
      a3[2] = v24[1];
      a3[3] = v24[2];
      Log(a1, 8, 1734629425, (unsigned int)*v24, (unsigned int)v24[1]);
      Log(a1, 8, 1734629426, (unsigned int)v24[2], 0LL);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_ddd(WPP_GLOBAL_Control->DeviceExtension, v28, v29, v30, v31, *v24, v24[1], v24[2]);
LABEL_33:
      if ( v24 )
        ExFreePoolWithTag(v24, 0);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      16,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
      v15);
  return (unsigned int)v15;
}
