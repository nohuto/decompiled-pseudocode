/*
 * XREFs of sub_180005028 @ 0x180005028
 * Callers:
 *     unknown_libname_4 @ 0x18003B0CB (unknown_libname_4.c)
 * Callees:
 *     sub_180003B8C @ 0x180003B8C (sub_180003B8C.c)
 */

BOOL __fastcall sub_180005028(void **a1)
{
  void *v1; // rcx
  BOOL result; // eax

  v1 = *a1;
  if ( v1 )
    return sub_180003B8C(v1);
  return result;
}
