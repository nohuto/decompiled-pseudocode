/*
 * XREFs of KeSetPriorityAndQuantumProcess @ 0x14029AC94
 * Callers:
 *     PspSetProcessPriorityByClass @ 0x14029AC3C (PspSetProcessPriorityByClass.c)
 *     NtSetInformationProcess @ 0x140721890 (NtSetInformationProcess.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x1402121F0 (KiReleaseThreadLockSafe.c)
 *     KiPriQueueThreadPriorityChanged @ 0x14021C900 (KiPriQueueThreadPriorityChanged.c)
 *     KeFlushProcessWriteBuffers @ 0x140268CA4 (KeFlushProcessWriteBuffers.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x14029B01C (KiSetBasePriorityAndClearDecrement.c)
 *     KeSetQuantumProcess @ 0x14029B174 (KeSetQuantumProcess.c)
 *     KiApplyForegroundBoostThread @ 0x14029B3DC (KiApplyForegroundBoostThread.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x1402D4110 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiSetPriorityThread @ 0x1402D4AF0 (KiSetPriorityThread.c)
 *     KiProcessDeferredReadyList @ 0x1402D5420 (KiProcessDeferredReadyList.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031FAE0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTracePriority @ 0x1405A80D4 (EtwTracePriority.c)
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
  _QWORD *v16; // rax
  __int64 v17; // rbx
  struct _KPRCB *v18; // rdi
  _DWORD *v19; // rcx
  int v20; // esi
  int v21; // eax
  char v22; // cl
  int v23; // eax
  __int64 updated; // rcx
  __int64 v25; // rdx
  unsigned int v26; // r14d
  char v27; // di
  char v28; // al
  volatile signed __int32 *v29; // rcx
  unsigned int v30; // r13d
  struct _KPRCB *v31; // rsi
  __int64 v32; // r8
  _DWORD *v33; // rcx
  _DWORD *SchedulerAssist; // r9
  unsigned int v35; // r12d
  __int64 v36; // rbx
  struct _KPRCB *v37; // rdi
  _DWORD *v38; // rcx
  int v39; // eax
  _DWORD *v40; // rcx
  int v41; // eax
  _DWORD *v42; // rcx
  int v43; // eax
  int v44; // ecx
  int v45; // edi
  char v46; // al
  bool v47; // sf
  __int64 v48; // rcx
  __int64 v49; // rdx
  volatile signed __int32 *v50; // rcx
  int v51; // eax
  int v52; // eax
  unsigned int v53; // [rsp+30h] [rbp-41h]
  unsigned int v54; // [rsp+30h] [rbp-41h]
  int v55; // [rsp+34h] [rbp-3Dh]
  int v56; // [rsp+38h] [rbp-39h]
  _QWORD *v57; // [rsp+40h] [rbp-31h]
  int v58; // [rsp+48h] [rbp-29h]
  int v59; // [rsp+4Ch] [rbp-25h]
  struct _KPRCB *CurrentPrcb; // [rsp+50h] [rbp-21h]
  __int64 v61; // [rsp+58h] [rbp-19h] BYREF
  int v62; // [rsp+60h] [rbp-11h] BYREF
  int v63; // [rsp+64h] [rbp-Dh] BYREF
  _KTHREAD *CurrentThread; // [rsp+68h] [rbp-9h]
  _QWORD *v65; // [rsp+70h] [rbp-1h]
  PEX_SPIN_LOCK SpinLock; // [rsp+78h] [rbp+7h]
  __int64 v67; // [rsp+80h] [rbp+Fh]
  int v68; // [rsp+D0h] [rbp+5Fh] BYREF
  char v69; // [rsp+D8h] [rbp+67h]
  char v70; // [rsp+E0h] [rbp+6Fh]

  v70 = a3;
  result = (unsigned int)*(char *)(a1 + 640);
  v7 = a5;
  v8 = 0LL;
  v68 = 0;
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
    v53 = 0;
    v11 = 1;
    v55 = 0;
    if ( a2 )
      v11 = a2;
    v69 = 0;
    v61 = 0LL;
    v59 = WORD2(PerfGlobalGroupMask) & 0x2000;
    v12 = 0;
    v13 = 0;
    CurrentIrql = KeGetCurrentIrql();
    v67 = CurrentIrql;
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
    v15 = v70;
    if ( v70 )
      *(_BYTE *)(a1 + 641) = v70;
    v56 = *(char *)(a1 + 640);
    v58 = v11 - v56;
    *(_BYTE *)(a1 + 640) = v11;
    KeFlushProcessWriteBuffers(1);
    v16 = *(_QWORD **)(a1 + 48);
    v65 = (_QWORD *)(a1 + 48);
    v57 = v16;
    if ( v16 != (_QWORD *)(a1 + 48) )
    {
      if ( v11 < 16 )
      {
        while ( 1 )
        {
          v17 = (__int64)(v16 - 95);
          if ( v15 )
            *(_BYTE *)(v17 + 651) = v15;
          v18 = KeGetCurrentPrcb();
          v63 = 0;
          while ( 1 )
          {
            v19 = v18->SchedulerAssist;
            if ( v19 )
            {
              if ( v18->NestingLevel <= 1u )
              {
                v51 = v19[6];
                v19[6] = v51 + 1;
                if ( v51 == -1 )
                  KiRemoveSystemWorkPriorityKick(v18);
              }
            }
            if ( !_interlockedbittestandset64((volatile signed __int32 *)(v17 + 64), 0LL) )
              break;
            v33 = v18->SchedulerAssist;
            if ( v33 )
            {
              if ( v18->NestingLevel <= 1u )
              {
                v52 = v33[6] - 1;
                v33[6] = v52;
                if ( !v52 )
                  KiRemoveSystemWorkPriorityKick(v18);
              }
            }
            do
              KeYieldProcessorEx(&v63);
            while ( *(_QWORD *)(v17 + 64) );
          }
          v20 = *(char *)(v17 + 563);
          if ( v20 <= v56 || v20 < 16 )
            break;
          KiReleaseThreadLockSafe(v17);
LABEL_45:
          v15 = v70;
          v16 = (_QWORD *)*v57;
          v57 = v16;
          if ( v16 == v65 )
            goto LABEL_46;
        }
        v21 = v20 + v58;
        if ( v20 + v58 >= 16 )
        {
          v68 = 15;
        }
        else
        {
          if ( v21 <= 0 )
            v21 = 1;
          v68 = v21;
        }
        v22 = *(_BYTE *)(v17 + 645);
        if ( !v22 )
          goto LABEL_27;
        if ( v56 < 16 )
        {
          KiReleaseThreadLockSafe(v17);
          v27 = 0;
LABEL_44:
          if ( v59 )
          {
            if ( v69 )
            {
              v69 = 0;
              EtwTracePriority(v17, 1328, v55, v53, 0LL);
            }
            if ( v27 && v20 != v68 )
              EtwTracePriority(v17, 1329, v20, v68, (__int64)&v68);
          }
          goto LABEL_45;
        }
        if ( v22 > 0 )
        {
          v68 = 15;
        }
        else
        {
LABEL_27:
          v23 = v68;
          if ( v22 < 0 )
            v23 = 1;
          v68 = v23;
        }
        if ( (_KTHREAD *)v17 != CurrentThread || CurrentPrcb->NestingLevel )
        {
          updated = *(_QWORD *)(v17 + 72);
        }
        else
        {
          _disable();
          updated = KiUpdateTotalCyclesCurrentThread(CurrentPrcb, v17, 0LL);
          _enable();
        }
        v25 = updated + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(v17 + 651);
        if ( (*(_DWORD *)(v17 + 120) & 0x20) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(v17 + 120), 5u);
        *(_QWORD *)(v17 + 32) = v25;
        if ( v7 && (v27 = 0, v68 == v20) )
        {
          v26 = v53;
        }
        else
        {
          v26 = KiSetBasePriorityAndClearDecrement(v17, &v68, a4);
          v53 = v26;
          v27 = 1;
        }
        v28 = 0;
        if ( v7 )
          v28 = KiApplyForegroundBoostThread(v17, &v61);
        if ( !v27 )
          goto LABEL_43;
        if ( !v28 )
        {
          v55 = *(char *)(v17 + 195);
          if ( (unsigned __int8)KiSetPriorityThread(v17, &v61, v26) )
          {
            v53 = *(char *)(v17 + 195);
            v69 = 1;
          }
        }
        v29 = *(volatile signed __int32 **)(v17 + 232);
        if ( v29 && (*(_BYTE *)v29 & 0x7F) == 0x15 )
          KiPriQueueThreadPriorityChanged(v29, v17);
        else
LABEL_43:
          KiReleaseThreadLockSafe(v17);
        goto LABEL_44;
      }
      v30 = v56;
      v35 = 0;
      while ( 1 )
      {
        v36 = (__int64)(v16 - 95);
        if ( v15 )
          *(_BYTE *)(v36 + 651) = v15;
        v37 = KeGetCurrentPrcb();
        v62 = 0;
        v38 = v37->SchedulerAssist;
        if ( v38 )
        {
          if ( v37->NestingLevel <= 1u )
          {
            v39 = v38[6];
            v38[6] = v39 + 1;
            if ( v39 == -1 )
LABEL_70:
              KiRemoveSystemWorkPriorityKick(v37);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v36 + 64), 0LL) )
        {
          v40 = v37->SchedulerAssist;
          if ( v40 )
          {
            if ( v37->NestingLevel <= 1u )
            {
              v41 = v40[6] - 1;
              v40[6] = v41;
              if ( !v41 )
                KiRemoveSystemWorkPriorityKick(v37);
            }
          }
          do
            KeYieldProcessorEx(&v62);
          while ( *(_QWORD *)(v36 + 64) );
          v42 = v37->SchedulerAssist;
          if ( v42 )
          {
            if ( v37->NestingLevel <= 1u )
            {
              v43 = v42[6];
              v42[6] = v43 + 1;
              if ( v43 == -1 )
                goto LABEL_70;
            }
          }
        }
        v44 = *(char *)(v36 + 563);
        v45 = v44 + v58;
        if ( v44 + v58 >= 16 )
        {
          if ( v45 > 31 )
            v45 = 31;
          v68 = v45;
        }
        else
        {
          v45 = 16;
          v68 = 16;
        }
        v46 = *(_BYTE *)(v36 + 645);
        v31 = CurrentPrcb;
        v47 = v46 < 0;
        if ( !v46 )
          goto LABEL_91;
        if ( v56 < 16 )
          break;
        KiReleaseThreadLockSafe(v36);
LABEL_107:
        if ( v59 )
        {
          if ( v69 )
          {
            v69 = 0;
            EtwTracePriority(v36, 1328, v55, v35, 0LL);
          }
          if ( v13 )
          {
            v13 = 0;
            if ( v12 != v45 )
              EtwTracePriority(v36, 1329, v12, v45, (__int64)&v68);
          }
        }
        v15 = v70;
        v16 = (_QWORD *)*v57;
        v57 = v16;
        if ( v16 == v65 )
          goto LABEL_47;
      }
      v47 = v46 < 0;
      if ( v46 <= 0 )
      {
LABEL_91:
        if ( v47 )
          v45 = 16;
        v68 = v45;
      }
      else
      {
        v68 = 31;
      }
      v12 = v44;
      if ( (_KTHREAD *)v36 != CurrentThread || CurrentPrcb->NestingLevel )
      {
        v48 = *(_QWORD *)(v36 + 72);
      }
      else
      {
        _disable();
        v48 = KiUpdateTotalCyclesCurrentThread(CurrentPrcb, v36, 0LL);
        _enable();
      }
      v49 = v48 + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(v36 + 651);
      if ( (*(_DWORD *)(v36 + 120) & 0x20) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)(v36 + 120), 5u);
      *(_QWORD *)(v36 + 32) = v49;
      v54 = KiSetBasePriorityAndClearDecrement(v36, &v68, 0LL);
      v55 = *(char *)(v36 + 195);
      v13 = 1;
      if ( (unsigned __int8)KiSetPriorityThread(v36, &v61, v54) )
      {
        v54 = *(char *)(v36 + 195);
        v69 = 1;
      }
      v50 = *(volatile signed __int32 **)(v36 + 232);
      if ( v50 && (*(_BYTE *)v50 & 0x7F) == 0x15 )
        KiPriQueueThreadPriorityChanged(v50, v36);
      else
        KiReleaseThreadLockSafe(v36);
      v35 = v54;
      v45 = v68;
      goto LABEL_107;
    }
LABEL_46:
    v30 = v56;
    v31 = CurrentPrcb;
LABEL_47:
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    LOBYTE(v32) = v67;
    KiProcessDeferredReadyList(v31, &v61, v32);
    return v30;
  }
  return result;
}
