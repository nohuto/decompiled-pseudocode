/*
 * XREFs of ExpWnfFindStateName @ 0x14060F480
 * Callers:
 *     ExpWnfCreateNameInstance @ 0x14060DA34 (ExpWnfCreateNameInstance.c)
 *     ExpWnfLookupNameInstance @ 0x14060F3B4 (ExpWnfLookupNameInstance.c)
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
