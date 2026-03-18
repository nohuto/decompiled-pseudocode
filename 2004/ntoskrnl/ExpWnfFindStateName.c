/*
 * XREFs of ExpWnfFindStateName @ 0x140623670
 * Callers:
 *     ExpWnfCreateNameInstance @ 0x140621678 (ExpWnfCreateNameInstance.c)
 *     ExpWnfLookupNameInstance @ 0x1406235A4 (ExpWnfLookupNameInstance.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ExpWnfFindStateName(__int64 a1, unsigned __int64 a2)
{
  _QWORD *i; // rax

  for ( i = *(_QWORD **)(a1 + 56); ; i = (_QWORD *)i[1] )
  {
    while ( 1 )
    {
      if ( !i )
        return 0LL;
      if ( a2 >= i[3] )
        break;
      i = (_QWORD *)*i;
    }
    if ( a2 <= i[3] )
      break;
  }
  return i - 2;
}
