/*
 * XREFs of MiProcessCommitIntact @ 0x140201704
 * Callers:
 *     MiProbeLeafPteAccess @ 0x14024E770 (MiProbeLeafPteAccess.c)
 *     MiSplitReducedCommitClonePage @ 0x14052B8C4 (MiSplitReducedCommitClonePage.c)
 * Callees:
 *     MiLocateAddress @ 0x14024BB30 (MiLocateAddress.c)
 *     MiGetSharedVm @ 0x1402AD3F0 (MiGetSharedVm.c)
 *     MiIsVadEligibleForCommitRelease @ 0x1405261D8 (MiIsVadEligibleForCommitRelease.c)
 */

_BOOL8 __fastcall MiProcessCommitIntact(__int64 a1)
{
  _KPROCESS *Process; // rcx
  char v3; // al
  unsigned __int64 *v4; // rcx
  _BOOL8 result; // rax
  unsigned __int64 v6; // rdx
  __int64 Address; // rax

  Process = KeGetCurrentThread()->ApcState.Process;
  v3 = HIBYTE(Process[1].IdealProcessorPadding[11]);
  v4 = &Process[1].ActiveProcessorsPadding[6];
  result = 1;
  if ( (v3 & 0x60) == 0x60 )
  {
    if ( *(_QWORD *)(MiGetSharedVm(v4, a1) + 32) )
    {
      if ( v6 < 0xFFFF800000000000uLL )
      {
        Address = MiLocateAddress(v6);
        if ( !Address || (unsigned int)MiIsVadEligibleForCommitRelease(Address) )
          return 0;
      }
    }
  }
  return result;
}
