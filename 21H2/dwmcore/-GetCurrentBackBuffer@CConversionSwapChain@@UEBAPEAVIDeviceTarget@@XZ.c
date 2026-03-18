/*
 * XREFs of ?GetCurrentBackBuffer@CConversionSwapChain@@UEBAPEAVIDeviceTarget@@XZ @ 0x180292A80
 * Callers:
 *     ?GetCurrentBackBuffer@CConversionSwapChain@@$4PPPPPPPM@A@EBAPEAVIDeviceTarget@@XZ @ 0x18010A430 (-GetCurrentBackBuffer@CConversionSwapChain@@$4PPPPPPPM@A@EBAPEAVIDeviceTarget@@XZ.c)
 * Callees:
 *     <none>
 */

struct IDeviceTarget *__fastcall CConversionSwapChain::GetCurrentBackBuffer(CConversionSwapChain *this)
{
  return (struct IDeviceTarget *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this - 60) + 64LL))(*((_QWORD *)this - 60));
}
