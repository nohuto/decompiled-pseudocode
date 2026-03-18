/*
 * XREFs of MiUnlockFaultWorkingSet @ 0x14020277C
 * Callers:
 *     MiSoftFaultMappedView @ 0x140202000 (MiSoftFaultMappedView.c)
 *     MiWaitForRotateToComplete @ 0x140330980 (MiWaitForRotateToComplete.c)
 *     MiCheckHoldFaultForHotPatch @ 0x14053C7DC (MiCheckHoldFaultForHotPatch.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027F090 (MiUnlockWorkingSetExclusive.c)
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
