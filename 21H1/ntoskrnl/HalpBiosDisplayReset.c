/*
 * XREFs of HalpBiosDisplayReset @ 0x1404B1760
 * Callers:
 *     <none>
 * Callees:
 *     x86BiosCall @ 0x140392E90 (x86BiosCall.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

bool HalpBiosDisplayReset()
{
  return x86BiosCall();
}
