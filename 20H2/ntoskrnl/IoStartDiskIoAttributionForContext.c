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

__int64 __fastcall IoStartDiskIoAttributionForContext(unsigned __int64 a1)
{
  KIRQL v2; // al
  _BOOL8 v3; // r8
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rsi
  int v6; // edi
  unsigned __int64 v7; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v11; // zf

  v2 = ExAcquireSpinLockExclusive(&IopDiskIoAttributionLock);
  v4 = IopDiskIoAttributionTree;
  v5 = v2;
  if ( (BYTE8(IopDiskIoAttributionTree) & 1) != 0 && (_QWORD)IopDiskIoAttributionTree )
    v4 = (unsigned __int64)&IopDiskIoAttributionTree ^ IopDiskIoAttributionTree;
  LOBYTE(v3) = 0;
  v6 = BYTE8(IopDiskIoAttributionTree) & 1;
  if ( v4 )
  {
    while ( 1 )
    {
      if ( (int)IopDiskIoAttributionTreeCompare(a1 + 24, v4, v3) < 0 )
      {
        v7 = *(_QWORD *)v4;
        if ( v6 )
        {
          if ( !v7 )
            goto LABEL_15;
          v7 ^= v4;
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
        v7 = *(_QWORD *)(v4 + 8);
        if ( v6 )
        {
          if ( !v7 )
            goto LABEL_16;
          v7 ^= v4;
        }
        if ( !v7 )
        {
LABEL_16:
          LOBYTE(v3) = 1;
          break;
        }
      }
      v4 = v7;
    }
  }
  RtlRbInsertNodeEx((unsigned __int64 *)&IopDiskIoAttributionTree, v4, v3, a1);
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
