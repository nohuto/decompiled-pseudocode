/*
 * XREFs of MiFillPteHierarchy @ 0x14030C470
 * Callers:
 *     MiLockStealUserVm @ 0x14026AFD4 (MiLockStealUserVm.c)
 *     MiFindActualFaultingPte @ 0x14028D344 (MiFindActualFaultingPte.c)
 *     MmFreeContiguousMemory @ 0x140295F20 (MmFreeContiguousMemory.c)
 *     MiClearNonPagedPtes @ 0x140296238 (MiClearNonPagedPtes.c)
 *     MiGetPhysicalAddress @ 0x1402A8734 (MiGetPhysicalAddress.c)
 *     MiVaToPfn @ 0x1402A8874 (MiVaToPfn.c)
 *     MiSmallVaStillMapsFrame @ 0x1402CE1F8 (MiSmallVaStillMapsFrame.c)
 *     MiInitializePageFaultPacket @ 0x1402FCC78 (MiInitializePageFaultPacket.c)
 *     MiBitmapRangeZeroEx @ 0x1403096C0 (MiBitmapRangeZeroEx.c)
 *     MiLockPoolCommitPageTable @ 0x14030B3D0 (MiLockPoolCommitPageTable.c)
 *     MiInPagePageTable @ 0x14030BDC0 (MiInPagePageTable.c)
 *     MiSynchronizeSystemVa @ 0x140311C40 (MiSynchronizeSystemVa.c)
 *     MiDbgCopyMemoryTarget @ 0x140545B40 (MiDbgCopyMemoryTarget.c)
 *     MiUpdateForkMaps @ 0x14055B7A0 (MiUpdateForkMaps.c)
 *     MiMapProcessExecutable @ 0x140711FB0 (MiMapProcessExecutable.c)
 *     MiMapNewSession @ 0x14078708C (MiMapNewSession.c)
 *     MxMapVa @ 0x140A44B6C (MxMapVa.c)
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
