/*
 * XREFs of MiFillPteHierarchy @ 0x140259460
 * Callers:
 *     MiLockPoolCommitPageTable @ 0x140258850 (MiLockPoolCommitPageTable.c)
 *     MiInPagePageTable @ 0x140258DB0 (MiInPagePageTable.c)
 *     MiBitmapRangeZeroEx @ 0x14025A330 (MiBitmapRangeZeroEx.c)
 *     MiInitializePageFaultPacket @ 0x14025ACC0 (MiInitializePageFaultPacket.c)
 *     MiSynchronizeSystemVa @ 0x1402BDCD0 (MiSynchronizeSystemVa.c)
 *     MiFindActualFaultingPte @ 0x140315D2C (MiFindActualFaultingPte.c)
 *     MiLockStealUserVm @ 0x14031D3F8 (MiLockStealUserVm.c)
 *     MiSmallVaStillMapsFrame @ 0x140320F80 (MiSmallVaStillMapsFrame.c)
 *     MiClearNonPagedPtes @ 0x14032DB6C (MiClearNonPagedPtes.c)
 *     MmFreeContiguousMemory @ 0x140337010 (MmFreeContiguousMemory.c)
 *     MiGetPhysicalAddress @ 0x140361804 (MiGetPhysicalAddress.c)
 *     MiVaToPfn @ 0x140361944 (MiVaToPfn.c)
 *     MiDbgCopyMemoryTarget @ 0x140540670 (MiDbgCopyMemoryTarget.c)
 *     MiUpdateForkMaps @ 0x140556300 (MiUpdateForkMaps.c)
 *     MiMapProcessExecutable @ 0x1406B4D28 (MiMapProcessExecutable.c)
 *     MiMapNewSession @ 0x140774CAC (MiMapNewSession.c)
 *     MxMapVa @ 0x140A3EDAC (MxMapVa.c)
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
