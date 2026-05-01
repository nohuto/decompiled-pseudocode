/*
 * XREFs of sub_180062DD0 @ 0x180062DD0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memset @ 0x18004683A (memset.c)
 *     sub_180068544 @ 0x180068544 (sub_180068544.c)
 */

__int64 __fastcall sub_180062DD0(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  _QWORD v9[22]; // [rsp+20h] [rbp-C8h] BYREF

  memset(v9, 0, sizeof(v9));
  LODWORD(v9[21]) |= 1u;
  LODWORD(v9[0]) = a3;
  v9[1] = a4;
  return sub_180068544(a2, v9, a5);
}
