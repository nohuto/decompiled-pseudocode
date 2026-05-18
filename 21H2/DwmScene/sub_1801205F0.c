/*
 * XREFs of sub_1801205F0 @ 0x1801205F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18011DC10 @ 0x18011DC10 (sub_18011DC10.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1801205F0(__int64 a1, _QWORD *a2, unsigned int a3)
{
  unsigned int v5; // [rsp+20h] [rbp-18h] BYREF

  if ( !(unsigned int)sub_18011DC10(a1, a2, &v5) )
    return v5;
  return a3;
}
