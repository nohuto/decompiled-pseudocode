/*
 * XREFs of PnpInitializeDeviceActions @ 0x140A54A7C
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A53280 (IopInitializePlugPlayServices.c)
 * Callees:
 *     <none>
 */

__int64 PnpInitializeDeviceActions()
{
  __int64 result; // rax

  _InterlockedExchange64((volatile __int64 *)PnpDeviceActionThread, 0LL);
  PnpEnumerationInProgress = 0;
  PnpEnumerationLock.Header.WaitListHead.Blink = &PnpEnumerationLock.Header.WaitListHead;
  PnpEnumerationLock.Header.WaitListHead.Flink = &PnpEnumerationLock.Header.WaitListHead;
  qword_140C435A8 = (__int64)&PnpEnumerationRequestList;
  PnpEnumerationRequestList = (__int64)&PnpEnumerationRequestList;
  result = 0LL;
  LOWORD(PnpEnumerationLock.Header.Lock) = 0;
  PnpEnumerationLock.Header.Size = 6;
  PnpEnumerationLock.Header.SignalState = 1;
  return result;
}
