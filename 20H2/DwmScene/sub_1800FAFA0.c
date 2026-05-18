/*
 * XREFs of sub_1800FAFA0 @ 0x1800FAFA0
 * Callers:
 *     sub_1800F9D6C @ 0x1800F9D6C (sub_1800F9D6C.c)
 * Callees:
 *     sub_18000F7C8 @ 0x18000F7C8 (sub_18000F7C8.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_18002C274 @ 0x18002C274 (sub_18002C274.c)
 *     sub_1800628C4 @ 0x1800628C4 (sub_1800628C4.c)
 *     sub_18006313C @ 0x18006313C (sub_18006313C.c)
 *     sub_1800EB244 @ 0x1800EB244 (sub_1800EB244.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall sub_1800FAFA0(__int64 a1, char a2)
{
  __int64 v4; // rax
  __int64 *v5; // rsi
  volatile signed __int32 *v6; // rbx
  __int64 *v7; // rax
  __int64 v9; // [rsp+30h] [rbp-38h] BYREF
  volatile signed __int32 *v10; // [rsp+38h] [rbp-30h]
  const void *Src; // [rsp+40h] [rbp-28h] BYREF

  v4 = sub_1800EB244(a1);
  sub_18000F7C8(v4, &v9, 0);
  v5 = (__int64 *)(a1 + 1912);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 1912), &v9);
  v6 = v10;
  if ( v10 )
  {
    if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  v7 = (__int64 *)sub_18002C274(&Src, (_QWORD *)(a1 + 24), " ColorBuffer");
  sub_1800628C4(*v5, v7);
  return sub_18006313C(*v5, *(_DWORD *)(a1 + 1940), *(_DWORD *)(a1 + 1940), a2, 3, 0LL);
}
