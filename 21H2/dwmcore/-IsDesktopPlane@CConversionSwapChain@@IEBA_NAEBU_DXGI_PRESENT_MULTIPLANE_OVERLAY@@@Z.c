/*
 * XREFs of ?IsDesktopPlane@CConversionSwapChain@@IEBA_NAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x180292C78
 * Callers:
 *     ?CalcPresentMode@CConversionSwapChain@@IEAAJPEAI@Z @ 0x1802913AC (-CalcPresentMode@CConversionSwapChain@@IEAAJPEAI@Z.c)
 *     ?PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x180292F84 (-PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPL.c)
 * Callees:
 *     ?GetDesktopPlaneResource@CLegacySwapChain@@UEBAXPEAPEAUIUnknown@@@Z @ 0x18001A6E4 (-GetDesktopPlaneResource@CLegacySwapChain@@UEBAXPEAPEAUIUnknown@@@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

char __fastcall CConversionSwapChain::IsDesktopPlane(
        CConversionSwapChain *this,
        const struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *a2)
{
  bool v3; // bl
  struct IUnknown *v5; // [rsp+38h] [rbp+10h] BYREF

  if ( !*((_QWORD *)a2 + 1) )
    return 1;
  v5 = 0LL;
  CLegacySwapChain::GetDesktopPlaneResource((CConversionSwapChain *)((char *)this + 400), &v5);
  v3 = *((_QWORD *)a2 + 1) == (_QWORD)v5;
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v5);
  return v3;
}
