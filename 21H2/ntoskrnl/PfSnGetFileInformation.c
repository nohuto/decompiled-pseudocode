/*
 * XREFs of PfSnGetFileInformation @ 0x14031BA90
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140213D90 (MiCompleteProtoPteFault.c)
 *     PfSnLogPageFaultCommon @ 0x14031B04C (PfSnLogPageFaultCommon.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402056A0 (ObfReferenceObjectWithTag.c)
 *     ExAcquireSpinLockShared @ 0x14021CD80 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockExclusive @ 0x14021D060 (ExAcquireSpinLockExclusive.c)
 *     ExQueueWorkItem @ 0x14023E750 (ExQueueWorkItem.c)
 *     ExReleaseRundownProtection_0 @ 0x14027C4F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14027C9B0 (ExAcquireRundownProtection_0.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14031C800 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14033BD80 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbInsertNodeEx @ 0x140340480 (RtlRbInsertNodeEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PfSnGetFileInformation(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // esi
  unsigned __int64 v3; // rbx
  BOOLEAN v4; // r15
  int v7; // r12d
  _QWORD *v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 *v10; // r13
  __int64 v11; // rcx
  unsigned __int64 v12; // r14
  int v14; // ecx
  unsigned __int64 v15; // rax
  _OWORD *PoolWithTag; // rax
  _OWORD *v17; // r14
  KIRQL v18; // al
  __int64 v19; // r8
  __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rbp
  int v23; // edx
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  int v27; // ecx
  unsigned __int64 v28; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v32; // eax
  bool v33; // zf
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // r9
  _DWORD *v36; // r8
  int v37; // eax
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // r10
  _DWORD *v40; // r9
  int v41; // eax
  KIRQL v42; // [rsp+68h] [rbp+10h]

  v2 = 0;
  v3 = a2[3];
  v4 = 0;
  v7 = 0;
  if ( (*(_DWORD *)(a2[1] + 52LL) & 0x10) != 0 )
    return 3221225659LL;
  v8 = (_QWORD *)(a1 + 488);
  v9 = a1 + 520;
  if ( (unsigned __int64)v8 >= v9 )
  {
LABEL_5:
    v10 = (unsigned __int64 *)(a1 + 520);
    v42 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 576));
    v11 = *(_QWORD *)(a1 + 528);
    v12 = *(_QWORD *)(a1 + 520);
    if ( (v11 & 1) != 0 )
    {
      if ( v12 )
        v12 ^= (unsigned __int64)v10;
      else
        v12 = 0LL;
    }
    v14 = v11 & 1;
    while ( v12 )
    {
      if ( *(_QWORD *)(v12 + 24) > v3 )
      {
        v15 = *(_QWORD *)v12;
        if ( v14 && v15 )
        {
          v12 ^= v15;
          continue;
        }
      }
      else
      {
        if ( *(_QWORD *)(v12 + 24) >= v3 )
          break;
        v15 = *(_QWORD *)(v12 + 8);
        if ( v14 && v15 )
        {
          v12 ^= v15;
          continue;
        }
      }
      v12 = v15;
    }
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 576));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v42 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v32 = ~(unsigned __int16)(-1LL << (v42 + 1));
          v33 = (v32 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v32;
          if ( v33 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v42);
    if ( v12 )
    {
      *(_QWORD *)(a1 + 8LL * (++*(_BYTE *)(a1 + 580) & 3) + 488) = v3;
      return 0LL;
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x6E506343u);
    v17 = PoolWithTag;
    if ( !PoolWithTag )
    {
      if ( (*(_BYTE *)(a1 + 484) & 2) == 0 )
        _InterlockedOr16((volatile signed __int16 *)(a1 + 484), 2u);
      return 3221225626LL;
    }
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    PoolWithTag[2] = 0LL;
    ObfReferenceObjectWithTag(a2, 0x746C6644u);
    *((_QWORD *)v17 + 5) = a2;
    *((_QWORD *)v17 + 3) = v3;
    v18 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 576));
    v20 = *(_QWORD *)(a1 + 528);
    v21 = *v10;
    v22 = v18;
    if ( (v20 & 1) != 0 )
    {
      if ( v21 )
        v21 ^= (unsigned __int64)v10;
      else
        v21 = 0LL;
    }
    v23 = v20 & 1;
    if ( !v21 )
    {
LABEL_36:
      if ( !*(_QWORD *)(a1 + 568) )
      {
        v4 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 360));
        if ( !v4 )
        {
          v2 = -1073741431;
LABEL_31:
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 576));
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v34 = KeGetCurrentIrql();
              if ( v34 <= 0xFu && (unsigned __int8)v22 <= 0xFu && v34 >= 2u )
              {
                v35 = KeGetCurrentPrcb();
                v36 = v35->SchedulerAssist;
                v37 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v22 + 1));
                v33 = (v37 & v36[5]) == 0;
                v36[5] &= v37;
                if ( v33 )
                  KiRemoveSystemWorkPriorityKick(v35);
              }
            }
          }
          __writecr8(v22);
          HalPutDmaAdapter(*((PADAPTER_OBJECT *)v17 + 5));
          ExFreePoolWithTag(v17, 0);
          return v2;
        }
        *(_QWORD *)(a1 + 568) = a1;
        *(_QWORD *)(a1 + 560) = PfSnNameQueryWorker;
        v7 = 1;
        *(_QWORD *)(a1 + 544) = 0LL;
      }
      *((_QWORD *)v17 + 4) = *(_QWORD *)(a1 + 536);
      *(_QWORD *)(a1 + 536) = v17 + 2;
      v25 = *(_QWORD *)(a1 + 528);
      v26 = *v10;
      if ( (v25 & 1) != 0 )
      {
        if ( v26 )
          v26 ^= (unsigned __int64)v10;
        else
          v26 = 0LL;
      }
      LOBYTE(v19) = 0;
      v27 = v25 & 1;
      if ( v26 )
      {
        while ( 1 )
        {
          if ( *(_QWORD *)(v26 + 24) > v3 )
          {
            v28 = *(_QWORD *)v26;
            if ( v27 )
            {
              if ( !v28 )
                break;
              v28 ^= v26;
            }
            if ( !v28 )
              break;
          }
          else
          {
            v28 = *(_QWORD *)(v26 + 8);
            if ( v27 )
            {
              if ( !v28 )
                goto LABEL_59;
              v28 ^= v26;
            }
            if ( !v28 )
            {
LABEL_59:
              LOBYTE(v19) = 1;
              break;
            }
          }
          v26 = v28;
        }
      }
      RtlRbInsertNodeEx(a1 + 520, v26, v19, v17);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 576));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v38 = KeGetCurrentIrql();
          if ( v38 <= 0xFu && (unsigned __int8)v22 <= 0xFu && v38 >= 2u )
          {
            v39 = KeGetCurrentPrcb();
            v40 = v39->SchedulerAssist;
            v41 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v22 + 1));
            v33 = (v41 & v40[5]) == 0;
            v40[5] &= v41;
            if ( v33 )
              KiRemoveSystemWorkPriorityKick(v39);
          }
        }
      }
      __writecr8(v22);
      if ( v7 )
      {
        v4 = 0;
        ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 544), DelayedWorkQueue);
      }
      *(_QWORD *)(a1 + 8LL * (++*(_BYTE *)(a1 + 580) & 3) + 488) = v3;
      if ( v4 )
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 360));
      return 0LL;
    }
    while ( 1 )
    {
      if ( *(_QWORD *)(v21 + 24) > v3 )
      {
        v24 = *(_QWORD *)v21;
        if ( v23 && v24 )
        {
          v21 ^= v24;
          goto LABEL_35;
        }
      }
      else
      {
        if ( *(_QWORD *)(v21 + 24) >= v3 )
          goto LABEL_31;
        v24 = *(_QWORD *)(v21 + 8);
        if ( v23 && v24 )
        {
          v21 ^= v24;
          goto LABEL_35;
        }
      }
      v21 = v24;
LABEL_35:
      if ( !v21 )
        goto LABEL_36;
    }
  }
  while ( *v8 != v3 )
  {
    if ( (unsigned __int64)++v8 >= v9 )
      goto LABEL_5;
  }
  return 0LL;
}
