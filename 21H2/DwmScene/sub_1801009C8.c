/*
 * XREFs of sub_1801009C8 @ 0x1801009C8
 * Callers:
 *     sub_1800FF63C @ 0x1800FF63C (sub_1800FF63C.c)
 *     sub_1800FFD00 @ 0x1800FFD00 (sub_1800FFD00.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_18002C82C @ 0x18002C82C (sub_18002C82C.c)
 *     sub_180031B44 @ 0x180031B44 (sub_180031B44.c)
 *     sub_180068194 @ 0x180068194 (sub_180068194.c)
 *     sub_1800D0A74 @ 0x1800D0A74 (sub_1800D0A74.c)
 *     sub_1800F0B14 @ 0x1800F0B14 (sub_1800F0B14.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

char __fastcall sub_1801009C8(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 *v3; // rsi
  volatile signed __int32 *v4; // rbx
  __int64 *v5; // rax
  __int64 v7; // [rsp+30h] [rbp-38h] BYREF
  volatile signed __int32 *v8; // [rsp+38h] [rbp-30h]
  const void *Src; // [rsp+40h] [rbp-28h] BYREF

  v2 = (_QWORD *)sub_1800F0B14(a1);
  sub_18002C82C(v2, &v7, 1u);
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
  v5 = (__int64 *)sub_180031B44(&Src, (_QWORD *)(a1 + 24), " DepthBuffer");
  sub_180068194(*v3, v5);
  return sub_1800D0A74((__int64 *)*v3, *(_DWORD *)(a1 + 1940), *(_DWORD *)(a1 + 1940), 1u, 0, 0LL);
}
