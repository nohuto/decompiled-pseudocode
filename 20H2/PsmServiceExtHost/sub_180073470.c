/*
 * XREFs of sub_180073470 @ 0x180073470
 * Callers:
 *     sub_1800739C4 @ 0x1800739C4 (sub_1800739C4.c)
 * Callees:
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

ULONG __fastcall sub_180073470(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 *a6,
        __int64 a7)
{
  _WORD *v8; // rcx
  __int64 v9; // rax
  int v10; // edx
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+30h] [rbp-68h] BYREF
  _WORD *v13; // [rsp+50h] [rbp-48h]
  int v14; // [rsp+58h] [rbp-40h]
  int v15; // [rsp+5Ch] [rbp-3Ch]
  __int64 v16; // [rsp+60h] [rbp-38h]
  __int64 v17; // [rsp+68h] [rbp-30h]
  __int64 v18; // [rsp+70h] [rbp-28h]
  __int64 v19; // [rsp+78h] [rbp-20h]

  v18 = a7;
  v19 = 8LL;
  v17 = 16LL;
  v16 = *a6;
  v8 = *a5;
  if ( *a5 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( v8[v9] );
    v10 = 2 * v9 + 2;
  }
  else
  {
    v8 = &unk_180095550;
    v10 = 2;
  }
  v13 = v8;
  v14 = v10;
  v15 = 0;
  return sub_18002E278((__int64)&dword_1800B31E0, a2, 0LL, 0LL, 5u, &v12);
}
