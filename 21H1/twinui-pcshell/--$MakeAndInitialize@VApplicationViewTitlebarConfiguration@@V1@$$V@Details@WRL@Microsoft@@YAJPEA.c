/*
 * XREFs of ??$MakeAndInitialize@VApplicationViewTitlebarConfiguration@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVApplicationViewTitlebarConfiguration@@@Z @ 0x1800643A0
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VApplicationViewTitlebarConfiguration@@$$V@wil@@YA?AV?$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@XZ @ 0x1800936E0 (--$MakeAndInitializeOrThrow@VApplicationViewTitlebarConfiguration@@$$V@wil@@YA-AV-$ComPtr@VAppli.c)
 * Callees:
 *     ??0ApplicationViewTitlebarConfiguration@@QEAA@XZ @ 0x180064444 (--0ApplicationViewTitlebarConfiguration@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180091950 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1801158FC (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedE.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ApplicationViewTitlebarConfiguration,ApplicationViewTitlebarConfiguration,>(
        ApplicationViewTitlebarConfiguration **a1)
{
  ApplicationViewTitlebarConfiguration *v2; // rax
  unsigned int v3; // r11d
  ApplicationViewTitlebarConfiguration *v4; // rax
  volatile int *v5; // rdx
  ApplicationViewTitlebarConfiguration *v6; // r10
  __int64 v7; // r10

  *a1 = 0LL;
  v2 = (ApplicationViewTitlebarConfiguration *)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = ApplicationViewTitlebarConfiguration::ApplicationViewTitlebarConfiguration(v2);
    v6 = v4;
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *>,Microsoft::WRL::FtmBase>::InternalAddRef(v4);
    v3 = 0;
    *a1 = v6;
    if ( v6 )
    {
      if ( !Microsoft::WRL::Details::SafeUnknownDecrementReference(
              (ApplicationViewTitlebarConfiguration *)((char *)v6 + 44),
              v5) )
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 136LL))(v7, v3 + 1);
        v3 = 0;
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
        {
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
          return 0;
        }
      }
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
