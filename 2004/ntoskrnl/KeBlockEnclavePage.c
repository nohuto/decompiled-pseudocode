/*
 * XREFs of KeBlockEnclavePage @ 0x14050FC5C
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x140544558 (MiDecommitHardwareEnclavePages.c)
 * Callees:
 *     KiEncls @ 0x1403F7F70 (KiEncls.c)
 *     KiEnclsStatus @ 0x140510008 (KiEnclsStatus.c)
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
