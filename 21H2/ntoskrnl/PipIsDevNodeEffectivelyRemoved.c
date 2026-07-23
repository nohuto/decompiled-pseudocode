/*
 * XREFs of PipIsDevNodeEffectivelyRemoved @ 0x14050DD7C
 * Callers:
 *     IopRetryDeviceRemovalForReset @ 0x1408A0B30 (IopRetryDeviceRemovalForReset.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PipIsDevNodeEffectivelyRemoved(__int64 a1)
{
  return (unsigned int)(*(_DWORD *)(a1 + 300) - 782) <= 6;
}
