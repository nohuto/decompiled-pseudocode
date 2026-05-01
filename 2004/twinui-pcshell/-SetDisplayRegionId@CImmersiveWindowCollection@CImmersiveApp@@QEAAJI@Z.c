/*
 * XREFs of ?SetDisplayRegionId@CImmersiveWindowCollection@CImmersiveApp@@QEAAJI@Z @ 0x180063F04
 * Callers:
 *     ?SetWindowingEnvironmentConfigInternal@CImmersiveApp@@UEAAJPEAUIWindowingEnvironmentConfig@@@Z @ 0x180063E00 (-SetWindowingEnvironmentConfigInternal@CImmersiveApp@@UEAAJPEAUIWindowingEnvironmentConfig@@@Z.c)
 *     ?SetMonitorInternal@CImmersiveApp@@UEAAXPEAUIImmersiveMonitor@@PEAUUPDATE_MONITOR_SUPPLEMENTAL_DATA@@W4MonitorChangeOptions@@@Z @ 0x180070120 (-SetMonitorInternal@CImmersiveApp@@UEAAXPEAUIImmersiveMonitor@@PEAUUPDATE_MONITOR_SUPPLEMENTAL_D.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18002CB98 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@details@wi.c)
 *     ?GetView@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IVectorView@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@345@@Z @ 0x180064120 (-GetView@-$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisp.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InsertAtInternal@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@AEAAJIUDisplayRegionId@WindowingEnvironment@ApplicationModel@25@_N@Z @ 0x18006C4B8 (-InsertAtInternal@-$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windo.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$Implements@U?$IVector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@U?$IIterable@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@234@U?$IObservableVector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@234@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180078990 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$Implements@U-$I.c)
 *     ??$Make@V?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@AEBUDisplayRegionIdEqualityPredicate@WindowingEnvironment@ApplicationModel@25@Upermission@12345@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@@12@AEBUDisplayRegionIdEqualityPredicate@WindowingEnvironment@ApplicationModel@Internal@Windows@@$$QEAUpermission@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@7Collections@Foundation@8@@Z @ 0x180093920 (--$Make@V-$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisp.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@V?$ObservableVector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@$00@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18017EF08 (-InternalRelease@-$ComPtr@V-$ObservableVector@UDisplayRegionId@WindowingEnvironment@ApplicationM.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::SetDisplayRegionId(
        CImmersiveApp::CImmersiveWindowCollection *this,
        unsigned int a2)
{
  _QWORD *v4; // rsi
  _QWORD *v5; // r14
  int v6; // eax
  __int64 v7; // r9
  __int64 v8; // rdi
  int v9; // eax
  unsigned int v10; // ebx
  int View; // eax
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // [rsp+20h] [rbp-10h] BYREF
  __int64 v17; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  __int64 v19; // [rsp+70h] [rbp+40h] BYREF
  __int64 v20; // [rsp+78h] [rbp+48h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::GetImpl'::`2'::impl,
    1u);
  v4 = (_QWORD *)*((_QWORD *)this + 21);
  v5 = &v4[*((_QWORD *)this + 22)];
  if ( v4 == v5 )
    return 0LL;
  while ( 1 )
  {
    v19 = 0LL;
    v6 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64 *))(*(_QWORD *)*v4 + 40LL))(
           *v4,
           &GUID_9fab3399_4736_4f3d_8419_41d0ae23f2bc,
           &v19);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1F17,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
        (const char *)(unsigned int)v6,
        v16);
    if ( !v19 )
      goto LABEL_11;
    v17 = 0LL;
    Microsoft::WRL::Details::Make<Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate const &,Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>::permission>(&v16);
    v8 = v16;
    if ( !v16 )
      break;
    v16 = 0LL;
    v17 = v8;
    LOBYTE(v7) = 1;
    v9 = Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>::InsertAtInternal(
           v8,
           0LL,
           a2,
           v7);
    v10 = v9;
    if ( v9 < 0 )
    {
      v14 = (unsigned int)v9;
      v15 = 7967LL;
      goto LABEL_18;
    }
    v20 = 0LL;
    View = Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>::GetView(
             v8,
             &v20);
    v10 = View;
    if ( View < 0 )
    {
      v13 = 7970LL;
      goto LABEL_15;
    }
    View = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 112LL))(v19, v20);
    v10 = View;
    if ( View < 0 )
    {
      v13 = 7972LL;
LABEL_15:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
        (const char *)(unsigned int)View,
        v16);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
      goto LABEL_19;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
    if ( v8 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::Implements<Windows::Foundation::Collections::IVector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>,Windows::Foundation::Collections::IIterable<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>,Windows::Foundation::Collections::IObservableVector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>>,Microsoft::WRL::FtmBase>::Release(v8);
LABEL_11:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    if ( ++v4 == v5 )
      return 0LL;
  }
  v10 = -2147024882;
  v14 = 2147942414LL;
  v15 = 7966LL;
LABEL_18:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
    (const char *)v14,
    v16);
LABEL_19:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::ObservableVector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,1>>::InternalRelease(&v17);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  return v10;
}
