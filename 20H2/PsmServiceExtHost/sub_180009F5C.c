/*
 * XREFs of sub_180009F5C @ 0x180009F5C
 * Callers:
 *     sub_18000476C @ 0x18000476C (sub_18000476C.c)
 *     sub_180006AB4 @ 0x180006AB4 (sub_180006AB4.c)
 *     sub_180007F50 @ 0x180007F50 (sub_180007F50.c)
 * Callees:
 *     sub_180010220 @ 0x180010220 (sub_180010220.c)
 *     sub_180010360 @ 0x180010360 (sub_180010360.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180009F5C(__int64 a1, __int64 a2)
{
  int v4; // edi
  _BYTE v6[464]; // [rsp+20h] [rbp-1E8h] BYREF

  v4 = sub_180010220(a1, v6);
  if ( v4 >= 0 )
    sub_180010360(v6, a1 + 464, *(unsigned int *)(a1 + 532), a2);
  return (unsigned int)v4;
}
