/*
 * XREFs of _TpReleaseCleanupGroup@4 @ 0x4B2ABE20
 * Callers:
 *     <none>
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _TppRaiseInvalidParameter@0 @ 0x4B3848BD (_TppRaiseInvalidParameter@0.c)
 */

_PEB_LDR_DATA *__stdcall TpReleaseCleanupGroup(volatile signed __int32 *a1)
{
  _PEB_LDR_DATA *result; // eax

  if ( !a1 )
LABEL_4:
    TppRaiseInvalidParameter();
  result = NtCurrentPeb()->Ldr;
  if ( !result->ShutdownInProgress )
  {
    if ( _InterlockedExchange(a1 + 1, 1) )
      goto LABEL_4;
    result = (_PEB_LDR_DATA *)_InterlockedExchangeAdd(a1, 0xFFFFFFFF);
    if ( !result )
      return (_PEB_LDR_DATA *)RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag, a1);
  }
  return result;
}
