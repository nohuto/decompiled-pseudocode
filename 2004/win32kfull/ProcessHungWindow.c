/*
 * XREFs of ProcessHungWindow @ 0x1C00038FC
 * Callers:
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0033BEC (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     EditionHandleHungWindow @ 0x1C00E7740 (EditionHandleHungWindow.c)
 *     NtUserQueryWindow @ 0x1C00E7A90 (NtUserQueryWindow.c)
 *     xxxHungAppDemon @ 0x1C00E7C60 (xxxHungAppDemon.c)
 *     xxxRedrawHungWindow @ 0x1C0242114 (xxxRedrawHungWindow.c)
 * Callees:
 *     ?_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z @ 0x1C000394C (-_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z.c)
 *     IsHungWindow @ 0x1C00E7D90 (IsHungWindow.c)
 *     ShouldProcessHungWindow @ 0x1C00E82D8 (ShouldProcessHungWindow.c)
 */

__int64 ProcessHungWindow()
{
  unsigned int v0; // ebx
  __int64 v1; // rdi

  v0 = 0;
  v1 = ShouldProcessHungWindow();
  if ( v1 )
  {
    while ( *(_QWORD *)(v1 + 120) && (unsigned int)IsHungWindow() )
      v1 = *(_QWORD *)(v1 + 120);
    return (unsigned int)_GhostOwnerWindowAndOwnees((struct tagWND *)v1);
  }
  return v0;
}
