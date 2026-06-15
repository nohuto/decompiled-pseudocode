/*
 * XREFs of sub_18012C550 @ 0x18012C550
 * Callers:
 *     sub_18012D2B8 @ 0x18012D2B8 (sub_18012D2B8.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_180109634 @ 0x180109634 (sub_180109634.c)
 */

ULONG __fastcall sub_18012C550(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7,
        void **a8)
{
  _WORD *v9; // rcx
  __int64 v10; // rax
  int v11; // edx
  __int64 v12; // rcx
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+30h] [rbp-39h] BYREF
  __int64 v15; // [rsp+50h] [rbp-19h]
  __int64 v16; // [rsp+58h] [rbp-11h]
  __int64 v17; // [rsp+60h] [rbp-9h]
  __int64 v18; // [rsp+68h] [rbp-1h]
  __int64 v19; // [rsp+70h] [rbp+7h]
  __int64 v20; // [rsp+78h] [rbp+Fh]
  _WORD *v21; // [rsp+80h] [rbp+17h]
  int v22; // [rsp+88h] [rbp+1Fh]
  int v23; // [rsp+8Ch] [rbp+23h]

  v9 = *a8;
  if ( *a8 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( v9[v10] );
    v11 = 2 * v10 + 2;
  }
  else
  {
    v9 = &unk_18015C744;
    v11 = 2;
  }
  v21 = v9;
  v22 = v11;
  v23 = 0;
  v12 = *a7;
  v17 = a6;
  v15 = a5;
  v19 = v12;
  v20 = 16LL;
  v18 = 4LL;
  v16 = 8LL;
  return sub_180109634((__int64)&dword_18019C480, a2, 0LL, 0LL, 6u, &v14);
}
