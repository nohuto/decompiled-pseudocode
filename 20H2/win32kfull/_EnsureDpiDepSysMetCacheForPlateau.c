/*
 * XREFs of _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01E9D00
 * Callers:
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C005B890 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     GetDpiDependentMetric @ 0x1C005BD0C (GetDpiDependentMetric.c)
 * Callees:
 *     GetDpiCacheSlot @ 0x1C005BD68 (GetDpiCacheSlot.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01E9D80 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

__int64 __fastcall EnsureDpiDepSysMetCacheForPlateau(unsigned int a1)
{
  unsigned int v2; // edi
  __int64 v3; // rbx

  v2 = 0;
  v3 = 120LL * (int)GetDpiCacheSlot(a1) + 2284;
  do
  {
    if ( *(_DWORD *)(v3 + gpsi) == -1 )
      *(_DWORD *)(v3 + gpsi) = ScaleSystemMetricForDPIWithoutCache(v2, a1);
    ++v2;
    v3 += 4LL;
  }
  while ( v2 < 0x1E );
  return 1LL;
}
