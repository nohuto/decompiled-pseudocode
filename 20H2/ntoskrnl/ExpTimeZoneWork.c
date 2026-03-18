/*
 * XREFs of ExpTimeZoneWork @ 0x14094E440
 * Callers:
 *     <none>
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x140204C10 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x140204C30 (PsAttachSiloToCurrentThread.c)
 *     PsIsHostSilo @ 0x14020DC00 (PsIsHostSilo.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     PsGetServerSiloGlobals @ 0x140245E34 (PsGetServerSiloGlobals.c)
 *     ZwSetSystemTime @ 0x1403FB710 (ZwSetSystemTime.c)
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
