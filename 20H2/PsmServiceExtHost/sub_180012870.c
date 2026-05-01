/*
 * XREFs of sub_180012870 @ 0x180012870
 * Callers:
 *     sub_1800181E0 @ 0x1800181E0 (sub_1800181E0.c)
 * Callees:
 *     sub_180011EE0 @ 0x180011EE0 (sub_180011EE0.c)
 *     sub_1800121A0 @ 0x1800121A0 (sub_1800121A0.c)
 *     sub_180013210 @ 0x180013210 (sub_180013210.c)
 *     sub_180027784 @ 0x180027784 (sub_180027784.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180012870(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // eax
  __int64 result; // rax
  __int64 v8; // [rsp+60h] [rbp-1A8h] BYREF
  int v9[28]; // [rsp+70h] [rbp-198h] BYREF
  __int64 v10; // [rsp+E0h] [rbp-128h]
  int v11; // [rsp+1E4h] [rbp-24h]

  sub_180011EE0((__int64)v9);
  sub_1800121A0(*(_QWORD *)(a1 + 8) + 112LL, (__int64)v9);
  v11 &= ~0x40000u;
  v9[26] = 1;
  v10 = a2;
  v4 = sub_180027784(1LL);
  v5 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 16) = v4;
  v6 = sub_180013210(
         qword_1800B41A8,
         (int)v9,
         a1,
         v4,
         *(_QWORD *)(v5 + 80) + 24LL,
         (PSID)(*(_QWORD *)(v5 + 80) + 488LL),
         *(_DWORD *)(*(_QWORD *)(v5 + 80) + 556LL),
         *(_DWORD *)(*(_QWORD *)(v5 + 80) + 560LL),
         *(_QWORD *)(*(_QWORD *)(v5 + 80) + 568LL),
         v4,
         0LL,
         (__int64)&v8);
  if ( v6 < 0 )
    result = v6 | 0xC0000000;
  else
    result = 0LL;
  if ( (int)result < 0 )
    *(_QWORD *)(a1 + 16) = -1LL;
  return result;
}
