/*
 * XREFs of ?CVirtualDesktop_CreateInstance@@YAJAEBU_GUID@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@0PEAPEAX@Z @ 0x18042952C
 * Callers:
 *     ?CreateVirtualDesktop@CVirtualDesktopFactory@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180411020 (-CreateVirtualDesktop@CVirtualDesktopFactory@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18003C4F0 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktop@@@WRL@Microsoft@@IEAAKXZ @ 0x180265E68 (-InternalRelease@-$ComPtr@VCVirtualDesktop@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CVirtualDesktop@@QEAA@AEBU_GUID@@@Z @ 0x180429310 (--0CVirtualDesktop@@QEAA@AEBU_GUID@@@Z.c)
 *     ?Attach@?$ComPtr@VCVirtualDesktop@@@WRL@Microsoft@@QEAAXPEAVCVirtualDesktop@@@Z @ 0x1804294F8 (-Attach@-$ComPtr@VCVirtualDesktop@@@WRL@Microsoft@@QEAAXPEAVCVirtualDesktop@@@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@U?$ChainInterfaces@UIVirtualDesktop2@@UIVirtualDesktop@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIWeakReferenceSource@@UIVirtualDesktopPrivate@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1804297D0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspect_ea_1804297D0.c)
 *     ?RuntimeClassInitialize@CVirtualDesktop@@QEAAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@@Z @ 0x1804299E8 (-RuntimeClassInitialize@CVirtualDesktop@@QEAAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualD.c)
 */

__int64 __fastcall CVirtualDesktop_CreateInstance(
        const struct _GUID *a1,
        struct IVirtualDesktopVisibilityPolicy *a2,
        struct IVirtualDesktopLock *a3,
        struct _GUID *a4,
        void **a5)
{
  void **v5; // rsi
  CVirtualDesktop *v10; // rax
  CVirtualDesktop *v11; // rax
  void **v12; // rbx
  int v13; // eax
  int CanCastTo; // edi
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  _DWORD *v17; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = a5;
  a5 = 0LL;
  *v5 = 0LL;
  v10 = (CVirtualDesktop *)operator new(0x78uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v10
    || (v11 = CVirtualDesktop::CVirtualDesktop(v10, a1),
        Microsoft::WRL::ComPtr<CVirtualDesktop>::Attach((__int64 *)&a5, (__int64)v11),
        (v12 = a5) == 0LL) )
  {
    CanCastTo = -2147024882;
    v16 = 143LL;
    goto LABEL_13;
  }
  v13 = CVirtualDesktop::RuntimeClassInitialize((CVirtualDesktop *)a5, a2, a3);
  CanCastTo = v13;
  if ( v13 < 0 )
  {
    v15 = (unsigned int)v13;
    v16 = 144LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktop.cpp",
      (const char *)v15);
    goto LABEL_15;
  }
  *v5 = 0LL;
  if ( InlineIsEqualGUID(a4, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v17, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *v5 = v12;
    (*((void (__fastcall **)(void **))*v12 + 1))(v12);
    CanCastTo = 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,IInspectable,Microsoft::WRL::ChainInterfaces<IVirtualDesktop2,IVirtualDesktop,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IWeakReferenceSource,IVirtualDesktopPrivate,Microsoft::WRL::FtmBase>::CanCastTo(
                  v12,
                  a4);
    if ( CanCastTo >= 0 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)*v5 + 8LL))(*v5);
  }
  if ( CanCastTo < 0 )
  {
    v16 = 145LL;
LABEL_13:
    v15 = (unsigned int)CanCastTo;
    goto LABEL_14;
  }
LABEL_15:
  Microsoft::WRL::ComPtr<CVirtualDesktop>::InternalRelease((__int64 *)&a5);
  return (unsigned int)CanCastTo;
}
