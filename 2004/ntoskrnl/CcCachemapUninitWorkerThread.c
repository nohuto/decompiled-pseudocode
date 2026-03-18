/*
 * XREFs of CcCachemapUninitWorkerThread @ 0x1402C72E0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     EtwTraceKernelEvent @ 0x140250918 (EtwTraceKernelEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 *     CcFreeWorkQueueEntry @ 0x1402C458C (CcFreeWorkQueueEntry.c)
 *     CcDereferencePartition @ 0x1402C45FC (CcDereferencePartition.c)
 *     CcWriteBehind @ 0x1402C5514 (CcWriteBehind.c)
 *     CcFindNextWorkQueueEntry @ 0x1402C7538 (CcFindNextWorkQueueEntry.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

char __fastcall CcCachemapUninitWorkerThread(__int64 a1)
{
  __int64 v2; // rdi
  __int64 NextWorkQueueEntry; // r14
  __int64 v4; // r8
  _DWORD *SchedulerAssist; // r9
  unsigned __int64 OldIrql; // r12
  _QWORD *v7; // rcx
  unsigned __int64 v8; // rsi
  unsigned __int8 v10; // al
  struct _KPRCB *v11; // r9
  _DWORD *v12; // r8
  int v13; // eax
  bool v14; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v17; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-A0h] BYREF
  _DWORD v19[2]; // [rsp+68h] [rbp-88h] BYREF
  __int64 v20; // [rsp+70h] [rbp-80h]
  _QWORD v21[5]; // [rsp+78h] [rbp-78h] BYREF
  __int64 v22; // [rsp+A0h] [rbp-50h] BYREF
  _QWORD *v23; // [rsp+B0h] [rbp-40h] BYREF
  int v24; // [rsp+B8h] [rbp-38h]
  int v25; // [rsp+BCh] [rbp-34h]
  __int64 *v26; // [rsp+C0h] [rbp-30h] BYREF
  int v27; // [rsp+C8h] [rbp-28h]
  int v28; // [rsp+CCh] [rbp-24h]

  v19[1] = 0;
  v21[3] = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v19[0] = 0;
  v20 = 0LL;
  if ( *(_DWORD *)(a1 + 32) != 5 )
    KeBugCheckEx(0x34u, 0x19F0uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v2 = *(_QWORD *)(a1 + 56);
  v21[4] = v2;
  v21[1] = v2 + 288;
  while ( 1 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 192), &LockHandle);
    NextWorkQueueEntry = CcFindNextWorkQueueEntry(v2, v2 + 288);
    v21[2] = NextWorkQueueEntry;
    if ( !NextWorkQueueEntry )
      break;
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
          v17 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v14 = (v17 & SchedulerAssist[5]) == 0;
          v4 = (unsigned int)v17 & SchedulerAssist[5];
          SchedulerAssist[5] = v4;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    if ( (xmmword_140CFC490 & 0x20000) != 0 )
    {
      v21[0] = NextWorkQueueEntry;
      v23 = v21;
      v24 = 8;
      v25 = 0;
      EtwTraceKernelEvent((int)&v23, 1, 0x80020000, 5633, 4200706);
    }
    if ( *(_BYTE *)(NextWorkQueueEntry + 120) == 2 )
    {
      v20 = NextWorkQueueEntry;
      CcWriteBehind(*(_QWORD *)(NextWorkQueueEntry + 16), (__int64)v19, v4, SchedulerAssist);
    }
    if ( (xmmword_140CFC490 & 0x20000) != 0 )
    {
      v22 = NextWorkQueueEntry;
      v26 = &v22;
      v27 = 8;
      v28 = 0;
      EtwTraceKernelEvent((int)&v26, 1, 0x80020000, 5634, 4200706);
    }
    CcFreeWorkQueueEntry((PSLIST_ENTRY)NextWorkQueueEntry);
  }
  v7 = *(_QWORD **)(v2 + 336);
  if ( *v7 != v2 + 328 )
    __fastfail(3u);
  *(_QWORD *)a1 = v2 + 328;
  *(_QWORD *)(a1 + 8) = v7;
  *v7 = a1;
  *(_QWORD *)(v2 + 336) = a1;
  --*(_DWORD *)(v2 + 344);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v8 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v10 = KeGetCurrentIrql();
      if ( v10 <= 0xFu && LockHandle.OldIrql <= 0xFu && v10 >= 2u )
      {
        v11 = KeGetCurrentPrcb();
        v12 = v11->SchedulerAssist;
        v13 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v14 = (v13 & v12[5]) == 0;
        v12[5] &= v13;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick(v11);
      }
    }
  }
  __writecr8(v8);
  return CcDereferencePartition(v2);
}
