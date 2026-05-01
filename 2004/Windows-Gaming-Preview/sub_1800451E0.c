/*
 * XREFs of sub_1800451E0 @ 0x1800451E0
 * Callers:
 *     <none>
 * Callees:
 *     j__o_free @ 0x1800450E0 (j__o_free.c)
 *     _o___std_exception_destroy @ 0x1800452BE (_o___std_exception_destroy.c)
 */

_QWORD *__fastcall sub_1800451E0(_QWORD *a1, char a2)
{
  *a1 = &std::exception::`vftable';
  o___std_exception_destroy(a1 + 1);
  if ( (a2 & 1) != 0 )
    j__o_free((__int64)a1);
  return a1;
}
