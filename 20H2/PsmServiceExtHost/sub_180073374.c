/*
 * XREFs of sub_180073374 @ 0x180073374
 * Callers:
 *     sub_18001CC80 @ 0x18001CC80 (sub_18001CC80.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

char __fastcall sub_180073374(__int64 a1)
{
  char result; // al
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  result = NtSetEvent(*(HANDLE *)(a1 + 1240), 0LL);
  if ( (unsigned int)dword_1800B3218 > 4 )
  {
    result = sub_180010470((__int64)&dword_1800B3218, 64LL);
    if ( result )
    {
      v4 = *(_QWORD *)(a1 - 32);
      v9 = 0;
      v5 = v4;
      v8 = 8;
      v7 = &v5;
      return sub_18002E278(v3, (unsigned __int8 *)dword_18009D7E9, 0LL, 0LL, 3u, &v6);
    }
  }
  return result;
}
