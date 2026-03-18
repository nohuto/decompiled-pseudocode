/*
 * XREFs of MiUnlockProbePacketWorkingSet @ 0x14023CB68
 * Callers:
 *     MiFaultInProbeAddress @ 0x14023C9F8 (MiFaultInProbeAddress.c)
 *     MmProbeAndLockSelectedPages @ 0x140247CF0 (MmProbeAndLockSelectedPages.c)
 *     MiProbeAndLockPacket @ 0x14031B810 (MiProbeAndLockPacket.c)
 *     MiProbeLeafPteAccess @ 0x14031C290 (MiProbeLeafPteAccess.c)
 *     MmStoreProbeAndLockPages @ 0x140385584 (MmStoreProbeAndLockPages.c)
 *     MiSplitReducedCommitClonePage @ 0x1405845D4 (MiSplitReducedCommitClonePage.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 */

__int64 __fastcall MiUnlockProbePacketWorkingSet(__int64 a1)
{
  unsigned __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 40);
  if ( v1 )
  {
    MiUnlockPageTableInternal(*(_QWORD *)(a1 + 104), v1);
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  LOBYTE(v1) = *(_BYTE *)(a1 + 76);
  return MiUnlockWorkingSetShared(*(_QWORD *)(a1 + 104), v1);
}
