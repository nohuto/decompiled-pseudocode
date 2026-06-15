/*
 * XREFs of sub_1801096D0 @ 0x1801096D0
 * Callers:
 *     sub_18005F1A8 @ 0x18005F1A8 (sub_18005F1A8.c)
 *     sub_18010A130 @ 0x18010A130 (sub_18010A130.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_180109634 @ 0x180109634 (sub_180109634.c)
 */

ULONG __fastcall sub_1801096D0(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 a4, const CHAR **a5, __int64 a6)
{
  const CHAR *v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+30h] [rbp-58h] BYREF
  const CHAR *v12; // [rsp+50h] [rbp-38h]
  int v13; // [rsp+58h] [rbp-30h]
  int v14; // [rsp+5Ch] [rbp-2Ch]
  __int64 v15; // [rsp+60h] [rbp-28h]
  __int64 v16; // [rsp+68h] [rbp-20h]

  v15 = a6;
  v16 = 4LL;
  v7 = *a5;
  if ( *a5 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( v7[v8] );
    v9 = v8 + 1;
  }
  else
  {
    v7 = MultiByteStr;
    v9 = 1;
  }
  v13 = v9;
  v12 = v7;
  v14 = 0;
  return sub_180109634(a1, a2, 0LL, 0LL, 4u, &v11);
}
