/*
 * XREFs of sub_180048760 @ 0x180048760
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_18002D6A0 @ 0x18002D6A0 (sub_18002D6A0.c)
 *     sub_1800391CC @ 0x1800391CC (sub_1800391CC.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180048760(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 *v6; // rax
  volatile signed __int32 *v7; // rbx
  __int64 *v8; // rax
  volatile signed __int32 *v9; // rbx
  __int64 result; // rax
  __int64 v11; // rcx
  volatile signed __int32 *v12; // rbx
  volatile signed __int32 *v13; // rbx
  __int64 v14; // [rsp+30h] [rbp-58h] BYREF
  volatile signed __int32 *v15; // [rsp+38h] [rbp-50h]
  __int64 v16; // [rsp+40h] [rbp-48h] BYREF
  volatile signed __int32 *v17; // [rsp+48h] [rbp-40h]
  __int64 v18; // [rsp+50h] [rbp-38h] BYREF

  v6 = sub_18002D6A0(&v14, a3);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 120), v6);
  v7 = v15;
  if ( v15 )
  {
    if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  if ( *(_DWORD *)(a1 + 140) == 1 || *(_DWORD *)(a1 + 140) == 3 )
  {
    v8 = sub_18002D6A0(&v16, a2);
    std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 104), v8);
    v9 = v17;
    if ( v17 )
    {
      if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
        if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
      }
    }
  }
  v18 = 0LL;
  sub_1800391CC(*(_QWORD **)(a1 + 104), &v18);
  result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v18 + 224LL))(v18, *(_QWORD *)(a1 + 96));
  *(_DWORD *)(a1 + 136) = 1;
  v11 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = (volatile signed __int32 *)a2[1];
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
  v13 = (volatile signed __int32 *)a3[1];
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
