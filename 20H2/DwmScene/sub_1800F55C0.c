/*
 * XREFs of sub_1800F55C0 @ 0x1800F55C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F7C8 @ 0x18000F7C8 (sub_18000F7C8.c)
 *     sub_18000FB34 @ 0x18000FB34 (sub_18000FB34.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_1800628C4 @ 0x1800628C4 (sub_1800628C4.c)
 *     sub_18006AB04 @ 0x18006AB04 (sub_18006AB04.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall sub_1800F55C0(__int64 a1, __int64 a2, int a3, int a4, char a5, __int64 a6)
{
  __int64 v10; // rax
  volatile signed __int32 *v11; // rbx
  __int64 v13; // [rsp+30h] [rbp-58h] BYREF
  volatile signed __int32 *v14; // [rsp+38h] [rbp-50h]
  __int64 v15[9]; // [rsp+40h] [rbp-48h] BYREF

  v10 = sub_18006AB04(a2);
  sub_18000F7C8(v10, &v13, 0);
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
  sub_18000FB34(v15, 0x25uLL, 0LL, "ImageProcessingEffectPlanarReflection");
  sub_1800628C4(*(_QWORD *)(a1 + 200), v15);
  return sub_18006313C(*(_QWORD *)(a1 + 200), a3, a4, a5, a6, a2);
}
