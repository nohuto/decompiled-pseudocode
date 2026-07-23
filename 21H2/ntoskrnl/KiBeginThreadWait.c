/*
 * XREFs of KiBeginThreadWait @ 0x1402E6E80
 * Callers:
 *     KeWaitForGate @ 0x14022A4E4 (KeWaitForGate.c)
 *     KiWaitForAllObjects @ 0x14022A600 (KiWaitForAllObjects.c)
 *     KeWaitForAlertByThreadId @ 0x1402788A0 (KeWaitForAlertByThreadId.c)
 *     KeDelayExecutionThread @ 0x140278A00 (KeDelayExecutionThread.c)
 *     KeRemovePriQueue @ 0x1402E6A20 (KeRemovePriQueue.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x1402121F0 (KiReleaseThreadLockSafe.c)
 *     KiCheckForThreadDispatch @ 0x140266354 (KiCheckForThreadDispatch.c)
 *     KiDeliverApc @ 0x1402EEFA0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiBeginThreadWait(__int64 a1, char a2, int a3, char a4)
{
  unsigned __int8 v4; // r15
  __int64 v6; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  char v10; // bp
  struct _KPRCB *v11; // rcx
  _DWORD *v12; // rdx
  _DWORD *v14; // rcx
  _DWORD *v15; // rcx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  struct _KPRCB *v19; // rcx
  _DWORD *v20; // rdx
  bool v21; // zf
  unsigned __int8 CurrentIrql; // cl
  _DWORD *v23; // r9
  unsigned int v24; // edi
  int v25; // eax
  int v26; // [rsp+68h] [rbp+10h] BYREF
  int v27; // [rsp+70h] [rbp+18h]

  v27 = a3;
  v4 = *(_BYTE *)(a1 + 390);
  v6 = a2;
  while ( 1 )
  {
    *(_DWORD *)(a1 + 116) &= ~0x10u;
    *(_BYTE *)(a1 + 112) = 0;
    *(_BYTE *)(a1 + 391) = v6;
    if ( a4 )
      *(_DWORD *)(a1 + 116) |= 0x10u;
    CurrentPrcb = KeGetCurrentPrcb();
    v26 = 0;
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v16 = SchedulerAssist[6];
        SchedulerAssist[6] = v16 + 1;
        if ( v16 == -1 )
LABEL_27:
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      v14 = CurrentPrcb->SchedulerAssist;
      if ( v14 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v17 = v14[6] - 1;
          v14[6] = v17;
          if ( !v17 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v26);
      while ( *(_QWORD *)(a1 + 64) );
      v15 = CurrentPrcb->SchedulerAssist;
      if ( v15 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v18 = v15[6];
          v15[6] = v18 + 1;
          if ( v18 == -1 )
            goto LABEL_27;
        }
      }
    }
    if ( !*(_BYTE *)(a1 + 193) || *(_WORD *)(a1 + 486) || v4 )
      break;
    KiReleaseThreadLockSafe(a1);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v19 = KeGetCurrentPrcb();
        v20 = v19->SchedulerAssist;
        v21 = (v20[5] & 0xFFFF0003) == 0;
        v20[5] &= 0xFFFF0003;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick(v19);
      }
    }
    __writecr8(1uLL);
    KiDeliverApc(0LL, 0LL, 0LL);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v23 = KeGetCurrentPrcb()->SchedulerAssist;
      v23[5] |= ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
    }
    *(_BYTE *)(a1 + 390) = 0;
  }
  v10 = v27;
  if ( !a4 )
  {
    if ( (*(_BYTE *)(a1 + 194) & 2) == 0 || !(_BYTE)v6 )
      goto LABEL_9;
    goto LABEL_17;
  }
  if ( *(_BYTE *)(v6 + a1 + 114) )
  {
    *(_BYTE *)(v6 + a1 + 114) = 0;
    v24 = 257;
    goto LABEL_18;
  }
  if ( (_BYTE)v6 && *(_QWORD *)(a1 + 168) != a1 + 168 )
  {
    *(_BYTE *)(a1 + 194) |= 2u;
LABEL_17:
    v24 = 192;
    goto LABEL_18;
  }
  if ( *(_BYTE *)(a1 + 114) )
  {
    *(_BYTE *)(a1 + 114) = 0;
    v24 = 257;
LABEL_18:
    KiReleaseThreadLockSafe(a1);
    KiCheckForThreadDispatch((__int64)KeGetCurrentPrcb(), v4);
    return v24;
  }
LABEL_9:
  *(_BYTE *)(a1 + 388) = 5;
  *(_BYTE *)(a1 + 643) = v10;
  *(_DWORD *)(a1 + 436) = MEMORY[0xFFFFF78000000320];
  *(_QWORD *)(a1 + 64) = 0LL;
  v11 = KeGetCurrentPrcb();
  v12 = v11->SchedulerAssist;
  if ( v12 && v11->NestingLevel <= 1u )
  {
    v25 = v12[6] - 1;
    v12[6] = v25;
    if ( !v25 )
      KiRemoveSystemWorkPriorityKick(v11);
  }
  return 0LL;
}
