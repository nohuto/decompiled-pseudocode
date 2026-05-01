/*
 * XREFs of sub_18002C364 @ 0x18002C364
 * Callers:
 *     sub_18002C298 @ 0x18002C298 (sub_18002C298.c)
 *     sub_18002C2F4 @ 0x18002C2F4 (sub_18002C2F4.c)
 *     sub_18007F818 @ 0x18007F818 (sub_18007F818.c)
 * Callees:
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18002C364(__int64 a1, int a2, __int64 a3, __int64 a4, void **a5, __int64 a6)
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
  v16 = 8LL;
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
  return sub_18002E278((int)&dword_1800B3218, a2, 0, 0, 4u, &v11);
}
