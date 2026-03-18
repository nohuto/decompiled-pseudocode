/*
 * XREFs of ?PresentMPO@CConversionSwapChain@@$4PPPPPPPM@A@EAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x1800F2100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CConversionSwapChain::PresentMPO(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        enum DXGI_HDR_METADATA_TYPE a4,
        const void *a5,
        const struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *a6,
        unsigned int a7)
{
  return CConversionSwapChain::PresentMPO((CConversionSwapChain *)(a1 - *(int *)(a1 - 4)), a2, a3, a4, a5, a6, a7);
}
