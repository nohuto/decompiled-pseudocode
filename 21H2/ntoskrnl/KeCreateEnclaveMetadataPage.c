/*
 * XREFs of KeCreateEnclaveMetadataPage @ 0x14051552C
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x140549C68 (MiDecommitHardwareEnclavePages.c)
 *     MiInitializeEnclaveMetadataPage @ 0x140A93754 (MiInitializeEnclaveMetadataPage.c)
 * Callees:
 *     KiEncls @ 0x1403FF240 (KiEncls.c)
 */

__int64 KeCreateEnclaveMetadataPage()
{
  if ( (KeFeatureBits & 0x10000000000LL) == 0 )
    return 3221225659LL;
  KiEncls(0xAu);
  return 0LL;
}
