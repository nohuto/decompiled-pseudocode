/*
 * XREFs of ?v_OnWindowCreated@LegacyWindowWrapper@@EEAAXW4WindowCreatedType@@@Z @ 0x1802DAD70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?GetVisibility@NavigationLevelHelper@LegacyViewWrapper@@QEBA?AW4Visibility@@XZ @ 0x1802CB0D4 (-GetVisibility@NavigationLevelHelper@LegacyViewWrapper@@QEBA-AW4Visibility@@XZ.c)
 *     ?SendViewStateToWindow@LegacyWindowWrapper@@AEAAX_N@Z @ 0x1802DAACC (-SendViewStateToWindow@LegacyWindowWrapper@@AEAAX_N@Z.c)
 *     ?SendVisibilityToWindow@LegacyWindowWrapper@@AEAAXW4Visibility@@@Z @ 0x1802DAB9C (-SendVisibilityToWindow@LegacyWindowWrapper@@AEAAXW4Visibility@@@Z.c)
 */

int __fastcall LegacyWindowWrapper::v_OnWindowCreated(__int64 a1, int a2)
{
  int result; // eax
  BOOL Visibility; // eax

  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 288) + 216LL))(*(_QWORD *)(a1 + 288));
  if ( !*(_DWORD *)(a1 + 656) )
    return PostMessageW((HWND)*(int *)(a1 + 304), 0x10u, 0LL, 0LL);
  if ( a2 == 1 )
  {
    *(_BYTE *)(a1 + 617) = 1;
  }
  else
  {
    LegacyWindowWrapper::SendViewStateToWindow((LegacyWindowWrapper *)(a1 - 8), 0);
    Visibility = LegacyViewWrapper::NavigationLevelHelper::GetVisibility((unsigned int *)(a1 + 656));
    return LegacyWindowWrapper::SendVisibilityToWindow(a1 - 8, Visibility);
  }
  return result;
}
