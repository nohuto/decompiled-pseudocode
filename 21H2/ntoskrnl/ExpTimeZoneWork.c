/*
 * XREFs of ExpTimeZoneWork @ 0x14094BDE0
 * Callers:
 *     <none>
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x14026D070 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14026D090 (PsAttachSiloToCurrentThread.c)
 *     PsGetServerSiloGlobals @ 0x140285C94 (PsGetServerSiloGlobals.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     PsIsHostSilo @ 0x14035F7D0 (PsIsHostSilo.c)
 *     ZwSetSystemTime @ 0x1403FDB40 (ZwSetSystemTime.c)
 */

char __fastcall ExpTimeZoneWork(struct _LIST_ENTRY *Object)
{
  struct _LIST_ENTRY *v2; // rsi
  __int64 v3; // rdi
  char result; // al

  v2 = PsAttachSiloToCurrentThread(Object);
  v3 = *((_QWORD *)PsGetServerSiloGlobals((__int64)Object) + 133);
  do
    ZwSetSystemTime(0LL, 0LL);
  while ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 928), 0xFFFFFFFF) != 1 );
  PsDetachSiloFromCurrentThread(v2);
  result = PsIsHostSilo((__int64)Object);
  if ( !result )
    return ObfDereferenceObjectWithTag(Object, 0x53707845u);
  return result;
}
