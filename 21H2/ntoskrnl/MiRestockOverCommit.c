/*
 * XREFs of MiRestockOverCommit @ 0x1405B3340
 * Callers:
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     MiFreeMdlPageRun @ 0x1402C3410 (MiFreeMdlPageRun.c)
 *     MiFinishHardFault @ 0x140334C40 (MiFinishHardFault.c)
 *     MiRemoveLockedPageCharge @ 0x1403377E0 (MiRemoveLockedPageCharge.c)
 *     MiIncreaseCommitLimits @ 0x1403CF51C (MiIncreaseCommitLimits.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiRestockOverCommit(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rax

  v2 = *(_QWORD *)(a1 + 16056);
  if ( v2 )
  {
    v3 = a2;
    if ( a2 > v2 )
      v3 = *(_QWORD *)(a1 + 16056);
    *(_QWORD *)(a1 + 16056) = v2 - v3;
    a2 -= v3;
  }
  return a2;
}
