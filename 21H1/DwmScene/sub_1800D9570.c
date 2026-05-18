/*
 * XREFs of sub_1800D9570 @ 0x1800D9570
 * Callers:
 *     sub_1800DB720 @ 0x1800DB720 (sub_1800DB720.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800113F8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800D9570(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  __int64 *v5; // rdx
  __int64 result; // rax

  v2 = (_QWORD *)(a1 + 24);
  v5 = (__int64 *)(a1 + 8);
  if ( *(_BYTE *)(a1 + 56) || (result = *v5, *v2 != *v5) )
  {
    std::shared_ptr<__ExceptionPtr>::operator=(v2, v5);
    result = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a2 + 120LL))(a2, v2);
  }
  *(_BYTE *)(a1 + 56) = 0;
  return result;
}
