/*
 * XREFs of CmKtmNotification @ 0x140741CF0
 * Callers:
 *     <none>
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140223A20 (EtwGetKernelTraceTimestamp.c)
 *     CmCleanupThreadInfo @ 0x14022EA30 (CmCleanupThreadInfo.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     CmpInitializeThreadInfo @ 0x140347770 (CmpInitializeThreadInfo.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     UNLOCK_HIVE_LOAD @ 0x14068934C (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x1406893EC (LOCK_HIVE_LOAD.c)
 *     CmpTransMgrRollback @ 0x1406E2798 (CmpTransMgrRollback.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     CmpIsCmRm @ 0x140742190 (CmpIsCmRm.c)
 *     CmLogTmRmAction @ 0x140742230 (CmLogTmRmAction.c)
 *     CmpCleanupTransactionState @ 0x140742300 (CmpCleanupTransactionState.c)
 *     CmpAccountForLogReservation @ 0x14074244C (CmpAccountForLogReservation.c)
 *     CmpTransMgrPrepare @ 0x1407424F0 (CmpTransMgrPrepare.c)
 *     CmpTransMgrCommit @ 0x1407426B8 (CmpTransMgrCommit.c)
 *     CmpQueryNameString @ 0x140742C78 (CmpQueryNameString.c)
 *     CmpRecoverEnlistment @ 0x14091BA74 (CmpRecoverEnlistment.c)
 */

