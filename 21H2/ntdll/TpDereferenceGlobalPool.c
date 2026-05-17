/*
 * XREFs of TpDereferenceGlobalPool @ 0x180070F58
 * Callers:
 *     RtlpTpWorkCallback @ 0x180070B90 (RtlpTpWorkCallback.c)
 *     RtlpTpIoAlloc @ 0x18011314C (RtlpTpIoAlloc.c)
 *     RtlpTpIoDllLoaded @ 0x18011345C (RtlpTpIoDllLoaded.c)
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
