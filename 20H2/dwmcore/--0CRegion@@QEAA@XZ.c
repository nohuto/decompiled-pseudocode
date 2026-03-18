/*
 * XREFs of ??0CRegion@@QEAA@XZ @ 0x1800A6394
 * Callers:
 *     ?PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x18024CF38 (-PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPL.c)
 * Callees:
 *     <none>
 */

CRegion *__fastcall CRegion::CRegion(CRegion *this)
{
  *(_QWORD *)this = (char *)this + 8;
  *((_DWORD *)this + 2) = 0;
  return this;
}
