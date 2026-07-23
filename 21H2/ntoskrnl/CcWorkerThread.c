/*
 * XREFs of CcWorkerThread @ 0x1402FDF40
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     EtwTraceKernelEvent @ 0x14029BFE0 (EtwTraceKernelEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     CcFindNextWorkQueueEntry @ 0x1402FE848 (CcFindNextWorkQueueEntry.c)
 *     CcLazyWriteScan @ 0x1403005E4 (CcLazyWriteScan.c)
 *     CcWriteBehind @ 0x140300EB0 (CcWriteBehind.c)
 *     CcFreeWorkQueueEntry @ 0x140301A0C (CcFreeWorkQueueEntry.c)
 *     CcDereferencePartition @ 0x140301A7C (CcDereferencePartition.c)
 *     ExQueueWorkItemToPartition @ 0x1403025FC (ExQueueWorkItemToPartition.c)
 *     CcPerformReadAhead @ 0x140304B40 (CcPerformReadAhead.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     CcReEngageWorkerThreads @ 0x14037FFD0 (CcReEngageWorkerThreads.c)
 *     CcPerfLogWorkItemEnqueue @ 0x1403BD71C (CcPerfLogWorkItemEnqueue.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     CcLogExtraWBThreadAction @ 0x1404E9EC4 (CcLogExtraWBThreadAction.c)
 *     CcOkToAddWriteBehindThread @ 0x1404E9FCC (CcOkToAddWriteBehindThread.c)
 */

