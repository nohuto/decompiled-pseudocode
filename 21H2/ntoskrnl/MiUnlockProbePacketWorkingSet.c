/*
 * XREFs of MiUnlockProbePacketWorkingSet @ 0x140235CE0
 * Callers:
 *     MmProbeAndLockSelectedPages @ 0x140235640 (MmProbeAndLockSelectedPages.c)
 *     MiProbeAndLockComplete @ 0x1402358B0 (MiProbeAndLockComplete.c)
 *     MmStoreProbeAndLockPages @ 0x140235900 (MmStoreProbeAndLockPages.c)
 *     MiFaultInProbeAddress @ 0x140235B68 (MiFaultInProbeAddress.c)
 *     MiProbeAndLockPages @ 0x1402AF160 (MiProbeAndLockPages.c)
 *     MiProbeLeafPteAccess @ 0x1402AFFF0 (MiProbeLeafPteAccess.c)
 *     MiSplitReducedCommitClonePage @ 0x140530FD4 (MiSplitReducedCommitClonePage.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
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
  LOBYTE(v1) = *(_BYTE *)(a1 + 68);
  return MiUnlockWorkingSetShared(*(_QWORD *)(a1 + 96), v1);
}
