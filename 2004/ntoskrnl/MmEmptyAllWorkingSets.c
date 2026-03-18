/*
 * XREFs of MmEmptyAllWorkingSets @ 0x140537334
 * Callers:
 *     EtwpSetMark @ 0x140933DDC (EtwpSetMark.c)
 *     PopTransitionToSleep @ 0x140992920 (PopTransitionToSleep.c)
 * Callees:
 *     PsGetNextPartition @ 0x140343D04 (PsGetNextPartition.c)
 *     MiEmptyAllWorkingSets @ 0x140535D28 (MiEmptyAllWorkingSets.c)
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
