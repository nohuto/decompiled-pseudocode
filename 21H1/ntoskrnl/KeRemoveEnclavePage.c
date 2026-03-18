/*
 * XREFs of KeRemoveEnclavePage @ 0x14050F930
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x140543F08 (MiDecommitHardwareEnclavePages.c)
 *     MiDeleteAllHardwareEnclaves @ 0x1409ACCF0 (MiDeleteAllHardwareEnclaves.c)
 *     MiDeleteEnclavePages @ 0x1409ACE90 (MiDeleteEnclavePages.c)
 * Callees:
 *     KiEncls @ 0x1403F6CE0 (KiEncls.c)
 *     KiEnclsStatus @ 0x14050F9B8 (KiEnclsStatus.c)
 */

__int64 KeRemoveEnclavePage()
{
  unsigned int v0; // eax

  if ( (KeFeatureBits & 0x10000000000LL) == 0 )
    return 3221225659LL;
  v0 = KiEncls(3u);
  return KiEnclsStatus(v0);
}
