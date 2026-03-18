/*
 * XREFs of MmTrimFilePagesFromWorkingSets @ 0x14053AEAC
 * Callers:
 *     PopTransitionToSleep @ 0x140998990 (PopTransitionToSleep.c)
 * Callees:
 *     PsGetNextPartition @ 0x14033B800 (PsGetNextPartition.c)
 *     MiQueueWorkingSetRequest @ 0x1403A5294 (MiQueueWorkingSetRequest.c)
 */

void MmTrimFilePagesFromWorkingSets()
{
  __int64 *i; // rcx
  __int64 *NextPartition; // rax
  __int64 *v2; // rbx

  if ( byte_140C4ED5C )
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
