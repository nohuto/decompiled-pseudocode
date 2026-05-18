/*
 * XREFs of sub_1800D86A8 @ 0x1800D86A8
 * Callers:
 *     sub_1800B9280 @ 0x1800B9280 (sub_1800B9280.c)
 * Callees:
 *     sub_18000FB34 @ 0x18000FB34 (sub_18000FB34.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180061810 @ 0x180061810 (sub_180061810.c)
 *     sub_1800686CC @ 0x1800686CC (sub_1800686CC.c)
 *     sub_180068750 @ 0x180068750 (sub_180068750.c)
 *     sub_1800687FC @ 0x1800687FC (sub_1800687FC.c)
 *     sub_18006AA58 @ 0x18006AA58 (sub_18006AA58.c)
 *     sub_1800AA078 @ 0x1800AA078 (sub_1800AA078.c)
 *     sub_1800D6AD0 @ 0x1800D6AD0 (sub_1800D6AD0.c)
 *     sub_1800D6CAC @ 0x1800D6CAC (sub_1800D6CAC.c)
 *     sub_1800D8EA8 @ 0x1800D8EA8 (sub_1800D8EA8.c)
 *     sub_1800F394C @ 0x1800F394C (sub_1800F394C.c)
 *     sub_1800F3AC8 @ 0x1800F3AC8 (sub_1800F3AC8.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_1800D86A8(_QWORD *a1, _QWORD *a2, char a3)
{
  __int64 v6; // r8
  __int64 v7; // rdx
  signed __int32 v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdx
  _QWORD *v11; // rax
  volatile signed __int32 *v12; // rdi
  __int64 v13; // rcx
  __int64 *v14; // rax
  __int64 v15; // rbx
  void (__fastcall **v16)(__int64); // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rbx
  _QWORD *v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 *v26; // rax
  volatile signed __int32 *v27; // rbx
  volatile signed __int32 *v28; // rbx
  volatile signed __int32 *v29; // rbx
  __int64 result; // rax
  volatile signed __int32 *v31; // rbx
  __int64 v32; // rbx
  volatile signed __int32 *v33; // rbx
  __int128 v34; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v35; // [rsp+50h] [rbp-B0h]
  __int64 v36; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v37; // [rsp+68h] [rbp-98h]
  __int128 v38; // [rsp+70h] [rbp-90h] BYREF
  __int128 v39; // [rsp+80h] [rbp-80h] BYREF
  __int128 v40; // [rsp+90h] [rbp-70h] BYREF
  __int128 v41; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v42; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v43; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v44; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v45[2]; // [rsp+E0h] [rbp-20h] BYREF
  __m128i si128; // [rsp+F0h] [rbp-10h]
  __int128 v47; // [rsp+100h] [rbp+0h] BYREF
  __int128 v48; // [rsp+110h] [rbp+10h] BYREF
  __int128 v49; // [rsp+120h] [rbp+20h] BYREF
  __int128 v50; // [rsp+130h] [rbp+30h] BYREF
  __int128 v51; // [rsp+140h] [rbp+40h] BYREF
  __int128 v52; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v53[8]; // [rsp+160h] [rbp+60h] BYREF
  __int64 v54; // [rsp+168h] [rbp+68h]
  _BYTE v55[8]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v56; // [rsp+178h] [rbp+78h]
  __int64 v57; // [rsp+180h] [rbp+80h] BYREF
  volatile signed __int32 *v58; // [rsp+188h] [rbp+88h]
  __int128 v59; // [rsp+190h] [rbp+90h] BYREF
  __int64 v60; // [rsp+1A0h] [rbp+A0h] BYREF
  volatile signed __int32 *v61; // [rsp+1A8h] [rbp+A8h]
  __int128 v62; // [rsp+1B0h] [rbp+B0h] BYREF
  __int128 v63; // [rsp+1C0h] [rbp+C0h] BYREF

  v59 = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a2 + 376LL))(*a2, v53);
  v59 = 0LL;
  v7 = *(_QWORD *)(v6 + 8);
  if ( v7 )
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)(v7 + 8);
      if ( !v8 )
        break;
      if ( v8 == _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 8), v8 + 1, v8) )
      {
        v59 = *(_OWORD *)v6;
        break;
      }
    }
  }
  v9 = v54;
  if ( v54 && _InterlockedExchangeAdd((volatile signed __int32 *)(v54 + 12), 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v9 + 8LL))(v9, v7, v6);
  sub_180061810(a1[36] + 16LL);
  v35 = 0LL;
  v11 = (_QWORD *)sub_18006AA58(v59, v10);
  v12 = (volatile signed __int32 *)v11[1];
  if ( v12 )
  {
    _InterlockedIncrement(v12 + 2);
    v12 = (volatile signed __int32 *)v11[1];
  }
  *(_QWORD *)&v35 = *v11;
  *((_QWORD *)&v35 + 1) = v12;
  v13 = a1[34];
  v40 = 0LL;
  if ( *((_QWORD *)&v59 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v59 + 1) + 8LL));
  v40 = v59;
  (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v13 + 88LL))(v13, &v40);
  v34 = 0LL;
  if ( a1[8] )
  {
    v14 = (__int64 *)sub_1800D8EA8(a1, v55, a2, &v59);
    std::shared_ptr<__ExceptionPtr>::operator=(&v34, v14);
    v15 = v56;
    if ( v56 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v56 + 8), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(__int64))v15)(v15);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 12), 0xFFFFFFFF) == 1 )
        {
          v16 = *(void (__fastcall ***)(__int64))v15;
          v17 = v15;
LABEL_25:
          v16[1](v17);
        }
      }
    }
  }
  else
  {
    v18 = a1[57];
    v19 = *(_QWORD *)(v18 + 144);
    if ( v19 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
      v19 = *(_QWORD *)(v18 + 144);
    }
    v36 = *(_QWORD *)(v18 + 136);
    v37 = v19;
    std::shared_ptr<__ExceptionPtr>::operator=(&v34, &v36);
    if ( v37 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v37 + 8), 0xFFFFFFFF) == 1 )
      {
        v20 = v37;
        (**(void (__fastcall ***)(__int64))v37)(v37);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v20 + 12), 0xFFFFFFFF) == 1 )
        {
          v17 = v37;
          v16 = *(void (__fastcall ***)(__int64))v37;
          goto LABEL_25;
        }
      }
    }
  }
  sub_1800AA078(a1[34], &v60, (__int64 *)&v59);
  v21 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 184LL))(*a2);
  (*(void (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*a2 + 200LL))(*a2, &v62);
  v38 = 0LL;
  v22 = v21[1];
  if ( v22 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v22 + 12));
    v22 = v21[1];
  }
  *(_QWORD *)&v38 = *v21;
  *((_QWORD *)&v38 + 1) = v22;
  sub_180068750(v35, (__int64 *)&v38);
  v41 = 0LL;
  if ( *((_QWORD *)&v62 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v62 + 1) + 12LL));
  v41 = v62;
  sub_1800686CC(v35, (__int64 *)&v41);
  v39 = 0LL;
  v23 = v21[1];
  if ( v23 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v23 + 12));
    v23 = v21[1];
  }
  *(_QWORD *)&v39 = *v21;
  *((_QWORD *)&v39 + 1) = v23;
  sub_180068750(v60, (__int64 *)&v39);
  v42 = 0LL;
  if ( *((_QWORD *)&v62 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v62 + 1) + 12LL));
  v42 = v62;
  sub_1800686CC(v60, (__int64 *)&v42);
  v24 = *((_QWORD *)&v62 + 1);
  if ( *((_QWORD *)&v62 + 1)
    && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v62 + 1) + 12LL), 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
  }
  (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v59 + 104LL))(v59, &v60);
  v63 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
  LOBYTE(v45[0]) = 0;
  sub_18000FB34(v45, 0x10uLL, 0LL, "IPM_ProcessScene");
  sub_1800F394C(&v63, &v60, v45);
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v25 = v45[0];
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v25 = *(_QWORD *)(v45[0] - 8);
      if ( (unsigned __int64)(v45[0] - v25 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v25, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v25);
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
  LOBYTE(v45[0]) = 0;
  if ( a3 )
  {
    v43 = 0LL;
    if ( *((_QWORD *)&v34 + 1) )
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v34 + 1) + 8LL));
    v43 = v34;
    v26 = sub_1800D6CAC((__int64)a1, &v57, (__int64 *)&v59, (__int64)a2, &v43);
    std::shared_ptr<__ExceptionPtr>::operator=(&v34, v26);
    v27 = v58;
    if ( v58 )
    {
      if ( _InterlockedExchangeAdd(v58 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v27)(v27);
        if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
      }
    }
  }
  v44 = 0LL;
  if ( *((_QWORD *)&v34 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v34 + 1) + 8LL));
  v44 = v34;
  sub_1800D6AD0((__int64)a1, (__int64)a2, (__int64)&v44);
  sub_1800F3AC8(&v63);
  (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v59 + 112LL))(v59, &v60);
  v48 = 0LL;
  v47 = 0LL;
  sub_1800687FC(v35, (__int64)&v47, (__int64)&v48);
  v28 = (volatile signed __int32 *)*((_QWORD *)&v47 + 1);
  if ( *((_QWORD *)&v47 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v47 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v28)(v28);
      if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
    }
  }
  v29 = (volatile signed __int32 *)*((_QWORD *)&v48 + 1);
  if ( *((_QWORD *)&v48 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v48 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v29)(v29);
      if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
    }
  }
  v49 = 0LL;
  sub_180068750(v35, (__int64 *)&v49);
  v50 = 0LL;
  sub_1800686CC(v35, (__int64 *)&v50);
  v51 = 0LL;
  sub_180068750(v60, (__int64 *)&v51);
  v52 = 0LL;
  result = sub_1800686CC(v60, (__int64 *)&v52);
  v31 = v61;
  if ( v61 )
  {
    result = (unsigned int)_InterlockedDecrement(v61 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v31)(v31);
      result = (unsigned int)_InterlockedDecrement(v31 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
    }
  }
  if ( *((_QWORD *)&v34 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v34 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v32 = *((_QWORD *)&v34 + 1);
      (***((void (__fastcall ****)(_QWORD))&v34 + 1))(*((_QWORD *)&v34 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v32 + 12));
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v34 + 1) + 8LL))(*((_QWORD *)&v34 + 1));
    }
  }
  if ( v12 )
  {
    result = (unsigned int)_InterlockedDecrement(v12 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
      result = (unsigned int)_InterlockedDecrement(v12 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  v33 = (volatile signed __int32 *)*((_QWORD *)&v59 + 1);
  if ( *((_QWORD *)&v59 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v59 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v33)(v33);
      result = (unsigned int)_InterlockedDecrement(v33 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
    }
  }
  return result;
}
