/*
 * XREFs of sub_18007FA28 @ 0x18007FA28
 * Callers:
 *     sub_1800811D8 @ 0x1800811D8 (sub_1800811D8.c)
 * Callees:
 *     sub_180011DC4 @ 0x180011DC4 (sub_180011DC4.c)
 *     sub_180011EE0 @ 0x180011EE0 (sub_180011EE0.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180069BA4 @ 0x180069BA4 (sub_180069BA4.c)
 */

__int64 __fastcall sub_18007FA28(__int64 a1)
{
  unsigned __int8 v2; // dl
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // rdx
  int v6; // eax
  __int128 v7; // [rsp+20h] [rbp-1B8h] BYREF
  __int64 v8; // [rsp+30h] [rbp-1A8h]
  _BYTE v9[384]; // [rsp+40h] [rbp-198h] BYREF

  sub_180011EE0((__int64)v9);
  v3 = v2;
  result = sub_180011DC4(
             (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL) - 216,
             *(_QWORD *)(a1 + 8) + 252LL,
             (__int64)v9);
  if ( (int)result >= 0 )
  {
    v5 = *(_QWORD *)(a1 + 16);
    v8 = *(unsigned int *)&v9[4 * v3 + 152];
    v7 = 0LL;
    LODWORD(v7) = v3;
    v6 = sub_180069BA4(*(__int64 *)&qword_1800B41A8, v5, 1u, (__int64)&v7);
    if ( v6 >= 0 )
      return 0LL;
    else
      return v6 | 0xC0000000;
  }
  return result;
}
