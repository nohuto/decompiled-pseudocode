/*
 * XREFs of KeTrackEnclaveTbFlush @ 0x14050FFC4
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x140544558 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x140545660 (MiProtectEnclavePages.c)
 * Callees:
 *     KiEncls @ 0x1403F7F70 (KiEncls.c)
 *     KiEnclsStatus @ 0x140510008 (KiEnclsStatus.c)
 */

__int64 KeTrackEnclaveTbFlush()
{
  unsigned int v0; // eax

  if ( (KeFeatureBits & 0x10000000000LL) == 0 )
    return 3221225659LL;
  v0 = KiEncls(0xCu);
  return KiEnclsStatus(v0);
}
