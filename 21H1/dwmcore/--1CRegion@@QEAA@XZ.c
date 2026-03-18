/*
 * XREFs of ??1CRegion@@QEAA@XZ @ 0x180095DD4
 * Callers:
 *     ?PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x180250958 (-PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPL.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CRegion::~CRegion(CRegion *this)
{
  FastRegion::CRegion::FreeMemory(this);
}
