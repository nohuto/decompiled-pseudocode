/*
 * XREFs of sub_1800FB0F8 @ 0x1800FB0F8
 * Callers:
 *     sub_1800F9D6C @ 0x1800F9D6C (sub_1800F9D6C.c)
 *     sub_1800FA430 @ 0x1800FA430 (sub_1800FA430.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180026F5C @ 0x180026F5C (sub_180026F5C.c)
 *     sub_18002C274 @ 0x18002C274 (sub_18002C274.c)
 *     sub_1800628C4 @ 0x1800628C4 (sub_1800628C4.c)
 *     sub_1800CB1A4 @ 0x1800CB1A4 (sub_1800CB1A4.c)
 *     sub_1800EB244 @ 0x1800EB244 (sub_1800EB244.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall sub_1800FB0F8(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 *v3; // rsi
  volatile signed __int32 *v4; // rbx
  __int64 *v5; // rax
  __int64 v7; // [rsp+30h] [rbp-38h] BYREF
  volatile signed __int32 *v8; // [rsp+38h] [rbp-30h]
  const void *Src; // [rsp+40h] [rbp-28h] BYREF

  v2 = (_QWORD *)sub_1800EB244(a1);
  sub_180026F5C(v2, &v7, 1u);
  v3 = (__int64 *)(a1 + 1832);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 1832), &v7);
  v4 = v8;
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  v5 = (__int64 *)sub_18002C274(&Src, (_QWORD *)(a1 + 24), " DepthBuffer");
  sub_1800628C4(*v3, v5);
  return sub_1800CB1A4((__int64 *)*v3, *(_DWORD *)(a1 + 1940), *(_DWORD *)(a1 + 1940), 1u, 0, 0LL);
}
