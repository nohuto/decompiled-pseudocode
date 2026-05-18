/*
 * XREFs of sub_18009D4B4 @ 0x18009D4B4
 * Callers:
 *     sub_18009D428 @ 0x18009D428 (sub_18009D428.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800114D8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_18009A680 @ 0x18009A680 (sub_18009A680.c)
 *     sub_18009B080 @ 0x18009B080 (sub_18009B080.c)
 *     sub_1800D1210 @ 0x1800D1210 (sub_1800D1210.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18009D4B4(__int64 a1, unsigned __int64 a2, __int64 *a3)
{
  _QWORD *v6; // rbx
  __int64 result; // rax
  volatile signed __int32 *v8; // rbx
  volatile signed __int32 *v9; // rbx
  unsigned int v10; // eax
  __int128 v11; // [rsp+30h] [rbp-79h] BYREF
  __int128 v12; // [rsp+40h] [rbp-69h]
  __int64 *v13; // [rsp+50h] [rbp-59h]
  _QWORD v14[4]; // [rsp+58h] [rbp-51h] BYREF
  _QWORD v15[5]; // [rsp+78h] [rbp-31h] BYREF
  _BYTE pExceptionObject[96]; // [rsp+A0h] [rbp-9h] BYREF

  v13 = a3;
  if ( a2 >= (*(_QWORD *)(a1 + 112) - *(_QWORD *)(a1 + 104)) / 88LL )
  {
    sub_18000FE28(v15);
    v10 = (unsigned int)sub_18000FE28(v14);
    sub_1800D1210((unsigned int)pExceptionObject, v10, 314, (unsigned int)v15, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v6 = (_QWORD *)(*(_QWORD *)(a1 + 104) + 88 * a2);
  result = *a3;
  if ( *v6 == *a3 )
  {
    v8 = (volatile signed __int32 *)a3[1];
    if ( !v8 )
      return result;
    goto LABEL_17;
  }
  sub_18009B080(a1, a2);
  std::shared_ptr<__ExceptionPtr>::operator=(v6, a3);
  result = *a3;
  if ( *a3 )
  {
    v12 = 0LL;
    v9 = *(volatile signed __int32 **)(result + 144);
    if ( v9 )
    {
      _InterlockedIncrement(v9 + 2);
      v9 = *(volatile signed __int32 **)(result + 144);
    }
    result = *(_QWORD *)(result + 136);
    *(_QWORD *)&v12 = result;
    *((_QWORD *)&v12 + 1) = v9;
    if ( result )
    {
      v11 = 0LL;
      if ( v9 )
      {
        _InterlockedIncrement(v9 + 2);
        result = v12;
      }
      *(_QWORD *)&v11 = result;
      *((_QWORD *)&v11 + 1) = v9;
      result = sub_18009A680(a1, a2, &v11);
    }
    if ( v9 )
    {
      result = (unsigned int)_InterlockedDecrement(v9 + 2);
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
        result = (unsigned int)_InterlockedDecrement(v9 + 3);
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
      }
    }
  }
  v8 = (volatile signed __int32 *)a3[1];
  if ( v8 )
  {
LABEL_17:
    result = (unsigned int)_InterlockedDecrement(v8 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      result = (unsigned int)_InterlockedDecrement(v8 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  return result;
}
