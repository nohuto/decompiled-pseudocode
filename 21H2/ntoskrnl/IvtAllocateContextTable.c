/*
 * XREFs of IvtAllocateContextTable @ 0x14052D9E0
 * Callers:
 *     IvtAllocateTranslationStructures @ 0x14052DEFC (IvtAllocateTranslationStructures.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1403119F0 (KxAcquireQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x140522410 (ExtEnvAllocatePhysicalMemory.c)
 *     ExtEnvFreePhysicalMemory @ 0x1405226CC (ExtEnvFreePhysicalMemory.c)
 */

__int64 __fastcall IvtAllocateContextTable(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rdi
  char v3; // r9
  unsigned __int64 v4; // rax
  unsigned int v5; // edx
  __int64 v6; // r8
  __int64 v7; // rax
  void **v8; // r15
  LONGLONG *v9; // r14
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v13; // rcx
  unsigned __int8 v14; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v16; // r9
  int v17; // eax
  bool v18; // zf
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r9
  _DWORD *v21; // r8
  int v22; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF
  void *v24; // [rsp+80h] [rbp+30h] BYREF
  LARGE_INTEGER v25; // [rsp+88h] [rbp+38h] BYREF

  v24 = 0LL;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v2 = a1;
  v25.QuadPart = 0LL;
  v3 = *(_BYTE *)(a1 + 320);
  v4 = a2 >> 8;
  v5 = (unsigned __int8)a2 >> 3;
  v6 = (unsigned int)(2 * v4);
  if ( v3 )
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
  if ( v3 && v5 >= 0x10 )
    ++v9;
  result = ExtEnvAllocatePhysicalMemory(
             a1,
             0x1000u,
             0x1000u,
             (MEMORY_CACHING_TYPE)*(_DWORD *)(v2 + 272),
             &v25,
             (__int64)&v24);
  if ( (int)result >= 0 )
  {
    memmove(v24, *(const void **)(v2 + 40), 0x1000uLL);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
    }
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v2 + 208);
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v2 + 208));
    if ( *v8 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v14 = KeGetCurrentIrql();
          if ( v14 <= 0xFu && CurrentIrql <= 0xFu && v14 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v13 = (unsigned int)CurrentIrql + 1;
            v16 = CurrentPrcb->SchedulerAssist;
            v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v18 = (v17 & v16[5]) == 0;
            v16[5] &= v17;
            if ( v18 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
      ExtEnvFreePhysicalMemory(v13, v24, 0x1000u, *(_DWORD *)(v2 + 272));
    }
    else
    {
      *v8 = v24;
      *v9 = ((v25.QuadPart / 4096) << 12) | 1;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v19 = KeGetCurrentIrql();
          if ( v19 <= 0xFu && CurrentIrql <= 0xFu && v19 >= 2u )
          {
            v20 = KeGetCurrentPrcb();
            v21 = v20->SchedulerAssist;
            v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v18 = (v22 & v21[5]) == 0;
            v21[5] &= v22;
            if ( v18 )
              KiRemoveSystemWorkPriorityKick((__int64)v20);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
    return 0LL;
  }
  return result;
}
