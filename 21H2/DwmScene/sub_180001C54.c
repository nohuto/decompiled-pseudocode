/*
 * XREFs of sub_180001C54 @ 0x180001C54
 * Callers:
 *     sub_180119160 @ 0x180119160 (sub_180119160.c)
 * Callees:
 *     sub_180002A58 @ 0x180002A58 (sub_180002A58.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180001C54(
        int a1,
        int a2,
        int a3,
        int a4,
        void **a5,
        __int64 a6,
        __int64 *a7,
        __int64 *a8,
        void **a9,
        void **a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        __int64 a24,
        __int64 a25)
{
  __int64 v27; // rdx
  _BYTE *v28; // rcx
  __int64 v29; // rax
  int v30; // eax
  _BYTE *v31; // rcx
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // rcx
  _BYTE *v35; // rcx
  int v36; // edx
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE *v39; // [rsp+50h] [rbp-B0h]
  int v40; // [rsp+58h] [rbp-A8h]
  int v41; // [rsp+5Ch] [rbp-A4h]
  __int64 v42; // [rsp+60h] [rbp-A0h]
  __int64 v43; // [rsp+68h] [rbp-98h]
  __int64 v44; // [rsp+70h] [rbp-90h]
  __int64 v45; // [rsp+78h] [rbp-88h]
  __int64 v46; // [rsp+80h] [rbp-80h]
  __int64 v47; // [rsp+88h] [rbp-78h]
  _BYTE *v48; // [rsp+90h] [rbp-70h]
  int v49; // [rsp+98h] [rbp-68h]
  int v50; // [rsp+9Ch] [rbp-64h]
  _BYTE *v51; // [rsp+A0h] [rbp-60h]
  int v52; // [rsp+A8h] [rbp-58h]
  int v53; // [rsp+ACh] [rbp-54h]
  __int64 v54; // [rsp+B0h] [rbp-50h]
  __int64 v55; // [rsp+B8h] [rbp-48h]
  __int64 v56; // [rsp+C0h] [rbp-40h]
  __int64 v57; // [rsp+C8h] [rbp-38h]
  __int64 v58; // [rsp+D0h] [rbp-30h]
  __int64 v59; // [rsp+D8h] [rbp-28h]
  __int64 v60; // [rsp+E0h] [rbp-20h]
  __int64 v61; // [rsp+E8h] [rbp-18h]
  __int64 v62; // [rsp+F0h] [rbp-10h]
  __int64 v63; // [rsp+F8h] [rbp-8h]
  __int64 v64; // [rsp+100h] [rbp+0h]
  __int64 v65; // [rsp+108h] [rbp+8h]
  __int64 v66; // [rsp+110h] [rbp+10h]
  __int64 v67; // [rsp+118h] [rbp+18h]
  __int64 v68; // [rsp+120h] [rbp+20h]
  __int64 v69; // [rsp+128h] [rbp+28h]
  __int64 v70; // [rsp+130h] [rbp+30h]
  __int64 v71; // [rsp+138h] [rbp+38h]
  __int64 v72; // [rsp+140h] [rbp+40h]
  __int64 v73; // [rsp+148h] [rbp+48h]
  __int64 v74; // [rsp+150h] [rbp+50h]
  __int64 v75; // [rsp+158h] [rbp+58h]
  __int64 v76; // [rsp+160h] [rbp+60h]
  __int64 v77; // [rsp+168h] [rbp+68h]
  __int64 v78; // [rsp+170h] [rbp+70h]
  __int64 v79; // [rsp+178h] [rbp+78h]
  __int64 v80; // [rsp+180h] [rbp+80h]
  __int64 v81; // [rsp+188h] [rbp+88h]
  __int64 v82; // [rsp+190h] [rbp+90h]
  __int64 v83; // [rsp+198h] [rbp+98h]

  v82 = a25;
  v80 = a24;
  v27 = -1LL;
  v78 = a23;
  v76 = a22;
  v74 = a21;
  v72 = a20;
  v70 = a19;
  v68 = a18;
  v66 = a17;
  v64 = a16;
  v62 = a15;
  v60 = a14;
  v58 = a13;
  v56 = a12;
  v54 = a11;
  v83 = 4LL;
  v81 = 4LL;
  v79 = 4LL;
  v28 = *a10;
  v77 = 4LL;
  v75 = 8LL;
  v73 = 8LL;
  v71 = 8LL;
  v69 = 8LL;
  v67 = 8LL;
  v65 = 8LL;
  v63 = 4LL;
  v61 = 4LL;
  v59 = 4LL;
  v57 = 4LL;
  v55 = 8LL;
  if ( v28 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( v28[v29] );
    v30 = v29 + 1;
  }
  else
  {
    v28 = &unk_18013FCFA;
    v30 = 1;
  }
  v52 = v30;
  v51 = v28;
  v53 = 0;
  v31 = *a9;
  if ( *a9 )
  {
    v32 = -1LL;
    do
      ++v32;
    while ( v31[v32] );
    v33 = v32 + 1;
  }
  else
  {
    v31 = &unk_18013FCFA;
    v33 = 1;
  }
  v49 = v33;
  v48 = v31;
  v50 = 0;
  v47 = 16LL;
  v46 = *a8;
  v45 = 16LL;
  v43 = 4LL;
  v34 = *a7;
  v42 = a6;
  v44 = v34;
  v35 = *a5;
  if ( *a5 )
  {
    do
      ++v27;
    while ( v35[v27] );
    v36 = v27 + 1;
  }
  else
  {
    v35 = &unk_18013FCFA;
    v36 = 1;
  }
  v39 = v35;
  v40 = v36;
  v41 = 0;
  return sub_180002A58(a1, a2, a3, a4, 0x17u, &v38);
}
