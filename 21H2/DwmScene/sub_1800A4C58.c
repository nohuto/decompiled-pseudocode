/*
 * XREFs of sub_1800A4C58 @ 0x1800A4C58
 * Callers:
 *     sub_18007B4CC @ 0x18007B4CC (sub_18007B4CC.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180012A18 @ 0x180012A18 (sub_180012A18.c)
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     sub_18002D8C4 @ 0x18002D8C4 (sub_18002D8C4.c)
 *     sub_180031AE8 @ 0x180031AE8 (sub_180031AE8.c)
 *     sub_180066E3C @ 0x180066E3C (sub_180066E3C.c)
 *     sub_180067304 @ 0x180067304 (sub_180067304.c)
 *     sub_18007040C @ 0x18007040C (sub_18007040C.c)
 *     sub_18007E228 @ 0x18007E228 (sub_18007E228.c)
 *     sub_1800A1588 @ 0x1800A1588 (sub_1800A1588.c)
 *     sub_1800A3BC8 @ 0x1800A3BC8 (sub_1800A3BC8.c)
 *     sub_1800A656C @ 0x1800A656C (sub_1800A656C.c)
 *     sub_1800A6880 @ 0x1800A6880 (sub_1800A6880.c)
 *     sub_1800A9518 @ 0x1800A9518 (sub_1800A9518.c)
 *     sub_1800AA3D0 @ 0x1800AA3D0 (sub_1800AA3D0.c)
 *     sub_1800AA7E0 @ 0x1800AA7E0 (sub_1800AA7E0.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_1800A4C58(__int64 a1, __int64 *a2)
{
  unsigned int v4; // r14d
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  volatile signed __int32 *v8; // rbx
  __int64 v9; // rdi
  __int64 result; // rax
  __int64 v11; // rbx
  size_t v12; // rcx
  volatile signed __int32 *v13; // rbx
  const void **v14; // rax
  __int64 v15; // rbx
  __int64 *v16; // rax
  __int64 *v17; // rax
  __int128 v18; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v19; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v20; // [rsp+50h] [rbp-B0h]
  _QWORD v21[4]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v22[5]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v23; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v24[4]; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v25[4]; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v26[4]; // [rsp+F8h] [rbp-8h] BYREF
  const void *Src; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v28[40]; // [rsp+138h] [rbp+38h] BYREF
  _QWORD v29[8]; // [rsp+160h] [rbp+60h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int128 v31; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v32; // [rsp+1F0h] [rbp+F0h]
  size_t v33[2]; // [rsp+1F8h] [rbp+F8h] BYREF
  __m128i si128; // [rsp+208h] [rbp+108h]
  __int128 v35; // [rsp+218h] [rbp+118h] BYREF

  v22[4] = a2;
  if ( !*a2 )
  {
    sub_18000FE28(v25);
    v17 = sub_18000FE28(v24);
    sub_18002D8C4(v29, v17, 444, (__int64)v25, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v29;
  }
  sub_1800AA3D0(*a2, v33);
  v21[2] = 0LL;
  v21[3] = 0LL;
  sub_180020B7C(v21, (__int64)v33);
  if ( (unsigned __int8)sub_1800A6880(a1, v21) )
  {
    v14 = sub_1800A1588(&Src, "ShaderManager::AddExtension() -- Extension with name '", v33);
    v15 = sub_180031AE8((__int64)v28, v14, "' is already installed");
    v16 = sub_18000FE28(v26);
    sub_18002D8C4(pExceptionObject, v16, 448, v15, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  sub_1800AA7E0(*a2, *(_QWORD *)(a1 + 18688), a1, a1 + 18664);
  sub_1800A3BC8((__int64 *)(a1 + 18592), (__int64)&v23, v33);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v23 + 64), a2);
  v19 = 0LL;
  v22[2] = 0LL;
  v22[3] = 0LL;
  sub_180020B7C(v22, (__int64)v33);
  sub_1800A656C(a1, &v19, v22);
  v31 = 0LL;
  v32 = 0LL;
  sub_18007E228(*(_QWORD *)(a1 + 18688), &v31);
  v4 = 0;
  v5 = v31;
  if ( (__int64)(*((_QWORD *)&v31 + 1) - v31) >> 4 )
  {
    v6 = 0LL;
    do
    {
      v20 = 0LL;
      v7 = 2 * v6;
      v8 = *(volatile signed __int32 **)(v5 + 8 * v7 + 8);
      if ( v8 )
      {
        _InterlockedIncrement(v8 + 2);
        v8 = *(volatile signed __int32 **)(v5 + 8 * v7 + 8);
      }
      v9 = *(_QWORD *)(v5 + 8 * v7);
      *(_QWORD *)&v20 = v9;
      *((_QWORD *)&v20 + 1) = v8;
      if ( (unsigned int)sub_18007040C(v9) )
      {
        v35 = 0LL;
        sub_180066E3C(v9 + 24, (__int64)&v35);
        v18 = 0LL;
        if ( v8 )
        {
          _InterlockedIncrement(v8 + 2);
          v9 = v20;
        }
        *(_QWORD *)&v18 = v9;
        *((_QWORD *)&v18 + 1) = v8;
        sub_1800A9518(v19, &v18);
        if ( BYTE8(v35) )
          sub_180067304(v35);
      }
      if ( v8 )
      {
        if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
          if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
        }
      }
      ++v4;
      v5 = v31;
      v6 = v4;
    }
    while ( v4 < (unsigned __int64)((__int64)(*((_QWORD *)&v31 + 1) - v31) >> 4) );
  }
  result = sub_180012A18((__int64 *)&v31);
  if ( *((_QWORD *)&v19 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v19 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v11 = *((_QWORD *)&v19 + 1);
      (***((void (__fastcall ****)(_QWORD))&v19 + 1))(*((_QWORD *)&v19 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 12));
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v19 + 1) + 8LL))(*((_QWORD *)&v19 + 1));
    }
  }
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v12 = v33[0];
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v12 = *(_QWORD *)(v33[0] - 8);
      if ( v33[0] - v12 - 8 > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v12, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    result = j_j__o_free(v12);
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(v33[0]) = 0;
  v13 = (volatile signed __int32 *)a2[1];
  if ( v13 )
  {
    result = (unsigned int)_InterlockedDecrement(v13 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      result = (unsigned int)_InterlockedDecrement(v13 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
  return result;
}
