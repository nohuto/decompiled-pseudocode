/*
 * XREFs of MmEmptyAllWorkingSets @ 0x14053AD04
 * Callers:
 *     EtwpSetMark @ 0x140939C0C (EtwpSetMark.c)
 *     PopTransitionToSleep @ 0x140998990 (PopTransitionToSleep.c)
 * Callees:
 *     PsGetNextPartition @ 0x14033B800 (PsGetNextPartition.c)
 *     MiEmptyAllWorkingSets @ 0x1405396F8 (MiEmptyAllWorkingSets.c)
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
