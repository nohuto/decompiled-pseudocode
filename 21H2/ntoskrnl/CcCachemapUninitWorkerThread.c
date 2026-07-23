/*
 * XREFs of CcCachemapUninitWorkerThread @ 0x1402FE5F0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     EtwTraceKernelEvent @ 0x14029BFE0 (EtwTraceKernelEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     CcFindNextWorkQueueEntry @ 0x1402FE848 (CcFindNextWorkQueueEntry.c)
 *     CcWriteBehind @ 0x140300EB0 (CcWriteBehind.c)
 *     CcFreeWorkQueueEntry @ 0x140301A0C (CcFreeWorkQueueEntry.c)
 *     CcDereferencePartition @ 0x140301A7C (CcDereferencePartition.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall CcCachemapUninitWorkerThread(__int64 a1)
{
  __int64 v2; // rdi
  __int64 NextWorkQueueEntry; // r14
  unsigned __int64 OldIrql; // r12
  _QWORD *v5; // rcx
  unsigned __int64 v6; // rsi
  unsigned __int8 v8; // al
  struct _KPRCB *v9; // r9
  _DWORD *v10; // r8
  int v11; // eax
  bool v12; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-A0h] BYREF
  _DWORD v18[2]; // [rsp+68h] [rbp-88h] BYREF
  __int64 v19; // [rsp+70h] [rbp-80h]
  _QWORD v20[5]; // [rsp+78h] [rbp-78h] BYREF
  __int64 v21; // [rsp+A0h] [rbp-50h] BYREF
  _QWORD *v22; // [rsp+B0h] [rbp-40h] BYREF
  int v23; // [rsp+B8h] [rbp-38h]
  int v24; // [rsp+BCh] [rbp-34h]
  __int64 *v25; // [rsp+C0h] [rbp-30h] BYREF
  int v26; // [rsp+C8h] [rbp-28h]
  int v27; // [rsp+CCh] [rbp-24h]

  v18[1] = 0;
  v20[3] = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v18[0] = 0;
  v19 = 0LL;
  if ( *(_DWORD *)(a1 + 32) != 5 )
    KeBugCheckEx(0x34u, 0x1A08uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v2 = *(_QWORD *)(a1 + 56);
  v20[4] = v2;
  v20[1] = v2 + 288;
  while ( 1 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 192), &LockHandle);
    NextWorkQueueEntry = CcFindNextWorkQueueEntry(v2);
    v20[2] = NextWorkQueueEntry;
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
          v16 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v12 = (v16 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v16;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    if ( (xmmword_140CFC490 & 0x20000) != 0 )
    {
      v20[0] = NextWorkQueueEntry;
      v22 = v20;
      v23 = 8;
      v24 = 0;
      EtwTraceKernelEvent((int)&v22, 1, 0x80020000, 5633, 4200706);
    }
    if ( *(_BYTE *)(NextWorkQueueEntry + 120) == 2 )
    {
      v19 = NextWorkQueueEntry;
      CcWriteBehind(*(_QWORD *)(NextWorkQueueEntry + 16), v18);
    }
    if ( (xmmword_140CFC490 & 0x20000) != 0 )
    {
      v21 = NextWorkQueueEntry;
      v25 = &v21;
      v26 = 8;
      v27 = 0;
      EtwTraceKernelEvent((int)&v25, 1, 0x80020000, 5634, 4200706);
    }
    CcFreeWorkQueueEntry((PSLIST_ENTRY)NextWorkQueueEntry);
  }
  v5 = *(_QWORD **)(v2 + 336);
  if ( *v5 != v2 + 328 )
    __fastfail(3u);
  *(_QWORD *)a1 = v2 + 328;
  *(_QWORD *)(a1 + 8) = v5;
  *v5 = a1;
  *(_QWORD *)(v2 + 336) = a1;
  --*(_DWORD *)(v2 + 344);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v6 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v8 = KeGetCurrentIrql();
      if ( v8 <= 0xFu && LockHandle.OldIrql <= 0xFu && v8 >= 2u )
      {
        v9 = KeGetCurrentPrcb();
        v10 = v9->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v12 = (v11 & v10[5]) == 0;
        v10[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(v9);
      }
    }
  }
  __writecr8(v6);
  return CcDereferencePartition(v2);
}
