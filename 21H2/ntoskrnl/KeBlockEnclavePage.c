/*
 * XREFs of KeBlockEnclavePage @ 0x14056D354
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x1405A89EC (MiDecommitHardwareEnclavePages.c)
 * Callees:
 *     KiEncls @ 0x1404205F0 (KiEncls.c)
 *     KiEnclsStatus @ 0x14056D6C8 (KiEnclsStatus.c)
 */

__int64 KeBlockEnclavePage()
{
  unsigned int v0; // eax

  if ( !_bittest64(&KeFeatureBits, 0x28u) )
    return 3221225659LL;
  do
    v0 = KiEncls(9u);
  while ( v0 == 15 );
  return KiEnclsStatus(v0);
}
