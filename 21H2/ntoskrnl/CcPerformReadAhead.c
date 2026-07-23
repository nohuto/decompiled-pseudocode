/*
 * XREFs of CcPerformReadAhead @ 0x140304B40
 * Callers:
 *     CcWorkerThread @ 0x1402FDF40 (CcWorkerThread.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     IoDiskIoAttributionDereference @ 0x140207954 (IoDiskIoAttributionDereference.c)
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     FsRtlIsNtstatusExpected @ 0x1402406E0 (FsRtlIsNtstatusExpected.c)
 *     EtwTraceKernelEvent @ 0x14029BFE0 (EtwTraceKernelEvent.c)
 *     KxAcquireSpinLock @ 0x1402CDEB0 (KxAcquireSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     PsGetPagePriorityThread @ 0x1402E7020 (PsGetPagePriorityThread.c)
 *     PsSetPagePriorityThread @ 0x140302334 (PsSetPagePriorityThread.c)
 *     MmWaitForCacheManagerPrefetch @ 0x1403062D8 (MmWaitForCacheManagerPrefetch.c)
 *     CcDecrementOpenCount @ 0x14031DE8C (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x14031E550 (CcGetPartition.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     MmPrefetchForCacheManager @ 0x1406FFD6C (MmPrefetchForCacheManager.c)
 *     CcMapAndCopyFromCache @ 0x140706930 (CcMapAndCopyFromCache.c)
 */

