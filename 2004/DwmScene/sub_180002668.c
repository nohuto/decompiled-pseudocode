/*
 * XREFs of sub_180002668 @ 0x180002668
 * Callers:
 *     sub_180112A90 @ 0x180112A90 (sub_180112A90.c)
 * Callees:
 *     sub_180002A58 @ 0x180002A58 (sub_180002A58.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180002668(
        int a1,
        int a2,
        int a3,
        int a4,
        void **a5,
        __int64 a6,
        __int64 *a7,
        __int64 *a8,
        __int64 *a9,
        void **a10,
        void **a11,
        __int64 a12,
        void **a13,
        void **a14,
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
        void **a25)
{
  __int64 v27; // r8
  _BYTE *v28; // rcx
  __int64 v29; // rax
  int v30; // eax
  _BYTE *v31; // rcx
  __int64 v32; // rax
  int v33; // eax
  _BYTE *v34; // rcx
  __int64 v35; // rax
  int v36; // eax
  _BYTE *v37; // rcx
  __int64 v38; // rax
  int v39; // eax
  _BYTE *v40; // rcx
  __int64 v41; // rax
  int v42; // eax
  __int64 v43; // rcx
  _BYTE *v44; // rcx
  int v45; // r8d
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE *v48; // [rsp+50h] [rbp-B0h]
  int v49; // [rsp+58h] [rbp-A8h]
  int v50; // [rsp+5Ch] [rbp-A4h]
  __int64 v51; // [rsp+60h] [rbp-A0h]
  __int64 v52; // [rsp+68h] [rbp-98h]
  __int64 v53; // [rsp+70h] [rbp-90h]
  __int64 v54; // [rsp+78h] [rbp-88h]
  __int64 v55; // [rsp+80h] [rbp-80h]
  __int64 v56; // [rsp+88h] [rbp-78h]
  __int64 v57; // [rsp+90h] [rbp-70h]
  __int64 v58; // [rsp+98h] [rbp-68h]
  _BYTE *v59; // [rsp+A0h] [rbp-60h]
  int v60; // [rsp+A8h] [rbp-58h]
  int v61; // [rsp+ACh] [rbp-54h]
  _BYTE *v62; // [rsp+B0h] [rbp-50h]
  int v63; // [rsp+B8h] [rbp-48h]
  int v64; // [rsp+BCh] [rbp-44h]
  __int64 v65; // [rsp+C0h] [rbp-40h]
  __int64 v66; // [rsp+C8h] [rbp-38h]
  _BYTE *v67; // [rsp+D0h] [rbp-30h]
  int v68; // [rsp+D8h] [rbp-28h]
  int v69; // [rsp+DCh] [rbp-24h]
  _BYTE *v70; // [rsp+E0h] [rbp-20h]
  int v71; // [rsp+E8h] [rbp-18h]
  int v72; // [rsp+ECh] [rbp-14h]
  __int64 v73; // [rsp+F0h] [rbp-10h]
  __int64 v74; // [rsp+F8h] [rbp-8h]
  __int64 v75; // [rsp+100h] [rbp+0h]
  __int64 v76; // [rsp+108h] [rbp+8h]
  __int64 v77; // [rsp+110h] [rbp+10h]
  __int64 v78; // [rsp+118h] [rbp+18h]
  __int64 v79; // [rsp+120h] [rbp+20h]
  __int64 v80; // [rsp+128h] [rbp+28h]
  __int64 v81; // [rsp+130h] [rbp+30h]
  __int64 v82; // [rsp+138h] [rbp+38h]
  __int64 v83; // [rsp+140h] [rbp+40h]
  __int64 v84; // [rsp+148h] [rbp+48h]
  __int64 v85; // [rsp+150h] [rbp+50h]
  __int64 v86; // [rsp+158h] [rbp+58h]
  __int64 v87; // [rsp+160h] [rbp+60h]
  __int64 v88; // [rsp+168h] [rbp+68h]
  __int64 v89; // [rsp+170h] [rbp+70h]
  __int64 v90; // [rsp+178h] [rbp+78h]
  __int64 v91; // [rsp+180h] [rbp+80h]
  __int64 v92; // [rsp+188h] [rbp+88h]
  _BYTE *v93; // [rsp+190h] [rbp+90h]
  int v94; // [rsp+198h] [rbp+98h]
  int v95; // [rsp+19Ch] [rbp+9Ch]

  v27 = -1LL;
  v28 = *a25;
  if ( *a25 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( v28[v29] );
    v30 = v29 + 1;
  }
  else
  {
    v28 = &unk_180139BFA;
    v30 = 1;
  }
  v94 = v30;
  v91 = a24;
  v89 = a23;
  v87 = a22;
  v85 = a21;
  v83 = a20;
  v81 = a19;
  v79 = a18;
  v77 = a17;
  v75 = a16;
  v73 = a15;
  v93 = v28;
  v95 = 0;
  v92 = 4LL;
  v31 = *a14;
  v90 = 4LL;
  v88 = 4LL;
  v86 = 4LL;
  v84 = 8LL;
  v82 = 8LL;
  v80 = 8LL;
  v78 = 8LL;
  v76 = 8LL;
  v74 = 8LL;
  if ( v31 )
  {
    v32 = -1LL;
    do
      ++v32;
    while ( v31[v32] );
    v33 = v32 + 1;
  }
  else
  {
    v31 = &unk_180139BFA;
    v33 = 1;
  }
  v71 = v33;
  v70 = v31;
  v72 = 0;
  v34 = *a13;
  if ( *a13 )
  {
    v35 = -1LL;
    do
      ++v35;
    while ( v34[v35] );
    v36 = v35 + 1;
  }
  else
  {
    v34 = &unk_180139BFA;
    v36 = 1;
  }
  v68 = v36;
  v65 = a12;
  v67 = v34;
  v69 = 0;
  v66 = 4LL;
  v37 = *a11;
  if ( *a11 )
  {
    v38 = -1LL;
    do
      ++v38;
    while ( v37[v38] );
    v39 = v38 + 1;
  }
  else
  {
    v37 = &unk_180139BFA;
    v39 = 1;
  }
  v63 = v39;
  v62 = v37;
  v64 = 0;
  v40 = *a10;
  if ( *a10 )
  {
    v41 = -1LL;
    do
      ++v41;
    while ( v40[v41] );
    v42 = v41 + 1;
  }
  else
  {
    v40 = &unk_180139BFA;
    v42 = 1;
  }
  v60 = v42;
  v59 = v40;
  v61 = 0;
  v58 = 16LL;
  v57 = *a9;
  v56 = 16LL;
  v54 = 16LL;
  v55 = *a8;
  v52 = 4LL;
  v43 = *a7;
  v51 = a6;
  v53 = v43;
  v44 = *a5;
  if ( *a5 )
  {
    do
      ++v27;
    while ( v44[v27] );
    v45 = v27 + 1;
  }
  else
  {
    v44 = &unk_180139BFA;
    v45 = 1;
  }
  v48 = v44;
  v49 = v45;
  v50 = 0;
  return sub_180002A58(a1, a2, a3, a4, 0x17u, &v47);
}
