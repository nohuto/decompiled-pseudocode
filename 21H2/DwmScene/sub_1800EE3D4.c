/*
 * XREFs of sub_1800EE3D4 @ 0x1800EE3D4
 * Callers:
 *     sub_1800EE230 @ 0x1800EE230 (sub_1800EE230.c)
 * Callees:
 *     unknown_libname_98 @ 0x18000F360 (unknown_libname_98.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     sub_1800A1F98 @ 0x1800A1F98 (sub_1800A1F98.c)
 *     sub_1800A5D20 @ 0x1800A5D20 (sub_1800A5D20.c)
 *     sub_1800A78C8 @ 0x1800A78C8 (sub_1800A78C8.c)
 *     sub_1800A99A4 @ 0x1800A99A4 (sub_1800A99A4.c)
 *     sub_1800BD5B0 @ 0x1800BD5B0 (sub_1800BD5B0.c)
 *     sub_1800F83D4 @ 0x1800F83D4 (sub_1800F83D4.c)
 *     sub_1800F8FE0 @ 0x1800F8FE0 (sub_1800F8FE0.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1801239AC (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=47
__int64 __fastcall sub_1800EE3D4(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r9
  __int64 v6; // r14
  _QWORD *v7; // rax
  __int64 v8; // r9
  __int64 v9; // r15
  _QWORD *v10; // rax
  __int64 v11; // r9
  __int64 v12; // r12
  _QWORD *v13; // rax
  __int64 v14; // r9
  __int64 v15; // r13
  _QWORD *v16; // rax
  __int64 v17; // r9
  _QWORD *v18; // rax
  __int64 v19; // r9
  _QWORD *v20; // rax
  __int64 v21; // r9
  _QWORD *v22; // rax
  __int64 v23; // r9
  _QWORD *v24; // rax
  __int64 v25; // r9
  __m128i *v26; // rsi
  __int64 v27; // rbx
  __int64 *v28; // rax
  __int64 v29; // rax
  __int64 *v30; // rax
  __int64 v31; // rax
  __int64 *v32; // rax
  __int64 v33; // rax
  __int64 *v34; // rax
  __int64 v35; // rax
  __int64 *v36; // rax
  __int64 v37; // rax
  __int64 *v38; // rax
  __int64 v39; // rax
  __int64 *v40; // rax
  __int64 v41; // rax
  __int64 *v42; // rax
  __int64 v43; // rax
  char v45; // [rsp+30h] [rbp-D0h]
  __int128 v46; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v47[3]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v48; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v49; // [rsp+68h] [rbp-98h]
  __int128 v50; // [rsp+70h] [rbp-90h]
  __int64 v51; // [rsp+80h] [rbp-80h] BYREF
  __int64 v52; // [rsp+88h] [rbp-78h]
  __int128 v53; // [rsp+90h] [rbp-70h]
  _QWORD v54[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v55; // [rsp+B0h] [rbp-50h]
  __int64 v56; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v57; // [rsp+C8h] [rbp-38h]
  __int64 v58; // [rsp+D0h] [rbp-30h]
  _QWORD v59[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v60; // [rsp+E8h] [rbp-18h]
  __int64 v61; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD v62[2]; // [rsp+100h] [rbp+0h] BYREF
  __int128 v63; // [rsp+110h] [rbp+10h]
  _QWORD v64[2]; // [rsp+120h] [rbp+20h] BYREF
  __int128 v65; // [rsp+130h] [rbp+30h]
  _QWORD v66[2]; // [rsp+140h] [rbp+40h] BYREF
  __int128 v67; // [rsp+150h] [rbp+50h]
  __int64 v68; // [rsp+160h] [rbp+60h] BYREF
  __int128 v69; // [rsp+170h] [rbp+70h]
  _QWORD v70[2]; // [rsp+180h] [rbp+80h] BYREF
  _QWORD v71[2]; // [rsp+190h] [rbp+90h] BYREF
  _QWORD v72[2]; // [rsp+1A0h] [rbp+A0h] BYREF
  _QWORD v73[2]; // [rsp+1B0h] [rbp+B0h] BYREF
  _QWORD v74[2]; // [rsp+1C0h] [rbp+C0h] BYREF
  _QWORD v75[2]; // [rsp+1D0h] [rbp+D0h] BYREF
  _QWORD v76[2]; // [rsp+1E0h] [rbp+E0h] BYREF
  __int128 v77; // [rsp+1F0h] [rbp+F0h] BYREF
  __int128 v78; // [rsp+200h] [rbp+100h] BYREF
  __int128 v79; // [rsp+210h] [rbp+110h] BYREF
  __int128 v80; // [rsp+220h] [rbp+120h] BYREF
  __int128 v81; // [rsp+230h] [rbp+130h] BYREF
  __int128 v82; // [rsp+240h] [rbp+140h] BYREF
  __int128 v83; // [rsp+250h] [rbp+150h] BYREF
  __int128 v84; // [rsp+260h] [rbp+160h] BYREF
  __int128 v85; // [rsp+270h] [rbp+170h] BYREF
  __m128i v86; // [rsp+280h] [rbp+180h] BYREF
  __int64 v87; // [rsp+290h] [rbp+190h] BYREF

  v85 = 0LL;
  v60 = 0LL;
  sub_180020B7C(v59, (__int64)&qword_1802135B8);
  v86.m128i_i64[0] = (__int64)v59;
  v86.m128i_i64[1] = (__int64)&v61;
  sub_1800BD5B0((__int64 *)&v85, &v86);
  `eh vector destructor iterator'(v59, 0x20uLL, 1uLL, (void (*)(void *))std::string::_Tidy_deallocate);
  v84 = 0LL;
  v50 = 0LL;
  sub_180020B7C(&v48, (__int64)&qword_1802135B8);
  v53 = 0LL;
  sub_180020B7C(&v51, (__int64)aSkinning);
  v86.m128i_i64[0] = (__int64)&v48;
  v86.m128i_i64[1] = (__int64)v54;
  sub_1800BD5B0((__int64 *)&v84, &v86);
  `eh vector destructor iterator'(&v48, 0x20uLL, 2uLL, (void (*)(void *))std::string::_Tidy_deallocate);
  v83 = 0LL;
  v60 = 0LL;
  sub_180020B7C(v59, (__int64)qword_180213598);
  v86.m128i_i64[0] = (__int64)v59;
  v86.m128i_i64[1] = (__int64)&v61;
  sub_1800BD5B0((__int64 *)&v83, &v86);
  `eh vector destructor iterator'(v59, 0x20uLL, 1uLL, (void (*)(void *))std::string::_Tidy_deallocate);
  v82 = 0LL;
  v50 = 0LL;
  sub_180020B7C(&v48, (__int64)&qword_1802135B8);
  v53 = 0LL;
  sub_180020B7C(&v51, (__int64)qword_180213598);
  v86.m128i_i64[0] = (__int64)&v48;
  v86.m128i_i64[1] = (__int64)v54;
  sub_1800BD5B0((__int64 *)&v82, &v86);
  `eh vector destructor iterator'(&v48, 0x20uLL, 2uLL, (void (*)(void *))std::string::_Tidy_deallocate);
  v81 = 0LL;
  v63 = 0LL;
  sub_180020B7C(v62, (__int64)&qword_1802135B8);
  v65 = 0LL;
  sub_180020B7C(v64, (__int64)&qword_1802134D8);
  v86.m128i_i64[0] = (__int64)v62;
  v86.m128i_i64[1] = (__int64)v66;
  sub_1800BD5B0((__int64 *)&v81, &v86);
  `eh vector destructor iterator'(v62, 0x20uLL, 2uLL, (void (*)(void *))std::string::_Tidy_deallocate);
  v80 = 0LL;
  v50 = 0LL;
  sub_180020B7C(&v48, (__int64)&qword_1802135B8);
  v53 = 0LL;
  sub_180020B7C(&v51, (__int64)qword_180213598);
  v55 = 0LL;
  sub_180020B7C(v54, (__int64)&qword_1802134F8);
  v86.m128i_i64[0] = (__int64)&v48;
  v86.m128i_i64[1] = (__int64)&v56;
  sub_1800BD5B0((__int64 *)&v80, &v86);
  `eh vector destructor iterator'(&v48, 0x20uLL, 3uLL, (void (*)(void *))std::string::_Tidy_deallocate);
  v79 = 0LL;
  v63 = 0LL;
  sub_180020B7C(v62, (__int64)&qword_1802135B8);
  v65 = 0LL;
  sub_180020B7C(v64, (__int64)qword_180213598);
  v67 = 0LL;
  sub_180020B7C(v66, (__int64)&qword_1802134D8);
  v69 = 0LL;
  sub_180020B7C(&v68, (__int64)&qword_1802134F8);
  v86.m128i_i64[0] = (__int64)v62;
  v86.m128i_i64[1] = (__int64)v70;
  sub_1800BD5B0((__int64 *)&v79, &v86);
  `eh vector destructor iterator'(v62, 0x20uLL, 4uLL, (void (*)(void *))std::string::_Tidy_deallocate);
  v78 = 0LL;
  v50 = 0LL;
  sub_180020B7C(&v48, (__int64)&qword_1802135B8);
  v53 = 0LL;
  sub_180020B7C(&v51, (__int64)qword_180213598);
  v55 = 0LL;
  sub_180020B7C(v54, (__int64)&qword_1802134D8);
  v86.m128i_i64[0] = (__int64)&v48;
  v86.m128i_i64[1] = (__int64)&v56;
  sub_1800BD5B0((__int64 *)&v78, &v86);
  `eh vector destructor iterator'(&v48, 0x20uLL, 3uLL, (void (*)(void *))std::string::_Tidy_deallocate);
  v46 = 0uLL;
  v86.m128i_i64[0] = (__int64)&v46;
  v86.m128i_i64[1] = (__int64)&v46;
  v4 = operator new(0x40uLL);
  *v4 = v4;
  v4[1] = v4;
  v4[2] = v4;
  *((_WORD *)v4 + 12) = 257;
  *(_QWORD *)&v46 = v4;
  sub_1800A78C8(&v46, &v85, v45, v5);
  v6 = sub_1800A5D20(a2, (__int64 *)&v46);
  v46 = 0uLL;
  v86.m128i_i64[0] = (__int64)&v46;
  v86.m128i_i64[1] = (__int64)&v46;
  v7 = operator new(0x40uLL);
  *v7 = v7;
  v7[1] = v7;
  v7[2] = v7;
  *((_WORD *)v7 + 12) = 257;
  *(_QWORD *)&v46 = v7;
  sub_1800A78C8(&v46, &v84, v45, v8);
  v9 = sub_1800A5D20(a2, (__int64 *)&v46);
  v46 = 0uLL;
  v86.m128i_i64[0] = (__int64)&v46;
  v86.m128i_i64[1] = (__int64)&v46;
  v10 = operator new(0x40uLL);
  *v10 = v10;
  v10[1] = v10;
  v10[2] = v10;
  *((_WORD *)v10 + 12) = 257;
  *(_QWORD *)&v46 = v10;
  sub_1800A78C8(&v46, &v83, v45, v11);
  v12 = sub_1800A5D20(a2, (__int64 *)&v46);
  v46 = 0uLL;
  v86.m128i_i64[0] = (__int64)&v46;
  v86.m128i_i64[1] = (__int64)&v46;
  v13 = operator new(0x40uLL);
  *v13 = v13;
  v13[1] = v13;
  v13[2] = v13;
  *((_WORD *)v13 + 12) = 257;
  *(_QWORD *)&v46 = v13;
  sub_1800A78C8(&v46, &v82, v45, v14);
  v15 = sub_1800A5D20(a2, (__int64 *)&v46);
  v46 = 0uLL;
  v86.m128i_i64[0] = (__int64)&v46;
  v86.m128i_i64[1] = (__int64)&v46;
  v16 = operator new(0x40uLL);
  *v16 = v16;
  v16[1] = v16;
  v16[2] = v16;
  *((_WORD *)v16 + 12) = 257;
  *(_QWORD *)&v46 = v16;
  sub_1800A78C8(&v46, &v81, v45, v17);
  v56 = sub_1800A5D20(a2, (__int64 *)&v46);
  v46 = 0uLL;
  v86.m128i_i64[0] = (__int64)&v46;
  v86.m128i_i64[1] = (__int64)&v46;
  v18 = operator new(0x40uLL);
  *v18 = v18;
  v18[1] = v18;
  v18[2] = v18;
  *((_WORD *)v18 + 12) = 257;
  *(_QWORD *)&v46 = v18;
  sub_1800A78C8(&v46, &v80, v45, v19);
  v58 = sub_1800A5D20(a2, (__int64 *)&v46);
  v46 = 0uLL;
  v86.m128i_i64[0] = (__int64)&v46;
  v86.m128i_i64[1] = (__int64)&v46;
  v20 = operator new(0x40uLL);
  *v20 = v20;
  v20[1] = v20;
  v20[2] = v20;
  *((_WORD *)v20 + 12) = 257;
  *(_QWORD *)&v46 = v20;
  sub_1800A78C8(&v46, &v79, v45, v21);
  v61 = sub_1800A5D20(a2, (__int64 *)&v46);
  v46 = 0uLL;
  v86.m128i_i64[0] = (__int64)&v46;
  v86.m128i_i64[1] = (__int64)&v46;
  v22 = operator new(0x40uLL);
  *v22 = v22;
  v22[1] = v22;
  v22[2] = v22;
  *((_WORD *)v22 + 12) = 257;
  *(_QWORD *)&v46 = v22;
  sub_1800A78C8(&v46, &v78, v45, v23);
  v57 = sub_1800A5D20(a2, (__int64 *)&v46);
  v46 = 0LL;
  v77 = 0LL;
  v63 = 0LL;
  sub_180020B7C(v62, (__int64)&qword_180213638);
  v86.m128i_i64[0] = (__int64)v62;
  v86.m128i_i64[1] = (__int64)v64;
  sub_1800BD5B0((__int64 *)&v77, &v86);
  `eh vector destructor iterator'(v62, 0x20uLL, 1uLL, (void (*)(void *))std::string::_Tidy_deallocate);
  v47[0] = 0LL;
  v47[1] = 0LL;
  v86.m128i_i64[0] = (__int64)v47;
  v86.m128i_i64[1] = (__int64)v47;
  v24 = operator new(0x40uLL);
  *v24 = v24;
  v24[1] = v24;
  v24[2] = v24;
  *((_WORD *)v24 + 12) = 257;
  v47[0] = (__int64)v24;
  sub_1800A78C8(v47, &v77, v45, v25);
  v86 = (__m128i)(unsigned __int64)sub_1800A5D20(a2, v47);
  v26 = &v86;
  do
  {
    v27 = v26->m128i_i64[0];
    v28 = sub_1800A99A4(*(_QWORD *)(a1 + 56), v70, v61 | v26->m128i_i64[0], 0LL, 1);
    std::shared_ptr<__ExceptionPtr>::operator=(&v46, v28);
    unknown_libname_98(v70);
    v29 = *(_QWORD *)(a1 + 112);
    LODWORD(v48) = 0;
    v49 = v29;
    v50 = 0LL;
    v51 = 0LL;
    v52 = 0LL;
    sub_1800F8FE0(v46, &v48);
    sub_1800F83D4(v46, 15, 2, 1, 1);
    v30 = sub_1800A99A4(*(_QWORD *)(a1 + 56), v71, v57 | v27, 0LL, 1);
    std::shared_ptr<__ExceptionPtr>::operator=(&v46, v30);
    unknown_libname_98(v71);
    v31 = *(_QWORD *)(a1 + 112);
    LODWORD(v48) = 0;
    v49 = v31;
    v50 = 0LL;
    v51 = 0LL;
    v52 = 0LL;
    sub_1800F8FE0(v46, &v48);
    sub_1800F83D4(v46, 15, 2, 1, 1);
    v32 = sub_1800A99A4(*(_QWORD *)(a1 + 56), v72, v58 | v27, 0LL, 1);
    std::shared_ptr<__ExceptionPtr>::operator=(&v46, v32);
    unknown_libname_98(v72);
    v33 = *(_QWORD *)(a1 + 112);
    LODWORD(v48) = 0;
    v49 = v33;
    v50 = 0LL;
    v51 = 0LL;
    v52 = 0LL;
    sub_1800F8FE0(v46, &v48);
    sub_1800F83D4(v46, 15, 2, 1, 1);
    v34 = sub_1800A99A4(*(_QWORD *)(a1 + 56), v73, v15 | v27, 0LL, 1);
    std::shared_ptr<__ExceptionPtr>::operator=(&v46, v34);
    unknown_libname_98(v73);
    v35 = *(_QWORD *)(a1 + 112);
    LODWORD(v48) = 0;
    v49 = v35;
    v50 = 0LL;
    v51 = 0LL;
    v52 = 0LL;
    sub_1800F8FE0(v46, &v48);
    sub_1800F83D4(v46, 15, 2, 1, 1);
    v36 = sub_1800A99A4(*(_QWORD *)(a1 + 56), v74, v56 | v27, 0LL, 1);
    std::shared_ptr<__ExceptionPtr>::operator=(&v46, v36);
    unknown_libname_98(v74);
    v37 = *(_QWORD *)(a1 + 112);
    LODWORD(v48) = 0;
    v49 = v37;
    v50 = 0LL;
    v51 = 0LL;
    v52 = 0LL;
    sub_1800F8FE0(v46, &v48);
    sub_1800F83D4(v46, 15, 2, 3, 1);
    v38 = sub_1800A99A4(*(_QWORD *)(a1 + 56), v75, v6 | v27, 0LL, 1);
    std::shared_ptr<__ExceptionPtr>::operator=(&v46, v38);
    unknown_libname_98(v75);
    v39 = *(_QWORD *)(a1 + 112);
    LODWORD(v48) = 0;
    v49 = v39;
    v50 = 0LL;
    v51 = 0LL;
    v52 = 0LL;
    sub_1800F8FE0(v46, &v48);
    sub_1800F83D4(v46, 0, 2, 3, 1);
    v40 = sub_1800A99A4(*(_QWORD *)(a1 + 56), v76, v12 | v27, 0LL, 1);
    std::shared_ptr<__ExceptionPtr>::operator=(&v46, v40);
    unknown_libname_98(v76);
    v41 = *(_QWORD *)(a1 + 112);
    LODWORD(v48) = 0;
    v49 = v41;
    v50 = 0LL;
    v51 = 0LL;
    v52 = 0LL;
    sub_1800F8FE0(v46, &v48);
    sub_1800F83D4(v46, 15, 2, 1, 1);
    v42 = sub_1800A99A4(*(_QWORD *)(a1 + 56), v59, v9 | v27, 0LL, 1);
    std::shared_ptr<__ExceptionPtr>::operator=(&v46, v42);
    unknown_libname_98(v59);
    v43 = *(_QWORD *)(a1 + 112);
    LODWORD(v48) = 0;
    v49 = v43;
    v50 = 0LL;
    v51 = 0LL;
    v52 = 0LL;
    sub_1800F8FE0(v46, &v48);
    sub_1800F83D4(v46, 0, 2, 3, 1);
    v26 = (__m128i *)((char *)v26 + 8);
  }
  while ( v26 != (__m128i *)&v87 );
  sub_1800A1F98((__int64 *)&v77, (__int64)&v77);
  unknown_libname_98(&v46);
  sub_1800A1F98((__int64 *)&v78, (__int64)&v78);
  sub_1800A1F98((__int64 *)&v79, (__int64)&v79);
  sub_1800A1F98((__int64 *)&v80, (__int64)&v80);
  sub_1800A1F98((__int64 *)&v81, (__int64)&v81);
  sub_1800A1F98((__int64 *)&v82, (__int64)&v82);
  sub_1800A1F98((__int64 *)&v83, (__int64)&v83);
  sub_1800A1F98((__int64 *)&v84, (__int64)&v84);
  return sub_1800A1F98((__int64 *)&v85, (__int64)&v85);
}
