/*
 * XREFs of KeQueryCurrentStackInformationEx @ 0x1403504A0
 * Callers:
 *     KeQueryCurrentStackInformation @ 0x140277230 (KeQueryCurrentStackInformation.c)
 *     RtlpGetStackLimitsEx @ 0x140277280 (RtlpGetStackLimitsEx.c)
 *     KeCheckStackAndTargetAddress @ 0x1402B2030 (KeCheckStackAndTargetAddress.c)
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x14032A0D0 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x14032A230 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     RtlpGetStackLimits @ 0x140350450 (RtlpGetStackLimits.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1403506D0 (KeAreInterruptsEnabled.c)
 *     KiRspInIstStack @ 0x140518BF8 (KiRspInIstStack.c)
 */

bool __fastcall KeQueryCurrentStackInformationEx(
        unsigned __int64 a1,
        char *a2,
        struct _KPRCB **a3,
        unsigned __int64 *a4)
{
  char *v6; // r15
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  struct _KPRCB *StackLimit; // rax
  bool result; // al
  char *IsrStack; // rax
  struct _KPRCB *v14; // rcx
  char *v15; // rax
  char *v16; // rcx
  char *v17; // rax
  char *v18; // rcx
  __int64 v19; // rdx
  void *StackBase; // [rsp+20h] [rbp-38h]

  v6 = a2;
  if ( !KiRecoveryInProgress && (KiBugCheckActive & 3) != 0 )
  {
    *(_DWORD *)a2 = 0;
    result = 1;
    *a4 = -1LL;
    *a3 = (struct _KPRCB *)0xFFFF800000000000LL;
    return result;
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql >= 2u )
  {
    IsrStack = (char *)KeGetPcr()->Prcb.IsrStack;
    v14 = (struct _KPRCB *)(IsrStack - 24576);
    if ( a1 < (unsigned __int64)IsrStack && (unsigned __int64)v14 <= a1 )
    {
      *(_DWORD *)a2 = 6;
      *a4 = (unsigned __int64)IsrStack;
      result = 1;
      *a3 = v14;
      return result;
    }
    v15 = (char *)KeGetPcr()->Prcb.ExceptionStack + 80;
    v16 = v15 - 24576;
    if ( a1 < (unsigned __int64)v15 && (unsigned __int64)v16 <= a1 )
    {
      *(_DWORD *)a2 = 10;
      *a4 = (unsigned __int64)v15;
      result = 1;
      *a3 = (struct _KPRCB *)v16;
      return result;
    }
  }
  else if ( (unsigned __int8)KeAreInterruptsEnabled(a1, a2) )
  {
    goto LABEL_5;
  }
  v17 = (char *)KeGetPcr()->Prcb.ExceptionStack + 80;
  CurrentPrcb = (struct _KPRCB *)(v17 - 24576);
  if ( a1 < (unsigned __int64)v17 && (unsigned __int64)CurrentPrcb <= a1 )
  {
    *(_DWORD *)v6 = 10;
    *a4 = (unsigned __int64)v17;
    result = 1;
    *a3 = CurrentPrcb;
    return result;
  }
LABEL_5:
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->InitialStack != (void *)KeGetPcr()->Prcb.RspBase )
  {
    *(_DWORD *)v6 = 5;
    goto LABEL_37;
  }
  if ( CurrentIrql >= 2u )
  {
    v18 = (char *)KeGetPcr()->Prcb.DpcStack + 80;
    a2 = &v18[-(unsigned int)KeKernelStackSize];
    if ( (unsigned __int64)a2 <= a1 && a1 < (unsigned __int64)v18 )
    {
      *(_DWORD *)v6 = 1;
      *a4 = (unsigned __int64)v18;
      *a3 = (struct _KPRCB *)a2;
      return 1;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    if ( CurrentPrcb == (struct _KPRCB *)KiDebuggerOwner )
    {
      *(_DWORD *)v6 = 7;
LABEL_37:
      *a4 = -1LL;
      *a3 = (struct _KPRCB *)0xFFFF800000000000LL;
      return 1;
    }
  }
  if ( !(unsigned __int8)KeAreInterruptsEnabled(CurrentPrcb, a2) || KeGetCurrentIrql() >= 0xFu )
  {
    if ( (unsigned int)KiRspInIstStack(3LL, a1) )
    {
      *(_DWORD *)v6 = 8;
    }
    else
    {
      if ( !(unsigned int)KiRspInIstStack(2LL, v19) )
        goto LABEL_9;
      *(_DWORD *)v6 = 9;
    }
    goto LABEL_37;
  }
LABEL_9:
  if ( (CurrentThread->MiscFlags & 0x1000) != 0 )
  {
    *(_DWORD *)v6 = 2;
  }
  else if ( CurrentThread->CallbackNestingLevel )
  {
    *(_DWORD *)v6 = 4;
  }
  else
  {
    *(_DWORD *)v6 = 3;
  }
  StackBase = CurrentThread->StackBase;
  StackLimit = (struct _KPRCB *)CurrentThread->StackLimit;
  *a4 = (unsigned __int64)StackBase;
  *a3 = StackLimit;
  return (unsigned __int64)StackLimit <= a1 && a1 < *a4;
}
