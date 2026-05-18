/*
 * XREFs of sub_1800EF770 @ 0x1800EF770
 * Callers:
 *     sub_18008C920 @ 0x18008C920 (sub_18008C920.c)
 *     sub_180095690 @ 0x180095690 (sub_180095690.c)
 *     sub_1800A441C @ 0x1800A441C (sub_1800A441C.c)
 * Callees:
 *     sub_180062AD4 @ 0x180062AD4 (sub_180062AD4.c)
 *     sub_180063C48 @ 0x180063C48 (sub_180063C48.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800EF770(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  unsigned int v6; // [rsp+20h] [rbp-18h] BYREF

  v4 = *(_QWORD *)(a1 + 128);
  if ( v4 )
  {
    v6 = a2;
    sub_180063C48((__int64 *)(v4 + 112), &v6);
  }
  v6 = a2;
  return sub_180062AD4((__int64 *)(a1 + 88), &v6);
}
