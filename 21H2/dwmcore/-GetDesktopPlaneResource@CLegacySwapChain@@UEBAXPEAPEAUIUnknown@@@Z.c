/*
 * XREFs of ?GetDesktopPlaneResource@CLegacySwapChain@@UEBAXPEAPEAUIUnknown@@@Z @ 0x180249D0C
 * Callers:
 *     ?IsDesktopPlane@CConversionSwapChain@@IEBA_NAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x1800F2740 (-IsDesktopPlane@CConversionSwapChain@@IEBA_NAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z.c)
 *     ?GetDesktopPlaneResource@CLegacySwapChain@@$4PPPPPPPM@A@EBAXPEAPEAUIUnknown@@@Z @ 0x1800F7520 (-GetDesktopPlaneResource@CLegacySwapChain@@$4PPPPPPPM@A@EBAXPEAPEAUIUnknown@@@Z.c)
 *     ?GetDesktopPlaneResource@CLegacySwapChain@@$4PPPPPPPM@BI@EBAXPEAPEAUIUnknown@@@Z @ 0x1800F79C0 (-GetDesktopPlaneResource@CLegacySwapChain@@$4PPPPPPPM@BI@EBAXPEAPEAUIUnknown@@@Z.c)
 *     ?GetDesktopPlaneResource@CLegacySwapChain@@$4PPPPPPPM@BKI@EBAXPEAPEAUIUnknown@@@Z @ 0x1800F7CF0 (-GetDesktopPlaneResource@CLegacySwapChain@@$4PPPPPPPM@BKI@EBAXPEAPEAUIUnknown@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180025290 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CLegacySwapChain::GetDesktopPlaneResource(CLegacySwapChain *this, struct IUnknown **a2)
{
  __int64 (__fastcall ***v3)(_QWORD); // rcx
  __int64 v4; // rax
  __int64 v5; // rbx
  void (__fastcall *v6)(__int64, __int64 *); // rdi
  struct IUnknown *v7; // rax
  struct IUnknown *v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0LL;
  v8 = 0LL;
  v3 = (__int64 (__fastcall ***)(_QWORD))((char *)this + *(int *)(*((_QWORD *)this - 41) + 16LL) - 328);
  v4 = (**v3)(v3);
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 56LL))(v4);
  v6 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 56LL);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v6(v5, &v9);
  if ( v8 )
    ((void (__fastcall *)(struct IUnknown *))v8->lpVtbl->Release)(v8);
  (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v9)(
    v9,
    &GUID_035f3ab4_482e_4e50_b41f_8a7f8bd8960b,
    (__int64 *)&v8);
  v7 = v8;
  v8 = 0LL;
  *a2 = v7;
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v8);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v9);
}
