/*
 * XREFs of HalpBiosDisplayReset @ 0x1404B6D20
 * Callers:
 *     <none>
 * Callees:
 *     x86BiosCall @ 0x140396390 (x86BiosCall.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 */

bool HalpBiosDisplayReset()
{
  return x86BiosCall();
}
