/*
 * XREFs of KeMaskInterrupt @ 0x140373D10
 * Callers:
 *     KeDisconnectInterrupt @ 0x140373B04 (KeDisconnectInterrupt.c)
 *     IopMaskInterrupt @ 0x140389494 (IopMaskInterrupt.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x14026DC70 (KiInsertQueueDpc.c)
 *     KeGetProcessorNumberFromIndex @ 0x1402C1310 (KeGetProcessorNumberFromIndex.c)
 *     KeSetTargetProcessorDpcEx @ 0x140320EE0 (KeSetTargetProcessorDpcEx.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1403374F0 (KeRevertToUserGroupAffinityThread.c)
 *     KeRemoveQueueDpcEx @ 0x140340050 (KeRemoveQueueDpcEx.c)
 *     KiAcquireInterruptConnectLock @ 0x140374890 (KiAcquireInterruptConnectLock.c)
 *     KiIsInterruptTypeSecondary @ 0x140374F64 (KiIsInterruptTypeSecondary.c)
 *     KiMaskInterruptInternal @ 0x1403A3EDC (KiMaskInterruptInternal.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiMaskSecondaryInterruptInternal @ 0x140513A48 (KiMaskSecondaryInterruptInternal.c)
 */

__int64 __fastcall KeMaskInterrupt(__int64 *a1, unsigned __int8 a2, __int64 a3, struct _KDPC *a4)
{
  char IsInterruptTypeSecondary; // al
  NTSTATUS ProcessorNumberFromIndex; // ebx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r14
  unsigned __int8 CurrentIrql; // si
  unsigned int Number; // edx
  unsigned __int8 v15; // cl
  __int64 v16; // r8
  char v17; // r15
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v20; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v22; // r9
  int v23; // eax
  bool v24; // zf
  __int64 v25; // rsi
  unsigned __int8 v26; // al
  unsigned __int8 v27; // di
  struct _KPRCB *v28; // r9
  _DWORD *v29; // r8
  int v30; // eax
  unsigned __int8 v31[4]; // [rsp+30h] [rbp-20h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+34h] [rbp-1Ch] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+38h] [rbp-18h] BYREF

  PreviousAffinity = 0LL;
  v31[0] = 0;
  ProcNumber = 0;
  IsInterruptTypeSecondary = KiIsInterruptTypeSecondary(a3);
  ProcessorNumberFromIndex = 0;
  LOBYTE(v10) = 0;
  if ( a2 )
  {
    while ( 1 )
    {
      v11 = a1[(unsigned __int8)v10];
      _m_prefetchw((const void *)(v11 + 104));
      if ( (_InterlockedOr((volatile signed __int32 *)(v11 + 104), 1u) & 1) != 0 )
        break;
      LOBYTE(v10) = v10 + 1;
      if ( (unsigned __int8)v10 >= a2 )
        goto LABEL_4;
    }
    return (unsigned int)-2147483611;
  }
LABEL_4:
  if ( *(_DWORD *)(a3 + 8) )
    return 0LL;
  v12 = *(unsigned int *)(a3 + 64);
  if ( IsInterruptTypeSecondary != 0 )
  {
    ProcessorNumberFromIndex = KiMaskSecondaryInterruptInternal(*(unsigned int *)(*a1 + 88), (unsigned int)v12, v10);
LABEL_15:
    if ( ProcessorNumberFromIndex == 296 )
      return 0;
    return (unsigned int)ProcessorNumberFromIndex;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  Number = KeGetPcr()->Prcb.Number;
  v15 = 0;
  v31[0] = CurrentIrql;
  if ( a2 )
  {
    while ( 1 )
    {
      v16 = a1[v15];
      if ( *(_DWORD *)(v16 + 96) == Number )
        break;
      if ( ++v15 >= a2 )
      {
        v17 = 0;
        goto LABEL_13;
      }
    }
    ProcessorNumberFromIndex = KiMaskInterruptInternal(*(unsigned int *)(v16 + 88), (unsigned int)v12);
    v17 = 1;
  }
  else
  {
    v17 = 0;
  }
LABEL_13:
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v20 = KeGetCurrentIrql();
      if ( v20 <= 0xFu && CurrentIrql <= 0xFu && v20 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v22 = CurrentPrcb->SchedulerAssist;
        v23 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v24 = (v23 & v22[5]) == 0;
        v22[5] &= v23;
        if ( v24 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( v17 )
    goto LABEL_15;
  v25 = *a1;
  if ( KeGetCurrentIrql() < 2u )
  {
    KiAcquireInterruptConnectLock(*(unsigned int *)(v25 + 96), v31, &PreviousAffinity);
    ProcessorNumberFromIndex = KiMaskInterruptInternal(*(unsigned int *)(v25 + 88), (unsigned int)v12);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v26 = KeGetCurrentIrql(), v26 <= 0xFu) )
    {
      v27 = v31[0];
      if ( v31[0] <= 0xFu && v26 >= 2u )
      {
        v28 = KeGetCurrentPrcb();
        v29 = v28->SchedulerAssist;
        v27 = v31[0];
        v30 = ~(unsigned __int16)(-1LL << (v31[0] + 1));
        v24 = (v30 & v29[5]) == 0;
        v29[5] &= v30;
        if ( v24 )
          KiRemoveSystemWorkPriorityKick(v28);
      }
    }
    else
    {
      v27 = v31[0];
    }
    __writecr8(v27);
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    goto LABEL_15;
  }
  if ( a4 )
  {
    ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(*(_DWORD *)(v25 + 96), &ProcNumber);
    if ( ProcessorNumberFromIndex >= 0 )
    {
      KeRemoveQueueDpcEx((__int64)a4, 0);
      a4->TargetInfoAsUlong = 275;
      a4->DeferredRoutine = (PKDEFERRED_ROUTINE)KiMaskInterruptDpc;
      a4->DeferredContext = 0LL;
      a4->DpcData = 0LL;
      a4->ProcessorHistory = 0LL;
      ProcessorNumberFromIndex = KeSetTargetProcessorDpcEx(a4, &ProcNumber);
      if ( ProcessorNumberFromIndex >= 0 )
        KiInsertQueueDpc((ULONG_PTR)a4, *(unsigned int *)(v25 + 88), v12, 0LL, 0);
    }
    goto LABEL_15;
  }
  return (unsigned int)-1073741811;
}
