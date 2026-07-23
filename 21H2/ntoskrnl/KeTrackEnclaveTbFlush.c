/*
 * XREFs of KeTrackEnclaveTbFlush @ 0x140515674
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x140549C68 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x14054AD70 (MiProtectEnclavePages.c)
 * Callees:
 *     KiEncls @ 0x1403FF240 (KiEncls.c)
 *     KiEnclsStatus @ 0x1405156B8 (KiEnclsStatus.c)
 */

__int64 KeTrackEnclaveTbFlush()
{
  unsigned int v0; // eax

  if ( (KeFeatureBits & 0x10000000000LL) == 0 )
    return 3221225659LL;
  v0 = KiEncls(0xCu);
  return KiEnclsStatus(v0);
}
