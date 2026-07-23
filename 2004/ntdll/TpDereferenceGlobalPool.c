/*
 * XREFs of TpDereferenceGlobalPool @ 0x18006FE28
 * Callers:
 *     RtlpTpWorkCallback @ 0x18006FA60 (RtlpTpWorkCallback.c)
 *     RtlpTpIoAlloc @ 0x180112D9C (RtlpTpIoAlloc.c)
 *     RtlpTpIoDllLoaded @ 0x1801130AC (RtlpTpIoDllLoaded.c)
 * Callees:
 *     TppPoolpDereferenceGlobalPool @ 0x180013E60 (TppPoolpDereferenceGlobalPool.c)
 */

void __fastcall TpDereferenceGlobalPool(PVOID a1, __int64 a2, __int64 a3)
{
  _PEB_LDR_DATA *Ldr; // rcx

  if ( a1 != TppPoolpGlobalPool || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    Ldr = NtCurrentPeb()->Ldr;
    if ( !Ldr->ShutdownInProgress )
      TppRaiseInvalidParameter(Ldr, a2, a3);
  }
  else
  {
    TppPoolpDereferenceGlobalPool((const void **)&TppPoolpGlobalPool, &TppPoolpGlobalPoolLock);
  }
}
