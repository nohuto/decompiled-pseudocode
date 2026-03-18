/*
 * XREFs of PipIsDevNodeEffectivelyRemoved @ 0x14050C00C
 * Callers:
 *     IopRetryDeviceRemovalForReset @ 0x1408A3400 (IopRetryDeviceRemovalForReset.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PipIsDevNodeEffectivelyRemoved(__int64 a1)
{
  return (unsigned int)(*(_DWORD *)(a1 + 300) - 782) <= 6;
}
