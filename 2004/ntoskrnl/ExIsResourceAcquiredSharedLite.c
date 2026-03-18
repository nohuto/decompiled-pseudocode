/*
 * XREFs of ExIsResourceAcquiredSharedLite @ 0x14029BBE0
 * Callers:
 *     CmpDoQueryKeyName @ 0x140202F30 (CmpDoQueryKeyName.c)
 *     NtDeleteValueKey @ 0x1405DD640 (NtDeleteValueKey.c)
 *     NtSetValueKey @ 0x1405E3650 (NtSetValueKey.c)
 *     CmpSecurityMethod @ 0x1405E47D0 (CmpSecurityMethod.c)
 *     NtEnumerateValueKey @ 0x1405E8E00 (NtEnumerateValueKey.c)
 *     CmpDeleteKeyObject @ 0x1405ED4B0 (CmpDeleteKeyObject.c)
 *     CmPostCallbackNotification @ 0x1405ED6C0 (CmPostCallbackNotification.c)
 *     CmpParseKey @ 0x1405EE060 (CmpParseKey.c)
 *     NtDeleteKey @ 0x140643C50 (NtDeleteKey.c)
 *     CmUnloadKey @ 0x14064FEBC (CmUnloadKey.c)
 *     CmLoadDifferencingKey @ 0x140650EAC (CmLoadDifferencingKey.c)
 *     NtQueryMultipleValueKey @ 0x140654D60 (NtQueryMultipleValueKey.c)
 *     NtSetInformationKey @ 0x1406726A0 (NtSetInformationKey.c)
 *     NtEnumerateKey @ 0x140672B00 (NtEnumerateKey.c)
 *     NtQueryKey @ 0x140695470 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x140695B10 (NtQueryValueKey.c)
 *     CmPostCallbackNotificationEx @ 0x140696470 (CmPostCallbackNotificationEx.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x14069797C (FsRtlAcquireFileForCcFlushEx.c)
 *     PpDevNodeLockTree @ 0x1406A5E2C (PpDevNodeLockTree.c)
 *     NtFlushKey @ 0x140702800 (NtFlushKey.c)
 *     NtSaveKeyEx @ 0x140716F00 (NtSaveKeyEx.c)
 *     NtRenameKey @ 0x1408655F0 (NtRenameKey.c)
 *     NtReplaceKey @ 0x140865AF0 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x140865E80 (NtRestoreKey.c)
 *     CmpDoReOpenTransKey @ 0x14087F18C (CmpDoReOpenTransKey.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x14029AB10 (KxAcquireQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     ExpFastResourceLegacyIsAcquiredShared @ 0x1405AF410 (ExpFastResourceLegacyIsAcquiredShared.c)
 */

ULONG __stdcall ExIsResourceAcquiredSharedLite(PERESOURCE Resource)
{
  USHORT Flag; // cx
  ULONG v3; // esi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 SpareByte0; // rbp
  unsigned __int8 v7; // r11
  POWNER_ENTRY OwnerTable; // rax
  unsigned int TableSize; // edx
  int v10; // ecx
  bool v11; // zf
  unsigned __int64 OldIrql; // rbx
  struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710 v13; // esi
  unsigned __int8 CurrentIrql; // dl
  _DWORD *SchedulerAssist; // r10
  unsigned __int8 v16; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v18; // r8
  int v19; // eax
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
    v3 = 0;
    if ( (Flag & 0x80u) != 0 )
      return v3;
    SpareByte0 = CurrentThread->SchedulerApc.SpareByte0;
    LockHandle.LockQueue.Lock = &Resource->SpinLock;
    LockHandle.LockQueue.Next = 0LL;
    v7 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v7 <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (v7 + 1)) & 4;
    }
    LockHandle.OldIrql = v7;
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)&Resource->SpinLock);
    OwnerTable = Resource->OwnerTable;
    if ( OwnerTable )
    {
      TableSize = OwnerTable->TableSize;
      if ( (unsigned int)SpareByte0 < TableSize
        && (struct _KTHREAD *)OwnerTable[SpareByte0].OwnerThread == CurrentThread )
      {
        v13 = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)OwnerTable[SpareByte0].TableSize;
      }
      else
      {
        v10 = 1;
        if ( TableSize <= 1 )
          goto LABEL_18;
        while ( 1 )
        {
          v11 = OwnerTable[1].OwnerThread == (_QWORD)CurrentThread;
          ++OwnerTable;
          if ( v11 )
            break;
          if ( ++v10 >= TableSize )
            goto LABEL_18;
        }
        v13 = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)OwnerTable->TableSize;
      }
      v3 = *(unsigned int *)&v13 >> 3;
    }
LABEL_18:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v16 = KeGetCurrentIrql();
        if ( v16 <= 0xFu && LockHandle.OldIrql <= 0xFu && v16 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v18 = CurrentPrcb->SchedulerAssist;
          v19 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v11 = (v19 & v18[5]) == 0;
          v18[5] &= v19;
          if ( v11 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    return v3;
  }
  return ExpFastResourceLegacyIsAcquiredShared(Resource);
}
