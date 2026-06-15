/*
 * XREFs of sub_18010743C @ 0x18010743C
 * Callers:
 *     sub_180047720 @ 0x180047720 (sub_180047720.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_180109634 @ 0x180109634 (sub_180109634.c)
 */

__int64 __fastcall sub_18010743C(__int64 a1, int a2)
{
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+38h] [rbp-40h] BYREF
  int *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]
  int v7; // [rsp+64h] [rbp-14h]

  if ( (unsigned int)CallbackContext > 4 )
  {
    v3 = a2;
    v5 = &v3;
    v7 = 0;
    v6 = 4;
    return sub_180109634((int)&CallbackContext, (int)&dword_180169005, 0, 0, 3u, &v4);
  }
  return result;
}
