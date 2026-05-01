/*
 * XREFs of ?ConvertForMonitorAndChromeConfiguration@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIImmersiveMonitor@@HHPEAUIApplicationViewTitlebarConfiguration@@PEAU2@@Z @ 0x180029A80
 * Callers:
 *     <none>
 * Callees:
 *     ?ConvertWithViewInfo@WindowSizeConverter@@AEAAJUtagSIZE@@PEAVSizeConversionViewInfo@@PEAU2@@Z @ 0x18002B904 (-ConvertWithViewInfo@WindowSizeConverter@@AEAAJUtagSIZE@@PEAVSizeConversionViewInfo@@PEAU2@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180092CCC (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WindowSizeConverter::ConvertForMonitorAndChromeConfiguration(
        WindowSizeConverter *this,
        struct tagSIZE a2,
        struct IImmersiveMonitor *a3,
        int a4,
        int a5,
        struct IApplicationViewTitlebarConfiguration *a6,
        struct tagSIZE *a7)
{
  struct SizeConversionViewInfo *v11; // rax
  struct SizeConversionViewInfo *v12; // rbx
  struct IImmersiveMonitor *v13; // rcx
  struct IApplicationViewTitlebarConfiguration *v14; // rcx
  int ScaleFactorForMonitor; // eax
  int v16; // esi
  int v17; // eax
  struct SizeConversionViewInfo *v18; // rcx
  unsigned __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rdx
  int v23; // [rsp+20h] [rbp-30h] BYREF
  struct SizeConversionViewInfo *v24; // [rsp+28h] [rbp-28h]
  struct SizeConversionViewInfo *v25; // [rsp+30h] [rbp-20h] BYREF
  __int64 v26; // [rsp+38h] [rbp-18h] BYREF
  struct SizeConversionViewInfo *v27; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  v24 = 0LL;
  v11 = (struct SizeConversionViewInfo *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v11;
  v25 = v11;
  if ( !v11 )
  {
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v25);
    v16 = -2147024882;
LABEL_34:
    v20 = (unsigned int)v16;
    v21 = 315LL;
    goto LABEL_40;
  }
  *((_DWORD *)v11 + 3) = 1;
  *(_QWORD *)v11 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v12 = &SizeConversionViewInfo::`vftable';
  *((_QWORD *)v12 + 2) = 0LL;
  *((_DWORD *)v12 + 6) = 0;
  *((_QWORD *)v12 + 4) = 0LL;
  *((_DWORD *)v12 + 10) = 100;
  v27 = v12;
  v25 = 0LL;
  v13 = (struct IImmersiveMonitor *)*((_QWORD *)v12 + 2);
  if ( v13 != a3 )
  {
    if ( a3 )
    {
      (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)a3 + 8LL))(a3);
      v13 = (struct IImmersiveMonitor *)*((_QWORD *)v12 + 2);
    }
    *((_QWORD *)v12 + 2) = a3;
    if ( v13 )
      (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = (struct IApplicationViewTitlebarConfiguration *)*((_QWORD *)v12 + 4);
  if ( v14 != a6 )
  {
    if ( a6 )
    {
      (*(void (__fastcall **)(struct IApplicationViewTitlebarConfiguration *))(*(_QWORD *)a6 + 8LL))(a6);
      v14 = (struct IApplicationViewTitlebarConfiguration *)*((_QWORD *)v12 + 4);
    }
    *((_QWORD *)v12 + 4) = a6;
    if ( v14 )
      (*(void (__fastcall **)(struct IApplicationViewTitlebarConfiguration *))(*(_QWORD *)v14 + 16LL))(v14);
  }
  if ( a5 )
    *((_DWORD *)v12 + 6) |= 1u;
  if ( a4 )
    *((_DWORD *)v12 + 6) |= 2u;
  ScaleFactorForMonitor = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)v12 + 2) + 40LL))(
                            *((_QWORD *)v12 + 2),
                            &v26);
  v16 = ScaleFactorForMonitor;
  if ( ScaleFactorForMonitor < 0 )
  {
    v22 = 60LL;
  }
  else
  {
    ScaleFactorForMonitor = GetScaleFactorForMonitor(v26, &v23);
    v16 = ScaleFactorForMonitor;
    if ( ScaleFactorForMonitor >= 0 )
    {
      *((_DWORD *)v12 + 10) = v23;
      v16 = 0;
      goto LABEL_21;
    }
    v22 = 63LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v22,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
    (const char *)(unsigned int)ScaleFactorForMonitor,
    v23);
LABEL_21:
  if ( v16 < 0 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v25);
  }
  else
  {
    if ( v12 )
      (*(void (__fastcall **)(struct SizeConversionViewInfo *))(*(_QWORD *)v12 + 8LL))(v12);
    v24 = v12;
    if ( v12 )
      (*(void (__fastcall **)(struct SizeConversionViewInfo *))(*(_QWORD *)v12 + 16LL))(v12);
    v16 = 0;
  }
  if ( v16 < 0 )
    goto LABEL_34;
  v17 = WindowSizeConverter::ConvertWithViewInfo((WindowSizeConverter *)((char *)this - 88), a2, v24, a7);
  v16 = v17;
  if ( v17 >= 0 )
  {
    v16 = 0;
    goto LABEL_30;
  }
  v20 = (unsigned int)v17;
  v21 = 316LL;
LABEL_40:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v21,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
    (const char *)v20,
    v23);
LABEL_30:
  v18 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(struct SizeConversionViewInfo *))(*(_QWORD *)v18 + 16LL))(v18);
  }
  return (unsigned int)v16;
}
