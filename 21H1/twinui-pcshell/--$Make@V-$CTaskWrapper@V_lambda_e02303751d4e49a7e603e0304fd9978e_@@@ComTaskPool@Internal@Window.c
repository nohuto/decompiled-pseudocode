/*
 * XREFs of ??$Make@V?$CTaskWrapper@V_lambda_e02303751d4e49a7e603e0304fd9978e_@@@ComTaskPool@Internal@Windows@@V_lambda_e02303751d4e49a7e603e0304fd9978e_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$CTaskWrapper@V_lambda_e02303751d4e49a7e603e0304fd9978e_@@@ComTaskPool@Internal@Windows@@@12@$$QEAV_lambda_e02303751d4e49a7e603e0304fd9978e_@@@Z @ 0x18001F84C
 * Callers:
 *     ??$QueueViewManagementTask@V_lambda_e3476b40c3599fe2d8be82ea48422b91_@@@CIAMGlobals@@QEAAJ$$QEAV_lambda_e3476b40c3599fe2d8be82ea48422b91_@@@Z @ 0x18001F744 (--$QueueViewManagementTask@V_lambda_e3476b40c3599fe2d8be82ea48422b91_@@@CIAMGlobals@@QEAAJ$$QEAV.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800623A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_e02303751d4e49a7e603e0304fd9978e_>,_lambda_e02303751d4e49a7e603e0304fd9978e_>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // rcx
  _QWORD *v7; // rcx

  *a1 = 0LL;
  v4 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 3) = 1;
    *v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v5[2] = 0LL;
    if ( v5 + 2 != a2 )
    {
      v5[2] = *a2;
      *a2 = 0LL;
    }
    v5[3] = 0LL;
    v6 = a2 + 1;
    if ( v5 + 3 != a2 + 1 )
    {
      v5[3] = *v6;
      *v6 = 0LL;
    }
    v7 = a2 + 2;
    v5[4] = 0LL;
    if ( v5 + 4 != a2 + 2 )
    {
      v5[4] = *v7;
      *v7 = 0LL;
    }
    *v5 = &Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_e02303751d4e49a7e603e0304fd9978e_>::`vftable';
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release();
    *a1 = v5;
  }
  return a1;
}
