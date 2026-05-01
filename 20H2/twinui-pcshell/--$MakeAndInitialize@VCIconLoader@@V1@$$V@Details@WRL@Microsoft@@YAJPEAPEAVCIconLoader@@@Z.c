/*
 * XREFs of ??$MakeAndInitialize@VCIconLoader@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCIconLoader@@@Z @ 0x18038423C
 * Callers:
 *     ?CIconLoader_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180384A1C (-CIconLoader_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIApplicationViewIconLoader@@VFtmBase@23@@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x18038449C (--0-$RuntimeClass@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIApplicationViewIconLoa.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CIconLoader,CIconLoader,>(_QWORD *a1)
{
  unsigned int v1; // edi
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  _QWORD *v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  *a1 = 0LL;
  v3 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = v3;
  if ( v3 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationViewIconLoader,Microsoft::WRL::FtmBase>>::RuntimeClass<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationViewIconLoader,Microsoft::WRL::FtmBase>>(v3);
    v6 = v4;
    *v4 = &CIconLoader::`vftable'{for `IInspectable'};
    v4[1] = &CIconLoader::`vftable'{for `IApplicationViewIconLoader'};
    v4[2] = &CIconLoader::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    v4[7] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationViewIconLoader,Microsoft::WRL::FtmBase>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationViewIconLoader,Microsoft::WRL::FtmBase>>,IWeakReferenceSource>'};
    (*(void (__fastcall **)(_QWORD *))(*v4 + 8LL))(v4);
    *a1 = v4;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v1;
}
