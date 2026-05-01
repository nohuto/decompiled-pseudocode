/*
 * XREFs of ?v_HandleActivationRequested@LegacyWindowWrapper@@EEAAXXZ @ 0x1802DAD10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?GetVisibility@NavigationLevelHelper@LegacyViewWrapper@@QEBA?AW4Visibility@@XZ @ 0x1802CB0D4 (-GetVisibility@NavigationLevelHelper@LegacyViewWrapper@@QEBA-AW4Visibility@@XZ.c)
 *     ?SendVisibilityToWindow@LegacyWindowWrapper@@AEAAXW4Visibility@@@Z @ 0x1802DAB9C (-SendVisibilityToWindow@LegacyWindowWrapper@@AEAAXW4Visibility@@@Z.c)
 */

void __fastcall LegacyWindowWrapper::v_HandleActivationRequested(LegacyWindowWrapper *this)
{
  BOOL Visibility; // eax

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 36) + 216LL))(*((_QWORD *)this + 36));
  if ( !*((_BYTE *)this + 617) )
  {
    *((_BYTE *)this + 617) = 1;
    Visibility = LegacyViewWrapper::NavigationLevelHelper::GetVisibility((unsigned int *)this + 164);
    LegacyWindowWrapper::SendVisibilityToWindow((__int64)this - 8, Visibility);
  }
}
