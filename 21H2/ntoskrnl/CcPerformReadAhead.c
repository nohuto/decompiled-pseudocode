/*
 * XREFs of CcPerformReadAhead @ 0x1402F9DF0
 * Callers:
 *     CcWorkerThread @ 0x1402F31F0 (CcWorkerThread.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1402295B0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140229C70 (KxReleaseSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022EE10 (KeAcquireInStackQueuedSpinLock.c)
 *     PsGetPagePriorityThread @ 0x1402427D0 (PsGetPagePriorityThread.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     IoDiskIoAttributionDereference @ 0x14028A7B4 (IoDiskIoAttributionDereference.c)
 *     FsRtlIsNtstatusExpected @ 0x1402C2240 (FsRtlIsNtstatusExpected.c)
 *     EtwTraceKernelEvent @ 0x1402EAC90 (EtwTraceKernelEvent.c)
 *     PsSetPagePriorityThread @ 0x1402F75E4 (PsSetPagePriorityThread.c)
 *     MmWaitForCacheManagerPrefetch @ 0x1402FB588 (MmWaitForCacheManagerPrefetch.c)
 *     CcDecrementOpenCount @ 0x14031313C (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x140313800 (CcGetPartition.c)
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     MmPrefetchForCacheManager @ 0x1406E898C (MmPrefetchForCacheManager.c)
 *     CcMapAndCopyFromCache @ 0x1406EF550 (CcMapAndCopyFromCache.c)
 */

