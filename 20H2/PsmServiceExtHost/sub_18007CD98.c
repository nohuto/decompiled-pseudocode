/*
 * XREFs of sub_18007CD98 @ 0x18007CD98
 * Callers:
 *     sub_18007CF6C @ 0x18007CF6C (sub_18007CF6C.c)
 * Callees:
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

ULONG __fastcall sub_18007CD98(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void **a6,
        void **a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18)
{
  __int64 v19; // rcx
  int v20; // r9d
  _WORD *v21; // rdx
  __int64 v22; // rax
  int v23; // r8d
  _WORD *v24; // rdx
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v27; // [rsp+50h] [rbp-B0h]
  __int64 v28; // [rsp+58h] [rbp-A8h]
  _WORD *v29; // [rsp+60h] [rbp-A0h]
  int v30; // [rsp+68h] [rbp-98h]
  int v31; // [rsp+6Ch] [rbp-94h]
  _WORD *v32; // [rsp+70h] [rbp-90h]
  int v33; // [rsp+78h] [rbp-88h]
  int v34; // [rsp+7Ch] [rbp-84h]
  __int64 v35; // [rsp+80h] [rbp-80h]
  __int64 v36; // [rsp+88h] [rbp-78h]
  __int64 v37; // [rsp+90h] [rbp-70h]
  __int64 v38; // [rsp+98h] [rbp-68h]
  __int64 v39; // [rsp+A0h] [rbp-60h]
  __int64 v40; // [rsp+A8h] [rbp-58h]
  __int64 v41; // [rsp+B0h] [rbp-50h]
  __int64 v42; // [rsp+B8h] [rbp-48h]
  __int64 v43; // [rsp+C0h] [rbp-40h]
  __int64 v44; // [rsp+C8h] [rbp-38h]
  __int64 v45; // [rsp+D0h] [rbp-30h]
  __int64 v46; // [rsp+D8h] [rbp-28h]
  __int64 v47; // [rsp+E0h] [rbp-20h]
  __int64 v48; // [rsp+E8h] [rbp-18h]
  __int64 v49; // [rsp+F0h] [rbp-10h]
  __int64 v50; // [rsp+F8h] [rbp-8h]
  __int64 v51; // [rsp+100h] [rbp+0h]
  __int64 v52; // [rsp+108h] [rbp+8h]
  __int64 v53; // [rsp+110h] [rbp+10h]
  __int64 v54; // [rsp+118h] [rbp+18h]
  __int64 v55; // [rsp+120h] [rbp+20h]
  __int64 v56; // [rsp+128h] [rbp+28h]

  v55 = a18;
  v19 = -1LL;
  v53 = a17;
  v20 = 2;
  v51 = a16;
  v49 = a15;
  v47 = a14;
  v45 = a13;
  v43 = a12;
  v41 = a11;
  v39 = a10;
  v37 = a9;
  v35 = a8;
  v56 = 8LL;
  v54 = 8LL;
  v52 = 4LL;
  v21 = *a7;
  v50 = 8LL;
  v48 = 8LL;
  v46 = 8LL;
  v44 = 1LL;
  v42 = 4LL;
  v40 = 1LL;
  v38 = 1LL;
  v36 = 4LL;
  if ( v21 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( v21[v22] );
    v23 = 2 * v22 + 2;
  }
  else
  {
    v21 = &unk_180095550;
    v23 = 2;
  }
  v32 = v21;
  v33 = v23;
  v34 = 0;
  v24 = *a6;
  if ( *a6 )
  {
    do
      ++v19;
    while ( v24[v19] );
    v20 = 2 * v19 + 2;
  }
  else
  {
    v24 = &unk_180095550;
  }
  v27 = a5;
  v29 = v24;
  v30 = v20;
  v31 = 0;
  v28 = 8LL;
  return sub_18002E278((__int64)&dword_1800B3218, a2, 0LL, 0LL, 0x10u, &v26);
}
