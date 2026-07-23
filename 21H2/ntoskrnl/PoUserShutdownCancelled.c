/*
 * XREFs of PoUserShutdownCancelled @ 0x14077A010
 * Callers:
 *     PopPowerInformationInternal @ 0x14066C534 (PopPowerInformationInternal.c)
 * Callees:
 *     PopQueueWorkItem @ 0x140251CA4 (PopQueueWorkItem.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14035BF80 (PsIsCurrentThreadInServerSilo.c)
 *     PopUserShutdownCancelled @ 0x14077A044 (PopUserShutdownCancelled.c)
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
