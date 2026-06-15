/*
 * XREFs of sub_18002BAC8 @ 0x18002BAC8
 * Callers:
 *     sub_18002BB70 @ 0x18002BB70 (sub_18002BB70.c)
 *     sub_18002C120 @ 0x18002C120 (sub_18002C120.c)
 * Callees:
 *     sub_18000FAA8 @ 0x18000FAA8 (sub_18000FAA8.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 */

ULONG __fastcall sub_18002BAC8(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, int a4, char a5)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  const wchar_t *v7; // rax
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+30h] [rbp-50h] BYREF
  const wchar_t *v10; // [rsp+40h] [rbp-40h]
  int v11; // [rsp+48h] [rbp-38h]
  int v12; // [rsp+4Ch] [rbp-34h]
  int *v13; // [rsp+50h] [rbp-30h]
  __int64 v14; // [rsp+58h] [rbp-28h]
  char *v15; // [rsp+60h] [rbp-20h]
  __int64 v16; // [rsp+68h] [rbp-18h]
  int v17; // [rsp+A8h] [rbp+28h] BYREF

  v17 = a4;
  if ( a3 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( *(_WORD *)(a3 + 2 * v5) );
    v6 = (unsigned int)(2 * v5 + 2);
  }
  else
  {
    v6 = 10LL;
  }
  v11 = v6;
  v12 = 0;
  v7 = L"NULL";
  v14 = 4LL;
  if ( a3 )
    v7 = (const wchar_t *)a3;
  v16 = 4LL;
  v10 = v7;
  v13 = &v17;
  v15 = &a5;
  return sub_18000FAA8(v6, a2, a3, 4u, &v9);
}
