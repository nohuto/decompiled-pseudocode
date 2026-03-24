/*
 * XREFs of MiUnlockProbePacketWorkingSet @ 0x1402B7B00
 * Callers:
 *     MiProbeAndLockPages @ 0x14020A860 (MiProbeAndLockPages.c)
 *     MiProbeLeafPteAccess @ 0x14020B6F0 (MiProbeLeafPteAccess.c)
 *     MmProbeAndLockSelectedPages @ 0x1402B7460 (MmProbeAndLockSelectedPages.c)
 *     MiProbeAndLockComplete @ 0x1402B76D0 (MiProbeAndLockComplete.c)
 *     MmStoreProbeAndLockPages @ 0x1402B7720 (MmStoreProbeAndLockPages.c)
 *     MiFaultInProbeAddress @ 0x1402B7988 (MiFaultInProbeAddress.c)
 *     MiSplitReducedCommitClonePage @ 0x140530D94 (MiSplitReducedCommitClonePage.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
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
