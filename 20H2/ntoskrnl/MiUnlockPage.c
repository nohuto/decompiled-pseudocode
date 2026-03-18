/*
 * XREFs of MiUnlockPage @ 0x14030EF8C
 * Callers:
 *     MiReadyLargePageToFree @ 0x1402AD140 (MiReadyLargePageToFree.c)
 *     MiInitializeLargeNonPagedPoolLeafFrames @ 0x1402F1050 (MiInitializeLargeNonPagedPoolLeafFrames.c)
 *     MiLargeFreePageToMdl @ 0x1402F16D8 (MiLargeFreePageToMdl.c)
 *     MiFreeLargePageMemory @ 0x1402F19BC (MiFreeLargePageMemory.c)
 *     MiFindContiguousPages @ 0x14034B980 (MiFindContiguousPages.c)
 *     MiUpdateLargePageSectionPfns @ 0x1403F2964 (MiUpdateLargePageSectionPfns.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x1403F42B0 (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiDeleteSubsectionLargePages @ 0x1403F4D98 (MiDeleteSubsectionLargePages.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x1403F536C (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     MiUnlinkNodeLargePages @ 0x1403F594C (MiUnlinkNodeLargePages.c)
 *     MiInitializeLargeUserBasePfn @ 0x1403F6484 (MiInitializeLargeUserBasePfn.c)
 *     MiMarkFileOnlyPfnBad @ 0x14053FC08 (MiMarkFileOnlyPfnBad.c)
 *     MiTransferPartitionPageRun @ 0x140561340 (MiTransferPartitionPageRun.c)
 *     MiScanPagefileSpace @ 0x1408D3010 (MiScanPagefileSpace.c)
 *     MmAreMdlPagesLocked @ 0x1409C8CE0 (MmAreMdlPagesLocked.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
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
