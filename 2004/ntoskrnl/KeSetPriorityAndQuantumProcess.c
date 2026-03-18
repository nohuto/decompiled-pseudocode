/*
 * XREFs of KeSetPriorityAndQuantumProcess @ 0x1402F049C
 * Callers:
 *     PspSetProcessPriorityByClass @ 0x1402F1898 (PspSetProcessPriorityByClass.c)
 *     NtSetInformationProcess @ 0x1406A02E0 (NtSetInformationProcess.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiSetPriorityThread @ 0x140213680 (KiSetPriorityThread.c)
 *     KiProcessDeferredReadyList @ 0x140213FB0 (KiProcessDeferredReadyList.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14024A7A0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x1402ED9C0 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiApplyForegroundBoostThread @ 0x1402F0DCC (KiApplyForegroundBoostThread.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x1402F1220 (KiSetBasePriorityAndClearDecrement.c)
 *     KeSetQuantumProcess @ 0x1402F1B94 (KeSetQuantumProcess.c)
 *     KeFlushProcessWriteBuffers @ 0x1402FCFDC (KeFlushProcessWriteBuffers.c)
 *     KiReleaseThreadLockSafe @ 0x140327E50 (KiReleaseThreadLockSafe.c)
 *     KiPriQueueThreadPriorityChanged @ 0x14034CE84 (KiPriQueueThreadPriorityChanged.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTracePriority @ 0x1405A29D4 (EtwTracePriority.c)
 */

