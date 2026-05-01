/*
 * XREFs of ?RuntimeClassInitialize@SwitchItemCollection@@QEAAJPEAUISwitchItemFactory@@PEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@W4SwitchItemFilterBehavior@@@Z @ 0x180391A30
 * Callers:
 *     ??$MakeAndInitialize@VSwitchItemCollection@@V1@AEAPEAUISwitchItemFactory@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewVisibilityDebouncedNotificationService@@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@AEAW4SwitchItemFilterBehavior@@@Details@WRL@Microsoft@@YAJPEAPEAVSwitchItemCollection@@AEAPEAUISwitchItemFactory@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewVisibilityDebouncedNotificationService@@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@AEAW4SwitchItemFilterBehavior@@@Z @ 0x180390D80 (--$MakeAndInitialize@VSwitchItemCollection@@V1@AEAPEAUISwitchItemFactory@@AEAPEAUIApplicationVie.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180010000 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??$AsWeak@UIInspectable@@@WRL@Microsoft@@YAJPEAUIInspectable@@PEAVWeakRef@01@@Z @ 0x18001DE50 (--$AsWeak@UIInspectable@@@WRL@Microsoft@@YAJPEAUIInspectable@@PEAVWeakRef@01@@Z.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180067450 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18008858C (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?destroy@?$__func@V_lambda_66f8cb2e4a745a42959e69ed39c49775_@@$$A6AJI_K_J@Z@__function@wistd@@UEAAXXZ @ 0x18009E600 (-destroy@-$__func@V_lambda_66f8cb2e4a745a42959e69ed39c49775_@@$$A6AJI_K_J@Z@__function@wistd@@UE.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::TabDataModelTabPropertyChangedEventArgs_____lambda_de01ca16b280740cb5775a2ceb806b0d___ @ 0x1800B4950 (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--Internal--ComposableSh.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIVirtualDesktopCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopCollection@@@Z @ 0x18017A538 (--4-$ComPtr@UIVirtualDesktopCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopCollectio.c)
 *     ?_AddViews@SwitchItemCollection@@AEAAJPEAUIObjectArray@@@Z @ 0x180392080 (-_AddViews@SwitchItemCollection@@AEAAJPEAUIObjectArray@@@Z.c)
 */

__int64 __fastcall SwitchItemCollection::RuntimeClassInitialize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  __int64 *v7; // r12
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rbx
  int v14; // ebx
  __int64 v15; // rdx
  __int64 *v16; // rax
  int v17; // esi
  __int64 v18; // rbx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v22; // rcx
  __int64 v23; // rbx
  int v24; // eax
  __int64 v25; // rdx
  __int64 *v26; // [rsp+20h] [rbp-10h] BYREF
  __int64 v27; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  struct IObjectArray *v29; // [rsp+60h] [rbp+30h] BYREF
  __int64 v30; // [rsp+68h] [rbp+38h] BYREF

  v7 = (__int64 *)(a1 + 192);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 + 192), a3);
  Microsoft::WRL::ComPtr<IVirtualDesktopCollection>::operator=((__int64 *)(a1 + 200), a4);
  v11 = *(_QWORD *)(a1 + 208);
  if ( v11 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v11 = *(_QWORD *)(a1 + 208);
    }
    v30 = v11;
    *(_QWORD *)(a1 + 208) = a2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
  }
  v12 = a6;
  *(_DWORD *)(a1 + 248) = a7;
  if ( !v12 )
    goto LABEL_22;
  v13 = a5;
  if ( !a5 )
    goto LABEL_22;
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 + 216), v12);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 224));
  v14 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 112LL))(v13, a1 + 224);
  if ( v14 < 0 )
  {
    v15 = 132LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemcollection.cpp",
      (const char *)(unsigned int)v14);
    return (unsigned int)v14;
  }
  a6 = 0LL;
  v26 = &a6;
  v30 = a1;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v30);
  v16 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v26);
  v17 = Microsoft::WRL::AsWeak<IInspectable>((__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a1, v16);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
  if ( v17 >= 0 )
  {
    v26 = (__int64 *)a1;
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(&v27, &a6);
    Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::TabDataModelTabPropertyChangedEventArgs_____lambda_de01ca16b280740cb5775a2ceb806b0d___(
      &v30,
      (__int64)&v26);
    wistd::__function::__func<_lambda_66f8cb2e4a745a42959e69ed39c49775_,long (unsigned int,unsigned __int64,__int64)>::destroy((__int64)&v26);
    v18 = v30;
    v19 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 224) + 152LL))(
            *(_QWORD *)(a1 + 224),
            v30,
            a1 + 240);
    v17 = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9A,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemcollection.cpp",
        (const char *)(unsigned int)v19);
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      goto LABEL_15;
    }
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    v22 = a6;
    if ( a6 )
    {
      a6 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
LABEL_22:
    v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 200) + 24LL))(
            *(_QWORD *)(a1 + 200),
            a1 + 160,
            a1 + 232);
    if ( v14 < 0 )
    {
      v15 = 157LL;
      goto LABEL_9;
    }
    v29 = 0LL;
    v23 = *v7;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v29);
    v24 = (*(__int64 (__fastcall **)(__int64, struct IObjectArray **))(*(_QWORD *)v23 + 24LL))(v23, &v29);
    v14 = v24;
    if ( v24 >= 0 )
    {
      v24 = SwitchItemCollection::_AddViews((SwitchItemCollection *)a1, v29);
      v14 = v24;
      if ( v24 >= 0 )
      {
LABEL_29:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v29);
        return (unsigned int)v14;
      }
      v25 = 162LL;
    }
    else
    {
      v25 = 160LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemcollection.cpp",
      (const char *)(unsigned int)v24);
    goto LABEL_29;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x87,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemcollection.cpp",
    (const char *)(unsigned int)v17);
LABEL_15:
  v20 = a6;
  if ( a6 )
  {
    a6 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  return (unsigned int)v17;
}
