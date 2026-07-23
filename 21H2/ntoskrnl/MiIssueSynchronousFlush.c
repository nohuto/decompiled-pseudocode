/*
 * XREFs of MiIssueSynchronousFlush @ 0x14022D920
 * Callers:
 *     MiFlushSectionInternal @ 0x1402BE6B0 (MiFlushSectionInternal.c)
 * Callees:
 *     KeResetEvent @ 0x140269BE0 (KeResetEvent.c)
 *     IoSynchronousPageWriteEx @ 0x140326B5C (IoSynchronousPageWriteEx.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall MiIssueSynchronousFlush(int a1, int a2, __int64 a3, char a4, __int64 a5, NTSTATUS *a6)
{
  NTSTATUS *v9; // r14
  NTSTATUS result; // eax
  struct _KEVENT Event; // [rsp+40h] [rbp-20h] BYREF
  __int64 v12; // [rsp+90h] [rbp+30h] BYREF

  v12 = a3;
  Event.Header.SignalState = 0;
  Event.Header.WaitListHead.Blink = &Event.Header.WaitListHead;
  Event.Header.LockNV = 393216;
  Event.Header.WaitListHead.Flink = &Event.Header.WaitListHead;
  KeResetEvent(&Event);
  v9 = a6;
  result = IoSynchronousPageWriteEx(a1, a2, (unsigned int)&v12, (unsigned int)&Event, a4, a5, (__int64)a6);
  if ( result >= 0 )
    return KeWaitForSingleObject(&Event, WrPageOut, 0, 0, 0LL);
  *v9 = result;
  return result;
}
