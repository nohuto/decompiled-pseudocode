/*
 * XREFs of sub_180034F98 @ 0x180034F98
 * Callers:
 *     sub_180034F2C @ 0x180034F2C (sub_180034F2C.c)
 * Callees:
 *     sub_1800100D0 @ 0x1800100D0 (sub_1800100D0.c)
 *     sub_1800176F0 @ 0x1800176F0 (sub_1800176F0.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180034F98(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _OWORD *a5)
{
  __int64 result; // rax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  _OWORD v13[5]; // [rsp+30h] [rbp-78h] BYREF

  sub_1800100D0(a1, (__int64 *)v13);
  result = sub_1800176F0(a2, a3, (__int64)v13, *(unsigned __int64 *)&v13[0], a4);
  if ( a5 )
  {
    v9 = v13[1];
    *a5 = v13[0];
    v10 = v13[2];
    a5[1] = v9;
    v11 = v13[3];
    a5[2] = v10;
    v12 = v13[4];
    a5[3] = v11;
    a5[4] = v12;
  }
  return result;
}
