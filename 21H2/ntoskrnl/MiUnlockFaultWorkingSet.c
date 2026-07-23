/*
 * XREFs of MiUnlockFaultWorkingSet @ 0x14020AEBC
 * Callers:
 *     MiSoftFaultMappedView @ 0x14020A740 (MiSoftFaultMappedView.c)
 *     MiWaitForRotateToComplete @ 0x140251070 (MiWaitForRotateToComplete.c)
 *     MiCheckHoldFaultForHotPatch @ 0x14053E51C (MiCheckHoldFaultForHotPatch.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402C13E0 (MiUnlockWorkingSetExclusive.c)
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
