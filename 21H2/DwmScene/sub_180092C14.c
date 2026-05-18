/*
 * XREFs of sub_180092C14 @ 0x180092C14
 * Callers:
 *     sub_180092B60 @ 0x180092B60 (sub_180092B60.c)
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x180010000 (--0bad_function_call@std@@QEAA@XZ.c)
 *     sub_180091378 @ 0x180091378 (sub_180091378.c)
 *     sub_180091484 @ 0x180091484 (sub_180091484.c)
 *     sub_1800E278C @ 0x1800E278C (sub_1800E278C.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180092C14(__int64 a1, __int16 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  signed __int32 v7; // eax
  __int64 v8; // rax
  __int64 result; // rax
  volatile signed __int32 *v10; // rbx
  volatile signed __int32 *v11; // rbx
  __int64 v12; // rbx
  __int128 v13; // [rsp+20h] [rbp-39h] BYREF
  __int64 v14; // [rsp+30h] [rbp-29h] BYREF
  __int128 v15; // [rsp+38h] [rbp-21h] BYREF
  __int64 v16; // [rsp+48h] [rbp-11h] BYREF
  _BYTE v17[8]; // [rsp+58h] [rbp-1h] BYREF
  volatile signed __int32 *v18; // [rsp+60h] [rbp+7h]
  _BYTE v19[8]; // [rsp+68h] [rbp+Fh] BYREF
  volatile signed __int32 *v20; // [rsp+70h] [rbp+17h]
  _BYTE pExceptionObject[24]; // [rsp+78h] [rbp+1Fh] BYREF
  __int16 v22; // [rsp+90h] [rbp+37h] BYREF

  v22 = a2;
  v14 = a3;
  sub_180091378((__int64 **)(a1 + 200), (__int64)&v16, (unsigned __int16 *)&v22);
  *(_DWORD *)(v16 + 32) = 1;
  v13 = 0LL;
  v6 = *(_QWORD *)(a1 + 104);
  if ( !v6 )
  {
LABEL_19:
    std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject);
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  do
  {
    v7 = *(_DWORD *)(v6 + 8);
    if ( !v7 )
      goto LABEL_19;
  }
  while ( v7 != _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), v7 + 1, v7) );
  v13 = *(_OWORD *)(a1 + 96);
  v8 = sub_180091484((__int64)v19, (__int64 *)&v13, &v22, &v14);
  v15 = 0LL;
  v15 = *(_OWORD *)v8;
  *(_QWORD *)v8 = 0LL;
  *(_QWORD *)(v8 + 8) = 0LL;
  result = sub_1800E278C(a4, v17, v14, &v15);
  v10 = v18;
  if ( v18 )
  {
    result = (unsigned int)_InterlockedDecrement(v18 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      result = (unsigned int)_InterlockedDecrement(v10 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  v11 = v20;
  if ( v20 )
  {
    result = (unsigned int)_InterlockedDecrement(v20 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      result = (unsigned int)_InterlockedDecrement(v11 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  if ( *((_QWORD *)&v13 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v13 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v12 = *((_QWORD *)&v13 + 1);
      (***((void (__fastcall ****)(_QWORD))&v13 + 1))(*((_QWORD *)&v13 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 12));
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v13 + 1) + 8LL))(*((_QWORD *)&v13 + 1));
    }
  }
  return result;
}
