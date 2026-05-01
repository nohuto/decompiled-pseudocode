/*
 * XREFs of sub_18006D05C @ 0x18006D05C
 * Callers:
 *     sub_18006BAD0 @ 0x18006BAD0 (sub_18006BAD0.c)
 *     sub_18006CAD0 @ 0x18006CAD0 (sub_18006CAD0.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_18006CC50 @ 0x18006CC50 (sub_18006CC50.c)
 */

__int64 __fastcall sub_18006D05C(__int64 a1)
{
  int v2; // r9d
  int v3; // ebx
  __int64 v4; // rcx
  int v6; // [rsp+30h] [rbp-D0h] BYREF
  int v7; // [rsp+40h] [rbp-C0h] BYREF
  int v8; // [rsp+44h] [rbp-BCh] BYREF
  char v9[2056]; // [rsp+48h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+850h] [rbp+750h] BYREF
  int *v11; // [rsp+870h] [rbp+770h]
  int v12; // [rsp+878h] [rbp+778h]
  int v13; // [rsp+87Ch] [rbp+77Ch]

  if ( *(_DWORD *)(a1 + 264) )
  {
    v7 = 0;
    sub_18006CC50(a1, &v8, (__int64)v9);
    v2 = v8;
  }
  else
  {
    v2 = 0;
    v7 = -1073741393;
    v8 = 0;
  }
  v3 = RtlPublishWnfStateData(*(_QWORD *)(a1 + 96), 0LL, &v7, (unsigned int)(4 * v2 + 8), 0LL);
  if ( v3 < 0 && (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
  {
    v13 = 0;
    v11 = &v6;
    v6 = v3;
    v12 = 4;
    sub_18002E278(v4, (unsigned __int8 *)dword_18009C71B, 0LL, 0LL, 3u, &v10);
  }
  return (unsigned int)v3;
}
