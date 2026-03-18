/*
 * XREFs of MmEmptyAllWorkingSets @ 0x140536CE4
 * Callers:
 *     EtwpSetMark @ 0x140932B3C (EtwpSetMark.c)
 *     PopTransitionToSleep @ 0x14098C540 (PopTransitionToSleep.c)
 * Callees:
 *     PsGetNextPartition @ 0x140202C94 (PsGetNextPartition.c)
 *     MiEmptyAllWorkingSets @ 0x1405356D8 (MiEmptyAllWorkingSets.c)
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
