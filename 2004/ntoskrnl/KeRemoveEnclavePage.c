/*
 * XREFs of KeRemoveEnclavePage @ 0x14050FF80
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x140544558 (MiDecommitHardwareEnclavePages.c)
 *     MiDeleteAllHardwareEnclaves @ 0x1409ADB50 (MiDeleteAllHardwareEnclaves.c)
 *     MiDeleteEnclavePages @ 0x1409ADCF0 (MiDeleteEnclavePages.c)
 * Callees:
 *     KiEncls @ 0x1403F7F70 (KiEncls.c)
 *     KiEnclsStatus @ 0x140510008 (KiEnclsStatus.c)
 */

__int64 KeRemoveEnclavePage()
{
  unsigned int v0; // eax

  if ( (KeFeatureBits & 0x10000000000LL) == 0 )
    return 3221225659LL;
  v0 = KiEncls(3u);
  return KiEnclsStatus(v0);
}
