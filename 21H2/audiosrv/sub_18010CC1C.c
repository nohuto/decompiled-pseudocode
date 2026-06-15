/*
 * XREFs of sub_18010CC1C @ 0x18010CC1C
 * Callers:
 *     sub_18010D0D0 @ 0x18010D0D0 (sub_18010D0D0.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_180109634 @ 0x180109634 (sub_180109634.c)
 */

ULONG __fastcall sub_18010CC1C(__int64 a1, __int64 a2, int a3)
{
  ULONG result; // eax
  int v4; // [rsp+30h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+40h] [rbp-58h] BYREF
  __int64 v6; // [rsp+60h] [rbp-38h]
  int v7; // [rsp+68h] [rbp-30h]
  int v8; // [rsp+6Ch] [rbp-2Ch]
  int *v9; // [rsp+70h] [rbp-28h]
  int v10; // [rsp+78h] [rbp-20h]
  int v11; // [rsp+7Ch] [rbp-1Ch]

  if ( (unsigned int)CallbackContext > 4 )
  {
    v4 = a3;
    v9 = &v4;
    v11 = 0;
    v10 = 4;
    v6 = a2;
    v8 = 0;
    v7 = 16;
    return sub_180109634((__int64)&CallbackContext, (unsigned __int8 *)dword_1801697DE, 0LL, 0LL, 4u, &v5);
  }
  return result;
}
