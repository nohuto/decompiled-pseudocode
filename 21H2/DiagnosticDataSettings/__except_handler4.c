/*
 * XREFs of __except_handler4 @ 0x10004850
 * Callers:
 *     <none>
 * Callees:
 *     __except_handler4_common @ 0x10004BCC (__except_handler4_common.c)
 *     __filter_x86_sse2_floating_point_exception @ 0x10004C4D (__filter_x86_sse2_floating_point_exception.c)
 */

int __cdecl _except_handler4(_DWORD *a1, int a2, int a3, int a4)
{
  *a1 = _filter_x86_sse2_floating_point_exception(*a1);
  return _except_handler4_common(&__security_cookie, __security_check_cookie, a1, a2, a3, a4);
}