__int64 __fastcall CcWorkerThread(__int64 a1)
{
  _QWORD *v1; // r13
  _QWORD *v2; // r15
  __int64 NextWorkQueueEntry; // r14
  __int64 v4; // rdi
  int v5; // ebx
  int v6; // eax
  _QWORD *v7; // r11
  signed __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r8
  unsigned __int8 OldIrql; // bl
  unsigned int v12; // ebx
  __int64 v13; // rax
  _QWORD *v14; // rdx
  unsigned __int8 v15; // bl
  _QWORD *v17; // rax
  __int64 *v18; // r10
  __int64 v19; // rcx
  _QWORD *v20; // rcx
  __int64 *v21; // rax
  __int64 **v22; // r13
  int v23; // eax
  __int64 *v24; // r10
  __int64 v25; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v29; // eax
  bool v30; // zf
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r9
  _DWORD *v33; // r8
  int v34; // eax
  char v35; // [rsp+48h] [rbp-F8h]
  char v36; // [rsp+49h] [rbp-F7h]
  int v37; // [rsp+4Ch] [rbp-F4h]
  __int64 v39; // [rsp+60h] [rbp-E0h] BYREF
  __int64 v40; // [rsp+68h] [rbp-D8h]
  int v41; // [rsp+70h] [rbp-D0h]
  _QWORD *v42; // [rsp+80h] [rbp-C0h]
  __int64 v43; // [rsp+88h] [rbp-B8h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp-B0h] BYREF
  _QWORD v45[4]; // [rsp+A8h] [rbp-98h] BYREF
  __int64 v46; // [rsp+C8h] [rbp-78h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+D0h] [rbp-70h]
  struct _KTHREAD *v48; // [rsp+D8h] [rbp-68h]
  _QWORD v49[2]; // [rsp+E8h] [rbp-58h] BYREF
  _QWORD v50[2]; // [rsp+F8h] [rbp-48h] BYREF

  v1 = (_QWORD *)a1;
  v2 = 0LL;
  NextWorkQueueEntry = 0LL;
  v36 = 0;
  v39 = 0LL;
  v45[2] = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v40 = 0LL;
  v37 = *(_DWORD *)(a1 + 32);
  v41 = v37;
  if ( (unsigned int)(v37 - 1) > 1 )
    KeBugCheckEx(0x34u, 0x174FuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v4 = *(_QWORD *)(a1 + 56);
  v45[3] = v4;
  v43 = v4;
  while ( 1 )
  {
    v5 = 0;
    v35 = 0;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 192), &LockHandle);
    if ( v36 )
    {
      *(_BYTE *)(v4 + 352) = 0;
      v36 = 0;
      CcReEngageWorkerThreads(v4, *(unsigned int *)(v4 + 360), *(unsigned int *)(v4 + 364));
    }
    if ( v40 == 35422 )
    {
      if ( *(_BYTE *)(NextWorkQueueEntry + 120) == 2 )
        *(_QWORD *)(*(_QWORD *)(NextWorkQueueEntry + 16) + 496LL) = NextWorkQueueEntry;
      v21 = (__int64 *)v2[1];
      if ( (_QWORD *)*v21 != v2 )
        goto LABEL_113;
      *(_QWORD *)NextWorkQueueEntry = v2;
      *(_QWORD *)(NextWorkQueueEntry + 8) = v21;
      *v21 = NextWorkQueueEntry;
      v2[1] = NextWorkQueueEntry;
      v40 = 0LL;
    }
    v6 = v37;
    if ( v37 == 2 )
      break;
    while ( 1 )
    {
      if ( (v5 & 1) != 0 || (v5 |= 1u, v2 = (_QWORD *)(v4 + 224), (_QWORD *)*v2 == v2) )
      {
        if ( (v5 & 2) != 0 || (v5 |= 2u, v2 = (_QWORD *)(v4 + 240), (_QWORD *)*v2 == v2) )
        {
LABEL_11:
          if ( (v5 & 4) != 0 )
            goto LABEL_44;
          v5 |= 4u;
          v2 = (_QWORD *)(v4 + 256);
          if ( (_QWORD *)*v2 == v2 )
            goto LABEL_44;
        }
      }
      v42 = v2;
      if ( v6 != 2 || (v6 = v37, *(_DWORD *)(v4 + 960) >= *(_DWORD *)(v4 + 200)) )
      {
        if ( v2 == (_QWORD *)(v4 + 256) )
          goto LABEL_15;
        if ( !*(_DWORD *)(v4 + 356) )
          break;
        if ( (unsigned int)(*(_DWORD *)(v4 + 372) + 1) < *(_DWORD *)(v4 + 200) )
          break;
        v6 = v37;
        if ( *(_DWORD *)(v4 + 320) )
          break;
      }
LABEL_66:
      if ( v6 == 2 )
        goto LABEL_11;
    }
    if ( v2 != (_QWORD *)(v4 + 256) )
      goto LABEL_16;
LABEL_15:
    v6 = v37;
    if ( (unsigned int)(*(_DWORD *)(v4 + 368) + 1) > *(_DWORD *)(v4 + 960) )
      goto LABEL_66;
LABEL_16:
    NextWorkQueueEntry = CcFindNextWorkQueueEntry(v4);
    v45[1] = NextWorkQueueEntry;
    v6 = v37;
    if ( !NextWorkQueueEntry )
      goto LABEL_66;
    v8 = MEMORY[0xFFFFF78000000014];
    if ( *(_BYTE *)(v4 + 776)
      && MEMORY[0xFFFFF78000000014] >= *(_QWORD *)(v4 + 768) + (unsigned int)CcExtraWBThreadDelay
      && *(_QWORD *)(v4 + 208) == v4 + 208
      && *(_DWORD *)(v4 + 496)
      && (_QWORD *)*v7 != v7 )
    {
      v22 = (__int64 **)(v4 + 304);
      if ( *v22 != (__int64 *)v22 )
      {
        v23 = CcOkToAddWriteBehindThread(v4);
        *(_QWORD *)(v4 + 768) = v8;
        if ( *(_DWORD *)(v4 + 320) && v23 == 3 )
          *(_BYTE *)(v4 + 777) = 1;
        if ( v23 == 2 )
        {
          v24 = *v22;
          v25 = **v22;
          if ( (__int64 **)(*v22)[1] != v22 || *(__int64 **)(v25 + 8) != v24 )
            goto LABEL_113;
          *v22 = (__int64 *)v25;
          *(_QWORD *)(v25 + 8) = v22;
          ++*(_DWORD *)(v4 + 320);
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v4 + 968)) <= 1 )
            __fastfail(0xEu);
          *v24 = 0LL;
          ExQueueWorkItemToPartition((ULONG_PTR)v24);
          v35 = 1;
        }
        v7 = (_QWORD *)(v4 + 256);
      }
      v1 = (_QWORD *)a1;
    }
    if ( v2 == v7 )
      *(_QWORD *)(v4 + 760) = v8;
    if ( *(_DWORD *)(v4 + 960) >= *(_DWORD *)(v4 + 200)
      && v8 >= *(_QWORD *)(v4 + 760) + (unsigned int)CcExtraWBThreadDelay
      && *(_QWORD *)(v4 + 208) == v4 + 208
      && (_QWORD *)*v7 != v7 )
    {
      v17 = (_QWORD *)(v4 + 304);
      v18 = *(__int64 **)(v4 + 304);
      if ( v18 != (__int64 *)(v4 + 304) && !*(_DWORD *)(v4 + 320) )
      {
        v19 = *v18;
        if ( (_QWORD *)v18[1] != v17 || *(__int64 **)(v19 + 8) != v18 )
          goto LABEL_113;
        *v17 = v19;
        *(_QWORD *)(v19 + 8) = v17;
        ++*(_DWORD *)(v4 + 320);
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v4 + 968)) <= 1 )
          __fastfail(0xEu);
        *v18 = 0LL;
        ExQueueWorkItemToPartition((ULONG_PTR)v18);
        *(_QWORD *)(v4 + 760) = v8;
        v35 = 1;
        v7 = (_QWORD *)(v4 + 256);
      }
    }
    if ( v2 == v7 || (v9 = 372LL, v2 == (_QWORD *)(v4 + 288)) )
      v9 = 368LL;
    _InterlockedAdd((volatile signed __int32 *)(v43 + v9), 1u);
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
          v29 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v30 = (v29 & SchedulerAssist[5]) == 0;
          v10 = (unsigned int)v29 & SchedulerAssist[5];
          SchedulerAssist[5] = v10;
          if ( v30 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    if ( (xmmword_140CFC490 & 0x20000) != 0 )
    {
      if ( v35 )
        CcLogExtraWBThreadAction(v4, 2LL);
      if ( (xmmword_140CFC490 & 0x20000) != 0 )
      {
        v45[0] = NextWorkQueueEntry;
        v49[0] = v45;
        v49[1] = 8LL;
        EtwTraceKernelEvent((int)v49, 1, 0x80020000, 5633, 4200706);
      }
    }
    switch ( *(_BYTE *)(NextWorkQueueEntry + 120) )
    {
      case 1:
        CcPerformReadAhead(NextWorkQueueEntry, *(_QWORD *)(NextWorkQueueEntry + 16));
        break;
      case 2:
        CurrentThread = KeGetCurrentThread();
        *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
        v12 = 0;
        do
        {
          v40 = NextWorkQueueEntry;
          CcWriteBehind(*(_QWORD *)(NextWorkQueueEntry + 16), &v39);
          if ( v12 >= 0xA )
            break;
          ++v12;
        }
        while ( v40 == 35422 );
        v48 = KeGetCurrentThread();
        *((_DWORD *)&v48[1].SwapListEntry + 3) &= ~2u;
        break;
      case 3:
        CcLazyWriteScan(v4, NextWorkQueueEntry, *(unsigned int *)(NextWorkQueueEntry + 16));
        break;
      case 4:
        KeSetEvent(*(PRKEVENT *)(NextWorkQueueEntry + 16), 0, 0);
        v36 = 1;
        break;
    }
    if ( v2 == (_QWORD *)(v4 + 256) || (v13 = 372LL, v2 == (_QWORD *)(v4 + 288)) )
      v13 = 368LL;
    _InterlockedAdd((volatile signed __int32 *)(v43 + v13), 0xFFFFFFFF);
    if ( v40 == 35422 )
    {
      if ( (xmmword_140CFC490 & 0x20000) != 0 )
      {
        LOBYTE(v10) = 1;
        CcPerfLogWorkItemEnqueue(v2, NextWorkQueueEntry, v10, 0LL);
      }
    }
    else
    {
      if ( (xmmword_140CFC490 & 0x20000) != 0 )
      {
        v46 = NextWorkQueueEntry;
        v50[0] = &v46;
        v50[1] = 8LL;
        EtwTraceKernelEvent((int)v50, 1, 0x80020000, 5634, 4200706);
      }
      CcFreeWorkQueueEntry((PSLIST_ENTRY)NextWorkQueueEntry);
    }
  }
  if ( !*(_BYTE *)(v4 + 777) )
    goto LABEL_66;
  *(_BYTE *)(v4 + 777) = 0;
