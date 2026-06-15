/*
 * XREFs of sub_180124F14 @ 0x180124F14
 * Callers:
 *     sub_180125A30 @ 0x180125A30 (sub_180125A30.c)
 * Callees:
 *     sub_1800521E8 @ 0x1800521E8 (sub_1800521E8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180124F14(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 *a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 *a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        __int64 *a23,
        __int64 a24,
        __int64 a25)
{
  int v26; // edx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  _WORD *v30; // rcx
  __int64 v31; // rax
  _BYTE v33[32]; // [rsp+30h] [rbp-D0h] BYREF
  _WORD *v34; // [rsp+50h] [rbp-B0h]
  int v35; // [rsp+58h] [rbp-A8h]
  int v36; // [rsp+5Ch] [rbp-A4h]
  __int64 v37; // [rsp+60h] [rbp-A0h]
  __int64 v38; // [rsp+68h] [rbp-98h]
  __int64 v39; // [rsp+70h] [rbp-90h]
  __int64 v40; // [rsp+78h] [rbp-88h]
  __int64 v41; // [rsp+80h] [rbp-80h]
  __int64 v42; // [rsp+88h] [rbp-78h]
  __int64 v43; // [rsp+90h] [rbp-70h]
  __int64 v44; // [rsp+98h] [rbp-68h]
  __int64 v45; // [rsp+A0h] [rbp-60h]
  __int64 v46; // [rsp+A8h] [rbp-58h]
  __int64 v47; // [rsp+B0h] [rbp-50h]
  __int64 v48; // [rsp+B8h] [rbp-48h]
  __int64 v49; // [rsp+C0h] [rbp-40h]
  __int64 v50; // [rsp+C8h] [rbp-38h]
  __int64 v51; // [rsp+D0h] [rbp-30h]
  __int64 v52; // [rsp+D8h] [rbp-28h]
  __int64 v53; // [rsp+E0h] [rbp-20h]
  __int64 v54; // [rsp+E8h] [rbp-18h]
  __int64 v55; // [rsp+F0h] [rbp-10h]
  __int64 v56; // [rsp+F8h] [rbp-8h]
  __int64 v57; // [rsp+100h] [rbp+0h]
  __int64 v58; // [rsp+108h] [rbp+8h]
  __int64 v59; // [rsp+110h] [rbp+10h]
  __int64 v60; // [rsp+118h] [rbp+18h]
  __int64 v61; // [rsp+120h] [rbp+20h]
  __int64 v62; // [rsp+128h] [rbp+28h]
  __int64 v63; // [rsp+130h] [rbp+30h]
  __int64 v64; // [rsp+138h] [rbp+38h]
  __int64 v65; // [rsp+140h] [rbp+40h]
  __int64 v66; // [rsp+148h] [rbp+48h]
  __int64 v67; // [rsp+150h] [rbp+50h]
  __int64 v68; // [rsp+158h] [rbp+58h]
  __int64 v69; // [rsp+160h] [rbp+60h]
  __int64 v70; // [rsp+168h] [rbp+68h]
  __int64 v71; // [rsp+170h] [rbp+70h]
  __int64 v72; // [rsp+178h] [rbp+78h]
  __int64 v73; // [rsp+180h] [rbp+80h]
  __int64 v74; // [rsp+188h] [rbp+88h]
  __int64 v75; // [rsp+190h] [rbp+90h]
  __int64 v76; // [rsp+198h] [rbp+98h]

  v75 = a25;
  v26 = 2;
  v73 = a24;
  v76 = 2LL;
  v74 = 2LL;
  v72 = 16LL;
  v27 = *a23;
  v69 = a22;
  v67 = a21;
  v65 = a20;
  v63 = a19;
  v61 = a18;
  v71 = v27;
  v70 = 4LL;
  v68 = 4LL;
  v28 = *a17;
  v57 = a16;
  v55 = a15;
  v53 = a14;
  v51 = a13;
  v49 = a12;
  v47 = a11;
  v45 = a10;
  v59 = v28;
  v66 = 2LL;
  v64 = 2LL;
  v29 = *a9;
  v41 = a8;
  v39 = a7;
  v37 = a6;
  v43 = v29;
  v62 = 2LL;
  v60 = 16LL;
  v30 = *a5;
  v58 = 4LL;
  v56 = 4LL;
  v54 = 2LL;
  v52 = 2LL;
  v50 = 2LL;
  v48 = 2LL;
  v46 = 1LL;
  v44 = 16LL;
  v42 = 1LL;
  v40 = 1LL;
  v38 = 4LL;
  if ( v30 )
  {
    v31 = -1LL;
    do
      ++v31;
    while ( v30[v31] );
    v26 = 2 * v31 + 2;
  }
  else
  {
    v30 = &unk_18015C744;
  }
  v34 = v30;
  v35 = v26;
  v36 = 0;
  return sub_1800521E8((__int64)&dword_18019C448, a2, 0LL, 0LL, 23, (__int64)v33);
}
