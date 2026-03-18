/*
 * XREFs of KeSetPriorityBoost @ 0x140245760
 * Callers:
 *     ExpApplyPriorityBoost @ 0x1402468E0 (ExpApplyPriorityBoost.c)
 *     FsRtlpWaitForIoAtEof @ 0x1402EAF9C (FsRtlpWaitForIoAtEof.c)
 *     KeGenericProcessorCallback @ 0x140337898 (KeGenericProcessorCallback.c)
 *     FsRtlpDoBoost @ 0x140376F98 (FsRtlpDoBoost.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiSetPriorityThread @ 0x14026C6D0 (KiSetPriorityThread.c)
 *     KiProcessDeferredReadyList @ 0x14026D000 (KiProcessDeferredReadyList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeSetPriorityBoost(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  __int64 result; // rax
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
  int v29; // [rsp+60h] [rbp+8h] BYREF
  __int64 v30; // [rsp+70h] [rbp+18h] BYREF

  result = (__int64)&KiInitialProcess;
  v5 = a2;
  if ( *(_UNKNOWN **)(a1 + 544) != &KiInitialProcess )
  {
    v7 = 0;
    v30 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v9 = (unsigned __int8)v30 - 1LL;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      a2 = (v9 << (CurrentIrql + 1)) & 4;
      a3 = (unsigned int)a2 | SchedulerAssist[5];
      SchedulerAssist[5] = a3;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    if ( *(char *)(a1 + 195) <= 0 || *(char *)(a1 + 195) >= v5 )
      goto LABEL_40;
    v11 = *(_QWORD *)(a1 + 72);
    v12 = KeGetCurrentPrcb();
    v29 = 0;
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
        KeYieldProcessorEx(&v29, a2, a3, (__int64)SchedulerAssist);
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
      KiSetPriorityThread(a1, &v30, (unsigned int)(char)v5);
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
      return KiProcessDeferredReadyList(CurrentPrcb, &v30, CurrentIrql, SchedulerAssist);
    }
    else
    {
LABEL_40:
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
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  return result;
}
