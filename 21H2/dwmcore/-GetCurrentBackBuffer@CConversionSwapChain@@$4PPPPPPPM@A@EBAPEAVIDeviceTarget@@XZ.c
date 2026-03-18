/*
 * XREFs of ?GetCurrentBackBuffer@CConversionSwapChain@@$4PPPPPPPM@A@EBAPEAVIDeviceTarget@@XZ @ 0x18010A430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IDeviceTarget *__fastcall CConversionSwapChain::GetCurrentBackBuffer(__int64 a1)
{
  return CConversionSwapChain::GetCurrentBackBuffer((CConversionSwapChain *)(a1 - *(int *)(a1 - 4)));
}
