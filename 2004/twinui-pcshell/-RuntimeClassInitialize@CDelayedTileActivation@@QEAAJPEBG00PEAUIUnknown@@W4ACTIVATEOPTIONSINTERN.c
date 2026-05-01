/*
 * XREFs of ?RuntimeClassInitialize@CDelayedTileActivation@@QEAAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@@Z @ 0x1803CFB88
 * Callers:
 *     ??$MakeAndInitialize@VCDelayedTileActivation@@V1@AEAPEBGAEAPEBGAEAPEBGAEAPEAUIUnknown@@AEAW4ACTIVATEOPTIONSINTERNAL@@@Details@WRL@Microsoft@@YAJPEAPEAVCDelayedTileActivation@@AEAPEBG11AEAPEAUIUnknown@@AEAW4ACTIVATEOPTIONSINTERNAL@@@Z @ 0x1803CE184 (--$MakeAndInitialize@VCDelayedTileActivation@@V1@AEAPEBGAEAPEBGAEAPEBGAEAPEAUIUnknown@@AEAW4ACTI.c)
 *     ?RuntimeClassInitialize@CDelayedTileActivation@@QEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@@Z @ 0x1803CFAAC (-RuntimeClassInitialize@CDelayedTileActivation@@QEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@W4.c)
 * Callees:
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1800632C0 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?Attach@?$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@QEAAXPEAVSizeConversionViewInfo@@@Z @ 0x180140778 (-Attach@-$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@QEAAXPEAVSizeConversionViewInfo@@@Z.c)
 *     ?GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803CF1A0 (-GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collect.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_JumpListCenntennialActivationForegroundFix@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803CFA28 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_JumpListCenntennialActivationForegroundFi.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDelayedTileActivation::RuntimeClassInitialize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        IUnknown *punk,
        int a6)
{
  int ViewValueSetFromSite; // ebx
  __int64 v10; // rdx
  IUnknown *v12; // rsi
  IUnknown *v13; // rax
  HRESULT Window; // ebx
  struct Windows::Foundation::Collections::IPropertySet **v15; // r8
  __int64 v16; // r8
  int v17; // eax
  int v18; // eax
  void *ppvOut; // [rsp+20h] [rbp-10h] BYREF
  HWND phwnd; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  IUnknown *v22; // [rsp+50h] [rbp+20h] BYREF

  ViewValueSetFromSite = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
                           (LPVOID *)(a1 + 56),
                           a2,
                           0xFFFFFFFFFFFFFFFFuLL);
  if ( ViewValueSetFromSite < 0 )
  {
    v10 = 137LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\apppositioner\\lib\\delayedappactivation.cpp",
      (const char *)(unsigned int)ViewValueSetFromSite);
    return (unsigned int)ViewValueSetFromSite;
  }
  ViewValueSetFromSite = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
                           (LPVOID *)(a1 + 80),
                           a3,
                           0xFFFFFFFFFFFFFFFFuLL);
  if ( ViewValueSetFromSite < 0 )
  {
    v10 = 138LL;
    goto LABEL_3;
  }
  ViewValueSetFromSite = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
                           (LPVOID *)(a1 + 104),
                           a4,
                           0xFFFFFFFFFFFFFFFFuLL);
  if ( ViewValueSetFromSite < 0 )
  {
    v10 = 139LL;
    goto LABEL_3;
  }
  phwnd = 0LL;
  v12 = punk;
  v13 = punk;
  v22 = punk;
  ppvOut = 0LL;
  do
  {
    Window = IUnknown_GetWindow(v13, &phwnd);
    if ( Window < 0 && IUnknown_GetSite(v22, &GUID_00000000_0000_0000_c000_000000000046, (void **)&v22) >= 0 )
      Microsoft::WRL::ComPtr<SizeConversionViewInfo>::Attach((__int64 *)&ppvOut, (__int64)v22);
    v13 = v22;
  }
  while ( v22 && Window < 0 );
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  *(_QWORD *)(a1 + 136) = phwnd;
  *(_DWORD *)(a1 + 48) = a6;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 128));
  ViewValueSetFromSite = ViewSizePreferenceHelpers::GetViewValueSetFromSite(v12, (struct IUnknown *)(a1 + 128), v15);
  if ( ViewValueSetFromSite < 0 )
  {
    v10 = 154LL;
    goto LABEL_3;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_JumpListCenntennialActivationForegroundFix>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_JumpListCenntennialActivationForegroundFix>::GetImpl'::`2'::impl,
    1u,
    v16);
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  if ( IUnknown_QueryService(
         v12,
         &GUID_23710692_92e0_4a33_a781_a81596a4cd7d,
         &GUID_23710692_92e0_4a33_a781_a81596a4cd7d,
         &ppvOut) >= 0 )
  {
    v17 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)ppvOut + 24LL))(ppvOut);
    if ( v17 >= 0 )
    {
      LOBYTE(v22) = v17 == 0;
      BYTE1(v22) = 1;
      *(_WORD *)(a1 + 148) = (_WORD)v22;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xA4,
        (__int64)"pcshell\\twinui\\apppositioner\\lib\\delayedappactivation.cpp",
        (const char *)(unsigned int)v17);
    }
    v18 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)ppvOut + 32LL))(ppvOut, a1 + 144);
    if ( v18 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xAA,
        (__int64)"pcshell\\twinui\\apppositioner\\lib\\delayedappactivation.cpp",
        (const char *)(unsigned int)v18);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  return 0LL;
}
