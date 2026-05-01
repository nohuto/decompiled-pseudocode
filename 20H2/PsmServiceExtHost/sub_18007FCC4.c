/*
 * XREFs of sub_18007FCC4 @ 0x18007FCC4
 * Callers:
 *     sub_180023FA0 @ 0x180023FA0 (sub_180023FA0.c)
 * Callees:
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

ULONG __fastcall sub_18007FCC4(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 a4, void **a5, __int64 a6)
{
  _WORD *v7; // rcx
  __int64 v8; // rax
  int v9; // edx
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+30h] [rbp-58h] BYREF
  _WORD *v12; // [rsp+50h] [rbp-38h]
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
    v9 = 2 * v8 + 2;
  }
  else
  {
    v7 = &unk_180095550;
    v9 = 2;
  }
  v12 = v7;
  v13 = v9;
  v14 = 0;
  return sub_18002E278((__int64)&dword_1800B3218, a2, 0LL, 0LL, 4u, &v11);
}