__int64 __fastcall KeSetPriorityAndQuantumProcess(__int64 a1, int a2, char a3, unsigned int a4, int a5)
{
  __int64 result; // rax
  int v7; // r12d
  __int64 v8; // rdx
  int v11; // esi
  int v12; // r15d
  char v13; // r14
  __int64 CurrentIrql; // rcx
  char v15; // di
  __int64 v16; // rdx
  __int64 v17; // r9
  _QWORD *v18; // rax
  __int64 v19; // r8
  __int64 v20; // rbx
  struct _KPRCB *v21; // rdi
  _DWORD *v22; // rcx
  int v23; // esi
  int v24; // eax
  char v25; // cl
  int v26; // eax
  unsigned __int64 updated; // rcx
  unsigned __int64 v28; // rdx
  int v29; // eax
  unsigned __int8 v30; // r14
  char v31; // di
  char v32; // al
  _BYTE *v33; // rcx
  unsigned int v34; // r13d
  __int64 v35; // rsi
  _DWORD *v36; // rcx
  _DWORD *SchedulerAssist; // r9
  int v38; // r12d
  __int64 v39; // rbx
  struct _KPRCB *v40; // rdi
  _DWORD *v41; // rcx
  int v42; // eax
  _DWORD *v43; // rcx
  int v44; // eax
  _DWORD *v45; // rcx
  int v46; // eax
  int v47; // ecx
  int v48; // edi
  char v49; // al
  bool v50; // sf
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // rdx
  _BYTE *v53; // rcx
  int v54; // eax
  int v55; // eax
  int v56; // [rsp+30h] [rbp-41h]
  int v57; // [rsp+30h] [rbp-41h]
  int v58; // [rsp+34h] [rbp-3Dh]
  int v59; // [rsp+38h] [rbp-39h]
  _QWORD *v60; // [rsp+40h] [rbp-31h]
  int v61; // [rsp+48h] [rbp-29h]
  int v62; // [rsp+4Ch] [rbp-25h]
  struct _KPRCB *CurrentPrcb; // [rsp+50h] [rbp-21h]
  __int64 v64; // [rsp+58h] [rbp-19h] BYREF
  int v65; // [rsp+60h] [rbp-11h] BYREF
  int v66; // [rsp+64h] [rbp-Dh] BYREF
  _KTHREAD *CurrentThread; // [rsp+68h] [rbp-9h]
  _QWORD *v68; // [rsp+70h] [rbp-1h]
  PEX_SPIN_LOCK SpinLock; // [rsp+78h] [rbp+7h]
  __int64 v70; // [rsp+80h] [rbp+Fh]
  unsigned int v71; // [rsp+D0h] [rbp+5Fh] BYREF
  char v72; // [rsp+D8h] [rbp+67h]
  char v73; // [rsp+E0h] [rbp+6Fh]

  v73 = a3;
  result = (unsigned int)*(char *)(a1 + 640);
  v7 = a5;
  v8 = 0LL;
  v71 = 0;
  if ( (_DWORD)result == a2 && (a4 == a5 || a2 >= 16) )
  {
    if ( a3 )
    {
      LOBYTE(v8) = a3;
      KeSetQuantumProcess(a1, v8);
    }
    return (unsigned int)a2;
  }
  else if ( (_UNKNOWN *)a1 != &KiInitialProcess )
  {
    v56 = 0;
    v11 = 1;
    v58 = 0;
    if ( a2 )
      v11 = a2;
    v72 = 0;
    v64 = 0LL;
    v62 = WORD2(PerfGlobalGroupMask) & 0x2000;
    v12 = 0;
    v13 = 0;
    CurrentIrql = KeGetCurrentIrql();
    v70 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentThread = CurrentPrcb->CurrentThread;
    SpinLock = (PEX_SPIN_LOCK)(a1 + 64);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    v15 = v73;
    if ( v73 )
      *(_BYTE *)(a1 + 641) = v73;
    v59 = *(char *)(a1 + 640);
    v61 = v11 - v59;
    *(_BYTE *)(a1 + 640) = v11;
    KeFlushProcessWriteBuffers(1LL);
    v18 = *(_QWORD **)(a1 + 48);
    v68 = (_QWORD *)(a1 + 48);
    v60 = v18;
    if ( v18 != (_QWORD *)(a1 + 48) )
    {
      v19 = 16LL;
      if ( v11 < 16 )
      {
        while ( 1 )
        {
          v20 = (__int64)(v18 - 95);
          if ( v15 )
            *(_BYTE *)(v20 + 651) = v15;
          v21 = KeGetCurrentPrcb();
          v66 = 0;
          while ( 1 )
          {
            v22 = v21->SchedulerAssist;
            if ( v22 )
            {
              if ( v21->NestingLevel <= 1u )
              {
                v54 = v22[6];
                v22[6] = v54 + 1;
                if ( v54 == -1 )
                  KiRemoveSystemWorkPriorityKick(v21);
              }
            }
            if ( !_interlockedbittestandset64((volatile signed __int32 *)(v20 + 64), 0LL) )
              break;
            v36 = v21->SchedulerAssist;
            if ( v36 )
            {
              if ( v21->NestingLevel <= 1u )
              {
                v55 = v36[6] - 1;
                v36[6] = v55;
                if ( !v55 )
                  KiRemoveSystemWorkPriorityKick(v21);
              }
            }
            do
              KeYieldProcessorEx(&v66, v16, v19, v17);
            while ( *(_QWORD *)(v20 + 64) );
          }
          v23 = *(char *)(v20 + 563);
          if ( v23 <= v59 || v23 < 16 )
            break;
          KiReleaseThreadLockSafe(v20);
LABEL_45:
          v15 = v73;
          v18 = (_QWORD *)*v60;
          v60 = v18;
          if ( v18 == v68 )
            goto LABEL_46;
        }
        v24 = v23 + v61;
        if ( v23 + v61 >= 16 )
        {
          v71 = 15;
        }
        else
        {
          if ( v24 <= 0 )
            v24 = 1;
          v71 = v24;
        }
        v25 = *(_BYTE *)(v20 + 645);
        if ( !v25 )
          goto LABEL_27;
        if ( v59 < 16 )
        {
          KiReleaseThreadLockSafe(v20);
          v31 = 0;
LABEL_44:
          if ( v62 )
          {
            if ( v72 )
            {
              v72 = 0;
              EtwTracePriority(v20, 1328, v58, v56, 0LL);
            }
            if ( v31 )
            {
              v17 = v71;
              if ( v23 != v71 )
                EtwTracePriority(v20, 1329, v23, v71, (__int64)&v71);
            }
          }
          goto LABEL_45;
        }
        if ( v25 > 0 )
        {
          v71 = 15;
        }
        else
        {
LABEL_27:
          v26 = v71;
          if ( v25 < 0 )
            v26 = 1;
          v71 = v26;
        }
        if ( (_KTHREAD *)v20 != CurrentThread || CurrentPrcb->NestingLevel )
        {
          updated = *(_QWORD *)(v20 + 72);
        }
        else
        {
          _disable();
          updated = KiUpdateTotalCyclesCurrentThread((__int64)CurrentPrcb, v20, 0LL);
          _enable();
        }
        v28 = updated + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(v20 + 651);
        if ( (*(_DWORD *)(v20 + 120) & 0x20) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(v20 + 120), 5u);
        *(_QWORD *)(v20 + 32) = v28;
        if ( v7 && (v31 = 0, v71 == v23) )
        {
          v30 = v56;
        }
        else
        {
          v29 = KiSetBasePriorityAndClearDecrement(v20, &v71, a4);
          v30 = v29;
          v56 = v29;
          v31 = 1;
        }
        v32 = 0;
        if ( v7 )
          v32 = KiApplyForegroundBoostThread(v20, &v64);
        if ( !v31 )
          goto LABEL_43;
        if ( !v32 )
        {
          v58 = *(char *)(v20 + 195);
          if ( KiSetPriorityThread((_KTHREAD *)v20, (__int64)&v64, v30) )
          {
            v56 = *(char *)(v20 + 195);
            v72 = 1;
          }
        }
        v33 = *(_BYTE **)(v20 + 232);
        if ( v33 && (*v33 & 0x7F) == 0x15 )
          KiPriQueueThreadPriorityChanged(v33, v20);
        else
LABEL_43:
          KiReleaseThreadLockSafe(v20);
        goto LABEL_44;
      }
      v34 = v59;
      v38 = 0;
      while ( 1 )
      {
        v39 = (__int64)(v18 - 95);
        if ( v15 )
          *(_BYTE *)(v39 + 651) = v15;
        v40 = KeGetCurrentPrcb();
        v65 = 0;
        v41 = v40->SchedulerAssist;
        if ( v41 )
        {
          v16 = 1LL;
          if ( v40->NestingLevel <= 1u )
          {
            v42 = v41[6];
            v41[6] = v42 + 1;
            if ( v42 == -1 )
LABEL_70:
              KiRemoveSystemWorkPriorityKick(v40);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v39 + 64), 0LL) )
        {
          v43 = v40->SchedulerAssist;
          if ( v43 )
          {
            if ( v40->NestingLevel <= 1u )
            {
              v44 = v43[6] - 1;
              v43[6] = v44;
              if ( !v44 )
                KiRemoveSystemWorkPriorityKick(v40);
            }
          }
          do
            KeYieldProcessorEx(&v65, v16, v19, v17);
          while ( *(_QWORD *)(v39 + 64) );
          v45 = v40->SchedulerAssist;
          if ( v45 )
          {
            if ( v40->NestingLevel <= 1u )
            {
              v46 = v45[6];
              v45[6] = v46 + 1;
              if ( v46 == -1 )
                goto LABEL_70;
            }
          }
        }
        v47 = *(char *)(v39 + 563);
        v48 = v47 + v61;
        if ( v47 + v61 >= 16 )
        {
          if ( v48 > 31 )
            v48 = 31;
          v71 = v48;
        }
        else
        {
          v48 = 16;
          v71 = 16;
        }
        v49 = *(_BYTE *)(v39 + 645);
        v35 = (__int64)CurrentPrcb;
        v50 = v49 < 0;
        if ( !v49 )
          goto LABEL_91;
        if ( v59 < 16 )
          break;
        KiReleaseThreadLockSafe(v39);
LABEL_107:
        if ( v62 )
        {
          if ( v72 )
          {
            v72 = 0;
            EtwTracePriority(v39, 1328, v58, v38, 0LL);
          }
          if ( v13 )
          {
            v13 = 0;
            if ( v12 != v48 )
              EtwTracePriority(v39, 1329, v12, v48, (__int64)&v71);
          }
        }
        v15 = v73;
        v18 = (_QWORD *)*v60;
        v60 = v18;
        if ( v18 == v68 )
          goto LABEL_47;
      }
      v50 = v49 < 0;
      if ( v49 <= 0 )
      {
LABEL_91:
        if ( v50 )
          v48 = 16;
        v71 = v48;
      }
      else
      {
        v71 = 31;
      }
      v12 = v47;
      if ( (_KTHREAD *)v39 != CurrentThread || CurrentPrcb->NestingLevel )
      {
        v51 = *(_QWORD *)(v39 + 72);
      }
      else
      {
        _disable();
        v51 = KiUpdateTotalCyclesCurrentThread((__int64)CurrentPrcb, v39, 0LL);
        _enable();
      }
      v52 = v51 + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(v39 + 651);
      if ( (*(_DWORD *)(v39 + 120) & 0x20) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)(v39 + 120), 5u);
      *(_QWORD *)(v39 + 32) = v52;
      v57 = KiSetBasePriorityAndClearDecrement(v39, &v71, 0LL);
      v58 = *(char *)(v39 + 195);
      v13 = 1;
      if ( KiSetPriorityThread((_KTHREAD *)v39, (__int64)&v64, v57) )
      {
        v57 = *(char *)(v39 + 195);
        v72 = 1;
      }
      v53 = *(_BYTE **)(v39 + 232);
      if ( v53 && (*v53 & 0x7F) == 0x15 )
        KiPriQueueThreadPriorityChanged(v53, v39);
      else
        KiReleaseThreadLockSafe(v39);
      v38 = v57;
      v48 = v71;
      goto LABEL_107;
    }
LABEL_46:
    v34 = v59;
    v35 = (__int64)CurrentPrcb;
LABEL_47:
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    KiProcessDeferredReadyList(v35, (__int64)&v64, v70);
    return v34;
  }
  return result;
}
