/*
 * XREFs of sub_1800F9C14 @ 0x1800F9C14
 * Callers:
 *     sub_1800F98AD @ 0x1800F98AD (sub_1800F98AD.c)
 *     sub_1800F9968 @ 0x1800F9968 (sub_1800F9968.c)
 *     sub_1800F997B @ 0x1800F997B (sub_1800F997B.c)
 *     sub_1800F998E @ 0x1800F998E (sub_1800F998E.c)
 *     unknown_libname_312 @ 0x1800F9B2E (unknown_libname_312.c)
 * Callees:
 *     sub_180074180 @ 0x180074180 (sub_180074180.c)
 */

BOOL __fastcall sub_1800F9C14(void **a1)
{
  BOOL result; // eax

  if ( *a1 )
    return sub_180074180(a1);
  return result;
}
