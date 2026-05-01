/*
 * XREFs of sub_18000F0F4 @ 0x18000F0F4
 * Callers:
 *     sub_18000E3DC @ 0x18000E3DC (sub_18000E3DC.c)
 *     sub_180037748 @ 0x180037748 (sub_180037748.c)
 *     sub_18007AF20 @ 0x18007AF20 (sub_18007AF20.c)
 * Callees:
 *     sub_18000ECB0 @ 0x18000ECB0 (sub_18000ECB0.c)
 *     sub_180010220 @ 0x180010220 (sub_180010220.c)
 *     sub_1800114C0 @ 0x1800114C0 (sub_1800114C0.c)
 *     sub_1800252D0 @ 0x1800252D0 (sub_1800252D0.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memset @ 0x18004683A (memset.c)
 */

__int64 __fastcall sub_18000F0F4(__int64 a1, __int64 a2)
{
  int v4; // ebx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdi
  _DWORD v10[52]; // [rsp+30h] [rbp-178h] BYREF
  _BYTE v11[144]; // [rsp+100h] [rbp-A8h] BYREF

  memset(v11, 0, 0x82uLL);
  sub_180010220(a2, v11);
  v4 = *(_DWORD *)(a2 + 532);
  memset(v10, 0, 0xCCuLL);
  sub_1800114C0(v10, 65LL, v5, v11);
  RtlCopySid(0x44u, &v10[33], (PSID)(a2 + 464));
  v10[50] = v4;
  v6 = sub_1800252D0(a1, v10);
  v7 = 0LL;
  v8 = v6;
  if ( v6 )
  {
    v7 = sub_18000ECB0(v6 + 40, a2, (__int64 (__fastcall *)(__int64, __int64))sub_180036D30);
    sub_1800274E0(v8);
  }
  return v7;
}
