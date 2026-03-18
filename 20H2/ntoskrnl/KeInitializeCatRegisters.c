/*
 * XREFs of KeInitializeCatRegisters @ 0x1403A7258
 * Callers:
 *     KiRestoreFeatureBits @ 0x140383740 (KiRestoreFeatureBits.c)
 *     KeInitSystem @ 0x140A4ABFC (KeInitSystem.c)
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
