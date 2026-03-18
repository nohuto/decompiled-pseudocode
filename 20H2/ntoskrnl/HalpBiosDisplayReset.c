/*
 * XREFs of HalpBiosDisplayReset @ 0x1404B5360
 * Callers:
 *     <none>
 * Callees:
 *     x86BiosCall @ 0x140395F20 (x86BiosCall.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 */

bool HalpBiosDisplayReset()
{
  return x86BiosCall();
}
