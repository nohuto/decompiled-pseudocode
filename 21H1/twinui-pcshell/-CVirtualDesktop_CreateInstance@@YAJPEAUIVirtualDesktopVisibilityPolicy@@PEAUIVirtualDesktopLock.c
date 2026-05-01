/*
 * XREFs of ?CVirtualDesktop_CreateInstance@@YAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x180429678
 * Callers:
 *     ?CreateVirtualDesktop@CVirtualDesktopFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180411070 (-CreateVirtualDesktop@CVirtualDesktopFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18003C4F0 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktop@@@WRL@Microsoft@@IEAAKXZ @ 0x180265E68 (-InternalRelease@-$ComPtr@VCVirtualDesktop@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCVirtualDesktop@@V1@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktop@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x180429238 (--$MakeAndInitialize@VCVirtualDesktop@@V1@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtua.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@U?$ChainInterfaces@UIVirtualDesktop2@@UIVirtualDesktop@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIWeakReferenceSource@@UIVirtualDesktopPrivate@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1804297D0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspect_ea_1804297D0.c)
 */

__int64 __fastcall CVirtualDesktop_CreateInstance(
        struct IVirtualDesktopVisibilityPolicy *a1,
        struct IVirtualDesktopLock *a2,
        struct _GUID *a3,
        void **a4)
{
  int v6; // eax
  int CanCastTo; // ebx
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  _DWORD *v10; // rcx
  CVirtualDesktop *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IVirtualDesktopVisibilityPolicy *v14; // [rsp+40h] [rbp+8h] BYREF
  struct IVirtualDesktopLock *v15; // [rsp+48h] [rbp+10h] BYREF
  CVirtualDesktop *v16; // [rsp+58h] [rbp+20h] BYREF

  v15 = a2;
  v14 = a1;
  *a4 = 0LL;
  v16 = 0LL;
  Microsoft::WRL::ComPtr<CVirtualDesktop>::InternalRelease((__int64 *)&v16);
  v6 = Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktop,CVirtualDesktop,IVirtualDesktopVisibilityPolicy * &,IVirtualDesktopLock * &>(
         &v16,
         &v14,
         &v15);
  CanCastTo = v6;
  if ( v6 < 0 )
  {
    v8 = (unsigned int)v6;
    v9 = 128LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktop.cpp",
      (const char *)v8);
    goto LABEL_11;
  }
  *a4 = 0LL;
  if ( InlineIsEqualGUID(a3, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v10, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    v11 = v16;
    *a4 = v16;
    (*(void (__fastcall **)(CVirtualDesktop *))(*(_QWORD *)v11 + 8LL))(v11);
    CanCastTo = 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,IInspectable,Microsoft::WRL::ChainInterfaces<IVirtualDesktop2,IVirtualDesktop,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IWeakReferenceSource,IVirtualDesktopPrivate,Microsoft::WRL::FtmBase>::CanCastTo(
                  v16,
                  a3);
    if ( CanCastTo >= 0 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 8LL))(*a4);
  }
  if ( CanCastTo < 0 )
  {
    v8 = (unsigned int)CanCastTo;
    v9 = 129LL;
    goto LABEL_10;
  }
LABEL_11:
  Microsoft::WRL::ComPtr<CVirtualDesktop>::InternalRelease((__int64 *)&v16);
  return (unsigned int)CanCastTo;
}