LABEL_44:
  if ( v6 == 2 )
  {
    v20 = *(_QWORD **)(v4 + 312);
    if ( *v20 == v4 + 304 )
    {
      *v1 = v4 + 304;
      v1[1] = v20;
      *v20 = v1;
      *(_QWORD *)(v4 + 312) = v1;
      --*(_DWORD *)(v4 + 320);
      goto LABEL_47;
    }
LABEL_113:
    __fastfail(3u);
  }
  v14 = *(_QWORD **)(v4 + 216);
  if ( *v14 != v4 + 208 )
    goto LABEL_113;
  *v1 = v4 + 208;
  v1[1] = v14;
  *v14 = v1;
  *(_QWORD *)(v4 + 216) = v1;
  --*(_DWORD *)(v4 + 204);
LABEL_47:
  if ( *(_BYTE *)(v4 + 776) && !*(_DWORD *)(v4 + 320) && *(_DWORD *)(v4 + 204) <= 1u )
  {
    *(_BYTE *)(v4 + 776) = 0;
    memset(*(void **)(v4 + 720), 0, 8LL * (unsigned int)(*(_DWORD *)(v4 + 324) + 1));
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v15 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v31 = KeGetCurrentIrql();
      if ( v31 <= 0xFu && LockHandle.OldIrql <= 0xFu && v31 >= 2u )
      {
        v32 = KeGetCurrentPrcb();
        v33 = v32->SchedulerAssist;
        v34 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v30 = (v34 & v33[5]) == 0;
        v33[5] &= v34;
        if ( v30 )
          KiRemoveSystemWorkPriorityKick(v32);
      }
    }
  }
  __writecr8(v15);
  if ( (xmmword_140CFC490 & 0x20000) != 0 && v37 == 2 )
    CcLogExtraWBThreadAction(v4, 3LL);
  return CcDereferencePartition(v4);
}
