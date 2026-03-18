/*
 * XREFs of HalpBiosDisplayReset @ 0x1404B1E40
 * Callers:
 *     <none>
 * Callees:
 *     x86BiosCall @ 0x140393A60 (x86BiosCall.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 */

bool HalpBiosDisplayReset()
{
  return x86BiosCall();
}
