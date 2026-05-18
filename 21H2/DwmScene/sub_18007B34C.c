/*
 * XREFs of sub_18007B34C @ 0x18007B34C
 * Callers:
 *     sub_18007FB54 @ 0x18007FB54 (sub_18007FB54.c)
 *     sub_1800FDF20 @ 0x1800FDF20 (sub_1800FDF20.c)
 *     sub_1800FE2C0 @ 0x1800FE2C0 (sub_1800FE2C0.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_1800715BC @ 0x1800715BC (sub_1800715BC.c)
 *     sub_180072004 @ 0x180072004 (sub_180072004.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18007B34C(__int64 a1, _QWORD *a2, __int64 *a3)
{
  _QWORD *v4; // rsi
  void *v5; // rax
  __int64 v6; // rcx
  volatile signed __int32 *v7; // rbx
  __int64 v8; // rcx
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v11; // [rsp+28h] [rbp-10h]

  v4 = (_QWORD *)(sub_180072004(*a3, (__int64)a2) + 8);
  if ( !*v4 )
  {
    v5 = operator new(0xA8uLL);
    v6 = v5 ? sub_1800715BC((__int64)v5) : 0LL;
    v10 = v6 + 16;
    v11 = (volatile signed __int32 *)v6;
    std::shared_ptr<__ExceptionPtr>::operator=(v4, &v10);
    if ( v11 )
    {
      if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
      {
        v7 = v11;
        (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
        if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
      }
    }
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  v8 = v4[1];
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v8 = v4[1];
  }
  *a2 = *v4;
  a2[1] = v8;
  return a2;
}
