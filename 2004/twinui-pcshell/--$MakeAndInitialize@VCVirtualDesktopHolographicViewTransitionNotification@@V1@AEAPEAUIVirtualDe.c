/*
 * XREFs of ??$MakeAndInitialize@VCVirtualDesktopHolographicViewTransitionNotification@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopHolographicViewTransitionNotification@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x18044C84C
 * Callers:
 *     ?CVirtualDesktopHolographicViewTransitionNotification_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x18044C9C8 (-CVirtualDesktopHolographicViewTransitionNotification_CreateInstance@@YAJPEAUIVirtualDesktopMana.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x180139F1C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedE.c)
 *     ??4?$ComPtr@UIVirtualDesktopCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopCollection@@@Z @ 0x18017A538 (--4-$ComPtr@UIVirtualDesktopCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopCollectio.c)
 *     ?InternalRelease@?$ComPtr@VPrivilegedWindowOwnershipOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x18022AFCC (-InternalRelease@-$ComPtr@VPrivilegedWindowOwnershipOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CVirtualDesktopHolographicViewTransitionNotification@@QEAA@XZ @ 0x18044C8EC (--0CVirtualDesktopHolographicViewTransitionNotification@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopHolographicViewTransitionNotification,CVirtualDesktopHolographicViewTransitionNotification,IVirtualDesktopManagerPrivate * &,IVirtualDesktopLock * &>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  unsigned int v3; // edi
  CVirtualDesktopHolographicViewTransitionNotification *v7; // rax
  CVirtualDesktopHolographicViewTransitionNotification *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rbx
  volatile int *v12; // rdx
  CVirtualDesktopHolographicViewTransitionNotification *v14; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  *a1 = 0LL;
  v7 = (CVirtualDesktopHolographicViewTransitionNotification *)operator new(
                                                                 0x40uLL,
                                                                 (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    v8 = CVirtualDesktopHolographicViewTransitionNotification::CVirtualDesktopHolographicViewTransitionNotification(v7);
    v9 = *a2;
    v10 = (__int64)v8;
    v11 = *a3;
    v14 = v8;
    Microsoft::WRL::ComPtr<IVirtualDesktopCollection>::operator=((__int64 *)v8 + 6, v9);
    Microsoft::WRL::ComPtr<IVirtualDesktopCollection>::operator=((__int64 *)(v10 + 56), v11);
    if ( v10 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *>,Microsoft::WRL::FtmBase>::InternalAddRef(
        v10,
        v12);
    *a1 = v10;
    Microsoft::WRL::ComPtr<PrivilegedWindowOwnershipOperations>::InternalRelease((volatile int **)&v14);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
