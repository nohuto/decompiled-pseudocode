/*
 * XREFs of CmKtmNotification @ 0x1406A3E40
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140209A50 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140209BE0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402FB2A0 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     RtlFreeAnsiString @ 0x140632500 (RtlFreeAnsiString.c)
 *     CmpIsCmRm @ 0x1406A4210 (CmpIsCmRm.c)
 *     UNLOCK_HIVE_LOAD @ 0x1407011E0 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x140701374 (LOCK_HIVE_LOAD.c)
 *     CmpQueryNameString @ 0x140711A48 (CmpQueryNameString.c)
 *     CmLogTmRmAction @ 0x14075F438 (CmLogTmRmAction.c)
 *     CmpTransMgrPrepare @ 0x14076032C (CmpTransMgrPrepare.c)
 *     CmpTransMgrCommit @ 0x1407604BC (CmpTransMgrCommit.c)
 *     CmpAccountForLogReservation @ 0x140763C40 (CmpAccountForLogReservation.c)
 *     CmpCleanupTransactionState @ 0x14076C168 (CmpCleanupTransactionState.c)
 *     CmpTransMgrRollback @ 0x14076CD70 (CmpTransMgrRollback.c)
 *     CmpQueueLazyCommitWorker @ 0x140875440 (CmpQueueLazyCommitWorker.c)
 *     CmpRecoverEnlistment @ 0x1408775A4 (CmpRecoverEnlistment.c)
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
  char v9; // r13
  __int64 v12; // rdx
  NTSTATUS result; // eax
  int v14; // edi
  struct _KTHREAD *CurrentThread; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  ULONG_PTR v19; // rcx
  int v20; // eax
  PVOID v21; // rdx
  int v22; // eax
  char v23; // r12
  NTSTATUS OnlyEnlistment; // eax
  UNICODE_STRING *p_UnicodeString; // rcx
  char v27; // [rsp+40h] [rbp-61h] BYREF
  char v28; // [rsp+41h] [rbp-60h]
  PVOID Key; // [rsp+48h] [rbp-59h] BYREF
  int v30; // [rsp+50h] [rbp-51h] BYREF
  unsigned int v31; // [rsp+54h] [rbp-4Dh]
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-49h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-39h]
  __int128 v34; // [rsp+70h] [rbp-31h] BYREF
  _OWORD v35[2]; // [rsp+80h] [rbp-21h] BYREF

  v7 = 0;
  Key = 0LL;
  Handle = 0LL;
  v27 = 0;
  v30 = 0;
  v28 = 1;
  v34 = 0LL;
  v9 = 0;
  UnicodeString = 0LL;
  memset(v35, 0, sizeof(v35));
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
      switch ( TransactionNotification )
      {
        case 2u:
          *((_DWORD *)Key + 12) = v16 | 1;
          ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          return TmPrepareComplete(EnlistmentObject, 0LL);
        case 4u:
          *((_DWORD *)Key + 12) = v16 | 4;
          ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          TmCommitComplete(EnlistmentObject, 0LL);
          return v14;
        case 8u:
          *((_DWORD *)Key + 12) = v16 | 2;
          ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          return TmRollbackComplete(EnlistmentObject, 0LL);
        default:
          return v14;
      }
    }
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v19 = qword_140C01170;
    if ( CmRmSystem != RMContext )
      v19 = *((_QWORD *)RMContext + 10);
    if ( CmpTraceTxrRoutine && (int)CmpQueryNameString(*(_QWORD *)(v19 + 1536), &UnicodeString) >= 0 )
    {
      EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v35, 0x20000u);
      v34 = *(_OWORD *)((char *)Key + 88);
    }
    if ( (struct _KTHREAD *)CmpLoadHiveLockOwner == KeGetCurrentThread() )
      v7 = 1;
    else
      LOCK_HIVE_LOAD(v19);
    if ( (unsigned __int8)CmpIsCmRm(RMContext, v17, v18) )
    {
      switch ( TransactionNotification )
      {
        case 2u:
          v20 = CmpTransMgrPrepare(RMContext, Key, &v30, &v27);
          break;
        case 4u:
          v20 = CmpTransMgrCommit(RMContext, Key, &v30);
          break;
        case 8u:
          v20 = CmpTransMgrRollback(Key, &v30);
          break;
        default:
          v14 = -1073741811;
          goto LABEL_18;
      }
      v14 = v20;
LABEL_18:
      v31 = v14;
      if ( v14 >= 0 || TransactionNotification == 4 )
      {
        v21 = Key;
        if ( *((PVOID *)Key + 2) == (char *)Key + 16 || v14 < 0 )
        {
          v28 = 0;
        }
        else
        {
          v22 = CmLogTmRmAction((_DWORD)RMContext);
          v21 = Key;
          v14 = v22;
          if ( TransactionNotification != 2 )
            v14 = 0;
        }
        v23 = 1;
        if ( TransactionNotification == 4 )
        {
LABEL_26:
          if ( *((_QWORD *)v21 + 9) )
            Handle = (HANDLE)*((_QWORD *)v21 + 10);
          if ( (*((_DWORD *)v21 + 12) & 0x20) != 0 )
          {
            if ( (int)CmpAccountForLogReservation(RMContext, v21, 0LL) >= 0 )
              *((_DWORD *)Key + 12) &= ~0x20u;
            v21 = Key;
          }
          if ( v14 < 0 && TransactionNotification == 4 )
          {
            CmpQueueLazyCommitWorker(v21);
            v14 = 0;
          }
          else
          {
            CmpCleanupTransactionState(RMContext, v21, TransactionNotification);
          }
LABEL_34:
          TmDereferenceEnlistmentKey(EnlistmentObject, 0LL);
          if ( !v7 )
            UNLOCK_HIVE_LOAD();
          if ( v23 != 1 )
            goto LABEL_41;
          switch ( TransactionNotification )
          {
            case 2u:
              if ( v27 == 1 )
                OnlyEnlistment = TmReadOnlyEnlistment(EnlistmentObject, 0LL);
              else
                OnlyEnlistment = TmPrepareComplete(EnlistmentObject, 0LL);
              break;
            case 4u:
              TmCommitComplete(EnlistmentObject, 0LL);
              goto LABEL_41;
            case 8u:
              OnlyEnlistment = TmRollbackComplete(EnlistmentObject, 0LL);
              break;
            default:
              goto LABEL_41;
          }
          v14 = OnlyEnlistment;
LABEL_41:
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
          if ( !CmpTraceTxrRoutine || !v9 )
            goto LABEL_46;
          if ( UnicodeString.Buffer )
          {
            p_UnicodeString = &UnicodeString;
            LOBYTE(p_UnicodeString) = v9;
            CmpTraceTxrRoutine(p_UnicodeString, v35, &v34, v31, v30, &UnicodeString);
LABEL_46:
            if ( UnicodeString.Buffer )
              RtlFreeAnsiString(&UnicodeString);
            return v14;
          }
          return v14;
        }
      }
      else
      {
        v21 = Key;
        v23 = 0;
      }
      if ( v27 != 1 && TransactionNotification != 8 )
        goto LABEL_34;
      goto LABEL_26;
    }
    if ( !v7 )
      UNLOCK_HIVE_LOAD();
    TmDereferenceEnlistmentKey(EnlistmentObject, 0LL);
    if ( UnicodeString.Buffer )
      RtlFreeAnsiString(&UnicodeString);
    return -1073741811;
  }
  return result;
}
