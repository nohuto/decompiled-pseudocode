/*
 * XREFs of FsRtlFastCheckLockForRead @ 0x140363D70
 * Callers:
 *     FsRtlCheckLockForReadAccess @ 0x140363E80 (FsRtlCheckLockForReadAccess.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     FsRtlCheckNoExclusiveConflict @ 0x14036BE48 (FsRtlCheckNoExclusiveConflict.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

BOOLEAN __stdcall FsRtlFastCheckLockForRead(
        PFILE_LOCK FileLock,
        PLARGE_INTEGER StartingByte,
        PLARGE_INTEGER Length,
        ULONG Key,
        PFILE_OBJECT FileObject,
        PVOID ProcessId)
{
  unsigned __int64 *LockInformation; // rsi
  LONGLONG QuadPart; // rax
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // r15
  BOOLEAN v12; // bl
  unsigned __int64 v13; // rdi
  unsigned __int64 *LastLock; // rax
  BOOLEAN v15; // al
  KSPIN_LOCK *v16; // rcx
  BOOLEAN v17; // si
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v21; // eax
  bool v22; // zf
  unsigned __int8 v23; // cl
  struct _KPRCB *v24; // r10
  _DWORD *v25; // r8
  int v26; // eax
  unsigned __int64 v27; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v28; // [rsp+70h] [rbp+8h] BYREF

  LockInformation = (unsigned __int64 *)FileLock->LockInformation;
  if ( !LockInformation )
    return 1;
  if ( !LockInformation[5] )
    return 1;
  QuadPart = Length->QuadPart;
  if ( !Length->QuadPart )
    return 1;
  v10 = StartingByte->QuadPart;
  v27 = v10;
  v11 = v10 + QuadPart - 1;
  v28 = v11;
  v12 = 1;
  v13 = KeAcquireSpinLockRaiseToDpc(LockInformation + 3);
  if ( v11 < *LockInformation
    || (LastLock = (unsigned __int64 *)FileObject->LastLock) != 0LL
    && v10 >= *LastLock
    && v11 <= LastLock[5]
    && *((_DWORD *)LastLock + 5) == Key
    && (PVOID)LastLock[4] == ProcessId )
  {
    KxReleaseSpinLock(LockInformation + 3);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
          v22 = (v21 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v21;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
  }
  else
  {
    v15 = FsRtlCheckNoExclusiveConflict(
            (int)LockInformation + 24,
            (unsigned int)&v27,
            (unsigned int)&v28,
            Key,
            (__int64)FileObject,
            (__int64)ProcessId);
    v16 = LockInformation + 3;
    v17 = v15;
    KxReleaseSpinLock(v16);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v23 = KeGetCurrentIrql();
        if ( v23 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v23 >= 2u )
        {
          v24 = KeGetCurrentPrcb();
          v25 = v24->SchedulerAssist;
          v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
          v22 = (v26 & v25[5]) == 0;
          v25[5] &= v26;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick(v24);
        }
      }
    }
    v12 = v17;
  }
  __writecr8(v13);
  return v12;
}
