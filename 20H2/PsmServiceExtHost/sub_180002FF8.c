/*
 * XREFs of sub_180002FF8 @ 0x180002FF8
 * Callers:
 *     sub_180002D50 @ 0x180002D50 (sub_180002D50.c)
 * Callees:
 *     sub_180011CA0 @ 0x180011CA0 (sub_180011CA0.c)
 *     sub_180011DC4 @ 0x180011DC4 (sub_180011DC4.c)
 *     sub_180011EE0 @ 0x180011EE0 (sub_180011EE0.c)
 *     sub_1800372D0 @ 0x1800372D0 (sub_1800372D0.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180002FF8(_DWORD *a1, __int64 a2, __int64 a3)
{
  char v4; // di
  __int64 v5; // r9
  __int64 result; // rax
  __int64 v7; // rcx
  _BYTE v8[384]; // [rsp+20h] [rbp-198h] BYREF

  v4 = a3;
  sub_180011EE0(v8, a2, a3, a2);
  result = sub_180011DC4(v5, a1 + 35, v8);
  if ( (int)result >= 0 )
  {
    sub_180011CA0(a1 + 70, v8);
    if ( (*(_BYTE *)(v7 + 40) & 0x10) != 0 && *(_QWORD *)(v7 + 80) < *(_QWORD *)(v7 + 64) )
    {
      return 3221225485LL;
    }
    else
    {
      sub_1800372D0(v8, a1 + 96);
      if ( (v8[42] & 7) == 4 )
        *a1 |= 0x80000u;
      if ( (v4 & 1) == 0 )
        *a1 &= ~0x80000u;
      return 0LL;
    }
  }
  return result;
}
