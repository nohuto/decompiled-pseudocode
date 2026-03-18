/*
 * XREFs of KeRemoveEnclavePage @ 0x14056D650
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x1405A89EC (MiDecommitHardwareEnclavePages.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140A6A570 (MiDeleteAllHardwareEnclaves.c)
 *     MiDeleteEnclavePages @ 0x140A6A73C (MiDeleteEnclavePages.c)
 * Callees:
 *     KiEncls @ 0x1404205F0 (KiEncls.c)
 *     KiEnclsStatus @ 0x14056D6C8 (KiEnclsStatus.c)
 */

__int64 KeRemoveEnclavePage()
{
  unsigned int v0; // eax

  if ( !_bittest64(&KeFeatureBits, 0x28u) )
    return 3221225659LL;
  v0 = KiEncls(3u);
  return KiEnclsStatus(v0);
}
