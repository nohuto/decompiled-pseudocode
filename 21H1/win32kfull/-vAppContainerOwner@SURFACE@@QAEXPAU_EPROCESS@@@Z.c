/*
 * XREFs of ?vAppContainerOwner@SURFACE@@QAEXPAU_EPROCESS@@@Z @ 0xC680C
 * Callers:
 *     ?bSpDwmCreateLogicalSurface@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUtagSIZE@@PAPAV3@@Z @ 0xC6572 (-bSpDwmCreateLogicalSurface@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUtagSIZE@@PAPAV.c)
 *     _GreTransferSpriteStateToDwmState@8 @ 0xE11CA (_GreTransferSpriteStateToDwmState@8.c)
 * Callees:
 *     <none>
 */

void __thiscall SURFACE::vAppContainerOwner(SURFACE *this, struct _EPROCESS *a2)
{
  struct _EPROCESS *v2; // esi
  int v4; // eax

  v2 = a2;
  if ( a2 )
    v2 = UserIsProcessImmersiveAppContainer(a2) != 0 ? a2 : 0;
  GreAcquireHmgrSemaphore();
  v4 = HmgPentryFromPobj(this);
  if ( v2 )
    *(_BYTE *)(v4 + 11) |= 0x80u;
  else
    *(_BYTE *)(v4 + 11) &= ~0x80u;
  *((_DWORD *)this + 112) = v2;
  GreReleaseHmgrSemaphore();
}
