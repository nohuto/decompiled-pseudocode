/*
 * XREFs of sub_1800DDB08 @ 0x1800DDB08
 * Callers:
 *     sub_1800AD770 @ 0x1800AD770 (sub_1800AD770.c)
 *     sub_1800C9D68 @ 0x1800C9D68 (sub_1800C9D68.c)
 *     sub_1800DE9D0 @ 0x1800DE9D0 (sub_1800DE9D0.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_18002C82C @ 0x18002C82C (sub_18002C82C.c)
 *     sub_1800703D4 @ 0x1800703D4 (sub_1800703D4.c)
 *     sub_1800D0A74 @ 0x1800D0A74 (sub_1800D0A74.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     ceilf @ 0x180125024 (ceilf.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 **__fastcall sub_1800DDB08(__int64 a1, __int64 **a2, int a3)
{
  __int64 v3; // r14
  __int64 **v6; // rsi
  _QWORD *v7; // rax
  volatile signed __int32 *v8; // rbx
  signed int v9; // ebx
  float v10; // xmm0_4
  unsigned int v11; // r8d
  __int64 *v12; // rax
  __int64 **result; // rax
  __int64 **v14; // [rsp+30h] [rbp-58h] BYREF
  volatile signed __int32 *v15; // [rsp+38h] [rbp-50h]

  v3 = a3;
  v14 = a2;
  v6 = (__int64 **)(a1 + 16 * (a3 + 11LL));
  if ( !*v6 )
  {
    v7 = (_QWORD *)sub_1800703D4(*(_QWORD *)(a1 + 32));
    sub_18002C82C(v7, &v14, 1u);
    std::shared_ptr<__ExceptionPtr>::operator=(v6, (__int64 *)&v14);
    v8 = v15;
    if ( v15 )
    {
      if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
        if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
      }
    }
    v9 = (int)ceilf((float)*(int *)(a1 + 8) / flt_1801D9950[v3]);
    v10 = ceilf((float)*(int *)(a1 + 12) / flt_1801D9950[v3]);
    if ( v9 < 1 )
      v9 = 1;
    v11 = (int)v10;
    if ( (int)v10 < 1 )
      v11 = 1;
    sub_1800D0A74(*v6, v9, v11, 1u, 0, *(_QWORD *)(a1 + 32));
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  v12 = v6[1];
  if ( v12 )
    _InterlockedAdd((volatile signed __int32 *)v12 + 2, 1u);
  result = a2;
  *a2 = *v6;
  a2[1] = v6[1];
  return result;
}
