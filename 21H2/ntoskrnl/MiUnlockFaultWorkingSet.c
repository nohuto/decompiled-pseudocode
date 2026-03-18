/*
 * XREFs of MiUnlockFaultWorkingSet @ 0x14024D050
 * Callers:
 *     MiWaitForRotateToComplete @ 0x140201E8C (MiWaitForRotateToComplete.c)
 *     MiSoftFaultMappedView @ 0x140270A00 (MiSoftFaultMappedView.c)
 *     MiCheckHoldFaultForHotPatch @ 0x1405A2E3C (MiCheckHoldFaultForHotPatch.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockWorkingSetExclusive @ 0x14030FA80 (MiUnlockWorkingSetExclusive.c)
 */

__int64 __fastcall MiUnlockFaultWorkingSet(__int64 *a1, __int64 a2)
{
  bool v2; // zf
  __int64 v3; // rcx

  LOBYTE(a2) = *((_BYTE *)a1 + 12);
  v2 = (*((_BYTE *)a1 + 13) & 1) == 0;
  v3 = *a1;
  if ( v2 )
    return MiUnlockWorkingSetShared(v3, a2);
  else
    return MiUnlockWorkingSetExclusive(v3, a2);
}
