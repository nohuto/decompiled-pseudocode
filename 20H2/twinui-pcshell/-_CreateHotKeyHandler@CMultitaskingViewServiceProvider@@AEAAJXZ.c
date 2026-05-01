/*
 * XREFs of ?_CreateHotKeyHandler@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x18037E128
 * Callers:
 *     ?PerformDelayedInitialization@CMultitaskingViewServiceProvider@@UEAAJXZ @ 0x18037D7B0 (-PerformDelayedInitialization@CMultitaskingViewServiceProvider@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x1800784BC (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CMultitaskingViewHotKeyHandler_CreateInstance@@YAJPEAUIImmersiveWindowMessageService@@PEAUIImmersiveMonitorManager@@PEAUIApplicationTargetingTracker@@PEAUIMultitaskingViewTaskScheduler@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x1803865CC (-CMultitaskingViewHotKeyHandler_CreateInstance@@YAJPEAUIImmersiveWindowMessageService@@PEAUIImme.c)
 */

__int64 __fastcall CMultitaskingViewServiceProvider::_CreateHotKeyHandler(CMultitaskingViewServiceProvider *this)
{
  HRESULT v2; // eax
  unsigned int v3; // ebx
  HRESULT Service; // eax
  HRESULT Instance; // eax
  __int64 v6; // rdx
  const struct _GUID *v8; // [rsp+28h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct IApplicationTargetingTracker *v10; // [rsp+60h] [rbp+20h] BYREF
  struct IImmersiveMonitorManager *v11; // [rsp+68h] [rbp+28h] BYREF
  void *ppvOut; // [rsp+70h] [rbp+30h] BYREF

  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  v2 = IUnknown_QueryService(
         *((IUnknown **)this + 2),
         &IID_IImmersiveWindowMessageService,
         &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
         &ppvOut);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v11 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v11);
    Service = IUnknown_QueryService(
                *((IUnknown **)this + 2),
                (const GUID *const)&SID_IImmersiveMonitorService,
                &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
                (void **)&v11);
    v3 = Service;
    if ( Service < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x18F,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)Service);
LABEL_11:
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v11);
      goto LABEL_12;
    }
    v10 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
    Instance = IUnknown_QueryService(
                 *((IUnknown **)this + 2),
                 &stru_18053F318,
                 &GUID_b8e97d25_4032_4a8e_9521_528efa5f4459,
                 (void **)&v10);
    v3 = Instance;
    if ( Instance >= 0 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 21);
      Instance = CMultitaskingViewHotKeyHandler_CreateInstance(
                   (struct IImmersiveWindowMessageService *)ppvOut,
                   v11,
                   v10,
                   (CMultitaskingViewServiceProvider *)((char *)this + 96),
                   *((struct IApplicationViewCollection **)this + 28),
                   v8,
                   (void **)this + 21);
      v3 = Instance;
      if ( Instance >= 0 )
      {
LABEL_10:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
        goto LABEL_11;
      }
      v6 = 409LL;
    }
    else
    {
      v6 = 402LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)(unsigned int)Instance);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x18C,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
    (const char *)(unsigned int)v2);
LABEL_12:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  return v3;
}
