/*
 * XREFs of MiProcessCommitIntact @ 0x140580CE0
 * Callers:
 *     MiProbeLeafPteAccess @ 0x14031C290 (MiProbeLeafPteAccess.c)
 *     MiSplitReducedCommitClonePage @ 0x1405845D4 (MiSplitReducedCommitClonePage.c)
 * Callees:
 *     MiUnlockVadTree @ 0x1402806E0 (MiUnlockVadTree.c)
 *     MiGetSharedVm @ 0x140282AD0 (MiGetSharedVm.c)
 *     MiLockVadTree @ 0x1402ED128 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x1403126F0 (MiLocateAddress.c)
 *     MiIsVadEligibleForCommitRelease @ 0x140580028 (MiIsVadEligibleForCommitRelease.c)
 */

__int64 __fastcall MiProcessCommitIntact(unsigned __int64 a1)
{
  unsigned int v2; // ebx
  _KPROCESS *Process; // rcx
  char v4; // al
  __int64 v5; // rcx
  __int64 **Address; // rax

  v2 = 1;
  Process = KeGetCurrentThread()->ApcState.Process;
  v4 = HIBYTE(Process[1].IdealProcessor[31]);
  v5 = (__int64)&Process[1].ActiveProcessors.StaticBitmap[26];
  if ( (v4 & 0x60) == 0x60 && *((_QWORD *)MiGetSharedVm(v5) + 4) && a1 < 0xFFFF800000000000uLL )
  {
    MiLockVadTree(1);
    Address = MiLocateAddress(a1);
    if ( !Address || MiIsVadEligibleForCommitRelease((__int64)Address) )
      v2 = 0;
    MiUnlockVadTree(1, 0x11u);
  }
  return v2;
}
