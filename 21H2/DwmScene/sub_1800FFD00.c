/*
 * XREFs of sub_1800FFD00 @ 0x1800FFD00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_check_icall_nop @ 0x18000BE50 (_guard_check_icall_nop.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180017874 @ 0x180017874 (sub_180017874.c)
 *     sub_180031B44 @ 0x180031B44 (sub_180031B44.c)
 *     sub_180068194 @ 0x180068194 (sub_180068194.c)
 *     sub_1800F0B14 @ 0x1800F0B14 (sub_1800F0B14.c)
 *     sub_1801009C8 @ 0x1801009C8 (sub_1801009C8.c)
 *     sub_180100AA0 @ 0x180100AA0 (sub_180100AA0.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800FFD00(__int64 a1)
{
  _QWORD *v2; // rax
  volatile signed __int32 *v3; // rdi
  __int64 *v4; // rax
  __int64 v6; // [rsp+20h] [rbp-38h] BYREF
  volatile signed __int32 *v7; // [rsp+28h] [rbp-30h]
  const void *Src; // [rsp+30h] [rbp-28h] BYREF

  sub_1801009C8(a1);
  *(_BYTE *)(a1 + 465) |= 2u;
  sub_180100AA0(a1);
  if ( !*(_QWORD *)(a1 + 1896) )
  {
    v2 = (_QWORD *)sub_1800F0B14(a1);
    sub_180017874(v2, &v6, 1u);
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
    v4 = (__int64 *)sub_180031B44(&Src, (_QWORD *)(a1 + 24), " ColorSampler");
    sub_180068194(*(_QWORD *)(a1 + 1896), v4);
  }
  return sub_180100950(a1);
}
