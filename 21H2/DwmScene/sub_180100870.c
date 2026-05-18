/*
 * XREFs of sub_180100870 @ 0x180100870
 * Callers:
 *     sub_1800FF63C @ 0x1800FF63C (sub_1800FF63C.c)
 * Callees:
 *     sub_18000F8A8 @ 0x18000F8A8 (sub_18000F8A8.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180031B44 @ 0x180031B44 (sub_180031B44.c)
 *     sub_180068194 @ 0x180068194 (sub_180068194.c)
 *     sub_180068A0C @ 0x180068A0C (sub_180068A0C.c)
 *     sub_1800F0B14 @ 0x1800F0B14 (sub_1800F0B14.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

char __fastcall sub_180100870(__int64 a1, char a2)
{
  __int64 v4; // rax
  __int64 *v5; // rsi
  volatile signed __int32 *v6; // rbx
  __int64 *v7; // rax
  __int64 v9; // [rsp+30h] [rbp-38h] BYREF
  volatile signed __int32 *v10; // [rsp+38h] [rbp-30h]
  const void *Src; // [rsp+40h] [rbp-28h] BYREF

  v4 = sub_1800F0B14(a1);
  sub_18000F8A8(v4, &v9, 0);
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
  v7 = (__int64 *)sub_180031B44(&Src, (_QWORD *)(a1 + 24), " ColorBuffer");
  sub_180068194(*v5, v7);
  return sub_180068A0C(*v5, *(_DWORD *)(a1 + 1940), *(_DWORD *)(a1 + 1940), a2, 3, 0LL);
}
