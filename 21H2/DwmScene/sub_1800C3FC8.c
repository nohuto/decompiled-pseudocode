/*
 * XREFs of sub_1800C3FC8 @ 0x1800C3FC8
 * Callers:
 *     sub_1800C3600 @ 0x1800C3600 (sub_1800C3600.c)
 * Callees:
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     sub_18007A810 @ 0x18007A810 (sub_18007A810.c)
 *     sub_18007AB84 @ 0x18007AB84 (sub_18007AB84.c)
 *     sub_18007B2B4 @ 0x18007B2B4 (sub_18007B2B4.c)
 *     sub_18008933C @ 0x18008933C (sub_18008933C.c)
 *     sub_1800922F4 @ 0x1800922F4 (sub_1800922F4.c)
 *     sub_180092714 @ 0x180092714 (sub_180092714.c)
 *     sub_18009272C @ 0x18009272C (sub_18009272C.c)
 *     sub_180092AA8 @ 0x180092AA8 (sub_180092AA8.c)
 *     sub_180092AE0 @ 0x180092AE0 (sub_180092AE0.c)
 *     sub_180092E1C @ 0x180092E1C (sub_180092E1C.c)
 *     sub_1800A656C @ 0x1800A656C (sub_1800A656C.c)
 *     sub_1800B26D8 @ 0x1800B26D8 (sub_1800B26D8.c)
 *     sub_1800BB82C @ 0x1800BB82C (sub_1800BB82C.c)
 *     sub_1800C265C @ 0x1800C265C (sub_1800C265C.c)
 *     sub_1800C72A0 @ 0x1800C72A0 (sub_1800C72A0.c)
 *     sub_1800C73C8 @ 0x1800C73C8 (sub_1800C73C8.c)
 *     sub_1800C7408 @ 0x1800C7408 (sub_1800C7408.c)
 *     sub_1800EA1B0 @ 0x1800EA1B0 (sub_1800EA1B0.c)
 *     sub_1800F5908 @ 0x1800F5908 (sub_1800F5908.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_1800C3FC8(__int64 a1, __int64 *a2, char a3, float a4)
{
  __int64 v7; // rax
  _QWORD *v8; // r15
  __int64 v9; // rbx
  __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r14
  __int64 result; // rax
  double v15; // xmm0_8
  int v16; // xmm8_4
  double v17; // xmm0_8
  int v18; // xmm7_4
  double v19; // xmm0_8
  int v20; // xmm6_4
  double v21; // xmm0_8
  double v22; // xmm0_8
  int v23; // xmm8_4
  double v24; // xmm0_8
  int v25; // xmm7_4
  double v26; // xmm0_8
  int v27; // xmm6_4
  double v28; // xmm0_8
  double v29; // xmm0_8
  int v30; // xmm8_4
  double v31; // xmm0_8
  int v32; // xmm7_4
  double v33; // xmm0_8
  int v34; // xmm6_4
  double v35; // xmm0_8
  double v36; // xmm0_8
  int v37; // xmm8_4
  double v38; // xmm0_8
  int v39; // xmm7_4
  double v40; // xmm0_8
  int v41; // xmm6_4
  int v42; // edx
  int v43; // ecx
  int v44; // r8d
  __int64 v45; // rcx
  __int64 v46; // rbx
  char v47; // al
  int v48; // r8d
  int v49; // edx
  __int64 v50; // rcx
  __int64 *v51; // rbx
  __int64 v52; // rcx
  _QWORD *v53; // rdi
  int v54; // esi
  __int64 v55; // rbx
  int v56; // xmm15_4
  int v57; // xmm14_4
  double v58; // xmm0_8
  int v59; // xmm13_4
  double v60; // xmm0_8
  int v61; // xmm12_4
  double v62; // xmm0_8
  int v63; // xmm11_4
  double v64; // xmm0_8
  int v65; // xmm10_4
  double v66; // xmm0_8
  int v67; // xmm9_4
  double v68; // xmm0_8
  int v69; // xmm8_4
  int v70; // edx
  int v71; // r8d
  int v72; // r9d
  volatile signed __int32 *v73; // rbx
  volatile signed __int32 *v74; // rbx
  double v75; // xmm0_8
  float X; // xmm8_4
  double v77; // xmm0_8
  float v78; // xmm7_4
  double v79; // xmm0_8
  float v80; // xmm6_4
  double v81; // xmm0_8
  double v82; // xmm0_8
  float v83; // xmm8_4
  double v84; // xmm0_8
  float v85; // xmm7_4
  double v86; // xmm0_8
  float v87; // xmm6_4
  double v88; // xmm0_8
  double v89; // xmm0_8
  float v90; // xmm8_4
  double v91; // xmm0_8
  float v92; // xmm7_4
  double v93; // xmm0_8
  float v94; // xmm6_4
  double v95; // xmm0_8
  double v96; // xmm0_8
  float v97; // xmm7_4
  double v98; // xmm0_8
  float v99; // xmm6_4
  double v100; // xmm0_8
  __int64 v101; // r8
  char v102; // bl
  volatile signed __int32 *v103; // rbx
  volatile signed __int32 *v104; // rbx
  __int128 v105; // [rsp+A8h] [rbp-80h] BYREF
  int v106; // [rsp+B8h] [rbp-70h]
  int v107; // [rsp+BCh] [rbp-6Ch]
  int v108; // [rsp+C0h] [rbp-68h]
  float v109; // [rsp+C4h] [rbp-64h]
  __int128 v110; // [rsp+C8h] [rbp-60h] BYREF
  __int128 *v111; // [rsp+D8h] [rbp-50h]
  __int128 v112; // [rsp+E8h] [rbp-40h] BYREF
  size_t v113[4]; // [rsp+F8h] [rbp-30h] BYREF
  __int64 v114; // [rsp+118h] [rbp-10h] BYREF
  volatile signed __int32 *v115; // [rsp+120h] [rbp-8h]
  __int64 v116; // [rsp+128h] [rbp+0h] BYREF
  volatile signed __int32 *v117; // [rsp+130h] [rbp+8h]
  __m128 v118; // [rsp+138h] [rbp+10h] BYREF
  __m128 v119; // [rsp+148h] [rbp+20h] BYREF
  __m128 v120; // [rsp+158h] [rbp+30h] BYREF
  __m128 v121; // [rsp+168h] [rbp+40h] BYREF
  __m128 v122; // [rsp+178h] [rbp+50h] BYREF
  __m128 v123; // [rsp+188h] [rbp+60h] BYREF
  __m128 v124; // [rsp+198h] [rbp+70h] BYREF
  __m128 v125; // [rsp+1A8h] [rbp+80h] BYREF
  __int128 v126; // [rsp+1B8h] [rbp+90h] BYREF
  int v127; // [rsp+1C8h] [rbp+A0h]
  int v128; // [rsp+1CCh] [rbp+A4h]
  int v129; // [rsp+1D0h] [rbp+A8h]
  int v130; // [rsp+1D4h] [rbp+ACh]
  int v131; // [rsp+1D8h] [rbp+B0h]
  int v132; // [rsp+1DCh] [rbp+B4h]
  int v133; // [rsp+1E0h] [rbp+B8h]
  int v134; // [rsp+1E4h] [rbp+BCh]
  int v135; // [rsp+1E8h] [rbp+C0h]
  int v136; // [rsp+1ECh] [rbp+C4h]
  int v137; // [rsp+1F0h] [rbp+C8h]
  int v138; // [rsp+1F4h] [rbp+CCh]
  int v139; // [rsp+1F8h] [rbp+D0h]
  int v140; // [rsp+1FCh] [rbp+D4h]
  int v141; // [rsp+200h] [rbp+D8h]
  int v142; // [rsp+204h] [rbp+DCh]
  __int128 v143; // [rsp+208h] [rbp+E0h] BYREF
  __int128 v144; // [rsp+218h] [rbp+F0h] BYREF
  __int128 v145; // [rsp+228h] [rbp+100h] BYREF

  v7 = sub_1800BB82C(*a2, (__int64)a2);
  v8 = (_QWORD *)v7;
  v9 = *(_QWORD *)(v7 + 200);
  if ( v9 )
  {
    sub_18008933C(*(_QWORD *)(v7 + 200));
    v10 = *(_QWORD *)(v9 + 448);
    if ( a3 )
      v11 = v10 | 2;
    else
      v11 = v10 & 0xFFFFFFFFFFFFFFFDuLL;
    *(_QWORD *)(v9 + 448) = v11;
  }
  v12 = v8[27];
  if ( v12 )
  {
    v106 = 1065353216;
    v107 = 1065353216;
    v108 = 1065353216;
    v109 = a4;
    sub_180092714(v12);
  }
  v13 = sub_18007AB84(a1, *(_DWORD *)(*a2 + 112));
  result = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v13 + 64LL))(v13, &unk_180211828, 0LL);
  if ( (_BYTE)result )
  {
    if ( v8[39] )
    {
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v13 + 88LL))(v13, &unk_1802115A8);
      sub_180092AA8(v8[39]);
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v13 + 88LL))(v13, &unk_180211648);
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v13 + 88LL))(v13, &unk_1802116E8);
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v13 + 88LL))(v13, &unk_180211788);
      v15 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v13 + 88LL))(v13, &unk_1802115C8);
      v16 = LODWORD(v15);
      v17 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v13 + 88LL))(v13, &unk_1802115E8);
      v18 = LODWORD(v17);
      v19 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v13 + 88LL))(v13, &unk_180211608);
      v20 = LODWORD(v19);
      v21 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v13 + 88LL))(v13, &unk_180211628);
      v127 = v16;
      v128 = v18;
      v129 = v20;
      v130 = LODWORD(v21);
      v22 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v13 + 88LL))(v13, &unk_180211668);
      v23 = LODWORD(v22);
      v24 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v13 + 88LL))(v13, &unk_180211688);
      v25 = LODWORD(v24);
      v26 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v13 + 88LL))(v13, &unk_1802116A8);
      v27 = LODWORD(v26);
      v28 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v13 + 88LL))(v13, &unk_1802116C8);
      v131 = v23;
      v132 = v25;
      v133 = v27;
      v134 = LODWORD(v28);
      v29 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v13 + 88LL))(v13, &unk_180211708);
      v30 = LODWORD(v29);
      v31 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v13 + 88LL))(v13, &unk_180211728);
      v32 = LODWORD(v31);
      v33 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v13 + 88LL))(v13, &unk_180211748);
      v34 = LODWORD(v33);
      v35 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v13 + 88LL))(v13, &unk_180211768);
      v135 = v30;
      v136 = v32;
      v137 = v34;
      v138 = LODWORD(v35);
      v36 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v13 + 88LL))(v13, &unk_1802117A8);
      v37 = LODWORD(v36);
      v38 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v13 + 88LL))(v13, &unk_1802117C8);
      v39 = LODWORD(v38);
      v40 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v13 + 88LL))(v13, &unk_1802117E8);
      v41 = LODWORD(v40);
      *(float *)&v40 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v13 + 88LL))(v13, &unk_180211808);
      v139 = v37;
      v140 = v39;
      v141 = v41;
      v142 = LODWORD(v40);
      v144 = 0LL;
      v145 = 0LL;
      sub_1800EA1B0(v43, v42, v44, (unsigned int)&v144, (__int64)&v145);
      sub_180092E1C(v8[39]);
      sub_180092E1C(v8[39]);
      sub_180092714(v8[39]);
      sub_180092714(v8[39]);
      sub_180092714(v8[39]);
      result = sub_180092714(v8[39]);
    }
    v45 = v8[37];
    if ( v45 )
    {
      sub_180092AE0(v45, (__int64)&qword_180213D58, v8 + 33);
      v46 = sub_18007B2B4(a1);
      v143 = 0LL;
      v113[2] = 0LL;
      v113[3] = 0LL;
      sub_180020B7C(v113, (__int64)&qword_180213C58);
      sub_1800A656C(v46, &v143, v113);
      v126 = 0LL;
      sub_1800922F4(v8[37], &v126);
      (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v13 + 64LL))(v13, &unk_180211888, 0LL);
      LOBYTE(v46) = v47;
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v13 + 88LL))(v13, &unk_180211868);
      LOBYTE(v48) = v46;
      sub_1800C73C8(a1, v49, v48, (unsigned int)&v126, (__int64)&qword_180213D78);
      v111 = &v112;
      v112 = 0LL;
      if ( *((_QWORD *)&v143 + 1) )
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v143 + 1) + 8LL));
      v112 = v143;
      v105 = 0LL;
      v50 = a2[1];
      if ( v50 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v50 + 8));
        v50 = a2[1];
      }
      *(_QWORD *)&v105 = *a2;
      *((_QWORD *)&v105 + 1) = v50;
      v51 = sub_18007A810(a1, &v116, 0LL, &v105);
      v110 = 0LL;
      v52 = a2[1];
      if ( v52 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v52 + 8));
        v52 = a2[1];
      }
      *(_QWORD *)&v110 = *a2;
      *((_QWORD *)&v110 + 1) = v52;
      v53 = sub_18007A810(a1, &v114, 0LL, &v110);
      v54 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v13 + 72LL))(v13, &unk_1802119E8, 0LL);
      v55 = *v51;
      sub_1800B26D8(v55);
      v56 = *(_DWORD *)(v55 + 332);
      v57 = *(_DWORD *)(*v53 + 328LL);
      v58 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v13 + 88LL))(v13, &unk_1802119A8);
      v59 = LODWORD(v58);
      v60 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v13 + 88LL))(v13, &unk_180211988);
      v61 = LODWORD(v60);
      v62 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v13 + 88LL))(v13, &unk_180211968);
      v63 = LODWORD(v62);
      v64 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v13 + 88LL))(v13, &unk_180211948);
      v65 = LODWORD(v64);
      v66 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v13 + 88LL))(v13, &unk_180211928);
      v67 = LODWORD(v66);
      v68 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v13 + 88LL))(v13, &unk_180211908);
      v69 = LODWORD(v68);
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v13 + 88LL))(v13, &unk_1802118E8);
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v13 + 88LL))(v13, &unk_18020FBC8);
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v13 + 88LL))(v13, &unk_18020FBA8);
      sub_1800C7408(
        a1,
        v70,
        v71,
        v72,
        v69,
        v67,
        v65,
        v63,
        v61,
        v59,
        v57,
        v56,
        v54,
        (__int64)&v112,
        (__int64)&v126,
        (__int64)&qword_180213EB8,
        (__int64)&qword_180213ED8,
        (__int64)&qword_180213EF8,
        (__int64)&qword_180213F18);
      v73 = v115;
      if ( v115 )
      {
        if ( _InterlockedExchangeAdd(v115 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v73)(v73);
          if ( _InterlockedExchangeAdd(v73 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v73 + 8LL))(v73);
        }
      }
      v74 = v117;
      if ( v117 )
      {
        if ( _InterlockedExchangeAdd(v117 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v74)(v74);
          if ( _InterlockedExchangeAdd(v74 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v74 + 8LL))(v74);
        }
      }
      v75 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v13 + 88LL))(v13, &unk_180211BE8);
      X = *(float *)&v75;
      v77 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v13 + 88LL))(v13, &unk_180211B88);
      v78 = *(float *)&v77;
      v79 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v13 + 88LL))(v13, &unk_180211B08);
      v80 = *(float *)&v79;
      v81 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v13 + 88LL))(v13, &unk_180211A88);
      v118 = *sub_1800C265C(&v122, *(float *)&v81, v80, v78, X);
      v82 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v13 + 88LL))(v13, &unk_180211C08);
      v83 = *(float *)&v82;
      v84 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v13 + 88LL))(v13, &unk_180211BA8);
      v85 = *(float *)&v84;
      v86 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v13 + 88LL))(v13, &unk_180211B28);
      v87 = *(float *)&v86;
      v88 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v13 + 88LL))(v13, &unk_180211AA8);
      v119 = *sub_1800C265C(&v123, *(float *)&v88, v87, v85, v83);
      v89 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v13 + 88LL))(v13, &unk_180211C28);
      v90 = *(float *)&v89;
      v91 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v13 + 88LL))(v13, &unk_180211BC8);
      v92 = *(float *)&v91;
      v93 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v13 + 88LL))(v13, &unk_180211B48);
      v94 = *(float *)&v93;
      v95 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v13 + 88LL))(v13, &unk_180211AC8);
      v120 = *sub_1800C265C(&v124, *(float *)&v95, v94, v92, v90);
      v96 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v13 + 88LL))(v13, &unk_180211B68);
      v97 = *(float *)&v96;
      v98 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v13 + 88LL))(v13, &unk_180211AE8);
      v99 = *(float *)&v98;
      v100 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v13 + 88LL))(v13, &unk_180211A68);
      v121 = *sub_1800C265C(&v125, *(float *)&v100, v99, v97, 0.0);
      sub_1800C72A0(
        a1,
        (unsigned int)&v121,
        (unsigned int)&v120,
        (unsigned int)&v119,
        (__int64)&v118,
        (__int64)&v126,
        (__int64)&qword_180213F78,
        (__int64)&qword_180213F98,
        (__int64)&qword_180213FB8);
      (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v13 + 64LL))(v13, &unk_1802118A8, 0LL);
      sub_1800F5908(v126);
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v13 + 88LL))(v13, &unk_1802118C8);
      sub_1800F5908(v126);
      LOBYTE(v101) = 1;
      v102 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v13 + 64LL))(v13, &unk_180211848, v101);
      sub_18009272C(v8[37], (__int64)&qword_180213C78, v102);
      sub_18009272C(v8[37], (__int64)&qword_180213C98, v102);
      sub_18009272C(v8[37], (__int64)&qword_180213CB8, v102);
      result = sub_18009272C(v8[37], (__int64)aVignette, v102);
      v103 = (volatile signed __int32 *)*((_QWORD *)&v126 + 1);
      if ( *((_QWORD *)&v126 + 1) )
      {
        result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v126 + 1) + 8LL));
        if ( !(_DWORD)result )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v103)(v103);
          result = (unsigned int)_InterlockedDecrement(v103 + 3);
          if ( !(_DWORD)result )
            result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v103 + 8LL))(v103);
        }
      }
      v104 = (volatile signed __int32 *)*((_QWORD *)&v143 + 1);
      if ( *((_QWORD *)&v143 + 1) )
      {
        result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v143 + 1) + 8LL));
        if ( !(_DWORD)result )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v104)(v104);
          result = (unsigned int)_InterlockedDecrement(v104 + 3);
          if ( !(_DWORD)result )
            return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v104 + 8LL))(v104);
        }
      }
    }
  }
  return result;
}
