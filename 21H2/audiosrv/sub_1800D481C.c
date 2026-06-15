/*
 * XREFs of sub_1800D481C @ 0x1800D481C
 * Callers:
 *     sub_1800D9D10 @ 0x1800D9D10 (sub_1800D9D10.c)
 * Callees:
 *     sub_1800521E8 @ 0x1800521E8 (sub_1800521E8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800D481C(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 a6,
        __int64 a7,
        __int64 *a8,
        __int64 a9)
{
  int v11; // edx
  __int64 v12; // rcx
  _WORD *v13; // rcx
  __int64 v14; // rax
  _BYTE v16[32]; // [rsp+30h] [rbp-51h] BYREF
  _WORD *v17; // [rsp+50h] [rbp-31h]
  int v18; // [rsp+58h] [rbp-29h]
  int v19; // [rsp+5Ch] [rbp-25h]
  __int64 v20; // [rsp+60h] [rbp-21h]
  __int64 v21; // [rsp+68h] [rbp-19h]
  __int64 v22; // [rsp+70h] [rbp-11h]
  __int64 v23; // [rsp+78h] [rbp-9h]
  __int64 v24; // [rsp+80h] [rbp-1h]
  __int64 v25; // [rsp+88h] [rbp+7h]
  __int64 v26; // [rsp+90h] [rbp+Fh]
  __int64 v27; // [rsp+98h] [rbp+17h]

  v26 = a9;
  v11 = 2;
  v25 = 16LL;
  v27 = 2LL;
  v23 = 1LL;
  v12 = *a8;
  v22 = a7;
  v20 = a6;
  v24 = v12;
  v21 = 4LL;
  v13 = *a5;
  if ( *a5 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( v13[v14] );
    v11 = 2 * v14 + 2;
  }
  else
  {
    v13 = &unk_18015C744;
  }
  v17 = v13;
  v18 = v11;
  v19 = 0;
  return sub_1800521E8(a1, a2, 0LL, 0LL, 7, (__int64)v16);
}
