/*
 * XREFs of sub_1800FA430 @ 0x1800FA430
 * Callers:
 *     <none>
 * Callees:
 *     _guard_check_icall_nop @ 0x18000BD90 (_guard_check_icall_nop.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180017634 @ 0x180017634 (sub_180017634.c)
 *     sub_18002C274 @ 0x18002C274 (sub_18002C274.c)
 *     sub_1800628C4 @ 0x1800628C4 (sub_1800628C4.c)
 *     sub_1800EB244 @ 0x1800EB244 (sub_1800EB244.c)
 *     sub_1800FB0F8 @ 0x1800FB0F8 (sub_1800FB0F8.c)
 *     sub_1800FB1D0 @ 0x1800FB1D0 (sub_1800FB1D0.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800FA430(__int64 a1)
{
  _QWORD *v2; // rax
  volatile signed __int32 *v3; // rdi
  __int64 *v4; // rax
  __int64 v6; // [rsp+20h] [rbp-38h] BYREF
  volatile signed __int32 *v7; // [rsp+28h] [rbp-30h]
  const void *Src; // [rsp+30h] [rbp-28h] BYREF

  sub_1800FB0F8(a1);
  *(_BYTE *)(a1 + 465) |= 2u;
  sub_1800FB1D0(a1);
  if ( !*(_QWORD *)(a1 + 1896) )
  {
    v2 = (_QWORD *)sub_1800EB244(a1);
    sub_180017634(v2, &v6, 1u);
    std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 1896), &v6);
    v3 = v7;
    if ( v7 )
    {
      if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
        if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
      }
    }
    v4 = (__int64 *)sub_18002C274(&Src, (_QWORD *)(a1 + 24), " ColorSampler");
    sub_1800628C4(*(_QWORD *)(a1 + 1896), v4);
  }
  return sub_1800FB080(a1);
}
