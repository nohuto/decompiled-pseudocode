/*
 * XREFs of MmEmptyAllWorkingSets @ 0x14053C804
 * Callers:
 *     EtwpSetMark @ 0x1409373DC (EtwpSetMark.c)
 *     PopTransitionToSleep @ 0x1409950D0 (PopTransitionToSleep.c)
 * Callees:
 *     PsGetNextPartition @ 0x1402ABF88 (PsGetNextPartition.c)
 *     MiEmptyAllWorkingSets @ 0x14053B1F8 (MiEmptyAllWorkingSets.c)
 */

__int64 *MmEmptyAllWorkingSets()
{
  __int64 *i; // rcx
  __int64 *result; // rax
  __int64 *v2; // rbx

  for ( i = 0LL; ; i = v2 )
  {
    result = (__int64 *)PsGetNextPartition(i);
    v2 = result;
    if ( !result )
      break;
    MiEmptyAllWorkingSets(*result);
  }
  return result;
}
