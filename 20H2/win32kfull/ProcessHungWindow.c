/*
 * XREFs of ProcessHungWindow @ 0x1C000379C
 * Callers:
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00BB8B8 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     NtUserQueryWindow @ 0x1C00C8330 (NtUserQueryWindow.c)
 *     xxxHungAppDemon @ 0x1C00CADB0 (xxxHungAppDemon.c)
 *     EditionHandleHungWindow @ 0x1C0122B90 (EditionHandleHungWindow.c)
 *     xxxRedrawHungWindow @ 0x1C0240E74 (xxxRedrawHungWindow.c)
 * Callees:
 *     ?_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z @ 0x1C00037EC (-_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z.c)
 *     IsHungWindow @ 0x1C00CAEE0 (IsHungWindow.c)
 *     ShouldProcessHungWindow @ 0x1C011EBC0 (ShouldProcessHungWindow.c)
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
