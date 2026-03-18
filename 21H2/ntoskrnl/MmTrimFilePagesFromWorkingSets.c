/*
 * XREFs of MmTrimFilePagesFromWorkingSets @ 0x14059770C
 * Callers:
 *     PopTransitionToSleep @ 0x140A48630 (PopTransitionToSleep.c)
 * Callees:
 *     PsGetNextPartition @ 0x140236710 (PsGetNextPartition.c)
 *     MiQueueWorkingSetRequest @ 0x1403867F4 (MiQueueWorkingSetRequest.c)
 */

void MmTrimFilePagesFromWorkingSets()
{
  __int64 *i; // rcx
  __int64 *NextPartition; // rax
  __int64 *v2; // rbx

  if ( byte_140C53444 )
  {
    for ( i = 0LL; ; i = v2 )
    {
      NextPartition = (__int64 *)PsGetNextPartition(i);
      v2 = NextPartition;
      if ( !NextPartition )
        break;
      MiQueueWorkingSetRequest(*NextPartition, 128);
    }
  }
}
