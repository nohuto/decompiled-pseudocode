/*
 * XREFs of sub_1C000D044 @ 0x1C000D044
 * Callers:
 *     DriverEntry @ 0x1C000D010 (DriverEntry.c)
 * Callees:
 *     <none>
 */

uintptr_t sub_1C000D044()
{
  uintptr_t result; // rax

  if ( !_security_cookie || _security_cookie == 0x2B992DDFA232LL )
    __fastfail(6u);
  result = ~_security_cookie;
  qword_1C0007018 = ~_security_cookie;
  return result;
}
