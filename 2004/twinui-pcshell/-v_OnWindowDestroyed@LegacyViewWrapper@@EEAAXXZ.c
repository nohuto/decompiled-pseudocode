/*
 * XREFs of ?v_OnWindowDestroyed@LegacyViewWrapper@@EEAAXXZ @ 0x1802C9FC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?NavigateInternal@ViewWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802CFE48 (-NavigateInternal@ViewWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Wind.c)
 */

void __fastcall LegacyViewWrapper::v_OnWindowDestroyed(LegacyViewWrapper *this)
{
  __int64 v2; // rdx

  if ( *((_DWORD *)this + 142) == 1 )
    ViewWrapperBase::NavigateInternal(this, 0LL);
  v2 = *((_QWORD *)this + 24);
  if ( v2 )
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 21) + 504LL) + 168LL))(
      *(_QWORD *)(*((_QWORD *)this + 21) + 504LL),
      v2,
      *((unsigned int *)this + 68));
}
