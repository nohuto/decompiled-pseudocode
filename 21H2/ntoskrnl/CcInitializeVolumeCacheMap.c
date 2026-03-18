/*
 * XREFs of CcInitializeVolumeCacheMap @ 0x1402D1304
 * Callers:
 *     CcInitializeCacheMapEx @ 0x140310F10 (CcInitializeCacheMapEx.c)
 * Callees:
 *     CcQueueAsyncGetDeviceGuid @ 0x14025E4A4 (CcQueueAsyncGetDeviceGuid.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     McTemplateK0j_EtwWriteTransfer @ 0x1402D1708 (McTemplateK0j_EtwWriteTransfer.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     CcSetupWatchForRegistryChanges @ 0x1403DC824 (CcSetupWatchForRegistryChanges.c)
 *     McGenEventRegister_EtwRegister @ 0x1403DDD24 (McGenEventRegister_EtwRegister.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CcGetDeviceGuid @ 0x1407460A4 (CcGetDeviceGuid.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CcInitializeVolumeCacheMap(_QWORD *a1, __int64 **a2)
{
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 *i; // rax
  __int64 *v7; // rbx
  unsigned __int64 v8; // rbx
  unsigned __int8 v9; // al
  struct _KPRCB *v10; // r10
  _DWORD *v11; // r9
  int v12; // eax
  bool v13; // zf
  __int64 *PoolWithTag; // rax
  unsigned __int64 OldIrql; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v20; // eax
  _QWORD *v21; // rax
  __int64 *j; // rax
  __int64 *v23; // r14
  _QWORD *v24; // rcx
  _QWORD *v25; // rax
  unsigned __int64 v26; // r15
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r10
  _DWORD *v29; // r9
  int v30; // eax
  char v31; // r15
  __int64 v32; // rdx
  __int64 v33; // rcx
  _DWORD *v34; // r8
  unsigned __int64 v35; // r14
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // r9
  int v38; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF

  v4 = a1[2];
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v4 )
    v5 = *(_QWORD *)(v4 + 8);
  else
    v5 = a1[1];
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  for ( i = (__int64 *)CcVolumeCacheMapList; i != &CcVolumeCacheMapList; i = (__int64 *)*i )
  {
    v7 = i - 2;
    if ( *(i - 1) == v5 )
    {
      ++*((_DWORD *)v7 + 1);
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
            v20 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v13 = (v20 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v20;
            if ( v13 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
LABEL_63:
      *a2 = v7;
      return 0LL;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v8 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v9 = KeGetCurrentIrql();
      if ( v9 <= 0xFu && LockHandle.OldIrql <= 0xFu && v9 >= 2u )
      {
        v10 = KeGetCurrentPrcb();
        v11 = v10->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v13 = (v12 & v11[5]) == 0;
        v11[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(v10);
      }
    }
  }
  __writecr8(v8);
  PoolWithTag = (__int64 *)ExAllocatePoolWithTag((POOL_TYPE)1536, 0xA20uLL, 0x6D566343u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  ++*((_DWORD *)PoolWithTag + 1);
  PoolWithTag[1] = v5;
  *(_DWORD *)PoolWithTag = 169870072;
  v21 = PoolWithTag + 26;
  v21[1] = v21;
  *v21 = v21;
  *((_DWORD *)v7 + 51) = _InterlockedIncrement(&CcNextVolumeId);
  memset(v7 + 30, 0, 0x498uLL);
  if ( *(_DWORD *)(v5 + 72) != 20 && v7[28] == *(_QWORD *)&NullGuid.Data1 && v7[29] == *(_QWORD *)NullGuid.Data4 )
    CcGetDeviceGuid(a1, v7 + 28);
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  for ( j = (__int64 *)CcVolumeCacheMapList; ; j = (__int64 *)*j )
  {
    if ( j == &CcVolumeCacheMapList )
    {
      v24 = (_QWORD *)qword_140C49B38;
      v25 = v7 + 2;
      if ( *(__int64 **)qword_140C49B38 != &CcVolumeCacheMapList )
        __fastfail(3u);
      *v25 = &CcVolumeCacheMapList;
      v7[3] = (__int64)v24;
      *v24 = v25;
      qword_140C49B38 = (__int64)(v7 + 2);
      _InterlockedIncrement64(&qword_140C498C8);
      if ( *(_DWORD *)(v7[1] + 72) != 20 && v7[28] == *(_QWORD *)&NullGuid.Data1 && v7[29] == *(_QWORD *)NullGuid.Data4 )
      {
        ++*((_DWORD *)v7 + 1);
        v31 = 1;
      }
      else
      {
        v31 = 0;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v35 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v36 = KeGetCurrentIrql();
          if ( v36 <= 0xFu && LockHandle.OldIrql <= 0xFu && v36 >= 2u )
          {
            v37 = KeGetCurrentPrcb();
            v34 = v37->SchedulerAssist;
            v33 = (unsigned int)LockHandle.OldIrql + 1;
            v38 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v13 = (v38 & v34[5]) == 0;
            v32 = (unsigned int)v38 & v34[5];
            v34[5] = v32;
            if ( v13 )
              KiRemoveSystemWorkPriorityKick(v37);
          }
        }
      }
      __writecr8(v35);
      if ( v31 )
        CcQueueAsyncGetDeviceGuid(v7, a1);
      if ( !CcRegistryWatchInitComplete )
        CcSetupWatchForRegistryChanges(v33, v32);
      if ( !CcEtwLoggingInitialized )
        CcEtwLoggingInitialized = (int)McGenEventRegister_EtwRegister(
                                         MS_KernelCc_Provider,
                                         v32,
                                         &MS_KernelCc_Provider_Context,
                                         &MS_KernelCc_Provider_Context,
                                         LockHandle.LockQueue.Next,
                                         LockHandle.LockQueue.Lock) >= 0;
      if ( (Microsoft_Windows_Kernel_CacheEnableBits & 1) != 0 )
        McTemplateK0j_EtwWriteTransfer(&MS_KernelCc_Provider_Context, CcEvt_VolumeCacheMap_Init, v34, v7 + 28);
      goto LABEL_63;
    }
    v23 = j - 2;
    if ( *(j - 1) == v5 )
      break;
  }
  ++*((_DWORD *)v23 + 1);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v26 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v27 = KeGetCurrentIrql();
      if ( v27 <= 0xFu && LockHandle.OldIrql <= 0xFu && v27 >= 2u )
      {
        v28 = KeGetCurrentPrcb();
        v29 = v28->SchedulerAssist;
        v30 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v13 = (v30 & v29[5]) == 0;
        v29[5] &= v30;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(v28);
      }
    }
  }
  __writecr8(v26);
  ExFreePoolWithTag(v7, 0x6D566343u);
  *a2 = v23;
  return 0LL;
}
