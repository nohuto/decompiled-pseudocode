/*
 * XREFs of KeRemoveEnclavePage @ 0x1405153F0
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x140549A28 (MiDecommitHardwareEnclavePages.c)
 *     MiDeleteAllHardwareEnclaves @ 0x1409B09C0 (MiDeleteAllHardwareEnclaves.c)
 *     MiDeleteEnclavePages @ 0x1409B0B60 (MiDeleteEnclavePages.c)
 * Callees:
 *     KiEncls @ 0x1403FF060 (KiEncls.c)
 *     KiEnclsStatus @ 0x140515478 (KiEnclsStatus.c)
 */

__int64 KeRemoveEnclavePage()
{
  unsigned int v0; // eax

  if ( (KeFeatureBits & 0x10000000000LL) == 0 )
    return 3221225659LL;
  v0 = KiEncls(3u);
  return KiEnclsStatus(v0);
}
