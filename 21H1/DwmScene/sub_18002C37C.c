/*
 * XREFs of sub_18002C37C @ 0x18002C37C
 * Callers:
 *     sub_18002C430 @ 0x18002C430 (sub_18002C430.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002C37C(_QWORD *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v5[3]; // [rsp+20h] [rbp-18h] BYREF

  *a1 = &Spectre::Engine::D3D11::RenderTargetD3D11::`vftable';
  *(_OWORD *)v5 = 0LL;
  std::shared_ptr<__ExceptionPtr>::operator=(a1 + 12, v5);
  if ( v5[1] )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5[1] + 8), 0xFFFFFFFF) == 1 )
    {
      v2 = v5[1];
      (**(void (__fastcall ***)(__int64))v5[1])(v5[1]);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5[1] + 8LL))(v5[1]);
    }
  }
  v3 = a1[16];
  if ( v3 )
  {
    a1[16] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return sub_180062D14(a1);
}
