/*
 * XREFs of HalpBiosDisplayReset @ 0x140503540
 * Callers:
 *     <none>
 * Callees:
 *     x86BiosCall @ 0x1403A2430 (x86BiosCall.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

bool HalpBiosDisplayReset()
{
  return x86BiosCall();
}
