/*
 * XREFs of CcPerformReadAhead @ 0x14035E3C4
 * Callers:
 *     CcWorkerThread @ 0x14035D970 (CcWorkerThread.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140211E00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     FsRtlIsNtstatusExpected @ 0x140247160 (FsRtlIsNtstatusExpected.c)
 *     MmWaitForCacheManagerPrefetch @ 0x14027C6DC (MmWaitForCacheManagerPrefetch.c)
 *     CcDecrementOpenCount @ 0x140282AF4 (CcDecrementOpenCount.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     PsSetPagePriorityThread @ 0x14028F63C (PsSetPagePriorityThread.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     PsGetPagePriorityThread @ 0x14033D720 (PsGetPagePriorityThread.c)
 *     EtwTraceKernelEvent @ 0x14035EDE4 (EtwTraceKernelEvent.c)
 *     IoDiskIoAttributionDereference @ 0x140366814 (IoDiskIoAttributionDereference.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     MmPrefetchForCacheManager @ 0x1406FA590 (MmPrefetchForCacheManager.c)
 *     CcMapAndCopyFromCache @ 0x1407BDF60 (CcMapAndCopyFromCache.c)
 */

__int64 __fastcall CcPerformReadAhead(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // rdx
  __int64 (__fastcall *v4)(__int64, __int64); // rax
  unsigned __int8 v5; // al
  signed __int64 v6; // rbx
  unsigned int v7; // r14d
  __int64 v8; // rdi
  BOOL v9; // eax
  unsigned __int8 OldIrql; // r13
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
  unsigned int v24; // edx
  unsigned __int8 v25; // bl
  __int64 v26; // rcx
  _QWORD *v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // r8
  unsigned __int8 v30; // bl
  __int64 result; // rax
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r10
  _DWORD *v34; // r9
  int v35; // eax
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // r9
  _DWORD *v38; // r8
  int v39; // eax
  unsigned int v40; // [rsp+50h] [rbp-188h]
  int v41; // [rsp+54h] [rbp-184h]
  int v42; // [rsp+58h] [rbp-180h]
  int v43; // [rsp+60h] [rbp-178h]
  int v44; // [rsp+64h] [rbp-174h]
  int v45; // [rsp+68h] [rbp-170h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-160h] BYREF
  BOOL v48; // [rsp+90h] [rbp-148h]
  int v49; // [rsp+94h] [rbp-144h]
  unsigned int v50; // [rsp+98h] [rbp-140h]
  unsigned int v51; // [rsp+9Ch] [rbp-13Ch]
  unsigned int v52; // [rsp+A0h] [rbp-138h]
  signed __int64 v53; // [rsp+A8h] [rbp-130h]
  PVOID P; // [rsp+B0h] [rbp-128h]
  __int64 v55; // [rsp+B8h] [rbp-120h]
  __int64 v56; // [rsp+C0h] [rbp-118h]
  _QWORD *v57; // [rsp+C8h] [rbp-110h]
  unsigned int v58; // [rsp+D0h] [rbp-108h]
  __int64 v59; // [rsp+D4h] [rbp-104h] BYREF
  int v60; // [rsp+E4h] [rbp-F4h]
  __int64 v61; // [rsp+E8h] [rbp-F0h]
  __int64 v62; // [rsp+F0h] [rbp-E8h]
  __int64 v63; // [rsp+F8h] [rbp-E0h]
  signed __int64 v64; // [rsp+100h] [rbp-D8h]
  __int64 v65; // [rsp+108h] [rbp-D0h]
  __int64 v66; // [rsp+110h] [rbp-C8h]
  struct _KTHREAD *v67; // [rsp+118h] [rbp-C0h]
  struct _KTHREAD *CurrentThread; // [rsp+128h] [rbp-B0h]
  _QWORD v69[2]; // [rsp+140h] [rbp-98h] BYREF
  _QWORD v70[2]; // [rsp+150h] [rbp-88h] BYREF
  _QWORD v71[2]; // [rsp+160h] [rbp-78h] BYREF
  unsigned int v72; // [rsp+170h] [rbp-68h]
  int v73; // [rsp+174h] [rbp-64h]
  __int64 v74; // [rsp+178h] [rbp-60h]
  _QWORD v75[2]; // [rsp+180h] [rbp-58h] BYREF
  unsigned int v76; // [rsp+190h] [rbp-48h]
  int v77; // [rsp+194h] [rbp-44h]
  __int64 v78; // [rsp+198h] [rbp-40h]

  v2 = a2;
  v61 = a2;
  v66 = a1;
  v65 = a2;
  v57 = 0LL;
  v53 = 0LL;
  v64 = 0LL;
  v52 = 0;
  v40 = 0;
  v62 = 0LL;
  v63 = 0LL;
  v48 = 0;
  v41 = 0;
  v44 = 0;
  v45 = 0;
  v42 = 0;
  P = 0LL;
  v49 = 0;
  v50 = 0;
  v55 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentThread = KeGetCurrentThread();
  CurrentThread[1].Timer.DueTime.HighPart = 0;
  v57 = *(_QWORD **)(*(_QWORD *)(a2 + 40) + 8LL);
  v3 = v57[26];
  v62 = v3;
  v63 = v57[27];
  v55 = v57[66];
  v4 = *(__int64 (__fastcall **)(__int64, __int64))(v3 + 16);
  LOBYTE(v3) = 1;
  v5 = v4(v63, v3);
  v43 = v5;
  if ( v5 )
  {
    while ( 1 )
    {
      P = 0LL;
      v6 = v53;
      v7 = v40;
      while ( 1 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v55 + 704), &LockHandle);
        v8 = *(_QWORD *)(v2 + 48);
        v56 = v8;
        if ( v8 )
        {
          KxAcquireSpinLock((PKSPIN_LOCK)(v8 + 80));
          v7 = *(_DWORD *)(v8 + 52);
          v9 = v7 == 0;
          v48 = v9;
          v6 = *(_QWORD *)(v8 + 56);
          v53 = v6;
          if ( v7 > 0x800000 )
            v7 = 0x800000;
          v40 = v7;
          *(_DWORD *)(v8 + 52) = 0;
          if ( !v9 )
            *(_QWORD *)(v8 + 64) = v6 + v7;
          if ( (*(_DWORD *)v8 & 0x200000) != 0 )
          {
            v49 = 1;
            v50 = *(_DWORD *)(v8 + 88);
          }
          KxReleaseSpinLock((PKSPIN_LOCK)(v8 + 80));
          v41 = (*(_DWORD *)v8 >> 18) & 7;
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
              SchedulerAssist[5] &= v20;
              if ( v21 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              v7 = v40;
              v6 = v53;
              v8 = v56;
            }
          }
        }
        __writecr8(OldIrql);
        if ( !v8 || v48 )
          break;
        v11 = v57[1];
        if ( v6 < v11 )
        {
          v45 = 1;
          if ( v6 + v7 >= v11 )
          {
            v7 = v11 - v6;
            v44 = 1;
          }
          v7 = (v7 + 4095) & 0xFFFFF000;
          v40 = v7;
          v12 = v7;
          v58 = v7;
          v64 = v6;
          v52 = v7;
          if ( v49 )
          {
            if ( !v50 )
              KeBugCheckEx(0x34u, 0xAB7uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
            v13 = v7;
            if ( v7 > v50 )
              v13 = v50;
            v51 = v13;
          }
          else
          {
            v13 = v7;
            v51 = v7;
          }
          v14 = a1;
          if ( (xmmword_140D06910 & 0x20000) != 0 )
          {
            v71[1] = v6;
            v72 = v7;
            v71[0] = a1;
            v73 = v41;
            v74 = 0LL;
            v69[0] = v71;
            v69[1] = 32LL;
            EtwTraceKernelEvent((unsigned int)v69, 1, -2147352576, 5635, 4200706);
          }
          while ( v12 )
          {
            if ( v13 > v12 )
              v13 = v12;
            v51 = v13;
            if ( (xmmword_140D06910 & 0x20000) != 0 )
            {
              v78 = 0LL;
              v75[1] = v6;
              v76 = v13;
              v75[0] = v14;
              v77 = v41;
              v70[0] = v75;
              v70[1] = 32LL;
              EtwTraceKernelEvent((unsigned int)v70, 1, -2147352576, 5643, 4200706);
            }
            v42 |= MmPrefetchForCacheManager(v61, v6, 0, v13, v41);
            v12 -= v13;
            v58 = v12;
            v6 += v13;
            v53 = v6;
            v14 = a1;
          }
          v2 = v61;
        }
      }
      if ( !P )
        break;
      v15 = KeGetCurrentThread();
      v67 = v15;
      PagePriorityThread = PsGetPagePriorityThread((__int64)v15);
      v60 = PagePriorityThread;
      LODWORD(v59) = 0;
      MmWaitForCacheManagerPrefetch(P);
      PsSetPagePriorityThread((__int64)v15, v41);
      CcMapAndCopyFromCache(v2, 0LL, (__int64)&v59, v41, *(_QWORD *)(a1 + 24), 0LL);
      PsSetPagePriorityThread((__int64)v15, PagePriorityThread);
    }
  }
  __addgsdword(0x84A4u, KeGetCurrentThread()[1].Timer.DueTime.HighPart);
  if ( v43 )
    (*(void (__fastcall **)(__int64))(v62 + 24))(v63);
  v22 = v55;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v55 + 704), &LockHandle);
  v23 = *(_QWORD *)(v2 + 48);
  v56 = v23;
  if ( v23 )
  {
    KxAcquireSpinLock((PKSPIN_LOCK)(v23 + 80));
    v24 = *(_DWORD *)v23 & 0xFFFEFFFF;
    *(_DWORD *)v23 = v24;
    if ( v44 && (*(_DWORD *)(v2 + 80) & 0x20) != 0 )
      *(_QWORD *)(v23 + 64) = 0LL;
    if ( !v42 && v45 )
      *(_DWORD *)v23 = v24 & 0xFFFDFFFF;
    KxReleaseSpinLock((PKSPIN_LOCK)(v23 + 80));
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v25 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v32 = KeGetCurrentIrql();
      if ( v32 <= 0xFu && LockHandle.OldIrql <= 0xFu && v32 >= 2u )
      {
        v33 = KeGetCurrentPrcb();
        v34 = v33->SchedulerAssist;
        v35 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v21 = (v35 & v34[5]) == 0;
        v34[5] &= v35;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick(v33);
      }
    }
  }
  __writecr8(v25);
  ObfDereferenceObjectWithTag((PVOID)v2, 0x746C6644u);
  v26 = *(_QWORD *)(a1 + 24);
  if ( v26 )
    IoDiskIoAttributionDereference(v26);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v22 + 704), &LockHandle);
  v27 = v57;
  CcDecrementOpenCount((__int64)v57, v28, v29);
  *((_DWORD *)v27 + 38) &= ~0x4000u;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v30 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v36 = KeGetCurrentIrql();
      if ( v36 <= 0xFu && LockHandle.OldIrql <= 0xFu && v36 >= 2u )
      {
        v37 = KeGetCurrentPrcb();
        v38 = v37->SchedulerAssist;
        v39 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v21 = (v39 & v38[5]) == 0;
        v38[5] &= v39;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick(v37);
      }
    }
  }
  result = v30;
  __writecr8(v30);
  return result;
}
