/*
 * XREFs of KeInitializeCatRegisters @ 0x1403A46D8
 * Callers:
 *     KiRestoreFeatureBits @ 0x140381220 (KiRestoreFeatureBits.c)
 *     KeInitSystem @ 0x140A3F138 (KeInitSystem.c)
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
