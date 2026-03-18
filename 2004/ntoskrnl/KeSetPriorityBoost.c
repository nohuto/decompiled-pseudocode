/*
 * XREFs of KeSetPriorityBoost @ 0x140281F40
 * Callers:
 *     ExpApplyPriorityBoost @ 0x1402830C0 (ExpApplyPriorityBoost.c)
 *     KeGenericProcessorCallback @ 0x1402E45F4 (KeGenericProcessorCallback.c)
 *     FsRtlpWaitForIoAtEof @ 0x1403248CC (FsRtlpWaitForIoAtEof.c)
 *     FsRtlpDoBoost @ 0x140377DA8 (FsRtlpDoBoost.c)
 * Callees:
 *     KiSetPriorityThread @ 0x140213680 (KiSetPriorityThread.c)
 *     KiProcessDeferredReadyList @ 0x140213FB0 (KiProcessDeferredReadyList.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KeSetPriorityBoost(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  void *v4; // rax
  int v5; // edi
  char v7; // bp
  unsigned __int8 CurrentIrql; // r15
  __int64 v9; // r13
  struct _KPRCB *CurrentPrcb; // r12
  unsigned __int64 v11; // rsi
  struct _KPRCB *v12; // r14
  _DWORD *v13; // rcx
  int v14; // edx
  unsigned __int64 v15; // rcx
  struct _KPRCB *v16; // rcx
  _DWORD *v17; // rdx
  _DWORD *v18; // rcx
  _DWORD *v19; // rcx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r9
  _DWORD *v26; // r8
  int v27; // eax
  bool v28; // zf
  int v30; // [rsp+60h] [rbp+8h] BYREF
  __int64 v31; // [rsp+70h] [rbp+18h] BYREF

  v4 = &KiInitialProcess;
  v5 = a2;
  if ( *(_UNKNOWN **)(a1 + 544) != &KiInitialProcess )
  {
    v7 = 0;
    v31 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v9 = (unsigned __int8)v31 - 1LL;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      a2 = (v9 << (CurrentIrql + 1)) & 4;
      a3 = (unsigned int)a2 | SchedulerAssist[5];
      SchedulerAssist[5] = a3;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    if ( *(char *)(a1 + 195) <= 0 || *(char *)(a1 + 195) >= v5 )
      goto LABEL_46;
    v11 = *(_QWORD *)(a1 + 72);
    v12 = KeGetCurrentPrcb();
    v30 = 0;
    v13 = v12->SchedulerAssist;
    if ( v13 )
    {
      if ( v12->NestingLevel <= 1u )
      {
        v20 = v13[6];
        v13[6] = v20 + 1;
        if ( v20 == -1 )
LABEL_27:
          KiRemoveSystemWorkPriorityKick(v12);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      v18 = v12->SchedulerAssist;
      if ( v18 )
      {
        if ( v12->NestingLevel <= 1u )
        {
          v21 = v18[6] - 1;
          v18[6] = v21;
          if ( !v21 )
            KiRemoveSystemWorkPriorityKick(v12);
        }
      }
      do
        KeYieldProcessorEx(&v30, a2, a3, (__int64)SchedulerAssist);
      while ( *(_QWORD *)(a1 + 64) );
      v19 = v12->SchedulerAssist;
      if ( v19 )
      {
        if ( v12->NestingLevel <= 1u )
        {
          v22 = v19[6];
          v19[6] = v22 + 1;
          if ( v22 == -1 )
            goto LABEL_27;
        }
      }
    }
    v14 = *(char *)(a1 + 195);
    if ( *(char *)(a1 + 195) > 0 && v14 < v5 )
    {
      v7 = 1;
      *(_BYTE *)(a1 + 564) += 16 * (v5 - v14);
      KiSetPriorityThread((_KTHREAD *)a1, (__int64)&v31, v5);
      v15 = *(_QWORD *)(a1 + 32);
      if ( v11 > v15 || v15 - v11 < (unsigned int)KiLockQuantumTarget )
        *(_QWORD *)(a1 + 32) = v11 + (unsigned int)KiLockQuantumTarget;
    }
    *(_QWORD *)(a1 + 64) = 0LL;
    v16 = KeGetCurrentPrcb();
    v17 = v16->SchedulerAssist;
    if ( v17 )
    {
      if ( v16->NestingLevel <= 1u )
      {
        v23 = v17[6] - 1;
        v17[6] = v23;
        if ( !v23 )
          KiRemoveSystemWorkPriorityKick(v16);
      }
    }
    if ( v7 )
    {
      LOBYTE(v4) = KiProcessDeferredReadyList((__int64)CurrentPrcb, (__int64)&v31, CurrentIrql);
    }
    else
    {
LABEL_46:
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v24 = KeGetCurrentIrql();
          if ( v24 <= 0xFu && CurrentIrql <= 0xFu && v24 >= 2u )
          {
            v25 = KeGetCurrentPrcb();
            v26 = v25->SchedulerAssist;
            v27 = ~(unsigned __int16)(v9 << (CurrentIrql + 1));
            v28 = (v27 & v26[5]) == 0;
            v26[5] &= v27;
            if ( v28 )
              KiRemoveSystemWorkPriorityKick(v25);
          }
        }
      }
      LOBYTE(v4) = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  return (char)v4;
}
