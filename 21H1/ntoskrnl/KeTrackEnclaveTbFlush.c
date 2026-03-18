/*
 * XREFs of KeTrackEnclaveTbFlush @ 0x14050F974
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x140543F08 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x140545010 (MiProtectEnclavePages.c)
 * Callees:
 *     KiEncls @ 0x1403F6CE0 (KiEncls.c)
 *     KiEnclsStatus @ 0x14050F9B8 (KiEnclsStatus.c)
 */

__int64 KeTrackEnclaveTbFlush()
{
  unsigned int v0; // eax

  if ( (KeFeatureBits & 0x10000000000LL) == 0 )
    return 3221225659LL;
  v0 = KiEncls(0xCu);
  return KiEnclsStatus(v0);
}