__int64 __fastcall CmKtmNotification(
        PKENLISTMENT EnlistmentObject,
        _DWORD *RMContext,
        PVOID TransactionContext,
        ULONG TransactionNotification,
        PLARGE_INTEGER TmVirtualClock,
        ULONG ArgumentLength,
        PVOID Argument)
{
  char v8; // r13
  __int64 v11; // rdx
  int v12; // ebx
  NTSTATUS v13; // eax
  struct _KTHREAD *CurrentThread; // rax
  int v15; // eax
  __int64 v16; // rcx
  char v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v21; // eax
  char v22; // r15
  NTSTATUS OnlyEnlistment; // eax
  UNICODE_STRING *p_UnicodeString; // rcx
  char v25; // [rsp+40h] [rbp-71h] BYREF
  char v26; // [rsp+41h] [rbp-70h]
  char v27; // [rsp+42h] [rbp-6Fh]
  PVOID Key; // [rsp+48h] [rbp-69h] BYREF
  int v29; // [rsp+50h] [rbp-61h] BYREF
  unsigned int v30; // [rsp+54h] [rbp-5Dh]
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-59h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-49h]
  __int128 v33; // [rsp+70h] [rbp-41h] BYREF
  __int128 v34; // [rsp+80h] [rbp-31h] BYREF
  _OWORD v35[2]; // [rsp+90h] [rbp-21h] BYREF

  Key = 0LL;
  Handle = 0LL;
  v27 = 0;
  v25 = 0;
  v33 = 0LL;
  v29 = 0;
  v8 = 0;
  v34 = 0LL;
  UnicodeString = 0LL;
  v26 = 1;
  memset(v35, 0, sizeof(v35));
  CmpInitializeThreadInfo((__int64)&v33);
  if ( !(unsigned __int8)CmpIsCmRm(RMContext) )
  {
    v12 = -1073741811;
    goto LABEL_84;
  }
  if ( (RMContext[26] & 8) != 0 )
    goto LABEL_83;
  if ( TransactionNotification == 256 )
  {
    v13 = CmpRecoverEnlistment(RMContext, v11, Argument);
    goto LABEL_6;
  }
  if ( (TransactionNotification & 0xE) == 0 )
  {
LABEL_83:
    v12 = 0;
    goto LABEL_84;
  }
  v12 = TmReferenceEnlistmentKey(EnlistmentObject, &Key);
  if ( v12 )
    goto LABEL_84;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  v15 = *((_DWORD *)Key + 12);
  if ( (v15 & 8) != 0 )
  {
    switch ( TransactionNotification )
    {
      case 2u:
        *((_DWORD *)Key + 12) = v15 | 1;
        ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
        KeLeaveCriticalRegion();
        v13 = TmPrepareComplete(EnlistmentObject, 0LL);
        break;
      case 4u:
        *((_DWORD *)Key + 12) = v15 | 4;
        ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
        KeLeaveCriticalRegion();
        TmCommitComplete(EnlistmentObject, 0LL);
        goto LABEL_84;
      case 8u:
        *((_DWORD *)Key + 12) = v15 | 2;
        ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
        KeLeaveCriticalRegion();
        v13 = TmRollbackComplete(EnlistmentObject, 0LL);
        break;
      default:
LABEL_84:
        CmCleanupThreadInfo((__int64 *)&v33);
        return (unsigned int)v12;
    }
LABEL_6:
    v12 = v13;
    goto LABEL_84;
  }
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegion();
  v16 = qword_140C02770;
  if ( CmRmSystem != RMContext )
    v16 = *((_QWORD *)RMContext + 10);
  if ( CmpTraceTxrRoutine && (int)CmpQueryNameString(*(_QWORD *)(v16 + 1544), &UnicodeString) >= 0 )
  {
    EtwGetKernelTraceTimestamp((unsigned __int64)v35, 0x20000uLL);
    v34 = *(_OWORD *)((char *)Key + 88);
  }
  if ( (struct _KTHREAD *)CmpLoadHiveLockOwner == KeGetCurrentThread() )
  {
    v17 = 0;
  }
  else
  {
    LOCK_HIVE_LOAD();
    v17 = 1;
  }
  if ( (unsigned __int8)CmpIsCmRm(RMContext) )
  {
    switch ( TransactionNotification )
    {
      case 2u:
        v21 = CmpTransMgrPrepare(RMContext, Key, &v29, &v25);
        break;
      case 4u:
        v21 = CmpTransMgrCommit(v19, Key, &v29);
        break;
      case 8u:
        v21 = CmpTransMgrRollback((__int64)Key, &v29);
        break;
      default:
        v12 = -1073741811;
        v30 = -1073741811;
        goto LABEL_46;
    }
    v30 = v21;
    v12 = v21;
    if ( v21 >= 0 || TransactionNotification == 4 )
    {
      v30 = v21;
      if ( *((PVOID *)Key + 2) == (char *)Key + 16 || v21 < 0 )
      {
        v26 = 0;
      }
      else
      {
        v12 = CmLogTmRmAction((int)RMContext);
        if ( TransactionNotification != 2 )
          v12 = 0;
      }
      v27 = 1;
      if ( TransactionNotification == 4 )
        goto LABEL_48;
    }
    if ( TransactionNotification == 8 )
    {
LABEL_48:
      v22 = v25;
LABEL_49:
      if ( *((_QWORD *)Key + 9) )
        Handle = (HANDLE)*((_QWORD *)Key + 10);
      if ( (*((_DWORD *)Key + 12) & 0x20) != 0 && (int)CmpAccountForLogReservation(RMContext, v18, 0LL) >= 0 )
        *((_DWORD *)Key + 12) &= ~0x20u;
      if ( v12 >= 0 || TransactionNotification != 4 )
      {
        v12 = CmpTransMgrRollback((__int64)Key, &v29);
        CmpCleanupTransactionState(RMContext, Key, TransactionNotification);
      }
LABEL_57:
      TmDereferenceEnlistmentKey(EnlistmentObject, 0LL);
      if ( v17 )
        UNLOCK_HIVE_LOAD();
      if ( v27 == 1 )
      {
        switch ( TransactionNotification )
        {
          case 2u:
            if ( v22 == 1 )
              OnlyEnlistment = TmReadOnlyEnlistment(EnlistmentObject, 0LL);
            else
              OnlyEnlistment = TmPrepareComplete(EnlistmentObject, 0LL);
            break;
          case 4u:
            TmCommitComplete(EnlistmentObject, 0LL);
            goto LABEL_69;
          case 8u:
            OnlyEnlistment = TmRollbackComplete(EnlistmentObject, 0LL);
            break;
          default:
            goto LABEL_69;
        }
        v12 = OnlyEnlistment;
      }
LABEL_69:
      if ( Handle )
        ZwClose(Handle);
      switch ( TransactionNotification )
      {
        case 2u:
          v8 = 31;
          break;
        case 4u:
          v8 = 30;
          break;
        case 8u:
          v8 = 32;
          break;
      }
      if ( CmpTraceTxrRoutine && v8 )
      {
        if ( !UnicodeString.Buffer )
          goto LABEL_84;
        p_UnicodeString = &UnicodeString;
        LOBYTE(p_UnicodeString) = v8;
        CmpTraceTxrRoutine(p_UnicodeString, v35, &v34, v30, v29, &UnicodeString);
      }
      if ( UnicodeString.Buffer )
        RtlFreeUnicodeString(&UnicodeString);
      goto LABEL_84;
    }
LABEL_46:
    v22 = v25;
    if ( v25 != 1 )
      goto LABEL_57;
    goto LABEL_49;
  }
  if ( v17 )
    UNLOCK_HIVE_LOAD();
  TmDereferenceEnlistmentKey(EnlistmentObject, 0LL);
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  return 3221225485LL;
}
