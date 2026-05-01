/*
 * XREFs of sub_180082F84 @ 0x180082F84
 * Callers:
 *     sub_180082A64 @ 0x180082A64 (sub_180082A64.c)
 *     sub_180082DB4 @ 0x180082DB4 (sub_180082DB4.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180082F84(UUID *a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rcx
  unsigned int v4; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+38h] [rbp-40h] BYREF
  unsigned int *v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+60h] [rbp-18h]
  int v8; // [rsp+64h] [rbp-14h]

  v1 = UuidCreate(a1);
  if ( v1 && (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 64LL) )
  {
    v8 = 0;
    v6 = &v4;
    v4 = v1;
    v7 = 4;
    sub_18002E278(v2, (unsigned __int8 *)dword_1800A2309, 0LL, 0LL, 3u, &v5);
  }
  return v1;
}
