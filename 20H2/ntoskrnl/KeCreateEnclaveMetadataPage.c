/*
 * XREFs of KeCreateEnclaveMetadataPage @ 0x1405137AC
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x140547F28 (MiDecommitHardwareEnclavePages.c)
 *     MiInitializeEnclaveMetadataPage @ 0x140A958EC (MiInitializeEnclaveMetadataPage.c)
 * Callees:
 *     KiEncls @ 0x1403FCDC0 (KiEncls.c)
 */

__int64 KeCreateEnclaveMetadataPage()
{
  if ( (KeFeatureBits & 0x10000000000LL) == 0 )
    return 3221225659LL;
  KiEncls(0xAu);
  return 0LL;
}