__int64 __fastcall CcPerformReadAhead(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rdx
  unsigned __int8 v4; // al
  signed __int64 v5; // rbx
  unsigned int v6; // r14d
  __int64 v7; // rdi
  BOOL v8; // eax
  int v9; // r8d
  unsigned __int8 OldIrql; // r15
  signed __int64 v11; // rcx
  unsigned int v12; // r13d
  unsigned int v13; // r15d
  __int64 v14; // rdi
  struct _KTHREAD *v15; // rbx
  int PagePriorityThread; // edi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v20; // eax
  bool v21; // zf
  __int64 v22; // r14
  __int64 v23; // rbx
  unsigned __int8 v24; // bl
  __int64 v25; // rcx
  _QWORD *v26; // rbx
  unsigned __int8 v27; // bl
  __int64 result; // rax
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r10
  _DWORD *v31; // r9
  int v32; // eax
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // r9
  _DWORD *v35; // r8
  int v36; // eax
  unsigned int v37; // [rsp+40h] [rbp-188h]
  int v38; // [rsp+44h] [rbp-184h]
  int v39; // [rsp+48h] [rbp-180h]
  int v40; // [rsp+50h] [rbp-178h]
  int v41; // [rsp+54h] [rbp-174h]
  int v42; // [rsp+58h] [rbp-170h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-160h] BYREF
  BOOL v45; // [rsp+80h] [rbp-148h]
  int v46; // [rsp+84h] [rbp-144h]
  unsigned int v47; // [rsp+88h] [rbp-140h]
  unsigned int v48; // [rsp+8Ch] [rbp-13Ch]
  unsigned int v49; // [rsp+90h] [rbp-138h]
  signed __int64 v50; // [rsp+98h] [rbp-130h]
  PVOID P; // [rsp+A0h] [rbp-128h]
  __int64 Partition; // [rsp+A8h] [rbp-120h]
  __int64 v53; // [rsp+B0h] [rbp-118h]
  _QWORD *v54; // [rsp+B8h] [rbp-110h]
  unsigned int v55; // [rsp+C0h] [rbp-108h]
  __int64 v56; // [rsp+C4h] [rbp-104h] BYREF
  int v57; // [rsp+D4h] [rbp-F4h]
  __int64 v58; // [rsp+D8h] [rbp-F0h]
  __int64 v59; // [rsp+E0h] [rbp-E8h]
  __int64 v60; // [rsp+E8h] [rbp-E0h]
  signed __int64 v61; // [rsp+F0h] [rbp-D8h]
  __int64 v62; // [rsp+F8h] [rbp-D0h]
  __int64 v63; // [rsp+100h] [rbp-C8h]
  struct _KTHREAD *v64; // [rsp+108h] [rbp-C0h]
  struct _KTHREAD *CurrentThread; // [rsp+118h] [rbp-B0h]
  _QWORD v66[2]; // [rsp+130h] [rbp-98h] BYREF
  _QWORD v67[2]; // [rsp+140h] [rbp-88h] BYREF
  _QWORD v68[2]; // [rsp+150h] [rbp-78h] BYREF
  unsigned int v69; // [rsp+160h] [rbp-68h]
  int v70; // [rsp+164h] [rbp-64h]
  __int64 v71; // [rsp+168h] [rbp-60h]
  _QWORD v72[2]; // [rsp+170h] [rbp-58h] BYREF
  unsigned int v73; // [rsp+180h] [rbp-48h]
  int v74; // [rsp+184h] [rbp-44h]
  __int64 v75; // [rsp+188h] [rbp-40h]

  v2 = a2;
  v58 = a2;
  v63 = a1;
  v62 = a2;
  v54 = 0LL;
  v50 = 0LL;
  v61 = 0LL;
  v49 = 0;
  v37 = 0;
  v59 = 0LL;
  v60 = 0LL;
  v45 = 0;
  v38 = 0;
  v41 = 0;
  v42 = 0;
  v39 = 0;
  P = 0LL;
  v46 = 0;
  v47 = 0;
  Partition = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentThread = KeGetCurrentThread();
  CurrentThread[1].Timer.DueTime.HighPart = 0;
  v54 = *(_QWORD **)(*(_QWORD *)(a2 + 40) + 8LL);
  v59 = v54[26];
  v60 = v54[27];
  Partition = CcGetPartition(v54);
  LOBYTE(v3) = 1;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64))(v59 + 16))(v60, v3);
  v40 = v4;
  if ( v4 )
  {
    while ( 1 )
    {
      P = 0LL;
      v5 = v50;
      v6 = v37;
      while ( 1 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
        v7 = *(_QWORD *)(v2 + 48);
        v53 = v7;
        if ( v7 )
        {
          KxAcquireSpinLock((PKSPIN_LOCK)(v7 + 80));
          v6 = *(_DWORD *)(v7 + 52);
          v8 = v6 == 0;
          v45 = v8;
          v5 = *(_QWORD *)(v7 + 56);
          v50 = v5;
          if ( v6 > 0x800000 )
            v6 = 0x800000;
          v37 = v6;
          *(_DWORD *)(v7 + 52) = 0;
          if ( !v8 )
            *(_QWORD *)(v7 + 64) = v5 + v6;
          if ( (*(_DWORD *)v7 & 0x200000) != 0 )
          {
            v46 = 1;
            v47 = *(_DWORD *)(v7 + 88);
          }
          KxReleaseSpinLock((PKSPIN_LOCK)(v7 + 80));
          v38 = (*(_DWORD *)v7 >> 18) & 7;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v20 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v21 = (v20 & SchedulerAssist[5]) == 0;
              v9 = v20 & SchedulerAssist[5];
              SchedulerAssist[5] = v9;
              if ( v21 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              v6 = v37;
              v5 = v50;
              v7 = v53;
            }
          }
        }
        __writecr8(OldIrql);
        if ( !v7 || v45 )
          break;
        v11 = v54[1];
        if ( v5 < v11 )
        {
          v42 = 1;
          if ( v5 + v6 >= v11 )
          {
            v6 = v11 - v5;
            v41 = 1;
          }
          v6 = (v6 + 4095) & 0xFFFFF000;
          v37 = v6;
          v12 = v6;
          v55 = v6;
          v61 = v5;
          v49 = v6;
          if ( v46 )
          {
            if ( !v47 )
              KeBugCheckEx(0x34u, 0xA2FuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
            v13 = v6;
            if ( v6 > v47 )
              v13 = v47;
            v48 = v13;
          }
          else
          {
            v13 = v6;
            v48 = v6;
          }
          v14 = a1;
          if ( (xmmword_140CFC490 & 0x20000) != 0 )
          {
            v68[1] = v5;
            v69 = v6;
            v68[0] = a1;
            v70 = v38;
            v71 = 0LL;
            v66[0] = v68;
            v66[1] = 32LL;
            EtwTraceKernelEvent((int)v66, 1, 0x80020000, 5635, 4200706);
          }
          while ( v12 )
          {
            if ( v13 > v12 )
              v13 = v12;
            v48 = v13;
            if ( (xmmword_140CFC490 & 0x20000) != 0 )
            {
              v75 = 0LL;
              v72[1] = v5;
              v73 = v13;
              v72[0] = v14;
              v74 = v38;
              v67[0] = v72;
              v67[1] = 32LL;
              EtwTraceKernelEvent((int)v67, 1, 0x80020000, 5643, 4200706);
            }
            v39 |= MmPrefetchForCacheManager(v58, v5, v9, v13, v38);
            v12 -= v13;
            v55 = v12;
            v5 += v13;
            v50 = v5;
            v14 = a1;
          }
          v2 = v58;
        }
      }
      if ( !P )
        break;
      v15 = KeGetCurrentThread();
      v64 = v15;
      PagePriorityThread = PsGetPagePriorityThread((__int64)v15);
      v57 = PagePriorityThread;
      LODWORD(v56) = 0;
      MmWaitForCacheManagerPrefetch(P);
      PsSetPagePriorityThread((__int64)v15, v38);
      CcMapAndCopyFromCache(v2, 0LL, (__int64)&v56, v38, *(_QWORD *)(a1 + 24));
      PsSetPagePriorityThread((__int64)v15, PagePriorityThread);
    }
  }
  __addgsdword(0x8164u, KeGetCurrentThread()[1].Timer.DueTime.HighPart);
  if ( v40 )
    (*(void (__fastcall **)(__int64))(v59 + 24))(v60);
  v22 = Partition;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
  v23 = *(_QWORD *)(v2 + 48);
  v53 = v23;
  if ( v23 )
  {
    KxAcquireSpinLock((PKSPIN_LOCK)(v23 + 80));
    *(_DWORD *)v23 &= ~0x10000u;
    if ( v41 && (*(_DWORD *)(v2 + 80) & 0x20) != 0 )
      *(_QWORD *)(v23 + 64) = 0LL;
    if ( !v39 && v42 )
      *(_DWORD *)v23 &= ~0x20000u;
    KxReleaseSpinLock((PKSPIN_LOCK)(v23 + 80));
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v24 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v29 = KeGetCurrentIrql();
      if ( v29 <= 0xFu && LockHandle.OldIrql <= 0xFu && v29 >= 2u )
      {
        v30 = KeGetCurrentPrcb();
        v31 = v30->SchedulerAssist;
        v32 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v21 = (v32 & v31[5]) == 0;
        v31[5] &= v32;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick(v30);
      }
    }
  }
  __writecr8(v24);
  ObfDereferenceObjectWithTag((PVOID)v2, 0x746C6644u);
  v25 = *(_QWORD *)(a1 + 24);
  if ( v25 )
    IoDiskIoAttributionDereference(v25);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v22 + 128), &LockHandle);
  v26 = v54;
  CcDecrementOpenCount(v54);
  *((_DWORD *)v26 + 38) &= ~0x4000u;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v27 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v33 = KeGetCurrentIrql();
      if ( v33 <= 0xFu && LockHandle.OldIrql <= 0xFu && v33 >= 2u )
      {
        v34 = KeGetCurrentPrcb();
        v35 = v34->SchedulerAssist;
        v36 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v21 = (v36 & v35[5]) == 0;
        v35[5] &= v36;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick(v34);
      }
    }
  }
  result = v27;
  __writecr8(v27);
  return result;
}
