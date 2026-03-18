/*
 * XREFs of MmTrimFilePagesFromWorkingSets @ 0x140536E8C
 * Callers:
 *     PopTransitionToSleep @ 0x14098C540 (PopTransitionToSleep.c)
 * Callees:
 *     PsGetNextPartition @ 0x140202C94 (PsGetNextPartition.c)
 *     MiQueueWorkingSetRequest @ 0x1403A2744 (MiQueueWorkingSetRequest.c)
 */

void MmTrimFilePagesFromWorkingSets()
{
  __int64 *i; // rcx
  __int64 *NextPartition; // rax
  __int64 *v2; // rbx

  if ( byte_140C4EE1C )
  {
    for ( i = 0LL; ; i = v2 )
    {
      NextPartition = (__int64 *)PsGetNextPartition(i);
      v2 = NextPartition;
      if ( !NextPartition )
        break;
      MiQueueWorkingSetRequest(*NextPartition, 256);
    }
  }
}
