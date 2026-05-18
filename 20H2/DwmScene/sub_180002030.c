/*
 * XREFs of sub_180002030 @ 0x180002030
 * Callers:
 *     sub_180113CB0 @ 0x180113CB0 (sub_180113CB0.c)
 * Callees:
 *     sub_180002A58 @ 0x180002A58 (sub_180002A58.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180002030(
        int a1,
        int a2,
        int a3,
        int a4,
        void **a5,
        __int64 a6,
        __int64 *a7,
        __int64 *a8,
        __int64 a9,
        __int64 a10,
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
        void **a22,
        __int64 a23,
        __int64 a24,
        __int64 a25,
        __int64 a26,
        void **a27,
        __int64 a28,
        __int64 a29,
        __int64 a30,
        __int64 a31,
        __int64 a32,
        __int64 a33,
        __int64 a34)
{
  __int64 v36; // rdx
  _BYTE *v38; // rcx
  __int64 v39; // rax
  int v40; // eax
  _WORD *v41; // rcx
  __int64 v42; // rax
  int v43; // r8d
  __int64 v44; // rcx
  _BYTE *v45; // rcx
  int v46; // edx
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE *v49; // [rsp+50h] [rbp-B0h]
  int v50; // [rsp+58h] [rbp-A8h]
  int v51; // [rsp+5Ch] [rbp-A4h]
  __int64 v52; // [rsp+60h] [rbp-A0h]
  __int64 v53; // [rsp+68h] [rbp-98h]
  __int64 v54; // [rsp+70h] [rbp-90h]
  __int64 v55; // [rsp+78h] [rbp-88h]
  __int64 v56; // [rsp+80h] [rbp-80h]
  __int64 v57; // [rsp+88h] [rbp-78h]
  __int64 v58; // [rsp+90h] [rbp-70h]
  __int64 v59; // [rsp+98h] [rbp-68h]
  __int64 v60; // [rsp+A0h] [rbp-60h]
  __int64 v61; // [rsp+A8h] [rbp-58h]
  __int64 v62; // [rsp+B0h] [rbp-50h]
  __int64 v63; // [rsp+B8h] [rbp-48h]
  __int64 v64; // [rsp+C0h] [rbp-40h]
  __int64 v65; // [rsp+C8h] [rbp-38h]
  __int64 v66; // [rsp+D0h] [rbp-30h]
  __int64 v67; // [rsp+D8h] [rbp-28h]
  __int64 v68; // [rsp+E0h] [rbp-20h]
  __int64 v69; // [rsp+E8h] [rbp-18h]
  __int64 v70; // [rsp+F0h] [rbp-10h]
  __int64 v71; // [rsp+F8h] [rbp-8h]
  __int64 v72; // [rsp+100h] [rbp+0h]
  __int64 v73; // [rsp+108h] [rbp+8h]
  __int64 v74; // [rsp+110h] [rbp+10h]
  __int64 v75; // [rsp+118h] [rbp+18h]
  __int64 v76; // [rsp+120h] [rbp+20h]
  __int64 v77; // [rsp+128h] [rbp+28h]
  __int64 v78; // [rsp+130h] [rbp+30h]
  __int64 v79; // [rsp+138h] [rbp+38h]
  __int64 v80; // [rsp+140h] [rbp+40h]
  __int64 v81; // [rsp+148h] [rbp+48h]
  __int64 v82; // [rsp+150h] [rbp+50h]
  __int64 v83; // [rsp+158h] [rbp+58h]
  _WORD *v84; // [rsp+160h] [rbp+60h]
  int v85; // [rsp+168h] [rbp+68h]
  int v86; // [rsp+16Ch] [rbp+6Ch]
  __int64 v87; // [rsp+170h] [rbp+70h]
  __int64 v88; // [rsp+178h] [rbp+78h]
  __int64 v89; // [rsp+180h] [rbp+80h]
  __int64 v90; // [rsp+188h] [rbp+88h]
  __int64 v91; // [rsp+190h] [rbp+90h]
  __int64 v92; // [rsp+198h] [rbp+98h]
  __int64 v93; // [rsp+1A0h] [rbp+A0h]
  __int64 v94; // [rsp+1A8h] [rbp+A8h]
  _BYTE *v95; // [rsp+1B0h] [rbp+B0h]
  int v96; // [rsp+1B8h] [rbp+B8h]
  int v97; // [rsp+1BCh] [rbp+BCh]
  __int64 v98; // [rsp+1C0h] [rbp+C0h]
  __int64 v99; // [rsp+1C8h] [rbp+C8h]
  __int64 v100; // [rsp+1D0h] [rbp+D0h]
  __int64 v101; // [rsp+1D8h] [rbp+D8h]
  __int64 v102; // [rsp+1E0h] [rbp+E0h]
  __int64 v103; // [rsp+1E8h] [rbp+E8h]
  __int64 v104; // [rsp+1F0h] [rbp+F0h]
  __int64 v105; // [rsp+1F8h] [rbp+F8h]
  __int64 v106; // [rsp+200h] [rbp+100h]
  __int64 v107; // [rsp+208h] [rbp+108h]
  __int64 v108; // [rsp+210h] [rbp+110h]
  __int64 v109; // [rsp+218h] [rbp+118h]
  __int64 v110; // [rsp+220h] [rbp+120h]
  __int64 v111; // [rsp+228h] [rbp+128h]

  v110 = a34;
  v108 = a33;
  v36 = -1LL;
  v106 = a32;
  v104 = a31;
  v102 = a30;
  v100 = a29;
  v98 = a28;
  v111 = 4LL;
  v109 = 4LL;
  v107 = 4LL;
  v38 = *a27;
  v105 = 4LL;
  v103 = 4LL;
  v101 = 4LL;
  v99 = 4LL;
  if ( v38 )
  {
    v39 = -1LL;
    do
      ++v39;
    while ( v38[v39] );
    v40 = v39 + 1;
  }
  else
  {
    v38 = &unk_180139BFA;
    v40 = 1;
  }
  v96 = v40;
  v93 = a26;
  v91 = a25;
  v89 = a24;
  v87 = a23;
  v95 = v38;
  v97 = 0;
  v94 = 8LL;
  v41 = *a22;
  v92 = 4LL;
  v90 = 4LL;
  v88 = 8LL;
  if ( v41 )
  {
    v42 = -1LL;
    do
      ++v42;
    while ( v41[v42] );
    v43 = 2 * v42 + 2;
  }
  else
  {
    v41 = &unk_1801C5518;
    v43 = 2;
  }
  v82 = a21;
  v80 = a20;
  v78 = a19;
  v76 = a18;
  v74 = a17;
  v72 = a16;
  v70 = a15;
  v68 = a14;
  v66 = a13;
  v64 = a12;
  v62 = a11;
  v60 = a10;
  v58 = a9;
  v84 = v41;
  v85 = v43;
  v86 = 0;
  v56 = *a8;
  v83 = 8LL;
  v81 = 8LL;
  v44 = *a7;
  v52 = a6;
  v54 = v44;
  v79 = 8LL;
  v77 = 8LL;
  v45 = *a5;
  v75 = 8LL;
  v73 = 8LL;
  v71 = 4LL;
  v69 = 4LL;
  v67 = 4LL;
  v65 = 4LL;
  v63 = 4LL;
  v61 = 4LL;
  v59 = 4LL;
  v57 = 16LL;
  v55 = 16LL;
  v53 = 4LL;
  if ( v45 )
  {
    do
      ++v36;
    while ( v45[v36] );
    v46 = v36 + 1;
  }
  else
  {
    v45 = &unk_180139BFA;
    v46 = 1;
  }
  v49 = v45;
  v50 = v46;
  v51 = 0;
  return sub_180002A58(a1, a2, a3, a4, 0x20u, &v48);
}
