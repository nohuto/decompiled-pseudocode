/*
 * XREFs of sub_1800A9268 @ 0x1800A9268
 * Callers:
 *     sub_1800A9340 @ 0x1800A9340 (sub_1800A9340.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800A9268(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rax
  __int64 *v5; // rax
  volatile signed __int32 *v6; // rbx
  _BYTE v8[8]; // [rsp+28h] [rbp-20h] BYREF
  volatile signed __int32 *v9; // [rsp+30h] [rbp-18h]

  *(_BYTE *)a2 = *(_BYTE *)a1;
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 24);
  v3 = (_QWORD *)(a2 + 32);
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 40) = 0LL;
  v4 = *(_QWORD *)(a1 + 40);
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
  *v3 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a2 + 40) = *(_QWORD *)(a1 + 40);
  v5 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 32) + 8LL))(*(_QWORD *)(a1 + 32), v8);
  std::shared_ptr<__ExceptionPtr>::operator=(v3, v5);
  v6 = v9;
  if ( v9 )
  {
    if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  return a2;
}
