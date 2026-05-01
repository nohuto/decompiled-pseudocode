/*
 * XREFs of ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x18003F630
 * Callers:
 *     ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x18002831C (-_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?CreateEnsuredApplication@CApplicationManager@@UEAAJPEBG_KPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x180149420 (-CreateEnsuredApplication@CApplicationManager@@UEAAJPEBG_KPEAPEAUIImmersiveApplicationInternal@@.c)
 *     ?CreateNewGlom@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAPEAU3@@Z @ 0x180149770 (-CreateNewGlom@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@PEAUIPro.c)
 * Callees:
 *     ?s_LoadQuirksForApp@CApplicationManager@@CAXPEBGPEAUPER_APPLICATION_DATA@@@Z @ 0x180016998 (-s_LoadQuirksForApp@CApplicationManager@@CAXPEBGPEAUPER_APPLICATION_DATA@@@Z.c)
 *     ??$MakeAndInitialize@VCImmersiveApp@@UIImmersiveApplication@@AEAPEBGAEAPEBGAEAKAEAPEAUIImmersiveMonitor@@AEAPEAUPER_APPLICATION_DATA@@AEAPEAUIIAMServiceProvider@@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAUIImmersiveApplication@@AEAPEBG1AEAKAEAPEAUIImmersiveMonitor@@AEAPEAUPER_APPLICATION_DATA@@AEAPEAUIIAMServiceProvider@@AEA_K@Z @ 0x18003D2E0 (--$MakeAndInitialize@VCImmersiveApp@@UIImmersiveApplication@@AEAPEBGAEAPEBGAEAKAEAPEAUIImmersive.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8f57164c75fe082189e2647ffb9ef0fb_____lambda_8f57164c75fe082189e2647ffb9ef0fb___ @ 0x18003F954 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8f57164c75fe0.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18003FA08 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@details@.c)
 *     ?_AddApplicationData@CApplicationManager@@AEAAJPEBGAEB_KAEAV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@@Z @ 0x18003FA88 (-_AddApplicationData@CApplicationManager@@AEAAJPEBGAEB_KAEAV-$ComPtr@V-$CRefCountedObject@UPER_A.c)
 *     ?GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z @ 0x180040164 (-GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800579E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x1800784BC (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetItem@?$CSimpleHashTable@_KV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@V?$CDefaultHashPolicy@_K@@V?$CDefaultKeyCompare@_K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@QEBAJAEB_KAEAV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@@Z @ 0x18007BC38 (-GetItem@-$CSimpleHashTable@_KV-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Micro.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationManager::_CreateImmersiveApp(
        CApplicationManager *this,
        CallerIdentity *a2,
        unsigned __int16 **a3,
        int a4,
        struct IImmersiveMonitor *a5,
        const struct _GUID *a6,
        void **a7)
{
  int PackageFullNameFromAppId; // esi
  unsigned __int16 *v11; // r14
  const struct _GUID *v12; // rbx
  struct _GUID *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 *v16; // rax
  __int64 v17; // rdi
  const struct _GUID *v18; // rdi
  __int64 (__fastcall ***v20)(_QWORD, GUID *, _QWORD); // [rsp+48h] [rbp-61h] BYREF
  __int64 (__fastcall ***v21)(_QWORD, GUID *, void **); // [rsp+50h] [rbp-59h] BYREF
  const struct _GUID *v22; // [rsp+58h] [rbp-51h] BYREF
  CallerIdentity *v23; // [rsp+60h] [rbp-49h] BYREF
  const struct _GUID *v24; // [rsp+68h] [rbp-41h] BYREF
  unsigned __int16 **v25; // [rsp+70h] [rbp-39h] BYREF
  struct IIAMServiceProvider *v26; // [rsp+78h] [rbp-31h] BYREF
  struct PER_APPLICATION_DATA *v27; // [rsp+80h] [rbp-29h] BYREF
  struct IImmersiveMonitor *v28; // [rsp+88h] [rbp-21h] BYREF
  char *v29; // [rsp+90h] [rbp-19h] BYREF
  LPVOID pv[10]; // [rsp+98h] [rbp-11h] BYREF
  const struct _GUID *v31; // [rsp+100h] [rbp+57h] BYREF
  unsigned __int16 **v32; // [rsp+108h] [rbp+5Fh] BYREF
  int v33; // [rsp+110h] [rbp+67h]

  v33 = a4;
  v32 = a3;
  *a7 = 0LL;
  pv[0] = 0LL;
  pv[1] = (LPVOID)-1LL;
  pv[2] = (LPVOID)-1LL;
  PackageFullNameFromAppId = CallerIdentity::GetPackageFullNameFromAppId(a2, (const unsigned __int16 *)pv, a3);
  v11 = (unsigned __int16 *)pv[0];
  if ( PackageFullNameFromAppId >= 0 )
  {
    v12 = 0LL;
    v22 = 0LL;
    a6 = 0LL;
    if ( (int)CSimpleHashTable<unsigned __int64,Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CDefaultHashPolicy<unsigned __int64>,CDefaultKeyCompare<unsigned __int64>,CDefaultResizePolicy,CDefaultRehashPolicy>::GetItem(
                (char *)this + 1000,
                &v32,
                &a6) >= 0 )
    {
      v18 = a6;
    }
    else
    {
      v13 = (struct _GUID *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
      v12 = v13;
      if ( v13 )
      {
        *(_QWORD *)v13[2].Data4 = 0LL;
        *(_QWORD *)v13->Data4 = 0LL;
        *(_QWORD *)&v13[1].Data1 = 0LL;
        *(_QWORD *)v13[1].Data4 = 0LL;
        *(_QWORD *)&v13[2].Data1 = 0LL;
        *(_DWORD *)v13[2].Data4 = 0;
        *(_WORD *)&v13[2].Data4[4] = 0;
        *(_QWORD *)&v13->Data1 = &CRefCountedObject<PER_APPLICATION_DATA>::`vftable';
        v13[3].Data1 = 0;
      }
      else
      {
        v12 = 0LL;
      }
      if ( v12 )
        (*(void (__fastcall **)(const struct _GUID *))(*(_QWORD *)&v12->Data1 + 8LL))(v12);
      v20 = 0LL;
      v31 = 0LL;
      v22 = v12;
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v31);
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v20);
      if ( v11 )
        CApplicationManager::s_LoadQuirksForApp(
          v11,
          (struct PER_APPLICATION_DATA *)((unsigned __int64)v12->Data4 & ((unsigned __int128)-(__int128)(unsigned __int64)v12 >> 64)));
      LOBYTE(v15) = 3;
      LOBYTE(v14) = 1;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetImpl'::`2'::impl,
        v14,
        v15);
      v23 = a2;
      v24 = v12;
      if ( v12 )
        (*(void (__fastcall **)(const struct _GUID *))(*(_QWORD *)&v12->Data1 + 8LL))(v12);
      v16 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8f57164c75fe082189e2647ffb9ef0fb_____lambda_8f57164c75fe082189e2647ffb9ef0fb___(
                         &v31,
                         &v23);
      v17 = *v16;
      *v16 = 0LL;
      if ( v31 )
      {
        v31 = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release();
      }
      SHTaskPoolQueueTask(0LL, 32LL, 0LL);
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v24);
      v18 = a6;
      if ( a6 != v12 )
      {
        if ( v12 )
          (*(void (__fastcall **)(const struct _GUID *))(*(_QWORD *)&v12->Data1 + 8LL))(v12);
        v31 = v18;
        v18 = v12;
        a6 = v12;
        Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v31);
      }
    }
    v26 = (struct IIAMServiceProvider *)(((unsigned __int64)this + 192) & -(__int64)(this != 0LL));
    v27 = (struct PER_APPLICATION_DATA *)((unsigned __int64)v18->Data4 & -(__int64)(v18 != 0LL));
    v28 = a5;
    LODWORD(v31) = v33;
    v29 = (char *)v11;
    v25 = a3;
    v23 = a2;
    v21 = 0LL;
    v20 = 0LL;
    PackageFullNameFromAppId = Microsoft::WRL::Details::MakeAndInitialize<CImmersiveApp,IImmersiveApplication,unsigned short const * &,unsigned short const * &,unsigned long &,IImmersiveMonitor * &,PER_APPLICATION_DATA * &,IIAMServiceProvider * &,unsigned __int64 &>(
                                 &v20,
                                 (const unsigned __int16 **)&v23,
                                 &v29,
                                 (int *)&v31,
                                 &v28,
                                 &v27,
                                 &v26,
                                 (unsigned __int64 *)&v25);
    if ( PackageFullNameFromAppId >= 0 )
      PackageFullNameFromAppId = (**v20)(v20, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v21);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
    if ( PackageFullNameFromAppId >= 0 )
    {
      if ( v18 == v12 )
        PackageFullNameFromAppId = CApplicationManager::_AddApplicationData(this, a2, &v32, &v22);
      if ( PackageFullNameFromAppId >= 0 )
        PackageFullNameFromAppId = (**v21)(v21, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, a7);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&a6);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v22);
  }
  if ( v11 )
    CoTaskMemFree(v11);
  return (unsigned int)PackageFullNameFromAppId;
}
