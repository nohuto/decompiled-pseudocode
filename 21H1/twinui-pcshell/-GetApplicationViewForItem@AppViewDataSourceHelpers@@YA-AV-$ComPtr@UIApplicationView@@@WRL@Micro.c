/*
 * XREFs of ?GetApplicationViewForItem@AppViewDataSourceHelpers@@YA?AV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1802CC258
 * Callers:
 *     ?OnSwitchItemInvoked@?QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@XamlExplorerHost@@UE$AAAXPE$AAUISwitchItem@Multitasking@3Internal@Windows@@@Z @ 0x1802CC5B8 (-OnSwitchItemInvoked@-QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@Xam_ea_1802CC5B8.c)
 *     ??R_lambda_dfd4c4fe7dd339db13c17a1e4e5cfd6e_@@QEBAXPE$AAUISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIEvaluateItemEventArgs@2345@@Z @ 0x1802DC150 (--R_lambda_dfd4c4fe7dd339db13c17a1e4e5cfd6e_@@QEBAXPE$AAUISwitchItemDataView@Multitasking@Compos.c)
 *     ?GetAppViewFromSwitchItem@XamlBaseViewController@@IE$AAAJPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAPEAUIApplicationView@@@Z @ 0x180304428 (-GetAppViewFromSwitchItem@XamlBaseViewController@@IE$AAAJPE$AAUISwitchItem@Multitasking@Composab.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?get@Data@ISwitchItem@Multitasking@ComposableShell@Internal@Windows@@UE$AAAPE$AAVObject@Platform@@XZ @ 0x1802CD4C8 (-get@Data@ISwitchItem@Multitasking@ComposableShell@Internal@Windows@@UE$AAAPE$AAVObject@Platform.c)
 *     ?GetApplicationViewForItemData@AppViewDataSourceHelpers@@YAJPEAUIInspectable@@AEBU_GUID@@PEAPEAX@Z @ 0x18031B310 (-GetApplicationViewForItemData@AppViewDataSourceHelpers@@YAJPEAUIInspectable@@AEBU_GUID@@PEAPEAX.c)
 */

// Hidden C++ exception states: #wind=1
struct _GUID *__fastcall AppViewDataSourceHelpers::GetApplicationViewForItem(struct _GUID *a1, __int64 a2)
{
  __int64 v4; // rax
  AppViewDataSourceHelpers *v5; // rdi
  struct IInspectable *v6; // rdx
  void **v7; // r9
  struct _GUID v9; // [rsp+40h] [rbp+18h] BYREF

  v4 = Windows::Internal::ComposableShell::Multitasking::ISwitchItem::Data::get(a2);
  *(_QWORD *)v9.Data4 = v4;
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    v5 = (AppViewDataSourceHelpers *)Windows::Internal::ComposableShell::Multitasking::ISwitchItem::Data::get(a2);
    *(_QWORD *)v9.Data4 = v5;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v9.Data4);
    if ( v5 )
      (*(void (__fastcall **)(AppViewDataSourceHelpers *))(*(_QWORD *)v5 + 16LL))(v5);
    *(_QWORD *)&v9.Data1 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
    AppViewDataSourceHelpers::GetApplicationViewForItemData(v5, v6, &v9, v7);
    *(_QWORD *)&a1->Data1 = 0LL;
    if ( a1 != &v9 )
    {
      *(_QWORD *)&a1->Data1 = *(_QWORD *)&v9.Data1;
      *(_QWORD *)&v9.Data1 = 0LL;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v9.Data4);
  }
  else
  {
    *(_QWORD *)&a1->Data1 = 0LL;
  }
  return a1;
}
