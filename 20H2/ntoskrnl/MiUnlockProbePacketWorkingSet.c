/*
 * XREFs of MiUnlockProbePacketWorkingSet @ 0x140316FF8
 * Callers:
 *     MiProbeAndLockPages @ 0x14026BB80 (MiProbeAndLockPages.c)
 *     MiProbeLeafPteAccess @ 0x14026CA10 (MiProbeLeafPteAccess.c)
 *     MmProbeAndLockSelectedPages @ 0x140316BC0 (MmProbeAndLockSelectedPages.c)
 *     MiProbeAndLockComplete @ 0x140316E30 (MiProbeAndLockComplete.c)
 *     MiFaultInProbeAddress @ 0x140316E80 (MiFaultInProbeAddress.c)
 *     MmStoreProbeAndLockPages @ 0x140351898 (MmStoreProbeAndLockPages.c)
 *     MiSplitReducedCommitClonePage @ 0x14052F294 (MiSplitReducedCommitClonePage.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiUnlockProbePacketWorkingSet(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 32) )
  {
    MiUnlockPageTableInternal(*(_QWORD *)(a1 + 96));
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  return MiUnlockWorkingSetShared(*(_QWORD *)(a1 + 96), *(_BYTE *)(a1 + 68));
}
