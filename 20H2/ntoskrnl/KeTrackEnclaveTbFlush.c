/*
 * XREFs of KeTrackEnclaveTbFlush @ 0x1405138F4
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x140547F28 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x140549030 (MiProtectEnclavePages.c)
 * Callees:
 *     KiEncls @ 0x1403FCDC0 (KiEncls.c)
 *     KiEnclsStatus @ 0x140513938 (KiEnclsStatus.c)
 */

__int64 KeTrackEnclaveTbFlush()
{
  unsigned int v0; // eax

  if ( (KeFeatureBits & 0x10000000000LL) == 0 )
    return 3221225659LL;
  v0 = KiEncls(0xCu);
  return KiEnclsStatus(v0);
}
