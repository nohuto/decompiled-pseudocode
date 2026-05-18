/*
 * XREFs of sub_1800C1D80 @ 0x1800C1D80
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FC14 @ 0x18000FC14 (sub_18000FC14.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800114D8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_18001277C @ 0x18001277C (sub_18001277C.c)
 *     sub_180013CC8 @ 0x180013CC8 (sub_180013CC8.c)
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     sub_180087A4C @ 0x180087A4C (sub_180087A4C.c)
 *     sub_18008933C @ 0x18008933C (sub_18008933C.c)
 *     sub_18008B8BC @ 0x18008B8BC (sub_18008B8BC.c)
 *     sub_18008D2D0 @ 0x18008D2D0 (sub_18008D2D0.c)
 *     sub_180092708 @ 0x180092708 (sub_180092708.c)
 *     sub_18009272C @ 0x18009272C (sub_18009272C.c)
 *     sub_180092894 @ 0x180092894 (sub_180092894.c)
 *     sub_180092A88 @ 0x180092A88 (sub_180092A88.c)
 *     sub_18009D428 @ 0x18009D428 (sub_18009D428.c)
 *     sub_1800A656C @ 0x1800A656C (sub_1800A656C.c)
 *     sub_1800A95F8 @ 0x1800A95F8 (sub_1800A95F8.c)
 *     sub_1800BB82C @ 0x1800BB82C (sub_1800BB82C.c)
 *     sub_1800FB8B8 @ 0x1800FB8B8 (sub_1800FB8B8.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall sub_1800C1D80(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rcx
  __m128i v7; // xmm6
  unsigned __int64 v8; // xmm6_8
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rdx
  _QWORD *v12; // rsi
  __int64 *v13; // rax
  __int64 *v14; // rdi
  volatile signed __int32 *v15; // rbx
  __int64 v16; // r8
  __int64 *v17; // rax
  volatile signed __int32 *v18; // rbx
  __int64 v19; // rcx
  __m128i v20; // xmm6
  unsigned __int64 v21; // xmm6_8
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // rbx
  volatile signed __int32 *v25; // rbx
  __int64 v26; // rbx
  volatile signed __int32 *v27; // rbx
  volatile signed __int32 *v28; // rbx
  volatile signed __int32 *v29; // rbx
  volatile signed __int32 *v30; // rbx
  volatile signed __int32 *v31; // rbx
  __int128 v32; // [rsp+30h] [rbp-D8h] BYREF
  __int128 v33; // [rsp+40h] [rbp-C8h] BYREF
  __m128i v34; // [rsp+58h] [rbp-B0h] BYREF
  __m128i v35; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v36; // [rsp+78h] [rbp-90h] BYREF
  __int128 v37; // [rsp+88h] [rbp-80h] BYREF
  __int128 v38; // [rsp+98h] [rbp-70h] BYREF
  __int128 v39; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v40[3]; // [rsp+B8h] [rbp-50h] BYREF
  unsigned __int64 v41; // [rsp+D0h] [rbp-38h]
  __int64 v42[2]; // [rsp+D8h] [rbp-30h] BYREF
  __m128i si128; // [rsp+E8h] [rbp-20h]
  size_t v44[4]; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v45[4]; // [rsp+118h] [rbp+10h] BYREF
  __int64 v46; // [rsp+138h] [rbp+30h] BYREF
  volatile signed __int32 *v47; // [rsp+140h] [rbp+38h]
  char v48[8]; // [rsp+148h] [rbp+40h] BYREF
  volatile signed __int32 *v49; // [rsp+150h] [rbp+48h]
  __int128 v50; // [rsp+158h] [rbp+50h] BYREF
  __int128 v51; // [rsp+168h] [rbp+60h] BYREF
  __int128 v52; // [rsp+178h] [rbp+70h] BYREF
  __m128i v53; // [rsp+188h] [rbp+80h] BYREF
  __m128i v54; // [rsp+198h] [rbp+90h] BYREF
  __int128 v55; // [rsp+1A8h] [rbp+A0h] BYREF

  v55 = 0LL;
  v44[2] = 0LL;
  v44[3] = 0LL;
  sub_180020B7C(v44, (__int64)&qword_180214418);
  sub_1800A656C(a2, &v55, v44);
  v51 = 0LL;
  sub_1800A95F8(v55, (__int64 *)&v51);
  sub_18009272C(v51, (__int64)&qword_180213518, 1);
  sub_180092708(v51);
  v50 = 0LL;
  v45[2] = 0LL;
  v45[3] = 0LL;
  sub_18001277C(v45, (__int64)&unk_18020F6E8);
  sub_18008D2D0(*a3, (__int64)&v50, v45);
  v54 = 0LL;
  sub_1800FB8B8(&v54, a1, 0LL);
  v52 = 0LL;
  v37 = 0LL;
  if ( *((_QWORD *)&v50 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v50 + 1) + 8LL));
  v37 = v50;
  sub_18008B8BC(*a3, (__int64)&v52, qword_180220C38, &v37);
  si128 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(v42[0]) = 0;
  sub_18000FC14(v42, 0x10uLL, 0LL, "PlanarReflection");
  sub_180087A4C(v52, v42);
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v6 = v42[0];
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v6 = *(_QWORD *)(v42[0] - 8);
      if ( (unsigned __int64)(v42[0] - v6 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v6, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v6);
  }
  v33 = 0LL;
  sub_180013CC8(v52, &v33);
  if ( v54.m128i_i64[1] )
    _InterlockedIncrement((volatile signed __int32 *)(v54.m128i_i64[1] + 8));
  v7 = v54;
  v34 = v54;
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v33 + 88), &v34);
  v8 = _mm_srli_si128(v7, 8).m128i_u64[0];
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 8), 0xFFFFFFFF) == 1 )
    {
      v9 = v34.m128i_i64[1];
      (**(void (__fastcall ***)(__int64))v34.m128i_i64[1])(v34.m128i_i64[1]);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v34.m128i_i64[1] + 8LL))(v34.m128i_i64[1]);
    }
  }
  v38 = 0LL;
  if ( *((_QWORD *)&v51 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v51 + 1) + 8LL));
  v38 = v51;
  sub_18009D428(v33, &v38);
  v10 = v52;
  sub_18008933C(v52);
  *(_QWORD *)(v10 + 448) &= ~2uLL;
  if ( (*(_BYTE *)(a1 + 560) & 1) != 0 )
  {
    v12 = (_QWORD *)sub_1800BB82C(*a3, v11);
    v13 = sub_1800A95F8(v55, &v46);
    v14 = v12 + 27;
    std::shared_ptr<__ExceptionPtr>::operator=(v12 + 27, v13);
    v15 = v47;
    if ( v47 )
    {
      if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
        if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
      }
    }
    sub_180092708(*v14);
    sub_180092A88(*v14, 3);
    sub_180092894((_QWORD *)*v14, 1, 1, 1);
    v53 = 0LL;
    LOBYTE(v16) = 1;
    sub_1800FB8B8(&v53, a1, v16);
    v39 = 0LL;
    if ( *((_QWORD *)&v50 + 1) )
      _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)&v50 + 1) + 8LL), 1u);
    v39 = v50;
    v17 = (__int64 *)sub_18008B8BC(*a3, (__int64)v48, qword_180220C40, &v39);
    std::shared_ptr<__ExceptionPtr>::operator=(v12 + 25, v17);
    v18 = v49;
    if ( v49 )
    {
      if ( _InterlockedExchangeAdd(v49 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
        if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
      }
    }
    v41 = 15LL;
    v40[2] = 10LL;
    strcpy((char *)v40, "GroundBack");
    sub_180087A4C(v12[25], v40);
    if ( v41 >= 0x10 )
    {
      v19 = v40[0];
      if ( v41 + 1 >= 0x1000 )
      {
        v19 = *(_QWORD *)(v40[0] - 8);
        if ( (unsigned __int64)(v40[0] - v19 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v19, v41 + 40);
          __debugbreak();
        }
      }
      j_j__o_free(v19);
    }
    v32 = 0LL;
    sub_180013CC8(v12[25], &v32);
    if ( v53.m128i_i64[1] )
      _InterlockedIncrement((volatile signed __int32 *)(v53.m128i_i64[1] + 8));
    v20 = v53;
    v35 = v53;
    std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v32 + 88), &v35);
    v21 = _mm_srli_si128(v20, 8).m128i_u64[0];
    if ( v21 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v21 + 8), 0xFFFFFFFF) == 1 )
      {
        v22 = v35.m128i_i64[1];
        (**(void (__fastcall ***)(__int64))v35.m128i_i64[1])(v35.m128i_i64[1]);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v22 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v35.m128i_i64[1] + 8LL))(v35.m128i_i64[1]);
      }
    }
    v36 = 0LL;
    v23 = v12[28];
    if ( v23 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v23 + 8));
      v23 = v12[28];
    }
    *(_QWORD *)&v36 = *v14;
    *((_QWORD *)&v36 + 1) = v23;
    sub_18009D428(v32, &v36);
    if ( *((_QWORD *)&v32 + 1) )
    {
      if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v32 + 1) + 8LL)) )
      {
        v24 = *((_QWORD *)&v32 + 1);
        (***((void (__fastcall ****)(_QWORD))&v32 + 1))(*((_QWORD *)&v32 + 1));
        if ( !_InterlockedDecrement((volatile signed __int32 *)(v24 + 12)) )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v32 + 1) + 8LL))(*((_QWORD *)&v32 + 1));
      }
    }
    v25 = (volatile signed __int32 *)v53.m128i_i64[1];
    if ( v53.m128i_i64[1] )
    {
      if ( !_InterlockedDecrement((volatile signed __int32 *)(v53.m128i_i64[1] + 8)) )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v25)(v25);
        if ( !_InterlockedDecrement(v25 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
      }
    }
  }
  if ( *((_QWORD *)&v33 + 1) )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v33 + 1) + 8LL)) )
    {
      v26 = *((_QWORD *)&v33 + 1);
      (***((void (__fastcall ****)(_QWORD))&v33 + 1))(*((_QWORD *)&v33 + 1));
      if ( !_InterlockedDecrement((volatile signed __int32 *)(v26 + 12)) )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v33 + 1) + 8LL))(*((_QWORD *)&v33 + 1));
    }
  }
  v27 = (volatile signed __int32 *)*((_QWORD *)&v52 + 1);
  if ( *((_QWORD *)&v52 + 1) )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v52 + 1) + 8LL)) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v27)(v27);
      if ( !_InterlockedDecrement(v27 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
    }
  }
  v28 = (volatile signed __int32 *)v54.m128i_i64[1];
  if ( v54.m128i_i64[1] )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)(v54.m128i_i64[1] + 8)) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v28)(v28);
      if ( !_InterlockedDecrement(v28 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
    }
  }
  v29 = (volatile signed __int32 *)*((_QWORD *)&v50 + 1);
  if ( *((_QWORD *)&v50 + 1) )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v50 + 1) + 8LL)) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v29)(v29);
      if ( !_InterlockedDecrement(v29 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
    }
  }
  v30 = (volatile signed __int32 *)*((_QWORD *)&v51 + 1);
  if ( *((_QWORD *)&v51 + 1) )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v51 + 1) + 8LL)) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v30)(v30);
      if ( !_InterlockedDecrement(v30 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
    }
  }
  v31 = (volatile signed __int32 *)*((_QWORD *)&v55 + 1);
  if ( *((_QWORD *)&v55 + 1) && !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v55 + 1) + 8LL)) )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v31)(v31);
    if ( !_InterlockedDecrement(v31 + 3) )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
  }
}
