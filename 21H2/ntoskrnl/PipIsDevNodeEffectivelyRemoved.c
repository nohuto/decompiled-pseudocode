/*
 * XREFs of PipIsDevNodeEffectivelyRemoved @ 0x14050DB3C
 * Callers:
 *     IopRetryDeviceRemovalForReset @ 0x1408A09D0 (IopRetryDeviceRemovalForReset.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PipIsDevNodeEffectivelyRemoved(__int64 a1)
{
  return (unsigned int)(*(_DWORD *)(a1 + 300) - 782) <= 6;
}
