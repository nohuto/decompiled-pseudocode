/*
 * XREFs of ?_GetVirtualDesktopForPendingActivation@CAppViewManager@@AEAAJ_KPEAPEAUIVirtualDesktop@@@Z @ 0x180170CDC
 * Callers:
 *     ?IsViewPresentedOnActivationVirtualDesktop@CAppViewManager@@UEAAJPEAUHWND__@@_KPEAE@Z @ 0x18016B230 (-IsViewPresentedOnActivationVirtualDesktop@CAppViewManager@@UEAAJPEAUHWND__@@_KPEAE@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?GetActivationVirtualDesktopId@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHelper@ShellHelpers@45@PEAU_GUID@@@Z @ 0x18016A33C (-GetActivationVirtualDesktopId@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropert.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAppViewManager::_GetVirtualDesktopForPendingActivation(
        IUnknown **this,
        __int64 a2,
        struct IVirtualDesktop **a3)
{
  HRESULT ActivationVirtualDesktopId; // ebx
  void *v7; // rbx
  __int64 (__fastcall *v8)(void *, __int64, __int64 *); // rdi
  struct _GUID *v9; // r8
  void *v11; // [rsp+20h] [rbp-40h] BYREF
  __int64 v12; // [rsp+28h] [rbp-38h] BYREF
  void *ppvOut; // [rsp+30h] [rbp-30h] BYREF
  __int64 v14; // [rsp+38h] [rbp-28h] BYREF
  _BYTE v15[16]; // [rsp+40h] [rbp-20h] BYREF

  *a3 = 0LL;
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  ActivationVirtualDesktopId = IUnknown_QueryService(
                                 this[15],
                                 &SID_ViewEventDispatcher,
                                 &GUID_22347704_c4ce_4e82_afeb_c6a00e06cc3a,
                                 &ppvOut);
  if ( ActivationVirtualDesktopId >= 0 )
  {
    v12 = 0LL;
    v7 = ppvOut;
    v8 = *(__int64 (__fastcall **)(void *, __int64, __int64 *))(*(_QWORD *)ppvOut + 64LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
    ActivationVirtualDesktopId = v8(v7, a2, &v12);
    if ( ActivationVirtualDesktopId >= 0 )
    {
      v14 = v12;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v14);
      ActivationVirtualDesktopId = Windows::Internal::Shell::Desktop::ViewManagerInterop::GetActivationVirtualDesktopId(
                                     (Windows::Internal::Shell::Desktop::ViewManagerInterop *)&v14,
                                     (struct Windows::Internal::ShellHelpers::PropertySetHelper *)v15,
                                     v9);
      if ( ActivationVirtualDesktopId >= 0 )
      {
        v11 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
        ActivationVirtualDesktopId = IUnknown_QueryService(
                                       this[15],
                                       (const GUID *const)&SID_VirtualDesktopManager,
                                       &GUID_f31574d6_b682_4cdc_bd56_1827860abec6,
                                       &v11);
        if ( ActivationVirtualDesktopId >= 0 )
          ActivationVirtualDesktopId = (*(__int64 (__fastcall **)(void *, _BYTE *, struct IVirtualDesktop **))(*(_QWORD *)v11 + 96LL))(
                                         v11,
                                         v15,
                                         a3);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  return (unsigned int)ActivationVirtualDesktopId;
}
