/*
 * XREFs of KeCreateEnclaveMetadataPage @ 0x14050F82C
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x140543F08 (MiDecommitHardwareEnclavePages.c)
 *     MiInitializeEnclaveMetadataPage @ 0x140A905FC (MiInitializeEnclaveMetadataPage.c)
 * Callees:
 *     KiEncls @ 0x1403F6CE0 (KiEncls.c)
 */

__int64 KeCreateEnclaveMetadataPage()
{
  if ( (KeFeatureBits & 0x10000000000LL) == 0 )
    return 3221225659LL;
  KiEncls(0xAu);
  return 0LL;
}
