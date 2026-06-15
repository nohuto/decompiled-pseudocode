/*
 * XREFs of sub_1801255D4 @ 0x1801255D4
 * Callers:
 *     sub_180049F80 @ 0x180049F80 (sub_180049F80.c)
 *     sub_18005D590 @ 0x18005D590 (sub_18005D590.c)
 * Callees:
 *     sub_1800521E8 @ 0x1800521E8 (sub_1800521E8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1801255D4(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 *a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        void **a18,
        void **a19)
{
  __int64 v20; // rcx
  _WORD *v21; // rdx
  __int64 v22; // rax
  int v23; // r8d
  _WORD *v24; // rdx
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rcx
  _BYTE v29[32]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v30; // [rsp+50h] [rbp-B0h]
  __int64 v31; // [rsp+58h] [rbp-A8h]
  __int64 v32; // [rsp+60h] [rbp-A0h]
  __int64 v33; // [rsp+68h] [rbp-98h]
  __int64 v34; // [rsp+70h] [rbp-90h]
  __int64 v35; // [rsp+78h] [rbp-88h]
  __int64 v36; // [rsp+80h] [rbp-80h]
  __int64 v37; // [rsp+88h] [rbp-78h]
  __int64 v38; // [rsp+90h] [rbp-70h]
  __int64 v39; // [rsp+98h] [rbp-68h]
  __int64 v40; // [rsp+A0h] [rbp-60h]
  __int64 v41; // [rsp+A8h] [rbp-58h]
  __int64 v42; // [rsp+B0h] [rbp-50h]
  __int64 v43; // [rsp+B8h] [rbp-48h]
  __int64 v44; // [rsp+C0h] [rbp-40h]
  __int64 v45; // [rsp+C8h] [rbp-38h]
  __int64 v46; // [rsp+D0h] [rbp-30h]
  __int64 v47; // [rsp+D8h] [rbp-28h]
  __int64 v48; // [rsp+E0h] [rbp-20h]
  __int64 v49; // [rsp+E8h] [rbp-18h]
  __int64 v50; // [rsp+F0h] [rbp-10h]
  __int64 v51; // [rsp+F8h] [rbp-8h]
  __int64 v52; // [rsp+100h] [rbp+0h]
  __int64 v53; // [rsp+108h] [rbp+8h]
  __int64 v54; // [rsp+110h] [rbp+10h]
  __int64 v55; // [rsp+118h] [rbp+18h]
  _WORD *v56; // [rsp+120h] [rbp+20h]
  int v57; // [rsp+128h] [rbp+28h]
  int v58; // [rsp+12Ch] [rbp+2Ch]
  _WORD *v59; // [rsp+130h] [rbp+30h]
  int v60; // [rsp+138h] [rbp+38h]
  int v61; // [rsp+13Ch] [rbp+3Ch]

  v20 = -1LL;
  v21 = *a19;
  if ( *a19 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( v21[v22] );
    v23 = 2 * v22 + 2;
  }
  else
  {
    v21 = &unk_18015C744;
    v23 = 2;
  }
  v59 = v21;
  v60 = v23;
  v61 = 0;
  v24 = *a18;
  if ( *a18 )
  {
    do
      ++v20;
    while ( v24[v20] );
    v25 = 2 * v20 + 2;
  }
  else
  {
    v24 = &unk_18015C744;
    v25 = 2;
  }
  v57 = v25;
  v54 = a17;
  v52 = a16;
  v50 = a15;
  v56 = v24;
  v58 = 0;
  v55 = 2LL;
  v26 = *a14;
  v46 = a13;
  v44 = a12;
  v42 = a11;
  v40 = a10;
  v38 = a9;
  v36 = a8;
  v34 = a7;
  v48 = v26;
  v53 = 2LL;
  v51 = 2LL;
  v27 = *a6;
  v30 = a5;
  v32 = v27;
  v49 = 16LL;
  v47 = 4LL;
  v45 = 4LL;
  v43 = 4LL;
  v41 = 1LL;
  v39 = 1LL;
  v37 = 1LL;
  v35 = 1LL;
  v33 = 16LL;
  v31 = 4LL;
  return sub_1800521E8((__int64)&dword_18019C448, a2, 0LL, 0LL, 17, (__int64)v29);
}
