/*
 * XREFs of sub_18001AF08 @ 0x18001AF08
 * Callers:
 *     sub_18000F0C0 @ 0x18000F0C0 (sub_18000F0C0.c)
 * Callees:
 *     sub_18000DC98 @ 0x18000DC98 (sub_18000DC98.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180016ADC @ 0x180016ADC (sub_180016ADC.c)
 *     sub_18001703C @ 0x18001703C (sub_18001703C.c)
 *     sub_180017524 @ 0x180017524 (sub_180017524.c)
 *     sub_18001792C @ 0x18001792C (sub_18001792C.c)
 *     sub_1800615B4 @ 0x1800615B4 (sub_1800615B4.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 *     sub_180073BBC @ 0x180073BBC (sub_180073BBC.c)
 *     sub_1800752B4 @ 0x1800752B4 (sub_1800752B4.c)
 *     sub_1800753CC @ 0x1800753CC (sub_1800753CC.c)
 *     sub_1800AF398 @ 0x1800AF398 (sub_1800AF398.c)
 *     sub_1800B018C @ 0x1800B018C (sub_1800B018C.c)
 *     sub_1800B01E4 @ 0x1800B01E4 (sub_1800B01E4.c)
 *     sub_18010EF88 @ 0x18010EF88 (sub_18010EF88.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_18001AF08(_QWORD *a1, _QWORD **a2)
{
  __int64 (__fastcall **v4)(_QWORD, void *, __int64 *); // rbx
  __int64 *v5; // rax
  signed int v6; // eax
  unsigned int v7; // edi
  signed int v8; // eax
  int v9; // edx
  _QWORD *v10; // rbx
  __int64 (__fastcall **v11)(_QWORD, void *, __int64 *); // rdi
  __int64 *v12; // rax
  __int64 v13; // r15
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // r15
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // ecx
  _QWORD *v24; // rax
  __int64 *v25; // rax
  __int64 v26; // rdx
  void (__fastcall ***v27)(_QWORD, __int64); // rcx
  __int64 v28; // rbx
  __int64 v29; // r8
  __int64 v30; // r8
  __int64 v31; // r8
  __int64 v32; // r8
  __int64 v33; // r8
  __int64 v34; // r8
  __int64 v35; // r8
  __int64 v36; // r8
  __int64 v37; // r8
  __int64 v38; // r8
  __int64 v39; // r8
  __int64 v40; // r8
  __int64 v41; // r8
  __int64 v42; // r8
  __int64 v43; // r8
  __int64 v44; // r8
  __int64 v45; // r8
  __int64 v46; // r8
  __int64 v47; // r8
  __int64 v48; // r8
  __int64 v49; // r8
  __int64 v50; // r8
  __int64 v51; // r8
  __int64 v52; // r8
  __int64 v53; // r8
  __int64 v54; // r8
  __int64 v55; // r8
  __int64 v56; // r8
  __int64 v57; // r8
  __int64 v58; // r8
  __int64 v59; // r8
  __int64 v60; // r8
  __int64 v61; // r8
  __int64 v62; // r8
  __int64 v63; // r8
  __int64 v64; // r8
  __int64 v65; // r8
  __int64 v66; // r8
  __int64 v67; // r8
  __int64 v68; // r8
  __int64 v69; // r8
  __int64 v70; // r8
  __int64 v71; // r8
  __int64 v72; // r8
  __int64 v73; // r8
  __int64 v74; // r8
  __int64 v75; // r8
  __int64 v76; // r8
  __int64 v77; // r8
  __int64 v78; // r8
  __int64 v79; // r8
  __int64 v80; // r8
  __int64 v81; // r8
  __int64 v82; // r8
  __int64 v83; // r8
  __int64 v84; // r8
  __int64 v85; // r8
  __int64 v86; // r8
  __int64 v87; // r8
  __int64 v88; // r8
  __int64 v89; // r8
  __int64 v90; // r8
  __int64 v91; // r8
  __int64 v92; // r8
  __int64 v93; // r8
  __int64 v94; // r8
  __int64 v95; // r8
  __int64 v96; // r8
  __int64 v97; // r8
  __int64 v98; // r8
  __int64 v99; // r8
  __int64 v100; // r8
  __int64 v101; // r8
  __int64 v102; // r8
  __int64 v103; // r8
  __int64 v104; // r8
  __int64 v105; // r8
  __int64 v106; // r8
  __int64 v107; // r8
  __int64 v108; // r8
  __int64 v109; // r8
  __int64 v110; // r8
  __int64 v111; // r8
  __int64 v112; // r8
  __int64 v113; // r8
  __int64 v114; // r8
  __int64 v115; // r8
  __int64 v116; // r8
  __int64 v117; // r8
  __int64 v118; // r8
  __int64 v119; // r8
  __int64 v120; // r8
  __int64 v121; // r8
  __int64 v122; // r8
  __int64 v123; // r8
  __int64 v124; // r8
  __int64 v125; // r8
  __int64 *v126; // rax
  _QWORD *v127; // r15
  __int64 v128; // rdx
  volatile signed __int32 *v129; // rbx
  __int64 v130; // rbx
  __int64 *v131; // rax
  _QWORD *v132; // rdi
  volatile signed __int32 *v133; // rbx
  __int64 v134; // rcx
  volatile signed __int32 *v135; // rbx
  volatile signed __int32 *v136; // rbx
  volatile signed __int32 *v137; // rbx
  void (__fastcall ***v138)(_QWORD, __int64); // [rsp+58h] [rbp-B0h] BYREF
  __int128 v139; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v140; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v141; // [rsp+80h] [rbp-88h] BYREF
  volatile signed __int32 *v142; // [rsp+88h] [rbp-80h]
  __int128 v143; // [rsp+90h] [rbp-78h]
  __int128 v144; // [rsp+A8h] [rbp-60h] BYREF
  __int64 (__fastcall ***v145)(_QWORD, _QWORD, _QWORD); // [rsp+B8h] [rbp-50h]
  __int64 v146; // [rsp+C0h] [rbp-48h]
  int v147; // [rsp+C8h] [rbp-40h]
  int v148; // [rsp+CCh] [rbp-3Ch]
  int v149; // [rsp+D0h] [rbp-38h]
  __int16 v150; // [rsp+D4h] [rbp-34h]
  __int64 v151; // [rsp+D8h] [rbp-30h]
  __int64 v152; // [rsp+E0h] [rbp-28h]
  int v153; // [rsp+E8h] [rbp-20h]
  int v154; // [rsp+ECh] [rbp-1Ch]
  int v155; // [rsp+F0h] [rbp-18h]
  int v156; // [rsp+F4h] [rbp-14h]
  __int64 v157; // [rsp+F8h] [rbp-10h]
  int v158; // [rsp+100h] [rbp-8h]
  char v159; // [rsp+104h] [rbp-4h]
  __int128 v160; // [rsp+108h] [rbp+0h] BYREF
  __int64 v161; // [rsp+118h] [rbp+10h] BYREF
  volatile signed __int32 *v162; // [rsp+120h] [rbp+18h]
  _BYTE v163[16]; // [rsp+128h] [rbp+20h] BYREF
  __int64 v164; // [rsp+138h] [rbp+30h] BYREF
  volatile signed __int32 *v165; // [rsp+140h] [rbp+38h]
  _OWORD v166[2]; // [rsp+148h] [rbp+40h] BYREF
  __int64 v167; // [rsp+168h] [rbp+60h] BYREF
  __int64 v168; // [rsp+170h] [rbp+68h] BYREF
  int v169; // [rsp+178h] [rbp+70h] BYREF
  __int128 v170; // [rsp+180h] [rbp+78h] BYREF
  __int128 v171; // [rsp+190h] [rbp+88h] BYREF
  __int128 v172; // [rsp+1A0h] [rbp+98h] BYREF
  _BYTE v173[296]; // [rsp+1B8h] [rbp+B0h] BYREF
  __int64 v174; // [rsp+2E0h] [rbp+1D8h]
  __int64 retaddr; // [rsp+360h] [rbp+258h]

  v168 = 0LL;
  v4 = (__int64 (__fastcall **)(_QWORD, void *, __int64 *))**a2;
  v5 = sub_18001792C(&v168);
  v6 = (*v4)(*a2, &unk_18013AE68, v5);
  v7 = v6;
  if ( v6 < 0 )
  {
    sub_18000DC98(retaddr, 46, (__int64)"SpectreRenderer.cpp", v6);
LABEL_17:
    v19 = v168;
    if ( v168 )
    {
      v168 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    return v7;
  }
  v167 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v168 + 56LL))(v168, &v167);
  v7 = v8;
  if ( v8 < 0 )
  {
    v9 = 49;
    goto LABEL_15;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v167 + 64LL))(v167, v173);
  v7 = v8;
  if ( v8 < 0 )
  {
    v9 = 52;
    goto LABEL_15;
  }
  a1[3] = v174;
  v10 = a1 + 4;
  v11 = (__int64 (__fastcall **)(_QWORD, void *, __int64 *))**a2;
  v12 = sub_18001792C(a1 + 4);
  v8 = (*v11)(*a2, &unk_18013AE78, v12);
  v7 = v8;
  if ( v8 < 0 )
  {
    v9 = 56;
    goto LABEL_15;
  }
  v13 = *v10;
  v14 = a1[5];
  if ( v14 )
  {
    a1[5] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v13 + 344LL))(v13, a1 + 5);
  v15 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v10 + 304LL))(*v10) & 1;
  v169 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v10 + 296LL))(*v10);
  v16 = *v10;
  v17 = a1[6];
  if ( v17 )
  {
    a1[6] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *, __int64, int, void *, _QWORD, _QWORD *))(*(_QWORD *)v16 + 376LL))(
         v16,
         (unsigned int)v15,
         &v169,
         1LL,
         7,
         &unk_18013AE78,
         0LL,
         a1 + 6);
  v7 = v8;
  if ( v8 < 0 )
  {
    v9 = 69;
LABEL_15:
    sub_18000DC98(retaddr, v9, (__int64)"SpectreRenderer.cpp", v8);
    v18 = v167;
    if ( v167 )
    {
      v167 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    goto LABEL_17;
  }
  v21 = v167;
  if ( v167 )
  {
    v167 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  v22 = v168;
  if ( v168 )
  {
    v168 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  if ( *((_DWORD *)a2 + 6) >= 4u )
    v23 = 1;
  else
    v23 = dword_18013AE88[*((unsigned int *)a2 + 6)];
  v151 = 0LL;
  v152 = 0LL;
  v155 = 0;
  v156 = 1;
  v157 = 1LL;
  v158 = 0;
  v159 = 1;
  v144 = 0x100000004uLL;
  v145 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))*a2;
  v146 = 0LL;
  v147 = 1;
  v148 = v23;
  v149 = 0;
  v150 = 0;
  v153 = 37120;
  v154 = 49408;
  v24 = (_QWORD *)sub_18010EF88(v163);
  v160 = 0LL;
  v25 = sub_180016ADC((__int64 *)&v138, &v144, &v160, v24);
  v26 = *v25;
  *v25 = 0LL;
  v27 = (void (__fastcall ***)(_QWORD, __int64))a1[7];
  a1[7] = v26;
  if ( v27 )
    (**v27)(v27, 1LL);
  if ( v138 )
    (**v138)(v138, 1LL);
  v172 = 0LL;
  sub_1800615B4(a1[7] + 8LL, &v172);
  v28 = sub_1800752B4(a1[7], 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v28 + 144LL))(v28, &unk_180208D90, 0LL, 1LL);
  if ( *((_BYTE *)a2 + 30) )
    (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 152LL))(v28, &unk_180208870, 1LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v28 + 144LL))(v28, &unk_18020A0F0, 0LL, 1LL);
  LOBYTE(v29) = *((_BYTE *)a2 + 28);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 144LL))(v28, &unk_18020A070, v29, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_18020A1D0, v30, 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v28 + 152LL))(v28, &unk_18020ADB0, 0LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_18020AD90, v31, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_18020AE10, v32, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_18020AE50, v33, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_18020ADF0, v34, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_18020ADD0, v35, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_18020AE30, v36, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_18020AD30, v37, 1LL);
  LOBYTE(v38) = 1;
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 144LL))(v28, &unk_18020AD50, v38, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_18020ACB0, v39, 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v28 + 152LL))(v28, &unk_18020AFB0, 0LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_18020ACF0, v40, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_18020AF10, v41, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_18020AD10, v42, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_18020ACD0, v43, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_18020AE70, v44, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_18020AEB0, v45, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_18020AE90, v46, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_18020AF90, v47, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_18020AF70, v48, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_18020ABD0, v49, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_18020ABF0, v50, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_18020AC10, v51, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_18020AC90, v52, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_18020AC30, v53, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_18020AC50, v54, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_18020AC70, v55, 1LL);
  LOBYTE(v56) = *((_BYTE *)a2 + 28);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 144LL))(v28, &unk_18020AD70, v56, 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v28 + 144LL))(v28, &unk_18020AF30, 0LL, 1LL);
  LOBYTE(v57) = 1;
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 144LL))(v28, &unk_180209D70, v57, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_180209D90, v58, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_180209DB0, v59, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_180209E90, v60, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_180209E70, v61, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_180209E50, v62, 1LL);
  LOBYTE(v63) = 1;
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 144LL))(v28, &unk_180209E10, v63, 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v28 + 152LL))(v28, &unk_180209F10, 0LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_180209E30, v64, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_180209EB0, v65, 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v28 + 152LL))(v28, &unk_1802094B0, 0LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v28 + 144LL))(v28, &unk_180209350, 0LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_180209290, v66, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_180209270, v67, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_180209250, v68, 1LL);
  LOBYTE(v69) = 1;
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 144LL))(v28, &unk_180209170, v69, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_180209450, v70, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_1802092B0, v71, 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v28 + 152LL))(v28, &unk_1802092D0, 0LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_180209190, v72, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_1802091B0, v73, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_1802091D0, v74, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_180209310, v75, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_180209390, v76, 1LL);
  LOBYTE(v77) = *((_BYTE *)a2 + 31);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 144LL))(v28, &unk_180209370, v77, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_180209410, v78, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_1802093D0, v79, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_1802093B0, v80, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_1802093F0, v81, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_180209330, v82, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_1802091F0, v83, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_180209210, v84, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_180209230, v85, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 152LL))(v28, &unk_1802092F0, 2LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v28 + 152LL))(v28, &unk_180209870, 0LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v28 + 144LL))(v28, &unk_180209710, 0LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_180209650, v86, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_180209630, v87, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_180209610, v88, 1LL);
  LOBYTE(v89) = 1;
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 144LL))(v28, &unk_180209530, v89, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_180209810, v90, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_180209670, v91, 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v28 + 152LL))(v28, &unk_180209690, 0LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_180209550, v92, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_180209570, v93, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_180209590, v94, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_1802096D0, v95, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_180209750, v96, 1LL);
  LOBYTE(v97) = *((_BYTE *)a2 + 31);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 144LL))(v28, &unk_180209730, v97, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_1802097D0, v98, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_180209790, v99, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_180209770, v100, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_1802097B0, v101, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_1802096F0, v102, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_1802095B0, v103, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_1802095D0, v104, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_1802095F0, v105, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 152LL))(v28, &unk_1802096B0, 2LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v28 + 152LL))(v28, &unk_180209C30, 0LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v28 + 144LL))(v28, &unk_180209AD0, 0LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_180209A10, v106, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_1802099F0, v107, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_1802099D0, v108, 1LL);
  LOBYTE(v109) = 1;
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 144LL))(v28, &unk_1802098F0, v109, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_180209BD0, v110, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_180209A30, v111, 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v28 + 152LL))(v28, &unk_180209A50, 0LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_180209910, v112, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_180209930, v113, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_180209950, v114, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_180209A90, v115, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_180209B10, v116, 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v28 + 144LL))(v28, &unk_180209AF0, 0LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_180209B90, v117, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_180209B50, v118, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_180209B30, v119, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_180209B70, v120, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_180209AB0, v121, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_180209970, v122, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_180209990, v123, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 168LL))(v28, &unk_1802099B0, v124, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 152LL))(v28, &unk_180209A70, 2LL, 1LL);
  LOBYTE(v125) = 1;
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v28 + 144LL))(v28, &unk_180209D50, v125, 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v28 + 144LL))(v28, &unk_180209050, 0LL, 1LL);
  v170 = 0LL;
  sub_1800753CC(a1[7], &v170, 1LL);
  v171 = 0LL;
  sub_1800615B4(v170 + 24, &v171);
  v142 = 0LL;
  *(_QWORD *)&v143 = 0LL;
  DWORD2(v143) = 0;
  LODWORD(v141) = 3;
  v139 = 0LL;
  v166[0] = v141;
  v166[1] = v143;
  v126 = sub_18001703C(
           (_QWORD *)v170,
           &v164,
           (__int64)v166,
           (int)&v170,
           (__int64)&v139,
           (__int64)(a2 + 1),
           (__int64)a2 + 12,
           (__int64)(a2 + 2),
           (__int64)a2 + 20);
  v127 = a1 + 10;
  std::shared_ptr<__ExceptionPtr>::operator=(a1 + 10, v126);
  v129 = v165;
  if ( v165 )
  {
    if ( _InterlockedExchangeAdd(v165 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v129)(v129);
      if ( _InterlockedExchangeAdd(v129 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v129 + 8LL))(v129);
    }
  }
  if ( *((_QWORD *)&v139 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v139 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v130 = *((_QWORD *)&v139 + 1);
      (***((void (__fastcall ****)(_QWORD))&v139 + 1))(*((_QWORD *)&v139 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v130 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v139 + 1) + 8LL))(*((_QWORD *)&v139 + 1));
    }
  }
  LOBYTE(v128) = *((_BYTE *)a2 + 29);
  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v127 + 272LL))(*v127, v128);
  v131 = (__int64 *)sub_180073BBC(a1[7], &v141, 1LL, 1LL);
  v132 = a1 + 8;
  std::shared_ptr<__ExceptionPtr>::operator=(a1 + 8, v131);
  v133 = v142;
  if ( v142 )
  {
    if ( _InterlockedExchangeAdd(v142 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v133)(v133);
      if ( _InterlockedExchangeAdd(v133 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v133 + 8LL))(v133);
    }
  }
  v140 = 0LL;
  v134 = a1[11];
  if ( v134 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v134 + 8), 1u);
    v134 = a1[11];
  }
  *(_QWORD *)&v140 = *v127;
  *((_QWORD *)&v140 + 1) = v134;
  sub_1800AF398(*v132, &v140);
  v135 = (volatile signed __int32 *)*((_QWORD *)&v140 + 1);
  if ( *((_QWORD *)&v140 + 1) )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v140 + 1) + 8LL)) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v135)(v135);
      if ( !_InterlockedDecrement(v135 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v135 + 8LL))(v135);
    }
  }
  sub_1800B018C(*v132, 0LL);
  sub_1800B01E4(*v132, 0LL);
  if ( BYTE8(v171) )
    sub_180061A34(v171);
  v136 = (volatile signed __int32 *)*((_QWORD *)&v170 + 1);
  if ( *((_QWORD *)&v170 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v170 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v136)(v136);
      if ( _InterlockedExchangeAdd(v136 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v136 + 8LL))(v136);
    }
  }
  sub_180017524((_QWORD *)a1[7], &v161, 1u);
  std::shared_ptr<__ExceptionPtr>::operator=(a1 + 12, &v161);
  v137 = v162;
  if ( v162 )
  {
    if ( _InterlockedExchangeAdd(v162 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v137)(v137);
      if ( _InterlockedExchangeAdd(v137 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v137 + 8LL))(v137);
    }
  }
  qword_180218710 = (__int64)a1;
  if ( BYTE8(v172) )
    sub_180061A34(v172);
  return 0LL;
}
