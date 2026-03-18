/*
 * XREFs of MiUnlockFaultPageTable @ 0x14027A9D0
 * Callers:
 *     MiUnlockSystemVa @ 0x14027A168 (MiUnlockSystemVa.c)
 *     MiIssueHardFault @ 0x14027A1F0 (MiIssueHardFault.c)
 *     MiReleaseFaultState @ 0x14027DA5C (MiReleaseFaultState.c)
 *     MiResolvePageTablePage @ 0x14031D740 (MiResolvePageTablePage.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x14022FC80 (MiEmptyDeferredWorkingSetEntries.c)
 */

void __fastcall MiUnlockFaultPageTable(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 v2; // rdi

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_QWORD *)a1;
  if ( v1 )
  {
    if ( *(_WORD *)(a1 + 10) )
    {
      MiEmptyDeferredWorkingSetEntries((__int64 *)a1);
      v1 = *(_QWORD *)(a1 + 16);
    }
    MiUnlockPageTableInternal(v2, v1);
    *(_BYTE *)(a1 + 13) |= 2u;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
