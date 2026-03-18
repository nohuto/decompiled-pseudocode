/*
 * XREFs of MiUnlockFaultPageTable @ 0x140299728
 * Callers:
 *     MiUserFault @ 0x14026EA90 (MiUserFault.c)
 *     MiUnlockSystemVa @ 0x1402996DC (MiUnlockSystemVa.c)
 *     MiReleaseFaultState @ 0x1402D0698 (MiReleaseFaultState.c)
 * Callees:
 *     MiEmptyDeferredWorkingSetEntries @ 0x14029F34C (MiEmptyDeferredWorkingSetEntries.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiUnlockFaultPageTable(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 result; // rax

  v1 = *a1;
  if ( a1[2] )
  {
    if ( *((_WORD *)a1 + 5) )
      MiEmptyDeferredWorkingSetEntries(a1);
    result = MiUnlockPageTableInternal(v1);
    *((_BYTE *)a1 + 13) |= 2u;
    a1[2] = 0LL;
  }
  return result;
}
