/*
 * XREFs of MiFillPteHierarchy @ 0x1402B2490
 * Callers:
 *     MiSynchronizeSystemVa @ 0x14022B050 (MiSynchronizeSystemVa.c)
 *     MiLockPoolCommitPageTable @ 0x1402B1880 (MiLockPoolCommitPageTable.c)
 *     MiInPagePageTable @ 0x1402B1DE0 (MiInPagePageTable.c)
 *     MiBitmapRangeZeroEx @ 0x1402B3360 (MiBitmapRangeZeroEx.c)
 *     MiInitializePageFaultPacket @ 0x1402B3CF0 (MiInitializePageFaultPacket.c)
 *     MiClearNonPagedPtes @ 0x1402F1DCC (MiClearNonPagedPtes.c)
 *     MmFreeContiguousMemory @ 0x1402F9FE0 (MmFreeContiguousMemory.c)
 *     MiSmallVaStillMapsFrame @ 0x14031E0F8 (MiSmallVaStillMapsFrame.c)
 *     MiGetPhysicalAddress @ 0x14033BB94 (MiGetPhysicalAddress.c)
 *     MiVaToPfn @ 0x14033BCD4 (MiVaToPfn.c)
 *     MiFindActualFaultingPte @ 0x14034506C (MiFindActualFaultingPte.c)
 *     MiLockStealUserVm @ 0x14034C738 (MiLockStealUserVm.c)
 *     MiDbgCopyMemoryTarget @ 0x140540020 (MiDbgCopyMemoryTarget.c)
 *     MiUpdateForkMaps @ 0x140555CB0 (MiUpdateForkMaps.c)
 *     MiMapProcessExecutable @ 0x14064EB10 (MiMapProcessExecutable.c)
 *     MiMapNewSession @ 0x14077289C (MiMapNewSession.c)
 *     MxMapVa @ 0x140A45B74 (MxMapVa.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiFillPteHierarchy(unsigned __int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rcx

  v2 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *a2 = v2;
  v3 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  a2[1] = v3;
  result = 0xFFFFF68000000000uLL;
  v5 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  a2[2] = v5;
  a2[3] = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  return result;
}
