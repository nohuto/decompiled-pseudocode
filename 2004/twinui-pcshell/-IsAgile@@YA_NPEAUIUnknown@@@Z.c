/*
 * XREFs of ?IsAgile@@YA_NPEAUIUnknown@@@Z @ 0x1800734C4
 * Callers:
 *     ?SetSite@CWRLObjectWithGITSite@@UEAAJPEAUIUnknown@@@Z @ 0x1800733D0 (-SetSite@CWRLObjectWithGITSite@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?SetDataSource@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@UE$AAAXPE$AAUISwitchItemDataSource@2345@@Z @ 0x1803067F0 (-SetDataSource@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@UE$AAAXPE$A.c)
 *     ?put_ActivationViewSwitcher@CActivatedEventArgsWithViewIdBase@@UEAAJPEAUIActivationViewSwitcher@ViewManagement@UI@Windows@@@Z @ 0x1804872D0 (-put_ActivationViewSwitcher@CActivatedEventArgsWithViewIdBase@@UEAAJPEAUIActivationViewSwitcher@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall IsAgile(struct IUnknown *a1)
{
  char v1; // bl
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v3 = 0LL;
  if ( !a1
    || ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a1->lpVtbl->QueryInterface)(
         a1,
         &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90,
         &v3) >= 0 )
  {
    v1 = 1;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v3);
  return v1;
}
