/*
 * XREFs of sub_18002BBF0 @ 0x18002BBF0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_18006DAE0 @ 0x18006DAE0 (sub_18006DAE0.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002BBF0(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (_QWORD *)(a1 + 272);
  sub_18006DAE0(*(_QWORD *)(a1 + 272), 0LL);
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 48LL))(*v1);
  *(_OWORD *)v11 = 0LL;
  std::shared_ptr<__ExceptionPtr>::operator=(v1, v11);
  if ( v11[1] )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v11[1] + 8), 0xFFFFFFFF) == 1 )
    {
      v3 = v11[1];
      (**(void (__fastcall ***)(__int64))v11[1])(v11[1]);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11[1] + 8LL))(v11[1]);
    }
  }
  v4 = *(_QWORD *)(a1 + 4256);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 4256) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *(_QWORD *)(a1 + 4264);
  *(_DWORD *)(a1 + 4248) = 6;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 880LL))(v5);
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 4264) + 888LL))(*(_QWORD *)(a1 + 4264));
  v7 = *(_QWORD *)(a1 + 4264);
  if ( v7 )
  {
    *(_QWORD *)(a1 + 4264) = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = *(_QWORD *)(a1 + 4272);
  if ( v8 )
  {
    *(_QWORD *)(a1 + 4272) = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = *(_QWORD *)(a1 + 4280);
  if ( v9 )
  {
    *(_QWORD *)(a1 + 4280) = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = *(_QWORD *)(a1 + 4640);
  if ( v10 )
  {
    *(_QWORD *)(a1 + 4640) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return result;
}
