/*
 * XREFs of sub_180121EB0 @ 0x180121EB0
 * Callers:
 *     <none>
 * Callees:
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

_QWORD *__fastcall sub_180121EB0(_QWORD *a1, char a2)
{
  *a1 = &Spectre::Utils::Tweening::ICurve::`vftable';
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
