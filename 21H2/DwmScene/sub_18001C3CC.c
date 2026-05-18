/*
 * XREFs of sub_18001C3CC @ 0x18001C3CC
 * Callers:
 *     sub_18001CEC4 @ 0x18001CEC4 (sub_18001CEC4.c)
 * Callees:
 *     sub_18001BF2C @ 0x18001BF2C (sub_18001BF2C.c)
 *     sub_18001F920 @ 0x18001F920 (sub_18001F920.c)
 *     sub_180021B3C @ 0x180021B3C (sub_180021B3C.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

bool __fastcall sub_18001C3CC(int a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  int v8; // ebx
  unsigned int v9; // eax
  unsigned int v11; // [rsp+30h] [rbp-38h] BYREF

  v11 = a3;
  v8 = sub_180021B3C(a1, 0, 0, (_DWORD)a5, a2, (__int64)&v11);
  sub_18001BF2C(v8);
  if ( v8 )
  {
    v9 = 0;
    *a5 = 0;
    v11 = 0;
  }
  else
  {
    v9 = v11;
  }
  sub_18001F920(a4, a2, v9, a3);
  return *(_BYTE *)(a4 + 57) == 0;
}
