/*
 * XREFs of KeCreateEnclaveMetadataPage @ 0x14050FE7C
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x140544558 (MiDecommitHardwareEnclavePages.c)
 *     MiInitializeEnclaveMetadataPage @ 0x140A8FBEC (MiInitializeEnclaveMetadataPage.c)
 * Callees:
 *     KiEncls @ 0x1403F7F70 (KiEncls.c)
 */

__int64 KeCreateEnclaveMetadataPage()
{
  if ( (KeFeatureBits & 0x10000000000LL) == 0 )
    return 3221225659LL;
  KiEncls(0xAu);
  return 0LL;
}
