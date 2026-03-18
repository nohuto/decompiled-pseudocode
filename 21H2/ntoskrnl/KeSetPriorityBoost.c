/*
 * XREFs of KeSetPriorityBoost @ 0x1403438F0
 * Callers:
 *     FsRtlpDoBoost @ 0x14024A468 (FsRtlpDoBoost.c)
 *     ExpApplyPriorityBoost @ 0x140343010 (ExpApplyPriorityBoost.c)
 *     KeGenericProcessorCallback @ 0x14035BB4C (KeGenericProcessorCallback.c)
 *     FsRtlpWaitForIoAtEof @ 0x14035D3E0 (FsRtlpWaitForIoAtEof.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x140224100 (KiReleaseThreadLockSafe.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiProcessDeferredReadyList @ 0x140344800 (KiProcessDeferredReadyList.c)
 *     KiSetPriorityThread @ 0x140344A30 (KiSetPriorityThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeSetPriorityBoost(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  __int64 result; // rax
  int v5; // r14d
  char v7; // r12
  unsigned __int8 CurrentIrql; // si
  __int64 v9; // r13
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned __int64 v11; // r15
  struct _KPRCB *v12; // rdi
  _DWORD *v13; // rcx
  int v14; // edx
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rax
  _DWORD *v17; // rcx
  _DWORD *v18; // rcx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r9
  _DWORD *v24; // r8
  int v25; // eax
  bool v26; // zf
  int v27; // [rsp+60h] [rbp+8h] BYREF
  __int64 v28; // [rsp+70h] [rbp+18h] BYREF

  result = (__int64)&KiInitialProcess;
  v5 = a2;
  if ( *(_UNKNOWN **)(a1 + 544) != &KiInitialProcess )
  {
    v7 = 0;
    v28 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v9 = (unsigned __int8)v28 - 1LL;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      a2 = (v9 << (CurrentIrql + 1)) & 4;
      a3 = (unsigned int)a2 | SchedulerAssist[5];
      SchedulerAssist[5] = a3;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    if ( *(char *)(a1 + 195) > 0 && *(char *)(a1 + 195) < v5 )
    {
      v11 = *(_QWORD *)(a1 + 72);
      v12 = KeGetCurrentPrcb();
      v27 = 0;
      v13 = v12->SchedulerAssist;
      if ( v13 )
      {
        if ( v12->NestingLevel <= 1u )
        {
          v19 = v13[6];
          v13[6] = v19 + 1;
          if ( v19 == -1 )
LABEL_26:
            KiRemoveSystemWorkPriorityKick(v12);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      {
        v17 = v12->SchedulerAssist;
        if ( v17 )
        {
          if ( v12->NestingLevel <= 1u )
          {
            v20 = v17[6] - 1;
            v17[6] = v20;
            if ( !v20 )
              KiRemoveSystemWorkPriorityKick(v12);
          }
        }
        do
          KeYieldProcessorEx(&v27, a2, a3, (__int64)SchedulerAssist);
        while ( *(_QWORD *)(a1 + 64) );
        v18 = v12->SchedulerAssist;
        if ( v18 )
        {
          if ( v12->NestingLevel <= 1u )
          {
            v21 = v18[6];
            v18[6] = v21 + 1;
            if ( v21 == -1 )
              goto LABEL_26;
          }
        }
      }
      v14 = *(char *)(a1 + 195);
      if ( *(char *)(a1 + 195) > 0 && v14 < v5 )
      {
        v15 = *(unsigned int *)((char *)&Mm64BitPhysicalAddress + 5);
        *(_BYTE *)(a1 + 564) += 16 * (v5 - v14);
        v7 = 1;
        KiSetPriorityThread(a1, &v28, (unsigned int)(char)v5);
        v16 = *(_QWORD *)(a1 + 32);
        if ( v11 > v16 || v16 - v11 < v15 )
        {
          *(_QWORD *)(a1 + 32) = v15 + v11;
          KiReleaseThreadLockSafe(a1);
          return KiProcessDeferredReadyList(CurrentPrcb, &v28, CurrentIrql);
        }
      }
      KiReleaseThreadLockSafe(a1);
      if ( v7 )
        return KiProcessDeferredReadyList(CurrentPrcb, &v28, CurrentIrql);
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v22 = KeGetCurrentIrql();
        if ( v22 <= 0xFu && CurrentIrql <= 0xFu && v22 >= 2u )
        {
          v23 = KeGetCurrentPrcb();
          v24 = v23->SchedulerAssist;
          v25 = ~(unsigned __int16)(v9 << (CurrentIrql + 1));
          v26 = (v25 & v24[5]) == 0;
          v24[5] &= v25;
          if ( v26 )
            KiRemoveSystemWorkPriorityKick(v23);
        }
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
