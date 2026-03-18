/*
 * XREFs of MmSetTrimWhileAgingState @ 0x1402366D4
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1406AD6BC (PfSetSuperfetchInformation.c)
 * Callees:
 *     PsGetNextPartition @ 0x140236710 (PsGetNextPartition.c)
 *     MiSetTrimWhileAgingState @ 0x140236764 (MiSetTrimWhileAgingState.c)
 */

_QWORD *__fastcall MmSetTrimWhileAgingState(unsigned int a1)
{
  _QWORD *i; // rcx
  _QWORD *result; // rax
  _QWORD *v4; // rdi

  for ( i = 0LL; ; i = v4 )
  {
    result = (_QWORD *)PsGetNextPartition(i);
    v4 = result;
    if ( !result )
      break;
    MiSetTrimWhileAgingState(*result, a1);
  }
  return result;
}
