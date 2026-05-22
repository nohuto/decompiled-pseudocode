/*
 * XREFs of ??R?$_Func_class@_NPEAVActivatableEntityBamoPrincipal@@@std@@QEBA_NPEAVActivatableEntityBamoPrincipal@@@Z @ 0x1800146BC
 * Callers:
 *     ?OnDeviceAttach@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z @ 0x180036D50 (-OnDeviceAttach@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?find_and_return_if@ActivationWatcherBamoPrincipal@@AEAA?AV?$com_ptr_t@VActivatableEntityBamoPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$function@$$A6A_NPEAVActivatableEntityBamoPrincipal@@@Z@std@@@Z @ 0x1800462F0 (-find_and_return_if@ActivationWatcherBamoPrincipal@@AEAA-AV-$com_ptr_t@VActivatableEntityBamoPri.c)
 *     ?OnDeviceRemoval@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z @ 0x180138830 (-OnDeviceRemoval@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Func_class<bool,ActivatableEntityBamoPrincipal *>::operator()(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  v2 = *(_QWORD *)(a1 + 56);
  if ( !v2 )
  {
    std::_Xbad_function_call();
    __debugbreak();
    JUMPOUT(0x180051B55LL);
  }
  return (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 16LL))(v2, &v4);
}
