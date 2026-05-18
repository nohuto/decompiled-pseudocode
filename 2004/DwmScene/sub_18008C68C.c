/*
 * XREFs of sub_18008C68C @ 0x18008C68C
 * Callers:
 *     sub_1800A3D28 @ 0x1800A3D28 (sub_1800A3D28.c)
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x18000FF20 (--0bad_function_call@std@@QEAA@XZ.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800113F8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_1800A4A30 @ 0x1800A4A30 (sub_1800A4A30.c)
 *     sub_1800A4DB4 @ 0x1800A4DB4 (sub_1800A4DB4.c)
 *     sub_1800ECD78 @ 0x1800ECD78 (sub_1800ECD78.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18008C68C(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v4; // rsi
  _QWORD *v5; // rax
  volatile signed __int32 *v6; // rbx
  __int64 *v7; // rax
  volatile signed __int32 *v8; // rdi
  _QWORD *v9; // rax
  volatile signed __int32 *v10; // rdi
  __int64 v11; // rdx
  signed __int32 v12; // eax
  __int64 result; // rax
  volatile signed __int32 *v14; // rdi
  volatile signed __int32 *v15; // rcx
  volatile signed __int32 *v16; // rbx
  _BYTE v17[8]; // [rsp+30h] [rbp-58h] BYREF
  volatile signed __int32 *v18; // [rsp+38h] [rbp-50h]
  _BYTE v19[8]; // [rsp+40h] [rbp-48h] BYREF
  volatile signed __int32 *v20; // [rsp+48h] [rbp-40h]
  _BYTE pExceptionObject[32]; // [rsp+50h] [rbp-38h] BYREF

  v4 = a1 + 17;
  std::shared_ptr<__ExceptionPtr>::operator=(a1 + 17, a2);
  v5 = (_QWORD *)sub_1800A4DB4(*a2, 2LL);
  v6 = (volatile signed __int32 *)v5[1];
  if ( v6 )
  {
    _InterlockedIncrement(v6 + 2);
    v6 = (volatile signed __int32 *)v5[1];
  }
  v7 = (__int64 *)sub_1800ECD78(*v5, v17);
  std::shared_ptr<__ExceptionPtr>::operator=(a1 + 15, v7);
  v8 = v18;
  if ( v18 )
  {
    if ( !_InterlockedDecrement(v18 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( !_InterlockedDecrement(v8 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  v9 = (_QWORD *)sub_1800A4A30(*v4, v19);
  (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*v9 + 16LL))(*v9, a1);
  v10 = v20;
  if ( v20 )
  {
    if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  v11 = a1[13];
  if ( !v11 )
  {
LABEL_34:
    std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject);
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  do
  {
    v12 = *(_DWORD *)(v11 + 8);
    if ( !v12 )
      goto LABEL_34;
  }
  while ( v12 != _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 8), v12 + 1, v12) );
  result = a1[12];
  v14 = (volatile signed __int32 *)a1[13];
  if ( v14 )
    _InterlockedIncrement(v14 + 3);
  a1[27] = result;
  v15 = (volatile signed __int32 *)a1[28];
  a1[28] = v14;
  if ( v15 )
  {
    result = (unsigned int)_InterlockedDecrement(v15 + 3);
    if ( !(_DWORD)result )
      result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
  }
  if ( v14 )
  {
    result = (unsigned int)_InterlockedDecrement(v14 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
      result = (unsigned int)_InterlockedDecrement(v14 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
    }
  }
  if ( v6 )
  {
    result = (unsigned int)_InterlockedDecrement(v6 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      result = (unsigned int)_InterlockedDecrement(v6 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  v16 = (volatile signed __int32 *)a2[1];
  if ( v16 )
  {
    result = (unsigned int)_InterlockedDecrement(v16 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
      result = (unsigned int)_InterlockedDecrement(v16 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
    }
  }
  return result;
}
