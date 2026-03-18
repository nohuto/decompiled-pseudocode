/*
 * XREFs of ?GetDesktopPrimary@CDDisplaySwapChain@@IEAAPEAUIDisplaySurface@Core@Display@Devices@Windows@@_N@Z @ 0x180237F3C
 * Callers:
 *     ?Present@CDDisplaySwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x1800EB160 (-Present@CDDisplaySwapChain@@UEAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@I@.c)
 *     ?PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x180238C00 (-PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLAN.c)
 * Callees:
 *     <none>
 */

struct Windows::Devices::Display::Core::IDisplaySurface *__fastcall CDDisplaySwapChain::GetDesktopPrimary(
        CDDisplaySwapChain *this,
        char a2)
{
  __int64 v3; // rcx

  if ( a2 )
    v3 = *((unsigned int *)this + 59);
  else
    v3 = *((unsigned int *)this + 58);
  return *(struct Windows::Devices::Display::Core::IDisplaySurface **)(32 * v3 + *((_QWORD *)this + 25));
}
