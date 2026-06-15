/*
 * XREFs of sub_180142CE0 @ 0x180142CE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_180109634 @ 0x180109634 (sub_180109634.c)
 *     sub_180142DD4 @ 0x180142DD4 (sub_180142DD4.c)
 */

__int64 __fastcall sub_180142CE0(__int64 a1, float a2)
{
  int v3; // edx
  _DWORD *v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  float v8; // [rsp+30h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+38h] [rbp-50h] BYREF
  float *v10; // [rsp+58h] [rbp-30h]
  int v11; // [rsp+60h] [rbp-28h]
  int v12; // [rsp+64h] [rbp-24h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h]

  v4 = (_DWORD *)sub_180008448(a1, sub_1800B6240)[1];
  if ( *v4 > 4u )
  {
    v12 = 0;
    v8 = a2;
    v11 = 4;
    v10 = &v8;
    sub_180109634((__int64)v4, (unsigned __int8 *)dword_18016CE63, 0LL, 0LL, 3u, &v9);
  }
  v5 = sub_180142DD4((int)a1 + 200, v3, *(_QWORD *)(a1 + 192), *(_DWORD *)(a1 + 216) != 0 ? a1 + 200 : 0, LODWORD(a2));
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  sub_18004BD84(
    (int)retaddr,
    630,
    (int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\telephonycontroller.cpp",
    v5);
  return v6;
}
