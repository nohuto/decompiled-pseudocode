/*
 * XREFs of sub_180039CAC @ 0x180039CAC
 * Callers:
 *     sub_180039BE0 @ 0x180039BE0 (sub_180039BE0.c)
 *     sub_1800659C8 @ 0x1800659C8 (sub_1800659C8.c)
 * Callees:
 *     sub_180038718 @ 0x180038718 (sub_180038718.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

int __fastcall sub_180039CAC(__int64 a1)
{
  int result; // eax
  __int64 v3; // [rsp+20h] [rbp-40h] BYREF
  __int64 v4; // [rsp+28h] [rbp-38h]
  __int64 v5; // [rsp+30h] [rbp-30h]
  __int64 v6; // [rsp+38h] [rbp-28h]
  __int64 v7; // [rsp+40h] [rbp-20h]
  __int64 v8; // [rsp+48h] [rbp-18h]

  if ( *(_BYTE *)(a1 + 56) )
  {
    v3 = 0x418A073AA3BC1C75LL;
    v4 = 0x418A073AA3BC2475LL;
    v5 = 0x418A073AA3BC2C75LL;
    result = sub_180038718((unsigned __int64)&v3, 3LL, (unsigned __int16 *)a1);
  }
  if ( *(_BYTE *)(a1 + 120) )
  {
    v3 = 0x418A073AA3BC3475LL;
    v4 = 0x418A073AA3BC3C75LL;
    v5 = 0x418A073AA3BC4475LL;
    result = sub_180038718((unsigned __int64)&v3, 3LL, (unsigned __int16 *)(a1 + 64));
  }
  if ( *(_BYTE *)(a1 + 184) )
  {
    v3 = 0x418A073AA3BC4C75LL;
    v4 = 0x418A073AA3BC5475LL;
    v5 = 0x418A073AA3BC5C75LL;
    v6 = 0x418A073AA3BC6475LL;
    v7 = 0x418A073AA3BC6C75LL;
    v8 = 0x418A073AA3BC7475LL;
    return sub_180038718((unsigned __int64)&v3, 6LL, (unsigned __int16 *)(a1 + 128));
  }
  return result;
}
