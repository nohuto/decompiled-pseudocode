/*
 * XREFs of CmKtmNotification @ 0x1406A36F0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x1402067E0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140206970 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     EtwGetKernelTraceTimestamp @ 0x14029B060 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA580 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     RtlFreeAnsiString @ 0x140602CB0 (RtlFreeAnsiString.c)
 *     UNLOCK_HIVE_LOAD @ 0x1406725C0 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x140672754 (LOCK_HIVE_LOAD.c)
 *     CmpIsCmRm @ 0x1406A3C54 (CmpIsCmRm.c)
 *     CmpQueryNameString @ 0x140716838 (CmpQueryNameString.c)
 *     CmLogTmRmAction @ 0x140763AC8 (CmLogTmRmAction.c)
 *     CmpAccountForLogReservation @ 0x140767230 (CmpAccountForLogReservation.c)
 *     CmpTransMgrPrepare @ 0x140768D04 (CmpTransMgrPrepare.c)
 *     CmpTransMgrCommit @ 0x140768EA0 (CmpTransMgrCommit.c)
 *     CmpCleanupTransactionState @ 0x140770484 (CmpCleanupTransactionState.c)
 *     CmpTransMgrRollback @ 0x140771090 (CmpTransMgrRollback.c)
 *     CmpRecoverEnlistment @ 0x140874E8C (CmpRecoverEnlistment.c)
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
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // eax
  PVOID v24; // rcx
  char v25; // r13
  int v26; // eax
  int v27; // eax
  __int64 v28; // r9
  NTSTATUS OnlyEnlistment; // eax
  UNICODE_STRING *p_UnicodeString; // rcx
  char v31; // [rsp+40h] [rbp-61h] BYREF
  char v32; // [rsp+41h] [rbp-60h]
  PVOID Key; // [rsp+48h] [rbp-59h] BYREF
  int v34; // [rsp+50h] [rbp-51h] BYREF
  unsigned int v35; // [rsp+54h] [rbp-4Dh]
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-49h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-39h]
  __int128 v38; // [rsp+70h] [rbp-31h] BYREF
  _OWORD v39[2]; // [rsp+80h] [rbp-21h] BYREF

  v7 = 0;
  Key = 0LL;
  Handle = 0LL;
  v31 = 0;
  v34 = 0;
  v32 = 1;
  v38 = 0LL;
  v9 = 0;
  UnicodeString = 0LL;
  memset(v39, 0, sizeof(v39));
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
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          TmCommitComplete(EnlistmentObject, 0LL);
        }
        else if ( TransactionNotification == 8 )
        {
          *((_DWORD *)Key + 12) = v16 | 2;
          ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          return TmRollbackComplete(EnlistmentObject, 0LL);
        }
        return v14;
      }
      *((_DWORD *)Key + 12) = v16 | 1;
      ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      return TmPrepareComplete(EnlistmentObject, 0LL);
    }
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v20 = qword_140C01170;
    if ( CmRmSystem != RMContext )
      v20 = *((_QWORD *)RMContext + 10);
    if ( CmpTraceTxrRoutine && (int)CmpQueryNameString(*(_QWORD *)(v20 + 1536), &UnicodeString) >= 0 )
    {
      EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v39, 0x20000u);
      v38 = *(_OWORD *)((char *)Key + 88);
    }
    if ( (struct _KTHREAD *)CmpLoadHiveLockOwner == KeGetCurrentThread() )
      v7 = 1;
    else
      LOCK_HIVE_LOAD();
    if ( !(unsigned __int8)CmpIsCmRm(RMContext, v18, v19) )
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
        v23 = CmpTransMgrPrepare(RMContext, Key, &v34, &v31);
        break;
      case 4u:
        v23 = CmpTransMgrCommit(v22, Key, &v34);
        break;
      case 8u:
        v23 = CmpTransMgrRollback(Key, &v34);
        break;
      default:
        v14 = -1073741811;
LABEL_39:
        v35 = v14;
        if ( v14 >= 0 || TransactionNotification == 4 )
        {
          v24 = Key;
          if ( *((PVOID *)Key + 2) == (char *)Key + 16 || v14 < 0 )
          {
            v32 = 0;
          }
          else
          {
            v26 = CmLogTmRmAction((_DWORD)RMContext);
            v24 = Key;
            v14 = v26;
            if ( TransactionNotification != 2 )
              v14 = 0;
          }
          v25 = 1;
          if ( TransactionNotification == 4 )
          {
LABEL_50:
            if ( *((_QWORD *)v24 + 9) )
              Handle = (HANDLE)*((_QWORD *)v24 + 10);
            if ( (*((_DWORD *)v24 + 12) & 0x20) != 0 )
            {
              if ( (int)CmpAccountForLogReservation(RMContext, v21, 0LL) >= 0 )
                *((_DWORD *)Key + 12) &= ~0x20u;
              v24 = Key;
            }
            if ( v14 >= 0 || TransactionNotification != 4 )
            {
              v27 = CmpTransMgrRollback(v24, &v34);
              LOBYTE(v28) = v32;
              v14 = v27;
              CmpCleanupTransactionState(RMContext, Key, TransactionNotification, v28);
            }
LABEL_59:
            TmDereferenceEnlistmentKey(EnlistmentObject, 0LL);
            if ( !v7 )
              UNLOCK_HIVE_LOAD();
            if ( v25 == 1 )
            {
              switch ( TransactionNotification )
              {
                case 2u:
                  if ( v31 == 1 )
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
              CmpTraceTxrRoutine(p_UnicodeString, v39, &v38, v35, v34, &UnicodeString);
            }
            if ( UnicodeString.Buffer )
              RtlFreeAnsiString(&UnicodeString);
            return v14;
          }
        }
        else
        {
          v24 = Key;
          v25 = 0;
        }
        if ( TransactionNotification != 8 && v31 != 1 )
          goto LABEL_59;
        goto LABEL_50;
    }
    v14 = v23;
    goto LABEL_39;
  }
  return result;
}
