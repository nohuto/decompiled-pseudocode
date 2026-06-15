/*
 * XREFs of sub_180141200 @ 0x180141200
 * Callers:
 *     sub_180142450 @ 0x180142450 (sub_180142450.c)
 * Callees:
 *     sub_180140EB4 @ 0x180140EB4 (sub_180140EB4.c)
 */

_QWORD *__fastcall sub_180141200(_QWORD **a1, __int64 a2)
{
  _QWORD *i; // rbx

  for ( i = *a1; ; i = (_QWORD *)*i )
  {
    if ( !i )
      return 0LL;
    if ( sub_180140EB4((__int64)(i + 2), a2) )
      break;
  }
  return i;
}
