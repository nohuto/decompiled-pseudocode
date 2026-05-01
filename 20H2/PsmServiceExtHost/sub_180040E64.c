/*
 * XREFs of sub_180040E64 @ 0x180040E64
 * Callers:
 *     sub_180040C14 @ 0x180040C14 (sub_180040C14.c)
 *     sub_1800635C4 @ 0x1800635C4 (sub_1800635C4.c)
 *     sub_18006BAD0 @ 0x18006BAD0 (sub_18006BAD0.c)
 *     sub_18006D504 @ 0x18006D504 (sub_18006D504.c)
 *     sub_18006D5A8 @ 0x18006D5A8 (sub_18006D5A8.c)
 *     sub_18006D660 @ 0x18006D660 (sub_18006D660.c)
 *     sub_18006D850 @ 0x18006D850 (sub_18006D850.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     sub_180040EF0 @ 0x180040EF0 (sub_180040EF0.c)
 *     sub_180041114 @ 0x180041114 (sub_180041114.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_18006BD88 @ 0x18006BD88 (sub_18006BD88.c)
 */

__int64 __fastcall sub_180040E64(__int64 a1)
{
  _QWORD *i; // rdi
  int v3; // eax
  __int64 result; // rax
  __int64 v5; // rcx
  int v6; // r9d
  int v7; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+38h] [rbp-40h] BYREF
  int *v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+60h] [rbp-18h]
  int v11; // [rsp+64h] [rbp-14h]

  if ( (*(_BYTE *)(a1 + 932) & 1) != 0
    && (int)sub_180041114() < 0
    && (unsigned int)dword_1800B31E0 > 4
    && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
  {
    v11 = 0;
    v9 = &v7;
    v7 = v6;
    v10 = 4;
    sub_18002E278(v5, (unsigned __int8 *)dword_18009C4BC, 0LL, 0LL, 3u, &v8);
  }
  for ( i = (_QWORD *)(a1 + 888); (_QWORD *)*i != i; sub_18006BD88(a1, *i - 40LL) )
    ;
  v3 = *(_DWORD *)(a1 + 932);
  if ( (v3 & 1) != 0 )
  {
    sub_180040EF0(a1);
    v3 = *(_DWORD *)(a1 + 932);
  }
  result = v3 & 0xFFFFFFFE;
  *(_DWORD *)(a1 + 932) = result;
  return result;
}
