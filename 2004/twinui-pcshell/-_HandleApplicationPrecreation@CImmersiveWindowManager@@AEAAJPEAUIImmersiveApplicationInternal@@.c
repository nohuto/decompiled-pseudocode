/*
 * XREFs of ?_HandleApplicationPrecreation@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x18015F4D0
 * Callers:
 *     ?HandleWindowAction@CImmersiveWindowManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4IWM_ACTION_TYPE@@PEAUITaskWindow@@@Z @ 0x18003FFD0 (-HandleWindowAction@CImmersiveWindowManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$GetAppPosition@VCImmersiveAppFinderByApplication@@@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEBAJAEBVCImmersiveAppFinderByApplication@@_KPEA_K@Z @ 0x180143A70 (--$GetAppPosition@VCImmersiveAppFinderByApplication@@@-$CActivationBasedCollection@V-$ComPtr@UII.c)
 *     ??0CImmersiveAppFinderByApplication@@QEAA@PEAUIImmersiveApplicationInternal@@@Z @ 0x180146B30 (--0CImmersiveAppFinderByApplication@@QEAA@PEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?PositionAppAtEnd@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@_K@Z @ 0x18014EC6C (-PositionAppAtEnd@-$CActivationBasedCollection@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Mi.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CImmersiveWindowManager::_HandleApplicationPrecreation(IUnknown *punkSite, IUnknown *a2)
{
  __int64 *v3; // rsi
  __int64 (__fastcall *v4)(__int64 *, IUnknown **); // rbx
  int v5; // ebx
  CImmersiveAppFinderByApplication *v6; // rax
  __int64 v7; // r8
  IUnknown *v9; // [rsp+40h] [rbp+20h] BYREF
  unsigned __int64 v10; // [rsp+48h] [rbp+28h] BYREF

  v3 = (__int64 *)&punkSite[26];
  IUnknown_SetSite(a2, punkSite);
  v4 = *(__int64 (__fastcall **)(__int64 *, IUnknown **))(*v3 + 8);
  v9 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v9);
  v5 = v4(v3, &v9);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
  if ( v5 < 0 )
    goto LABEL_3;
  v10 = 0LL;
  v6 = CImmersiveAppFinderByApplication::CImmersiveAppFinderByApplication(
         (CImmersiveAppFinderByApplication *)&v9,
         (void (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, CImmersiveAppFinderByApplication *))a2);
  CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::GetAppPosition<CImmersiveAppFinderByApplication>(
    (__int64)v3,
    v6,
    v7,
    &v10);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
  v9 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v9);
  v5 = CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::PositionAppAtEnd(
         v3,
         (__int64 *)&v9,
         v10);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
  if ( v5 < 0 )
LABEL_3:
    IUnknown_SetSite(a2, 0LL);
  return (unsigned int)v5;
}
