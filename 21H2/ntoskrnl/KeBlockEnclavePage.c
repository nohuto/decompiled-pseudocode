/*
 * XREFs of KeBlockEnclavePage @ 0x14051530C
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x140549C68 (MiDecommitHardwareEnclavePages.c)
 * Callees:
 *     KiEncls @ 0x1403FF240 (KiEncls.c)
 *     KiEnclsStatus @ 0x1405156B8 (KiEnclsStatus.c)
 */

__int64 KeBlockEnclavePage()
{
  unsigned int v0; // eax

  if ( (KeFeatureBits & 0x10000000000LL) == 0 )
    return 3221225659LL;
  do
    v0 = KiEncls(9u);
  while ( v0 == 15 );
  return KiEnclsStatus(v0);
}
