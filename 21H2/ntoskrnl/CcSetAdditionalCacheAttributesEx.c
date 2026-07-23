/*
 * XREFs of CcSetAdditionalCacheAttributesEx @ 0x140228430
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcSetAdditionalCacheAttributes @ 0x140228560 (CcSetAdditionalCacheAttributes.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     CcGetPartition @ 0x14031E550 (CcGetPartition.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall CcSetAdditionalCacheAttributesEx(PFILE_OBJECT FileObject, unsigned int a2, __int64 a3)
{
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  PFILE_OBJECT v5; // r9
  _DWORD *SharedCacheMap; // rbx
  __int64 v7; // rdx
  __int64 Partition; // rax
  int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v19; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  SectionObjectPointer = FileObject->SectionObjectPointer;
  v5 = FileObject;
  memset(&LockHandle, 0, sizeof(LockHandle));
  SharedCacheMap = SectionObjectPointer->SharedCacheMap;
  if ( !SharedCacheMap[1] )
    KeBugCheckEx(0x34u, 0xC6uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v7 = a2 >> 1;
  LOBYTE(v7) = v7 & 1;
  if ( (SharedCacheMap[38] & 0x2000) == 0 )
    CcSetAdditionalCacheAttributes(FileObject, v7, (a2 & 4) != 0);
  Partition = CcGetPartition(SharedCacheMap, v7, a3, v5);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
  v9 = SharedCacheMap[38];
  if ( (a2 & 1) != 0 )
    v10 = v9 | 0x800000;
  else
    v10 = v9 & 0xFF7FFFFF;
  SharedCacheMap[38] = v10;
  if ( (a2 & 8) != 0 )
  {
    v11 = v10 | 0x4000000;
  }
  else
  {
    if ( (v10 & 0x4000000) != 0 )
      v10 |= 0x20000u;
    v11 = v10 & 0xFBFFFFFF;
  }
  if ( (a2 & 0x10) != 0 )
    v12 = v11 | 0x10000000;
  else
    v12 = v11 & 0xEFFFFFFF;
  SharedCacheMap[38] = v12;
  if ( (a2 & 0x20) != 0 )
    v13 = v12 | 0x8000000;
  else
    v13 = v12 & 0xF7FFFFFF;
  SharedCacheMap[38] = v13;
  if ( (a2 & 0x10000000) != 0 )
    v14 = v13 | 0x1000;
  else
    v14 = v13 & 0xFFFFEFFF;
  SharedCacheMap[38] = v14;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = (unsigned int)KiIrqlFlags;
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v19 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v19 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return result;
}
