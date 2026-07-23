/*
 * XREFs of MiUnlockPage @ 0x14022D6AC
 * Callers:
 *     MiInitializeLargeNonPagedPoolLeafFrames @ 0x14020DE70 (MiInitializeLargeNonPagedPoolLeafFrames.c)
 *     MiLargeFreePageToMdl @ 0x14020F5EC (MiLargeFreePageToMdl.c)
 *     MiFreeLargePageMemory @ 0x1403093A4 (MiFreeLargePageMemory.c)
 *     MiFindContiguousPages @ 0x14030C430 (MiFindContiguousPages.c)
 *     MiReadyLargePageToFree @ 0x140334A80 (MiReadyLargePageToFree.c)
 *     MiUpdateLargePageSectionPfns @ 0x1403F41AC (MiUpdateLargePageSectionPfns.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x1403F5A4C (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiDeleteSubsectionLargePages @ 0x1403F6534 (MiDeleteSubsectionLargePages.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x1403F6B08 (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     MiUnlinkNodeLargePages @ 0x1403F70E8 (MiUnlinkNodeLargePages.c)
 *     MiInitializeLargeUserBasePfn @ 0x1403F7C20 (MiInitializeLargeUserBasePfn.c)
 *     MiMarkFileOnlyPfnBad @ 0x140541948 (MiMarkFileOnlyPfnBad.c)
 *     MiTransferPartitionPageRun @ 0x140563050 (MiTransferPartitionPageRun.c)
 *     MiScanPagefileSpace @ 0x1408D0930 (MiScanPagefileSpace.c)
 *     MmAreMdlPagesLocked @ 0x1409C6CD0 (MmAreMdlPagesLocked.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
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
