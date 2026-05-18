/*
 * XREFs of sub_1800DBC88 @ 0x1800DBC88
 * Callers:
 *     sub_180102EB8 @ 0x180102EB8 (sub_180102EB8.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800113F8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800DBC88(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 result; // rax
  volatile signed __int32 *v7; // rbx
  signed __int32 v8; // eax
  bool v9; // zf
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 144), a2);
  v4 = *(_QWORD *)(a1 + 16);
  v10 = 0LL;
  v5 = a2[1];
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    v5 = a2[1];
  }
  *(_QWORD *)&v10 = *a2;
  *((_QWORD *)&v10 + 1) = v5;
  result = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v4 + 72LL))(v4, &v10);
  v7 = (volatile signed __int32 *)a2[1];
  if ( v7 )
  {
    v8 = _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF);
    v9 = v8 == 1;
    result = (unsigned int)(v8 - 1);
    if ( v9 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      result = (unsigned int)_InterlockedDecrement(v7 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  return result;
}
