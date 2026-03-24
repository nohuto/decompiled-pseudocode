/*
 * XREFs of IopInitializeActiveConnectList @ 0x140A740E4
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A3EB60 (IoInitSystemPreDrivers.c)
 * Callees:
 *     <none>
 */

LIST_ENTRY *IopInitializeActiveConnectList()
{
  LIST_ENTRY *result; // rax

  LOWORD(ActiveConnectListLock.Header.Lock) = 1;
  qword_140C45588 = (__int64)&ActiveConnectList;
  ActiveConnectList = (__int64)&ActiveConnectList;
  result = &ActiveConnectListLock.Header.WaitListHead;
  ActiveConnectListLock.Header.WaitListHead.Blink = &ActiveConnectListLock.Header.WaitListHead;
  ActiveConnectListLock.Header.WaitListHead.Flink = &ActiveConnectListLock.Header.WaitListHead;
  ActiveConnectListLock.Header.Size = 6;
  ActiveConnectListLock.Header.SignalState = 1;
  return result;
}
