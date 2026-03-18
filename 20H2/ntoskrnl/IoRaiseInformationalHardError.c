/*
 * XREFs of IoRaiseInformationalHardError @ 0x1405043B0
 * Callers:
 *     MiCauseOverCommitPopup @ 0x14054E920 (MiCauseOverCommitPopup.c)
 *     FsRtlLogCcFlushError @ 0x14088D850 (FsRtlLogCcFlushError.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409940F4 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     ExQueueWorkItem @ 0x1402D49A0 (ExQueueWorkItem.c)
 *     KeInitializeApc @ 0x1402D69A0 (KeInitializeApc.c)
 *     KeReleaseSemaphoreEx @ 0x1402DCAE0 (KeReleaseSemaphoreEx.c)
 *     KeInsertQueueApc @ 0x1402EBBB0 (KeInsertQueueApc.c)
 *     memcmp @ 0x1403D2070 (memcmp.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

BOOLEAN __stdcall IoRaiseInformationalHardError(NTSTATUS ErrorStatus, PUNICODE_STRING String, PKTHREAD Thread)
{
  _OWORD *PoolWithTag; // rbx
  PVOID v8; // rax
  PVOID v9; // rsi
  unsigned __int64 v10; // rdi
  __int64 v11; // r9
  const void *v12; // rcx
  __int64 v13; // rsi
  int v14; // ebp
  const void *v15; // rcx
  _QWORD *v16; // rax
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r9
  _DWORD *v19; // r8
  int v20; // eax
  bool v21; // zf
  void *v22; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r11
  _DWORD *SchedulerAssist; // r9
  int v26; // edx

  if ( !IopInitSystemCompletedEnoughForReInitRoutines )
    return 0;
  if ( Thread )
  {
    if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 0x10) != 0 )
      return 0;
  }
  else if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x10) != 0 )
  {
    return 0;
  }
  if ( ErrorStatus == -1073741283
    || ErrorStatus == -1073741500
    || ErrorStatus == 1073741848
    || !Thread && Semaphore.Header.SignalState >= 25 )
  {
    return 0;
  }
  if ( dword_140C45D1C > 25 )
    return 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x72456F49u);
  if ( !PoolWithTag )
    return 0;
  *PoolWithTag = 0LL;
  PoolWithTag[1] = 0LL;
  *((_QWORD *)PoolWithTag + 4) = 0LL;
  *((_DWORD *)PoolWithTag + 4) = ErrorStatus;
  if ( String && String->Length )
  {
    v8 = ExAllocatePoolWithTag(NonPagedPoolNx, String->Length, 0x72456F49u);
    if ( !v8 )
    {
LABEL_47:
      ExFreePoolWithTag(PoolWithTag, 0);
      return 0;
    }
    *((_WORD *)PoolWithTag + 12) = String->Length;
    *((_WORD *)PoolWithTag + 13) = String->Length;
    *((_QWORD *)PoolWithTag + 4) = v8;
    memmove(v8, String->Buffer, String->Length);
  }
  if ( !Thread )
  {
    v10 = KeAcquireSpinLockRaiseToDpc(&qword_140C45CF0);
    if ( Semaphore.Header.SignalState < 25
      && (!IopCurrentHardError
       || *((_DWORD *)PoolWithTag + 4) != *(_DWORD *)(IopCurrentHardError + 16)
       || ((v12 = (const void *)*((_QWORD *)PoolWithTag + 4)) != 0LL || *(_QWORD *)(IopCurrentHardError + 32))
       && (*((_WORD *)PoolWithTag + 12) != *(_WORD *)(IopCurrentHardError + 24)
        || memcmp(v12, *(const void **)(IopCurrentHardError + 32), *((unsigned __int16 *)PoolWithTag + 12)))) )
    {
      v13 = qword_140C45CE0;
      if ( (__int64 *)qword_140C45CE0 == &qword_140C45CE0 )
      {
LABEL_35:
        v16 = (_QWORD *)qword_140C45CE8;
        if ( *(__int64 **)qword_140C45CE8 != &qword_140C45CE0 )
          __fastfail(3u);
        *(_QWORD *)PoolWithTag = &qword_140C45CE0;
        *((_QWORD *)PoolWithTag + 1) = v16;
        *v16 = PoolWithTag;
        qword_140C45CE8 = (__int64)PoolWithTag;
        KeReleaseSemaphoreEx((__int64)&Semaphore, 0, 1, v11, 0);
        if ( !byte_140C45D18 )
        {
          byte_140C45D18 = 1;
          ExQueueWorkItem(&IopHardError, DelayedWorkQueue);
        }
        KxReleaseSpinLock(&qword_140C45CF0);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
              v21 = (v26 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v26;
              if ( v21 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v10);
        return 1;
      }
      v14 = *((_DWORD *)PoolWithTag + 4);
      while ( 1 )
      {
        if ( v14 == *(_DWORD *)(v13 + 16) )
        {
          v15 = (const void *)*((_QWORD *)PoolWithTag + 4);
          if ( !v15 && !*(_QWORD *)(v13 + 32) )
            break;
          if ( *((_WORD *)PoolWithTag + 12) == *(_WORD *)(v13 + 24)
            && !memcmp(v15, *(const void **)(v13 + 32), *((unsigned __int16 *)PoolWithTag + 12)) )
          {
            break;
          }
        }
        v13 = *(_QWORD *)v13;
        if ( (__int64 *)v13 == &qword_140C45CE0 )
          goto LABEL_35;
      }
    }
    KxReleaseSpinLock(&qword_140C45CF0);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v17 = KeGetCurrentIrql();
        if ( v17 <= 0xFu && (unsigned __int8)v10 <= 0xFu && v17 >= 2u )
        {
          v18 = KeGetCurrentPrcb();
          v19 = v18->SchedulerAssist;
          v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
          v21 = (v20 & v19[5]) == 0;
          v19[5] &= v20;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick((__int64)v18);
        }
      }
    }
    __writecr8(v10);
    goto LABEL_45;
  }
  v9 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x4350414Bu);
  if ( !v9 )
  {
LABEL_45:
    v22 = (void *)*((_QWORD *)PoolWithTag + 4);
    if ( v22 )
      ExFreePoolWithTag(v22, 0);
    goto LABEL_47;
  }
  _InterlockedIncrement(&dword_140C45D1C);
  KeInitializeApc(
    (__int64)v9,
    (__int64)Thread,
    0,
    (__int64)SC_ENV::Free,
    0LL,
    (__int64)IopRaiseInformationalHardError,
    0,
    (__int64)PoolWithTag);
  KeInsertQueueApc((__int64)v9, 0LL, 0LL, 0);
  return 1;
}
