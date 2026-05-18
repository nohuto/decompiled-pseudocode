/*
 * XREFs of sub_180120530 @ 0x180120530
 * Callers:
 *     <none>
 * Callees:
 *     sub_18011E370 @ 0x18011E370 (sub_18011E370.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

char __fastcall sub_180120530(__int64 a1, _QWORD *a2, char a3)
{
  int v4; // eax
  char v5; // dl
  _BYTE v7[8]; // [rsp+20h] [rbp-18h] BYREF

  v4 = sub_18011E370(a1, a2, v7);
  v5 = a3;
  if ( !v4 )
    return v7[0];
  return v5;
}
