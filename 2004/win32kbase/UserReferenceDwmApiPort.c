/*
 * XREFs of UserReferenceDwmApiPort @ 0x1C00A78E0
 * Callers:
 *     NtDCompositionRegisterThumbnailVisual @ 0x1C0003570 (NtDCompositionRegisterThumbnailVisual.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x1C01CEF60 (NtDCompositionRegisterVirtualDesktopVisual.c)
 *     NtDCompositionSetChildRootVisual @ 0x1C01CF0A0 (NtDCompositionSetChildRootVisual.c)
 * Callees:
 *     GreLockDwmState @ 0x1C00A5990 (GreLockDwmState.c)
 *     GreUnlockDwmState @ 0x1C00A59D0 (GreUnlockDwmState.c)
 *     GreIsSemaphoreOwnedOrSharedByCurrentThread @ 0x1C00A7950 (GreIsSemaphoreOwnedOrSharedByCurrentThread.c)
 */

PVOID UserReferenceDwmApiPort()
{
  int v0; // edi
  __int64 v1; // rdx
  __int64 v2; // rcx
  int v3; // r8d
  PVOID v4; // rbx

  v0 = 0;
  if ( !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread((PERESOURCE)ghsemDwmState) )
  {
    GreLockDwmState();
    v0 = 1;
  }
  v4 = g_pDwmApiPort;
  if ( g_pDwmApiPort )
    ObfReferenceObject(g_pDwmApiPort);
  if ( v0 )
    GreUnlockDwmState(v2, v1, v3);
  return v4;
}
