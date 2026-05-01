/*
 * XREFs of sub_18002ADE0 @ 0x18002ADE0
 * Callers:
 *     sub_180029BA8 @ 0x180029BA8 (sub_180029BA8.c)
 * Callees:
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18002ADE0(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        void **a14,
        __int64 a15)
{
  __int64 v16; // rcx
  int v17; // r8d
  _WORD *v18; // rdx
  __int64 v19; // rax
  int v20; // r9d
  _WORD *v21; // rdx
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+30h] [rbp-D0h] BYREF
  _WORD *v24; // [rsp+50h] [rbp-B0h]
  int v25; // [rsp+58h] [rbp-A8h]
  int v26; // [rsp+5Ch] [rbp-A4h]
  __int64 v27; // [rsp+60h] [rbp-A0h]
  __int64 v28; // [rsp+68h] [rbp-98h]
  __int64 v29; // [rsp+70h] [rbp-90h]
  __int64 v30; // [rsp+78h] [rbp-88h]
  __int64 v31; // [rsp+80h] [rbp-80h]
  __int64 v32; // [rsp+88h] [rbp-78h]
  __int64 v33; // [rsp+90h] [rbp-70h]
  __int64 v34; // [rsp+98h] [rbp-68h]
  __int64 v35; // [rsp+A0h] [rbp-60h]
  __int64 v36; // [rsp+A8h] [rbp-58h]
  __int64 v37; // [rsp+B0h] [rbp-50h]
  __int64 v38; // [rsp+B8h] [rbp-48h]
  __int64 v39; // [rsp+C0h] [rbp-40h]
  __int64 v40; // [rsp+C8h] [rbp-38h]
  __int64 v41; // [rsp+D0h] [rbp-30h]
  __int64 v42; // [rsp+D8h] [rbp-28h]
  _WORD *v43; // [rsp+E0h] [rbp-20h]
  int v44; // [rsp+E8h] [rbp-18h]
  int v45; // [rsp+ECh] [rbp-14h]
  __int64 v46; // [rsp+F0h] [rbp-10h]
  __int64 v47; // [rsp+F8h] [rbp-8h]

  v46 = a15;
  v16 = -1LL;
  v47 = 8LL;
  v17 = 2;
  v18 = *a14;
  if ( *a14 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( v18[v19] );
    v20 = 2 * v19 + 2;
  }
  else
  {
    v18 = &unk_180095550;
    v20 = 2;
  }
  v41 = a13;
  v39 = a12;
  v37 = a11;
  v35 = a10;
  v33 = a9;
  v31 = a8;
  v29 = a7;
  v27 = a6;
  v43 = v18;
  v44 = v20;
  v45 = 0;
  v21 = *a5;
  v42 = 8LL;
  v40 = 1LL;
  v38 = 4LL;
  v36 = 4LL;
  v34 = 4LL;
  v32 = 1LL;
  v30 = 1LL;
  v28 = 8LL;
  if ( v21 )
  {
    do
      ++v16;
    while ( v21[v16] );
    v17 = 2 * v16 + 2;
  }
  else
  {
    v21 = &unk_180095550;
  }
  v24 = v21;
  v25 = v17;
  v26 = 0;
  return sub_18002E278((int)&dword_1800B3218, a2, 0, 0, 0xDu, &v23);
}
