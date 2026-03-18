/*
 * XREFs of ExpTimeZoneWork @ 0x140948680
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     PsGetServerSiloGlobals @ 0x14026D714 (PsGetServerSiloGlobals.c)
 *     PsDetachSiloFromCurrentThread @ 0x140272080 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402720A0 (PsAttachSiloToCurrentThread.c)
 *     PsIsHostSilo @ 0x140291F70 (PsIsHostSilo.c)
 *     ZwSetSystemTime @ 0x1403F6B40 (ZwSetSystemTime.c)
 */

char __fastcall ExpTimeZoneWork(struct _LIST_ENTRY *Object)
{
  struct _LIST_ENTRY *v2; // rsi
  __int64 v3; // rdi
  char result; // al

  v2 = PsAttachSiloToCurrentThread(Object);
  v3 = *((_QWORD *)PsGetServerSiloGlobals((__int64)Object) + 132);
  do
    ZwSetSystemTime(0LL, 0LL);
  while ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 928), 0xFFFFFFFF) != 1 );
  PsDetachSiloFromCurrentThread(v2);
  result = PsIsHostSilo((__int64)Object);
  if ( !result )
    return ObfDereferenceObjectWithTag(Object, 0x53707845u);
  return result;
}
