/*
 * XREFs of ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C011D504
 * Callers:
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C0029DD0 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C0053B00 (GreTransferSpriteStateToDwmState.c)
 * Callees:
 *     <none>
 */

void __fastcall SURFACE::vAppContainerOwner(SURFACE *this, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v4; // rax

  v2 = a2;
  if ( a2 )
    v2 = -(__int64)((unsigned int)UserIsProcessImmersiveAppContainer(a2) != 0) & a2;
  GreAcquireHmgrSemaphore();
  v4 = HmgPentryFromPobj(this);
  if ( v2 )
    *(_BYTE *)(v4 + 15) |= 0x80u;
  else
    *(_BYTE *)(v4 + 15) &= ~0x80u;
  *((_QWORD *)this + 80) = v2;
  GreReleaseHmgrSemaphore();
}
