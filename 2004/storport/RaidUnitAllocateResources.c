/*
 * XREFs of RaidUnitAllocateResources @ 0x1C001874C
 * Callers:
 *     RaidCreateUnit @ 0x1C0018588 (RaidCreateUnit.c)
 * Callees:
 *     StorAllocateContiguousIoResources @ 0x1C0007A98 (StorAllocateContiguousIoResources.c)
 *     RaidAllocatePool @ 0x1C0008278 (RaidAllocatePool.c)
 *     RaidZeroXrb @ 0x1C000BD00 (RaidZeroXrb.c)
 *     RaidUnitFreeResources @ 0x1C0015704 (RaidUnitFreeResources.c)
 *     StorCreateEventQueue @ 0x1C0018B04 (StorCreateEventQueue.c)
 *     memset @ 0x1C001DA00 (memset.c)
 *     RaInitializeTagList @ 0x1C0072B50 (RaInitializeTagList.c)
 */

__int64 __fastcall RaidUnitAllocateResources(__int64 a1)
{
  __int64 v1; // r15
  int EventQueue; // ebx
  __int64 v4; // rax
  _QWORD *v5; // r14
  __int64 v6; // rax
  __int64 v7; // rsi
  int v8; // edi
  USHORT CurrentNodeNumber; // ax
  PSLIST_ENTRY v10; // rax
  int v11; // eax
  __int64 v12; // rax
  unsigned int v13; // ecx
  __int64 ContiguousIoResources; // rax
  __int64 v15; // rdx
  __int64 v16; // rbx
  PIO_WORKITEM WorkItem; // rax
  PIO_WORKITEM v18; // rax
  struct _DEVICE_OBJECT *v19; // rcx
  PIO_WORKITEM v20; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *CacheAwareRundownProtection; // rax
  SIZE_T v23; // rbx
  PVOID Pool; // rax
  int v25; // esi
  unsigned int v26; // edi
  unsigned int v27; // ebx

  v1 = *(_QWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 1696) = -1;
  *(_DWORD *)(a1 + 912) = 0x10000000;
  KeInitializeEvent((PRKEVENT)(a1 + 464), SynchronizationEvent, 0);
  KeInitializeDpc((PRKDPC)(a1 + 1184), RaidUnitRestartQueueDpcRoutine, *(PVOID *)(a1 + 8));
  KeInitializeDpc((PRKDPC)(a1 + 992), (PKDEFERRED_ROUTINE)RaidUnitPendingDpcRoutine, *(PVOID *)(a1 + 8));
  KeInitializeTimer((PKTIMER)(a1 + 928));
  KeInitializeTimer((PKTIMER)(a1 + 1056));
  KeInitializeDpc((PRKDPC)(a1 + 1120), (PKDEFERRED_ROUTINE)RaidUnitPauseTimerDpcRoutine, *(PVOID *)(a1 + 8));
  KeSetCoalescableTimer((PKTIMER)(a1 + 928), (LARGE_INTEGER)-20000000LL, 0x7D0u, 0x12Cu, (PKDPC)(a1 + 992));
  EventQueue = StorCreateEventQueue(a1 + 504);
  if ( EventQueue < 0 )
    goto LABEL_25;
  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 )
    LOBYTE(v4) = *(_BYTE *)(v4 + 532) & 0x10;
  if ( (_BYTE)v4 )
    **(_DWORD **)(a1 + 504) |= 5u;
  v5 = (_QWORD *)(a1 + 512);
  EventQueue = RaInitializeTagList(a1 + 512, (unsigned int)(*(_DWORD *)(v1 + 520) + 1), *(_QWORD *)(a1 + 8));
  if ( EventQueue < 0 )
    goto LABEL_25;
  KeInitializeSpinLock((PKSPIN_LOCK)(a1 + 40));
  KeInitializeSpinLock((PKSPIN_LOCK)(a1 + 1792));
  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(_QWORD *)(a1 + 24);
  v8 = *(_DWORD *)(v1 + 520);
  *(_DWORD *)(a1 + 800) = 0;
  *(_QWORD *)(a1 + 640) = v6;
  *(_QWORD *)(a1 + 648) = RaUnitStartIo;
  memset((void *)(a1 + 656), 0, 0x90uLL);
  *(_QWORD *)(a1 + 744) = a1 + 736;
  *(_QWORD *)(a1 + 736) = a1 + 736;
  *(_QWORD *)(a1 + 760) = a1 + 752;
  *(_QWORD *)(a1 + 752) = a1 + 752;
  *(_QWORD *)(a1 + 776) = a1 + 768;
  *(_QWORD *)(a1 + 768) = a1 + 768;
  KeInitializeEvent((PRKEVENT)(a1 + 704), NotificationEvent, 0);
  *(_DWORD *)(a1 + 660) = v8;
  *(_DWORD *)(a1 + 656) = 9437442;
  *(_QWORD *)(a1 + 664) = v7 + 832;
  if ( *(_DWORD *)(v1 + 448) )
  {
    v23 = *(unsigned int *)(v1 + 448);
    Pool = RaidAllocatePool(NonPagedPoolNx, v23, 0x45556152u, *(_QWORD *)(a1 + 8));
    *(_QWORD *)(a1 + 16) = Pool;
    if ( !Pool )
    {
      EventQueue = -1073741801;
      goto LABEL_25;
    }
    memset(Pool, 0, v23);
  }
  CurrentNodeNumber = KeGetCurrentNodeNumber();
  v10 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*v5 + ((unsigned __int64)CurrentNodeNumber << 6)));
  if ( !v10 )
  {
    v25 = 0;
    v26 = KeQueryHighestNodeNumber() + 1;
    while ( 1 )
    {
      v27 = 0;
      if ( v26 )
        break;
LABEL_31:
      if ( ++v25 == 10 )
      {
        v11 = -1;
        goto LABEL_10;
      }
    }
    while ( 1 )
    {
      v10 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*v5 + ((unsigned __int64)v27 << 6)));
      if ( v10 )
        break;
      if ( ++v27 >= v26 )
        goto LABEL_31;
    }
  }
  v11 = *((_DWORD *)&v10->Next + 2);
