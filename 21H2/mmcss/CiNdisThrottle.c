/*
 * XREFs of CiNdisThrottle @ 0x1C000A400
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0002FD0 (__security_check_cookie.c)
 *     WPP_SF_d @ 0x1C0004644 (WPP_SF_d.c)
 */

void __fastcall CiNdisThrottle(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  NTSTATUS v2; // ebx
  bool v3; // di
  int DpcData; // ecx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  _QWORD InputBuffer[2]; // [rsp+60h] [rbp-28h] BYREF

  InputBuffer[0] = 1048577LL;
  InputBuffer[1] = -1LL;
  IoStatusBlock = 0LL;
  v2 = 0;
  ExAcquirePushLockExclusiveEx(&WPP_MAIN_CB.Queue, 0LL);
  WPP_MAIN_CB.Queue.ListEntry.Blink = (struct _LIST_ENTRY *)KeGetCurrentThread();
  v3 = LODWORD(WPP_MAIN_CB.DeviceExtension) != 0;
  if ( (LODWORD(WPP_MAIN_CB.DeviceExtension) != 0) != CiNdisThrottledDown )
  {
    DpcData = -1;
    if ( LODWORD(WPP_MAIN_CB.DeviceExtension) )
      DpcData = (int)WPP_MAIN_CB.Dpc.DpcData;
    HIDWORD(InputBuffer[0]) = DpcData;
    v2 = ZwDeviceIoControlFile(CiNdisDeviceHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x170040u, InputBuffer, 0x10u, 0LL, 0);
    if ( v2 >= 0 )
      CiNdisThrottledDown = v3;
  }
  CiNdisThrottleInProgress = 0;
  WPP_MAIN_CB.Queue.ListEntry.Blink = 0LL;
  ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.Queue, 0LL);
  ExUnblockOnAddressPushLockEx(&CiNdisThrottleInProgressPushLock, 0LL);
  if ( v2 < 0 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    WPP_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0xDu,
      (__int64)&WPP_d82c60fe09533be4a3a87c1a21a9ae39_Traceguids,
      v2);
}
