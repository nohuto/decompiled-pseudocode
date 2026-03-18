/*
 * XREFs of MiLockProbePacketWorkingSet @ 0x140316FB0
 * Callers:
 *     MiProbeAndLockPages @ 0x14026BB80 (MiProbeAndLockPages.c)
 *     MiProbeLeafPteAccess @ 0x14026CA10 (MiProbeLeafPteAccess.c)
 *     MmProbeAndLockSelectedPages @ 0x140316BC0 (MmProbeAndLockSelectedPages.c)
 *     MiFaultInProbeAddress @ 0x140316E80 (MiFaultInProbeAddress.c)
 *     MiSplitReducedCommitClonePage @ 0x14052F294 (MiSplitReducedCommitClonePage.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 */

char __fastcall MiLockProbePacketWorkingSet(__int64 a1)
{
  int v2; // ecx
  __int64 v3; // rax

  *(_DWORD *)(a1 + 64) &= 0xFFFFFFCF;
  LOBYTE(v3) = MiLockWorkingSetShared(*(_QWORD *)(a1 + 96));
  v2 = *(_DWORD *)(a1 + 64);
  *(_BYTE *)(a1 + 68) = v3;
  LOBYTE(v3) = v2 & 0xF;
  if ( (v2 & 0xF) == 1 )
  {
    v3 = *(_QWORD *)(a1 + 80);
    if ( *(_QWORD *)(v3 + 1264) )
      *(_DWORD *)(a1 + 64) = v2 | 0x10;
  }
  return v3;
}
