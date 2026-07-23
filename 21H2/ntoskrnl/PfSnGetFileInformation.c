/*
 * XREFs of PfSnGetFileInformation @ 0x1403267E0
 * Callers:
 *     MiCompleteProtoPteFault @ 0x1402B8690 (MiCompleteProtoPteFault.c)
 *     PfSnLogPageFaultCommon @ 0x140325D9C (PfSnLogPageFaultCommon.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     ExAcquireSpinLockShared @ 0x1402C1680 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140327550 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbInsertNodeEx @ 0x14034B1D0 (RtlRbInsertNodeEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PfSnGetFileInformation(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // esi
  _RTL_BALANCED_NODE *v3; // rbx
  BOOLEAN v4; // r15
  int v7; // r12d
  _RTL_BALANCED_NODE **v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 *v10; // r13
  __int64 v11; // rcx
  unsigned __int64 v12; // r14
  int v14; // ecx
  unsigned __int64 v15; // rax
  _OWORD *PoolWithTag; // rax
  _OWORD *v17; // r14
  KIRQL v18; // al
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rbp
  int v22; // edx
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  BOOLEAN v26; // r8
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
  v3 = (_RTL_BALANCED_NODE *)a2[3];
  v4 = 0;
  v7 = 0;
  if ( (*(_DWORD *)(a2[1] + 52LL) & 0x10) != 0 )
    return 3221225659LL;
  v8 = (_RTL_BALANCED_NODE **)(a1 + 488);
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
      if ( *(_QWORD *)(v12 + 24) > (unsigned __int64)v3 )
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
        if ( *(_QWORD *)(v12 + 24) >= (unsigned __int64)v3 )
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
    v19 = *(_QWORD *)(a1 + 528);
    v20 = *v10;
    v21 = v18;
    if ( (v19 & 1) != 0 )
    {
      if ( v20 )
        v20 ^= (unsigned __int64)v10;
      else
        v20 = 0LL;
    }
    v22 = v19 & 1;
    if ( !v20 )
    {
LABEL_36:
      if ( !*(_QWORD *)(a1 + 568) )
      {
        v4 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 360));
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
              if ( v34 <= 0xFu && (unsigned __int8)v21 <= 0xFu && v34 >= 2u )
              {
                v35 = KeGetCurrentPrcb();
                v36 = v35->SchedulerAssist;
                v37 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v21 + 1));
                v33 = (v37 & v36[5]) == 0;
                v36[5] &= v37;
                if ( v33 )
                  KiRemoveSystemWorkPriorityKick(v35);
              }
            }
          }
          __writecr8(v21);
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
      v24 = *(_QWORD *)(a1 + 528);
      v25 = *v10;
      if ( (v24 & 1) != 0 )
      {
        if ( v25 )
          v25 ^= (unsigned __int64)v10;
        else
          v25 = 0LL;
      }
      v26 = 0;
      v27 = v24 & 1;
      if ( v25 )
      {
        while ( 1 )
        {
          if ( *(_QWORD *)(v25 + 24) > (unsigned __int64)v3 )
          {
            v28 = *(_QWORD *)v25;
            if ( v27 )
            {
              if ( !v28 )
                break;
              v28 ^= v25;
            }
            if ( !v28 )
              break;
          }
          else
          {
            v28 = *(_QWORD *)(v25 + 8);
            if ( v27 )
            {
              if ( !v28 )
                goto LABEL_59;
              v28 ^= v25;
            }
            if ( !v28 )
            {
LABEL_59:
              v26 = 1;
              break;
            }
          }
          v25 = v28;
        }
      }
      RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 520), (PRTL_BALANCED_NODE)v25, v26, (PRTL_BALANCED_NODE)v17);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 576));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v38 = KeGetCurrentIrql();
          if ( v38 <= 0xFu && (unsigned __int8)v21 <= 0xFu && v38 >= 2u )
          {
            v39 = KeGetCurrentPrcb();
            v40 = v39->SchedulerAssist;
            v41 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v21 + 1));
            v33 = (v41 & v40[5]) == 0;
            v40[5] &= v41;
            if ( v33 )
              KiRemoveSystemWorkPriorityKick(v39);
          }
        }
      }
      __writecr8(v21);
      if ( v7 )
      {
        v4 = 0;
        ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 544), DelayedWorkQueue);
      }
      *(_QWORD *)(a1 + 8LL * (++*(_BYTE *)(a1 + 580) & 3) + 488) = v3;
      if ( v4 )
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 360));
      return 0LL;
    }
    while ( 1 )
    {
      if ( *(_QWORD *)(v20 + 24) > (unsigned __int64)v3 )
      {
        v23 = *(_QWORD *)v20;
        if ( v22 && v23 )
        {
          v20 ^= v23;
          goto LABEL_35;
        }
      }
      else
      {
        if ( *(_QWORD *)(v20 + 24) >= (unsigned __int64)v3 )
          goto LABEL_31;
        v23 = *(_QWORD *)(v20 + 8);
        if ( v22 && v23 )
        {
          v20 ^= v23;
          goto LABEL_35;
        }
      }
      v20 = v23;
LABEL_35:
      if ( !v20 )
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
