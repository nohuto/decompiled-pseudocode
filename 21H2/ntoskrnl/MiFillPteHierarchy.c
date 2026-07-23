/*
 * XREFs of MiFillPteHierarchy @ 0x1403171C0
 * Callers:
 *     MiFindActualFaultingPte @ 0x14020A4E4 (MiFindActualFaultingPte.c)
 *     MmFreeContiguousMemory @ 0x140217BE0 (MmFreeContiguousMemory.c)
 *     MiClearNonPagedPtes @ 0x14021AB20 (MiClearNonPagedPtes.c)
 *     MiGetPhysicalAddress @ 0x140226874 (MiGetPhysicalAddress.c)
 *     MiVaToPfn @ 0x1402269B4 (MiVaToPfn.c)
 *     MiSmallVaStillMapsFrame @ 0x14024C6F8 (MiSmallVaStillMapsFrame.c)
 *     MiLockStealUserVm @ 0x140258F74 (MiLockStealUserVm.c)
 *     MiInitializePageFaultPacket @ 0x1403079C8 (MiInitializePageFaultPacket.c)
 *     MiBitmapRangeZeroEx @ 0x140314410 (MiBitmapRangeZeroEx.c)
 *     MiLockPoolCommitPageTable @ 0x140316120 (MiLockPoolCommitPageTable.c)
 *     MiInPagePageTable @ 0x140316B10 (MiInPagePageTable.c)
 *     MiSynchronizeSystemVa @ 0x14031C990 (MiSynchronizeSystemVa.c)
 *     MiDbgCopyMemoryTarget @ 0x140545D80 (MiDbgCopyMemoryTarget.c)
 *     MiUpdateForkMaps @ 0x14055B9E0 (MiUpdateForkMaps.c)
 *     MiMapProcessExecutable @ 0x1406C0600 (MiMapProcessExecutable.c)
 *     MiMapNewSession @ 0x14078724C (MiMapNewSession.c)
 *     MxMapVa @ 0x140A45B6C (MxMapVa.c)
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
