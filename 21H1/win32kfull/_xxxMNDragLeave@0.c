/*
 * XREFs of _xxxMNDragLeave@0 @ 0x1A7618
 * Callers:
 *     _NtUserMNDragLeave@0 @ 0x1662D8 (_NtUserMNDragLeave@0.c)
 * Callees:
 *     ?xxxUnlockMenuStateInternal@@YGHPAUtagMENUSTATE@@H@Z @ 0x184390 (-xxxUnlockMenuStateInternal@@YGHPAUtagMENUSTATE@@H@Z.c)
 *     _UnlockMFMWFPWindow@4 @ 0x19784F (_UnlockMFMWFPWindow@4.c)
 *     _xxxMNSetGapState@16 @ 0x1A77B8 (_xxxMNSetGapState@16.c)
 */

int __stdcall xxxMNDragLeave()
{
  int v0; // edi

  v0 = *(_DWORD *)(_gptiCurrent + 328);
  if ( !v0 )
    return 0;
  ++*(_DWORD *)(v0 + 28);
  xxxMNSetGapState(*(_DWORD *)(v0 + 64), 0);
  UnlockMFMWFPWindow((void **)(v0 + 56));
  *(_DWORD *)(v0 + 60) = -1;
  *(_DWORD *)(v0 + 64) = 0;
  *(_DWORD *)(v0 + 4) &= ~0x8000u;
  xxxUnlockMenuStateInternal(v0, 1);
  return 1;
}
