/*
 * XREFs of MiUnlockFaultPageTable @ 0x1402BE1D8
 * Callers:
 *     MiReleaseFaultState @ 0x14025BE38 (MiReleaseFaultState.c)
 *     MiUserFault @ 0x14029F750 (MiUserFault.c)
 *     MiUnlockSystemVa @ 0x1402BE18C (MiUnlockSystemVa.c)
 * Callees:
 *     MiEmptyDeferredWorkingSetEntries @ 0x14025D264 (MiEmptyDeferredWorkingSetEntries.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
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
