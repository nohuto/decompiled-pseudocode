/*
 * XREFs of KeInitializeCatRegisters @ 0x1403B6CE8
 * Callers:
 *     KiRestoreFeatureBits @ 0x14038D164 (KiRestoreFeatureBits.c)
 *     KeInitSystem @ 0x140B03800 (KeInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 KeInitializeCatRegisters()
{
  __int64 result; // rax

  if ( KiCacheIsoBitmap )
  {
    if ( _bittest64(&KeFeatureBits, 0x2Cu) )
    {
      result = (unsigned int)KiCacheIsoBitmap;
      __writemsr(0xC91u, (unsigned int)KiCacheIsoBitmap);
    }
  }
  return result;
}
