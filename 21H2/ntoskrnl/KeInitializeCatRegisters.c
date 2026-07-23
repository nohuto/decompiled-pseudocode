/*
 * XREFs of KeInitializeCatRegisters @ 0x1403A7C68
 * Callers:
 *     KiRestoreFeatureBits @ 0x140383EE0 (KiRestoreFeatureBits.c)
 *     KeInitSystem @ 0x140A4D33C (KeInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 KeInitializeCatRegisters()
{
  __int64 result; // rax

  if ( KiCacheIsoBitmap )
  {
    if ( (KeFeatureBits & 0x100000000000LL) != 0 )
    {
      result = (unsigned int)KiCacheIsoBitmap;
      __writemsr(0xC91u, (unsigned int)KiCacheIsoBitmap);
    }
  }
  return result;
}
