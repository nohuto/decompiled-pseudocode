/*
 * XREFs of ?HandleDestruction@CImmersiveWindowManager@@UEAA?AW4WINDOW_DESTROYED_RESULT@@PEAUIImmersiveApplicationInternal@@AEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z @ 0x18015EC80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$GetAppPosition@VCImmersiveAppFinderByApplication@@@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEBAJAEBVCImmersiveAppFinderByApplication@@_KPEA_K@Z @ 0x180143950 (--$GetAppPosition@VCImmersiveAppFinderByApplication@@@-$CActivationBasedCollection@V-$ComPtr@UII.c)
 *     ??0CImmersiveAppFinderByApplication@@QEAA@PEAUIImmersiveApplicationInternal@@@Z @ 0x180146A10 (--0CImmersiveAppFinderByApplication@@QEAA@PEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?PositionAppAtEnd@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@_K@Z @ 0x18014EABC (-PositionAppAtEnd@-$CActivationBasedCollection@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Mi.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveWindowManager::HandleDestruction(
        __int64 a1,
        void (__fastcall ***a2)(struct IImmersiveApplicationInternal *, GUID *, CImmersiveAppFinderByApplication *),
        __int64 a3,
        _QWORD *a4)
{
  __int64 v8; // rbp
  unsigned int v9; // edi
  CImmersiveAppFinderByApplication *v10; // rax
  __int64 v11; // r8
  void (__fastcall ***v13)(struct IImmersiveApplicationInternal *, GUID *, CImmersiveAppFinderByApplication *); // [rsp+20h] [rbp-A8h] BYREF
  unsigned __int64 v14; // [rsp+28h] [rbp-A0h] BYREF
  _BYTE v15[96]; // [rsp+30h] [rbp-98h] BYREF

  *a4 = 0LL;
  v8 = ((__int64 (__fastcall *)(void (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, CImmersiveAppFinderByApplication *)))(*a2)[35])(a2) & 2;
  ((void (__fastcall *)(void (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, CImmersiveAppFinderByApplication *), _BYTE *))(*a2)[43])(
    a2,
    v15);
  v9 = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD *))(*a2)[10])(a2, a3, a4);
  if ( v9 == 2 || v9 == 4 )
  {
    *(_BYTE *)(a1 + 88) = 0;
  }
  else if ( v9 == 5 )
  {
    v14 = 0LL;
    v10 = CImmersiveAppFinderByApplication::CImmersiveAppFinderByApplication(
            (CImmersiveAppFinderByApplication *)&v13,
            a2);
    CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::GetAppPosition<CImmersiveAppFinderByApplication>(
      a1 + 48,
      v10,
      v11,
      &v14);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
    v13 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v13);
    CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::PositionAppAtEnd(
      (__int64 *)(a1 + 48),
      (__int64 *)&v13,
      v14);
    if ( (_DWORD)v8 )
      *(_BYTE *)(a1 + 88) = 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  }
  return v9;
}
