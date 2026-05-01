/*
 * XREFs of ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@@Z @ 0x18018A470
 * Callers:
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18018E8E8 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$try_get_activation_factory@UAppExtensionCatalog@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIActivationFactory@Foundation@Windows@5@@impl@winrt@@YA?AUIActivationFactory@Foundation@Windows@1@PEAUhresult_error@1@@Z @ 0x1801C3E80 (--$try_get_activation_factory@UAppExtensionCatalog@AppExtensions@ApplicationModel@WindowsUdk@win.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1800663C0 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 *     WINRT_GetRestrictedErrorInfo @ 0x18008E2C8 (WINRT_GetRestrictedErrorInfo.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?originate@hresult_error@winrt@@AEAAXUhresult@2@PEAX@Z @ 0x18018E7A0 (-originate@hresult_error@winrt@@AEAAXUhresult@2@PEAX@Z.c)
 */

__int64 __fastcall winrt::hresult_error::hresult_error(__int64 a1, unsigned int a2)
{
  _QWORD *v2; // rsi
  void (__fastcall ***v5)(_QWORD, void *, __int64 *); // rcx
  void (__fastcall **v6)(_QWORD, void *, __int64 *); // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)a1 = 0LL;
  v2 = (_QWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 12) = a2;
  *(_DWORD *)(a1 + 8) = -1430532899;
  *(_QWORD *)(a1 + 16) = 0LL;
  WINRT_GetRestrictedErrorInfo();
  if ( *v2 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v2 + 32LL))(*v2, a1);
    v5 = (void (__fastcall ***)(_QWORD, void *, __int64 *))*v2;
    if ( *v2 )
    {
      v6 = *v5;
      v8 = 0LL;
      (*v6)(v5, &winrt::impl::guid_storage<winrt::impl::ILanguageExceptionErrorInfo2>::value, &v8);
      if ( v8 )
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 40LL))(v8, 0LL);
        winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref(&v8);
      }
    }
  }
  else
  {
    winrt::hresult_error::originate(a1, a2, 0LL);
  }
  return a1;
}