LABEL_10:
  if ( v11 != -1 )
  {
    *(_DWORD *)(a1 + 1696) = v11;
    v12 = *(_QWORD *)(a1 + 24);
    v13 = ((*(_DWORD *)(v12 + 452) + 7) & 0xFFFFFFF8) + 1232;
    if ( *(_BYTE *)(v1 + 410) != 1 )
      v13 = ((*(_DWORD *)(v12 + 452) + 7) & 0xFFFFFFF8) + 1088;
    ContiguousIoResources = StorAllocateContiguousIoResources(
                              v13,
                              ((*(_DWORD *)(v12 + 452) + 7) & 0xFFFFFFF8) + 1088,
                              v1);
    v16 = ContiguousIoResources;
    if ( ContiguousIoResources )
    {
      *(_QWORD *)(a1 + 1712) = ContiguousIoResources + 32;
      *(_QWORD *)(a1 + 1720) = ContiguousIoResources + 832;
      *(_QWORD *)(a1 + 1704) = ContiguousIoResources + 1088;
      RaidZeroXrb(ContiguousIoResources + 32, v15, 0, 0LL);
      if ( *(_BYTE *)(v1 + 410) == 1 )
      {
        *(_DWORD *)(v16 + 776) = 144;
        *(_QWORD *)(v16 + 792) = v16 + ((*(_DWORD *)(*(_QWORD *)(a1 + 24) + 452LL) + 7) & 0xFFFFFFF8) + 1088LL;
      }
      WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
      *(_QWORD *)(a1 + 1848) = WorkItem;
      if ( WorkItem )
      {
        v18 = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
        *(_QWORD *)(a1 + 1864) = v18;
        if ( v18 )
        {
          v19 = *(struct _DEVICE_OBJECT **)(a1 + 8);
          *(_QWORD *)(a1 + 1872) = 0LL;
          *(_DWORD *)(a1 + 1880) = 0;
          v20 = IoAllocateWorkItem(v19);
          *(_QWORD *)(a1 + 1888) = v20;
          if ( v20 )
          {
            CacheAwareRundownProtection = ExAllocateCacheAwareRundownProtection(NonPagedPoolNx, 0x4F506152u);
            *(_QWORD *)(a1 + 1736) = CacheAwareRundownProtection;
            if ( CacheAwareRundownProtection )
            {
              ExWaitForRundownProtectionReleaseCacheAware(CacheAwareRundownProtection);
              return 0LL;
            }
          }
        }
      }
    }
  }
  EventQueue = -1073741670;
LABEL_25:
  RaidUnitFreeResources(a1);
  return (unsigned int)EventQueue;
}
