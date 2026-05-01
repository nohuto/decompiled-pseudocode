/*
 * XREFs of ??1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ @ 0x18042AABC
 * Callers:
 *     ??1SearchAppDesktopExperienceView@@UEAA@XZ @ 0x1801E3710 (--1SearchAppDesktopExperienceView@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@SearchAppDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVISearchAppExperienceManagerNotification@Cortana@TwinUI@@V?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x1801E4CC8 (-RuntimeClassInitialize@SearchAppDesktopExperienceView@@QEAAJPEAUIServiceProvider@@_ea_1801E4CC8.c)
 *     ??1CortanaDesktopExperienceView@@UEAA@XZ @ 0x1801E65D8 (--1CortanaDesktopExperienceView@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@V?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x1801EDB74 (-RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PE_ea_1801EDB74.c)
 *     ??1?$unique_ptr@VAssistantLightManager@Lighting@TwinUI@@U?$default_delete@VAssistantLightManager@Lighting@TwinUI@@@wistd@@@wistd@@QEAA@XZ @ 0x180429BC4 (--1-$unique_ptr@VAssistantLightManager@Lighting@TwinUI@@U-$default_delete@VAssistantLightManager.c)
 * Callees:
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x1800463E8 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089424 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x180093AA4 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180113F20 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$integr.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1801EFB94 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?handle_wait@wil@@YA_NPEAXK@Z @ 0x180200770 (-handle_wait@wil@@YA_NPEAXK@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_LightingWhenLidClosed@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180429DF0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_LightingWhenLidClosed@@@details@wil@@QEAA.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@PEAX@1@@Z @ 0x18042A144 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@QEAUHWND__@@V-$shared_ptr@VWin32AppViewInfo@@@.c)
 */

void __fastcall TwinUI::Lighting::AssistantLightManager::~AssistantLightManager(
        TwinUI::Lighting::AssistantLightManager *this,
        void *a2)
{
  __int64 v3; // r8
  wil *v4; // rcx
  struct wil::details::IFunctorHost *v5; // r8
  void *v6; // rdx
  void *v7; // rdx
  _QWORD v8[2]; // [rsp+20h] [rbp-60h] BYREF
  struct DiagnosticsInfo v9; // [rsp+30h] [rbp-50h] BYREF
  const char *v10; // [rsp+38h] [rbp-48h]
  __int64 v11; // [rsp+40h] [rbp-40h]
  __int16 v12; // [rsp+48h] [rbp-38h]
  _BYTE v13[8]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v14; // [rsp+58h] [rbp-28h]
  int v15; // [rsp+64h] [rbp-1Ch]
  struct DiagnosticsInfo retaddr; // [rsp+88h] [rbp+8h]
  TwinUI::Lighting::AssistantLightManager *v17; // [rsp+90h] [rbp+10h] BYREF

  wil::details::SetEvent(*((wil::details **)this + 8), a2);
  v4 = (wil *)*((_QWORD *)this + 7);
  if ( v4 )
    wil::handle_wait(v4, (void *)0xFFFFFFFFLL);
  v17 = this;
  v9 = retaddr;
  v10 = "pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp";
  v11 = 0LL;
  v12 = 49;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_LightingWhenLidClosed>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_LightingWhenLidClosed>::GetImpl'::`2'::impl,
    1u,
    v3);
  v8[0] = off_1804A8070;
  v8[1] = &v17;
  wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v13, 16487091, &v9);
  wil::details::RunFunctor((wil::details *)v8, (struct wil::details::IFunctor *)v13, v5);
  if ( v14 )
    *(_DWORD *)(v14 + 16) = v15;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 9);
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
    (wil::details **)this + 8,
    v6);
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
    (wil::details **)this + 7,
    v7);
  std::_Tree_val<std::_Tree_simple_types<std::pair<HWND__ * const,std::shared_ptr<Win32AppViewInfo>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<HWND__ * const,std::shared_ptr<Win32AppViewInfo>>,void *>>>(
    (__int64)this + 40,
    (__int64)this + 40,
    *(__int64 **)(*((_QWORD *)this + 5) + 8LL));
  std::_Deallocate<16,0>(*((void **)this + 5), (const struct std::nothrow_t *)0x38);
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
}
