/*
 * XREFs of sub_18000EFFC @ 0x18000EFFC
 * Callers:
 *     sub_18003B55A @ 0x18003B55A (sub_18003B55A.c)
 *     unknown_libname_23 @ 0x18003C8DD (unknown_libname_23.c)
 * Callees:
 *     sub_18000EF90 @ 0x18000EF90 (sub_18000EF90.c)
 */

__int64 __fastcall sub_18000EFFC(volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_18000EF90(v1);
  return result;
}
