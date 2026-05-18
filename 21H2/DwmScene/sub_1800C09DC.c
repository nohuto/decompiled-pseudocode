/*
 * XREFs of sub_1800C09DC @ 0x1800C09DC
 * Callers:
 *     sub_1800BF010 @ 0x1800BF010 (sub_1800BF010.c)
 * Callees:
 *     unknown_libname_98 @ 0x18000F360 (unknown_libname_98.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180010020 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     unknown_libname_100 @ 0x180010C5C (unknown_libname_100.c)
 *     sub_180010D18 @ 0x180010D18 (sub_180010D18.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800114D8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_1800123D8 @ 0x1800123D8 (sub_1800123D8.c)
 *     sub_18001277C @ 0x18001277C (sub_18001277C.c)
 *     unknown_libname_103 @ 0x180012AB4 (unknown_libname_103.c)
 *     sub_180012F14 @ 0x180012F14 (sub_180012F14.c)
 *     sub_180025F94 @ 0x180025F94 (sub_180025F94.c)
 *     sub_18005A894 @ 0x18005A894 (sub_18005A894.c)
 *     sub_1800854DC @ 0x1800854DC (sub_1800854DC.c)
 *     sub_1800866A4 @ 0x1800866A4 (sub_1800866A4.c)
 *     sub_18008933C @ 0x18008933C (sub_18008933C.c)
 *     sub_18008BAC0 @ 0x18008BAC0 (sub_18008BAC0.c)
 *     sub_18008FF50 @ 0x18008FF50 (sub_18008FF50.c)
 *     sub_180091050 @ 0x180091050 (sub_180091050.c)
 *     sub_1800AD52C @ 0x1800AD52C (sub_1800AD52C.c)
 *     sub_1800B1F94 @ 0x1800B1F94 (sub_1800B1F94.c)
 *     sub_1800B9340 @ 0x1800B9340 (sub_1800B9340.c)
 *     sub_1800B9788 @ 0x1800B9788 (sub_1800B9788.c)
 *     sub_1800B99C8 @ 0x1800B99C8 (sub_1800B99C8.c)
 *     sub_1800B9C04 @ 0x1800B9C04 (sub_1800B9C04.c)
 *     sub_1800B9E40 @ 0x1800B9E40 (sub_1800B9E40.c)
 *     sub_1800BB82C @ 0x1800BB82C (sub_1800BB82C.c)
 *     sub_1800BCCC4 @ 0x1800BCCC4 (sub_1800BCCC4.c)
 *     sub_1801010B4 @ 0x1801010B4 (sub_1801010B4.c)
 *     sub_1801010EC @ 0x1801010EC (sub_1801010EC.c)
 *     sub_180105858 @ 0x180105858 (sub_180105858.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1801239AC (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=51
__int64 __fastcall sub_1800C09DC(__int64 a1, __int64 *a2)
{
  int v3; // r14d
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // r13
  __int64 *v16; // rdi
  __int64 v17; // r12
  __int64 *v18; // rax
  __int64 v19; // r15
  volatile signed __int32 *v20; // rbx
  __int64 *v21; // rax
  volatile signed __int32 *v22; // rbx
  __int64 *v23; // rax
  volatile signed __int32 *v24; // rbx
  const void **v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  const void **v30; // rax
  __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  const void **v33; // rax
  __int64 v34; // rcx
  unsigned __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 *v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  _DWORD *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rbx
  unsigned __int64 v48; // rdx
  __int64 v49; // rcx
  unsigned __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rbx
  __int64 v53; // rax
  __int64 v54; // rdi
  __int64 v55; // rcx
  signed __int32 v56; // eax
  signed __int32 v57; // eax
  _DWORD *v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rbx
  unsigned __int64 v61; // rdx
  __int64 v62; // rcx
  unsigned __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rbx
  __int64 v66; // rax
  __int64 v67; // rbx
  _DWORD *v68; // rax
  _QWORD *v69; // rdi
  __int64 v70; // rdx
  signed __int32 v71; // eax
  signed __int32 v72; // eax
  signed __int32 v73; // eax
  __int64 v74; // rdx
  signed __int32 v75; // eax
  __int64 *v76; // rdi
  __int64 v77; // rbx
  __int64 v78; // rax
  __int64 v79; // rbx
  __int64 v80; // rax
  __int64 v81; // rbx
  __int64 v82; // rax
  __int64 v83; // rbx
  __int64 v84; // rax
  __int64 *v85; // rax
  __int64 v87; // [rsp+28h] [rbp-E0h]
  __int64 v88; // [rsp+28h] [rbp-E0h]
  int v89; // [rsp+30h] [rbp-D8h]
  int v90; // [rsp+30h] [rbp-D8h]
  __int64 *v91; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v92; // [rsp+40h] [rbp-C8h] BYREF
  __int64 *v93; // [rsp+50h] [rbp-B8h]
  __int128 v94; // [rsp+58h] [rbp-B0h]
  __int128 v95; // [rsp+68h] [rbp-A0h]
  __int128 v96; // [rsp+78h] [rbp-90h]
  __int128 v97; // [rsp+88h] [rbp-80h]
  int v98; // [rsp+98h] [rbp-70h] BYREF
  int v99; // [rsp+9Ch] [rbp-6Ch] BYREF
  __int128 v100; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v101; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v102; // [rsp+C0h] [rbp-48h] BYREF
  __int128 v103; // [rsp+D0h] [rbp-38h] BYREF
  unsigned __int64 v104; // [rsp+E0h] [rbp-28h] BYREF
  int v105; // [rsp+E8h] [rbp-20h]
  unsigned __int64 v106; // [rsp+ECh] [rbp-1Ch] BYREF
  int v107; // [rsp+F4h] [rbp-14h]
  unsigned __int64 v108; // [rsp+F8h] [rbp-10h] BYREF
  int v109; // [rsp+100h] [rbp-8h]
  __int128 v110; // [rsp+108h] [rbp+0h] BYREF
  __int128 v111; // [rsp+118h] [rbp+10h] BYREF
  __int128 v112; // [rsp+128h] [rbp+20h] BYREF
  __int64 v113; // [rsp+138h] [rbp+30h] BYREF
  int v114; // [rsp+140h] [rbp+38h]
  __int64 v115; // [rsp+148h] [rbp+40h] BYREF
  int v116; // [rsp+150h] [rbp+48h]
  __int64 v117; // [rsp+158h] [rbp+50h] BYREF
  int v118; // [rsp+160h] [rbp+58h]
  __int64 v119; // [rsp+168h] [rbp+60h] BYREF
  int v120; // [rsp+170h] [rbp+68h]
  __int64 v121; // [rsp+178h] [rbp+70h] BYREF
  int v122; // [rsp+180h] [rbp+78h]
  __int64 v123; // [rsp+188h] [rbp+80h] BYREF
  int v124; // [rsp+190h] [rbp+88h]
  __int64 v125; // [rsp+198h] [rbp+90h] BYREF
  int v126; // [rsp+1A0h] [rbp+98h]
  __int64 v127[3]; // [rsp+1A8h] [rbp+A0h] BYREF
  unsigned __int64 v128; // [rsp+1C0h] [rbp+B8h]
  _QWORD v129[3]; // [rsp+1C8h] [rbp+C0h] BYREF
  unsigned __int64 v130; // [rsp+1E0h] [rbp+D8h]
  __int64 v131[3]; // [rsp+1E8h] [rbp+E0h] BYREF
  unsigned __int64 v132; // [rsp+200h] [rbp+F8h]
  _QWORD v133[3]; // [rsp+208h] [rbp+100h] BYREF
  unsigned __int64 v134; // [rsp+220h] [rbp+118h]
  _QWORD v135[3]; // [rsp+228h] [rbp+120h] BYREF
  unsigned __int64 v136; // [rsp+240h] [rbp+138h]
  __int64 v137[3]; // [rsp+248h] [rbp+140h] BYREF
  unsigned __int64 v138; // [rsp+260h] [rbp+158h]
  __int64 v139[3]; // [rsp+268h] [rbp+160h] BYREF
  unsigned __int64 v140; // [rsp+280h] [rbp+178h]
  __int64 v141[4]; // [rsp+288h] [rbp+180h] BYREF
  __int64 v142[2]; // [rsp+2A8h] [rbp+1A0h] BYREF
  __m128i si128; // [rsp+2B8h] [rbp+1B0h]
  __int64 v144[4]; // [rsp+2C8h] [rbp+1C0h] BYREF
  __int64 v145[4]; // [rsp+2E8h] [rbp+1E0h] BYREF
  __int64 v146[4]; // [rsp+308h] [rbp+200h] BYREF
  __int128 Src; // [rsp+328h] [rbp+220h] BYREF
  __int128 v148; // [rsp+338h] [rbp+230h]
  __int64 v149[4]; // [rsp+348h] [rbp+240h] BYREF
  __int64 v150[4]; // [rsp+368h] [rbp+260h] BYREF
  __int64 v151[2]; // [rsp+388h] [rbp+280h] BYREF
  __m128i v152; // [rsp+398h] [rbp+290h]
  __int64 v153[4]; // [rsp+3A8h] [rbp+2A0h] BYREF
  __int64 v154[2]; // [rsp+3C8h] [rbp+2C0h] BYREF
  __m128i v155; // [rsp+3D8h] [rbp+2D0h]
  __int64 v156[4]; // [rsp+3E8h] [rbp+2E0h] BYREF
  __int64 v157[2]; // [rsp+408h] [rbp+300h] BYREF
  __m128i v158; // [rsp+418h] [rbp+310h]
  __int64 v159; // [rsp+428h] [rbp+320h] BYREF
  volatile signed __int32 *v160; // [rsp+430h] [rbp+328h]
  __int64 v161; // [rsp+438h] [rbp+330h] BYREF
  volatile signed __int32 *v162; // [rsp+440h] [rbp+338h]
  __int128 v163; // [rsp+448h] [rbp+340h] BYREF
  __int128 v164; // [rsp+458h] [rbp+350h] BYREF
  __int128 v165; // [rsp+468h] [rbp+360h] BYREF
  __int64 v166; // [rsp+478h] [rbp+370h] BYREF
  __int64 v167; // [rsp+488h] [rbp+380h] BYREF
  volatile signed __int32 *v168; // [rsp+490h] [rbp+388h]
  __int64 v169; // [rsp+498h] [rbp+390h] BYREF
  __int64 v170; // [rsp+4A8h] [rbp+3A0h] BYREF
  _QWORD v171[2]; // [rsp+4B8h] [rbp+3B0h] BYREF
  __int64 v172[3]; // [rsp+4C8h] [rbp+3C0h] BYREF
  unsigned __int64 v173; // [rsp+4E0h] [rbp+3D8h]
  int v174[3]; // [rsp+4E8h] [rbp+3E0h] BYREF
  int v175[3]; // [rsp+4F4h] [rbp+3ECh] BYREF
  int v176[4]; // [rsp+500h] [rbp+3F8h] BYREF
  __int128 v177; // [rsp+510h] [rbp+408h] BYREF
  __int128 v178; // [rsp+520h] [rbp+418h]
  __int128 v179; // [rsp+530h] [rbp+428h] BYREF
  __int128 v180; // [rsp+540h] [rbp+438h] BYREF
  __int128 v181; // [rsp+550h] [rbp+448h] BYREF
  __int128 v182; // [rsp+560h] [rbp+458h] BYREF
  __int128 v183; // [rsp+570h] [rbp+468h] BYREF
  __int128 v184; // [rsp+580h] [rbp+478h]
  __int64 v185[2]; // [rsp+590h] [rbp+488h] BYREF
  __int128 v186; // [rsp+5A0h] [rbp+498h]
  _BYTE v187[16]; // [rsp+5B0h] [rbp+4A8h] BYREF
  char v188[16]; // [rsp+5C0h] [rbp+4B8h] BYREF
  char v189[16]; // [rsp+5D0h] [rbp+4C8h] BYREF

  v93 = a2;
  v186 = 0LL;
  sub_18001277C(v185, (__int64)&qword_18020F768);
  v91 = v144;
  v130 = 15LL;
  v129[2] = 3LL;
  LODWORD(v129[0]) = 7955787;
  v3 = 0;
  v144[2] = 0LL;
  v144[3] = 0LL;
  sub_18001277C(v144, (__int64)v185);
  v4 = *a2;
  v5 = sub_1800854DC(v129);
  sub_18008BAC0(v4, (__int64)v187, v5, v144);
  if ( v130 >= 0x10 )
  {
    v6 = v129[0];
    if ( v130 + 1 >= 0x1000 )
    {
      v6 = *(_QWORD *)(v129[0] - 8LL);
      if ( (unsigned __int64)(v129[0] - v6 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v6, v130 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v6);
  }
  v91 = v145;
  v136 = 15LL;
  v135[2] = 4LL;
  strcpy((char *)v135, "Fill");
  v145[2] = 0LL;
  v145[3] = 0LL;
  sub_18001277C(v145, (__int64)v185);
  v7 = *a2;
  v8 = sub_1800854DC(v135);
  sub_18008BAC0(v7, (__int64)v188, v8, v145);
  if ( v136 >= 0x10 )
  {
    v9 = v135[0];
    if ( v136 + 1 >= 0x1000 )
    {
      v9 = *(_QWORD *)(v135[0] - 8LL);
      if ( (unsigned __int64)(v135[0] - v9 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v9, v136 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v9);
  }
  v91 = v146;
  v134 = 15LL;
  v133[2] = 4LL;
  strcpy((char *)v133, "Back");
  v146[2] = 0LL;
  v146[3] = 0LL;
  sub_18001277C(v146, (__int64)v185);
  v10 = *a2;
  v11 = sub_1800854DC(v133);
  sub_18008BAC0(v10, (__int64)v189, v11, v146);
  v12 = v134;
  if ( v134 >= 0x10 )
  {
    v13 = v133[0];
    if ( v134 + 1 >= 0x1000 )
    {
      v13 = *(_QWORD *)(v133[0] - 8LL);
      if ( (unsigned __int64)(v133[0] - v13 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v13, v134 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v13);
  }
  v14 = sub_1800BB82C(*a2, v12);
  v15 = 3LL;
  v16 = (__int64 *)(v14 + 136);
  v17 = (__int64)&v187[-v14];
  do
  {
    v18 = sub_180010D18(*(__int64 *)((char *)v16 + v17 - 136), &v167);
    v19 = 16LL * v3;
    std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v19 + v14 + 8), v18);
    v20 = v168;
    if ( v168 )
    {
      if ( _InterlockedExchangeAdd(v168 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v20)(v20);
        if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
      }
    }
    v21 = sub_1800B9788(*(__int64 *)((char *)v16 + v17 - 136), &v159);
    std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v19 + v14 + 56), v21);
    v22 = v160;
    if ( v160 )
    {
      if ( _InterlockedExchangeAdd(v160 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v22)(v22);
        if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
      }
    }
    v23 = sub_1800B9E40(*(__int64 *)((char *)v16 + v17 - 136), &v161);
    std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v19 + v14 + 136), v23);
    v24 = v162;
    if ( v162 )
    {
      if ( _InterlockedExchangeAdd(v162 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v24)(v24);
        if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
      }
    }
    sub_1801010EC(*v16, 1LL);
    sub_180025F94(v172, v3);
    v25 = sub_18005A894(v172, 0LL, "ShadowMap", 9uLL);
    Src = *(_OWORD *)v25;
    v148 = *((_OWORD *)v25 + 1);
    v25[2] = 0LL;
    v25[3] = (const void *)15;
    *(_BYTE *)v25 = 0;
    sub_180012F14((__int64 *)(*v16 + 24), (__int64 *)&Src);
    if ( *((_QWORD *)&v148 + 1) >= 0x10uLL )
    {
      v26 = Src;
      if ( (unsigned __int64)(*((_QWORD *)&v148 + 1) + 1LL) >= 0x1000 )
      {
        v27 = *((_QWORD *)&v148 + 1) + 40LL;
        v26 = *(_QWORD *)(Src - 8);
        if ( (unsigned __int64)(Src - v26 - 8) > 0x1F )
          goto LABEL_64;
      }
      j_j__o_free(v26);
    }
    if ( v173 >= 0x10 )
    {
      v28 = v172[0];
      if ( v173 + 1 >= 0x1000 )
      {
        v29 = v173 + 40;
        v28 = *(_QWORD *)(v172[0] - 8);
        if ( (unsigned __int64)(v172[0] - v28 - 8) > 0x1F )
          goto LABEL_65;
      }
      j_j__o_free(v28);
    }
    sub_1800AD52C(*v16, (__int64)&unk_18020F708);
    sub_1800B1F94(*v16, v15);
    sub_180025F94(v131, v3);
    v30 = sub_18005A894(v131, 0LL, "Global/ShadowBuffer", 0x13uLL);
    v184 = 0uLL;
    v183 = *(_OWORD *)v30;
    v184 = *((_OWORD *)v30 + 1);
    v30[2] = 0LL;
    v30[3] = (const void *)15;
    *(_BYTE *)v30 = 0;
    if ( v132 >= 0x10 )
    {
      v31 = v131[0];
      if ( v132 + 1 >= 0x1000 )
      {
        v32 = v132 + 40;
        v31 = *(_QWORD *)(v131[0] - 8);
        if ( (unsigned __int64)(v131[0] - v31 - 8) > 0x1F )
          goto LABEL_66;
      }
      j_j__o_free(v31);
    }
    v131[2] = 0LL;
    v132 = 15LL;
    LOBYTE(v131[0]) = 0;
    sub_180025F94(v139, v3);
    v33 = sub_18005A894(v139, 0LL, "Global/ColoredShadowBuffer", 0x1AuLL);
    v178 = 0uLL;
    v177 = *(_OWORD *)v33;
    v178 = *((_OWORD *)v33 + 1);
    v33[2] = 0LL;
    v33[3] = (const void *)15;
    *(_BYTE *)v33 = 0;
    if ( v140 >= 0x10 )
    {
      v34 = v139[0];
      if ( v140 + 1 >= 0x1000 )
      {
        v35 = v140 + 40;
        v34 = *(_QWORD *)(v139[0] - 8);
        if ( (unsigned __int64)(v139[0] - v34 - 8) > 0x1F )
          goto LABEL_67;
      }
      j_j__o_free(v34);
    }
    v139[2] = 0LL;
    v140 = 15LL;
    LOBYTE(v139[0]) = 0;
    sub_1801010B4(*v16, &v183, &v177);
    if ( *((_QWORD *)&v178 + 1) >= 0x10uLL )
    {
      v36 = v177;
      if ( (unsigned __int64)(*((_QWORD *)&v178 + 1) + 1LL) >= 0x1000 )
      {
        v37 = *((_QWORD *)&v178 + 1) + 40LL;
        v36 = *(_QWORD *)(v177 - 8);
        if ( (unsigned __int64)(v177 - v36 - 8) > 0x1F )
          goto LABEL_68;
      }
      j_j__o_free(v36);
    }
    *(_QWORD *)&v178 = 0LL;
    *((_QWORD *)&v178 + 1) = 15LL;
    LOBYTE(v177) = 0;
    if ( *((_QWORD *)&v184 + 1) >= 0x10uLL )
    {
      v38 = v183;
      if ( (unsigned __int64)(*((_QWORD *)&v184 + 1) + 1LL) >= 0x1000 )
      {
        v39 = *((_QWORD *)&v184 + 1) + 40LL;
        v38 = *(_QWORD *)(v183 - 8);
        if ( (unsigned __int64)(v183 - v38 - 8) > 0x1F )
          goto LABEL_69;
      }
      j_j__o_free(v38);
    }
    ++v3;
    v15 = (unsigned int)(v15 - 1);
    v16 += 2;
  }
  while ( (int)v15 > 0 );
  v100 = 0LL;
  v40 = *(_QWORD *)(v14 + 16);
  v17 = 1LL;
  if ( v40 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v40 + 8), 1u);
    v40 = *(_QWORD *)(v14 + 16);
  }
  v41 = *(__int64 **)(v14 + 8);
  v16 = v41;
  *(_QWORD *)&v100 = v41;
  *((_QWORD *)&v100 + 1) = v40;
  v103 = 0LL;
  v42 = *(_QWORD *)(v14 + 32);
  if ( v42 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v42 + 8), 1u);
    v42 = *(_QWORD *)(v14 + 32);
    v16 = (__int64 *)v100;
  }
  *(_QWORD *)&v103 = *(_QWORD *)(v14 + 24);
  *((_QWORD *)&v103 + 1) = v42;
  v92 = 0LL;
  v43 = *(_QWORD *)(v14 + 48);
  if ( v43 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v43 + 8), 1u);
    v43 = *(_QWORD *)(v14 + 48);
    v16 = (__int64 *)v100;
  }
  *(_QWORD *)&v92 = *(_QWORD *)(v14 + 40);
  *((_QWORD *)&v92 + 1) = v43;
  v15 = 15LL;
  v128 = 15LL;
  v127[2] = 3LL;
  LODWORD(v127[0]) = 7955787;
  sub_180012F14(v41 + 3, v127);
  if ( v128 >= 0x10 )
  {
    v44 = v127[0];
    if ( v128 + 1 >= 0x1000 )
    {
      v44 = *(_QWORD *)(v127[0] - 8);
      if ( (unsigned __int64)(v127[0] - v44 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v44, v128 + 40);
LABEL_64:
        o__invalid_parameter_noinfo_noreturn(v26, v27);
LABEL_65:
        o__invalid_parameter_noinfo_noreturn(v28, v29);
LABEL_66:
        o__invalid_parameter_noinfo_noreturn(v31, v32);
LABEL_67:
        o__invalid_parameter_noinfo_noreturn(v34, v35);
LABEL_68:
        o__invalid_parameter_noinfo_noreturn(v36, v37);
LABEL_69:
        o__invalid_parameter_noinfo_noreturn(v38, v39);
      }
    }
    j_j__o_free(v44);
  }
  *((_BYTE *)v16 + 72) = v17;
  sub_180091050((__int64)v16, v17);
  v104 = 0x40153B12BFDE17FALL;
  v105 = -1074818325;
  v45 = sub_18008FF50(v176, COERCE_DOUBLE(1059061760LL), &v104);
  v87 = *(_QWORD *)v45;
  v89 = v45[2];
  v94 = 0LL;
  v46 = v16[8];
  if ( v46 )
  {
    while ( 1 )
    {
      v56 = *(_DWORD *)(v46 + 8);
      if ( !v56 )
        break;
      if ( v56 == _InterlockedCompareExchange((volatile signed __int32 *)(v46 + 8), v56 + 1, v56) )
      {
        v47 = v16[7];
        *(_QWORD *)&v94 = v47;
        *((_QWORD *)&v94 + 1) = v16[8];
        goto LABEL_73;
      }
    }
  }
  v47 = v94;
LABEL_73:
  sub_18008933C(v47);
  *(_QWORD *)(v47 + 144) = v87;
  *(_DWORD *)(v47 + 152) = v89;
  v48 = _InterlockedExchangeAdd64(&qword_18020F6C0, v17) + 1;
  v49 = v94;
  *(_QWORD *)(v94 + 208) = v48;
  v50 = *(_QWORD *)(v49 + 216);
  if ( v48 >= v50 )
    v50 = v48;
  *(_QWORD *)(v49 + 216) = v50;
  if ( *((_QWORD *)&v94 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v94 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (***((void (__fastcall ****)(_QWORD))&v94 + 1))(*((_QWORD *)&v94 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v94 + 1) + 12LL), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v94 + 1) + 8LL))(*((_QWORD *)&v94 + 1));
    }
  }
  v113 = qword_180214C48;
  v114 = dword_180214C50;
  v115 = qword_180221E80;
  v116 = dword_180221E88;
  v96 = 0LL;
  v51 = v16[8];
  if ( v51 )
  {
    while ( 1 )
    {
      v57 = *(_DWORD *)(v51 + 8);
      if ( !v57 )
        break;
      if ( v57 == _InterlockedCompareExchange((volatile signed __int32 *)(v51 + 8), v57 + 1, v57) )
      {
        *(_QWORD *)&v96 = v16[7];
        v52 = v16[8];
        *((_QWORD *)&v96 + 1) = v52;
        goto LABEL_81;
      }
    }
  }
  v52 = *((_QWORD *)&v96 + 1);
LABEL_81:
  sub_1800866A4(v96, (unsigned __int64 *)&v115, (__int64)&v113);
  if ( v52 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v52 + 8), 0xFFFFFFFF) == 1 )
    {
      (***((void (__fastcall ****)(_QWORD))&v96 + 1))(*((_QWORD *)&v96 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v96 + 1) + 12LL), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v96 + 1) + 8LL))(*((_QWORD *)&v96 + 1));
    }
  }
  v53 = v100;
  *(_DWORD *)(v100 + 104) = 1092370432;
  *(_DWORD *)(v53 + 116) = 1028443341;
  v138 = v15;
  v137[2] = 4LL;
  strcpy((char *)v137, "Fill");
  v54 = v103;
  sub_180012F14((__int64 *)(v103 + 24), v137);
  if ( v138 >= 0x10 )
  {
    v55 = v137[0];
    if ( v138 + 1 >= 0x1000 )
    {
      v55 = *(_QWORD *)(v137[0] - 8);
      if ( (unsigned __int64)(v137[0] - v55 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v55, v138 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v55);
    v15 = 15LL;
  }
  *(_BYTE *)(v103 + 72) = v17;
  sub_180091050(v54, v17);
  *(_DWORD *)(v54 + 88) = 1060487823;
  *(_DWORD *)(v54 + 92) = 1061997773;
  *(_DWORD *)(v54 + 96) = 1065151889;
  *(_DWORD *)(v54 + 100) = 1065353216;
  v106 = 0x4011700C3FE02A60LL;
  v107 = -1071387053;
  v58 = sub_18008FF50(v175, COERCE_DOUBLE(1059061760LL), &v106);
  v88 = *(_QWORD *)v58;
  v90 = v58[2];
  v95 = 0LL;
  v59 = *(_QWORD *)(v54 + 64);
  if ( v59 )
  {
    while ( 1 )
    {
      v71 = *(_DWORD *)(v59 + 8);
      if ( !v71 )
        break;
      if ( v71 == _InterlockedCompareExchange((volatile signed __int32 *)(v59 + 8), v71 + 1, v71) )
      {
        v60 = *(_QWORD *)(v54 + 56);
        *(_QWORD *)&v95 = v60;
        *((_QWORD *)&v95 + 1) = *(_QWORD *)(v54 + 64);
        goto LABEL_100;
      }
    }
  }
  v60 = v95;
LABEL_100:
  sub_18008933C(v60);
  *(_QWORD *)(v60 + 144) = v88;
  *(_DWORD *)(v60 + 152) = v90;
  v61 = _InterlockedExchangeAdd64(&qword_18020F6C0, v17) + 1;
  v62 = v95;
  *(_QWORD *)(v95 + 208) = v61;
  v63 = *(_QWORD *)(v62 + 216);
  if ( v61 >= v63 )
    v63 = v61;
  *(_QWORD *)(v62 + 216) = v63;
  if ( *((_QWORD *)&v95 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v95 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (***((void (__fastcall ****)(_QWORD))&v95 + 1))(*((_QWORD *)&v95 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v95 + 1) + 12LL), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v95 + 1) + 8LL))(*((_QWORD *)&v95 + 1));
    }
  }
  v117 = qword_180214C48;
  v118 = dword_180214C50;
  v119 = qword_180221E80;
  v120 = dword_180221E88;
  v97 = 0LL;
  v64 = *(_QWORD *)(v54 + 64);
  if ( v64 )
  {
    while ( 1 )
    {
      v72 = *(_DWORD *)(v64 + 8);
      if ( !v72 )
        break;
      if ( v72 == _InterlockedCompareExchange((volatile signed __int32 *)(v64 + 8), v72 + 1, v72) )
      {
        *(_QWORD *)&v97 = *(_QWORD *)(v54 + 56);
        v65 = *(_QWORD *)(v54 + 64);
        *((_QWORD *)&v97 + 1) = v65;
        goto LABEL_108;
      }
    }
  }
  v65 = *((_QWORD *)&v97 + 1);
LABEL_108:
  sub_1800866A4(v97, (unsigned __int64 *)&v119, (__int64)&v117);
  if ( v65 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v65 + 8), 0xFFFFFFFF) == 1 )
    {
      (***((void (__fastcall ****)(_QWORD))&v97 + 1))(*((_QWORD *)&v97 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v97 + 1) + 12LL), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v97 + 1) + 8LL))(*((_QWORD *)&v97 + 1));
    }
  }
  v66 = v103;
  *(_DWORD *)(v103 + 104) = 1086849024;
  *(_DWORD *)(v66 + 116) = 1036831949;
  v141[3] = v15;
  v141[2] = 4LL;
  strcpy((char *)v141, "Back");
  v67 = v92;
  sub_180012F14((__int64 *)(v92 + 24), v141);
  std::string::_Tidy_deallocate(v141);
  *(_BYTE *)(v92 + 72) = v17;
  sub_180091050(v67, v17);
  *(_DWORD *)(v67 + 88) = 1063144775;
  *(_DWORD *)(v67 + 92) = 1060773036;
  *(_DWORD *)(v67 + 96) = 1065353216;
  *(_DWORD *)(v67 + 100) = 1065353216;
  v108 = 0x4025238B3FD6B197LL;
  v109 = 1069927670;
  v68 = sub_18008FF50(v174, COERCE_DOUBLE(1059061760LL), &v108);
  v121 = *(_QWORD *)v68;
  v122 = v68[2];
  v69 = (_QWORD *)(v67 + 56);
  v101 = 0LL;
  v70 = *(_QWORD *)(v67 + 64);
  if ( v70 )
  {
    while ( 1 )
    {
      v73 = *(_DWORD *)(v70 + 8);
      if ( !v73 )
        break;
      if ( v73 == _InterlockedCompareExchange((volatile signed __int32 *)(v70 + 8), v73 + 1, v73) )
      {
        *(_QWORD *)&v101 = *v69;
        *((_QWORD *)&v101 + 1) = *(_QWORD *)(v67 + 64);
        break;
      }
    }
    v67 = v92;
  }
  sub_1800123D8(v101, &v121);
  unknown_libname_98(&v101);
  v123 = qword_180214C48;
  v124 = dword_180214C50;
  v125 = qword_180221E80;
  v126 = dword_180221E88;
  v102 = 0LL;
  v74 = v69[1];
  if ( v74 )
  {
    while ( 1 )
    {
      v75 = *(_DWORD *)(v74 + 8);
      if ( !v75 )
        break;
      if ( v75 == _InterlockedCompareExchange((volatile signed __int32 *)(v74 + 8), v75 + 1, v75) )
      {
        v102 = *(_OWORD *)v69;
        break;
      }
    }
    v67 = v92;
  }
  sub_1800866A4(v102, (unsigned __int64 *)&v125, (__int64)&v123);
  unknown_libname_98(&v102);
  *(_DWORD *)(v67 + 104) = 1078460416;
  *(_DWORD *)(v67 + 116) = 1045220557;
  v181 = 0LL;
  v91 = v149;
  si128 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(v142[0]) = 0;
  unknown_libname_100(v142, "LightProbe0");
  v149[2] = 0LL;
  v149[3] = 0LL;
  sub_18001277C(v149, (__int64)&qword_18020F768);
  v76 = v93;
  v77 = *v93;
  v78 = sub_1800854DC(v142);
  sub_18008BAC0(v77, (__int64)&v181, v78, v149);
  std::string::_Tidy_deallocate(v142);
  v182 = 0LL;
  v93 = v150;
  v152 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(v151[0]) = 0;
  unknown_libname_100(v151, "LightProbe1");
  v150[2] = 0LL;
  v150[3] = 0LL;
  sub_18001277C(v150, (__int64)&qword_18020F768);
  v79 = *v76;
  v80 = sub_1800854DC(v151);
  sub_18008BAC0(v79, (__int64)&v182, v80, v150);
  std::string::_Tidy_deallocate(v151);
  v179 = 0LL;
  v93 = v153;
  v155 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(v154[0]) = 0;
  unknown_libname_100(v154, "LightProbe2");
  v153[2] = 0LL;
  v153[3] = 0LL;
  sub_18001277C(v153, (__int64)&qword_18020F768);
  v81 = *v76;
  v82 = sub_1800854DC(v154);
  sub_18008BAC0(v81, (__int64)&v179, v82, v153);
  std::string::_Tidy_deallocate(v154);
  v112 = 0LL;
  sub_1800B9C04(v181, &v112);
  v111 = 0LL;
  sub_1800B9C04(v182, &v111);
  v110 = 0LL;
  sub_1800B9C04(v179, &v110);
  v163 = xmmword_1801D8CE0;
  sub_1800B9340((__m128 *)v112, (__m128 *)&v163);
  v164 = xmmword_1801D8CE0;
  sub_1800B9340((__m128 *)v111, (__m128 *)&v164);
  v165 = xmmword_1801D8CE0;
  sub_1800B9340((__m128 *)v110, (__m128 *)&v165);
  v98 = 0;
  sub_1800BCCC4((__int64 *)(v14 + 104), (__int64)&v166, &v98);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v166 + 40), &v112);
  v99 = v17;
  sub_1800BCCC4((__int64 *)(v14 + 104), (__int64)&v169, &v99);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v169 + 40), &v111);
  LODWORD(v91) = 2;
  sub_1800BCCC4((__int64 *)(v14 + 104), (__int64)&v170, &v91);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v170 + 40), &v110);
  v180 = 0LL;
  v93 = v156;
  v158 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(v157[0]) = 0;
  unknown_libname_100(v157, "ColorTransform");
  v156[2] = 0LL;
  v156[3] = 0LL;
  sub_18001277C(v156, (__int64)&qword_18020F768);
  v83 = *v76;
  v84 = sub_1800854DC(v157);
  sub_18008BAC0(v83, (__int64)&v180, v84, v156);
  std::string::_Tidy_deallocate(v157);
  v85 = sub_1800B99C8(v180, v171);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v14 + 120), v85);
  unknown_libname_98(v171);
  sub_180105858(*(_QWORD *)(v14 + 120), 8LL);
  unknown_libname_98(&v180);
  unknown_libname_98(&v110);
  unknown_libname_98(&v111);
  unknown_libname_98(&v112);
  unknown_libname_98(&v179);
  unknown_libname_98(&v182);
  unknown_libname_98(&v181);
  unknown_libname_98(&v92);
  unknown_libname_98(&v103);
  unknown_libname_98(&v100);
  `eh vector destructor iterator'(v187, 0x10uLL, 3uLL, (void (*)(void *))unknown_libname_98);
  return unknown_libname_103(v185);
}
