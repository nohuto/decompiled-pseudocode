/*
 * XREFs of MiFillPteHierarchy @ 0x140352E50
 * Callers:
 *     MmFreeContiguousMemory @ 0x140213DA0 (MmFreeContiguousMemory.c)
 *     MiClearNonPagedPtes @ 0x140227ED0 (MiClearNonPagedPtes.c)
 *     MiBitmapRangeZeroEx @ 0x1402354A4 (MiBitmapRangeZeroEx.c)
 *     MiSmallVaStillMapsFrame @ 0x14024F014 (MiSmallVaStillMapsFrame.c)
 *     MiInitializePageFaultPacket @ 0x14026C744 (MiInitializePageFaultPacket.c)
 *     MiPfCompleteInPageSupport @ 0x14027938C (MiPfCompleteInPageSupport.c)
 *     MiSynchronizeSystemVa @ 0x140279DB0 (MiSynchronizeSystemVa.c)
 *     MiGetPhysicalAddress @ 0x14027B6A4 (MiGetPhysicalAddress.c)
 *     MiFindActualFaultingPte @ 0x1402804F0 (MiFindActualFaultingPte.c)
 *     MiLockStealUserVm @ 0x1402EACBC (MiLockStealUserVm.c)
 *     MiLockPoolCommitPageTable @ 0x1403528A4 (MiLockPoolCommitPageTable.c)
 *     MiInPagePageTable @ 0x140353230 (MiInPagePageTable.c)
 *     MiVaToPfnEx @ 0x1403B8520 (MiVaToPfnEx.c)
 *     MiDbgCopyMemoryTarget @ 0x1405A47A0 (MiDbgCopyMemoryTarget.c)
 *     MiUpdateForkMaps @ 0x1405BBD5C (MiUpdateForkMaps.c)
 *     MiMapProcessExecutable @ 0x1407557F0 (MiMapProcessExecutable.c)
 *     MxMapVa @ 0x140AF61F4 (MxMapVa.c)
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
