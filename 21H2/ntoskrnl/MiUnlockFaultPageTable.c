/*
 * XREFs of MiUnlockFaultPageTable @ 0x14031CE98
 * Callers:
 *     MiUserFault @ 0x1402B2070 (MiUserFault.c)
 *     MiReleaseFaultState @ 0x14031A244 (MiReleaseFaultState.c)
 *     MiUnlockSystemVa @ 0x14031CE4C (MiUnlockSystemVa.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x140326744 (MiEmptyDeferredWorkingSetEntries.c)
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
      MiEmptyDeferredWorkingSetEntries(a1);
      v1 = *(_QWORD *)(a1 + 16);
    }
    MiUnlockPageTableInternal(v2, v1);
    *(_BYTE *)(a1 + 13) |= 2u;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
