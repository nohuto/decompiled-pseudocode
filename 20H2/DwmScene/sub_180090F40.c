/*
 * XREFs of sub_180090F40 @ 0x180090F40
 * Callers:
 *     sub_180093A44 @ 0x180093A44 (sub_180093A44.c)
 *     sub_180093B70 @ 0x180093B70 (sub_180093B70.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180030CCC @ 0x180030CCC (sub_180030CCC.c)
 *     sub_18006294C @ 0x18006294C (sub_18006294C.c)
 *     sub_180090CE0 @ 0x180090CE0 (sub_180090CE0.c)
 *     sub_1800CD334 @ 0x1800CD334 (sub_1800CD334.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180090F40(__int64 *a1, __int64 a2, unsigned int a3, int a4, int a5, int a6, _QWORD *a7)
{
  __int64 v11; // rbx
  volatile signed __int32 *v12; // rbx
  unsigned int v13; // eax
  __int64 v15; // [rsp+30h] [rbp-38h] BYREF
  volatile signed __int32 *v16; // [rsp+38h] [rbp-30h]

  v11 = *a1;
  if ( !*a1 )
  {
    sub_180090CE0(a7, &v15, 1, (__int64)&a5);
    std::shared_ptr<__ExceptionPtr>::operator=(a1, &v15);
    v12 = v16;
    if ( v16 )
    {
      if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
        if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
      }
    }
    sub_18006294C(*a1, 8, 0);
    v11 = *a1;
  }
  v13 = sub_180030CCC(4, a4);
  return sub_1800CD334(v11, a2, a3, v13, a6, 4);
}