__int64 __fastcall CcPerformReadAhead(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r13
  __int64 v4; // rdx
  unsigned __int8 v5; // al
  signed __int64 v6; // rbx
  unsigned int v7; // r14d
  __int64 v8; // rdi
  BOOL v9; // eax
  int v10; // r8d
  unsigned __int8 OldIrql; // r15
  signed __int64 v12; // rcx
  unsigned int v13; // r13d
  unsigned int v14; // r15d
  __int64 v15; // rdi
  struct _KTHREAD *v16; // rbx
  int PagePriorityThread; // edi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v21; // eax
  bool v22; // zf
  __int64 v23; // r14
  __int64 v24; // rbx
  unsigned __int8 v25; // bl
  __int64 v26; // rcx
  _QWORD *v27; // rbx
  unsigned __int8 v28; // bl
  __int64 result; // rax
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r10
  _DWORD *v32; // r9
  int v33; // eax
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // r9
  _DWORD *v36; // r8
  int v37; // eax
  unsigned int v38; // [rsp+40h] [rbp-188h]
  int v39; // [rsp+44h] [rbp-184h]
  int v40; // [rsp+48h] [rbp-180h]
  int v41; // [rsp+50h] [rbp-178h]
  int v42; // [rsp+54h] [rbp-174h]
  int v43; // [rsp+58h] [rbp-170h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-160h] BYREF
  BOOL v46; // [rsp+80h] [rbp-148h]
  int v47; // [rsp+84h] [rbp-144h]
  unsigned int v48; // [rsp+88h] [rbp-140h]
  unsigned int v49; // [rsp+8Ch] [rbp-13Ch]
  unsigned int v50; // [rsp+90h] [rbp-138h]
  signed __int64 v51; // [rsp+98h] [rbp-130h]
  PVOID P; // [rsp+A0h] [rbp-128h]
  __int64 Partition; // [rsp+A8h] [rbp-120h]
  __int64 v54; // [rsp+B0h] [rbp-118h]
  _QWORD *v55; // [rsp+B8h] [rbp-110h]
  unsigned int v56; // [rsp+C0h] [rbp-108h]
  __int64 v57; // [rsp+C4h] [rbp-104h] BYREF
  int v58; // [rsp+D4h] [rbp-F4h]
  __int64 v59; // [rsp+D8h] [rbp-F0h]
  __int64 v60; // [rsp+E0h] [rbp-E8h]
  __int64 v61; // [rsp+E8h] [rbp-E0h]
  signed __int64 v62; // [rsp+F0h] [rbp-D8h]
  __int64 v63; // [rsp+F8h] [rbp-D0h]
  __int64 v64; // [rsp+100h] [rbp-C8h]
  struct _KTHREAD *v65; // [rsp+108h] [rbp-C0h]
  struct _KTHREAD *CurrentThread; // [rsp+118h] [rbp-B0h]
  _QWORD v67[2]; // [rsp+130h] [rbp-98h] BYREF
  _QWORD v68[2]; // [rsp+140h] [rbp-88h] BYREF
  _QWORD v69[2]; // [rsp+150h] [rbp-78h] BYREF
  unsigned int v70; // [rsp+160h] [rbp-68h]
  int v71; // [rsp+164h] [rbp-64h]
  __int64 v72; // [rsp+168h] [rbp-60h]
  _QWORD v73[2]; // [rsp+170h] [rbp-58h] BYREF
  unsigned int v74; // [rsp+180h] [rbp-48h]
  int v75; // [rsp+184h] [rbp-44h]
  __int64 v76; // [rsp+188h] [rbp-40h]

  v3 = a2;
  v59 = a2;
  v64 = a1;
  v63 = a2;
  v55 = 0LL;
  v51 = 0LL;
  v62 = 0LL;
  v50 = 0;
  v38 = 0;
  v60 = 0LL;
  v61 = 0LL;
  v46 = 0;
  v39 = 0;
  v42 = 0;
  v43 = 0;
  v40 = 0;
  P = 0LL;
  v47 = 0;
  v48 = 0;
  Partition = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentThread = KeGetCurrentThread();
  CurrentThread[1].Timer.DueTime.HighPart = 0;
  v55 = *(_QWORD **)(*(_QWORD *)(a2 + 40) + 8LL);
  v60 = v55[26];
  v61 = v55[27];
  Partition = CcGetPartition(v55, a2, a3);
  LOBYTE(v4) = 1;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64))(v60 + 16))(v61, v4);
  v41 = v5;
  if ( v5 )
  {
    while ( 1 )
    {
      P = 0LL;
      v6 = v51;
      v7 = v38;
      while ( 1 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
        v8 = *(_QWORD *)(v3 + 48);
        v54 = v8;
        if ( v8 )
        {
          KxAcquireSpinLock((PKSPIN_LOCK)(v8 + 80));
          v7 = *(_DWORD *)(v8 + 52);
          v9 = v7 == 0;
          v46 = v9;
          v6 = *(_QWORD *)(v8 + 56);
          v51 = v6;
          if ( v7 > 0x800000 )
            v7 = 0x800000;
          v38 = v7;
          *(_DWORD *)(v8 + 52) = 0;
          if ( !v9 )
            *(_QWORD *)(v8 + 64) = v6 + v7;
          if ( (*(_DWORD *)v8 & 0x200000) != 0 )
          {
            v47 = 1;
            v48 = *(_DWORD *)(v8 + 88);
          }
          KxReleaseSpinLock((PKSPIN_LOCK)(v8 + 80));
          v39 = (*(_DWORD *)v8 >> 18) & 7;
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
              v21 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v22 = (v21 & SchedulerAssist[5]) == 0;
              v10 = v21 & SchedulerAssist[5];
              SchedulerAssist[5] = v10;
              if ( v22 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              v7 = v38;
              v6 = v51;
              v8 = v54;
            }
          }
        }
        __writecr8(OldIrql);
        if ( !v8 || v46 )
          break;
        v12 = v55[1];
        if ( v6 < v12 )
        {
          v43 = 1;
          if ( v6 + v7 >= v12 )
          {
            v7 = v12 - v6;
            v42 = 1;
          }
          v7 = (v7 + 4095) & 0xFFFFF000;
          v38 = v7;
          v13 = v7;
          v56 = v7;
          v62 = v6;
          v50 = v7;
          if ( v47 )
          {
            if ( !v48 )
              KeBugCheckEx(0x34u, 0xA2FuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
            v14 = v7;
            if ( v7 > v48 )
              v14 = v48;
            v49 = v14;
          }
          else
          {
            v14 = v7;
            v49 = v7;
          }
          v15 = a1;
          if ( (xmmword_140CFC490 & 0x20000) != 0 )
          {
            v69[1] = v6;
            v70 = v7;
            v69[0] = a1;
            v71 = v39;
            v72 = 0LL;
            v67[0] = v69;
            v67[1] = 32LL;
            EtwTraceKernelEvent((int)v67, 1, 0x80020000, 5635, 4200706);
          }
          while ( v13 )
          {
            if ( v14 > v13 )
              v14 = v13;
            v49 = v14;
            if ( (xmmword_140CFC490 & 0x20000) != 0 )
            {
              v76 = 0LL;
              v73[1] = v6;
              v74 = v14;
              v73[0] = v15;
              v75 = v39;
              v68[0] = v73;
              v68[1] = 32LL;
              EtwTraceKernelEvent((int)v68, 1, 0x80020000, 5643, 4200706);
            }
            v40 |= MmPrefetchForCacheManager(v59, v6, v10, v14, v39);
            v13 -= v14;
            v56 = v13;
            v6 += v14;
            v51 = v6;
            v15 = a1;
          }
          v3 = v59;
        }
      }
      if ( !P )
        break;
      v16 = KeGetCurrentThread();
      v65 = v16;
      PagePriorityThread = PsGetPagePriorityThread((__int64)v16);
      v58 = PagePriorityThread;
      LODWORD(v57) = 0;
      MmWaitForCacheManagerPrefetch(P);
      PsSetPagePriorityThread((__int64)v16, v39);
      CcMapAndCopyFromCache(v3, 0LL, (__int64)&v57, v39, *(_QWORD *)(a1 + 24));
      PsSetPagePriorityThread((__int64)v16, PagePriorityThread);
    }
  }
  __addgsdword(0x8164u, KeGetCurrentThread()[1].Timer.DueTime.HighPart);
  if ( v41 )
    (*(void (__fastcall **)(__int64))(v60 + 24))(v61);
  v23 = Partition;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
  v24 = *(_QWORD *)(v3 + 48);
  v54 = v24;
  if ( v24 )
  {
    KxAcquireSpinLock((PKSPIN_LOCK)(v24 + 80));
    *(_DWORD *)v24 &= ~0x10000u;
    if ( v42 && (*(_DWORD *)(v3 + 80) & 0x20) != 0 )
      *(_QWORD *)(v24 + 64) = 0LL;
    if ( !v40 && v43 )
      *(_DWORD *)v24 &= ~0x20000u;
    KxReleaseSpinLock((PKSPIN_LOCK)(v24 + 80));
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v25 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v30 = KeGetCurrentIrql();
      if ( v30 <= 0xFu && LockHandle.OldIrql <= 0xFu && v30 >= 2u )
      {
        v31 = KeGetCurrentPrcb();
        v32 = v31->SchedulerAssist;
        v33 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v22 = (v33 & v32[5]) == 0;
        v32[5] &= v33;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick(v31);
      }
    }
  }
  __writecr8(v25);
  ObfDereferenceObjectWithTag((PVOID)v3, 0x746C6644u);
  v26 = *(_QWORD *)(a1 + 24);
  if ( v26 )
    IoDiskIoAttributionDereference(v26);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v23 + 128), &LockHandle);
  v27 = v55;
  CcDecrementOpenCount(v55);
  *((_DWORD *)v27 + 38) &= ~0x4000u;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v28 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v34 = KeGetCurrentIrql();
      if ( v34 <= 0xFu && LockHandle.OldIrql <= 0xFu && v34 >= 2u )
      {
        v35 = KeGetCurrentPrcb();
        v36 = v35->SchedulerAssist;
        v37 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v22 = (v37 & v36[5]) == 0;
        v36[5] &= v37;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick(v35);
      }
    }
  }
  result = v28;
  __writecr8(v28);
  return result;
}
