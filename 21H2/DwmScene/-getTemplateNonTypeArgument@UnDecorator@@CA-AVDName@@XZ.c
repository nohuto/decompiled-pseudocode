/*
 * XREFs of ?getTemplateNonTypeArgument@UnDecorator@@CA?AVDName@@XZ @ 0x1800F51CC
 * Callers:
 *     sub_1800F46B8 @ 0x1800F46B8 (sub_1800F46B8.c)
 *     sub_1800F53F4 @ 0x1800F53F4 (sub_1800F53F4.c)
 *     sub_1800F57AC @ 0x1800F57AC (sub_1800F57AC.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800114D8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_18002D8C4 @ 0x18002D8C4 (sub_18002D8C4.c)
 *     sub_1800F2BB4 @ 0x1800F2BB4 (sub_1800F2BB4.c)
 *     sub_1800F540C @ 0x1800F540C (sub_1800F540C.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall UnDecorator::getTemplateNonTypeArgument(__int64 a1)
{
  __int64 v2; // r14
  __int64 result; // rax
  _QWORD *v4; // rax
  bool v5; // di
  volatile signed __int32 *v6; // rbx
  char v7; // r13
  _QWORD *v8; // rax
  unsigned int *v9; // rdx
  unsigned int *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r10
  __int64 v14; // r11
  unsigned int *v15; // r12
  unsigned int *i; // r15
  _QWORD *v17; // rdi
  _QWORD *v18; // rbx
  volatile signed __int32 *v19; // rbx
  signed __int32 v20; // eax
  bool v21; // zf
  __int64 *v22; // rax
  _BYTE v23[8]; // [rsp+38h] [rbp-79h] BYREF
  volatile signed __int32 *v24; // [rsp+40h] [rbp-71h]
  _QWORD v25[4]; // [rsp+48h] [rbp-69h] BYREF
  _QWORD v26[4]; // [rsp+68h] [rbp-49h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+88h] [rbp-29h] BYREF
  __int128 v28; // [rsp+C8h] [rbp+17h] BYREF

  v2 = *(_QWORD *)(a1 + 112);
  result = *(unsigned int *)(v2 + 80);
  if ( *(_DWORD *)(a1 + 104) != (_DWORD)result )
  {
    v28 = 0LL;
    sub_1800F2BB4(*(_QWORD *)(a1 + 16), &v28);
    v4 = (_QWORD *)sub_1800F540C(v2, v23);
    v5 = (_QWORD)v28 != *v4;
    v6 = v24;
    if ( v24 )
    {
      if ( _InterlockedExchangeAdd(v24 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
        if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
      }
    }
    if ( v5 )
    {
      sub_18000FE28(v26);
      v22 = sub_18000FE28(v25);
      sub_18002D8C4(pExceptionObject, v22, 741, (__int64)v26, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
    v7 = 0;
    v8 = *(_QWORD **)(a1 + 16);
    v9 = (unsigned int *)v8[150];
    v10 = (unsigned int *)v8[149];
    if ( v10 != v9 )
    {
      do
      {
        v11 = v10[1];
        v12 = *(_QWORD *)(a1 + 32);
        v13 = *v10;
        v14 = *(_QWORD *)(v2 + 32);
        if ( *(_DWORD *)(v12 + 4 * v11) != *(_DWORD *)(v14 + 4 * v13) )
        {
          *(_DWORD *)(v12 + 4 * v11) = *(_DWORD *)(v14 + 4 * v13);
          v7 = 1;
        }
        v10 += 2;
      }
      while ( v10 != v9 );
      v8 = *(_QWORD **)(a1 + 16);
    }
    v15 = (unsigned int *)v8[153];
    for ( i = (unsigned int *)v8[152]; i != v15; i += 2 )
    {
      v17 = (_QWORD *)(*(_QWORD *)(v2 + 56) + 40LL * *i);
      v18 = (_QWORD *)(*(_QWORD *)(a1 + 56) + 40LL * i[1]);
      std::shared_ptr<__ExceptionPtr>::operator=(v18, v17);
      std::shared_ptr<__ExceptionPtr>::operator=(v18 + 2, v17 + 2);
    }
    result = *(unsigned int *)(v2 + 80);
    *(_DWORD *)(a1 + 104) = result;
    if ( v7 )
      ++*(_DWORD *)(a1 + 80);
    v19 = (volatile signed __int32 *)*((_QWORD *)&v28 + 1);
    if ( *((_QWORD *)&v28 + 1) )
    {
      v20 = _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v28 + 1) + 8LL), 0xFFFFFFFF);
      v21 = v20 == 1;
      result = (unsigned int)(v20 - 1);
      if ( v21 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
        result = (unsigned int)_InterlockedDecrement(v19 + 3);
        if ( !(_DWORD)result )
          return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
      }
    }
  }
  return result;
}
