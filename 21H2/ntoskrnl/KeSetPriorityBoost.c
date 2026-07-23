/*
 * XREFs of KeSetPriorityBoost @ 0x1402D3F40
 * Callers:
 *     FsRtlpWaitForIoAtEof @ 0x14020E99C (FsRtlpWaitForIoAtEof.c)
 *     FsRtlpDoBoost @ 0x140249120 (FsRtlpDoBoost.c)
 *     KeGenericProcessorCallback @ 0x14029C4C8 (KeGenericProcessorCallback.c)
 *     ExpApplyPriorityBoost @ 0x1402D3850 (ExpApplyPriorityBoost.c)
 * Callees:
 *     KiSetPriorityThread @ 0x1402D4AF0 (KiSetPriorityThread.c)
 *     KiProcessDeferredReadyList @ 0x1402D5420 (KiProcessDeferredReadyList.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeSetPriorityBoost(__int64 a1, int a2)
{
  __int64 result; // rax
  char v5; // bp
  unsigned __int8 CurrentIrql; // r15
  __int64 v7; // r13
  struct _KPRCB *CurrentPrcb; // r12
  unsigned __int64 v9; // rsi
  struct _KPRCB *v10; // r14
  _DWORD *v11; // rcx
  int v12; // edx
  unsigned __int64 v13; // rcx
  struct _KPRCB *v14; // rcx
  _DWORD *v15; // rdx
  _DWORD *v16; // rcx
  _DWORD *v17; // rcx
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r9
  _DWORD *v25; // r8
  int v26; // eax
  bool v27; // zf
  int v28; // [rsp+60h] [rbp+8h] BYREF
  __int64 v29; // [rsp+70h] [rbp+18h] BYREF

  result = (__int64)&KiInitialProcess;
  if ( *(_UNKNOWN **)(a1 + 544) != &KiInitialProcess )
  {
    v5 = 0;
    v29 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v7 = (unsigned __int8)v29 - 1LL;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= ((_DWORD)v7 << (CurrentIrql + 1)) & 4;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    if ( *(char *)(a1 + 195) <= 0 || *(char *)(a1 + 195) >= a2 )
      goto LABEL_40;
    v9 = *(_QWORD *)(a1 + 72);
    v10 = KeGetCurrentPrcb();
    v28 = 0;
    v11 = v10->SchedulerAssist;
    if ( v11 )
    {
      if ( v10->NestingLevel <= 1u )
      {
        v19 = v11[6];
        v11[6] = v19 + 1;
        if ( v19 == -1 )
LABEL_27:
          KiRemoveSystemWorkPriorityKick(v10);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      v16 = v10->SchedulerAssist;
      if ( v16 )
      {
        if ( v10->NestingLevel <= 1u )
        {
          v20 = v16[6] - 1;
          v16[6] = v20;
          if ( !v20 )
            KiRemoveSystemWorkPriorityKick(v10);
        }
      }
      do
        KeYieldProcessorEx(&v28);
      while ( *(_QWORD *)(a1 + 64) );
      v17 = v10->SchedulerAssist;
      if ( v17 )
      {
        if ( v10->NestingLevel <= 1u )
        {
          v21 = v17[6];
          v17[6] = v21 + 1;
          if ( v21 == -1 )
            goto LABEL_27;
        }
      }
    }
    v12 = *(char *)(a1 + 195);
    if ( *(char *)(a1 + 195) > 0 && v12 < a2 )
    {
      v5 = 1;
      *(_BYTE *)(a1 + 564) += 16 * (a2 - v12);
      KiSetPriorityThread(a1, &v29, (unsigned int)(char)a2);
      v13 = *(_QWORD *)(a1 + 32);
      if ( v9 > v13 || v13 - v9 < (unsigned int)KiLockQuantumTarget )
        *(_QWORD *)(a1 + 32) = v9 + (unsigned int)KiLockQuantumTarget;
    }
    *(_QWORD *)(a1 + 64) = 0LL;
    v14 = KeGetCurrentPrcb();
    v15 = v14->SchedulerAssist;
    if ( v15 )
    {
      if ( v14->NestingLevel <= 1u )
      {
        v22 = v15[6] - 1;
        v15[6] = v22;
        if ( !v22 )
          KiRemoveSystemWorkPriorityKick(v14);
      }
    }
    if ( v5 )
    {
      return KiProcessDeferredReadyList(CurrentPrcb, &v29, CurrentIrql);
    }
    else
    {
LABEL_40:
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v23 = KeGetCurrentIrql();
          if ( v23 <= 0xFu && CurrentIrql <= 0xFu && v23 >= 2u )
          {
            v24 = KeGetCurrentPrcb();
            v25 = v24->SchedulerAssist;
            v26 = ~(unsigned __int16)(v7 << (CurrentIrql + 1));
            v27 = (v26 & v25[5]) == 0;
            v25[5] &= v26;
            if ( v27 )
              KiRemoveSystemWorkPriorityKick(v24);
          }
        }
      }
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  return result;
}
