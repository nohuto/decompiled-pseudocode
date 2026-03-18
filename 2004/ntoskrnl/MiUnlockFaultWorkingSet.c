/*
 * XREFs of MiUnlockFaultWorkingSet @ 0x1403541F4
 * Callers:
 *     MiSoftFaultMappedView @ 0x14025AFC0 (MiSoftFaultMappedView.c)
 *     MiWaitForRotateToComplete @ 0x14035FBF0 (MiWaitForRotateToComplete.c)
 *     MiCheckHoldFaultForHotPatch @ 0x140538E0C (MiCheckHoldFaultForHotPatch.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x140213300 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
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
