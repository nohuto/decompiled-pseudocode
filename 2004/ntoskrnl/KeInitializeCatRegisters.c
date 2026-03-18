/*
 * XREFs of KeInitializeCatRegisters @ 0x1403A4E58
 * Callers:
 *     KiRestoreFeatureBits @ 0x140381A60 (KiRestoreFeatureBits.c)
 *     KeInitSystem @ 0x140A4495C (KeInitSystem.c)
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
