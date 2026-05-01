/*
 * XREFs of ?_ItemMeetsFilterCriteria@SwitchItemFilteredCollection@@AEAA_NPEAUIObservableItem@@@Z @ 0x1803948C0
 * Callers:
 *     ?ItemAdded@SwitchItemFilteredCollection@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@Z @ 0x180393700 (-ItemAdded@SwitchItemFilteredCollection@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@.c)
 *     ?_ApplyFilterToItem@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@_N@Z @ 0x180394760 (-_ApplyFilterToItem@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@_N@Z.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800303B0 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180036718 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@wil@@QEAA_NXZ @ 0x1800AA464 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@wil@@QEAA.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall SwitchItemFilteredCollection::_ItemMeetsFilterCriteria(
        SwitchItemFilteredCollection *this,
        struct IObservableItem *a2)
{
  bool v3; // di
  ApplicationViewHelpers *v5; // rbx
  __int64 v6; // rcx
  const WCHAR *v7; // rbx
  LPCWSTR *v8; // rax
  struct IApplicationView *v9; // rdx
  HWND WindowForView; // rax
  struct IApplicationView *v11; // rdx
  HWND v12; // rax
  struct IUnknown *v14; // [rsp+68h] [rbp+38h] BYREF
  ApplicationViewHelpers *v15; // [rsp+70h] [rbp+40h] BYREF
  __int64 v16; // [rsp+78h] [rbp+48h] BYREF

  v16 = 0LL;
  v3 = 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  if ( (**(int (__fastcall ***)(struct IObservableItem *, GUID *, __int64 *))a2)(
         a2,
         &GUID_de9754c3_efc7_4024_99ca_fbded7bee7cb,
         &v16) < 0 )
    goto LABEL_26;
  (*(void (__fastcall **)(__int64, ApplicationViewHelpers **))(*(_QWORD *)v16 + 24LL))(v16, &v15);
  v3 = 1;
  if ( !*((_QWORD *)this + 25) )
    goto LABEL_6;
  v5 = v15;
  v14 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  if ( (*(int (__fastcall **)(ApplicationViewHelpers *, struct IUnknown **))(*(_QWORD *)v5 + 80LL))(v5, &v14) >= 0 )
    v3 = (unsigned int)SHIsSameObject(v14, *((struct IUnknown **)this + 25)) != 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  if ( v3 )
  {
LABEL_6:
    v6 = *((_QWORD *)this + 26);
    if ( v6 )
    {
      if ( (*(int (__fastcall **)(__int64, ApplicationViewHelpers *, struct IUnknown **))(*(_QWORD *)v6 + 24LL))(
             v6,
             v15,
             &v14) >= 0
        && (_DWORD)v14 )
      {
        v3 = 1;
LABEL_12:
        v7 = (const WCHAR *)*((_QWORD *)this + 28);
        if ( v7 && *v7 )
        {
          v8 = (LPCWSTR *)(*(__int64 (__fastcall **)(struct IObservableItem *))(*(_QWORD *)a2 + 24LL))(a2);
          v3 = FindStringOrdinal(0x400000u, *v8, -1, v7, -1, 1) >= 0;
        }
        goto LABEL_15;
      }
      v3 = 0;
    }
    if ( v3 )
      goto LABEL_12;
  }
LABEL_15:
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowTabHost>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_WindowTabHost>::GetImpl'::`2'::impl) )
  {
    if ( v3 )
    {
      if ( *((_BYTE *)this + 256) )
      {
        WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(
                                (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v15,
                                v9);
        if ( GetPropW(WindowForView, (LPCWSTR)0xA920) )
          v3 = 0;
      }
    }
  }
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowTabHost>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_WindowTabHost>::GetImpl'::`2'::impl) )
  {
    if ( v3 )
    {
      if ( *((_BYTE *)this + 257) )
      {
        v12 = (HWND)ApplicationViewHelpers::GetWindowForView(
                      (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v15,
                      v11);
        if ( GetPropW(v12, (LPCWSTR)0xA921) )
          v3 = 0;
      }
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
LABEL_26:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  return v3;
}
