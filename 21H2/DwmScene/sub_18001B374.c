/*
 * XREFs of sub_18001B374 @ 0x18001B374
 * Callers:
 *     sub_18001B2F8 @ 0x18001B2F8 (sub_18001B2F8.c)
 * Callees:
 *     sub_180020010 @ 0x180020010 (sub_180020010.c)
 *     sub_180021B3C @ 0x180021B3C (sub_180021B3C.c)
 *     sub_180021F90 @ 0x180021F90 (sub_180021F90.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18001B374(__int64 *a1, __int64 a2, __int64 a3)
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
  sub_180021B3C((unsigned int)&v10, 0, 0, (unsigned int)&v8, 0LL, (__int64)&v9);
  v5 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    sub_180020010(v5);
    SetLastError(LastError);
  }
  *a1 = 0LL;
  return sub_180021F90((_DWORD)a1, v10, v8, (unsigned int)sub_1800162F0, a3, 0LL, 0, 0);
}
