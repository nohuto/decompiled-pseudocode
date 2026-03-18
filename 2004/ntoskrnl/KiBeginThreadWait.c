/*
 * XREFs of KiBeginThreadWait @ 0x1402B8CA0
 * Callers:
 *     KeRemovePriQueue @ 0x1402B8840 (KeRemovePriQueue.c)
 *     KeDelayExecutionThread @ 0x1402BC230 (KeDelayExecutionThread.c)
 *     KeWaitForGate @ 0x14030E9A4 (KeWaitForGate.c)
 *     KiWaitForAllObjects @ 0x14030EAC0 (KiWaitForAllObjects.c)
 *     KeWaitForAlertByThreadId @ 0x140339758 (KeWaitForAlertByThreadId.c)
 * Callees:
 *     KiDeliverApc @ 0x14020EAE0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiCheckForThreadDispatch @ 0x1402E4AA4 (KiCheckForThreadDispatch.c)
 *     KiReleaseThreadLockSafe @ 0x140327E50 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiBeginThreadWait(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned __int8 v4; // r15
  char v5; // di
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
  unsigned int v23; // edi
  int v24; // eax
  int v25; // [rsp+68h] [rbp+10h] BYREF
  int v26; // [rsp+70h] [rbp+18h]

  v26 = a3;
  v4 = *(_BYTE *)(a1 + 390);
  v5 = (char)a4;
  v6 = (char)a2;
  while ( 1 )
  {
    *(_DWORD *)(a1 + 116) &= ~0x10u;
    *(_BYTE *)(a1 + 112) = 0;
    *(_BYTE *)(a1 + 391) = v6;
    if ( v5 )
      *(_DWORD *)(a1 + 116) |= 0x10u;
    CurrentPrcb = KeGetCurrentPrcb();
    v25 = 0;
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
        KeYieldProcessorEx(&v25, a2, a3, (__int64)a4);
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
    KiDeliverApc(0, 0LL, 0LL);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      a4 = KeGetCurrentPrcb()->SchedulerAssist;
      a3 = (unsigned int)a4[5];
      a2 = (unsigned int)a3 | ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
      a4[5] = a2;
    }
    *(_BYTE *)(a1 + 390) = 0;
  }
  v10 = v26;
  if ( !v5 )
  {
    if ( (*(_BYTE *)(a1 + 194) & 2) == 0 || !(_BYTE)v6 )
      goto LABEL_9;
    goto LABEL_17;
  }
  if ( *(_BYTE *)(v6 + a1 + 114) )
  {
    *(_BYTE *)(v6 + a1 + 114) = 0;
    v23 = 257;
    goto LABEL_18;
  }
  if ( (_BYTE)v6 && *(_QWORD *)(a1 + 168) != a1 + 168 )
  {
    *(_BYTE *)(a1 + 194) |= 2u;
LABEL_17:
    v23 = 192;
    goto LABEL_18;
  }
  if ( *(_BYTE *)(a1 + 114) )
  {
    *(_BYTE *)(a1 + 114) = 0;
    v23 = 257;
LABEL_18:
    KiReleaseThreadLockSafe(a1);
    KiCheckForThreadDispatch(KeGetCurrentPrcb(), v4);
    return v23;
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
    v24 = v12[6] - 1;
    v12[6] = v24;
    if ( !v24 )
      KiRemoveSystemWorkPriorityKick(v11);
  }
  return 0LL;
}
