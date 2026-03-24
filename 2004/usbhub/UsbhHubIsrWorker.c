/*
 * XREFs of UsbhHubIsrWorker @ 0x1C001B9C0
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     UsbhHubProcessIsr @ 0x1C000F090 (UsbhHubProcessIsr.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     UsbhDecrementHubIsrWorkerReference @ 0x1C001BAA4 (UsbhDecrementHubIsrWorkerReference.c)
 */

__int64 __fastcall UsbhHubIsrWorker(PDEVICE_OBJECT DeviceObject, unsigned int a2, __int64 a3)
{
  __int64 v6; // r9
  KIRQL v7; // r10
  int v8; // r11d
  KIRQL v9; // r10
  __int64 v10; // rdx
  _QWORD *v11; // rax

  FdoExt((__int64)DeviceObject);
  KeAcquireSpinLockRaiseToDpc(&SpinLock);
  Log((__int64)DeviceObject, 4, 1230197367, (__int64)DeviceObject, a3);
  if ( *(_DWORD *)(a3 + 152) == 1 )
  {
    Log((__int64)DeviceObject, v8, 1230201969, v6, a3);
    v10 = *(_QWORD *)(a3 + 160);
    if ( *(_QWORD *)(v10 + 8) != a3 + 160 || (v11 = *(_QWORD **)(a3 + 168), *v11 != a3 + 160) )
      __fastfail(3u);
    *v11 = v10;
    *(_QWORD *)(v10 + 8) = v11;
    *(_DWORD *)(a3 + 152) = 0;
    KeReleaseSpinLock(&SpinLock, v9);
    UsbhHubProcessIsr(DeviceObject, a2, a3);
  }
  else
  {
    KeReleaseSpinLock(&SpinLock, v7);
  }
  return UsbhDecrementHubIsrWorkerReference(DeviceObject);
}
