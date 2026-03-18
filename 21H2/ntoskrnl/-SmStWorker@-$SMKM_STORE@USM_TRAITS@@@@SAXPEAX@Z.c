/*
 * XREFs of ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140238330
 * Callers:
 *     ?SmStWorkerThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140238310 (-SmStWorkerThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140238294 (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140238A40 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     MmSetHardFaultBehavior @ 0x140238AD8 (MmSetHardFaultBehavior.c)
 *     SmSetThreadPagePriority @ 0x140238BC4 (SmSetThreadPagePriority.c)
 *     MiChargeResident @ 0x1402821F4 (MiChargeResident.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     KeSetActualBasePriorityThread @ 0x14028FD20 (KeSetActualBasePriorityThread.c)
 *     IoSetThreadHardErrorMode @ 0x1402A0800 (IoSetThreadHardErrorMode.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402F5718 (KiQueryUnbiasedInterruptTime.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14037AA7C (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     ?StLazyWorkMgrRunExpiredWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x14037E958 (-StLazyWorkMgrRunExpiredWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14037FA00 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?SmStWorkItemGet@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAK@Z @ 0x140384F50 (-SmStWorkItemGet@-$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@PEAU1@P.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ?StStoreWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405FA9D8 (-StStoreWorkItemCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStWorker(__int64 *a1)
{
  __int64 v1; // rdi
  int v3; // r12d
  int v4; // ebx
  struct _KTHREAD *CurrentThread; // rbx
  NTSTATUS v6; // eax
  NTSTATUS v7; // ecx
  __int64 i; // rax
  int v9; // r8d
  struct _KTHREAD *v10; // rcx
  bool v11; // zf
  _DWORD *v12; // r15
  __int64 v13; // rsi
  struct _KTHREAD *v14; // r14
  unsigned int v15; // ecx
  __int64 v16; // r8
  char *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rsi
  struct _KTHREAD *v20; // r14
  unsigned int v21; // ecx
  __int64 v22; // r8
  char *v23; // rbx
  __int64 v24; // rdx
  int v25; // r8d
  struct _KTHREAD *v26; // rcx
  __int64 result; // rax
  __int64 v28; // rcx
  __int64 UnbiasedInterruptTime; // rax
  __int64 v30; // rsi
  struct _KTHREAD *v31; // r14
  unsigned int SessionId; // ecx
  __int64 v33; // rdx
  __int64 v34; // r8
  char *p_Process; // rbx
  int v36; // r8d
  struct _KTHREAD *v37; // rcx
  PVOID Object[3]; // [rsp+40h] [rbp-18h] BYREF
  int v39; // [rsp+A0h] [rbp+48h] BYREF
  int v40; // [rsp+A8h] [rbp+50h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+B0h] [rbp+58h] BYREF
  LARGE_INTEGER Interval; // [rsp+B8h] [rbp+60h] BYREF

  v1 = *a1;
  v40 = 0;
  Interval.QuadPart = 0LL;
  v3 = 0;
  IoSetThreadHardErrorMode(0);
  BugCheckParameter1 = (ULONG_PTR)KeGetCurrentThread();
  KeSetActualBasePriorityThread(BugCheckParameter1);
  v4 = 0;
  if ( (*(_BYTE *)(v1 + 6021) & 4) != 0 )
  {
    SmSetThreadPagePriority(&BugCheckParameter1, 0LL);
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)MiChargeResident(&MiSystemPartition, 26LL, 1024LL) )
    {
      --CurrentThread->SpecialApcDisable;
      LOBYTE(CurrentThread[1].Queue) |= 4u;
      v3 = 1;
      v4 = 0;
    }
    else
    {
      v4 = -1073741670;
    }
    *(_DWORD *)(BugCheckParameter1 + 1380) |= 2u;
  }
  *((_DWORD *)a1 + 8) = v4;
  KeSetEvent((PRKEVENT)(a1 + 1), 0, 0);
  if ( v4 >= 0 )
  {
    Object[0] = (PVOID)(v1 + 6128);
    Object[1] = (PVOID)(v1 + 6152);
    while ( 1 )
    {
LABEL_7:
      v6 = KeWaitForMultipleObjects(
             2u,
             Object,
             WaitAny,
             Executive,
             0,
             0,
             (PLARGE_INTEGER)((v1 + 6600) & -(__int64)(*(_QWORD *)(v1 + 6600) != 0LL)),
             0LL);
      v39 = v6;
      v7 = v6;
      if ( v6 < 2 )
        goto LABEL_8;
      if ( v6 == 258 )
      {
        SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(v1);
        ST_STORE<SM_TRAITS>::StDrainReadContextList((union _SLIST_HEADER *)v1);
        LOBYTE(v28) = 1;
        *(_QWORD *)(v1 + 5928) += *(_QWORD *)(v1 + 5920);
        UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime(v28);
        ST_STORE<SM_TRAITS>::StLazyWorkMgrRunExpiredWork(v1 + 5744, UnbiasedInterruptTime);
        if ( (*(_BYTE *)(v1 + 6021) & 4) != 0 )
        {
          v30 = v1 + 6024;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 6024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v1 + 6024);
          v31 = KeGetCurrentThread();
          if ( (unsigned __int64)(v30 - qword_140C50630) < 0x8000000000LL )
            SessionId = MmGetSessionIdEx(v31->ApcState.Process);
          else
            SessionId = -1;
          _disable();
          v33 = 0LL;
          v34 = v30 & 0x7FFFFFFFFFFFFFFCLL;
          p_Process = (char *)&v31[1].Process;
          while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != v34
               || !p_Process[18]
               || (*(_DWORD *)p_Process & 1) != 0
               || *((_DWORD *)p_Process + 2) != SessionId )
          {
            v33 = (unsigned int)(v33 + 1);
            p_Process += 96;
            if ( (unsigned int)v33 >= 6 )
              goto LABEL_87;
          }
          p_Process[18] = 0;
          if ( p_Process )
          {
            if ( *(__int64 *)p_Process < 0 )
            {
              *p_Process |= 2u;
              _enable();
              KiAbEntryRemoveFromTree(p_Process, v33, v34);
              _disable();
            }
            v36 = *((_DWORD *)p_Process + 22);
            *((_DWORD *)p_Process + 22) = 0;
            p_Process[17] = 0;
            *(_QWORD *)p_Process = 0LL;
            v31->AbEntrySummary |= 1 << p_Process[16];
            _enable();
            if ( v36 )
              KiAbThreadRemoveBoostsSlow((ULONG_PTR)v31, v1 + 6024, v36);
            goto LABEL_82;
          }
LABEL_87:
          if ( (*((_DWORD *)&v31->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v31, v1 + 6024, SessionId, 0LL);
          _enable();
LABEL_82:
          v37 = KeGetCurrentThread();
          v11 = v37->SpecialApcDisable++ == -1;
          if ( v11 && ($CEA84C04E3712D858E5667A507841A2A *)v37->ApcState.ApcListHead[0].Flink != &v37->152 )
            KiCheckForKernelApcDelivery();
        }
        v7 = 0;
LABEL_8:
        if ( !v7 )
        {
          KeResetEvent((PRKEVENT)Object[0]);
          for ( i = SMKM_STORE<SM_TRAITS>::SmStWorkItemGet(v1, &v40); ; i = SMKM_STORE<SM_TRAITS>::SmStWorkItemGet(
                                                                              v1,
                                                                              &v40) )
          {
            v12 = (_DWORD *)i;
            if ( !i )
              goto LABEL_7;
            SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(v1);
            LOBYTE(v10) = *(_BYTE *)(v1 + 6021);
            if ( ((unsigned __int8)v10 & 1) != 0 && !v40 )
              break;
            if ( ((unsigned __int8)v10 & 2) == 0 || (*v12 & 7) != 0 )
            {
              v39 = ST_STORE<SM_TRAITS>::StWorkItemProcess(v1, v12);
              if ( v39 == 259 )
                goto LABEL_38;
            }
            else
            {
              v39 = -1073741058;
            }
            if ( (*(_BYTE *)(v1 + 6021) & 4) != 0 )
            {
              v13 = v1 + 6024;
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 6024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock(v1 + 6024);
              v14 = KeGetCurrentThread();
              if ( (unsigned __int64)(v13 - qword_140C50630) < 0x8000000000LL )
                v15 = MmGetSessionIdEx(v14->ApcState.Process);
              else
                v15 = -1;
              _disable();
              v16 = v13 & 0x7FFFFFFFFFFFFFFCLL;
              v17 = (char *)&v14[1].Process;
              v18 = 0LL;
              while ( (*(_QWORD *)v17 & 0x7FFFFFFFFFFFFFFCLL) != v16
                   || !v17[18]
                   || (*(_DWORD *)v17 & 1) != 0
                   || *((_DWORD *)v17 + 2) != v15 )
              {
                v18 = (unsigned int)(v18 + 1);
                v17 += 96;
                if ( (unsigned int)v18 >= 6 )
                  goto LABEL_35;
              }
              v17[18] = 0;
              if ( v17 )
              {
                if ( *(__int64 *)v17 < 0 )
                {
                  *v17 |= 2u;
                  _enable();
                  KiAbEntryRemoveFromTree(v17, v18, v16);
                  _disable();
                }
                v9 = *((_DWORD *)v17 + 22);
                *((_DWORD *)v17 + 22) = 0;
                v17[17] = 0;
                *(_QWORD *)v17 = 0LL;
                v14->AbEntrySummary |= 1 << v17[16];
                _enable();
                if ( v9 )
                  KiAbThreadRemoveBoostsSlow((ULONG_PTR)v14, v1 + 6024, v9);
                goto LABEL_19;
              }
LABEL_35:
              if ( (*((_DWORD *)&v14->0 + 1) & 0x10000) == 0 )
                KeBugCheckEx(0x162u, (ULONG_PTR)v14, v1 + 6024, v15, 0LL);
              _enable();
LABEL_19:
              v10 = KeGetCurrentThread();
              v11 = v10->SpecialApcDisable++ == -1;
              if ( v11 && ($CEA84C04E3712D858E5667A507841A2A *)v10->ApcState.ApcListHead[0].Flink != &v10->152 )
                KiCheckForKernelApcDelivery();
            }
            SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFree(v10, v1, v12, &v39);
LABEL_23:
            ;
          }
          v39 = -1073741058;
          ST_STORE<SM_TRAITS>::StStoreWorkItemCleanup(v1, v12);
LABEL_38:
          if ( (*(_BYTE *)(v1 + 6021) & 4) != 0 )
          {
            v19 = v1 + 6024;
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 6024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v1 + 6024);
            v20 = KeGetCurrentThread();
            if ( (unsigned __int64)(v19 - qword_140C50630) < 0x8000000000LL )
              v21 = MmGetSessionIdEx(v20->ApcState.Process);
            else
              v21 = -1;
            _disable();
            v22 = v19 & 0x7FFFFFFFFFFFFFFCLL;
            v23 = (char *)&v20[1].Process;
            v24 = 0LL;
            while ( (*(_QWORD *)v23 & 0x7FFFFFFFFFFFFFFCLL) != v22
                 || !v23[18]
                 || (*(_DWORD *)v23 & 1) != 0
                 || *((_DWORD *)v23 + 2) != v21 )
            {
              v24 = (unsigned int)(v24 + 1);
              v23 += 96;
              if ( (unsigned int)v24 >= 6 )
                goto LABEL_57;
            }
            v23[18] = 0;
            if ( v23 )
            {
              if ( *(__int64 *)v23 < 0 )
              {
                *v23 |= 2u;
                _enable();
                KiAbEntryRemoveFromTree(v23, v24, v22);
                _disable();
              }
              v25 = *((_DWORD *)v23 + 22);
              *((_DWORD *)v23 + 22) = 0;
              v23[17] = 0;
              *(_QWORD *)v23 = 0LL;
              v20->AbEntrySummary |= 1 << v23[16];
              _enable();
              if ( v25 )
                KiAbThreadRemoveBoostsSlow((ULONG_PTR)v20, v1 + 6024, v25);
              goto LABEL_53;
            }
LABEL_57:
            if ( (*((_DWORD *)&v20->0 + 1) & 0x10000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)v20, v1 + 6024, v21, 0LL);
            _enable();
LABEL_53:
            v26 = KeGetCurrentThread();
            v11 = v26->SpecialApcDisable++ == -1;
            if ( v11 && ($CEA84C04E3712D858E5667A507841A2A *)v26->ApcState.ApcListHead[0].Flink != &v26->152 )
              KiCheckForKernelApcDelivery();
          }
          goto LABEL_23;
        }
        if ( v7 == 1 )
          break;
      }
    }
  }
  if ( v3 )
    MmSetHardFaultBehavior(KeGetCurrentThread(), 0LL);
  Interval.QuadPart = -150000LL;
  while ( 1 )
  {
    result = *(unsigned int *)(v1 + 6732);
    if ( !(_DWORD)result )
      break;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  return result;
}
