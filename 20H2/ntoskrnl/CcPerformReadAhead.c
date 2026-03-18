/*
 * XREFs of CcPerformReadAhead @ 0x14024B924
 * Callers:
 *     CcWorkerThread @ 0x140249690 (CcWorkerThread.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x14021E680 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     PsSetPagePriorityThread @ 0x140249634 (PsSetPagePriorityThread.c)
 *     MmWaitForCacheManagerPrefetch @ 0x14024CDBC (MmWaitForCacheManagerPrefetch.c)
 *     PsGetPagePriorityThread @ 0x14028EE10 (PsGetPagePriorityThread.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     CcDecrementOpenCount @ 0x14029A71C (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x14029ADE0 (CcGetPartition.c)
 *     IoDiskIoAttributionDereference @ 0x1402EEE34 (IoDiskIoAttributionDereference.c)
 *     EtwTraceKernelEvent @ 0x140313A28 (EtwTraceKernelEvent.c)
 *     FsRtlIsNtstatusExpected @ 0x140320A00 (FsRtlIsNtstatusExpected.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     MmPrefetchForCacheManager @ 0x14065829C (MmPrefetchForCacheManager.c)
 *     CcMapAndCopyFromCache @ 0x1406809D0 (CcMapAndCopyFromCache.c)
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
  __int64 v9; // rdx
  __int64 v10; // r8
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 OldIrql; // r15
  signed __int64 v13; // rcx
  unsigned int v14; // r13d
  unsigned int v15; // r15d
  __int64 v16; // rdi
  struct _KTHREAD *v17; // rbx
  int PagePriorityThread; // edi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
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

  v2 = a2;
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
  Partition = CcGetPartition(v55);
  LOBYTE(v3) = 1;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64))(v60 + 16))(v61, v3);
  v41 = v4;
  if ( v4 )
  {
    while ( 1 )
    {
      P = 0LL;
      v5 = v51;
      v6 = v38;
      while ( 1 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
        v7 = *(_QWORD *)(v2 + 48);
        v54 = v7;
        if ( v7 )
        {
          KxAcquireSpinLock((PKSPIN_LOCK)(v7 + 80));
          v6 = *(_DWORD *)(v7 + 52);
          v8 = v6 == 0;
          v46 = v8;
          v5 = *(_QWORD *)(v7 + 56);
          v51 = v5;
          if ( v6 > 0x800000 )
            v6 = 0x800000;
          v38 = v6;
          *(_DWORD *)(v7 + 52) = 0;
          if ( !v8 )
            *(_QWORD *)(v7 + 64) = v5 + v6;
          if ( (*(_DWORD *)v7 & 0x200000) != 0 )
          {
            v47 = 1;
            v48 = *(_DWORD *)(v7 + 88);
          }
          KxReleaseSpinLock((PKSPIN_LOCK)(v7 + 80));
          v39 = (*(_DWORD *)v7 >> 18) & 7;
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
              v9 = -1LL << (LockHandle.OldIrql + 1);
              v21 = ~(unsigned __int16)v9;
              v22 = (v21 & SchedulerAssist[5]) == 0;
              v10 = (unsigned int)v21 & SchedulerAssist[5];
              SchedulerAssist[5] = v10;
              if ( v22 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              v6 = v38;
              v5 = v51;
              v7 = v54;
            }
          }
        }
        __writecr8(OldIrql);
        if ( !v7 || v46 )
          break;
        v13 = v55[1];
        if ( v5 < v13 )
        {
          v43 = 1;
          if ( v5 + v6 >= v13 )
          {
            v6 = v13 - v5;
            v42 = 1;
          }
          v6 = (v6 + 4095) & 0xFFFFF000;
          v38 = v6;
          v14 = v6;
          v56 = v6;
          v62 = v5;
          v50 = v6;
          if ( v47 )
          {
            if ( !v48 )
              KeBugCheckEx(0x34u, 0xA2EuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
            v15 = v6;
            if ( v6 > v48 )
              v15 = v48;
            v49 = v15;
          }
          else
          {
            v15 = v6;
            v49 = v6;
          }
          v16 = a1;
          if ( (xmmword_140CFC490 & 0x20000) != 0 )
          {
            v69[1] = v5;
            v70 = v6;
            v69[0] = a1;
            v71 = v39;
            v72 = 0LL;
            v67[0] = v69;
            v67[1] = 32LL;
            EtwTraceKernelEvent((unsigned int)v67, 1, -2147352576, 5635, 4200706);
          }
          while ( v14 )
          {
            if ( v15 > v14 )
              v15 = v14;
            v49 = v15;
            if ( (xmmword_140CFC490 & 0x20000) != 0 )
            {
              v76 = 0LL;
              v73[1] = v5;
              v74 = v15;
              v73[0] = v16;
              v75 = v39;
              v68[0] = v73;
              v68[1] = 32LL;
              EtwTraceKernelEvent((unsigned int)v68, 1, -2147352576, 5643, 4200706);
            }
            v40 |= MmPrefetchForCacheManager(v59, v5, v10, v15, v39);
            v14 -= v15;
            v56 = v14;
            v5 += v15;
            v51 = v5;
            v16 = a1;
          }
          v2 = v59;
        }
      }
      if ( !P )
        break;
      v17 = KeGetCurrentThread();
      v65 = v17;
      PagePriorityThread = PsGetPagePriorityThread(v17, v9, v10, SchedulerAssist);
      v58 = PagePriorityThread;
      LODWORD(v57) = 0;
      MmWaitForCacheManagerPrefetch(P);
      PsSetPagePriorityThread((__int64)v17, v39);
      CcMapAndCopyFromCache(v2, 0LL, (__int64)&v57, v39, *(_QWORD *)(a1 + 24));
      PsSetPagePriorityThread((__int64)v17, PagePriorityThread);
    }
  }
  __addgsdword(0x8164u, KeGetCurrentThread()[1].Timer.DueTime.HighPart);
  if ( v41 )
    (*(void (__fastcall **)(__int64))(v60 + 24))(v61);
  v23 = Partition;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
  v24 = *(_QWORD *)(v2 + 48);
  v54 = v24;
  if ( v24 )
  {
    KxAcquireSpinLock((PKSPIN_LOCK)(v24 + 80));
    *(_DWORD *)v24 &= ~0x10000u;
    if ( v42 && (*(_DWORD *)(v2 + 80) & 0x20) != 0 )
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
  ObfDereferenceObjectWithTag((PVOID)v2, 0x746C6644u);
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
