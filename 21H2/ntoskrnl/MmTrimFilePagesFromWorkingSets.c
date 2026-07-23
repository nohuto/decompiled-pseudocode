/*
 * XREFs of MmTrimFilePagesFromWorkingSets @ 0x14053CBEC
 * Callers:
 *     PopTransitionToSleep @ 0x1409960D0 (PopTransitionToSleep.c)
 * Callees:
 *     PsGetNextPartition @ 0x140250E68 (PsGetNextPartition.c)
 *     MiQueueWorkingSetRequest @ 0x1403A5CA4 (MiQueueWorkingSetRequest.c)
 */

void MmTrimFilePagesFromWorkingSets()
{
  __int64 *i; // rcx
  __int64 *NextPartition; // rax
  __int64 *v2; // rbx

  if ( byte_140C4EF1C )
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
