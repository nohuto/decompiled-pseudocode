/*
 * XREFs of ??$MakeAndInitialize@VCPPIAllUpViewHost@@V1@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIMultitaskingViewVisibilityServiceInternal@@AEAPEAUITabletModeViewManager@@@Details@WRL@Microsoft@@YAJPEAPEAVCPPIAllUpViewHost@@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIMultitaskingViewVisibilityServiceInternal@@AEAPEAUITabletModeViewManager@@@Z @ 0x18036E040
 * Callers:
 *     ?CPPIAllUpViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUITabletModeViewManager@@AEBU_GUID@@PEAPEAX@Z @ 0x18036E4E8 (-CPPIAllUpViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInterna.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLExecuteCommandBase@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x18013F044 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLExecu.c)
 *     ??0CPPIAllUpViewHost@@QEAA@XZ @ 0x18036E290 (--0CPPIAllUpViewHost@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VAccessibleElement@@@WRL@Microsoft@@IEAAKXZ @ 0x18036E8C8 (-InternalRelease@-$ComPtr@VAccessibleElement@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@CPPIAllUpViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUITabletModeViewManager@@@Z @ 0x18036EA8C (-RuntimeClassInitialize@CPPIAllUpViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewMana.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CPPIAllUpViewHost,CPPIAllUpViewHost,IMultitaskingData * &,IMultitaskingViewManagerInternal * &,IApplicationViewSwitcher * &,IImmersiveAppCrusher * &,IMultitaskingViewVisibilityServiceInternal * &,ITabletModeViewManager * &>(
        CPPIAllUpViewHost **a1,
        struct IMultitaskingData **a2,
        struct IMultitaskingViewManagerInternal **a3,
        struct IApplicationViewSwitcher **a4,
        struct IImmersiveAppCrusher **a5,
        struct IMultitaskingViewVisibilityServiceInternal **a6,
        struct ITabletModeViewManager **a7)
{
  CPPIAllUpViewHost *v11; // rax
  int v12; // ebx
  CPPIAllUpViewHost *v13; // rdi
  struct IApplicationViewSwitcher *v14; // r9
  struct IMultitaskingViewManagerInternal *v15; // r8
  volatile int *v16; // rdx
  CPPIAllUpViewHost *v18; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v11 = (CPPIAllUpViewHost *)operator new(0xB0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v11 )
  {
    v13 = CPPIAllUpViewHost::CPPIAllUpViewHost(v11);
    v14 = *a4;
    v15 = *a3;
    v18 = v13;
    v12 = CPPIAllUpViewHost::RuntimeClassInitialize(v13, *a2, v15, v14, *a5, *a6, *a7);
    if ( v12 >= 0 )
    {
      if ( v13 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLExecuteCommandBase>::InternalAddRef(
          (__int64)v13,
          v16);
      *a1 = v13;
      v12 = 0;
    }
    Microsoft::WRL::ComPtr<AccessibleElement>::InternalRelease(&v18);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v12;
}
