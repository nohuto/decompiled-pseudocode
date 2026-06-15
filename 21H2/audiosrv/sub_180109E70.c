/*
 * XREFs of sub_180109E70 @ 0x180109E70
 * Callers:
 *     sub_1801077B0 @ 0x1801077B0 (sub_1801077B0.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_180109634 @ 0x180109634 (sub_180109634.c)
 */

ULONG __fastcall sub_180109E70(__int64 a1, __int64 a2, int a3, int a4)
{
  ULONG result; // eax
  int v5; // [rsp+30h] [rbp-19h] BYREF
  int v6; // [rsp+34h] [rbp-15h] BYREF
  __int64 v7; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+40h] [rbp-9h] BYREF
  __int64 *v9; // [rsp+60h] [rbp+17h]
  __int64 v10; // [rsp+68h] [rbp+1Fh]
  int *v11; // [rsp+70h] [rbp+27h]
  __int64 v12; // [rsp+78h] [rbp+2Fh]
  int *v13; // [rsp+80h] [rbp+37h]
  __int64 v14; // [rsp+88h] [rbp+3Fh]

  if ( (unsigned int)CallbackContext > 4 )
  {
    v5 = a4;
    v13 = &v5;
    v6 = a3;
    v11 = &v6;
    v7 = a2;
    v9 = &v7;
    v14 = 4LL;
    v12 = 4LL;
    v10 = 8LL;
    return sub_180109634((__int64)&CallbackContext, (unsigned __int8 *)dword_18016908F, 0LL, 0LL, 5u, &v8);
  }
  return result;
}
