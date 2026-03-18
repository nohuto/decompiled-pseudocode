/*
 * XREFs of MmEmptyAllWorkingSets @ 0x140597560
 * Callers:
 *     EtwpSetMark @ 0x1409E386C (EtwpSetMark.c)
 *     PopTransitionToSleep @ 0x140A48630 (PopTransitionToSleep.c)
 * Callees:
 *     PsGetNextPartition @ 0x140236710 (PsGetNextPartition.c)
 *     MiEmptyAllWorkingSets @ 0x14059673C (MiEmptyAllWorkingSets.c)
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
