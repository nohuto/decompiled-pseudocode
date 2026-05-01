/*
 * XREFs of sub_18006A458 @ 0x18006A458
 * Callers:
 *     sub_180017A10 @ 0x180017A10 (sub_180017A10.c)
 * Callees:
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

ULONG __fastcall sub_18006A458(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void **a6,
        __int64 *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15)
{
  __int64 v16; // rcx
  int v17; // eax
  _WORD *v18; // rcx
  __int64 v19; // rax
  int v20; // edx
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v23; // [rsp+50h] [rbp-B0h]
  __int64 v24; // [rsp+58h] [rbp-A8h]
  _WORD *v25; // [rsp+60h] [rbp-A0h]
  int v26; // [rsp+68h] [rbp-98h]
  int v27; // [rsp+6Ch] [rbp-94h]
  __int64 v28; // [rsp+70h] [rbp-90h]
  int v29; // [rsp+78h] [rbp-88h]
  int v30; // [rsp+7Ch] [rbp-84h]
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
  __int64 v43; // [rsp+E0h] [rbp-20h]
  __int64 v44; // [rsp+E8h] [rbp-18h]
  __int64 v45; // [rsp+F0h] [rbp-10h]
  __int64 v46; // [rsp+F8h] [rbp-8h]

  v45 = a15;
  v43 = a14;
  v41 = a13;
  v39 = a12;
  v37 = a11;
  v35 = a10;
  v33 = a9;
  v31 = a8;
  v46 = 1LL;
  v44 = 1LL;
  v42 = 8LL;
  v16 = *a7;
  v40 = 8LL;
  v38 = 8LL;
  v36 = 8LL;
  v34 = 4LL;
  v32 = 4LL;
  v17 = *(unsigned __int8 *)(v16 + 1);
  v28 = v16;
  v30 = 0;
  v29 = 4 * v17 + 8;
  v18 = *a6;
  if ( *a6 )
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
  v23 = a5;
  v25 = v18;
  v26 = v20;
  v27 = 0;
  v24 = 4LL;
  return sub_18002E278((__int64)&dword_1800B31E0, a2, 0LL, 0LL, 0xDu, &v22);
}
