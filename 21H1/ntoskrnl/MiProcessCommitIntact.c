/*
 * XREFs of MiProcessCommitIntact @ 0x140201704
 * Callers:
 *     MiProbeLeafPteAccess @ 0x1402A77A0 (MiProbeLeafPteAccess.c)
 *     MiSplitReducedCommitClonePage @ 0x14052B274 (MiSplitReducedCommitClonePage.c)
 * Callees:
 *     MiGetSharedVm @ 0x14021A770 (MiGetSharedVm.c)
 *     MiLocateAddress @ 0x1402A4B60 (MiLocateAddress.c)
 *     MiIsVadEligibleForCommitRelease @ 0x140525B88 (MiIsVadEligibleForCommitRelease.c)
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
