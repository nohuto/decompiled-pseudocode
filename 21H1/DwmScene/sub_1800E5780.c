/*
 * XREFs of sub_1800E5780 @ 0x1800E5780
 * Callers:
 *     <none>
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x18000FF20 (--0bad_function_call@std@@QEAA@XZ.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 *     sub_18009C6C8 @ 0x18009C6C8 (sub_18009C6C8.c)
 *     sub_18009FE8C @ 0x18009FE8C (sub_18009FE8C.c)
 *     sub_1800A0450 @ 0x1800A0450 (sub_1800A0450.c)
 *     sub_1800A1FF8 @ 0x1800A1FF8 (sub_1800A1FF8.c)
 *     sub_1800A3AB0 @ 0x1800A3AB0 (sub_1800A3AB0.c)
 *     sub_1800A3D20 @ 0x1800A3D20 (sub_1800A3D20.c)
 *     sub_1800A40A0 @ 0x1800A40A0 (sub_1800A40A0.c)
 *     sub_1800A40D4 @ 0x1800A40D4 (sub_1800A40D4.c)
 *     sub_1800A4718 @ 0x1800A4718 (sub_1800A4718.c)
 *     sub_1800A4954 @ 0x1800A4954 (sub_1800A4954.c)
 *     sub_1800B7CE0 @ 0x1800B7CE0 (sub_1800B7CE0.c)
 *     sub_1800CCD24 @ 0x1800CCD24 (sub_1800CCD24.c)
 *     sub_1800E4960 @ 0x1800E4960 (sub_1800E4960.c)
 *     sub_1800E657C @ 0x1800E657C (sub_1800E657C.c)
 *     sub_1800E6608 @ 0x1800E6608 (sub_1800E6608.c)
 *     sub_1800F2B04 @ 0x1800F2B04 (sub_1800F2B04.c)
 *     sub_1800F2CE0 @ 0x1800F2CE0 (sub_1800F2CE0.c)
 *     sub_1800F3710 @ 0x1800F3710 (sub_1800F3710.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18011E0DC (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_1800E5780(__int64 a1, __int128 *a2, int **a3)
{
  __int128 *v4; // r15
  __int64 v5; // rsi
  __int64 v6; // rdx
  signed __int32 v7; // eax
  __int64 *v8; // rax
  __int64 *v9; // rdi
  volatile signed __int32 *v10; // rbx
  __int64 v11; // r12
  _QWORD *v12; // rax
  __int64 v13; // r9
  char v14; // al
  int *v15; // r14
  int *v16; // r13
  char v17; // si
  char v18; // r15
  __int64 *v19; // rax
  volatile signed __int32 *v20; // rbx
  __int64 v21; // rbx
  __int64 *v22; // rax
  volatile signed __int32 *v23; // rbx
  __int64 *v24; // rax
  volatile signed __int32 *v25; // rbx
  __int64 v26; // rbx
  char v28; // [rsp+30h] [rbp-D0h]
  __int128 v29; // [rsp+40h] [rbp-C0h] BYREF
  __int128 *v30; // [rsp+50h] [rbp-B0h]
  int v31; // [rsp+58h] [rbp-A8h]
  __int64 v32[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v33; // [rsp+70h] [rbp-90h] BYREF
  char v34[16]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v35; // [rsp+90h] [rbp-70h]
  __int64 v36; // [rsp+98h] [rbp-68h]
  __int64 v37; // [rsp+A0h] [rbp-60h]
  __int128 *v38; // [rsp+A8h] [rbp-58h]
  __m128i v39; // [rsp+B0h] [rbp-50h] BYREF
  size_t v40[4]; // [rsp+C0h] [rbp-40h] BYREF
  char v41[16]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v42; // [rsp+F0h] [rbp-10h]
  __int64 v43; // [rsp+F8h] [rbp-8h]
  int v44; // [rsp+100h] [rbp+0h] BYREF
  __int64 v45; // [rsp+108h] [rbp+8h]
  __int128 v46; // [rsp+110h] [rbp+10h]
  __int64 v47; // [rsp+120h] [rbp+20h]
  __int64 v48; // [rsp+128h] [rbp+28h]
  int v49; // [rsp+130h] [rbp+30h] BYREF
  __int64 v50; // [rsp+138h] [rbp+38h]
  __int128 v51; // [rsp+140h] [rbp+40h]
  __int64 v52; // [rsp+150h] [rbp+50h]
  __int64 v53; // [rsp+158h] [rbp+58h]
  int v54; // [rsp+160h] [rbp+60h] BYREF
  __int64 v55; // [rsp+168h] [rbp+68h]
  __int128 v56; // [rsp+170h] [rbp+70h]
  __int64 v57; // [rsp+180h] [rbp+80h]
  __int64 v58; // [rsp+188h] [rbp+88h]
  __int64 v59; // [rsp+190h] [rbp+90h] BYREF
  volatile signed __int32 *v60; // [rsp+198h] [rbp+98h]
  __int64 *v61; // [rsp+1A0h] [rbp+A0h]
  __int64 *v62; // [rsp+1A8h] [rbp+A8h]
  char v63[8]; // [rsp+1B0h] [rbp+B0h] BYREF
  volatile signed __int32 *v64; // [rsp+1B8h] [rbp+B8h]
  __int64 v65; // [rsp+1C0h] [rbp+C0h] BYREF
  volatile signed __int32 *v66; // [rsp+1C8h] [rbp+C8h]
  char v67[8]; // [rsp+1D0h] [rbp+D0h] BYREF
  volatile signed __int32 *v68; // [rsp+1D8h] [rbp+D8h]
  _QWORD v69[2]; // [rsp+1E0h] [rbp+E0h] BYREF
  __int128 v70; // [rsp+1F0h] [rbp+F0h]
  __int64 v71; // [rsp+200h] [rbp+100h] BYREF
  __int128 v72; // [rsp+210h] [rbp+110h]
  __int64 v73; // [rsp+220h] [rbp+120h] BYREF
  __int128 v74; // [rsp+230h] [rbp+130h]
  __int64 v75; // [rsp+240h] [rbp+140h] BYREF
  __int128 v76; // [rsp+250h] [rbp+150h]
  _BYTE pExceptionObject[24]; // [rsp+260h] [rbp+160h] BYREF
  __int128 v78; // [rsp+278h] [rbp+178h] BYREF

  v4 = a2;
  v38 = a2;
  v5 = a1;
  v37 = a1;
  v30 = &v33;
  v33 = 0LL;
  v6 = *(_QWORD *)(a1 + 16);
  if ( !v6 )
  {
LABEL_31:
    std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject);
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  do
  {
    v7 = *(_DWORD *)(v6 + 8);
    if ( !v7 )
      goto LABEL_31;
  }
  while ( v7 != _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), v7 + 1, v7) );
  v33 = *(_OWORD *)(a1 + 8);
  v40[2] = 0LL;
  v40[3] = 0LL;
  sub_18001CDF8(v40, (__int64)&qword_18020CBE8);
  v8 = sub_18009FE8C(v4, &v59, v40, &v33);
  v9 = (__int64 *)(v5 + 56);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v5 + 56), v8);
  v10 = v60;
  if ( v60 )
  {
    if ( _InterlockedExchangeAdd(v60 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  v36 = 15LL;
  v35 = 15LL;
  strcpy(v34, "BackgroundUnlit");
  sub_1800E657C(*v9, v34);
  sub_1800E6608(*v9, a3);
  v11 = sub_1800CCD24(0, 3, 0LL);
  sub_1800A3AB0(*v9, (size_t *)&qword_18020CC08);
  sub_1800A3AB0(*v9, (size_t *)&qword_18020CC28);
  sub_1800A3AB0(*v9, (size_t *)&qword_18020CC48);
  sub_1800A3AB0(*v9, (size_t *)aVignette);
  v31 = sub_1800A3AB0(*v9, (size_t *)&qword_18020CC88);
  v78 = 0LL;
  v70 = 0LL;
  sub_18001CDF8(v69, (__int64)&qword_18020CC08);
  v72 = 0LL;
  sub_18001CDF8(&v71, (__int64)&qword_18020CC28);
  v74 = 0LL;
  sub_18001CDF8(&v73, (__int64)&qword_18020CC48);
  v76 = 0LL;
  sub_18001CDF8(&v75, (__int64)aVignette);
  v39.m128i_i64[0] = (__int64)v69;
  v39.m128i_i64[1] = (__int64)pExceptionObject;
  sub_1800B7CE0((__int64 *)&v78, &v39);
  `eh vector destructor iterator'(v69, 0x20uLL, 4uLL, (void (*)(void *))std::string::_Tidy_deallocate);
  v32[0] = 0LL;
  v32[1] = 0LL;
  v61 = v32;
  v62 = v32;
  v12 = operator new(0x40uLL);
  *v12 = v12;
  v12[1] = v12;
  v12[2] = v12;
  *((_WORD *)v12 + 12) = 257;
  v32[0] = (__int64)v12;
  sub_1800A1FF8(v32, &v78, v28, v13);
  v30 = (__int128 *)sub_1800A0450((__int64)v4, v32);
  v14 = sub_1800A3AB0(*v9, (size_t *)&qword_18020CCA8);
  v15 = *a3;
  v16 = a3[1];
  if ( v15 != v16 )
  {
    v17 = v31;
    v18 = v14;
    do
    {
      sub_1800A3D20(*v9, *v15);
      v29 = 0LL;
      v19 = (__int64 *)sub_1800A40A0(*v9, (__int64)v63, v17);
      std::shared_ptr<__ExceptionPtr>::operator=(&v29, v19);
      v20 = v64;
      if ( v64 )
      {
        if ( _InterlockedExchangeAdd(v64 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v20)(v20);
          if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
        }
      }
      v44 = 0;
      v45 = v11;
      v46 = 0LL;
      v47 = 0LL;
      v48 = 0LL;
      v21 = v29;
      sub_1800F3710(v29, &v44);
      sub_1800F2B04(v21, 0, 1, 3, 1);
      v43 = 15LL;
      v42 = 0LL;
      v41[0] = 0;
      sub_1800F2CE0(v21, 5LL, v41);
      v22 = sub_1800A40D4(*v9, &v65, (__int64)v30, 0LL, 1);
      std::shared_ptr<__ExceptionPtr>::operator=(&v29, v22);
      v23 = v66;
      if ( v66 )
      {
        if ( _InterlockedExchangeAdd(v66 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v23)(v23);
          if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
        }
      }
      v49 = 0;
      v50 = v11;
      v51 = 0LL;
      v52 = 0LL;
      v53 = 0LL;
      sub_1800F3710(v29, &v49);
      sub_1800F2B04(v29, 0, 1, 1, 1);
      v24 = (__int64 *)sub_1800A40A0(*v9, (__int64)v67, v18);
      std::shared_ptr<__ExceptionPtr>::operator=(&v29, v24);
      v25 = v68;
      if ( v68 )
      {
        if ( _InterlockedExchangeAdd(v68 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v25)(v25);
          if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
        }
      }
      v54 = 0;
      v55 = v11;
      v56 = 0LL;
      v57 = 0LL;
      v58 = 0LL;
      sub_1800F3710(v29, &v54);
      sub_1800F2B04(v29, 1, 1, 1, 1);
      sub_1800A4954(*v9);
      if ( *((_QWORD *)&v29 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v29 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          v26 = *((_QWORD *)&v29 + 1);
          (***((void (__fastcall ****)(_QWORD))&v29 + 1))(*((_QWORD *)&v29 + 1));
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v26 + 12), 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v29 + 1) + 8LL))(*((_QWORD *)&v29 + 1));
        }
      }
      ++v15;
    }
    while ( v15 != v16 );
    v5 = v37;
    v4 = v38;
  }
  sub_1800E4960(v5, v4);
  sub_1800A4718(*v9);
  return sub_18009C6C8((__int64 *)&v78, (__int64)&v78);
}
