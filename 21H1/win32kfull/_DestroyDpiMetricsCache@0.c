/*
 * XREFs of _DestroyDpiMetricsCache@0 @ 0xF1A8C
 * Callers:
 *     <none>
 * Callees:
 *     _InvalidateKMDpiMetricsCacheDPIMETRICS@0 @ 0xDA4B0 (_InvalidateKMDpiMetricsCacheDPIMETRICS@0.c)
 *     ?ClearDPISERVERINFO@@YGXPAUtagDPISERVERINFO@@@Z @ 0xDB07A (-ClearDPISERVERINFO@@YGXPAUtagDPISERVERINFO@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall DestroyDpiMetricsCache()
{
  unsigned int i; // esi
  int v1; // esi
  int result; // eax
  int v3; // [esp-4h] [ebp-8h]

  InvalidateKMDpiMetricsCacheDPIMETRICS();
  for ( i = 0; i < 0x678; i += 92 )
    ClearDPISERVERINFO((struct HLFONT__ **)(i + _gpsi + 4564));
  v1 = _gpDpiKernelModeMetricsCache;
  while ( v1 )
  {
    v3 = v1;
    v1 = *(_DWORD *)(v1 + 4);
    Win32FreePool(v3);
  }
  _gpDpiKernelModeMetricsMRUNode = 0;
  result = _gpDpiKernelModeMetricsCache;
  _gpDpiKernelModeMetricsCache = 0;
  return result;
}
