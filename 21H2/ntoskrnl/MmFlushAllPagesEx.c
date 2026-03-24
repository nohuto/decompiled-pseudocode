/*
 * XREFs of MmFlushAllPagesEx @ 0x140384694
 * Callers:
 *     PopTransitionToSleep @ 0x1409950D0 (PopTransitionToSleep.c)
 * Callees:
 *     PsGetNextPartition @ 0x1402ABF88 (PsGetNextPartition.c)
 *     MiFlushAllPages @ 0x1403846E4 (MiFlushAllPages.c)
 */

_QWORD *__fastcall MmFlushAllPagesEx(char a1, unsigned int a2)
{
  void *i; // rcx
  _QWORD *result; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rbx

  for ( i = 0LL; ; i = v7 )
  {
    result = PsGetNextPartition(i);
    v7 = result;
    if ( !result )
      break;
    LOBYTE(v6) = a1;
    MiFlushAllPages(*result, v6, a2);
  }
  return result;
}
