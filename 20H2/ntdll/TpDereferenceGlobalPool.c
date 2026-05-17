/*
 * XREFs of TpDereferenceGlobalPool @ 0x18006FF28
 * Callers:
 *     RtlpTpWorkCallback @ 0x18006FB60 (RtlpTpWorkCallback.c)
 *     RtlpTpIoAlloc @ 0x1801132AC (RtlpTpIoAlloc.c)
 *     RtlpTpIoDllLoaded @ 0x1801135BC (RtlpTpIoDllLoaded.c)
 * Callees:
 *     TppPoolpDereferenceGlobalPool @ 0x180013E60 (TppPoolpDereferenceGlobalPool.c)
 */

struct _PEB *__fastcall TpDereferenceGlobalPool(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _PEB *result; // rax
  _PEB_LDR_DATA *Ldr; // rcx

  if ( a1 == TppPoolpGlobalPool && !NtCurrentPeb()->Ldr->ShutdownInProgress )
    return (struct _PEB *)TppPoolpDereferenceGlobalPool((const void **)&TppPoolpGlobalPool, &TppPoolpGlobalPoolLock);
  result = NtCurrentPeb();
  Ldr = result->Ldr;
  if ( !Ldr->ShutdownInProgress )
    return (struct _PEB *)TppRaiseInvalidParameter(Ldr, a2, a3, a4);
  return result;
}
