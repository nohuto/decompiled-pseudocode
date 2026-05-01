/*
 * XREFs of ?_RemoveApplication@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z @ 0x180158E20
 * Callers:
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x1801554B0 (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByApplication@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByApplication@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x1801457E8 (--$_FindFirstApplication@VCImmersiveAppFinderByApplication@@@CApplicationManager@@AEAAJAEBVCImme.c)
 *     ??0CImmersiveAppFinderByApplication@@QEAA@PEAUIImmersiveApplicationInternal@@@Z @ 0x180146A10 (--0CImmersiveAppFinderByApplication@@QEAA@PEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?RemoveApplication@CActivationBasedAppAndGlomCollection@@UEAAX_K@Z @ 0x18014F850 (-RemoveApplication@CActivationBasedAppAndGlomCollection@@UEAAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CApplicationManager::_RemoveApplication(
        CApplicationManager *this,
        void (__fastcall ***a2)(struct IImmersiveApplicationInternal *, GUID *, CImmersiveAppFinderByApplication *))
{
  CImmersiveAppFinderByApplication *v4; // rax
  void *ppv; // [rsp+50h] [rbp+8h] BYREF
  __int64 v6; // [rsp+60h] [rbp+18h] BYREF
  unsigned __int64 v7; // [rsp+68h] [rbp+20h] BYREF

  v4 = CImmersiveAppFinderByApplication::CImmersiveAppFinderByApplication((CImmersiveAppFinderByApplication *)&v6, a2);
  CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByApplication>((__int64)this, v4, 0LL, &v7);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
  CActivationBasedAppAndGlomCollection::RemoveApplication((CApplicationManager *)((char *)this + 624), v7);
  ppv = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  if ( IUnknown_GetSite((IUnknown *)a2, &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee, &ppv) >= 0 )
    (*(void (__fastcall **)(void *, void (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, CImmersiveAppFinderByApplication *), _QWORD, _QWORD, int, _QWORD))(*(_QWORD *)ppv + 48LL))(
      ppv,
      a2,
      0LL,
      0LL,
      6,
      0LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
}
