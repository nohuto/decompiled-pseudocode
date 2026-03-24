/*
 * XREFs of MiUnlockFaultWorkingSet @ 0x14028DD1C
 * Callers:
 *     MiSoftFaultMappedView @ 0x14028D5A0 (MiSoftFaultMappedView.c)
 *     MiWaitForRotateToComplete @ 0x1402D2AF0 (MiWaitForRotateToComplete.c)
 *     MiCheckHoldFaultForHotPatch @ 0x14053E2DC (MiCheckHoldFaultForHotPatch.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiUnlockWorkingSetExclusive @ 0x14021CAE0 (MiUnlockWorkingSetExclusive.c)
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
