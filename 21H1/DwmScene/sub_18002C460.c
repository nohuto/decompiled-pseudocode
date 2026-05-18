/*
 * XREFs of sub_18002C460 @ 0x18002C460
 * Callers:
 *     sub_1800100D0 @ 0x1800100D0 (sub_1800100D0.c)
 *     sub_18002CC84 @ 0x18002CC84 (sub_18002CC84.c)
 *     sub_18003F610 @ 0x18003F610 (sub_18003F610.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x180013618 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     sub_1800172A8 @ 0x1800172A8 (sub_1800172A8.c)
 *     sub_1800186E0 @ 0x1800186E0 (sub_1800186E0.c)
 *     sub_18002EA80 @ 0x18002EA80 (sub_18002EA80.c)
 *     sub_180062688 @ 0x180062688 (sub_180062688.c)
 *     sub_1800628C4 @ 0x1800628C4 (sub_1800628C4.c)
 *     sub_1800639D8 @ 0x1800639D8 (sub_1800639D8.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_18002C460(__int64 a1, __int64 *a2, _QWORD *a3, _QWORD *a4, int a5, int a6)
{
  int v10; // r13d
  int v11; // eax
  __int64 v12; // rdx
  signed __int32 v13; // eax
  __int64 *v14; // rax
  volatile signed __int32 *v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 *v18; // rax
  _QWORD *v19; // rsi
  volatile signed __int32 *v20; // rbx
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rcx
  __m128 v28; // xmm2
  __m128 v29; // xmm0
  __int64 result; // rax
  __int64 v31; // rbx
  __int64 v32; // rbx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  _QWORD v36[2]; // [rsp+20h] [rbp-E0h] BYREF
  int v37; // [rsp+30h] [rbp-D0h]
  __int64 v38; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v39; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v40; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v41; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v42[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v43[2]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v44; // [rsp+88h] [rbp-78h] BYREF
  __int128 v45; // [rsp+98h] [rbp-68h]
  __int64 *v46; // [rsp+A8h] [rbp-58h]
  _QWORD *v47; // [rsp+B0h] [rbp-50h]
  _QWORD *v48; // [rsp+B8h] [rbp-48h]
  __int64 v49; // [rsp+C0h] [rbp-40h] BYREF
  volatile signed __int32 *v50; // [rsp+C8h] [rbp-38h]
  __int64 v51; // [rsp+D0h] [rbp-30h] BYREF
  volatile signed __int32 *v52; // [rsp+D8h] [rbp-28h]
  _QWORD v53[3]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int64 v54; // [rsp+F8h] [rbp-8h]
  __int128 v55; // [rsp+100h] [rbp+0h]

  v46 = a2;
  v47 = a3;
  v48 = a4;
  v10 = a5;
  if ( !a5 )
    v10 = 1;
  v11 = a6;
  if ( !a6 )
    v11 = 1;
  v37 = v11;
  v55 = 0LL;
  v12 = *(_QWORD *)(a1 + 80);
  if ( v12 )
  {
    while ( 1 )
    {
      v13 = *(_DWORD *)(v12 + 8);
      if ( !v13 )
        break;
      if ( v13 == _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 8), v13 + 1, v13) )
      {
        v55 = *(_OWORD *)(a1 + 72);
        break;
      }
    }
  }
  v14 = sub_1800172A8(v55, &v49);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 96), v14);
  v15 = v50;
  if ( v50 )
  {
    if ( _InterlockedExchangeAdd(v50 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
      if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
    }
  }
  v40 = 0LL;
  v16 = *(_QWORD *)(a1 + 104);
  if ( v16 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
    v16 = *(_QWORD *)(a1 + 104);
  }
  v42[0] = *(_QWORD *)(a1 + 96);
  v42[1] = v16;
  sub_1800186E0(&v40, v42);
  v17 = *a3;
  v38 = v17;
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
  sub_18002EA80(v40, &v38, 0LL);
  if ( *a4 )
  {
    v18 = sub_1800172A8(v55, &v51);
    v19 = (_QWORD *)(a1 + 112);
    std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 112), v18);
    v20 = v52;
    if ( v52 )
    {
      if ( _InterlockedExchangeAdd(v52 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v20)(v20);
        if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
      }
    }
    v21 = (_QWORD *)sub_180062688(a1, v53);
    v22 = std::string::append(v21, "Staging", 7uLL);
    v45 = 0uLL;
    v44 = *(_OWORD *)v22;
    v45 = *((_OWORD *)v22 + 1);
    v22[2] = 0LL;
    v22[3] = 15LL;
    *(_BYTE *)v22 = 0;
    sub_1800628C4(*v19, &v44);
    if ( v54 >= 0x10 )
    {
      v23 = v53[0];
      if ( v54 + 1 >= 0x1000 )
      {
        v23 = *(_QWORD *)(v53[0] - 8LL);
        if ( (unsigned __int64)(v53[0] - v23 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v23, v54 + 40);
          __debugbreak();
        }
      }
      j_j__o_free(v23);
    }
    v39 = 0LL;
    v24 = *(_QWORD *)(a1 + 120);
    if ( v24 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v24 + 8));
      v24 = *(_QWORD *)(a1 + 120);
    }
    v43[0] = *v19;
    v43[1] = v24;
    sub_1800186E0(&v39, v43);
    v36[0] = 0LL;
    if ( v36 != a4 )
    {
      v36[0] = *a4;
      *a4 = 0LL;
    }
    sub_18002EA80(v39, v36, 128LL);
    if ( *((_QWORD *)&v39 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v39 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v25 = *((_QWORD *)&v39 + 1);
        (***((void (__fastcall ****)(_QWORD))&v39 + 1))(*((_QWORD *)&v39 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v25 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v39 + 1) + 8LL))(*((_QWORD *)&v39 + 1));
      }
    }
  }
  v26 = 0LL;
  if ( &v41 != a2 )
  {
    v26 = *a2;
    *a2 = 0LL;
  }
  v41 = *(_QWORD *)(a1 + 128);
  v27 = v41;
  *(_QWORD *)(a1 + 128) = v26;
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  v28 = 0LL;
  v28.m128_f32[0] = (float)v37;
  v29 = 0LL;
  v29.m128_f32[0] = (float)v10;
  result = sub_1800639D8(a1, _mm_unpacklo_ps(v29, v28).m128_u64[0]);
  if ( *((_QWORD *)&v40 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v40 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v31 = *((_QWORD *)&v40 + 1);
      (***((void (__fastcall ****)(_QWORD))&v40 + 1))(*((_QWORD *)&v40 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v31 + 12));
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v40 + 1) + 8LL))(*((_QWORD *)&v40 + 1));
    }
  }
  if ( *((_QWORD *)&v55 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v55 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v32 = *((_QWORD *)&v55 + 1);
      (***((void (__fastcall ****)(_QWORD))&v55 + 1))(*((_QWORD *)&v55 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v32 + 12));
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v55 + 1) + 8LL))(*((_QWORD *)&v55 + 1));
    }
  }
  v33 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  }
  v34 = *a3;
  if ( *a3 )
  {
    *a3 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  }
  v35 = *a4;
  if ( *a4 )
  {
    *a4 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  }
  return result;
}
