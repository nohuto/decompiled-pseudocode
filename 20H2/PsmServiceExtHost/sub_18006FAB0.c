/*
 * XREFs of sub_18006FAB0 @ 0x18006FAB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180077CE0 @ 0x180077CE0 (sub_180077CE0.c)
 *     sub_180085678 @ 0x180085678 (sub_180085678.c)
 */

__int64 __fastcall sub_18006FAB0(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v3; // rcx
  int v5; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+38h] [rbp-40h] BYREF
  int *v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  if ( *(_DWORD *)(a2 + 104) || (*(_BYTE *)(a2 + 144) & 8) == 0 )
    return 255LL;
  LOBYTE(a1) = 1;
  v2 = sub_180077CE0(a1);
  if ( v2 < 0 )
    sub_180085678();
  if ( (unsigned int)dword_1800B31E0 > 4 )
  {
    if ( sub_180010470((__int64)&dword_1800B31E0, 1LL) )
    {
      v9 = 0;
      v7 = &v5;
      v5 = v2;
      v8 = 4;
      sub_18002E278(v3, (unsigned __int8 *)dword_18009CCB9, 0LL, 0LL, 3u, &v6);
    }
  }
  return (unsigned int)v2;
}
