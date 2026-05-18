/*
 * XREFs of sub_180063960 @ 0x180063960
 * Callers:
 *     <none>
 * Callees:
 *     sub_180062590 @ 0x180062590 (sub_180062590.c)
 *     sub_180063C48 @ 0x180063C48 (sub_180063C48.c)
 *     sub_18009ACD0 @ 0x18009ACD0 (sub_18009ACD0.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180063960(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  unsigned int v7; // [rsp+20h] [rbp-18h] BYREF

  v7 = a2;
  sub_180063C48(a1 + 120, &v7);
  v4 = *(_QWORD *)(a1 + 136);
  if ( v4 )
    sub_18009ACD0(v4, a2);
  v5 = *(_QWORD *)(a1 + 152);
  if ( v5 )
    sub_18009ACD0(v5, a2);
  return sub_180062590(a1, a2);
}
