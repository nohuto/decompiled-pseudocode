/*
 * XREFs of HalFreeCommonBufferV3 @ 0x1404C4830
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     MmFreeContiguousMemory @ 0x140217BE0 (MmFreeContiguousMemory.c)
 *     RtlRbRemoveNode @ 0x14034B830 (RtlRbRemoveNode.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     HalpDmaDereferenceDomainObject @ 0x1404C4D38 (HalpDmaDereferenceDomainObject.c)
 *     HalpDomainLaDelete @ 0x1404C5034 (HalpDomainLaDelete.c)
 *     HalpIommuDomainUnmapLogicalRange @ 0x1404C9574 (HalpIommuDomainUnmapLogicalRange.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall HalFreeCommonBufferV3(__int64 a1, __int64 a2, ULONG_PTR a3, _RTL_BALANCED_NODE *a4)
{
  _RTL_BALANCED_NODE *v4; // r14
  unsigned __int64 v6; // r15
  ULONG_PTR v7; // rsi
  ULONG_PTR v8; // rdi
  void *v9; // rbp
  unsigned __int64 v10; // r12
  ULONG_PTR v11; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf
  __int64 v17; // r14
  unsigned __int64 v18; // rax
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r10
  _DWORD *v21; // r9
  int v22; // eax
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r9
  int v25; // eax
  _DWORD *v26; // r8
  int v27; // eax
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r10
  _DWORD *v30; // r9
  int v31; // eax
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r9
  int v34; // eax
  _DWORD *v35; // r8

  v4 = a4;
  LOBYTE(v6) = KeGetCurrentIrql();
  v7 = 0LL;
  if ( a1 )
    v7 = *(_QWORD *)(a1 + 504);
  v8 = 0LL;
  v9 = 0LL;
  v10 = KeAcquireSpinLockRaiseToDpc(&HalpDmaDomainListLock);
  if ( !v7 )
    goto LABEL_28;
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 96));
  v8 = *(_QWORD *)(v7 + 80);
  if ( (*(_BYTE *)(v7 + 88) & 1) != 0 && v8 )
    v8 ^= v7 + 80;
  while ( v8 && *(_RTL_BALANCED_NODE **)(v8 + 24) != v4 )
  {
    if ( *(_QWORD *)(v8 + 24) <= (unsigned __int64)v4 )
      v11 = *(_QWORD *)(v8 + 8);
    else
      v11 = *(_QWORD *)v8;
    if ( (*(_BYTE *)(v7 + 88) & 1) != 0 && v11 )
      v8 ^= v11;
    else
      v8 = v11;
  }
  if ( v8 )
  {
    v9 = (void *)v8;
  }
  else
  {
    KxReleaseSpinLock((PKSPIN_LOCK)(v7 + 96));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v16 = (v15 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v15;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v6);
    v7 = 0LL;
  }
  if ( !v7 )
  {
LABEL_28:
    v17 = HalpDmaDomainList;
    if ( (__int64 *)HalpDmaDomainList != &HalpDmaDomainList )
    {
      while ( 1 )
      {
        v7 = v17;
        v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v17 + 96));
        v8 = *(_QWORD *)(v17 + 80);
        if ( (*(_BYTE *)(v17 + 88) & 1) != 0 && v8 )
          v8 ^= v17 + 80;
        if ( v8 )
        {
          do
          {
            if ( *(_RTL_BALANCED_NODE **)(v8 + 24) == a4 )
              break;
            v18 = *(_QWORD *)(v8 + 24) <= (unsigned __int64)a4 ? *(_QWORD *)(v8 + 8) : *(_QWORD *)v8;
            if ( (*(_BYTE *)(v17 + 88) & 1) != 0 && v18 )
              v8 ^= v18;
            else
              v8 = v18;
          }
          while ( v8 );
          if ( v8 )
            break;
        }
        KxReleaseSpinLock((PKSPIN_LOCK)(v17 + 96));
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v19 = KeGetCurrentIrql();
            if ( v19 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v19 >= 2u )
            {
              v20 = KeGetCurrentPrcb();
              v21 = v20->SchedulerAssist;
              v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
              v16 = (v22 & v21[5]) == 0;
              v21[5] &= v22;
              if ( v16 )
                KiRemoveSystemWorkPriorityKick((__int64)v20);
            }
          }
        }
        __writecr8(v6);
        v17 = *(_QWORD *)v17;
        if ( (__int64 *)v17 == &HalpDmaDomainList )
          goto LABEL_54;
      }
      v9 = (void *)v8;
    }
    if ( !v7 )
    {
LABEL_54:
      KxReleaseSpinLock(&HalpDmaDomainListLock);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v23 = KeGetCurrentIrql();
          if ( v23 <= 0xFu && (unsigned __int8)v10 <= 0xFu && v23 >= 2u )
          {
            v24 = KeGetCurrentPrcb();
            v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
            v26 = v24->SchedulerAssist;
            v16 = (v25 & v26[5]) == 0;
            v26[5] &= v25;
            if ( v16 )
              KiRemoveSystemWorkPriorityKick((__int64)v24);
          }
        }
      }
      __writecr8(v10);
      return;
    }
    v4 = a4;
  }
  v27 = *(_DWORD *)(v7 + 64);
  if ( v27 )
  {
    HalpIommuDomainUnmapLogicalRange(*(_QWORD *)(v7 + 40), a3);
    v27 = *(_DWORD *)(v7 + 64);
  }
  if ( v27 == 2 )
    HalpDomainLaDelete(v7, a3);
  RtlRbRemoveNode((PRTL_RB_TREE)(v7 + 80), (PRTL_BALANCED_NODE)v8);
  KxReleaseSpinLock((PKSPIN_LOCK)(v7 + 96));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v28 = KeGetCurrentIrql();
      if ( v28 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v28 >= 2u )
      {
        v29 = KeGetCurrentPrcb();
        v30 = v29->SchedulerAssist;
        v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v16 = (v31 & v30[5]) == 0;
        v30[5] &= v31;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick((__int64)v29);
      }
    }
  }
  __writecr8((unsigned __int8)v6);
  KxReleaseSpinLock(&HalpDmaDomainListLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v32 = KeGetCurrentIrql();
      if ( v32 <= 0xFu && (unsigned __int8)v10 <= 0xFu && v32 >= 2u )
      {
        v33 = KeGetCurrentPrcb();
        v34 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
        v35 = v33->SchedulerAssist;
        v16 = (v34 & v35[5]) == 0;
        v35[5] &= v34;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick((__int64)v33);
      }
    }
  }
  __writecr8(v10);
  HalpDmaDereferenceDomainObject(v7);
  ExFreePoolWithTag(v9, 0);
  MmFreeContiguousMemory(v4);
}
