/*
 * XREFs of PoUserShutdownCancelled @ 0x1407654B0
 * Callers:
 *     PopPowerInformationInternal @ 0x14070C7D4 (PopPowerInformationInternal.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x14025ED10 (PsIsCurrentThreadInServerSilo.c)
 *     PopQueueWorkItem @ 0x140322ED4 (PopQueueWorkItem.c)
 *     PopUserShutdownCancelled @ 0x1407654E4 (PopUserShutdownCancelled.c)
 */

char PoUserShutdownCancelled()
{
  char result; // al
  __int64 v1; // rcx

  result = PsIsCurrentThreadInServerSilo();
  if ( !result )
  {
    PopQueueWorkItem((__int64)&PopClearUserShutdownMarkerWorkItem, DelayedWorkQueue);
    LOBYTE(v1) = 1;
    return PopUserShutdownCancelled(v1);
  }
  return result;
}
