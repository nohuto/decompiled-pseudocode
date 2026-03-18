/*
 * XREFs of MiDeleteStaleCacheMaps @ 0x14023DBCC
 * Callers:
 *     MiWorkingSetManager @ 0x1402662A0 (MiWorkingSetManager.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x1402C3340 (RtlAvlRemoveNode.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void MiDeleteStaleCacheMaps()
{
  int v0; // esi
  unsigned __int64 v1; // rdi
  int v2; // eax
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  void *v12; // rcx
  __int64 v13; // r8
  _QWORD *v14; // rdx
  signed __int32 v15[8]; // [rsp+0h] [rbp-38h] BYREF
  _QWORD v16[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( (__int64 *)qword_140C4EAE0 != &qword_140C4EAE0 )
  {
    _InterlockedOr(v15, 0);
    v0 = KiCacheFlushTimeStamp;
    if ( (unsigned int)(KiCacheFlushTimeStamp - dword_140C4EAF0) > 2
      || (dword_140C4EAF0 & 1) == 0 && (unsigned int)(KiCacheFlushTimeStamp - dword_140C4EAF0) >= 2 )
    {
      v16[1] = v16;
      v16[0] = v16;
      v1 = ExAcquireSpinLockExclusive(&dword_140C4EAC0);
      while ( (__int64 *)qword_140C4EAE0 != &qword_140C4EAE0 )
      {
        v2 = *(_DWORD *)(qword_140C4EAE0 - 24 + 56);
        if ( (unsigned int)(v0 - v2) <= 2 && ((v2 & 1) != 0 || (unsigned int)(v0 - v2) < 2) )
          break;
        v3 = (_QWORD *)qword_140C4EAE0;
        v4 = *(_QWORD *)qword_140C4EAE0;
        v5 = *(_QWORD **)(qword_140C4EAE0 - 24 + 32);
        if ( *(_QWORD *)(*(_QWORD *)qword_140C4EAE0 + 8LL) != qword_140C4EAE0
          || *v5 != qword_140C4EAE0
          || (*v5 = v4,
              *(_QWORD *)(v4 + 8) = v5,
              RtlAvlRemoveNode(&qword_140C4EAD8),
              v6 = v16[0],
              --qword_140C4EAF8,
              *(_QWORD **)(v16[0] + 8LL) != v16) )
        {
LABEL_27:
          __fastfail(3u);
        }
        *v3 = v16[0];
        v3[1] = v16;
        *(_QWORD *)(v6 + 8) = v3;
        v16[0] = v3;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4EAC0);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v1 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v1 + 1));
            v11 = (v10 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v10;
            if ( v11 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v1);
      while ( (_QWORD *)v16[0] != v16 )
      {
        v12 = (void *)(v16[0] - 24LL);
        v13 = *(_QWORD *)v16[0];
        v14 = *(_QWORD **)(v16[0] + 8LL);
        if ( *(_QWORD *)(*(_QWORD *)v16[0] + 8LL) != v16[0] || *v14 != v16[0] )
          goto LABEL_27;
        *v14 = v13;
        *(_QWORD *)(v13 + 8) = v14;
        ExFreePoolWithTag(v12, 0);
      }
    }
  }
}
