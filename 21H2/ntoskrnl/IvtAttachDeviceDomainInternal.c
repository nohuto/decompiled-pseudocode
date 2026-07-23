/*
 * XREFs of IvtAttachDeviceDomainInternal @ 0x1404DF808
 * Callers:
 *     IvtAttachDeviceDomain @ 0x1404DF7F0 (IvtAttachDeviceDomain.c)
 *     IvtDetachDeviceDomain @ 0x1404DFC70 (IvtDetachDeviceDomain.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 *     IvtAllocateContextTable @ 0x1404DF590 (IvtAllocateContextTable.c)
 *     IvtFlushTbInternal @ 0x1404DFCE4 (IvtFlushTbInternal.c)
 *     IvtGetDomainId @ 0x1404E01D8 (IvtGetDomainId.c)
 *     IvtUpdateContextEntry @ 0x1404E0DFC (IvtUpdateContextEntry.c)
 *     IvtUpdateExtendedContextEntry @ 0x1404E0FB0 (IvtUpdateExtendedContextEntry.c)
 */

__int64 IvtAttachDeviceDomainInternal(__int64 a1, __int64 a2, _DWORD *a3, ...)
{
  unsigned int *v3; // rax
  _DWORD *v5; // rdi
  char v8; // r13
  __int64 result; // rax
  int v10; // eax
  unsigned __int8 CurrentIrql; // si
  _DWORD *SchedulerAssist; // r9
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rdx
  int v16; // edx
  unsigned __int8 v17; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v19; // r8
  int v20; // eax
  bool v21; // zf
  int v22; // edx
  int v23; // [rsp+30h] [rbp-71h]
  int v24; // [rsp+30h] [rbp-71h]
  _QWORD v25[2]; // [rsp+58h] [rbp-49h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-39h] BYREF
  _DWORD v27[20]; // [rsp+88h] [rbp-19h] BYREF
  __int64 v28; // [rsp+120h] [rbp+7Fh] BYREF
  va_list va; // [rsp+120h] [rbp+7Fh]
  va_list va1; // [rsp+128h] [rbp+87h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v28 = va_arg(va1, _QWORD);
  v3 = *(unsigned int **)(a2 + 32);
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v5 = a3;
  v28 = 0x10000LL;
  v8 = 0;
  result = IvtAllocateContextTable(a1, *v3);
  if ( (int)result >= 0 )
  {
    memset(v27, 0, sizeof(v27));
    if ( !a3 )
    {
      v10 = *(_DWORD *)(a1 + 260);
      if ( v10 == 2 )
      {
        v27[1] = 1;
      }
      else if ( v10 != 1 )
      {
        return 3221225473LL;
      }
      v5 = v27;
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
    }
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 168);
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(a1 + 168));
    if ( a3 || IvtGetDomainId(a1, **(unsigned int **)(a2 + 32)) == *(_QWORD *)(a2 + 16) )
    {
      v15 = *(_QWORD *)(a2 + 32);
      if ( (*(_DWORD *)(a1 + 184) & 0x1000000) != 0 )
        IvtUpdateExtendedContextEntry(a1, v15, v13, v14, (__int64)v5);
      else
        IvtUpdateContextEntry(a1, v15, (_DWORD)v5, v14, 0, (__int64)va);
      v8 = 1;
    }
    *(_QWORD *)(a2 + 16) = (unsigned int)v5[6];
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v17 = KeGetCurrentIrql();
        if ( v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v19 = CurrentPrcb->SchedulerAssist;
          v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v21 = (v20 & v19[5]) == 0;
          v16 = v20 & v19[5];
          v19[5] = v16;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    if ( v8 )
    {
      v25[1] = v25;
      v25[0] = v25;
      IvtFlushTbInternal(a1, v16, v28, 0, 1, v23, (__int64)v25, 0, 0LL);
      IvtFlushTbInternal(a1, v22, v5[6], 0, 1, v24, (__int64)v25, 0, 0LL);
    }
    return 0LL;
  }
  return result;
}
