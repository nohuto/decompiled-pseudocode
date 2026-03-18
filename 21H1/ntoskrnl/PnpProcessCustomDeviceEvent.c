/*
 * XREFs of PnpProcessCustomDeviceEvent @ 0x140683BA0
 * Callers:
 *     PnpDeviceEventWorker @ 0x14070A0D0 (PnpDeviceEventWorker.c)
 * Callees:
 *     PiUEventNotifyUserMode @ 0x14068421C (PiUEventNotifyUserMode.c)
 *     PnpNotifyTargetDeviceChange @ 0x140684748 (PnpNotifyTargetDeviceChange.c)
 *     PiDcHandleCustomDeviceEvent @ 0x140684F18 (PiDcHandleCustomDeviceEvent.c)
 */

__int64 __fastcall PnpProcessCustomDeviceEvent(_QWORD *a1)
{
  __int64 v1; // rbx
  void *v2; // rsi
  __int64 v3; // rdi

  v1 = *a1;
  v2 = *(void **)(*a1 + 152LL);
  v3 = *(_QWORD *)(*a1 + 160LL);
  PiDcHandleCustomDeviceEvent(*a1);
  PiUEventNotifyUserMode(v1);
  PnpNotifyTargetDeviceChange((void *)(v3 + 4), v2);
  return 0LL;
}
