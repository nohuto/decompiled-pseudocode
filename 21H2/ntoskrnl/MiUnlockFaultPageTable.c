/*
 * XREFs of MiUnlockFaultPageTable @ 0x140312148
 * Callers:
 *     MiUserFault @ 0x14020D770 (MiUserFault.c)
 *     MiReleaseFaultState @ 0x14030F4F4 (MiReleaseFaultState.c)
 *     MiUnlockSystemVa @ 0x1403120FC (MiUnlockSystemVa.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x14031B9F4 (MiEmptyDeferredWorkingSetEntries.c)
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
