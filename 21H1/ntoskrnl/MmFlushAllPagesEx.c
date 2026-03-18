/*
 * XREFs of MmFlushAllPagesEx @ 0x14037F5E8
 * Callers:
 *     PopTransitionToSleep @ 0x14098C540 (PopTransitionToSleep.c)
 * Callees:
 *     PsGetNextPartition @ 0x140202C94 (PsGetNextPartition.c)
 *     MiFlushAllPages @ 0x14037F554 (MiFlushAllPages.c)
 */

__int64 *__fastcall MmFlushAllPagesEx(char a1)
{
  __int64 *i; // rcx
  __int64 *result; // rax
  __int64 *v4; // rbx

  for ( i = 0LL; ; i = v4 )
  {
    result = (__int64 *)PsGetNextPartition(i);
    v4 = result;
    if ( !result )
      break;
    MiFlushAllPages(*result, a1);
  }
  return result;
}
