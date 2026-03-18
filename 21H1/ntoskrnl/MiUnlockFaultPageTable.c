/*
 * XREFs of MiUnlockFaultPageTable @ 0x14022B558
 * Callers:
 *     MiUserFault @ 0x14020CC40 (MiUserFault.c)
 *     MiUnlockSystemVa @ 0x14022B50C (MiUnlockSystemVa.c)
 *     MiReleaseFaultState @ 0x1402B4E68 (MiReleaseFaultState.c)
 * Callees:
 *     MiEmptyDeferredWorkingSetEntries @ 0x1402B6294 (MiEmptyDeferredWorkingSetEntries.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiUnlockFaultPageTable(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rdi
  __int64 result; // rax

  v1 = a1[2];
  v2 = *a1;
  if ( v1 )
  {
    if ( *((_WORD *)a1 + 5) )
    {
      MiEmptyDeferredWorkingSetEntries(a1);
      v1 = a1[2];
    }
    result = MiUnlockPageTableInternal(v2, v1);
    *((_BYTE *)a1 + 13) |= 2u;
    a1[2] = 0LL;
  }
  return result;
}
