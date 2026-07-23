/*
 * XREFs of KeGetXSaveFeatureFlags @ 0x1403AE470
 * Callers:
 *     KiInitializeKernel @ 0x14099E6F0 (KiInitializeKernel.c)
 * Callees:
 *     <none>
 */

__int64 KeGetXSaveFeatureFlags()
{
  unsigned int v0; // edx

  v0 = 0;
  if ( MEMORY[0xFFFFF780000003D8] )
  {
    v0 = 8 * (MEMORY[0xFFFFF780000003EC] & 1);
    if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
      return (8 * (MEMORY[0xFFFFF780000003EC] & 1)) | 0x10u;
  }
  return v0;
}
