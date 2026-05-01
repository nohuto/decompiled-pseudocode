/*
 * XREFs of ?RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@_K@Z @ 0x1800312E0
 * Callers:
 *     ??$MakeAndInitialize@VCImmersiveApp@@UIImmersiveApplication@@AEAPEBGAEAPEBGAEAKAEAPEAUIImmersiveMonitor@@AEAPEAUPER_APPLICATION_DATA@@AEAPEAUIIAMServiceProvider@@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAUIImmersiveApplication@@AEAPEBG1AEAKAEAPEAUIImmersiveMonitor@@AEAPEAUPER_APPLICATION_DATA@@AEAPEAUIIAMServiceProvider@@AEA_K@Z @ 0x180045750 (--$MakeAndInitialize@VCImmersiveApp@@UIImmersiveApplication@@AEAPEBGAEAPEBGAEAKAEAPEAUIImmersive.c)
 * Callees:
 *     ?Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z @ 0x18001D2B0 (-Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z.c)
 *     ?StartActivity@Initialization@CFramePresentationTelemetry@@QEAAXPEBG@Z @ 0x18001E7F8 (-StartActivity@Initialization@CFramePresentationTelemetry@@QEAAXPEBG@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028ED8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18002A5A0 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800301F0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@details@.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x1800348A0 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x180034A50 (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 *     ?_UpdateWindowTitleAndButtons@CImmersiveApp@@AEAAXXZ @ 0x180040AA4 (-_UpdateWindowTitleAndButtons@CImmersiveApp@@AEAAXXZ.c)
 *     ?GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z @ 0x18004723C (-GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180050190 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180061400 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeConstraintsOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180069E90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeC.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x1800727A0 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800743C8 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param_ea_1800743C8.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18007F164 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085334 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     atexit @ 0x18008CE40 (atexit.c)
 *     memset_0 @ 0x18008D658 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1801217A4 (--$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 *     Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda_____lambda_ac3f0695b3e319a649b082bba763ceda___ @ 0x180154C34 (Microsoft--WRL--Details--Make_CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda_.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall CImmersiveApp::RuntimeClassInitialize(
        CImmersiveApp *this,
        const unsigned __int16 *a2,
        char *a3,
        int a4,
        struct IImmersiveMonitor *a5,
        struct PER_APPLICATION_DATA *a6,
        struct IIAMServiceProvider *a7,
        unsigned __int64 a8)
{
  HRESULT v12; // ebx
  struct IImmersiveMonitor *v13; // rax
  PCWSTR StringRawBuffer; // rax
  PCWSTR v15; // rbx
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rdx
  char *v19; // rcx
  signed __int64 v20; // rbx
  __int16 v21; // ax
  LPVOID v22; // r12
  enum ORIENTATION_PREFERENCE *v23; // r8
  unsigned __int64 v24; // rdx
  char *v25; // rax
  signed __int64 v26; // rdi
  __int16 v27; // cx
  int v29; // eax
  __int64 *CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda_____lambda_ac3f0695b3e319a649b082bba763ceda; // rax
  __int64 v31; // rbx
  struct IImmersiveMonitor *v32; // rcx
  void *v33; // rbx
  HANDLE ProcessHeap; // rax
  void (*v35)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL v36; // [rsp+30h] [rbp-D0h] BYREF
  WINBOOL v37; // [rsp+34h] [rbp-CCh]
  LPVOID Context; // [rsp+38h] [rbp-C8h] BYREF
  WINBOOL fPending[2]; // [rsp+40h] [rbp-C0h] BYREF
  HRESULT v40; // [rsp+48h] [rbp-B8h]
  __int64 v41; // [rsp+50h] [rbp-B0h] BYREF
  struct IImmersiveMonitor *v42; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v43; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int16 *v44[3]; // [rsp+68h] [rbp-98h] BYREF
  void **v45; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v46[3]; // [rsp+88h] [rbp-78h] BYREF
  int v47; // [rsp+A0h] [rbp-60h]
  int *v48; // [rsp+A8h] [rbp-58h]
  int *v49; // [rsp+B0h] [rbp-50h]
  int v50; // [rsp+B8h] [rbp-48h] BYREF
  char v51; // [rsp+BCh] [rbp-44h]
  char v52[32]; // [rsp+C0h] [rbp-40h] BYREF
  int v53; // [rsp+E0h] [rbp-20h] BYREF
  const char *v54; // [rsp+E8h] [rbp-18h]
  LPVOID lpMem; // [rsp+F0h] [rbp-10h]
  char v56; // [rsp+F8h] [rbp-8h]
  __int64 v57; // [rsp+100h] [rbp+0h]
  char v58[144]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v59; // [rsp+198h] [rbp+98h] BYREF
  __int128 v60; // [rsp+1A0h] [rbp+A0h]
  __int64 v61; // [rsp+1B0h] [rbp+B0h] BYREF

  Context = a7;
  v45 = &wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  v46[0] = 0LL;
  v46[1] = &v45;
  v46[2] = 0LL;
  v47 = 0;
  v48 = &v53;
  v49 = &v50;
  v50 = 0;
  v51 = 0;
  v56 = 0;
  v53 = 0;
  v54 = "Initialization";
  lpMem = 0LL;
  v57 = 1LL;
  v59 = 0LL;
  memset_0(v58, 0, sizeof(v58));
  v60 = 0LL;
  v61 = 0LL;
  v45 = &CImmersiveAppTelemetry::Initialization::`vftable';
  CFramePresentationTelemetry::Initialization::StartActivity((CFramePresentationTelemetry::Initialization *)&v45, a2);
  v12 = SHStrDupW(a2, (LPWSTR *)this + 74);
  v40 = v12;
  if ( v12 < 0 )
    goto LABEL_47;
  *((_DWORD *)this + 150) = a4;
  v13 = (struct IImmersiveMonitor *)*((_QWORD *)this + 97);
  if ( v13 != a5 )
  {
    if ( a5 )
    {
      (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)a5 + 8LL))(a5);
      v13 = (struct IImmersiveMonitor *)*((_QWORD *)this + 97);
    }
    v42 = v13;
    *((_QWORD *)this + 97) = a5;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v42);
  }
  *((_BYTE *)this + 756) = *((_BYTE *)a6 + 28);
  *((_BYTE *)this + 757) = *((_BYTE *)a6 + 29);
  *((_BYTE *)this + 758) = *((_BYTE *)a6 + 30);
  *((_BYTE *)this + 759) = *((_BYTE *)a6 + 31);
  *((_BYTE *)this + 760) = *((_BYTE *)a6 + 32);
  *((_BYTE *)this + 761) = *((_BYTE *)a6 + 33);
  *((_BYTE *)this + 762) = *((_BYTE *)a6 + 34);
  *((_BYTE *)this + 763) = *((_BYTE *)a6 + 35);
  *((_BYTE *)this + 764) = *((_BYTE *)a6 + 36);
  *((_BYTE *)this + 765) = *((_BYTE *)a6 + 37);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetImpl'::`2'::impl,
    1u,
    3u);
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)a6, 0LL);
  v15 = StringRawBuffer;
  v16 = -1LL;
  if ( StringRawBuffer )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( StringRawBuffer[v17] );
    if ( (int)Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
                (char *)this + 608,
                v17) >= 0 )
    {
      v18 = v17 + 1;
      v19 = (char *)*((_QWORD *)this + 76);
      if ( v17 > 0x7FFFFFFE )
      {
        if ( v17 == -1LL )
          goto LABEL_18;
      }
      else
      {
        v20 = (char *)v15 - v19;
        while ( v18 != 1 )
        {
          v21 = *(_WORD *)&v19[v20];
          if ( !v21 )
            break;
          *(_WORD *)v19 = v21;
          v19 += 2;
          if ( !--v18 )
            goto LABEL_53;
        }
        if ( v18 )
          goto LABEL_17;
LABEL_53:
        v19 -= 2;
      }
LABEL_17:
      *(_WORD *)v19 = 0;
LABEL_18:
      *((_QWORD *)this + 77) = v17;
    }
  }
  else
  {
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((char *)this + 608);
  }
  v22 = Context;
  v12 = CImmersiveApp::CImmersiveWindowCollection::Initialize(
          (CImmersiveApp *)((char *)this + 296),
          (struct IIAMServiceProvider *)Context);
  v40 = v12;
  if ( v12 >= 0 )
  {
    v36 = 500;
    v37 = 768;
    if ( (int)CallerIdentity::GetManifestedOrientationPreference(
                *((LPCWSTR *)this + 74),
                (const unsigned __int16 *)this + 384,
                v23) < 0 )
      *((_DWORD *)this + 192) = 0;
    if ( *((_BYTE *)this + 756) )
    {
      v36 = 320;
    }
    else if ( *((_BYTE *)this + 762) )
    {
      memset(v44, 0, sizeof(v44));
      if ( (int)Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
                  v44,
                  L"%s\\%s",
                  L"Software\\Microsoft\\Windows\\CurrentVersion\\ApplicationView",
                  *((_QWORD *)this + 74)) >= 0
        && (int)SHRegGetDWORD(HKEY_CURRENT_USER, v44[0], L"MinWidth", (unsigned int *)fPending) >= 0 )
      {
        v29 = v36;
        if ( fPending[0] == 1 )
          v29 = 320;
        v36 = v29;
      }
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v44);
    }
    else
    {
      v37 = 320;
    }
    if ( *((_BYTE *)this + 758) )
    {
      v36 = 192;
      v37 = 48;
    }
    (*(void (__fastcall **)(_QWORD, WINBOOL *))(**((_QWORD **)this + 56) + 208LL))(*((_QWORD *)this + 56), &v36);
    Context = 0LL;
    if ( (*(int (__fastcall **)(LPVOID, GUID *, GUID *, LPVOID *))(*(_QWORD *)v22 + 24LL))(
           v22,
           &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
           &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
           &Context) >= 0
      && (*(int (__fastcall **)(LPVOID, _QWORD, WINBOOL *))(*(_QWORD *)Context + 56LL))(
           Context,
           *((_QWORD *)this + 74),
           fPending) >= 0 )
    {
      if ( fPending[0] >= 500 )
        v36 = 500;
      else
        v36 = fPending[0];
      if ( fPending[1] >= 320 )
        v37 = 320;
      else
        v37 = fPending[1];
    }
    (*(void (__fastcall **)(_QWORD, WINBOOL *))(**((_QWORD **)this + 56) + 200LL))(*((_QWORD *)this + 56), &v36);
    CImmersiveApp::_UpdateWindowTitleAndButtons(this);
    v41 = 0LL;
    if ( (*(int (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 56) + 136LL))(*((_QWORD *)this + 56), &v41) >= 0
      && *((_BYTE *)this + 759) )
    {
      *(_QWORD *)fPending = v41;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(fPending);
      CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda_____lambda_ac3f0695b3e319a649b082bba763ceda = (__int64 *)Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda_____lambda_ac3f0695b3e319a649b082bba763ceda___(&v42, fPending);
      v31 = *CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda_____lambda_ac3f0695b3e319a649b082bba763ceda;
      v43 = *CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda_____lambda_ac3f0695b3e319a649b082bba763ceda;
      *CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda_____lambda_ac3f0695b3e319a649b082bba763ceda = 0LL;
      v32 = v42;
      if ( v42 )
      {
        v42 = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedSizeConstraintsOperations,Microsoft::WRL::FtmBase>::Release(v32);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(fPending);
      if ( v31 )
        (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 56) + 232LL))(*((_QWORD *)this + 56), v31);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v43);
    }
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 56) + 328LL))(
      *((_QWORD *)this + 56),
      *((unsigned __int8 *)a6 + 26));
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v41);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&Context);
    if ( a3 )
    {
      do
        ++v16;
      while ( *(_WORD *)&a3[2 * v16] );
      v12 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
              (char *)this + 648,
              v16);
      v40 = v12;
      if ( v12 >= 0 )
      {
        v24 = v16 + 1;
        v25 = (char *)*((_QWORD *)this + 81);
        if ( v16 > 0x7FFFFFFE )
        {
          if ( v16 == -1LL )
            goto LABEL_46;
        }
        else
        {
          v26 = a3 - v25;
          while ( v24 != 1 )
          {
            v27 = *(_WORD *)&v25[v26];
            if ( !v27 )
              break;
            *(_WORD *)v25 = v27;
            v25 += 2;
            if ( !--v24 )
              goto LABEL_71;
          }
          if ( v24 )
            goto LABEL_45;
LABEL_71:
          v25 -= 2;
        }
LABEL_45:
        *(_WORD *)v25 = 0;
LABEL_46:
        *((_QWORD *)this + 82) = v16;
      }
    }
    else
    {
      v12 = v40;
    }
  }
LABEL_47:
  *((_QWORD *)this + 113) = a8;
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v45, (unsigned int)v12);
  v45 = &CImmersiveAppTelemetry::Initialization::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v45);
  wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v61);
  wil::details::shared_buffer::reset((wil::details::shared_buffer *)&v59);
  if ( v56 )
  {
    v33 = lpMem;
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v33);
    v56 = 0;
    v12 = v40;
  }
  lpMem = 0LL;
  if ( v50 == 1 )
  {
    v50 = 2;
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, fPending, &Context) && fPending[0] )
    {
      Context = qword_18059FE50;
      qword_18059FE50[0] = &ShellScreenClippingLogging::`vftable';
      qword_18059FE68 = (struct _tlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18059FE50, qword_18059FE68, v35);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_18059FE50);
    }
    _tlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context + 1), v52);
  }
  v50 = 3;
  if ( v47 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v46);
  return (unsigned int)v12;
}
