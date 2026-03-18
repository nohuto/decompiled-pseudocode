/*
 * XREFs of UsbhReset1Complete @ 0x1C0018F50
 * Callers:
 *     <none>
 * Callees:
 *     UsbhAllocateTimeoutObject @ 0x1C000174C (UsbhAllocateTimeoutObject.c)
 *     UsbhResetPort @ 0x1C00018E8 (UsbhResetPort.c)
 *     Usbh_UsbdReadFrameCounter @ 0x1C0001BF8 (Usbh_UsbdReadFrameCounter.c)
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     UsbhReset2Complete @ 0x1C0010540 (UsbhReset2Complete.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C0012400 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhCancelResetTimeout @ 0x1C0013AE0 (UsbhCancelResetTimeout.c)
 *     UsbhWait @ 0x1C001853C (UsbhWait.c)
 *     UsbhCreateDevice @ 0x1C0019118 (UsbhCreateDevice.c)
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E188 (WPP_RECORDER_SF_d.c)
 *     UsbhClearTt @ 0x1C0036B2C (UsbhClearTt.c)
 *     UsbhSetEnumerationFailed @ 0x1C004E668 (UsbhSetEnumerationFailed.c)
 */

__int64 __fastcall UsbhReset1Complete(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // r14d
  KSPIN_LOCK *v7; // rbx
  KIRQL v8; // al
  int FrameCounter; // eax
  int v10; // ecx
  int v11; // eax
  int v13; // eax
  PVOID v14; // rbx
  int v15; // ebp
  int v16; // eax
  int v17; // [rsp+30h] [rbp-78h]
  int v18; // [rsp+38h] [rbp-70h]
  PVOID P; // [rsp+50h] [rbp-58h] BYREF
  int v20[2]; // [rsp+58h] [rbp-50h] BYREF
  __int16 v21; // [rsp+60h] [rbp-48h]
  __int16 v22; // [rsp+62h] [rbp-46h]

  v22 = 0;
  P = 0LL;
  v6 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      28,
      (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
      *(_WORD *)(a2 + 4));
  Log(a1, 1024, 1884434787, a2, 0LL);
  v7 = (KSPIN_LOCK *)(FdoExt(a1) + 766);
  v8 = KeAcquireSpinLockRaiseToDpc(v7);
  KeReleaseSpinLock(v7, v8);
  UsbhCancelResetTimeout(a1, a2, 0);
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RESET1_COMPLETE);
  FrameCounter = Usbh_UsbdReadFrameCounter(a1);
  v10 = *(_DWORD *)(a2 + 544);
  *(_DWORD *)(a2 + 852) = FrameCounter;
  v11 = FrameCounter - *(_DWORD *)(a2 + 848);
  v20[1] = v10;
  v20[0] = v11;
  v21 = *(_WORD *)(a2 + 4);
  UsbhWait(a1, v10 != 0 ? 100 : 32);
  if ( (int)UsbhCreateDevice(a1) < 0 )
    goto LABEL_13;
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_ENUM_CREATE_DEVICE_COMPLETE);
  if ( (*(_WORD *)(a2 + 420) & 0x400) != 0
    && !*(_DWORD *)(a2 + 544)
    && !dword_1C006B68C
    && (FdoExt(a1)[640] & 0x8000000) == 0 )
  {
    return UsbhReset2Complete(a1, a2, a3);
  }
  v13 = UsbhAllocateTimeoutObject(a1, a2, &P);
  v14 = P;
  v15 = v13;
  if ( v13 >= 0 )
  {
    v6 = 2;
LABEL_17:
    UsbhResetPort(a1, a2, (__int64)v14);
    return v6;
  }
  if ( !P )
  {
LABEL_13:
    v16 = UsbhAllocateTimeoutObject(a1, a2, &P);
    v14 = P;
    v15 = v16;
  }
  if ( *(_DWORD *)(a2 + 544) >= 3u )
  {
    if ( v14 )
      ExFreePoolWithTag(v14, 0);
  }
  else if ( v14 )
  {
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RETRY);
    UsbhWait(a1, 0x1F4u);
    ++*(_DWORD *)(a2 + 544);
    UsbhClearTt(a1);
    goto LABEL_17;
  }
  UsbhSetEnumerationFailed(a1, (int)v20, v15, v17, v18, 1509);
  return 0LL;
}
