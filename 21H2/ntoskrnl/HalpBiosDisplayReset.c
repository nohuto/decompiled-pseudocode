/*
 * XREFs of HalpBiosDisplayReset @ 0x1404B6F60
 * Callers:
 *     <none>
 * Callees:
 *     x86BiosCall @ 0x1403964E0 (x86BiosCall.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

bool HalpBiosDisplayReset()
{
  return x86BiosCall();
}
