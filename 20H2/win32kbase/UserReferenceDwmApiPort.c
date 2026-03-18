/*
 * XREFs of UserReferenceDwmApiPort @ 0x1C0067000
 * Callers:
 *     NtDCompositionRegisterThumbnailVisual @ 0x1C0003570 (NtDCompositionRegisterThumbnailVisual.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x1C01CCBE0 (NtDCompositionRegisterVirtualDesktopVisual.c)
 *     NtDCompositionSetChildRootVisual @ 0x1C01CCD20 (NtDCompositionSetChildRootVisual.c)
 * Callees:
 *     GreLockDwmState @ 0x1C005E790 (GreLockDwmState.c)
 *     GreUnlockDwmState @ 0x1C005E7D0 (GreUnlockDwmState.c)
 *     GreIsSemaphoreOwnedOrSharedByCurrentThread @ 0x1C0067070 (GreIsSemaphoreOwnedOrSharedByCurrentThread.c)
 */

PVOID UserReferenceDwmApiPort()
{
  int v0; // edi
  PVOID v1; // rbx

  v0 = 0;
  if ( !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread((PERESOURCE)ghsemDwmState) )
  {
    GreLockDwmState();
    v0 = 1;
  }
  v1 = g_pDwmApiPort;
  if ( g_pDwmApiPort )
    ObfReferenceObject(g_pDwmApiPort);
  if ( v0 )
    GreUnlockDwmState();
  return v1;
}
