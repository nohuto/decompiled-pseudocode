/*
 * XREFs of CreateBitmapStrip @ 0x1C000B6D0
 * Callers:
 *     xxxSetWindowNCMetrics @ 0x1C000B32C (xxxSetWindowNCMetrics.c)
 *     xxxSystemParametersInfoWorker @ 0x1C003E1F8 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     CleanupOEMBitmaps @ 0x1C000B750 (CleanupOEMBitmaps.c)
 *     GreTextInitialized @ 0x1C000C248 (GreTextInitialized.c)
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1C0062134 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 */

__int64 CreateBitmapStrip()
{
  int v0; // esi
  __int64 v1; // rbx
  int i; // edi

  if ( !(unsigned int)GreTextInitialized() )
    return 1LL;
  CleanupOEMBitmaps();
  v0 = 0;
  v1 = 0LL;
  for ( i = 29; i < 39; i += 2 )
  {
    if ( *(_QWORD *)(v1 + gcachedCaptions[0]) )
      HMAssignmentUnlock(&gcachedCaptions[2 * v0]);
    ++v0;
    *(_DWORD *)(v1 + gcachedCaptions[0] + 8) = i;
    v1 += 16LL;
  }
  return CreateDPIBitmapStrip(0);
}
