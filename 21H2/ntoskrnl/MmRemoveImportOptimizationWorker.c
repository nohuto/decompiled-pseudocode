/*
 * XREFs of MmRemoveImportOptimizationWorker @ 0x140544A50
 * Callers:
 *     <none>
 * Callees:
 *     MiApplyRetpolineFixups @ 0x140214824 (MiApplyRetpolineFixups.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeIsNmiCallbackRegistered @ 0x140514480 (KeIsNmiCallbackRegistered.c)
 */

__int64 __fastcall MmRemoveImportOptimizationWorker(
        ULONG_PTR Argument,
        __int64 a2,
        __int64 a3,
        _DWORD *SchedulerAssist)
{
  __int64 CurrentIrql; // rdi
  __int16 v6; // r12
  __int64 v7; // r14
  bool v8; // r12
  signed __int32 v9; // eax
  unsigned int v10; // esi
  char v11; // r13
  __int64 v12; // rbx
  unsigned int v13; // esi
  unsigned int v14; // r15d
  __int64 v15; // rdi
  __int64 v16; // r14
  __int64 v17; // rdx
  unsigned __int16 *v18; // r8
  unsigned __int8 v19; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *v21; // r9
  int v22; // edx
  bool v23; // zf
  __int16 v25; // [rsp+80h] [rbp-8h]
  int v26; // [rsp+90h] [rbp+8h] BYREF
  int v27; // [rsp+98h] [rbp+10h] BYREF
  __int64 v28; // [rsp+A0h] [rbp+18h]
  __int64 v29; // [rsp+A8h] [rbp+20h]

  v27 = 0;
  KeGetCurrentIrql();
  CurrentIrql = KeGetCurrentIrql();
  v29 = CurrentIrql;
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 0xFFFC;
    a3 = (unsigned int)a2 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  v6 = v25;
  _disable();
  v7 = *(_QWORD *)(Argument + 24);
  v8 = (v6 & 0x200) != 0;
  v26 = 0;
  v9 = _InterlockedDecrement((volatile signed __int32 *)Argument);
  v10 = ~v9 & 0x80000000;
  if ( (v9 & 0x7FFFFFFF) != 0 )
  {
    while ( (*(_DWORD *)Argument & 0x80000000) != v10 )
      KeYieldProcessorEx(&v26, a2, a3, (__int64)SchedulerAssist);
    while ( *(_DWORD *)(Argument + 8) )
      KeYieldProcessorEx(&v27, a2, a3, (__int64)SchedulerAssist);
  }
  else
  {
    *(_DWORD *)Argument = v10 | *(_DWORD *)(Argument + 4);
    v28 = *(_QWORD *)(v7 + 24);
    v11 = 8 * ((KiSpeculationFeatures & 0x20000000000LL) == 0);
    if ( (unsigned int)KeIsNmiCallbackRegistered() )
    {
      v12 = -1073741637LL;
      goto LABEL_17;
    }
    v13 = 0;
    v14 = (*(_DWORD *)(v7 + 40) >> 12) + ((*(_DWORD *)(v7 + 40) & 0xFFF) != 0);
    if ( v14 )
    {
      v15 = v28;
      v16 = 56LL;
      do
      {
        v17 = *(_QWORD *)(Argument + 32);
        v18 = *(unsigned __int16 **)(v16 + v17);
        if ( v18
          && (*(_BYTE *)(((((unsigned __int64)(v13 << 12) + v15) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 1) != 0 )
        {
          MiApplyRetpolineFixups((v13 << 12) + v15, v17, (__int64)v18, v13 << 12, v17, v18, v11);
        }
        ++v13;
        v16 += 8LL;
      }
      while ( v13 < v14 );
      LOBYTE(CurrentIrql) = v29;
    }
    _InterlockedIncrement((volatile signed __int32 *)(Argument + 8));
  }
  v12 = 0LL;
LABEL_17:
  if ( v8 )
    _enable();
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v19 = KeGetCurrentIrql();
      if ( v19 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v19 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v21 = CurrentPrcb->SchedulerAssist;
        v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
        v23 = (v22 & v21[5]) == 0;
        v21[5] &= v22;
        if ( v23 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8((unsigned __int8)CurrentIrql);
  return v12;
}
