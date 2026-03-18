/*
 * XREFs of ExGetBigPoolInfo @ 0x14063A8C0
 * Callers:
 *     ExpQuerySystemInformation @ 0x14073B5A0 (ExpQuerySystemInformation.c)
 *     EtwpPoolRunDown @ 0x1409EAB74 (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x1409F5D80 (ExGetSessionBigPoolInformation.c)
 * Callees:
 *     ExAllocateHeapPages @ 0x140213318 (ExAllocateHeapPages.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     RtlpHpFreeHeap @ 0x140364128 (RtlpHpFreeHeap.c)
 *     ExGetHeapFromVA @ 0x140366C48 (ExGetHeapFromVA.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall ExGetBigPoolInfo(_DWORD *a1, unsigned int a2, int a3, unsigned int *a4)
{
  int v4; // r14d
  char *HeapPages; // rdi
  unsigned __int64 v6; // r13
  int v7; // eax
  __int64 v8; // r8
  _DWORD *v9; // r12
  KIRQL v10; // al
  KIRQL v11; // si
  const void *v12; // rdx
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rax
  size_t v15; // r14
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r9
  _DWORD *v18; // r8
  int v19; // eax
  bool v20; // zf
  unsigned int v21; // edx
  __int64 v22; // r8
  __int128 *v23; // rax
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r10
  _DWORD *v27; // r9
  int v28; // eax
  __int128 *v29; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v33; // eax
  __int128 *HeapFromVA; // rax
  unsigned int v35; // [rsp+30h] [rbp-58h]
  unsigned int v36; // [rsp+34h] [rbp-54h]
  char *v37; // [rsp+38h] [rbp-50h]
  _DWORD *v38; // [rsp+40h] [rbp-48h]
  _DWORD *v39; // [rsp+50h] [rbp-38h]

  v4 = a3;
  HeapPages = 0LL;
  v36 = 0;
  v6 = 0LL;
  v7 = 16;
  v8 = 2LL;
  if ( v4 == 1 )
    v7 = 8;
  v35 = v7;
  v9 = a1;
  if ( v4 != 1 )
  {
    v9 = a1 + 3;
    v8 = 4LL;
  }
  v39 = &a1[v8];
  if ( a2 )
    *v9 = 0;
  v10 = ExAcquireSpinLockExclusive(&ExpLargePoolTableLock);
  while ( 1 )
  {
    v11 = v10;
    if ( v4 == 1 )
    {
      v12 = (const void *)PoolBigPageTable;
      v13 = PoolBigPageTableSize;
    }
    else
    {
      v14 = KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25];
      v12 = *(const void **)(v14 + 824);
      v13 = *(_QWORD *)(v14 + 832);
    }
    if ( !v12 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&ExpLargePoolTableLock);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v11 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v33 = ~(unsigned __int16)(-1LL << (v11 + 1));
            v20 = (v33 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v33;
            if ( v20 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v11);
      if ( HeapPages )
      {
        HeapFromVA = (__int128 *)ExGetHeapFromVA((ULONG_PTR)HeapPages);
        RtlpHpFreeHeap(HeapFromVA, (__int64)HeapPages, 0, 0LL);
      }
      *a4 = 0;
      return 0LL;
    }
    if ( HeapPages && v6 >= v13 )
      break;
    v6 = v13;
    ExReleaseSpinLockExclusiveFromDpcLevel(&ExpLargePoolTableLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v25 = KeGetCurrentIrql();
        if ( v25 <= 0xFu && v11 <= 0xFu && v25 >= 2u )
        {
          v26 = KeGetCurrentPrcb();
          v27 = v26->SchedulerAssist;
          v28 = ~(unsigned __int16)(-1LL << (v11 + 1));
          v20 = (v28 & v27[5]) == 0;
          v27[5] &= v28;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick((__int64)v26);
        }
      }
    }
    __writecr8(v11);
    if ( HeapPages )
    {
      v29 = (__int128 *)ExGetHeapFromVA((ULONG_PTR)HeapPages);
      RtlpHpFreeHeap(v29, (__int64)HeapPages, 0, 0LL);
    }
    HeapPages = (char *)ExAllocateHeapPages();
    if ( !HeapPages )
      return 3221225626LL;
    v10 = ExAcquireSpinLockExclusive(&ExpLargePoolTableLock);
    v4 = a3;
  }
  v15 = 32 * v13;
  memmove(HeapPages, v12, v15);
  ExReleaseSpinLockExclusiveFromDpcLevel(&ExpLargePoolTableLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v16 = KeGetCurrentIrql();
      if ( v16 <= 0xFu && v11 <= 0xFu && v16 >= 2u )
      {
        v17 = KeGetCurrentPrcb();
        v18 = v17->SchedulerAssist;
        v19 = ~(unsigned __int16)(-1LL << (v11 + 1));
        v20 = (v19 & v18[5]) == 0;
        v18[5] &= v19;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick((__int64)v17);
      }
    }
  }
  __writecr8(v11);
  v37 = HeapPages;
  v38 = v39;
  while ( 1 )
  {
    v21 = v35;
    if ( v37 >= &HeapPages[v15] )
      break;
    v22 = *(_QWORD *)v37;
    if ( (*(_QWORD *)v37 & 1) == 0 )
    {
      if ( a2 )
        ++*v9;
      v35 += 24;
      if ( v21 >= 0xFFFFFFE8 )
      {
        v36 = -1073741675;
        break;
      }
      if ( v35 <= a2 )
      {
        if ( a2 )
        {
          *(_QWORD *)v38 = v22;
          if ( a3 == 1 && (*((_DWORD *)v37 + 3) & 0x100) == 0 )
            *(_QWORD *)v38 = v22 | 1;
          v38[4] = *((_DWORD *)v37 + 2);
          *((_QWORD *)v38 + 1) = *((_QWORD *)v37 + 2);
          v38 += 6;
        }
      }
      else
      {
        v36 = -1073741820;
      }
    }
    v37 += 32;
  }
  v23 = (__int128 *)ExGetHeapFromVA((ULONG_PTR)HeapPages);
  RtlpHpFreeHeap(v23, (__int64)HeapPages, 0, 0LL);
  *a4 = v35;
  return v36;
}
