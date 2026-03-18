/*
 * XREFs of _InvalidateKMDpiMetricsCacheDPIMETRICS@0 @ 0xDA4B0
 * Callers:
 *     ?SetIconFonts@@YGHPAU_UNICODE_STRING@@PAUtagICONMETRICSW@@@Z @ 0xDA45C (-SetIconFonts@@YGHPAU_UNICODE_STRING@@PAUtagICONMETRICSW@@@Z.c)
 *     _xxxSetNCFonts@8 @ 0xDA4C2 (_xxxSetNCFonts@8.c)
 *     _DestroyDpiMetricsCache@0 @ 0xF1A8C (_DestroyDpiMetricsCache@0.c)
 *     ?SPISetIconTitleFont@@YGHPAU_UNICODE_STRING@@PAUtagLOGFONTW@@H@Z @ 0x1452C0 (-SPISetIconTitleFont@@YGHPAU_UNICODE_STRING@@PAUtagLOGFONTW@@H@Z.c)
 * Callees:
 *     ?ClearKMDpiMetricsCacheNodeDPIMETRICS@@YGXPAUtagDpiKMMetricsCacheNode@@@Z @ 0x154F27 (-ClearKMDpiMetricsCacheNodeDPIMETRICS@@YGXPAUtagDpiKMMetricsCacheNode@@@Z.c)
 */

void __stdcall InvalidateKMDpiMetricsCacheDPIMETRICS()
{
  int i; // esi
  struct tagDpiKMMetricsCacheNode *v1; // [esp+0h] [ebp-4h]

  for ( i = _gpDpiKernelModeMetricsCache; i; i = *(_DWORD *)(i + 4) )
    ClearKMDpiMetricsCacheNodeDPIMETRICS(v1);
}
