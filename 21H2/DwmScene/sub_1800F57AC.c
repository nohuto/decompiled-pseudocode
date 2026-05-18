/*
 * XREFs of sub_1800F57AC @ 0x1800F57AC
 * Callers:
 *     sub_1800F2648 @ 0x1800F2648 (sub_1800F2648.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800114D8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?getTemplateNonTypeArgument@UnDecorator@@CA?AVDName@@XZ @ 0x1800F51CC (-getTemplateNonTypeArgument@UnDecorator@@CA-AVDName@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800F57AC(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  volatile signed __int32 *v5; // rbx
  signed __int32 v6; // eax
  bool v7; // zf

  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 112), a2);
  *(_DWORD *)(a1 + 104) = *(_DWORD *)(*a2 + 80LL) - 1;
  result = UnDecorator::getTemplateNonTypeArgument(a1);
  v5 = (volatile signed __int32 *)a2[1];
  if ( v5 )
  {
    v6 = _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF);
    v7 = v6 == 1;
    result = (unsigned int)(v6 - 1);
    if ( v7 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      result = (unsigned int)_InterlockedDecrement(v5 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  return result;
}
