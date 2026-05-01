/*
 * XREFs of sub_180062AC0 @ 0x180062AC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_1800624C0 @ 0x1800624C0 (sub_1800624C0.c)
 *     sub_1800678A8 @ 0x1800678A8 (sub_1800678A8.c)
 */

__int64 __fastcall sub_180062AC0(__int64 a1, int *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // r8
  __int64 v6; // r9
  int v8; // [rsp+30h] [rbp-58h] BYREF
  __int64 v9; // [rsp+38h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+40h] [rbp-48h] BYREF
  __int64 *v11; // [rsp+60h] [rbp-28h]
  int v12; // [rsp+68h] [rbp-20h]
  int v13; // [rsp+6Ch] [rbp-1Ch]

  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 2LL) )
  {
    v13 = 0;
    v11 = &v9;
    v9 = a1;
    v12 = 8;
    sub_18002E278((__int64)&dword_1800B31E0, (unsigned __int8 *)dword_18009A721, 0LL, 0LL, 3u, &v10);
  }
  v4 = sub_1800678A8(a1, a1, a2);
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 2LL) )
  {
    v8 = *a2;
    LODWORD(v9) = v4;
    sub_1800624C0((__int64)&dword_1800B31E0, byte_18009A64A, v5, v6, (__int64)&v9, (__int64)&v8);
  }
  return v4;
}
