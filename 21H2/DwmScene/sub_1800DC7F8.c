/*
 * XREFs of sub_1800DC7F8 @ 0x1800DC7F8
 * Callers:
 *     sub_18006BD60 @ 0x18006BD60 (sub_18006BD60.c)
 * Callees:
 *     sub_18000FC14 @ 0x18000FC14 (sub_18000FC14.c)
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x180010000 (--0bad_function_call@std@@QEAA@XZ.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800114D8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_18001277C @ 0x18001277C (sub_18001277C.c)
 *     sub_180013CC8 @ 0x180013CC8 (sub_180013CC8.c)
 *     sub_180013F6C @ 0x180013F6C (sub_180013F6C.c)
 *     sub_180013FD0 @ 0x180013FD0 (sub_180013FD0.c)
 *     sub_180017874 @ 0x180017874 (sub_180017874.c)
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     sub_180066D6C @ 0x180066D6C (sub_180066D6C.c)
 *     sub_180068194 @ 0x180068194 (sub_180068194.c)
 *     sub_1800703D4 @ 0x1800703D4 (sub_1800703D4.c)
 *     sub_18007AB84 @ 0x18007AB84 (sub_18007AB84.c)
 *     sub_18007B2B4 @ 0x18007B2B4 (sub_18007B2B4.c)
 *     sub_1800854DC @ 0x1800854DC (sub_1800854DC.c)
 *     sub_180089274 @ 0x180089274 (sub_180089274.c)
 *     sub_18008BAC0 @ 0x18008BAC0 (sub_18008BAC0.c)
 *     sub_18008BFC0 @ 0x18008BFC0 (sub_18008BFC0.c)
 *     sub_18008D2D0 @ 0x18008D2D0 (sub_18008D2D0.c)
 *     sub_18009272C @ 0x18009272C (sub_18009272C.c)
 *     sub_18009D428 @ 0x18009D428 (sub_18009D428.c)
 *     sub_1800A1030 @ 0x1800A1030 (sub_1800A1030.c)
 *     sub_1800A656C @ 0x1800A656C (sub_1800A656C.c)
 *     sub_1800A95F8 @ 0x1800A95F8 (sub_1800A95F8.c)
 *     sub_1800AA664 @ 0x1800AA664 (sub_1800AA664.c)
 *     sub_1800AD52C @ 0x1800AD52C (sub_1800AD52C.c)
 *     sub_1800DA948 @ 0x1800DA948 (sub_1800DA948.c)
 *     sub_1800FB73C @ 0x1800FB73C (sub_1800FB73C.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_1800DC7F8(__int64 a1, __int64 a2)
{
  __int64 v4; // r12
  __int64 *v5; // rax
  __int64 *v6; // r14
  volatile signed __int32 *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdx
  signed __int32 v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 *v17; // rax
  __int64 *v18; // rsi
  volatile signed __int32 *v19; // rbx
  _QWORD *v20; // rax
  __int64 *v21; // rsi
  __int64 v22; // r8
  volatile signed __int32 *v23; // rbx
  __int64 v24; // rbx
  __int64 *v25; // rax
  __int64 *v26; // rsi
  volatile signed __int32 *v27; // rbx
  __int64 *v28; // rax
  volatile signed __int32 *v29; // rbx
  __int64 *v30; // rax
  volatile signed __int32 *v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 *v34; // rax
  volatile signed __int32 *v35; // rbx
  __int64 v36; // rbx
  __int64 *v37; // rax
  volatile signed __int32 *v38; // rbx
  volatile signed __int32 *v39; // rbx
  __int64 v40; // rcx
  __int64 v41; // rbx
  __int64 result; // rax
  __int64 v43; // rbx
  volatile signed __int32 *v44; // rbx
  volatile signed __int32 *v45; // rbx
  __int128 v46; // [rsp+28h] [rbp-D8h] BYREF
  __int64 *v47; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v48; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v49; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v50[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v51[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v52[2]; // [rsp+80h] [rbp-80h] BYREF
  __m128i si128; // [rsp+90h] [rbp-70h]
  __int64 v54; // [rsp+A0h] [rbp-60h] BYREF
  volatile signed __int32 *v55; // [rsp+A8h] [rbp-58h]
  __int64 v56[4]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v57[4]; // [rsp+D0h] [rbp-30h] BYREF
  size_t v58[4]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v59[5]; // [rsp+110h] [rbp+10h] BYREF
  __int64 *v60; // [rsp+138h] [rbp+38h]
  __int64 *v61; // [rsp+140h] [rbp+40h]
  __int64 v62; // [rsp+148h] [rbp+48h] BYREF
  volatile signed __int32 *v63; // [rsp+150h] [rbp+50h]
  __int128 v64; // [rsp+158h] [rbp+58h]
  __int64 v65; // [rsp+168h] [rbp+68h] BYREF
  volatile signed __int32 *v66; // [rsp+170h] [rbp+70h]
  __int64 v67; // [rsp+178h] [rbp+78h] BYREF
  volatile signed __int32 *v68; // [rsp+180h] [rbp+80h]
  __int64 v69; // [rsp+188h] [rbp+88h] BYREF
  volatile signed __int32 *v70; // [rsp+190h] [rbp+90h]
  __int64 v71; // [rsp+198h] [rbp+98h] BYREF
  volatile signed __int32 *v72; // [rsp+1A0h] [rbp+A0h]
  _BYTE v73[8]; // [rsp+1A8h] [rbp+A8h] BYREF
  volatile signed __int32 *v74; // [rsp+1B0h] [rbp+B0h]
  __int64 v75; // [rsp+1B8h] [rbp+B8h] BYREF
  volatile signed __int32 *v76; // [rsp+1C0h] [rbp+C0h]
  _BYTE pExceptionObject[24]; // [rsp+1C8h] [rbp+C8h] BYREF
  __int128 v78; // [rsp+1E0h] [rbp+E0h] BYREF
  __int128 v79; // [rsp+1F0h] [rbp+F0h] BYREF
  int v80; // [rsp+200h] [rbp+100h] BYREF
  __int64 v81; // [rsp+204h] [rbp+104h]
  int v82; // [rsp+20Ch] [rbp+10Ch]
  int v83; // [rsp+210h] [rbp+110h]
  int v84; // [rsp+214h] [rbp+114h]
  int v85; // [rsp+218h] [rbp+118h]
  __int128 v86; // [rsp+21Ch] [rbp+11Ch]
  int v87; // [rsp+22Ch] [rbp+12Ch]
  int v88; // [rsp+230h] [rbp+130h]

  *(_QWORD *)(a1 + 32) = a2;
  v4 = sub_1800703D4(a2);
  v5 = sub_18008BFC0(&v62, v4, 0);
  v6 = (__int64 *)(a1 + 288);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 288), v5);
  v7 = v63;
  if ( v63 )
  {
    if ( _InterlockedExchangeAdd(v63 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  v59[4] = (__int64)&v48;
  v48 = 0LL;
  v8 = *(_QWORD *)(a1 + 296);
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 12));
    v8 = *(_QWORD *)(a1 + 296);
  }
  *(_QWORD *)&v48 = (*v6 + 16) & -(__int64)(*v6 != 0);
  *((_QWORD *)&v48 + 1) = v8;
  v9 = *(_QWORD *)(a1 + 32);
  v64 = 0LL;
  v10 = *(_QWORD *)(v9 + 16);
  if ( !v10 )
  {
LABEL_70:
    std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject);
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  do
  {
    v11 = *(_DWORD *)(v10 + 8);
    if ( !v11 )
      goto LABEL_70;
  }
  while ( v11 != _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 8), v11 + 1, v11) );
  v12 = *(_QWORD *)(v9 + 16);
  v50[0] = (*(_QWORD *)(v9 + 8) + 24LL) & -(__int64)(*(_QWORD *)(v9 + 8) != 0LL);
  v50[1] = v12;
  v64 = 0LL;
  sub_180066D6C((__int64)v50, (__int64)&v48);
  v79 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(v52[0]) = 0;
  LOBYTE(v13) = 0;
  sub_18000FC14(v52, 0x15uLL, v13, "ImageProcessingCamera");
  v57[2] = 0LL;
  v57[3] = 0LL;
  sub_18001277C(v57, (__int64)&qword_18020F748);
  v14 = *v6;
  v15 = sub_1800854DC(v52);
  sub_18008BAC0(v14, (__int64)&v79, v15, v57);
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v16 = v52[0];
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v16 = *(_QWORD *)(v52[0] - 8);
      if ( (unsigned __int64)(v52[0] - v16 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v16, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v16);
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(v52[0]) = 0;
  v17 = sub_1800DA948(v79, &v65);
  v18 = (__int64 *)(a1 + 272);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 272), v17);
  v19 = v66;
  if ( v66 )
  {
    if ( _InterlockedExchangeAdd(v66 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
      if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
    }
  }
  sub_1800AD52C(*v18, (__int64)&unk_18020F728);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)*v18 + 16LL))(*v18);
  v20 = (_QWORD *)sub_1800703D4(a2);
  sub_180017874(v20, &v54, 1u);
  v21 = (__int64 *)(a1 + 304);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 304), &v54);
  v23 = v55;
  if ( v55 )
  {
    if ( _InterlockedExchangeAdd(v55 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v23)(v23);
      if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
    }
  }
  v56[2] = 0LL;
  v56[3] = 15LL;
  LOBYTE(v56[0]) = 0;
  LOBYTE(v22) = 0;
  sub_18000FC14(v56, 0x20uLL, v22, "Image Processing Manager Sampler");
  sub_180068194(*v21, v56);
  v81 = 0LL;
  v82 = 0;
  v83 = 0;
  v84 = 1;
  v85 = 7;
  v87 = 0;
  v88 = 2139095039;
  v80 = 2;
  v86 = 0LL;
  sub_1800A1030((_QWORD *)*v21, &v80, 0LL);
  v24 = sub_18007B2B4(v4);
  v58[2] = 0LL;
  v58[3] = 0LL;
  sub_180020B7C(v58, (__int64)&qword_180214038);
  v25 = sub_1800A656C(v24, &v67, v58);
  v26 = (__int64 *)(a1 + 432);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 432), v25);
  v27 = v68;
  if ( v68 )
  {
    if ( _InterlockedExchangeAdd(v68 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v27)(v27);
      if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
    }
  }
  v28 = sub_1800AA664(*v26, &v69);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 416), v28);
  v29 = v70;
  if ( v70 )
  {
    if ( _InterlockedExchangeAdd(v70 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v29)(v29);
      if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
    }
  }
  v30 = sub_1800A95F8(*v26, &v71);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 400), v30);
  v31 = v72;
  if ( v72 )
  {
    if ( _InterlockedExchangeAdd(v72 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v31)(v31);
      if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
    }
  }
  v32 = sub_1800703D4(a2);
  v33 = sub_18007AB84(v32, 1);
  *(_DWORD *)(a1 + 448) = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v33 + 72LL))(
                            v33,
                            &unk_1802110C8,
                            0LL);
  sub_18009272C(*(_QWORD *)(a1 + 400), (__int64)&qword_1802140D8, 1);
  v34 = (__int64 *)sub_1800FB73C(v73, v4);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 320), v34);
  v35 = v74;
  if ( v74 )
  {
    if ( _InterlockedExchangeAdd(v74 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v35)(v35);
      if ( _InterlockedExchangeAdd(v35 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 8LL))(v35);
    }
  }
  v78 = 0LL;
  v59[2] = 0LL;
  v59[3] = 0LL;
  sub_18001277C(v59, (__int64)&unk_18020F728);
  sub_18008D2D0(*v6, (__int64)&v78, v59);
  v46 = 0LL;
  v36 = v78;
  sub_180089274(v78);
  v47 = 0LL;
  v60 = *(__int64 **)(v36 + 384);
  v61 = *(__int64 **)(v36 + 376);
  sub_180013FD0(&v47, v61, v60, 0);
  if ( v47 == *(__int64 **)(v36 + 384) )
    v46 = 0LL;
  else
    sub_180013F6C((__int64 *)&v46, v47);
  if ( !(_QWORD)v46 )
  {
    v37 = sub_180013CC8(v78, &v75);
    std::shared_ptr<__ExceptionPtr>::operator=(&v46, v37);
    v38 = v76;
    if ( v76 )
    {
      if ( _InterlockedExchangeAdd(v76 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v38)(v38);
        if ( _InterlockedExchangeAdd(v38 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 8LL))(v38);
      }
    }
  }
  v39 = *(volatile signed __int32 **)(a1 + 328);
  if ( v39 )
  {
    _InterlockedIncrement(v39 + 2);
    v39 = *(volatile signed __int32 **)(a1 + 328);
  }
  v51[0] = *(_QWORD *)(a1 + 320);
  v51[1] = v39;
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v46 + 88), v51);
  if ( v39 )
  {
    if ( _InterlockedExchangeAdd(v39 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v39)(v39);
      if ( _InterlockedExchangeAdd(v39 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 8LL))(v39);
    }
  }
  v49 = 0LL;
  v40 = *(_QWORD *)(a1 + 376);
  if ( v40 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v40 + 8));
    v40 = *(_QWORD *)(a1 + 376);
  }
  *(_QWORD *)&v49 = *(_QWORD *)(a1 + 368);
  *((_QWORD *)&v49 + 1) = v40;
  v41 = v46;
  sub_18009D428(v46, &v49);
  *(_BYTE *)(v41 + 72) = 0;
  result = (__int64)std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 336), &v46);
  if ( *((_QWORD *)&v46 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v46 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v43 = *((_QWORD *)&v46 + 1);
      (***((void (__fastcall ****)(_QWORD))&v46 + 1))(*((_QWORD *)&v46 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v43 + 12));
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v46 + 1) + 8LL))(*((_QWORD *)&v46 + 1));
    }
  }
  v44 = (volatile signed __int32 *)*((_QWORD *)&v78 + 1);
  if ( *((_QWORD *)&v78 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v78 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v44)(v44);
      result = (unsigned int)_InterlockedDecrement(v44 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 8LL))(v44);
    }
  }
  v45 = (volatile signed __int32 *)*((_QWORD *)&v79 + 1);
  if ( *((_QWORD *)&v79 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v79 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v45)(v45);
      result = (unsigned int)_InterlockedDecrement(v45 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 8LL))(v45);
    }
  }
  return result;
}
