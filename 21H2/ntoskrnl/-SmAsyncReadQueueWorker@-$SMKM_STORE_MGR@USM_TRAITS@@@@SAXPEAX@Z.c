/*
 * XREFs of ?SmAsyncReadQueueWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140387E80
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x14028AA90 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     KeQueryPerformanceCounter @ 0x1402D0BC0 (KeQueryPerformanceCounter.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmAsyncReadQueueWorker(__int64 a1)
{
  _QWORD *v1; // r14
  int v2; // eax
  __int64 v3; // rdx
  int v4; // r8d
  unsigned int v5; // r12d
  KSPIN_LOCK *v6; // r15
  __int64 v7; // rsi
  KIRQL v8; // al
  unsigned __int64 v9; // rbx
  LARGE_INTEGER v10; // rbx
  unsigned __int64 v11; // rax
  LARGE_INTEGER PerformanceCounter; // rbx
  int i; // r14d
  unsigned __int64 v14; // rdi
  _QWORD *v15; // rax
  int v16; // edi
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v21; // eax
  bool v22; // zf
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r10
  _DWORD *v25; // r9
  int v26; // eax
  _QWORD *v27; // rax
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r10
  _DWORD *v30; // r9
  int v31; // eax
  struct _KPRCB *v32; // r9
  _DWORD *v33; // r8
  LARGE_INTEGER PerformanceFrequency; // [rsp+50h] [rbp+8h] BYREF

  v1 = (_QWORD *)a1;
  v2 = *(_DWORD *)(a1 + 40) & 3;
  v3 = *(_QWORD *)(a1 + 40);
  v4 = *(_DWORD *)(a1 + 32) & 7;
  PerformanceFrequency.QuadPart = 0LL;
  v3 &= 0xFFFFFFFFFFFFFFFCuLL;
  v5 = 100;
  v6 = (KSPIN_LOCK *)(v3 + 768);
  v7 = v3 + 24LL * ((8 * v2) | (unsigned int)v4);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 768));
  --*(_DWORD *)(v7 + 16);
  ++*(_DWORD *)(v7 + 20);
  v9 = v8;
  KxReleaseSpinLock(v6);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v22 = (v21 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v21;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v9);
LABEL_3:
  v10 = KeQueryPerformanceCounter(&PerformanceFrequency);
  SMKM_STORE<SM_TRAITS>::SmStWorkItemQueue(v1[4] & 0xFFFFFFFFFFFFFFF8uLL, (unsigned __int64)(v1 - 5), 0);
  v11 = 1000000 * (*(_QWORD *)&KeQueryPerformanceCounter(0LL) - v10.QuadPart) / PerformanceFrequency.QuadPart;
  if ( v11 < v5 )
    v5 = v11;
  PerformanceCounter.QuadPart = 0LL;
  for ( i = 0; ; i = 1 )
  {
LABEL_6:
    v14 = KeAcquireSpinLockRaiseToDpc(v6);
    v15 = *(_QWORD **)(v7 + 8);
    if ( *v15 )
    {
      if ( v15 == (_QWORD *)v7 )
      {
        v1 = 0LL;
      }
      else
      {
        v1 = *(_QWORD **)v7;
        *(_QWORD *)v7 = **(_QWORD **)v7;
        v27 = *(_QWORD **)(v7 + 8);
        if ( v1 == v27 )
        {
          *(_QWORD *)v7 = 0LL;
          *(_QWORD *)(v7 + 8) = v7;
        }
        else
        {
          --*v27;
        }
      }
      KxReleaseSpinLock(v6);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v28 = KeGetCurrentIrql();
          if ( v28 <= 0xFu && (unsigned __int8)v14 <= 0xFu && v28 >= 2u )
          {
            v29 = KeGetCurrentPrcb();
            v30 = v29->SchedulerAssist;
            v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
            v22 = (v31 & v30[5]) == 0;
            v30[5] &= v31;
            if ( v22 )
              KiRemoveSystemWorkPriorityKick(v29);
          }
        }
      }
      __writecr8(v14);
      goto LABEL_3;
    }
    if ( i )
      break;
    KxReleaseSpinLock(v6);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v23 = KeGetCurrentIrql();
        if ( v23 <= 0xFu && (unsigned __int8)v14 <= 0xFu && v23 >= 2u )
        {
          v24 = KeGetCurrentPrcb();
          v25 = v24->SchedulerAssist;
          v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
          v22 = (v26 & v25[5]) == 0;
          v25[5] &= v26;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick(v24);
        }
      }
    }
    __writecr8(v14);
    if ( !PerformanceCounter.QuadPart )
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v16 = 0;
    while ( *(_DWORD *)(v7 + 16) <= *(_DWORD *)(v7 + 20) )
    {
      if ( **(_QWORD **)(v7 + 8) )
        goto LABEL_6;
      if ( (++v16 & 0x7F) == 0
        && 1000000
         * (*(_QWORD *)&KeQueryPerformanceCounter(0LL) - PerformanceCounter.QuadPart)
         / PerformanceFrequency.QuadPart >= (unsigned __int64)v5 )
      {
        break;
      }
      _mm_pause();
    }
  }
  --*(_DWORD *)(v7 + 20);
  KxReleaseSpinLock(v6);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v14 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v32 = KeGetCurrentPrcb();
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
        v33 = v32->SchedulerAssist;
        v22 = ((unsigned int)result & v33[5]) == 0;
        v33[5] &= result;
        if ( v22 )
          result = KiRemoveSystemWorkPriorityKick(v32);
      }
    }
  }
  __writecr8(v14);
  return result;
}
