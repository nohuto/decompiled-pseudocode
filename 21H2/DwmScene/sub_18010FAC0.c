/*
 * XREFs of sub_18010FAC0 @ 0x18010FAC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x180010000 (--0bad_function_call@std@@QEAA@XZ.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     sub_1800A575C @ 0x1800A575C (sub_1800A575C.c)
 *     sub_1800A95F0 @ 0x1800A95F0 (sub_1800A95F0.c)
 *     sub_1800A9FE8 @ 0x1800A9FE8 (sub_1800A9FE8.c)
 *     sub_1800AA224 @ 0x1800AA224 (sub_1800AA224.c)
 *     sub_1800EBE4C @ 0x1800EBE4C (sub_1800EBE4C.c)
 *     sub_1800EBED8 @ 0x1800EBED8 (sub_1800EBED8.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18010FAC0(__int64 a1, __int128 *a2, int **a3)
{
  __int64 v6; // rdx
  __int64 v7; // rsi
  signed __int32 v8; // eax
  __int64 *v9; // rax
  __int64 *v10; // r14
  volatile signed __int32 *v11; // rbx
  __int64 *v12; // rax
  int *v13; // rbx
  unsigned __int64 v14; // r12
  __int64 result; // rax
  __int64 v16; // rcx
  __int128 v17; // [rsp+20h] [rbp-89h] BYREF
  size_t v18[5]; // [rsp+30h] [rbp-79h] BYREF
  __int64 v19; // [rsp+58h] [rbp-51h] BYREF
  volatile signed __int32 *v20; // [rsp+60h] [rbp-49h]
  _BYTE pExceptionObject[24]; // [rsp+68h] [rbp-41h] BYREF
  _BYTE v22[32]; // [rsp+80h] [rbp-29h] BYREF
  _QWORD v23[3]; // [rsp+A0h] [rbp-9h] BYREF
  unsigned __int64 v24; // [rsp+B8h] [rbp+Fh]

  (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a1 + 184LL))(a1, v23);
  v18[4] = (size_t)&v17;
  v17 = 0LL;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = 0LL;
  if ( !v6 )
  {
LABEL_20:
    std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject);
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  do
  {
    v8 = *(_DWORD *)(v6 + 8);
    if ( !v8 )
      goto LABEL_20;
  }
  while ( v8 != _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), v8 + 1, v8) );
  v17 = *(_OWORD *)(a1 + 8);
  v18[2] = 0LL;
  v18[3] = 0LL;
  sub_180020B7C(v18, (__int64)v23);
  v9 = sub_1800A575C(a2, &v19, v18, &v17);
  v10 = (__int64 *)(a1 + 56);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 56), v9);
  v11 = v20;
  if ( v20 )
  {
    if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  v12 = (__int64 *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a1 + 176LL))(a1, v22);
  sub_1800EBE4C(*v10, v12);
  sub_1800EBED8(*v10, (__int64)a3);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 136LL))(a1);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 160LL))(a1);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 168LL))(a1);
  v13 = *a3;
  v14 = (unsigned __int64)((char *)a3[1] - (char *)*a3 + 3) >> 2;
  if ( *a3 > a3[1] )
    v14 = 0LL;
  if ( v14 )
  {
    do
    {
      sub_1800A95F0(*v10, *v13);
      (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a1 + 152LL))(a1, a2);
      sub_1800AA224(*v10);
      ++v13;
      ++v7;
    }
    while ( v7 != v14 );
  }
  (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a1 + 144LL))(a1, a2);
  result = sub_1800A9FE8(*v10);
  if ( v24 >= 0x10 )
  {
    v16 = v23[0];
    if ( v24 + 1 >= 0x1000 )
    {
      v16 = *(_QWORD *)(v23[0] - 8LL);
      if ( (unsigned __int64)(v23[0] - v16 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v16, v24 + 40);
        __debugbreak();
      }
    }
    return j_j__o_free(v16);
  }
  return result;
}
