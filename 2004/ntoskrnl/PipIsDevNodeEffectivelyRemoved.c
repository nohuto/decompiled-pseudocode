/*
 * XREFs of PipIsDevNodeEffectivelyRemoved @ 0x1405086DC
 * Callers:
 *     IopRetryDeviceRemovalForReset @ 0x14089D8D0 (IopRetryDeviceRemovalForReset.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PipIsDevNodeEffectivelyRemoved(__int64 a1)
{
  return (unsigned int)(*(_DWORD *)(a1 + 300) - 782) <= 6;
}
