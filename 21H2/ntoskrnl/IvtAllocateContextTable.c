/*
 * XREFs of IvtAllocateContextTable @ 0x1404DF590
 * Callers:
 *     IvtAttachDeviceDomainInternal @ 0x1404DF808 (IvtAttachDeviceDomainInternal.c)
 *     IvtProcessDeviceExceptions @ 0x1409AB0B8 (IvtProcessDeviceExceptions.c)
 *     HalpIvtpInitializeReservedDomain @ 0x1409ABBD8 (HalpIvtpInitializeReservedDomain.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x1404D5380 (ExtEnvAllocatePhysicalMemory.c)
 *     ExtEnvFreePhysicalMemory @ 0x1404D563C (ExtEnvFreePhysicalMemory.c)
 */

__int64 __fastcall IvtAllocateContextTable(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // r14
  unsigned __int64 v4; // rax
  unsigned int v5; // edx
  __int64 v6; // r8
  __int64 v7; // rax
  void **v8; // r12
  LONGLONG *v9; // r15
  MEMORY_CACHING_TYPE v10; // r14d
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v14; // rcx
  unsigned __int8 v15; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v17; // r10
  int v18; // eax
  bool v19; // zf
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r9
  _DWORD *v22; // r8
  int v23; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF
  void *v25; // [rsp+80h] [rbp+30h] BYREF
  LARGE_INTEGER v26; // [rsp+88h] [rbp+38h] BYREF

  v25 = 0LL;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v26.QuadPart = 0LL;
  v2 = a1;
  v3 = *(_QWORD *)(a1 + 184);
  v4 = a2 >> 8;
  v5 = (unsigned __int8)a2 >> 3;
  v6 = (unsigned int)(2 * v4);
  if ( (v3 & 0x1000000) != 0 )
  {
    v7 = *(_QWORD *)(a1 + 32);
    a1 = v6 + (v5 >= 0x10);
    v8 = (void **)(v7 + 8 * a1);
  }
  else
  {
    v8 = (void **)(*(_QWORD *)(a1 + 32) + 8 * v6);
  }
  if ( *v8 )
    return 0LL;
  v9 = (LONGLONG *)(*(_QWORD *)(v2 + 16) + 8 * v6);
  if ( (v3 & 0x1000000) != 0 && v5 >= 0x10 )
    ++v9;
  v10 = v3 & 1;
  result = ExtEnvAllocatePhysicalMemory(a1, 0x1000u, 0x1000u, v10, &v26, (__int64)&v25);
  if ( (int)result >= 0 )
  {
    memmove(v25, *(const void **)(v2 + 40), 0x1000uLL);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
    }
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v2 + 168);
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v2 + 168));
    if ( *v8 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v15 = KeGetCurrentIrql();
          if ( v15 <= 0xFu && CurrentIrql <= 0xFu && v15 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v14 = (unsigned int)CurrentIrql + 1;
            v17 = CurrentPrcb->SchedulerAssist;
            v18 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v19 = (v18 & v17[5]) == 0;
            v17[5] &= v18;
            if ( v19 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
      ExtEnvFreePhysicalMemory(v14, v25, 0x1000u, v10);
    }
    else
    {
      *v8 = v25;
      *v9 = ((v26.QuadPart / 4096) << 12) | 1;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v20 = KeGetCurrentIrql();
          if ( v20 <= 0xFu && CurrentIrql <= 0xFu && v20 >= 2u )
          {
            v21 = KeGetCurrentPrcb();
            v22 = v21->SchedulerAssist;
            v23 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v19 = (v23 & v22[5]) == 0;
            v22[5] &= v23;
            if ( v19 )
              KiRemoveSystemWorkPriorityKick((__int64)v21);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
    return 0LL;
  }
  return result;
}
