/*
 * XREFs of MiLockProbePacketWorkingSet @ 0x14023CB20
 * Callers:
 *     MiFaultInProbeAddress @ 0x14023C9F8 (MiFaultInProbeAddress.c)
 *     MmProbeAndLockSelectedPages @ 0x140247CF0 (MmProbeAndLockSelectedPages.c)
 *     MiProbeAndLockPacket @ 0x14031B810 (MiProbeAndLockPacket.c)
 *     MiProbeLeafPteAccess @ 0x14031C290 (MiProbeLeafPteAccess.c)
 *     MiSplitReducedCommitClonePage @ 0x1405845D4 (MiSplitReducedCommitClonePage.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 */

char __fastcall MiLockProbePacketWorkingSet(__int64 a1)
{
  int v2; // ecx
  __int64 v3; // rax

  *(_DWORD *)(a1 + 72) &= 0xFFFFFFCF;
  LOBYTE(v3) = MiLockWorkingSetShared(*(_QWORD *)(a1 + 104));
  v2 = *(_DWORD *)(a1 + 72);
  *(_BYTE *)(a1 + 76) = v3;
  LOBYTE(v3) = v2 & 0xF;
  if ( (v2 & 0xF) == 1 )
  {
    v3 = *(_QWORD *)(a1 + 88);
    if ( *(_QWORD *)(v3 + 1264) )
      *(_DWORD *)(a1 + 72) = v2 | 0x10;
  }
  return v3;
}
