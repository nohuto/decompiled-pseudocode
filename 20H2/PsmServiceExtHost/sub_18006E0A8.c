/*
 * XREFs of sub_18006E0A8 @ 0x18006E0A8
 * Callers:
 *     sub_18006E160 @ 0x18006E160 (sub_18006E160.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_18006F39C @ 0x18006F39C (sub_18006F39C.c)
 */

char __fastcall sub_18006E0A8(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  int v4; // eax
  int v6; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+38h] [rbp-40h] BYREF
  int *v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]
  int v10; // [rsp+64h] [rbp-14h]

  v2 = *(_QWORD *)(a1 + 72);
  if ( (*(_BYTE *)(a1 + 80) & 1) != 0 )
  {
    if ( !v2 )
      goto LABEL_5;
    v2 ^= a1 + 72;
  }
  if ( v2 )
    return 0;
LABEL_5:
  sub_18006F39C((PVOID)a1);
  if ( (unsigned int)dword_1800B31E0 > 4 )
  {
    if ( sub_180010470((__int64)&dword_1800B31E0, 1LL) )
    {
      v4 = *(_DWORD *)(a1 + 108);
      v10 = 0;
      v8 = &v6;
      v6 = v4;
      v9 = 4;
      sub_18002E278(v3, (unsigned __int8 *)dword_18009CC08, 0LL, 0LL, 3u, &v7);
    }
  }
  return 1;
}
