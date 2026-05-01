/*
 * XREFs of ??1?$ScopeExitFn@V_lambda_3c6b3245d56e94aa13f25a05674a2632_@@@details@wil@@QEAA@XZ @ 0x18013FE68
 * Callers:
 *     _SmartCookie::Unregister_::_1_::dtor$0 @ 0x1801418C5 (_SmartCookie--Unregister_--_1_--dtor$0.c)
 * Callees:
 *     ??4?$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z @ 0x180140064 (--4-$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z.c)
 */

__int64 __fastcall wil::details::ScopeExitFn<_lambda_3c6b3245d56e94aa13f25a05674a2632_>::~ScopeExitFn<_lambda_3c6b3245d56e94aa13f25a05674a2632_>(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    *(_DWORD *)(*(_QWORD *)a1 + 120LL) = 0;
    return wistd::function<long (unsigned int,unsigned __int64,__int64)>::operator=(*(_QWORD *)a1);
  }
  return result;
}
