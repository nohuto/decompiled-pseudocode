/*
 * XREFs of KeRemoveEnclavePage @ 0x1405138B0
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x140547F28 (MiDecommitHardwareEnclavePages.c)
 *     MiDeleteAllHardwareEnclaves @ 0x1409B3AC0 (MiDeleteAllHardwareEnclaves.c)
 *     MiDeleteEnclavePages @ 0x1409B3C60 (MiDeleteEnclavePages.c)
 * Callees:
 *     KiEncls @ 0x1403FCDC0 (KiEncls.c)
 *     KiEnclsStatus @ 0x140513938 (KiEnclsStatus.c)
 */

__int64 KeRemoveEnclavePage()
{
  unsigned int v0; // eax

  if ( (KeFeatureBits & 0x10000000000LL) == 0 )
    return 3221225659LL;
  v0 = KiEncls(3u);
  return KiEnclsStatus(v0);
}
