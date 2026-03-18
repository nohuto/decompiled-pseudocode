/*
 * XREFs of UsbhCompletePdoWakeIrp @ 0x1C001507C
 * Callers:
 *     UsbhCompletePdoWakeIrps @ 0x1C0001D70 (UsbhCompletePdoWakeIrps.c)
 *     UsbhFdoSetPowerDx_Action @ 0x1C000F880 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhSS_PdoWakeWorker @ 0x1C0016F40 (UsbhSS_PdoWakeWorker.c)
 *     UsbhPdoSetDx @ 0x1C0018BE0 (UsbhPdoSetDx.c)
 *     UsbhPdoRemoveCleanup @ 0x1C0057714 (UsbhPdoRemoveCleanup.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x1C0013F80 (UsbhEtwLogDeviceIrpEvent.c)
 *     UsbhDecPdoIoCount @ 0x1C0014E84 (UsbhDecPdoIoCount.c)
 *     WPP_RECORDER_SF_ddqqD @ 0x1C003C894 (WPP_RECORDER_SF_ddqqD.c)
 */

char __fastcall UsbhCompletePdoWakeIrp(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbp
  char v5; // si
  _DWORD *v6; // rdi
  PIRP v7; // rbx
  int v9; // edx
  int v10; // r8d
  int v11; // r9d

  v4 = a3;
  v5 = 0;
  v6 = PdoExt(a2);
  v7 = IoCsqRemoveNextIrp((PIO_CSQ)(v6 + 570), 0LL);
  if ( v7 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      FdoExt(a1);
      WPP_RECORDER_SF_ddqqD(WPP_GLOBAL_Control->DeviceExtension, v9, v10, v11);
    }
    Log(a1, 16, 2004304720, v4, (__int64)v7);
    if ( (int)v4 >= 0 && (FdoExt(a1)[640] & 0x4000000) != 0 )
      PoSetSystemWake(v7);
    UsbhEtwLogDeviceIrpEvent((__int64)v6, 0LL, &USBHUB_ETW_EVENT_DEVICE_WAIT_WAKE_COMPLETE, v4);
    v7->IoStatus.Status = v4;
    IofCompleteRequest(v7, 0);
    UsbhDecPdoIoCount(*((_QWORD *)v6 + 105), (ULONG_PTR)v7);
    v5 = 1;
  }
  v6[355] &= ~0x2000u;
  return v5;
}
