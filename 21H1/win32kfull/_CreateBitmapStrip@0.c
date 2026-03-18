/*
 * XREFs of _CreateBitmapStrip@0 @ 0x8E78C
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 *     _xxxSetWindowNCMetrics@12 @ 0xDA168 (_xxxSetWindowNCMetrics@12.c)
 * Callees:
 *     _CleanupOEMBitmaps@0 @ 0x91C02 (_CleanupOEMBitmaps@0.c)
 *     _GreTextInitialized@0 @ 0xF72EC (_GreTextInitialized@0.c)
 */

int __stdcall CreateBitmapStrip(unsigned int a1)
{
  int v2; // edi
  int i; // esi

  if ( !GreTextInitialized() )
    return 1;
  CleanupOEMBitmaps();
  v2 = 0;
  for ( i = 29; i < 39; i += 2 )
  {
    if ( *(_DWORD *)(v2 + _gcachedCaptions) )
      HMAssignmentUnlock(v2 + _gcachedCaptions);
    *(_DWORD *)(v2 + _gcachedCaptions + 4) = i;
    v2 += 8;
  }
  return CreateDPIBitmapStrip(a1);
}
