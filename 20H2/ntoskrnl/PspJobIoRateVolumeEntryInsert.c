/*
 * XREFs of PspJobIoRateVolumeEntryInsert @ 0x1405806DC
 * Callers:
 *     PspSetJobIoRateControlForVolume @ 0x14090BC74 (PspSetJobIoRateControlForVolume.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x140216FB0 (RtlRbInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiLockTrackerCompare @ 0x14052F1D0 (MiLockTrackerCompare.c)
 */

__int64 __fastcall PspJobIoRateVolumeEntryInsert(__int64 a1, _RTL_BALANCED_NODE *a2)
{
  volatile LONG *v2; // r12
  __int64 v4; // rdi
  KIRQL v5; // al
  unsigned __int64 v6; // r14
  signed __int64 v7; // rbx
  unsigned __int64 v8; // rbp
  BOOLEAN v9; // r8
  int v10; // esi
  unsigned __int64 v11; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v15; // zf

  v2 = (volatile LONG *)(a1 + 1456);
  v4 = a1 + 1464;
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1456));
  v6 = (unsigned __int64)a2[1].Children[0];
  v7 = *(_QWORD *)v4;
  v8 = v5;
  if ( (*(_BYTE *)(v4 + 8) & 1) != 0 && v7 )
    v7 ^= v4;
  v9 = 0;
  v10 = *(_BYTE *)(v4 + 8) & 1;
  if ( v7 )
  {
    while ( 1 )
    {
      if ( (int)MiLockTrackerCompare(v6, v7) < 0 )
      {
        v11 = *(_QWORD *)v7;
        if ( v10 )
        {
          if ( !v11 )
            goto LABEL_16;
          v11 ^= v7;
        }
        if ( !v11 )
        {
LABEL_16:
          v9 = 0;
          break;
        }
      }
      else
      {
        v11 = *(_QWORD *)(v7 + 8);
        if ( v10 )
        {
          if ( !v11 )
            goto LABEL_10;
          v11 ^= v7;
        }
        if ( !v11 )
        {
LABEL_10:
          v9 = 1;
          break;
        }
      }
      v7 = v11;
    }
  }
  RtlRbInsertNodeEx((PRTL_RB_TREE)v4, (PRTL_BALANCED_NODE)v7, v9, a2);
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v8 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v15 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v15 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v8);
  return result;
}
