/*
 * XREFs of sub_18003A9F8 @ 0x18003A9F8
 * Callers:
 *     sub_18003A980 @ 0x18003A980 (sub_18003A980.c)
 * Callees:
 *     sub_18003AAA0 @ 0x18003AAA0 (sub_18003AAA0.c)
 *     sub_18003AB4C @ 0x18003AB4C (sub_18003AB4C.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_18006649C @ 0x18006649C (sub_18006649C.c)
 */

__int64 __fastcall sub_18003A9F8(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rsi
  DWORD LastError; // ebx
  int v8; // [rsp+40h] [rbp-38h] BYREF
  int v9; // [rsp+44h] [rbp-34h] BYREF
  __int64 v10; // [rsp+48h] [rbp-30h] BYREF

  v10 = a2;
  if ( *a1 )
    return 0LL;
  v8 = 0;
  v9 = 0;
  sub_18003AB4C((unsigned int)&v10, a2, a3, (unsigned int)&v8, 0LL, (__int64)&v9);
  v5 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    sub_18006649C(v5);
    SetLastError(LastError);
  }
  *a1 = 0LL;
  return sub_18003AAA0((_DWORD)a1, v10, v8, (unsigned int)sub_180063D40, a3);
}
