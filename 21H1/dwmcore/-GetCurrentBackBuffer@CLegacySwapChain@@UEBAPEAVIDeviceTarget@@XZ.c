/*
 * XREFs of ?GetCurrentBackBuffer@CLegacySwapChain@@UEBAPEAVIDeviceTarget@@XZ @ 0x1800BD004
 * Callers:
 *     ?GetCurrentBackBuffer@CLegacySwapChain@@$4PPPPPPPM@A@EBAPEAVIDeviceTarget@@XZ @ 0x1800EEB20 (-GetCurrentBackBuffer@CLegacySwapChain@@$4PPPPPPPM@A@EBAPEAVIDeviceTarget@@XZ.c)
 *     ?GetCurrentBackBuffer@CLegacySwapChain@@$4PPPPPPPM@BI@EBAPEAVIDeviceTarget@@XZ @ 0x1800EEFC0 (-GetCurrentBackBuffer@CLegacySwapChain@@$4PPPPPPPM@BI@EBAPEAVIDeviceTarget@@XZ.c)
 * Callees:
 *     <none>
 */

struct IDeviceTarget *__fastcall CLegacySwapChain::GetCurrentBackBuffer(CLegacySwapChain *this)
{
  __int64 v1; // rdx
  struct IDeviceTarget *result; // rax

  v1 = *((_QWORD *)this - 34);
  result = 0LL;
  if ( v1 )
    return (struct IDeviceTarget *)(*(int *)(*(_QWORD *)(v1 + 8) + 24LL) + v1 + 8);
  return result;
}
