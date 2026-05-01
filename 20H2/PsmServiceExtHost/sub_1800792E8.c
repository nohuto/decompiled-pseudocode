/*
 * XREFs of sub_1800792E8 @ 0x1800792E8
 * Callers:
 *     sub_180080490 @ 0x180080490 (sub_180080490.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_180027784 @ 0x180027784 (sub_180027784.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

char sub_1800792E8()
{
  __int64 v0; // rax
  __int64 *v1; // r8
  int v2; // edx
  __int64 v3; // rcx
  __int64 v4; // r9
  __int64 v6; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]
  int v10; // [rsp+64h] [rbp-14h]

  v0 = sub_180027784(0);
  *v1 = v0;
  if ( (unsigned int)dword_1800B3218 > 4 )
  {
    LOBYTE(v0) = sub_180010470((__int64)&dword_1800B3218, 8LL);
    if ( (_BYTE)v0 )
    {
      v10 = 0;
      v8 = &v6;
      v6 = v4;
      v9 = v2;
      LOBYTE(v0) = sub_18002E278(v3, (unsigned __int8 *)dword_18009FE72, 0LL, 0LL, 3u, &v7);
    }
  }
  return v0;
}
