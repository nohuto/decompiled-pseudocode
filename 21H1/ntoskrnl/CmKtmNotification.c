/*
 * XREFs of CmKtmNotification @ 0x140658680
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireFastMutexUnsafe @ 0x14025BC80 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x14025BE10 (ExReleaseFastMutexUnsafe.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402EE940 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     RtlFreeAnsiString @ 0x1405D8770 (RtlFreeAnsiString.c)
 *     CmpIsCmRm @ 0x140658F20 (CmpIsCmRm.c)
 *     CmpQueryNameString @ 0x14065950C (CmpQueryNameString.c)
 *     UNLOCK_HIVE_LOAD @ 0x140691040 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x1406911D4 (LOCK_HIVE_LOAD.c)
 *     CmLogTmRmAction @ 0x14074C438 (CmLogTmRmAction.c)
 *     CmpTransMgrPrepare @ 0x14074D0BC (CmpTransMgrPrepare.c)
 *     CmpTransMgrCommit @ 0x14074D24C (CmpTransMgrCommit.c)
 *     CmpAccountForLogReservation @ 0x140750970 (CmpAccountForLogReservation.c)
 *     CmpCleanupTransactionState @ 0x14075B618 (CmpCleanupTransactionState.c)
 *     CmpTransMgrRollback @ 0x14075C220 (CmpTransMgrRollback.c)
 *     CmpQueueLazyCommitWorker @ 0x14086DE30 (CmpQueueLazyCommitWorker.c)
 *     CmpRecoverEnlistment @ 0x140870774 (CmpRecoverEnlistment.c)
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
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // r9
  int v24; // eax
  PVOID v25; // rdx
  int v26; // eax
  char v27; // r12
  NTSTATUS OnlyEnlistment; // eax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  UNICODE_STRING *p_UnicodeString; // rcx
  char v40; // [rsp+40h] [rbp-61h] BYREF
  char v41; // [rsp+41h] [rbp-60h]
  PVOID Key; // [rsp+48h] [rbp-59h] BYREF
  int v43; // [rsp+50h] [rbp-51h] BYREF
  unsigned int v44; // [rsp+54h] [rbp-4Dh]
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-49h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-39h]
  __int128 v47; // [rsp+70h] [rbp-31h] BYREF
  _OWORD v48[2]; // [rsp+80h] [rbp-21h] BYREF

  v7 = 0;
  Key = 0LL;
  Handle = 0LL;
  v40 = 0;
  v43 = 0;
  v41 = 1;
  v47 = 0LL;
  v9 = 0;
  UnicodeString = 0LL;
  memset(v48, 0, sizeof(v48));
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
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v36, v37, v38);
          return TmPrepareComplete(EnlistmentObject, 0LL);
        case 4u:
          *((_DWORD *)Key + 12) = v16 | 4;
          ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v33, v34, v35);
          TmCommitComplete(EnlistmentObject, 0LL);
          return v14;
        case 8u:
          *((_DWORD *)Key + 12) = v16 | 2;
          ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v29, v30, v31);
          return TmRollbackComplete(EnlistmentObject, 0LL);
        default:
          return v14;
      }
    }
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v17, v18, v19);
    v22 = qword_140C01170;
    if ( CmRmSystem != RMContext )
      v22 = *((_QWORD *)RMContext + 10);
    if ( CmpTraceTxrRoutine && (int)CmpQueryNameString(*(_QWORD *)(v22 + 1536), &UnicodeString) >= 0 )
    {
      EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v48, 0x20000u);
      v47 = *(_OWORD *)((char *)Key + 88);
    }
    if ( (struct _KTHREAD *)CmpLoadHiveLockOwner == KeGetCurrentThread() )
      v7 = 1;
    else
      LOCK_HIVE_LOAD(v22);
    if ( (unsigned __int8)CmpIsCmRm(RMContext, v20, v21) )
    {
      switch ( TransactionNotification )
      {
        case 2u:
          v24 = CmpTransMgrPrepare(RMContext, Key, &v43, &v40);
          break;
        case 4u:
          v24 = CmpTransMgrCommit(RMContext, Key, &v43);
          break;
        case 8u:
          v24 = CmpTransMgrRollback(Key, &v43);
          break;
        default:
          v14 = -1073741811;
          goto LABEL_18;
      }
      v14 = v24;
LABEL_18:
      v44 = v14;
      if ( v14 >= 0 || TransactionNotification == 4 )
      {
        v25 = Key;
        if ( *((PVOID *)Key + 2) == (char *)Key + 16 || v14 < 0 )
        {
          v41 = 0;
        }
        else
        {
          v26 = CmLogTmRmAction((_DWORD)RMContext);
          v25 = Key;
          v14 = v26;
          if ( TransactionNotification != 2 )
            v14 = 0;
        }
        v27 = 1;
        if ( TransactionNotification == 4 )
        {
LABEL_26:
          if ( *((_QWORD *)v25 + 9) )
            Handle = (HANDLE)*((_QWORD *)v25 + 10);
          if ( (*((_DWORD *)v25 + 12) & 0x20) != 0 )
          {
            if ( (int)CmpAccountForLogReservation(RMContext, v25, 0LL) >= 0 )
              *((_DWORD *)Key + 12) &= ~0x20u;
            v25 = Key;
          }
          if ( v14 < 0 && TransactionNotification == 4 )
          {
            CmpQueueLazyCommitWorker(v25);
            v14 = 0;
          }
          else
          {
            LOBYTE(v23) = v41;
            CmpCleanupTransactionState(RMContext, v25, TransactionNotification, v23);
          }
LABEL_34:
          TmDereferenceEnlistmentKey(EnlistmentObject, 0LL);
          if ( !v7 )
            UNLOCK_HIVE_LOAD();
          if ( v27 != 1 )
            goto LABEL_41;
          switch ( TransactionNotification )
          {
            case 2u:
              if ( v40 == 1 )
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
            CmpTraceTxrRoutine(p_UnicodeString, v48, &v47, v44, v43, &UnicodeString);
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
        v25 = Key;
        v27 = 0;
      }
      if ( v40 != 1 && TransactionNotification != 8 )
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
