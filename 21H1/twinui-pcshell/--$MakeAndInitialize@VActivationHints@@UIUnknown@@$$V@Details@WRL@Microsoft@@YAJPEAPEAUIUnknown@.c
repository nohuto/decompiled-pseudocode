/*
 * XREFs of ??$MakeAndInitialize@VActivationHints@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1803A8DBC
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VActivationHints@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1803A97B0 (-CreateInstance@-$SimpleClassFactory@VActivationHints@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AE.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCImmersiveShellComponentWithGITSite@@@Details@23@UIActivationHints@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800156C8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$ImplementsMarker@VC.c)
 *     InlineIsEqualGUID @ 0x18003C4F0 (InlineIsEqualGUID.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UICustomShellManager@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007FA90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_18007FA90.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18012AF84 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ??0ActivationHints@@QEAA@XZ @ 0x1803A922C (--0ActivationHints@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ActivationHints,IUnknown,>(ActivationHints **a1)
{
  ActivationHints *v2; // rax
  int CanCastTo; // edi
  ActivationHints *v4; // rbx
  volatile int *v5; // rdx
  _DWORD *v6; // rdx
  _OWORD v8[2]; // [rsp+20h] [rbp-38h] BYREF

  *a1 = 0LL;
  v2 = (ActivationHints *)operator new(0xB8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = ActivationHints::ActivationHints(v2);
    v8[0] = xmmword_1804C8C70;
    v8[1] = 0LL;
    CanCastTo = CImmersiveShellComponent::RegisterServiceInformation(
                  (ActivationHints *)((char *)v4 + 40),
                  (const struct CImmersiveShellComponent::ISC_SERVICE *)v8,
                  1LL);
    if ( CanCastTo >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_00000000_0000_0000_c000_000000000046, &GUID_00000000_0000_0000_c000_000000000046) )
      {
        *a1 = v4;
        (*(void (__fastcall **)(ActivationHints *))(*(_QWORD *)v4 + 8LL))(v4);
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IActivationHints,Microsoft::WRL::FtmBase>::CanCastTo(
                      (__int64)v4,
                      v6,
                      a1);
        if ( CanCastTo >= 0 )
          (*(void (__fastcall **)(ActivationHints *))(*(_QWORD *)*a1 + 8LL))(*a1);
      }
    }
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,ICustomShellManager,Microsoft::WRL::FtmBase>::Release(
        (__int64)v4,
        v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
