/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UICortanaShownEventArgs@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180087B80
 * Callers:
 *     ?OnShown@SearchAppExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z @ 0x1800835D0 (-OnShown@SearchAppExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z.c)
 *     Microsoft::WRL::Details::Make__SearchAppExperienceManagerNotification::OnShown_::_2_::CCortanaShownEventArgs_Windows::Foundation::Rect_&_ @ 0x18008365C (Microsoft--WRL--Details--Make__SearchAppExperienceManagerNotification--OnShown_--_2_--CCortanaSh.c)
 *     _ShellFeedsExperienceManagerNotification::OnShown_::_2_::CCortanaShownEventArgs::Release @ 0x180087B70 (_ShellFeedsExperienceManagerNotification--OnShown_--_2_--CCortanaShownEventArgs--Release.c)
 *     Microsoft::WRL::Details::Make__ShellFeedsExperienceManagerNotification::OnShown_::_2_::CCortanaShownEventArgs_Windows::Foundation::Rect_&_ @ 0x180097C6C (Microsoft--WRL--Details--Make__ShellFeedsExperienceManagerNotification--OnShown_--_2_--CCortanaS.c)
 *     ?OnShown@ShellFeedsExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z @ 0x18009B970 (-OnShown@ShellFeedsExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UICortanaShownEventArgs@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1800F2500 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UICor_ea_1800F2500.c)
 *     Microsoft::WRL::Details::Make__CortanaExperienceManagerNotification::OnShown_::_2_::CCortanaShownEventArgs_Windows::Foundation::Rect_&_ @ 0x1801B65D0 (Microsoft--WRL--Details--Make__CortanaExperienceManagerNotification--OnShown_--_2_--CCortanaShow.c)
 *     Microsoft::WRL::Details::Make__SearchAppExperienceManagerNotification::OnFocusNavigate_::_2_::CFocusNavigateEventArgs_enum_Windows::Internal::Shell::Experience::FocusNavigateDirection_&_ @ 0x1801B665C (Microsoft--WRL--Details--Make__SearchAppExperienceManagerNotification--OnFocusNavigate_--_2_--CF.c)
 *     ?OnFocusNavigate@CortanaExperienceManagerNotification@@UEAAXW4FocusNavigateDirection@Experience@Shell@Internal@Windows@@@Z @ 0x1801BA1B0 (-OnFocusNavigate@CortanaExperienceManagerNotification@@UEAAXW4FocusNavigateDirection@Experience@.c)
 *     ?OnShown@CortanaExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z @ 0x1801BA300 (-OnShown@CortanaExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z.c)
 *     ?OnFocusNavigate@SearchAppExperienceManagerNotification@@UEAAXW4FocusNavigateDirection@Experience@Shell@Internal@Windows@@@Z @ 0x1801F67B0 (-OnFocusNavigate@SearchAppExperienceManagerNotification@@UEAAXW4FocusNavigateDirection@Experienc.c)
 *     ?InternalRelease@?$ComPtr@VAppViewIconFactory@@@WRL@Microsoft@@IEAAKXZ @ 0x18033E4C0 (-InternalRelease@-$ComPtr@VAppViewIconFactory@@@WRL@Microsoft@@IEAAKXZ.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800922B0 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::ICortanaShownEventArgs>::Release(
        __int64 a1)
{
  signed __int64 v1; // rax
  __int64 v2; // r10
  unsigned int v3; // ebx
  signed __int64 v4; // rtt

  v1 = *(_QWORD *)(a1 + 24);
  v2 = a1;
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 2147483646;
    v3 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v1 - 1, v1);
    if ( v4 == v1 )
      goto LABEL_8;
  }
  v3 = Microsoft::WRL::Details::SafeUnknownDecrementReference(
         (Microsoft::WRL::Details *)(2 * v1 + 16),
         (volatile int *)((unsigned __int64)v1 >> 63));
LABEL_8:
  if ( !v3 )
  {
    if ( v2 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 56LL))(v2, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v3;
}
