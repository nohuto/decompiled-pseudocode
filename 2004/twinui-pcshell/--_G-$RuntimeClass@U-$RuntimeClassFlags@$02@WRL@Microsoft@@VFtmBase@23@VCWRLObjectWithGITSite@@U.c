/*
 * XREFs of ??_G?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VFtmBase@23@VCWRLObjectWithGITSite@@UIImmersiveApplication@@UIImmersiveApplication2@@UIImmersiveApplicationHolographic@@UIImmersiveApplicationInternal@@UIObjectWithWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@VObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@V?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@UIServiceProvider@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18017A840
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D714 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@VCWRLObjectWithGITSite@@UIImmersiveApplication@@UIImmersiveApplication2@@UIImmersiveApplicationHolographic@@UIImmersiveApplicationInternal@@UIObjectWithWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@VObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@V?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@UIServiceProvider@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180179FD4 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@VCWRLObjectW.c)
 */

void *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IImmersiveApplication,IImmersiveApplication2,IImmersiveApplicationHolographic,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>::`scalar deleting destructor'(
        void *a1,
        volatile int *a2)
{
  char v2; // bl

  v2 = (char)a2;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IImmersiveApplication,IImmersiveApplication2,IImmersiveApplicationHolographic,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IImmersiveApplication,IImmersiveApplication2,IImmersiveApplicationHolographic,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>(
    (__int64)a1,
    a2);
  if ( (v2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x130);
  return a1;
}
