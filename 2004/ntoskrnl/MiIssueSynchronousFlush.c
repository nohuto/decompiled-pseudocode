/*
 * XREFs of MiIssueSynchronousFlush @ 0x14033C5B0
 * Callers:
 *     MiFlushSectionInternal @ 0x1402AC250 (MiFlushSectionInternal.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     IoSynchronousPageWriteEx @ 0x140227DC8 (IoSynchronousPageWriteEx.c)
 *     KeResetEvent @ 0x140297C10 (KeResetEvent.c)
 */

int __fastcall MiIssueSynchronousFlush(
        struct _FILE_OBJECT *a1,
        struct _MDL *a2,
        __int64 a3,
        char a4,
        __int64 a5,
        struct _IO_STATUS_BLOCK *a6)
{
  struct _IO_STATUS_BLOCK *v9; // r14
  int result; // eax
  struct _KEVENT Event; // [rsp+40h] [rbp-20h] BYREF
  __int64 v12; // [rsp+90h] [rbp+30h] BYREF

  v12 = a3;
  Event.Header.SignalState = 0;
  Event.Header.WaitListHead.Blink = &Event.Header.WaitListHead;
  Event.Header.LockNV = 393216;
  Event.Header.WaitListHead.Flink = &Event.Header.WaitListHead;
  KeResetEvent(&Event);
  v9 = a6;
  result = IoSynchronousPageWriteEx(a1, a2, &v12, &Event, a4, a5, a6);
  if ( result >= 0 )
    return KeWaitForSingleObject(&Event, WrPageOut, 0, 0, 0LL);
  v9->Status = result;
  return result;
}
