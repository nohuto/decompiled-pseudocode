/*
 * XREFs of MmEmptyAllWorkingSets @ 0x14053CA44
 * Callers:
 *     EtwpSetMark @ 0x1409375AC (EtwpSetMark.c)
 *     PopTransitionToSleep @ 0x1409960D0 (PopTransitionToSleep.c)
 * Callees:
 *     PsGetNextPartition @ 0x140250E68 (PsGetNextPartition.c)
 *     MiEmptyAllWorkingSets @ 0x14053B438 (MiEmptyAllWorkingSets.c)
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
