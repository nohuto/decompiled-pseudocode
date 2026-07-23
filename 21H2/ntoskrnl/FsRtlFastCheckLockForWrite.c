/*
 * XREFs of FsRtlFastCheckLockForWrite @ 0x14023B430
 * Callers:
 *     FsRtlCheckLockForWriteAccess @ 0x14023B390 (FsRtlCheckLockForWriteAccess.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     FsRtlCheckNoExclusiveConflict @ 0x14036BE48 (FsRtlCheckNoExclusiveConflict.c)
 *     FsRtlCheckNoSharedConflict @ 0x14036CA30 (FsRtlCheckNoSharedConflict.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

BOOLEAN __stdcall FsRtlFastCheckLockForWrite(
        PFILE_LOCK FileLock,
        PLARGE_INTEGER StartingByte,
        PLARGE_INTEGER Length,
        ULONG Key,
        PVOID FileObject,
        PVOID ProcessId)
{
  unsigned __int64 *LockInformation; // rsi
  LONGLONG QuadPart; // rax
  unsigned __int64 v8; // r14
  KSPIN_LOCK *v9; // rbp
  unsigned __int64 v10; // r15
  BOOLEAN v11; // bl
  unsigned __int64 v12; // rdi
  PVOID v14; // r13
  PVOID v15; // r12
  __int64 v16; // rax
  bool v17; // cf
  ULONG v18; // r14d
  BOOLEAN v19; // si
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v23; // eax
  bool v24; // zf
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r10
  _DWORD *v27; // r8
  int v28; // eax
  _QWORD v29[9]; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v30; // [rsp+80h] [rbp+8h] BYREF
  ULONG v31; // [rsp+98h] [rbp+20h]

  v31 = Key;
  LockInformation = (unsigned __int64 *)FileLock->LockInformation;
  if ( LockInformation && (LockInformation[4] || LockInformation[5]) )
  {
    QuadPart = Length->QuadPart;
    if ( Length->QuadPart )
    {
      v8 = StartingByte->QuadPart;
      v9 = LockInformation + 3;
      v29[0] = v8;
      v10 = v8 + QuadPart - 1;
      v30 = v10;
      v11 = 1;
      v12 = KeAcquireSpinLockRaiseToDpc(LockInformation + 3);
      if ( v10 < *LockInformation )
        goto LABEL_5;
      v14 = FileObject;
      v15 = ProcessId;
      v16 = *((_QWORD *)FileObject + 15);
      if ( v16 )
      {
        v17 = v8 < *(_QWORD *)v16;
        v18 = v31;
        if ( !v17
          && v10 <= *(_QWORD *)(v16 + 40)
          && *(_DWORD *)(v16 + 20) == v31
          && *(PVOID *)(v16 + 32) == ProcessId
          && *(_BYTE *)(v16 + 16) )
        {
LABEL_5:
          KxReleaseSpinLock(LockInformation + 3);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v12 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
                v24 = (v23 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v23;
                if ( v24 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
LABEL_6:
          __writecr8(v12);
          return v11;
        }
      }
      else
      {
        v18 = v31;
      }
      v19 = FsRtlCheckNoSharedConflict(LockInformation + 3, v29, &v30);
      if ( v19 == 1 )
        v19 = FsRtlCheckNoExclusiveConflict(
                (_DWORD)v9,
                (unsigned int)v29,
                (unsigned int)&v30,
                v18,
                (__int64)v14,
                (__int64)v15);
      KxReleaseSpinLock(v9);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v25 = KeGetCurrentIrql();
          if ( v25 <= 0xFu && (unsigned __int8)v12 <= 0xFu && v25 >= 2u )
          {
            v26 = KeGetCurrentPrcb();
            v27 = v26->SchedulerAssist;
            v28 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
            v24 = (v28 & v27[5]) == 0;
            v27[5] &= v28;
            if ( v24 )
              KiRemoveSystemWorkPriorityKick(v26);
          }
        }
      }
      v11 = v19;
      goto LABEL_6;
    }
  }
  return 1;
}
