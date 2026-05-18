/*
 * XREFs of sub_18003F340 @ 0x18003F340
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800113F8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_18003F340(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rdi
  _QWORD *result; // rax

  v2 = (_QWORD *)(a1 + 536);
  result = *(_QWORD **)(a1 + 536);
  if ( (_QWORD *)*a2 != result )
  {
    if ( result )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 336LL))(a1);
      *(_BYTE *)(a1 + 504) = 0;
    }
    result = std::shared_ptr<__ExceptionPtr>::operator=(v2, a2);
    if ( *v2 )
    {
      result = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 440LL))(a1);
      *(_BYTE *)(a1 + 504) = 1;
    }
  }
  return result;
}
