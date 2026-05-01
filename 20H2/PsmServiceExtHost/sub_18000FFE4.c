/*
 * XREFs of sub_18000FFE4 @ 0x18000FFE4
 * Callers:
 *     sub_180018AF0 @ 0x180018AF0 (sub_180018AF0.c)
 *     sub_180035534 @ 0x180035534 (sub_180035534.c)
 * Callees:
 *     sub_1800100D0 @ 0x1800100D0 (sub_1800100D0.c)
 *     sub_1800176F0 @ 0x1800176F0 (sub_1800176F0.c)
 *     sub_180033D1C @ 0x180033D1C (sub_180033D1C.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memset @ 0x18004683A (memset.c)
 */

__int64 __fastcall sub_18000FFE4(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rcx
  unsigned int v6; // eax
  _QWORD v8[16]; // [rsp+30h] [rbp-E8h] BYREF
  _QWORD v9[10]; // [rsp+B0h] [rbp-68h] BYREF

  if ( (*(_BYTE *)(a2 + 1244) & 0x10) != 0 )
    return 0LL;
  v4 = *(_QWORD *)(a2 + 56);
  memset(v8, 0, sizeof(v8));
  sub_1800100D0(v4, v9);
  sub_1800176F0(a1, a1 + 56, (unsigned int)v9, v9[0], (__int64)v8);
  v5 = v9[7];
  v6 = 0;
  *(_WORD *)(v4 + 188) = 0;
  if ( (v5 > v8[13] && *(_DWORD *)(a1 + 100) || v5 > v8[9]) && (*(_BYTE *)(a1 + 104) & 4) == 0 )
    v6 = sub_180033D1C(a1, a2, 1LL);
  return *(_DWORD *)(a2 + 1468) & 0x27 | v6;
}
