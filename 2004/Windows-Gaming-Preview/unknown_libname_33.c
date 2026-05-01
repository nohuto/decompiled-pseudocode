/*
 * XREFs of unknown_libname_33 @ 0x1800019E0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 *     _o___std_exception_destroy @ 0x1800452BE (_o___std_exception_destroy.c)
 */

// Microsoft VisualC v14 64bit runtime
_QWORD *__fastcall unknown_libname_33(_QWORD *a1, char a2)
{
  *a1 = &std::exception::`vftable';
  o___std_exception_destroy(a1 + 1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 24LL);
  return a1;
}
