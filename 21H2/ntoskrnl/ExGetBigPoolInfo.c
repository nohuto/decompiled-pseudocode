/*
 * XREFs of ExGetBigPoolInfo @ 0x1405B398C
 * Callers:
 *     ExpQuerySystemInformation @ 0x140645E90 (ExpQuerySystemInformation.c)
 *     EtwpPoolRunDown @ 0x14093E4D0 (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x14094A130 (ExGetSessionBigPoolInformation.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     ExGetHeapFromVA @ 0x1403059CC (ExGetHeapFromVA.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlpHpFreeHeap @ 0x14034CE50 (RtlpHpFreeHeap.c)
 *     ExAllocateHeapPages @ 0x140375218 (ExAllocateHeapPages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140414040 (memmove.c)
 */

__int64 __fastcall ExGetBigPoolInfo(_DWORD *a1, unsigned int a2, int a3, unsigned int *a4)
{
  void *HeapPages; // rdi
  unsigned __int64 v6; // r15
  int v7; // eax
  __int64 v8; // rdx
  _DWORD *v9; // r12
  KIRQL v10; // si
  const void *v11; // rdx
  unsigned __int8 v12; // al
  struct _KPRCB *v13; // r9
  _DWORD *v14; // r8
  int v15; // eax
  bool v16; // zf
  unsigned int v17; // edx
  __int64 v18; // r8
  __int64 v19; // rax
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r10
  _DWORD *v23; // r9
  int v24; // eax
  __int64 v25; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v29; // eax
  __int64 HeapFromVA; // rax
  unsigned int v31; // [rsp+30h] [rbp-68h]
  unsigned int v32; // [rsp+34h] [rbp-64h]
  unsigned __int64 v33; // [rsp+38h] [rbp-60h]
  unsigned __int64 v34; // [rsp+40h] [rbp-58h]
  _DWORD *v35; // [rsp+48h] [rbp-50h]
  _DWORD *v36; // [rsp+60h] [rbp-38h]

  HeapPages = 0LL;
  v32 = 0;
  v6 = 0LL;
  v7 = 16;
  v8 = 2LL;
  if ( a3 == 1 )
    v7 = 8;
  v31 = v7;
  v9 = a1;
  if ( a3 != 1 )
  {
    v9 = a1 + 3;
    v8 = 4LL;
  }
  v36 = &a1[v8];
  if ( a2 )
    *v9 = 0;
  while ( 1 )
  {
    v10 = ExAcquireSpinLockExclusive(&ExpLargePoolTableLock);
    if ( a3 == 1 )
    {
      v11 = (const void *)PoolBigPageTable;
      v34 = PoolBigPageTableSize;
    }
    else
    {
      v11 = *(const void **)(qword_140C4DE20 + 992);
      v34 = *(_QWORD *)(qword_140C4DE20 + 1000);
    }
    if ( !v11 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&ExpLargePoolTableLock);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v10 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v29 = ~(unsigned __int16)(-1LL << (v10 + 1));
            v16 = (v29 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v29;
            if ( v16 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v10);
      if ( HeapPages )
      {
        HeapFromVA = ExGetHeapFromVA((ULONG_PTR)HeapPages);
        RtlpHpFreeHeap(HeapFromVA, (unsigned __int64)HeapPages, 0);
      }
      *a4 = 0;
      return 0LL;
    }
    if ( HeapPages && v6 >= v34 )
      break;
    v6 = v34;
    ExReleaseSpinLockExclusiveFromDpcLevel(&ExpLargePoolTableLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v21 = KeGetCurrentIrql();
        if ( v21 <= 0xFu && v10 <= 0xFu && v21 >= 2u )
        {
          v22 = KeGetCurrentPrcb();
          v23 = v22->SchedulerAssist;
          v24 = ~(unsigned __int16)(-1LL << (v10 + 1));
          v16 = (v24 & v23[5]) == 0;
          v23[5] &= v24;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick((__int64)v22);
        }
      }
    }
    __writecr8(v10);
    if ( HeapPages )
    {
      v25 = ExGetHeapFromVA((ULONG_PTR)HeapPages);
      RtlpHpFreeHeap(v25, (unsigned __int64)HeapPages, 0);
    }
    HeapPages = (void *)ExAllocateHeapPages();
    if ( !HeapPages )
      return 3221225626LL;
  }
  memmove(HeapPages, v11, 24 * v34);
  ExReleaseSpinLockExclusiveFromDpcLevel(&ExpLargePoolTableLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v12 = KeGetCurrentIrql();
      if ( v12 <= 0xFu && v10 <= 0xFu && v12 >= 2u )
      {
        v13 = KeGetCurrentPrcb();
        v14 = v13->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << (v10 + 1));
        v16 = (v15 & v14[5]) == 0;
        v14[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick((__int64)v13);
      }
    }
  }
  __writecr8(v10);
  v33 = (unsigned __int64)HeapPages;
  v35 = v36;
  while ( 1 )
  {
    v17 = v31;
    if ( v33 >= (unsigned __int64)HeapPages + 24 * v34 )
      break;
    v18 = *(_QWORD *)v33;
    if ( (*(_QWORD *)v33 & 1) == 0 )
    {
      if ( a2 )
        ++*v9;
      v31 += 24;
      if ( v17 >= 0xFFFFFFE8 )
      {
        v32 = -1073741675;
        break;
      }
      if ( v31 <= a2 )
      {
        if ( a2 )
        {
          *(_QWORD *)v35 = v18;
          if ( a3 == 1 && (*(_DWORD *)(v33 + 12) & 0x100) == 0 )
            *(_QWORD *)v35 = v18 | 1;
          v35[4] = *(_DWORD *)(v33 + 8);
          *((_QWORD *)v35 + 1) = *(_QWORD *)(v33 + 16);
          v35 += 6;
        }
      }
      else
      {
        v32 = -1073741820;
      }
    }
    v33 += 24LL;
  }
  v19 = ExGetHeapFromVA((ULONG_PTR)HeapPages);
  RtlpHpFreeHeap(v19, (unsigned __int64)HeapPages, 0);
  *a4 = v31;
  return v32;
}
