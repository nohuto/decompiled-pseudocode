/*
 * XREFs of PoUserShutdownCancelled @ 0x140779E50
 * Callers:
 *     PopPowerInformationInternal @ 0x140678DF4 (PopPowerInformationInternal.c)
 * Callees:
 *     PopQueueWorkItem @ 0x1402D3A34 (PopQueueWorkItem.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140351230 (PsIsCurrentThreadInServerSilo.c)
 *     PopUserShutdownCancelled @ 0x140779E84 (PopUserShutdownCancelled.c)
 */

char __fastcall PoUserShutdownCancelled(__int64 a1, __int64 a2)
{
  char result; // al
  __int64 v3; // rcx

  result = PsIsCurrentThreadInServerSilo(a1, a2);
  if ( !result )
  {
    PopQueueWorkItem((__int64)&PopClearUserShutdownMarkerWorkItem, DelayedWorkQueue);
    LOBYTE(v3) = 1;
    return PopUserShutdownCancelled(v3);
  }
  return result;
}
