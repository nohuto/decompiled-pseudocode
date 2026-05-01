/*
 * XREFs of sub_18006FC70 @ 0x18006FC70
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180077F2C @ 0x180077F2C (sub_180077F2C.c)
 */

__int64 __fastcall sub_18006FC70(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // eax
  int v7; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+38h] [rbp-40h] BYREF
  int *v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+60h] [rbp-18h]
  int v11; // [rsp+64h] [rbp-14h]

  v2 = a2;
  if ( *(_DWORD *)(a2 + 104) )
    return 255LL;
  v4 = *(_QWORD *)(a2 + 40);
  LOBYTE(a2) = 1;
  sub_180077F2C(v4, a2);
  if ( (unsigned int)dword_1800B31E0 > 4 )
  {
    if ( sub_180010470((__int64)&dword_1800B31E0, 1LL) )
    {
      v6 = *(_DWORD *)(v2 + 108);
      v11 = 0;
      v7 = v6;
      v10 = 4;
      v9 = &v7;
      sub_18002E278(v5, (unsigned __int8 *)dword_18009CBD2, 0LL, 0LL, 3u, &v8);
    }
  }
  return 0LL;
}
