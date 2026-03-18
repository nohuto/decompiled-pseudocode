/*
 * XREFs of MiUnlockProbePacketWorkingSet @ 0x140345CA8
 * Callers:
 *     MiProbeAndLockPages @ 0x14024D8E0 (MiProbeAndLockPages.c)
 *     MiProbeLeafPteAccess @ 0x14024E770 (MiProbeLeafPteAccess.c)
 *     MmStoreProbeAndLockPages @ 0x14031656C (MmStoreProbeAndLockPages.c)
 *     MmProbeAndLockSelectedPages @ 0x140345870 (MmProbeAndLockSelectedPages.c)
 *     MiProbeAndLockComplete @ 0x140345AE0 (MiProbeAndLockComplete.c)
 *     MiFaultInProbeAddress @ 0x140345B30 (MiFaultInProbeAddress.c)
 *     MiSplitReducedCommitClonePage @ 0x14052B8C4 (MiSplitReducedCommitClonePage.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 */

__int64 __fastcall MiUnlockProbePacketWorkingSet(__int64 a1)
{
  unsigned __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 32);
  if ( v1 )
  {
    MiUnlockPageTableInternal(*(_QWORD *)(a1 + 96), v1);
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  return MiUnlockWorkingSetShared(*(_QWORD *)(a1 + 96), *(_BYTE *)(a1 + 68));
}
