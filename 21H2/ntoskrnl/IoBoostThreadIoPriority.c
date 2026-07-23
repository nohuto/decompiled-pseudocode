/*
 * XREFs of IoBoostThreadIoPriority @ 0x140363380
 * Callers:
 *     ExpBoostIoAfterAcquire @ 0x140204490 (ExpBoostIoAfterAcquire.c)
 *     FsRtlpWaitForIoAtEof @ 0x14020E99C (FsRtlpWaitForIoAtEof.c)
 *     FsRtlpDoBoost @ 0x140249120 (FsRtlpDoBoost.c)
 *     CcBoostLowPriorityWorkerThread @ 0x14024ECCC (CcBoostLowPriorityWorkerThread.c)
 *     ExpApplyPriorityBoost @ 0x1402D3850 (ExpApplyPriorityBoost.c)
 *     KiAbProcessThreadLocks @ 0x1402FBE14 (KiAbProcessThreadLocks.c)
 *     KiAbProcessContextSwitch @ 0x1403529A0 (KiAbProcessContextSwitch.c)
 *     ExpAcquireResourceSharedLite @ 0x140356DB0 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireResourceExclusiveLite @ 0x140357700 (ExpAcquireResourceExclusiveLite.c)
 *     MiModifiedPageWriter @ 0x1403BF240 (MiModifiedPageWriter.c)
 *     IoBoostThreadIo @ 0x1405058B0 (IoBoostThreadIo.c)
 *     PspBoostJobIoPriorityCallback @ 0x14060A390 (PspBoostJobIoPriorityCallback.c)
 *     NtSetInformationThread @ 0x140714260 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x140721890 (NtSetInformationProcess.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExReferenceCallBackBlock @ 0x14027BEC0 (ExReferenceCallBackBlock.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x14031B920 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x14031B9C0 (KeAcquireQueuedSpinLock.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IoBoostThreadIoPriority(KSPIN_LOCK *a1, int a2, int a3)
{
  unsigned int v4; // r14d
  char v6; // r15
  KSPIN_LOCK *v7; // rsi
  unsigned __int64 v8; // rdi
  __int64 result; // rax
  __int64 v10; // rsi
  __int64 v11; // rdi
  struct _EX_RUNDOWN_REF *v12; // rax
  KIRQL v13; // al
  KSPIN_LOCK v14; // rdi
  KIRQL v15; // si
  __int64 v16; // rcx
  unsigned __int64 v17; // rsi
  void *v18; // rsi
  unsigned __int16 v19; // ax
  unsigned __int16 v20; // si
  __int64 v21; // r15
  __int64 v22; // r13
  unsigned __int16 v23; // di
  _QWORD *v24; // rsi
  unsigned __int64 v25; // rdi
  __int64 v26; // rsi
  struct _EX_RUNDOWN_REF *v27; // r8
  volatile __int64 **v28; // rcx
  __int64 i; // rdx
  signed __int64 v30; // rax
  signed __int64 v31; // rtt
  KIRQL v32; // al
  __int64 v33; // rdi
  __int64 v34; // rcx
  __int64 v35; // rdx
  _QWORD *v36; // rax
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  bool v39; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v41; // r10
  _DWORD *v42; // r9
  int v43; // eax
  _QWORD *PoolWithTag; // rax
  unsigned __int8 v45; // al
  struct _KPRCB *v46; // r9
  _DWORD *v47; // r8
  int v48; // eax
  KIRQL v49; // [rsp+28h] [rbp-E0h]
  KIRQL v50; // [rsp+28h] [rbp-E0h]
  char v51; // [rsp+29h] [rbp-DFh]
  __int16 v53; // [rsp+2Ch] [rbp-DCh]
  __int64 v55; // [rsp+38h] [rbp-D0h]
  void *v56; // [rsp+40h] [rbp-C8h]
  __int64 v57; // [rsp+40h] [rbp-C8h]
  _QWORD v59[10]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD *v60; // [rsp+A8h] [rbp-60h]
  PEX_RUNDOWN_REF RunRef[8]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v62[8]; // [rsp+F8h] [rbp-10h] BYREF

  v4 = 0;
  v6 = 0;
  memset(RunRef, 0, sizeof(RunRef));
  memset(v62, 0, sizeof(v62));
  if ( a3 < 0 )
  {
    v6 = 1;
  }
  else
  {
    v7 = a1 + 177;
    v8 = KeAcquireSpinLockRaiseToDpc(a1 + 177);
    if ( (KSPIN_LOCK *)a1[150] == a1 + 150 )
    {
      if ( (a3 & 0x40000000) == 0 )
      {
        KxReleaseSpinLock(v7);
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
              v39 = ((unsigned int)result & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= result;
              if ( v39 )
                result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v8);
        return result;
      }
      v6 = 1;
    }
    KxReleaseSpinLock(v7);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
        {
          v41 = KeGetCurrentPrcb();
          v42 = v41->SchedulerAssist;
          v43 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
          v39 = (v43 & v42[5]) == 0;
          v42[5] &= v43;
          if ( v39 )
            KiRemoveSystemWorkPriorityKick(v41);
        }
      }
    }
    __writecr8(v8);
  }
  v10 = 8LL;
  v11 = 0LL;
  do
  {
    v12 = ExReferenceCallBackBlock((signed __int64 *)((char *)&IopUpdatePriorityCallbackRoutine + v11 * 8));
    RunRef[v11] = v12;
    if ( v12 )
      v62[v11] = v12[2].Count;
    ++v11;
    --v10;
  }
  while ( v10 );
  if ( v6 == 1 )
  {
    result = 0LL;
    goto LABEL_24;
  }
  v56 = 0LL;
  v13 = KeAcquireSpinLockRaiseToDpc(a1 + 177);
  v14 = a1[150];
  v49 = v13;
  v15 = v13;
  if ( (KSPIN_LOCK *)v14 == a1 + 150 )
    goto LABEL_22;
  do
  {
    v16 = *(char *)(v14 + 34);
    if ( *(char *)(v14 + 35) > (char)v16 )
      goto LABEL_20;
    v17 = *(_QWORD *)(v14 + 152);
    if ( v17 >= v14 + 8 * (v16 + 8 * v16 + 22) )
      goto LABEL_20;
    v18 = *(void **)(v17 + 40);
    if ( !v18 )
      goto LABEL_20;
    v19 = 0;
    v53 = 0;
    while ( 1 )
    {
      v55 = v19;
      if ( RunRef[v19] )
        break;
LABEL_19:
      v53 = ++v19;
      if ( v19 >= 8u )
        goto LABEL_20;
    }
    v28 = (volatile __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
    v51 = 0;
    KxAcquireQueuedSpinLock((__int64)v28, v28[1]);
    for ( i = *(_QWORD *)(*(_QWORD *)(v62[v55] + 32LL) + 8LL); i; i = *(_QWORD *)(i + 16) )
    {
      if ( (void *)i == v18 && (*(_DWORD *)(i + 48) & 0x1000000) != 0 )
      {
        v51 = 1;
        break;
      }
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160));
    if ( v51 != 1 || v56 == v18 )
    {
      v19 = v53;
      goto LABEL_19;
    }
    v56 = v18;
    if ( v4 >= 2 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x43426F49u);
      if ( PoolWithTag )
      {
        PoolWithTag[4] = v60;
        v60 = PoolWithTag;
        PoolWithTag[1] = v18;
        PoolWithTag[2] = a1;
        *PoolWithTag = RunRef[v55];
        *((_WORD *)PoolWithTag + 20) = v53;
        *((_DWORD *)PoolWithTag + 6) = a2;
        goto LABEL_64;
      }
    }
    else
    {
      v35 = 6LL * v4;
      v59[v35] = RunRef[v55];
      LODWORD(v59[v35 + 3]) = a2;
      v59[v35 + 4] = 0LL;
      LOWORD(v59[v35 + 5]) = v53;
      v59[v35 + 1] = v18;
      v59[v35 + 2] = a1;
LABEL_64:
      ++v4;
      ObfReferenceObjectWithTag(v18, 0x746C6644u);
      ObfReferenceObjectWithTag(a1, 0x746C6644u);
      if ( (*(_DWORD *)(v14 - 16) & 2) != 0 )
        ++IoBoostedPagingIrpCount;
      else
        ++IoBoostedThreadedIrpCount;
    }
LABEL_20:
    v14 = *(_QWORD *)v14;
  }
  while ( (KSPIN_LOCK *)v14 != a1 + 150 );
  v15 = v49;
LABEL_22:
  KxReleaseSpinLock(a1 + 177);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v45 = KeGetCurrentIrql();
      if ( v45 <= 0xFu && v15 <= 0xFu && v45 >= 2u )
      {
        v46 = KeGetCurrentPrcb();
        v47 = v46->SchedulerAssist;
        v48 = ~(unsigned __int16)(-1LL << (v15 + 1));
        v39 = (v48 & v47[5]) == 0;
        v47[5] &= v48;
        if ( v39 )
          KiRemoveSystemWorkPriorityKick(v46);
      }
    }
  }
  __writecr8(v15);
  result = 0LL;
  if ( v4 )
    goto LABEL_29;
LABEL_24:
  v20 = 0;
  v57 = 0LL;
  v21 = 0LL;
  while ( 2 )
  {
    v22 = *(__int64 *)((char *)RunRef + v21);
    if ( !v22 )
      goto LABEL_26;
    v32 = KeAcquireQueuedSpinLock(0xAuLL);
    v50 = v32;
    v33 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)((char *)v62 + v21) + 32LL) + 8LL);
    if ( !v33 )
      goto LABEL_58;
    while ( 2 )
    {
      if ( (*(_DWORD *)(v33 + 48) & 0x1000000) == 0 )
        goto LABEL_56;
      if ( v4 < 2 )
      {
        v34 = 6LL * v4;
        LODWORD(v59[v34 + 3]) = a2;
        v59[v34 + 4] = 0LL;
        v59[v34] = v22;
        LOWORD(v59[v34 + 5]) = v20;
        v59[v34 + 1] = v33;
        v59[v34 + 2] = a1;
        goto LABEL_55;
      }
      v36 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x43426F49u);
      if ( v36 )
      {
        v36[4] = v60;
        v60 = v36;
        *v36 = v22;
        *((_WORD *)v36 + 20) = v20;
        v36[1] = v33;
        v36[2] = a1;
        *((_DWORD *)v36 + 6) = a2;
LABEL_55:
        ObfReferenceObjectWithTag((PVOID)v33, 0x746C6644u);
        ObfReferenceObjectWithTag(a1, 0x746C6644u);
        ++v4;
LABEL_56:
        v33 = *(_QWORD *)(v33 + 16);
        if ( !v33 )
          break;
        continue;
      }
      break;
    }
    v21 = v57;
    v32 = v50;
LABEL_58:
    KeReleaseQueuedSpinLock(0xAuLL, v32);
    result = 0LL;
LABEL_26:
    ++v20;
    v21 += 8LL;
    v57 = v21;
    if ( v20 < 8u )
      continue;
    break;
  }
  if ( v4 )
    ++IoBlanketBoostCount;
LABEL_29:
  v23 = 0;
  if ( v4 )
  {
    do
    {
      if ( v23 >= 2u )
      {
        v24 = v60;
        v60 = (_QWORD *)v60[4];
      }
      else
      {
        v24 = &v59[6 * v23];
      }
      (*(void (__fastcall **)(_QWORD, _QWORD *, _QWORD))(*v24 + 8LL))(*v24, v24 + 1, 0LL);
      if ( v23 >= 2u )
        ExFreePoolWithTag(v24, 0);
      ++v23;
    }
    while ( v23 < v4 );
    result = 0LL;
  }
  v25 = 0LL;
  v26 = 8LL;
  do
  {
    v27 = RunRef[v25 / 8];
    if ( v27 )
    {
      _m_prefetchw((char *)&IopUpdatePriorityCallbackRoutine + v25);
      v30 = *(_QWORD *)((char *)&IopUpdatePriorityCallbackRoutine + v25);
      if ( ((unsigned __int64)v27 ^ v30) >= 0xF )
      {
LABEL_93:
        ExReleaseRundownProtection(v27);
      }
      else
      {
        while ( 1 )
        {
          v31 = v30;
          v30 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)((char *)&IopUpdatePriorityCallbackRoutine + v25),
                  v30 + 1,
                  v30);
          if ( v31 == v30 )
            break;
          if ( ((unsigned __int64)v27 ^ v30) >= 0xF )
            goto LABEL_93;
        }
      }
      result = 0LL;
    }
    v25 += 8LL;
    --v26;
  }
  while ( v26 );
  return result;
}
