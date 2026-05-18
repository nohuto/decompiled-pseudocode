/*
 * XREFs of sub_1800FAE90 @ 0x1800FAE90
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F8A8 @ 0x18000F8A8 (sub_18000F8A8.c)
 *     sub_18000FC14 @ 0x18000FC14 (sub_18000FC14.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180068194 @ 0x180068194 (sub_180068194.c)
 *     sub_1800703D4 @ 0x1800703D4 (sub_1800703D4.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

char __fastcall sub_1800FAE90(__int64 a1, __int64 a2, int a3, int a4, char a5, __int64 a6)
{
  __int64 v10; // rax
  volatile signed __int32 *v11; // rbx
  __int64 v13; // [rsp+30h] [rbp-58h] BYREF
  volatile signed __int32 *v14; // [rsp+38h] [rbp-50h]
  __int64 v15[9]; // [rsp+40h] [rbp-48h] BYREF

  v10 = sub_1800703D4(a2);
  sub_18000F8A8(v10, &v13, 0);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 200), &v13);
  v11 = v14;
  if ( v14 )
  {
    if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  v15[2] = 0LL;
  v15[3] = 15LL;
  LOBYTE(v15[0]) = 0;
  sub_18000FC14(v15, 0x25uLL, 0LL, "ImageProcessingEffectPlanarReflection");
  sub_180068194(*(_QWORD *)(a1 + 200), v15);
  return sub_180068A0C(*(_QWORD *)(a1 + 200), a3, a4, a5, a6, a2);
}
