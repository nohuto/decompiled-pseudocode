/*
 * XREFs of MiUnlockProbePacketWorkingSet @ 0x140307EA8
 * Callers:
 *     MiProbeAndLockPages @ 0x1402A6910 (MiProbeAndLockPages.c)
 *     MiProbeLeafPteAccess @ 0x1402A77A0 (MiProbeLeafPteAccess.c)
 *     MmProbeAndLockSelectedPages @ 0x140307A70 (MmProbeAndLockSelectedPages.c)
 *     MiProbeAndLockComplete @ 0x140307CE0 (MiProbeAndLockComplete.c)
 *     MiFaultInProbeAddress @ 0x140307D30 (MiFaultInProbeAddress.c)
 *     MmStoreProbeAndLockPages @ 0x1403458AC (MmStoreProbeAndLockPages.c)
 *     MiSplitReducedCommitClonePage @ 0x14052B274 (MiSplitReducedCommitClonePage.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiUnlockProbePacketWorkingSet(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdx

  v3 = *(_QWORD *)(a1 + 32);
  if ( v3 )
  {
    MiUnlockPageTableInternal(*(_QWORD *)(a1 + 96), v3, a3);
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  return MiUnlockWorkingSetShared(*(_QWORD *)(a1 + 96), *(_BYTE *)(a1 + 68));
}
