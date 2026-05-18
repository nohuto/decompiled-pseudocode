/*
 * XREFs of sub_1800F8D60 @ 0x1800F8D60
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800F8D60(__int64 a1)
{
  _QWORD *v1; // rcx
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (_QWORD *)(a1 + 1768);
  if ( *v1 )
  {
    *(_BYTE *)(*v1 + 168LL) = 1;
    *(_OWORD *)v4 = 0LL;
    result = (__int64)std::shared_ptr<__ExceptionPtr>::operator=(v1, v4);
    if ( v4[1] )
    {
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v4[1] + 8), 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
      {
        v3 = v4[1];
        (**(void (__fastcall ***)(__int64))v4[1])(v4[1]);
        result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 12), 0xFFFFFFFF);
        if ( (_DWORD)result == 1 )
          return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4[1] + 8LL))(v4[1]);
      }
    }
  }
  return result;
}
