/*
 * XREFs of CmKtmNotification @ 0x1405E11C0
 * Callers:
 *     <none>
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x1402129F0 (EtwGetKernelTraceTimestamp.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402AB110 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402AB2A0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpIsCmRm @ 0x1405E1724 (CmpIsCmRm.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     UNLOCK_HIVE_LOAD @ 0x1406677F0 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x140667984 (LOCK_HIVE_LOAD.c)
 *     CmpQueryNameString @ 0x1406C4E88 (CmpQueryNameString.c)
 *     CmLogTmRmAction @ 0x140763C88 (CmLogTmRmAction.c)
 *     CmpAccountForLogReservation @ 0x1407673F0 (CmpAccountForLogReservation.c)
 *     CmpTransMgrPrepare @ 0x140768EC4 (CmpTransMgrPrepare.c)
 *     CmpTransMgrCommit @ 0x140769060 (CmpTransMgrCommit.c)
 *     CmpCleanupTransactionState @ 0x140770644 (CmpCleanupTransactionState.c)
 *     CmpTransMgrRollback @ 0x140771250 (CmpTransMgrRollback.c)
 *     CmpRecoverEnlistment @ 0x140874FEC (CmpRecoverEnlistment.c)
 */

NTSTATUS __fastcall CmKtmNotification(
        PKENLISTMENT EnlistmentObject,
        _DWORD *RMContext,
        PVOID TransactionContext,
        ULONG TransactionNotification,
        PLARGE_INTEGER TmVirtualClock,
        ULONG ArgumentLength,
        PVOID Argument)
{
  char v7; // r15
  char v9; // r12
  __int64 v12; // rdx
  NTSTATUS result; // eax
  int v14; // edi
  struct _KTHREAD *CurrentThread; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // r8
  ULONG_PTR v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // eax
  PVOID v36; // rcx
  char v37; // r13
  int v38; // eax
  NTSTATUS OnlyEnlistment; // eax
  UNICODE_STRING *p_UnicodeString; // rcx
  char v41; // [rsp+40h] [rbp-61h] BYREF
  char v42; // [rsp+41h] [rbp-60h]
  PVOID Key; // [rsp+48h] [rbp-59h] BYREF
  int v44; // [rsp+50h] [rbp-51h] BYREF
  unsigned int v45; // [rsp+54h] [rbp-4Dh]
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-49h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-39h]
  __int128 v48; // [rsp+70h] [rbp-31h] BYREF
  _OWORD v49[2]; // [rsp+80h] [rbp-21h] BYREF

  v7 = 0;
  Key = 0LL;
  Handle = 0LL;
  v41 = 0;
  v44 = 0;
  v42 = 1;
  v48 = 0LL;
  v9 = 0;
  UnicodeString = 0LL;
  memset(v49, 0, sizeof(v49));
  if ( !(unsigned __int8)CmpIsCmRm(RMContext, RMContext, TransactionContext) )
    return -1073741811;
  if ( (RMContext[26] & 8) != 0 )
    return 0;
  if ( TransactionNotification == 256 )
    return CmpRecoverEnlistment(RMContext, v12, Argument);
  if ( (TransactionNotification & 0xE) == 0 )
    return 0;
  result = TmReferenceEnlistmentKey(EnlistmentObject, &Key);
  v14 = result;
  if ( !result )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
    v16 = *((_DWORD *)Key + 12);
    if ( (v16 & 8) != 0 )
    {
      if ( TransactionNotification != 2 )
      {
        if ( TransactionNotification == 4 )
        {
          *((_DWORD *)Key + 12) = v16 | 4;
          ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v21, v22, v23);
          TmCommitComplete(EnlistmentObject, 0LL);
        }
        else if ( TransactionNotification == 8 )
        {
          *((_DWORD *)Key + 12) = v16 | 2;
          ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v17, v18, v19);
          return TmRollbackComplete(EnlistmentObject, 0LL);
        }
        return v14;
      }
      *((_DWORD *)Key + 12) = v16 | 1;
      ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v24, v25, v26);
      return TmPrepareComplete(EnlistmentObject, 0LL);
    }
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v27, v28, v29);
    v32 = qword_140C01170;
    if ( CmRmSystem != RMContext )
      v32 = *((_QWORD *)RMContext + 10);
    if ( CmpTraceTxrRoutine && (int)CmpQueryNameString(*(_QWORD *)(v32 + 1536), &UnicodeString) >= 0 )
    {
      EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v49, 0x20000u);
      v48 = *(_OWORD *)((char *)Key + 88);
    }
    if ( (struct _KTHREAD *)CmpLoadHiveLockOwner == KeGetCurrentThread() )
      v7 = 1;
    else
      LOCK_HIVE_LOAD(v32);
    if ( !(unsigned __int8)CmpIsCmRm(RMContext, v30, v31) )
    {
      if ( !v7 )
        UNLOCK_HIVE_LOAD();
      TmDereferenceEnlistmentKey(EnlistmentObject, 0LL);
      if ( UnicodeString.Buffer )
        RtlFreeAnsiString(&UnicodeString);
      return -1073741811;
    }
    switch ( TransactionNotification )
    {
      case 2u:
        v35 = CmpTransMgrPrepare(RMContext, Key, &v44, &v41);
        break;
      case 4u:
        v35 = CmpTransMgrCommit(v34, Key, &v44);
        break;
      case 8u:
        v35 = CmpTransMgrRollback(Key, &v44);
        break;
      default:
        v14 = -1073741811;
LABEL_39:
        v45 = v14;
        if ( v14 >= 0 || TransactionNotification == 4 )
        {
          v36 = Key;
          if ( *((PVOID *)Key + 2) == (char *)Key + 16 || v14 < 0 )
          {
            v42 = 0;
          }
          else
          {
            v38 = CmLogTmRmAction((_DWORD)RMContext);
            v36 = Key;
            v14 = v38;
            if ( TransactionNotification != 2 )
              v14 = 0;
          }
          v37 = 1;
          if ( TransactionNotification == 4 )
          {
LABEL_50:
            if ( *((_QWORD *)v36 + 9) )
              Handle = (HANDLE)*((_QWORD *)v36 + 10);
            if ( (*((_DWORD *)v36 + 12) & 0x20) != 0 )
            {
              if ( (int)CmpAccountForLogReservation(RMContext, v33, 0LL) >= 0 )
                *((_DWORD *)Key + 12) &= ~0x20u;
              v36 = Key;
            }
            if ( v14 >= 0 || TransactionNotification != 4 )
            {
              v14 = CmpTransMgrRollback(v36, &v44);
              CmpCleanupTransactionState(RMContext, Key, TransactionNotification);
            }
LABEL_59:
            TmDereferenceEnlistmentKey(EnlistmentObject, 0LL);
            if ( !v7 )
              UNLOCK_HIVE_LOAD();
            if ( v37 == 1 )
            {
              switch ( TransactionNotification )
              {
                case 2u:
                  if ( v41 == 1 )
                    OnlyEnlistment = TmReadOnlyEnlistment(EnlistmentObject, 0LL);
                  else
                    OnlyEnlistment = TmPrepareComplete(EnlistmentObject, 0LL);
                  break;
                case 4u:
                  TmCommitComplete(EnlistmentObject, 0LL);
                  goto LABEL_71;
                case 8u:
                  OnlyEnlistment = TmRollbackComplete(EnlistmentObject, 0LL);
                  break;
                default:
                  goto LABEL_71;
              }
              v14 = OnlyEnlistment;
            }
LABEL_71:
            if ( Handle )
              ZwClose(Handle);
            switch ( TransactionNotification )
            {
              case 2u:
                v9 = 31;
                break;
              case 4u:
                v9 = 30;
                break;
              case 8u:
                v9 = 32;
                break;
            }
            if ( CmpTraceTxrRoutine && v9 )
            {
              if ( !UnicodeString.Buffer )
                return v14;
              p_UnicodeString = &UnicodeString;
              LOBYTE(p_UnicodeString) = v9;
              CmpTraceTxrRoutine(p_UnicodeString, v49, &v48, v45, v44, &UnicodeString);
            }
            if ( UnicodeString.Buffer )
              RtlFreeAnsiString(&UnicodeString);
            return v14;
          }
        }
        else
        {
          v36 = Key;
          v37 = 0;
        }
        if ( TransactionNotification != 8 && v41 != 1 )
          goto LABEL_59;
        goto LABEL_50;
    }
    v14 = v35;
    goto LABEL_39;
  }
  return result;
}
