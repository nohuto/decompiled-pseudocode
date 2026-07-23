/*
 * XREFs of ExIsResourceAcquiredSharedLite @ 0x14035ABD0
 * Callers:
 *     CmpDoQueryKeyName @ 0x14026CB70 (CmpDoQueryKeyName.c)
 *     CmUnloadKey @ 0x1405DF54C (CmUnloadKey.c)
 *     NtQueryMultipleValueKey @ 0x140601D50 (NtQueryMultipleValueKey.c)
 *     NtFlushKey @ 0x140612E10 (NtFlushKey.c)
 *     PpDevNodeLockTree @ 0x14062EA64 (PpDevNodeLockTree.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x14063BFF4 (FsRtlAcquireFileForCcFlushEx.c)
 *     NtSetValueKey @ 0x140658BE0 (NtSetValueKey.c)
 *     CmpSecurityMethod @ 0x140659F40 (CmpSecurityMethod.c)
 *     CmpDeleteKeyObject @ 0x14065C3E0 (CmpDeleteKeyObject.c)
 *     CmPostCallbackNotification @ 0x14065C5F0 (CmPostCallbackNotification.c)
 *     NtDeleteValueKey @ 0x14065DF20 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x140661030 (NtDeleteKey.c)
 *     CmLoadDifferencingKey @ 0x140664A6C (CmLoadDifferencingKey.c)
 *     NtSetInformationKey @ 0x1406E3160 (NtSetInformationKey.c)
 *     NtEnumerateKey @ 0x1406E35B0 (NtEnumerateKey.c)
 *     NtEnumerateValueKey @ 0x1406E4050 (NtEnumerateValueKey.c)
 *     NtQueryValueKey @ 0x14070EEC0 (NtQueryValueKey.c)
 *     CmPostCallbackNotificationEx @ 0x14070F860 (CmPostCallbackNotificationEx.c)
 *     NtQueryKey @ 0x14070F950 (NtQueryKey.c)
 *     CmpParseKey @ 0x14070FFF0 (CmpParseKey.c)
 *     NtSaveKeyEx @ 0x140728E00 (NtSaveKeyEx.c)
 *     NtRenameKey @ 0x140868D90 (NtRenameKey.c)
 *     NtReplaceKey @ 0x1408692A0 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x140869630 (NtRestoreKey.c)
 *     CmpDoReOpenTransKey @ 0x140882410 (CmpDoReOpenTransKey.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     ExpFastResourceLegacyIsAcquiredShared @ 0x1405B4BA0 (ExpFastResourceLegacyIsAcquiredShared.c)
 */

ULONG __stdcall ExIsResourceAcquiredSharedLite(PERESOURCE Resource)
{
  __int64 v1; // r8
  __int64 v2; // r9
  USHORT Flag; // cx
  ULONG v5; // esi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 ResourceIndex; // rbp
  unsigned __int8 v9; // r11
  POWNER_ENTRY OwnerTable; // rax
  unsigned int TableSize; // edx
  int v12; // ecx
  bool v13; // zf
  unsigned __int64 OldIrql; // rbx
  struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710 v15; // esi
  unsigned __int8 CurrentIrql; // dl
  _DWORD *SchedulerAssist; // r10
  unsigned __int8 v18; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v20; // r8
  int v21; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  Flag = Resource->Flag;
  if ( (Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  if ( (Flag & 1) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql > 2u )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  }
  if ( (Flag & 1) == 0 )
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( !Resource->ActiveEntries )
      return 0;
    CurrentThread = KeGetCurrentThread();
    if ( (struct _KTHREAD *)Resource->OwnerEntry.OwnerThread == CurrentThread )
      return Resource->OwnerEntry.TableSize >> 3;
    v5 = 0;
    if ( (Flag & 0x80u) != 0 )
      return v5;
    ResourceIndex = CurrentThread->ResourceIndex;
    LockHandle.LockQueue.Lock = &Resource->SpinLock;
    LockHandle.LockQueue.Next = 0LL;
    v9 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v9 <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      v1 = (-1LL << (v9 + 1)) & 4;
      v2 = (unsigned int)v1 | SchedulerAssist[5];
      SchedulerAssist[5] = v2;
    }
    LockHandle.OldIrql = v9;
    KxAcquireQueuedSpinLock(&LockHandle, &Resource->SpinLock, v1, v2);
    OwnerTable = Resource->OwnerTable;
    if ( OwnerTable )
    {
      TableSize = OwnerTable->TableSize;
      if ( (unsigned int)ResourceIndex < TableSize
        && (struct _KTHREAD *)OwnerTable[ResourceIndex].OwnerThread == CurrentThread )
      {
        v15 = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)OwnerTable[ResourceIndex].TableSize;
      }
      else
      {
        v12 = 1;
        if ( TableSize <= 1 )
          goto LABEL_18;
        while ( 1 )
        {
          v13 = OwnerTable[1].OwnerThread == (_QWORD)CurrentThread;
          ++OwnerTable;
          if ( v13 )
            break;
          if ( ++v12 >= TableSize )
            goto LABEL_18;
        }
        v15 = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)OwnerTable->TableSize;
      }
      v5 = *(unsigned int *)&v15 >> 3;
    }
LABEL_18:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v18 = KeGetCurrentIrql();
        if ( v18 <= 0xFu && LockHandle.OldIrql <= 0xFu && v18 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v20 = CurrentPrcb->SchedulerAssist;
          v21 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v13 = (v21 & v20[5]) == 0;
          v20[5] &= v21;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    return v5;
  }
  return ExpFastResourceLegacyIsAcquiredShared(Resource);
}
