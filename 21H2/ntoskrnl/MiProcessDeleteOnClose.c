/*
 * XREFs of MiProcessDeleteOnClose @ 0x14052A1D8
 * Callers:
 *     MiDereferenceSegmentThread @ 0x1403BD5A0 (MiDereferenceSegmentThread.c)
 * Callees:
 *     KiSetTimerEx @ 0x1402814E0 (KiSetTimerEx.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140282D50 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReleaseControlAreaWaiters @ 0x140361FD4 (MiReleaseControlAreaWaiters.c)
 *     MiUnlinkUnusedControlArea @ 0x140362218 (MiUnlinkUnusedControlArea.c)
 *     MiInsertUnusedSegment @ 0x1403622B0 (MiInsertUnusedSegment.c)
 *     MiDestroySection @ 0x14037EE7C (MiDestroySection.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFlushControlArea @ 0x1405299D4 (MiFlushControlArea.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14055532C (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiProcessDeleteOnClose(__int64 a1)
{
  _QWORD *v1; // r13
  volatile LONG *v2; // r14
  int v3; // r12d
  unsigned int v4; // edi
  unsigned __int64 v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rdi
  volatile signed __int32 *v9; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf
  __int64 inserted; // rdi
  unsigned __int8 v16; // cl
  struct _KPRCB *v17; // r10
  _DWORD *v18; // r9
  int v19; // eax
  __int64 result; // rax
  struct _KPRCB *v21; // r9
  _DWORD *v22; // r8
  unsigned int v23; // [rsp+70h] [rbp+8h]
  struct _FILE_OBJECT *v24; // [rsp+78h] [rbp+10h] BYREF
  _QWORD *v25; // [rsp+80h] [rbp+18h] BYREF

  v24 = 0LL;
  v1 = (_QWORD *)(a1 + 1600);
  v25 = 0LL;
  v2 = (volatile LONG *)(a1 + 1344);
  v3 = 0;
  v4 = -1;
  while ( 1 )
  {
    v6 = ExAcquireSpinLockExclusive(v2);
    v7 = (_QWORD *)*v1;
    if ( (_QWORD *)*v1 == v1 )
      break;
    if ( (++v3 & 0x3F) == 0 && *(_DWORD *)(a1 + 1348) >= v4 )
    {
      if ( v7 != v1 )
      {
        *(_BYTE *)(a1 + 1680) = 1;
        KiSetTimerEx(a1 + 1616, Mi10Milliseconds.QuadPart, 0, 0, 0LL);
        goto LABEL_34;
      }
      break;
    }
    v8 = (__int64)(v7 - 1);
    v23 = *(_DWORD *)(a1 + 1348);
    v9 = (volatile signed __int32 *)(v7 + 8);
    if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v9) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v2);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
            v14 = (v13 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v13;
            if ( v14 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v6);
      goto LABEL_2;
    }
    MiUnlinkUnusedControlArea(v8);
    ExReleaseSpinLockExclusiveFromDpcLevel(v2);
    if ( (*(_DWORD *)(v8 + 56) & 0x20) != 0 )
    {
      MiDestroySection(v8, v6, 0LL);
      goto LABEL_2;
    }
    if ( *(_DWORD *)(v8 + 76) )
    {
      inserted = MiInsertUnusedSegment(v8);
      ExReleaseSpinLockExclusiveFromDpcLevel(v9);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v16 = KeGetCurrentIrql();
          if ( v16 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v16 >= 2u )
          {
            v17 = KeGetCurrentPrcb();
            v18 = v17->SchedulerAssist;
            v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
            v14 = (v19 & v18[5]) == 0;
            v18[5] &= v19;
            if ( v14 )
              KiRemoveSystemWorkPriorityKick((__int64)v17);
          }
        }
      }
      __writecr8(v6);
      if ( inserted )
        MiReturnCrossPartitionSectionCharges(a1, 1LL, inserted);
LABEL_2:
      v4 = v23;
    }
    else
    {
      v24 = 0LL;
      if ( (unsigned int)MiFlushControlArea((char *)v8, v6, (__int64 *)&v25, &v24) == 1 )
        MiDestroySection(v8, v6, v24);
      v4 = v23;
      if ( v25 )
        MiReleaseControlAreaWaiters(v25);
    }
  }
  *(_BYTE *)(a1 + 1680) = 0;
LABEL_34:
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v6 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v21 = KeGetCurrentPrcb();
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v22 = v21->SchedulerAssist;
        v14 = ((unsigned int)result & v22[5]) == 0;
        v22[5] &= result;
        if ( v14 )
          result = KiRemoveSystemWorkPriorityKick((__int64)v21);
      }
    }
  }
  __writecr8(v6);
  return result;
}
