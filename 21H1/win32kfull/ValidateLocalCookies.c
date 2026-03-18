/*
 * XREFs of ValidateLocalCookies @ 0xEDFE0
 * Callers:
 *     __except_handler4 @ 0xEE020 (__except_handler4.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __cdecl ValidateLocalCookies(int a1)
{
  return *(_DWORD *)(a1 + 8);
}
