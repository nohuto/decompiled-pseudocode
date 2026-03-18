/*
 * XREFs of MmSetTrimWhileAgingState @ 0x140202EE0
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1405D0D98 (PfSetSuperfetchInformation.c)
 * Callees:
 *     PsGetNextPartition @ 0x140202C94 (PsGetNextPartition.c)
 *     MiSetTrimWhileAgingState @ 0x140202F1C (MiSetTrimWhileAgingState.c)
 */

_QWORD *__fastcall MmSetTrimWhileAgingState(unsigned int a1)
{
  void *i; // rcx
  _QWORD *result; // rax
  _QWORD *v4; // rdi

  for ( i = 0LL; ; i = v4 )
  {
    result = PsGetNextPartition(i);
    v4 = result;
    if ( !result )
      break;
    MiSetTrimWhileAgingState(*result, a1);
  }
  return result;
}
