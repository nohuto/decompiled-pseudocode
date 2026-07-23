/*
 * XREFs of IoStartDiskIoAttributionForContext @ 0x1402EE8D8
 * Callers:
 *     PspIoRateEntryActivate @ 0x1405D5224 (PspIoRateEntryActivate.c)
 *     PspSetJobIoAttribution @ 0x14069F414 (PspSetJobIoAttribution.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x140216FB0 (RtlRbInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     IopDiskIoAttributionTreeCompare @ 0x14031EF08 (IopDiskIoAttributionTreeCompare.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall IoStartDiskIoAttributionForContext(PRTL_BALANCED_NODE Node)
{
  KIRQL v2; // al
  __int64 v3; // r8
  unsigned __int64 Root; // rbx
  unsigned __int64 v5; // rsi
  int v6; // edi
  unsigned __int64 v7; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v11; // zf

  v2 = ExAcquireSpinLockExclusive(&IopDiskIoAttributionLock);
  Root = (unsigned __int64)IopDiskIoAttributionTree.Root;
  v5 = v2;
  if ( (*(_BYTE *)&IopDiskIoAttributionTree.0 & 1) != 0 && IopDiskIoAttributionTree.Root )
    Root = (unsigned __int64)&IopDiskIoAttributionTree ^ (unsigned __int64)IopDiskIoAttributionTree.Root;
  LOBYTE(v3) = 0;
  v6 = *(_BYTE *)&IopDiskIoAttributionTree.0 & 1;
  if ( Root )
  {
    while ( 1 )
    {
      if ( (int)IopDiskIoAttributionTreeCompare(&Node[1], Root, v3) < 0 )
      {
        v7 = *(_QWORD *)Root;
        if ( v6 )
        {
          if ( !v7 )
            goto LABEL_15;
          v7 ^= Root;
        }
        if ( !v7 )
        {
LABEL_15:
          LOBYTE(v3) = 0;
          break;
        }
      }
      else
      {
        v7 = *(_QWORD *)(Root + 8);
        if ( v6 )
        {
          if ( !v7 )
            goto LABEL_16;
          v7 ^= Root;
        }
        if ( !v7 )
        {
LABEL_16:
          LOBYTE(v3) = 1;
          break;
        }
      }
      Root = v7;
    }
  }
  RtlRbInsertNodeEx(&IopDiskIoAttributionTree, (PRTL_BALANCED_NODE)Root, v3, Node);
  ExReleaseSpinLockExclusiveFromDpcLevel(&IopDiskIoAttributionLock);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v5 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v11 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v11 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  return result;
}
