/*
 * XREFs of _ProcessHungWindow@4 @ 0xC2576
 * Callers:
 *     ?xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x17936 (-xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _xxxHungAppDemon@16 @ 0x7336E (_xxxHungAppDemon@16.c)
 *     _NtUserQueryWindow@8 @ 0x920B2 (_NtUserQueryWindow@8.c)
 *     _xxxRedrawHungWindow@8 @ 0xCC8B8 (_xxxRedrawHungWindow@8.c)
 *     _EditionHandleHungWindow@4 @ 0x1704C2 (_EditionHandleHungWindow@4.c)
 * Callees:
 *     _IsHungWindow@4 @ 0x738B4 (_IsHungWindow@4.c)
 *     ?_GhostOwnerWindowAndOwnees@@YGHPAUtagWND@@@Z @ 0xC2514 (-_GhostOwnerWindowAndOwnees@@YGHPAUtagWND@@@Z.c)
 *     _ShouldProcessHungWindow@4 @ 0xC25A4 (_ShouldProcessHungWindow@4.c)
 */

int __thiscall ProcessHungWindow(void *this)
{
  int v1; // edi
  _DWORD *v2; // esi

  v1 = 0;
  v2 = (_DWORD *)ShouldProcessHungWindow(this);
  if ( v2 )
  {
    while ( v2[16] && IsHungWindow(v2[16]) )
      v2 = (_DWORD *)v2[16];
    return _GhostOwnerWindowAndOwnees(v2);
  }
  return v1;
}
