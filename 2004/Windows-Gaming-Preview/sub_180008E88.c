/*
 * XREFs of sub_180008E88 @ 0x180008E88
 * Callers:
 *     sub_180045FA7 @ 0x180045FA7 (sub_180045FA7.c)
 *     unknown_libname_4 @ 0x180045FCB (unknown_libname_4.c)
 * Callees:
 *     sub_18000336C @ 0x18000336C (sub_18000336C.c)
 */

BOOL __fastcall sub_180008E88(void **a1)
{
  void *v1; // rcx
  BOOL result; // eax

  v1 = *a1;
  if ( v1 )
    return sub_18000336C(v1);
  return result;
}
