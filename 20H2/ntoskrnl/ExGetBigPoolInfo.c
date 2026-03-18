/*
 * XREFs of ExGetBigPoolInfo @ 0x1405B1D5C
 * Callers:
 *     ExpQuerySystemInformation @ 0x140608060 (ExpQuerySystemInformation.c)
 *     EtwpPoolRunDown @ 0x140940B30 (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x14094C790 (ExGetSessionBigPoolInformation.c)
 * Callees:
 *     RtlpHpFreeHeap @ 0x140237EEC (RtlpHpFreeHeap.c)
 *     ExGetHeapFromVA @ 0x1402380B4 (ExGetHeapFromVA.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     ExAllocateHeapPages @ 0x1403754B4 (ExAllocateHeapPages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140411040 (memmove.c)
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
  __int64 v12; // r8
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r9
  int v15; // eax
  bool v16; // zf
  __int64 v17; // rdx
  __int128 *v18; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r10
  _DWORD *v24; // r9
  int v25; // eax
  __int128 *v26; // rax
  __int64 v27; // rdx
  __int64 SchedulerAssist; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v31; // eax
  __int128 *HeapFromVA; // rax
  unsigned int v33; // [rsp+30h] [rbp-68h]
  unsigned int v34; // [rsp+34h] [rbp-64h]
  unsigned __int64 v35; // [rsp+38h] [rbp-60h]
  unsigned __int64 v36; // [rsp+40h] [rbp-58h]
  _DWORD *v37; // [rsp+48h] [rbp-50h]
  _DWORD *v38; // [rsp+60h] [rbp-38h]

  HeapPages = 0LL;
  v34 = 0;
  v6 = 0LL;
  v7 = 16;
  v8 = 2LL;
  if ( a3 == 1 )
    v7 = 8;
  v33 = v7;
  v9 = a1;
  if ( a3 != 1 )
  {
    v9 = a1 + 3;
    v8 = 4LL;
  }
  v38 = &a1[v8];
  if ( a2 )
    *v9 = 0;
  while ( 1 )
  {
    v10 = ExAcquireSpinLockExclusive(&ExpLargePoolTableLock);
    if ( a3 == 1 )
    {
      v11 = (const void *)PoolBigPageTable;
      v36 = PoolBigPageTableSize;
    }
    else
    {
      v11 = *(const void **)(qword_140C4DC60 + 992);
      v36 = *(_QWORD *)(qword_140C4DC60 + 1000);
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
            SchedulerAssist = (__int64)CurrentPrcb->SchedulerAssist;
            v31 = ~(unsigned __int16)(-1LL << (v10 + 1));
            v16 = (v31 & *(_DWORD *)(SchedulerAssist + 20)) == 0;
            v27 = (unsigned int)v31 & *(_DWORD *)(SchedulerAssist + 20);
            *(_DWORD *)(SchedulerAssist + 20) = v27;
            if ( v16 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v10);
      if ( HeapPages )
      {
        HeapFromVA = (__int128 *)ExGetHeapFromVA((ULONG_PTR)HeapPages, v27, SchedulerAssist);
        RtlpHpFreeHeap(HeapFromVA, (__int64)HeapPages, 0, 0LL);
      }
      *a4 = 0;
      return 0LL;
    }
    if ( HeapPages && v6 >= v36 )
      break;
    v6 = v36;
    ExReleaseSpinLockExclusiveFromDpcLevel(&ExpLargePoolTableLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v22 = KeGetCurrentIrql();
        if ( v22 <= 0xFu && v10 <= 0xFu && v22 >= 2u )
        {
          v23 = KeGetCurrentPrcb();
          v24 = v23->SchedulerAssist;
          v20 = -1LL << (v10 + 1);
          v25 = ~(unsigned __int16)v20;
          v16 = (v25 & v24[5]) == 0;
          v21 = (unsigned int)v25 & v24[5];
          v24[5] = v21;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick((__int64)v23);
        }
      }
    }
    __writecr8(v10);
    if ( HeapPages )
    {
      v26 = (__int128 *)ExGetHeapFromVA((ULONG_PTR)HeapPages, v20, v21);
      RtlpHpFreeHeap(v26, (__int64)HeapPages, 0, 0LL);
    }
    HeapPages = (void *)ExAllocateHeapPages();
    if ( !HeapPages )
      return 3221225626LL;
  }
  memmove(HeapPages, v11, 24 * v36);
  ExReleaseSpinLockExclusiveFromDpcLevel(&ExpLargePoolTableLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v13 = KeGetCurrentIrql();
      if ( v13 <= 0xFu && v10 <= 0xFu && v13 >= 2u )
      {
        v14 = KeGetCurrentPrcb();
        v12 = (__int64)v14->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << (v10 + 1));
        v16 = (v15 & *(_DWORD *)(v12 + 20)) == 0;
        *(_DWORD *)(v12 + 20) &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick((__int64)v14);
      }
    }
  }
  __writecr8(v10);
  v35 = (unsigned __int64)HeapPages;
  v37 = v38;
  while ( 1 )
  {
    v17 = v33;
    if ( v35 >= (unsigned __int64)HeapPages + 24 * v36 )
      break;
    v12 = *(_QWORD *)v35;
    if ( (*(_QWORD *)v35 & 1) == 0 )
    {
      if ( a2 )
        ++*v9;
      v33 += 24;
      if ( (unsigned int)v17 >= 0xFFFFFFE8 )
      {
        v34 = -1073741675;
        break;
      }
      if ( v33 <= a2 )
      {
        if ( a2 )
        {
          *(_QWORD *)v37 = v12;
          if ( a3 == 1 && (*(_DWORD *)(v35 + 12) & 0x100) == 0 )
          {
            v12 |= 1uLL;
            *(_QWORD *)v37 = v12;
          }
          v37[4] = *(_DWORD *)(v35 + 8);
          *((_QWORD *)v37 + 1) = *(_QWORD *)(v35 + 16);
          v37 += 6;
        }
      }
      else
      {
        v34 = -1073741820;
      }
    }
    v35 += 24LL;
  }
  v18 = (__int128 *)ExGetHeapFromVA((ULONG_PTR)HeapPages, v17, v12);
  RtlpHpFreeHeap(v18, (__int64)HeapPages, 0, 0LL);
  *a4 = v33;
  return v34;
}
