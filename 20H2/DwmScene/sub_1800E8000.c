/*
 * XREFs of sub_1800E8000 @ 0x1800E8000
 * Callers:
 *     sub_1800E8960 @ 0x1800E8960 (sub_1800E8960.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 *     sub_18009C6C8 @ 0x18009C6C8 (sub_18009C6C8.c)
 *     sub_1800A0450 @ 0x1800A0450 (sub_1800A0450.c)
 *     sub_1800A1FF8 @ 0x1800A1FF8 (sub_1800A1FF8.c)
 *     sub_1800A40D4 @ 0x1800A40D4 (sub_1800A40D4.c)
 *     sub_1800B7CE0 @ 0x1800B7CE0 (sub_1800B7CE0.c)
 *     sub_1800F2B04 @ 0x1800F2B04 (sub_1800F2B04.c)
 *     sub_1800F3710 @ 0x1800F3710 (sub_1800F3710.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18011E0DC (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=25
__int64 __fastcall sub_1800E8000(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r9
  __int64 v6; // r12
  _QWORD *v7; // rax
  __int64 v8; // r9
  __int64 v9; // r13
  _QWORD *v10; // rax
  __int64 v11; // r9
  _QWORD *v12; // rax
  __int64 v13; // r9
  __int64 v14; // r15
  _QWORD *v15; // rax
  __int64 v16; // r9
  __int64 *v17; // r14
  __int64 v18; // rsi
  __int64 *v19; // rax
  volatile signed __int32 *v20; // rbx
  __int64 v21; // rax
  __int64 *v22; // rax
  volatile signed __int32 *v23; // rbx
  __int64 v24; // rax
  __int64 *v25; // rax
  volatile signed __int32 *v26; // rbx
  __int64 v27; // rax
  __int64 *v28; // rax
  volatile signed __int32 *v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rbx
  char v33; // [rsp+30h] [rbp-D0h]
  __int128 v34; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v35; // [rsp+50h] [rbp-B0h]
  __int64 v36[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v37[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v38[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v39[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v40[3]; // [rsp+98h] [rbp-68h] BYREF
  __m128i v41; // [rsp+B0h] [rbp-50h] BYREF
  __m128i v42; // [rsp+C0h] [rbp-40h] BYREF
  __m128i v43; // [rsp+D0h] [rbp-30h] BYREF
  __m128i v44; // [rsp+E0h] [rbp-20h] BYREF
  __m128i v45; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v46[2]; // [rsp+100h] [rbp+0h] BYREF
  __int128 v47; // [rsp+110h] [rbp+10h]
  _QWORD v48[2]; // [rsp+120h] [rbp+20h] BYREF
  __int128 v49; // [rsp+130h] [rbp+30h]
  int v50; // [rsp+140h] [rbp+40h] BYREF
  __int64 v51; // [rsp+148h] [rbp+48h]
  __int128 v52; // [rsp+150h] [rbp+50h]
  __int64 v53; // [rsp+160h] [rbp+60h]
  __int64 v54; // [rsp+168h] [rbp+68h]
  int v55; // [rsp+170h] [rbp+70h] BYREF
  __int64 v56; // [rsp+178h] [rbp+78h]
  __int128 v57; // [rsp+180h] [rbp+80h]
  __int64 v58; // [rsp+190h] [rbp+90h]
  __int64 v59; // [rsp+198h] [rbp+98h]
  int v60; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v61; // [rsp+1A8h] [rbp+A8h]
  __int128 v62; // [rsp+1B0h] [rbp+B0h]
  __int64 v63; // [rsp+1C0h] [rbp+C0h]
  __int64 v64; // [rsp+1C8h] [rbp+C8h]
  int v65; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v66; // [rsp+1D8h] [rbp+D8h]
  __int128 v67; // [rsp+1E0h] [rbp+E0h]
  __int64 v68; // [rsp+1F0h] [rbp+F0h]
  __int64 v69; // [rsp+1F8h] [rbp+F8h]
  __int64 *v70; // [rsp+200h] [rbp+100h]
  __int64 *v71; // [rsp+208h] [rbp+108h]
  __int64 *v72; // [rsp+210h] [rbp+110h]
  __int64 *v73; // [rsp+218h] [rbp+118h]
  __int64 *v74; // [rsp+220h] [rbp+120h]
  __int64 *v75; // [rsp+228h] [rbp+128h]
  __int64 *v76; // [rsp+230h] [rbp+130h]
  __int64 *v77; // [rsp+238h] [rbp+138h]
  __int64 *v78; // [rsp+240h] [rbp+140h]
  __int64 *v79; // [rsp+248h] [rbp+148h]
  __int64 v80; // [rsp+250h] [rbp+150h] BYREF
  volatile signed __int32 *v81; // [rsp+258h] [rbp+158h]
  __int64 v82; // [rsp+260h] [rbp+160h] BYREF
  volatile signed __int32 *v83; // [rsp+268h] [rbp+168h]
  __int64 v84; // [rsp+270h] [rbp+170h] BYREF
  volatile signed __int32 *v85; // [rsp+278h] [rbp+178h]
  __int64 v86; // [rsp+280h] [rbp+180h] BYREF
  volatile signed __int32 *v87; // [rsp+288h] [rbp+188h]
  _QWORD v88[2]; // [rsp+290h] [rbp+190h] BYREF
  __int128 v89; // [rsp+2A0h] [rbp+1A0h]
  __int64 v90; // [rsp+2B0h] [rbp+1B0h] BYREF
  __int128 v91; // [rsp+2C0h] [rbp+1C0h]
  _QWORD v92[2]; // [rsp+2D0h] [rbp+1D0h] BYREF
  __int128 v93; // [rsp+2E0h] [rbp+1E0h]
  __int64 v94; // [rsp+2F0h] [rbp+1F0h] BYREF
  __int128 v95; // [rsp+300h] [rbp+200h]
  _QWORD v96[2]; // [rsp+310h] [rbp+210h] BYREF
  __int128 v97; // [rsp+320h] [rbp+220h]
  __int64 v98; // [rsp+330h] [rbp+230h] BYREF
  __int128 v99; // [rsp+340h] [rbp+240h]
  __int64 v100; // [rsp+350h] [rbp+250h] BYREF
  __int128 v101; // [rsp+360h] [rbp+260h]
  __int128 v102; // [rsp+370h] [rbp+270h] BYREF
  __int128 v103; // [rsp+380h] [rbp+280h] BYREF
  __int128 v104; // [rsp+390h] [rbp+290h] BYREF
  __int128 v105; // [rsp+3A0h] [rbp+2A0h] BYREF
  __int128 v106; // [rsp+3B0h] [rbp+2B0h] BYREF
  _QWORD v107[2]; // [rsp+3C0h] [rbp+2C0h] BYREF
  __int64 v108; // [rsp+3D0h] [rbp+2D0h] BYREF

  v106 = 0LL;
  v89 = 0LL;
  sub_18001CDF8(v88, (__int64)&qword_18020C4A0);
  v91 = 0LL;
  sub_18001CDF8(&v90, (__int64)&qword_18020C480);
  v42.m128i_i64[0] = (__int64)v88;
  v42.m128i_i64[1] = (__int64)v92;
  sub_1800B7CE0((__int64 *)&v106, &v42);
  `eh vector destructor iterator'(v88, 0x20uLL, 2uLL, (void (*)(void *))std::string::_Tidy_deallocate);
  v105 = 0LL;
  v47 = 0LL;
  sub_18001CDF8(v46, (__int64)&qword_18020C4A0);
  v43.m128i_i64[0] = (__int64)v46;
  v43.m128i_i64[1] = (__int64)v48;
  sub_1800B7CE0((__int64 *)&v105, &v43);
  `eh vector destructor iterator'(v46, 0x20uLL, 1uLL, (void (*)(void *))std::string::_Tidy_deallocate);
  v104 = 0LL;
  v93 = 0LL;
  sub_18001CDF8(v92, (__int64)&qword_18020C4E0);
  v95 = 0LL;
  sub_18001CDF8(&v94, (__int64)&qword_18020C4A0);
  v44.m128i_i64[0] = (__int64)v92;
  v44.m128i_i64[1] = (__int64)v96;
  sub_1800B7CE0((__int64 *)&v104, &v44);
  `eh vector destructor iterator'(v92, 0x20uLL, 2uLL, (void (*)(void *))std::string::_Tidy_deallocate);
  v103 = 0LL;
  v97 = 0LL;
  sub_18001CDF8(v96, (__int64)&qword_18020C4E0);
  v99 = 0LL;
  sub_18001CDF8(&v98, (__int64)&qword_18020C4A0);
  v101 = 0LL;
  sub_18001CDF8(&v100, (__int64)&qword_18020C480);
  v45.m128i_i64[0] = (__int64)v96;
  v45.m128i_i64[1] = (__int64)&v102;
  sub_1800B7CE0((__int64 *)&v103, &v45);
  `eh vector destructor iterator'(v96, 0x20uLL, 3uLL, (void (*)(void *))std::string::_Tidy_deallocate);
  v36[0] = 0LL;
  v36[1] = 0LL;
  v70 = v36;
  v71 = v36;
  v4 = operator new(0x40uLL);
  *v4 = v4;
  v4[1] = v4;
  v4[2] = v4;
  *((_WORD *)v4 + 12) = 257;
  v36[0] = (__int64)v4;
  sub_1800A1FF8(v36, &v105, v33, v5);
  v6 = sub_1800A0450(a2, v36);
  v37[0] = 0LL;
  v37[1] = 0LL;
  v72 = v37;
  v73 = v37;
  v7 = operator new(0x40uLL);
  *v7 = v7;
  v7[1] = v7;
  v7[2] = v7;
  *((_WORD *)v7 + 12) = 257;
  v37[0] = (__int64)v7;
  sub_1800A1FF8(v37, &v106, v33, v8);
  v9 = sub_1800A0450(a2, v37);
  v38[0] = 0LL;
  v38[1] = 0LL;
  v74 = v38;
  v75 = v38;
  v10 = operator new(0x40uLL);
  *v10 = v10;
  v10[1] = v10;
  v10[2] = v10;
  *((_WORD *)v10 + 12) = 257;
  v38[0] = (__int64)v10;
  sub_1800A1FF8(v38, &v104, v33, v11);
  v35 = sub_1800A0450(a2, v38);
  v39[0] = 0LL;
  v39[1] = 0LL;
  v76 = v39;
  v77 = v39;
  v12 = operator new(0x40uLL);
  *v12 = v12;
  v12[1] = v12;
  v12[2] = v12;
  *((_WORD *)v12 + 12) = 257;
  v39[0] = (__int64)v12;
  sub_1800A1FF8(v39, &v103, v33, v13);
  v14 = sub_1800A0450(a2, v39);
  v34 = 0LL;
  v102 = 0LL;
  v49 = 0LL;
  sub_18001CDF8(v48, (__int64)&qword_18020C5C0);
  v41.m128i_i64[0] = (__int64)v48;
  v41.m128i_i64[1] = (__int64)&v50;
  sub_1800B7CE0((__int64 *)&v102, &v41);
  `eh vector destructor iterator'(v48, 0x20uLL, 1uLL, (void (*)(void *))std::string::_Tidy_deallocate);
  v40[0] = 0LL;
  v40[1] = 0LL;
  v78 = v40;
  v79 = v40;
  v15 = operator new(0x40uLL);
  *v15 = v15;
  v15[1] = v15;
  v15[2] = v15;
  *((_WORD *)v15 + 12) = 257;
  v40[0] = (__int64)v15;
  sub_1800A1FF8(v40, &v102, v33, v16);
  v107[0] = sub_1800A0450(a2, v40);
  v107[1] = 0LL;
  v17 = v107;
  do
  {
    v18 = *v17;
    v19 = sub_1800A40D4(*(_QWORD *)(a1 + 56), &v80, v14 | *v17, 0LL, 1);
    std::shared_ptr<__ExceptionPtr>::operator=(&v34, v19);
    v20 = v81;
    if ( v81 )
    {
      if ( _InterlockedExchangeAdd(v81 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v20)(v20);
        if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
      }
    }
    v21 = *(_QWORD *)(a1 + 112);
    v50 = 0;
    v51 = v21;
    v52 = 0LL;
    v53 = 0LL;
    v54 = 0LL;
    sub_1800F3710(v34, &v50);
    sub_1800F2B04(v34, 1, 1, 3, 1);
    v22 = sub_1800A40D4(*(_QWORD *)(a1 + 56), &v82, v35 | v18, 0LL, 1);
    std::shared_ptr<__ExceptionPtr>::operator=(&v34, v22);
    v23 = v83;
    if ( v83 )
    {
      if ( _InterlockedExchangeAdd(v83 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v23)(v23);
        if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
      }
    }
    v24 = *(_QWORD *)(a1 + 112);
    v55 = 0;
    v56 = v24;
    v57 = 0LL;
    v58 = 0LL;
    v59 = 0LL;
    sub_1800F3710(v34, &v55);
    sub_1800F2B04(v34, 0, 1, 3, 1);
    v25 = sub_1800A40D4(*(_QWORD *)(a1 + 56), &v84, v9 | v18, 0LL, 1);
    std::shared_ptr<__ExceptionPtr>::operator=(&v34, v25);
    v26 = v85;
    if ( v85 )
    {
      if ( _InterlockedExchangeAdd(v85 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v26)(v26);
        if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
      }
    }
    v27 = *(_QWORD *)(a1 + 112);
    v60 = 0;
    v61 = v27;
    v62 = 0LL;
    v63 = 0LL;
    v64 = 0LL;
    sub_1800F3710(v34, &v60);
    sub_1800F2B04(v34, 1, 1, 3, 1);
    v28 = sub_1800A40D4(*(_QWORD *)(a1 + 56), &v86, v6 | v18, 0LL, 1);
    std::shared_ptr<__ExceptionPtr>::operator=(&v34, v28);
    v29 = v87;
    if ( v87 )
    {
      if ( _InterlockedExchangeAdd(v87 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v29)(v29);
        if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
      }
    }
    v30 = *(_QWORD *)(a1 + 112);
    v65 = 0;
    v66 = v30;
    v67 = 0LL;
    v68 = 0LL;
    v69 = 0LL;
    sub_1800F3710(v34, &v65);
    sub_1800F2B04(v34, 0, 1, 3, 1);
    ++v17;
  }
  while ( v17 != &v108 );
  sub_18009C6C8((__int64 *)&v102, (__int64)&v102);
  if ( *((_QWORD *)&v34 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v34 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v31 = *((_QWORD *)&v34 + 1);
      (***((void (__fastcall ****)(_QWORD))&v34 + 1))(*((_QWORD *)&v34 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v31 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v34 + 1) + 8LL))(*((_QWORD *)&v34 + 1));
    }
  }
  sub_18009C6C8((__int64 *)&v103, (__int64)&v103);
  sub_18009C6C8((__int64 *)&v104, (__int64)&v104);
  sub_18009C6C8((__int64 *)&v105, (__int64)&v105);
  return sub_18009C6C8((__int64 *)&v106, (__int64)&v106);
}
