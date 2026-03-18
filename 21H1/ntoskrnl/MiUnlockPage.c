/*
 * XREFs of MiUnlockPage @ 0x1402FFA3C
 * Callers:
 *     MiReadyLargePageToFree @ 0x140223170 (MiReadyLargePageToFree.c)
 *     MiFindContiguousPages @ 0x14027EAE0 (MiFindContiguousPages.c)
 *     MiInitializeLargeNonPagedPoolLeafFrames @ 0x1402E91E0 (MiInitializeLargeNonPagedPoolLeafFrames.c)
 *     MiLargeFreePageToMdl @ 0x140316020 (MiLargeFreePageToMdl.c)
 *     MiFreeLargePageMemory @ 0x140345AB8 (MiFreeLargePageMemory.c)
 *     MiUpdateLargePageSectionPfns @ 0x1403ED43C (MiUpdateLargePageSectionPfns.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x1403EEA3C (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiDeleteSubsectionLargePages @ 0x1403EF524 (MiDeleteSubsectionLargePages.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x1403EFAF8 (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     MiUnlinkNodeLargePages @ 0x1403F00D8 (MiUnlinkNodeLargePages.c)
 *     MiInitializeLargeUserBasePfn @ 0x1403F0C10 (MiInitializeLargeUserBasePfn.c)
 *     MiMarkFileOnlyPfnBad @ 0x14053BBE8 (MiMarkFileOnlyPfnBad.c)
 *     MiTransferPartitionPageRun @ 0x14055D320 (MiTransferPartitionPageRun.c)
 *     MiScanPagefileSpace @ 0x1408CBE80 (MiScanPagefileSpace.c)
 *     MmAreMdlPagesLocked @ 0x1409C2CB0 (MmAreMdlPagesLocked.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUnlockPage(__int64 a1, unsigned __int8 a2)
{
  unsigned __int64 v2; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v6; // zf

  v2 = a2;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && a2 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (a2 + 1));
        v6 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v6 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  return result;
}
