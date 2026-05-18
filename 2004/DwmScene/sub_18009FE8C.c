/*
 * XREFs of sub_18009FE8C @ 0x18009FE8C
 * Callers:
 *     sub_1800E5780 @ 0x1800E5780 (sub_1800E5780.c)
 *     sub_1800E6880 @ 0x1800E6880 (sub_1800E6880.c)
 *     sub_1800E6D90 @ 0x1800E6D90 (sub_1800E6D90.c)
 *     sub_1800EA830 @ 0x1800EA830 (sub_1800EA830.c)
 *     sub_18010A1F0 @ 0x18010A1F0 (sub_18010A1F0.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x18000FF20 (--0bad_function_call@std@@QEAA@XZ.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800113F8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 *     sub_180027FF4 @ 0x180027FF4 (sub_180027FF4.c)
 *     sub_18002C218 @ 0x18002C218 (sub_18002C218.c)
 *     sub_18009BCB8 @ 0x18009BCB8 (sub_18009BCB8.c)
 *     sub_18009E2F8 @ 0x18009E2F8 (sub_18009E2F8.c)
 *     sub_18009E844 @ 0x18009E844 (sub_18009E844.c)
 *     sub_1800A103C @ 0x1800A103C (sub_1800A103C.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
_QWORD *__fastcall sub_18009FE8C(__int128 *a1, _QWORD *a2, size_t *a3, _QWORD *a4)
{
  __int64 v8; // rdx
  signed __int32 v9; // eax
  __int64 v10; // rbx
  unsigned __int64 v11; // rdx
  size_t v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  __int64 v15; // r8
  size_t v16; // rcx
  volatile signed __int32 *v17; // rbx
  const void **v19; // rax
  __int64 v20; // rbx
  __int64 *v21; // rax
  __int64 *v22; // rax
  __int128 v23; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v24[6]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v26[24]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v27[4]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v28[4]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v29[4]; // [rsp+E0h] [rbp-20h] BYREF
  const void *Src; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v31[32]; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v32[8]; // [rsp+140h] [rbp+40h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+180h] [rbp+80h] BYREF

  v24[4] = a2;
  pExceptionObject[8] = a3;
  v24[5] = a4;
  if ( !a3[2] )
  {
    sub_18000FD48(v28);
    v22 = sub_18000FD48(v27);
    sub_180027FF4(v32, v22, 719, (__int64)v28, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v32;
  }
  v24[2] = 0LL;
  v24[3] = 0LL;
  sub_18001CDF8(v24, (__int64)a3);
  if ( (unsigned __int8)sub_1800A103C(a1, v24) )
    goto LABEL_23;
  *(_OWORD *)a2 = 0LL;
  v23 = 0LL;
  v8 = *((_QWORD *)a1 + 1);
  if ( !v8 )
  {
LABEL_24:
    std::bad_function_call::bad_function_call((std::bad_function_call *)v26);
    throw (std::bad_weak_ptr *)v26;
  }
  do
  {
    v9 = *(_DWORD *)(v8 + 8);
    if ( !v9 )
      goto LABEL_24;
  }
  while ( v9 != _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 8), v9 + 1, v9) );
  v23 = *a1;
  sub_18009E844((__int64)a2, (__int64)a3, &v23, a4);
  if ( *((_QWORD *)&v23 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v23 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v10 = *((_QWORD *)&v23 + 1);
      (***((void (__fastcall ****)(_QWORD))&v23 + 1))(*((_QWORD *)&v23 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v23 + 1) + 8LL))(*((_QWORD *)&v23 + 1));
    }
  }
  sub_18009E2F8((__int64 *)a1 + 2320, (__int64)&v25, a3);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v25 + 64), a2);
  v11 = a3[3];
  if ( v11 >= 0x10 )
  {
    v12 = *a3;
    v13 = v11 + 1;
    if ( v13 < 0x1000 )
    {
LABEL_16:
      j_j__o_free(v12);
      goto LABEL_17;
    }
    v14 = v13 + 39;
    v15 = *(_QWORD *)(v12 - 8);
    v16 = v12 - v15;
    if ( v16 - 8 <= 0x1F )
    {
      v12 = v15;
      goto LABEL_16;
    }
    o__invalid_parameter_noinfo_noreturn(v16, v14);
LABEL_23:
    v19 = sub_18009BCB8(&Src, "ShaderManager::CreateShaderFamily() -- shader family with name '", a3);
    v20 = sub_18002C218((__int64)v31, v19, "' already exists");
    v21 = sub_18000FD48(v29);
    sub_180027FF4(pExceptionObject, v21, 722, v20, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
LABEL_17:
  a3[2] = 0LL;
  a3[3] = 15LL;
  *(_BYTE *)a3 = 0;
  v17 = (volatile signed __int32 *)a4[1];
  if ( v17 )
  {
    if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
      if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
    }
  }
  return a2;
}
