/*
 * XREFs of sub_1800D6CAC @ 0x1800D6CAC
 * Callers:
 *     sub_1800D86A8 @ 0x1800D86A8 (sub_1800D86A8.c)
 * Callees:
 *     sub_18000FB34 @ 0x18000FB34 (sub_18000FB34.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_18006AB04 @ 0x18006AB04 (sub_18006AB04.c)
 *     sub_1800759E4 @ 0x1800759E4 (sub_1800759E4.c)
 *     sub_1800A02D8 @ 0x1800A02D8 (sub_1800A02D8.c)
 *     sub_1800A0394 @ 0x1800A0394 (sub_1800A0394.c)
 *     sub_1800D6B2C @ 0x1800D6B2C (sub_1800D6B2C.c)
 *     sub_1800EFB68 @ 0x1800EFB68 (sub_1800EFB68.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_1800D6CAC(__int64 a1, _QWORD *a2, __int64 *a3, __int64 a4, _QWORD *a5)
{
  __int64 v9; // rax
  __int64 v10; // rbx
  unsigned __int16 v11; // r12
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 *v14; // rax
  volatile signed __int32 *v15; // rbx
  volatile signed __int32 *v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 *v20; // rax
  volatile signed __int32 *v21; // rbx
  __int128 v23; // [rsp+30h] [rbp-71h] BYREF
  __int128 v24; // [rsp+40h] [rbp-61h] BYREF
  _QWORD *v25; // [rsp+50h] [rbp-51h]
  __int64 v26[2]; // [rsp+60h] [rbp-41h] BYREF
  __m128i si128; // [rsp+70h] [rbp-31h]
  _BYTE v28[8]; // [rsp+80h] [rbp-21h] BYREF
  volatile signed __int32 *v29; // [rsp+88h] [rbp-19h]
  __int64 v30; // [rsp+90h] [rbp-11h] BYREF
  volatile signed __int32 *v31; // [rsp+98h] [rbp-9h]
  __int64 v32; // [rsp+A0h] [rbp-1h] BYREF
  volatile signed __int32 *v33; // [rsp+A8h] [rbp+7h]

  v25 = a5;
  if ( byte_18021A410 )
  {
    v9 = sub_18006AB04(*a3);
    v10 = sub_1800759E4(v9);
    si128 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
    LOBYTE(v26[0]) = 0;
    sub_18000FB34(v26, 0x17uLL, 0LL, "Global/PlanarReflection");
    v11 = sub_1800A02D8(v10, (__int64)v26);
    if ( si128.m128i_i64[1] >= 0x10uLL )
    {
      v12 = v26[0];
      if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
      {
        v12 = *(_QWORD *)(v26[0] - 8);
        if ( (unsigned __int64)(v26[0] - v12 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v12, si128.m128i_i64[1] + 40);
          __debugbreak();
        }
      }
      j_j__o_free(v12);
    }
    v13 = sub_1800A0394(v10, &v30);
    v14 = (__int64 *)sub_1800EFB68(*v13, v28, v11);
    std::shared_ptr<__ExceptionPtr>::operator=(a5, v14);
    v15 = v29;
    if ( v29 )
    {
      if ( _InterlockedExchangeAdd(v29 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
        if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
      }
    }
    v16 = v31;
    if ( v31 )
    {
      if ( _InterlockedExchangeAdd(v31 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
        if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
      }
    }
  }
  v17 = *(_QWORD *)(a1 + 272);
  v23 = 0LL;
  v18 = a3[1];
  if ( v18 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
    v18 = a3[1];
  }
  *(_QWORD *)&v23 = *a3;
  *((_QWORD *)&v23 + 1) = v18;
  (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v17 + 88LL))(v17, &v23);
  v24 = 0LL;
  v19 = a5[1];
  if ( v19 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
    v19 = a5[1];
  }
  *(_QWORD *)&v24 = *a5;
  *((_QWORD *)&v24 + 1) = v19;
  v20 = sub_1800D6B2C(a1, &v32, *a3, a4, &v24);
  std::shared_ptr<__ExceptionPtr>::operator=(a5, v20);
  v21 = v33;
  if ( v33 )
  {
    if ( _InterlockedExchangeAdd(v33 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v21)(v21);
      if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
    }
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  *a2 = *a5;
  a2[1] = a5[1];
  *a5 = 0LL;
  a5[1] = 0LL;
  return a2;
}
