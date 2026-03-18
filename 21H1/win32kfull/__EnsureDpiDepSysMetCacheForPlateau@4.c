/*
 * XREFs of __EnsureDpiDepSysMetCacheForPlateau@4 @ 0x15534E
 * Callers:
 *     _GetDpiDependentMetric@8 @ 0x6E48A (_GetDpiDependentMetric@8.c)
 *     _NtUserCallOneParam@8 @ 0x6E730 (_NtUserCallOneParam@8.c)
 *     ?xxxMNItemSize@@YGHABV?$SmartObjStackRef@UtagMENU@@@@PAUtagWND@@HPAUHDC__@@PAUtagITEM@@HPAUtagPOINT@@@Z @ 0xB7256 (-xxxMNItemSize@@YGHABV-$SmartObjStackRef@UtagMENU@@@@PAUtagWND@@HPAUHDC__@@PAUtagITEM@@HPAUtagPO.c)
 *     _xxxGetMenuBarInfo@16 @ 0xB81C8 (_xxxGetMenuBarInfo@16.c)
 * Callees:
 *     _GetDpiCacheSlot@4 @ 0x31A1A (_GetDpiCacheSlot@4.c)
 *     __ScaleSystemMetricForDPIWithoutCache@8 @ 0x15539C (__ScaleSystemMetricForDPIWithoutCache@8.c)
 */

int __stdcall _EnsureDpiDepSysMetCacheForPlateau(INT b)
{
  unsigned int v1; // edi
  int v2; // esi

  v1 = 0;
  v2 = 120 * GetDpiCacheSlot(b) + 1884;
  do
  {
    if ( *(_DWORD *)(v2 + _gpsi) == -1 )
      *(_DWORD *)(v2 + _gpsi) = _ScaleSystemMetricForDPIWithoutCache(v1, b);
    ++v1;
    v2 += 4;
  }
  while ( v1 < 0x1E );
  return 1;
}
