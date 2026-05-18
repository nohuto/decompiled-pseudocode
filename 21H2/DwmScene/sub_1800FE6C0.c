/*
 * XREFs of sub_1800FE6C0 @ 0x1800FE6C0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800FE6C0(__int64 a1)
{
  _QWORD *v2; // rcx
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = (_QWORD *)(a1 + 1784);
  if ( *v2 )
  {
    *(_BYTE *)(*v2 + 168LL) = 1;
    *(_OWORD *)v5 = 0LL;
    result = (__int64)std::shared_ptr<__ExceptionPtr>::operator=(v2, v5);
    if ( v5[1] )
    {
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v5[1] + 8), 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
      {
        v4 = v5[1];
        (**(void (__fastcall ***)(__int64))v5[1])(v5[1]);
        result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 12), 0xFFFFFFFF);
        if ( (_DWORD)result == 1 )
          result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5[1] + 8LL))(v5[1]);
      }
    }
  }
  *(_BYTE *)(a1 + 1898) = 0;
  return result;
}
