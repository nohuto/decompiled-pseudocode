/*
 * XREFs of ?NavigateInternal@ViewWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802CF558
 * Callers:
 *     ?v_OnWindowDestroyed@LegacyViewWrapper@@EEAAXXZ @ 0x1802C96D0 (-v_OnWindowDestroyed@LegacyViewWrapper@@EEAAXXZ.c)
 *     _lambda_16b2729c4ca1e6616f2a62f33a09629a_::operator() @ 0x1802C9B84 (_lambda_16b2729c4ca1e6616f2a62f33a09629a_--operator().c)
 *     ?v_SetDesiredNavigationLevel@UAPViewWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802CA550 (-v_SetDesiredNavigationLevel@UAPViewWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Int.c)
 *     ?HandleDebounceTimeout@NavigationLevelHelper@LegacyViewWrapper@@AEAAXPEAU_TP_TIMER@@@Z @ 0x1802CA848 (-HandleDebounceTimeout@NavigationLevelHelper@LegacyViewWrapper@@AEAAXPEAU_TP_TIMER@@@Z.c)
 *     ?SetDesiredNavigationLevel@NavigationLevelHelper@LegacyViewWrapper@@QEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802CA98C (-SetDesiredNavigationLevel@NavigationLevelHelper@LegacyViewWrapper@@QEAAXW4NavigationLevel@ViewM.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewWrapperBase::NavigateInternal(__int64 a1, unsigned int a2)
{
  bool v2; // zf
  __int64 result; // rax

  if ( a2 != *(_DWORD *)(a1 + 292) )
  {
    v2 = *(_DWORD *)(a1 + 344) == 0;
    *(_DWORD *)(a1 + 292) = a2;
    if ( v2 )
      return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 168) + 504LL) + 32LL))(
               *(_QWORD *)(*(_QWORD *)(a1 + 168) + 504LL),
               *(unsigned int *)(a1 + 148),
               a2);
  }
  return result;
}
