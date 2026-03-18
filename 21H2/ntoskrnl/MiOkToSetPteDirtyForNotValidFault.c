/*
 * XREFs of MiOkToSetPteDirtyForNotValidFault @ 0x140236E68
 * Callers:
 *     MiIssueHardFault @ 0x14027A1F0 (MiIssueHardFault.c)
 *     MiProbeLeafPteAccess @ 0x14031C290 (MiProbeLeafPteAccess.c)
 *     MiResolveTransitionFault @ 0x140325B30 (MiResolveTransitionFault.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiOkToSetPteDirtyForNotValidFault(__int64 a1, unsigned __int64 a2)
{
  _KPROCESS *Process; // rdx
  unsigned __int64 v3; // rax
  _BOOL8 result; // rax

  result = 1;
  if ( a2 <= 0x7FFFFFFEFFFFLL )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( a1 >= 0 && (Process[1].DirectoryTableBase & 0x1000000000LL) != 0 )
      return 0;
    v3 = Process[2].ActiveProcessors.StaticBitmap[2];
    if ( v3 )
    {
      if ( *(_QWORD *)(v3 + 24) != v3 + 24 )
        return 0;
    }
  }
  return result;
}
