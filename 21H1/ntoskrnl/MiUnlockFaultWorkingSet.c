/*
 * XREFs of MiUnlockFaultWorkingSet @ 0x14031667C
 * Callers:
 *     MiSoftFaultMappedView @ 0x1402B3FF0 (MiSoftFaultMappedView.c)
 *     MiWaitForRotateToComplete @ 0x1403222E0 (MiWaitForRotateToComplete.c)
 *     MiCheckHoldFaultForHotPatch @ 0x1405387BC (MiCheckHoldFaultForHotPatch.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiUnlockWorkingSetExclusive @ 0x14026C350 (MiUnlockWorkingSetExclusive.c)
 */

void __fastcall MiUnlockFaultWorkingSet(__int64 a1)
{
  unsigned __int8 v1; // dl
  bool v2; // zf
  __int64 v3; // rcx

  v1 = *(_BYTE *)(a1 + 12);
  v2 = (*(_BYTE *)(a1 + 13) & 1) == 0;
  v3 = *(_QWORD *)a1;
  if ( v2 )
    MiUnlockWorkingSetShared(v3, v1);
  else
    MiUnlockWorkingSetExclusive(v3, v1);
}
