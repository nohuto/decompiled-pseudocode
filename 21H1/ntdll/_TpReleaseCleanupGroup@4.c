/*
 * XREFs of _TpReleaseCleanupGroup@4 @ 0x4B2ABE20
 * Callers:
 *     <none>
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _TppRaiseInvalidParameter@0 @ 0x4B3848BD (_TppRaiseInvalidParameter@0.c)
 */

void __cdecl TpReleaseCleanupGroup(PTP_CLEANUP_GROUP CleanupGroup)
{
  if ( !CleanupGroup )
LABEL_4:
    TppRaiseInvalidParameter();
  if ( !NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    if ( _InterlockedExchange((volatile __int32 *)CleanupGroup + 1, 1) )
      goto LABEL_4;
    if ( !_InterlockedExchangeAdd((volatile signed __int32 *)CleanupGroup, 0xFFFFFFFF) )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag, CleanupGroup);
  }
}
