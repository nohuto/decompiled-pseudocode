/*
 * XREFs of MiFillPteHierarchy @ 0x1402CC250
 * Callers:
 *     MiFindActualFaultingPte @ 0x140236BC4 (MiFindActualFaultingPte.c)
 *     MmFreeContiguousMemory @ 0x1402619D0 (MmFreeContiguousMemory.c)
 *     MiSynchronizeSystemVa @ 0x140299220 (MiSynchronizeSystemVa.c)
 *     MiLockPoolCommitPageTable @ 0x1402CAEC0 (MiLockPoolCommitPageTable.c)
 *     MiInPagePageTable @ 0x1402CBBA0 (MiInPagePageTable.c)
 *     MiBitmapRangeZeroEx @ 0x1402CEAB0 (MiBitmapRangeZeroEx.c)
 *     MiInitializePageFaultPacket @ 0x1402CFE30 (MiInitializePageFaultPacket.c)
 *     MiGetPhysicalAddress @ 0x1402FE554 (MiGetPhysicalAddress.c)
 *     MiVaToPfn @ 0x1402FE694 (MiVaToPfn.c)
 *     MiClearNonPagedPtes @ 0x140301340 (MiClearNonPagedPtes.c)
 *     MiSmallVaStillMapsFrame @ 0x14032C748 (MiSmallVaStillMapsFrame.c)
 *     MiLockStealUserVm @ 0x1403415B0 (MiLockStealUserVm.c)
 *     MiDbgCopyMemoryTarget @ 0x140544040 (MiDbgCopyMemoryTarget.c)
 *     MiUpdateForkMaps @ 0x140559CD0 (MiUpdateForkMaps.c)
 *     MiMapProcessExecutable @ 0x1406EF590 (MiMapProcessExecutable.c)
 *     MiMapNewSession @ 0x1407832AC (MiMapNewSession.c)
 *     MxMapVa @ 0x140A4504C (MxMapVa.c)
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
