/*
 * XREFs of ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18002CC2C
 * Callers:
 *     sub_180027610 @ 0x180027610 (sub_180027610.c)
 *     sub_180028E68 @ 0x180028E68 (sub_180028E68.c)
 *     sub_1800296C0 @ 0x1800296C0 (sub_1800296C0.c)
 *     sub_180029930 @ 0x180029930 (sub_180029930.c)
 *     sub_1800388C4 @ 0x1800388C4 (sub_1800388C4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::shared_ptr<__ExceptionPtr>::operator=(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r8
  volatile signed __int32 *v4; // rbx

  v2 = a2[1];
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = a2[1];
  }
  v4 = (volatile signed __int32 *)a1[1];
  *a1 = *a2;
  a1[1] = v2;
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  return a1;
}
