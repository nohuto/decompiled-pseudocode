/*
 * XREFs of sub_18010CCB0 @ 0x18010CCB0
 * Callers:
 *     sub_18010D340 @ 0x18010D340 (sub_18010D340.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_180109634 @ 0x180109634 (sub_180109634.c)
 */

ULONG __fastcall sub_18010CCB0(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG result; // eax
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-58h] BYREF
  __int64 v5; // [rsp+50h] [rbp-38h]
  int v6; // [rsp+58h] [rbp-30h]
  int v7; // [rsp+5Ch] [rbp-2Ch]
  __int64 v8; // [rsp+60h] [rbp-28h]
  int v9; // [rsp+68h] [rbp-20h]
  int v10; // [rsp+6Ch] [rbp-1Ch]

  if ( (unsigned int)CallbackContext > 4 )
  {
    v8 = a3;
    v10 = 0;
    v9 = 16;
    v5 = a2;
    v7 = 0;
    v6 = 16;
    return sub_180109634((__int64)&CallbackContext, (unsigned __int8 *)dword_18016980E, 0LL, 0LL, 4u, &v4);
  }
  return result;
}
