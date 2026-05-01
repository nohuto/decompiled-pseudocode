/*
 * XREFs of sub_180083790 @ 0x180083790
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180083CB8 @ 0x180083CB8 (sub_180083CB8.c)
 *     sub_180083D0C @ 0x180083D0C (sub_180083D0C.c)
 */

__int64 __fastcall sub_180083790(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int *a5)
{
  int v6; // eax
  int v8; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+38h] [rbp-40h] BYREF
  int *v10; // [rsp+58h] [rbp-20h]
  int v11; // [rsp+60h] [rbp-18h]
  int v12; // [rsp+64h] [rbp-14h]

  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 64LL) )
    sub_18002E278((__int64)&dword_1800B3218, (unsigned __int8 *)dword_1800A238F, 0LL, 0LL, 2u, &v9);
  if ( *a5 )
    sub_180083CB8(a4);
  else
    sub_180083D0C(a4);
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 8LL) )
  {
    v6 = *a5;
    v12 = 0;
    v8 = v6;
    v11 = 4;
    v10 = &v8;
    sub_18002E278((__int64)&dword_1800B3218, (unsigned __int8 *)dword_1800A235F, 0LL, 0LL, 3u, &v9);
  }
  return 0LL;
}
