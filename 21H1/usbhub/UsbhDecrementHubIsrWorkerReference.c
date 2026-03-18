/*
 * XREFs of UsbhDecrementHubIsrWorkerReference @ 0x1C001BAA4
 * Callers:
 *     UsbhHubIsrWorker @ 0x1C001B9C0 (UsbhHubIsrWorker.c)
 *     UsbhBusPnpStop_Action @ 0x1C0031080 (UsbhBusPnpStop_Action.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 */

void __fastcall UsbhDecrementHubIsrWorkerReference(__int64 a1)
{
  _DWORD *v2; // rax
  __int64 v3; // r11
  int v4; // r10d

  v2 = FdoExt(a1);
  _InterlockedExchangeAdd(v2 + 685, 0xFFFFFFFF);
  Log(a1, 4, 1212764717, a1, (int)v2[685]);
  if ( v4 == 1 )
    KeSetEvent((PRKEVENT)(v3 + 2744), 0, 0);
}
