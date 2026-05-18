/*
 * XREFs of sub_18011AC60 @ 0x18011AC60
 * Callers:
 *     <none>
 * Callees:
 *     sub_180118AA0 @ 0x180118AA0 (sub_180118AA0.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

char __fastcall sub_18011AC60(__int64 a1, _QWORD *a2, char a3)
{
  int v4; // eax
  char v5; // dl
  _BYTE v7[8]; // [rsp+20h] [rbp-18h] BYREF

  v4 = sub_180118AA0(a1, a2, v7);
  v5 = a3;
  if ( !v4 )
    return v7[0];
  return v5;
}
