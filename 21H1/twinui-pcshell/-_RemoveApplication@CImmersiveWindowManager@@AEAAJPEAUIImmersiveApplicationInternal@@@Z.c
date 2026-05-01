/*
 * XREFs of ?_RemoveApplication@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x18013B024
 * Callers:
 *     ?HandleWindowAction@CImmersiveWindowManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4IWM_ACTION_TYPE@@PEAUITaskWindow@@@Z @ 0x18003F960 (-HandleWindowAction@CImmersiveWindowManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$GetAppPosition@VCImmersiveAppFinderByApplication@@@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEBAJAEBVCImmersiveAppFinderByApplication@@_KPEA_K@Z @ 0x18011F4E0 (--$GetAppPosition@VCImmersiveAppFinderByApplication@@@-$CActivationBasedCollection@V-$ComPtr@UII.c)
 *     ??0CImmersiveAppFinderByApplication@@QEAA@PEAUIImmersiveApplicationInternal@@@Z @ 0x180122448 (--0CImmersiveAppFinderByApplication@@QEAA@PEAUIImmersiveApplicationInternal@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveWindowManager::_RemoveApplication(
        CImmersiveWindowManager *this,
        void (__fastcall ***a2)(struct IImmersiveApplicationInternal *, GUID *, CImmersiveAppFinderByApplication *))
{
  char *v4; // rbx
  CImmersiveAppFinderByApplication *v5; // rax
  __int64 v6; // r8
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0LL;
  v4 = (char *)this + 208;
  v5 = CImmersiveAppFinderByApplication::CImmersiveAppFinderByApplication((CImmersiveAppFinderByApplication *)&v9, a2);
  CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::GetAppPosition<CImmersiveAppFinderByApplication>(
    (__int64)v4,
    v5,
    v6,
    &v8);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  if ( !v8 )
    *((_BYTE *)this + 248) = 0;
  (*(void (__fastcall **)(char *))(*(_QWORD *)v4 + 16LL))(v4);
  IUnknown_SetSite((IUnknown *)a2, 0LL);
  return 0LL;
}
