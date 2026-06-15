/*
 * XREFs of sub_180109F18 @ 0x180109F18
 * Callers:
 *     sub_180106F68 @ 0x180106F68 (sub_180106F68.c)
 *     sub_180107084 @ 0x180107084 (sub_180107084.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_180109634 @ 0x180109634 (sub_180109634.c)
 */

ULONG __fastcall sub_180109F18(__int64 a1, int a2, __int64 a3)
{
  ULONG result; // eax
  int v4; // [rsp+30h] [rbp-68h] BYREF
  __int64 v5; // [rsp+38h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+40h] [rbp-58h] BYREF
  int *v7; // [rsp+60h] [rbp-38h]
  int v8; // [rsp+68h] [rbp-30h]
  int v9; // [rsp+6Ch] [rbp-2Ch]
  __int64 *v10; // [rsp+70h] [rbp-28h]
  int v11; // [rsp+78h] [rbp-20h]
  int v12; // [rsp+7Ch] [rbp-1Ch]

  if ( (unsigned int)CallbackContext > 4 )
  {
    v5 = a3;
    v10 = &v5;
    v12 = 0;
    v11 = 8;
    v7 = &v4;
    v9 = 0;
    v4 = a2;
    v8 = 4;
    return sub_180109634((__int64)&CallbackContext, (unsigned __int8 *)dword_180169027, 0LL, 0LL, 4u, &v6);
  }
  return result;
}
