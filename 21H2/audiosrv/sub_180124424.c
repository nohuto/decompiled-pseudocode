/*
 * XREFs of sub_180124424 @ 0x180124424
 * Callers:
 *     sub_180049F80 @ 0x180049F80 (sub_180049F80.c)
 * Callees:
 *     sub_1800521E8 @ 0x1800521E8 (sub_1800521E8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180124424(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 a6,
        __int64 a7,
        __int64 *a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 *a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 *a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        __int64 *a23)
{
  __int64 v24; // rcx
  int v25; // edx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  _WORD *v29; // rcx
  __int64 v30; // rax
  _BYTE v32[32]; // [rsp+30h] [rbp-D0h] BYREF
  _WORD *v33; // [rsp+50h] [rbp-B0h]
  int v34; // [rsp+58h] [rbp-A8h]
  int v35; // [rsp+5Ch] [rbp-A4h]
  __int64 v36; // [rsp+60h] [rbp-A0h]
  __int64 v37; // [rsp+68h] [rbp-98h]
  __int64 v38; // [rsp+70h] [rbp-90h]
  __int64 v39; // [rsp+78h] [rbp-88h]
  __int64 v40; // [rsp+80h] [rbp-80h]
  __int64 v41; // [rsp+88h] [rbp-78h]
  __int64 v42; // [rsp+90h] [rbp-70h]
  __int64 v43; // [rsp+98h] [rbp-68h]
  __int64 v44; // [rsp+A0h] [rbp-60h]
  __int64 v45; // [rsp+A8h] [rbp-58h]
  __int64 v46; // [rsp+B0h] [rbp-50h]
  __int64 v47; // [rsp+B8h] [rbp-48h]
  __int64 v48; // [rsp+C0h] [rbp-40h]
  __int64 v49; // [rsp+C8h] [rbp-38h]
  __int64 v50; // [rsp+D0h] [rbp-30h]
  __int64 v51; // [rsp+D8h] [rbp-28h]
  __int64 v52; // [rsp+E0h] [rbp-20h]
  __int64 v53; // [rsp+E8h] [rbp-18h]
  __int64 v54; // [rsp+F0h] [rbp-10h]
  __int64 v55; // [rsp+F8h] [rbp-8h]
  __int64 v56; // [rsp+100h] [rbp+0h]
  __int64 v57; // [rsp+108h] [rbp+8h]
  __int64 v58; // [rsp+110h] [rbp+10h]
  __int64 v59; // [rsp+118h] [rbp+18h]
  __int64 v60; // [rsp+120h] [rbp+20h]
  __int64 v61; // [rsp+128h] [rbp+28h]
  __int64 v62; // [rsp+130h] [rbp+30h]
  __int64 v63; // [rsp+138h] [rbp+38h]
  __int64 v64; // [rsp+140h] [rbp+40h]
  __int64 v65; // [rsp+148h] [rbp+48h]
  __int64 v66; // [rsp+150h] [rbp+50h]
  __int64 v67; // [rsp+158h] [rbp+58h]
  __int64 v68; // [rsp+160h] [rbp+60h]
  __int64 v69; // [rsp+168h] [rbp+68h]
  __int64 v70; // [rsp+170h] [rbp+70h]
  __int64 v71; // [rsp+178h] [rbp+78h]

  v71 = 16LL;
  v69 = 1LL;
  v67 = 4LL;
  v24 = *a23;
  v25 = 2;
  v68 = a22;
  v66 = a21;
  v64 = a20;
  v62 = a19;
  v70 = v24;
  v65 = 2LL;
  v63 = 2LL;
  v26 = *a18;
  v58 = a17;
  v56 = a16;
  v54 = a15;
  v52 = a14;
  v50 = a13;
  v60 = v26;
  v61 = 16LL;
  v59 = 4LL;
  v27 = *a12;
  v46 = a11;
  v44 = a10;
  v42 = a9;
  v48 = v27;
  v57 = 4LL;
  v55 = 2LL;
  v28 = *a8;
  v38 = a7;
  v36 = a6;
  v40 = v28;
  v53 = 4LL;
  v51 = 4LL;
  v29 = *a5;
  v49 = 16LL;
  v47 = 4LL;
  v45 = 2LL;
  v43 = 1LL;
  v41 = 16LL;
  v39 = 1LL;
  v37 = 1LL;
  if ( v29 )
  {
    v30 = -1LL;
    do
      ++v30;
    while ( v29[v30] );
    v25 = 2 * v30 + 2;
  }
  else
  {
    v29 = &unk_18015C744;
  }
  v33 = v29;
  v34 = v25;
  v35 = 0;
  return sub_1800521E8((__int64)&dword_18019C448, a2, 0LL, 0LL, 21, (__int64)v32);
}
