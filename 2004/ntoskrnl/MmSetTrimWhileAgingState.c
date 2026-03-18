/*
 * XREFs of MmSetTrimWhileAgingState @ 0x140343CC8
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1406A9D30 (PfSetSuperfetchInformation.c)
 * Callees:
 *     PsGetNextPartition @ 0x140343D04 (PsGetNextPartition.c)
 *     MiSetTrimWhileAgingState @ 0x140343F50 (MiSetTrimWhileAgingState.c)
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
