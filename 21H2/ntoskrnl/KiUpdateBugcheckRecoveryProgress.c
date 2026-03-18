/*
 * XREFs of KiUpdateBugcheckRecoveryProgress @ 0x140579B48
 * Callers:
 *     KiBugCheckRecoveryCleanupFromCrashDump @ 0x140578AD8 (KiBugCheckRecoveryCleanupFromCrashDump.c)
 *     KiBugCheckRecoveryPrepareForCrashDump @ 0x140578EF0 (KiBugCheckRecoveryPrepareForCrashDump.c)
 *     KiSaveBugCheckRecoveryStatusMultipleBugChecks @ 0x1405795C4 (KiSaveBugCheckRecoveryStatusMultipleBugChecks.c)
 *     KiSaveBugCheckRecoveryStatusPhase0 @ 0x140579620 (KiSaveBugCheckRecoveryStatusPhase0.c)
 *     KiSaveBugCheckRecoveryStatusPhase1 @ 0x1405796A4 (KiSaveBugCheckRecoveryStatusPhase1.c)
 *     KiSaveBugCheckRecoveryStatusPhase2 @ 0x1405796F8 (KiSaveBugCheckRecoveryStatusPhase2.c)
 *     KiSaveBugcheckRecoveryProgress @ 0x140579750 (KiSaveBugcheckRecoveryProgress.c)
 *     KiSetBugCheckRecoveryProgressFlag @ 0x140579878 (KiSetBugCheckRecoveryProgressFlag.c)
 * Callees:
 *     KiSendThawExecution @ 0x1402DA5B0 (KiSendThawExecution.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     IoSaveBugCheckProgress @ 0x140552B40 (IoSaveBugCheckProgress.c)
 *     IoSaveInitialBugCheckProgress @ 0x140552D54 (IoSaveInitialBugCheckProgress.c)
 *     IoUpdateBugCheckProgressEnvVariable @ 0x140553164 (IoUpdateBugCheckProgressEnvVariable.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x140578BB4 (KiBugCheckRecoveryFreezeOtherProcessors.c)
 */

__int64 __fastcall KiUpdateBugcheckRecoveryProgress(_DWORD *a1)
{
  __int16 v3; // bp
  unsigned int v4; // ebx
  char v5; // r14
  bool v6; // bp
  unsigned __int8 CurrentIrql; // si
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v9; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v11; // r8
  int v12; // eax
  bool v13; // zf
  __int16 v14; // [rsp+40h] [rbp-8h]

  if ( KiRecoveryCheckpointsFailure )
    return 3221225473LL;
  v3 = v14;
  v4 = 0;
  v5 = 1;
  _disable();
  v6 = (v3 & 0x200) != 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  if ( (unsigned int)KiBugCheckRecoveryFreezeOtherProcessors(0xF4240u) > 1 )
  {
    v5 = 0;
    KiRecoveryCheckpointsFailure = 1;
LABEL_9:
    v4 = -1073741823;
    goto LABEL_18;
  }
  if ( *a1 )
  {
    if ( *a1 != 1 )
    {
      if ( *a1 == 2 )
      {
        if ( CrashdmpDumpBlock )
        {
          *(_DWORD *)(CrashdmpDumpBlock + 1404) |= a1[2];
          IoUpdateBugCheckProgressEnvVariable();
        }
        goto LABEL_18;
      }
      KiRecoveryCheckpointsFailure = 1;
      goto LABEL_9;
    }
    IoSaveBugCheckProgress(a1[2]);
  }
  else
  {
    IoSaveInitialBugCheckProgress(a1[4], *((_QWORD *)a1 + 1));
  }
LABEL_18:
  KiSendThawExecution(v5);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v9 = KeGetCurrentIrql();
      if ( v9 <= 0xFu && CurrentIrql <= 0xFu && v9 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v11 = CurrentPrcb->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v13 = (v12 & v11[5]) == 0;
        v11[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( v6 )
    _enable();
  return v4;
}
