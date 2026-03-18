/*
 * XREFs of KeQueryCurrentStackInformationEx @ 0x14029AE70
 * Callers:
 *     RtlpGetStackLimits @ 0x14029AE20 (RtlpGetStackLimits.c)
 *     RtlpGetStackLimitsEx @ 0x1402E6B30 (RtlpGetStackLimitsEx.c)
 *     KeQueryCurrentStackInformation @ 0x1402E6B60 (KeQueryCurrentStackInformation.c)
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x1402F85A0 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1402F8700 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     KeCheckStackAndTargetAddress @ 0x140340640 (KeCheckStackAndTargetAddress.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x14029B0A0 (KeAreInterruptsEnabled.c)
 *     KiRspInIstStack @ 0x140513788 (KiRspInIstStack.c)
 */

bool __fastcall KeQueryCurrentStackInformationEx(unsigned __int64 a1, _DWORD *a2, char **a3, unsigned __int64 *a4)
{
  unsigned __int8 CurrentIrql; // di
  struct _KTHREAD *CurrentThread; // rbx
  char *StackLimit; // rax
  bool result; // al
  char *IsrStack; // rax
  char *v13; // rcx
  char *v14; // rax
  char *v15; // rcx
  char *v16; // rax
  char *v17; // rcx
  char *v18; // rcx
  char *v19; // rdx
  __int64 v20; // rdx
  void *StackBase; // [rsp+20h] [rbp-38h]

  if ( !KiRecoveryInProgress && (KiBugCheckActive & 3) != 0 )
  {
    *a2 = 0;
    result = 1;
    *a4 = -1LL;
    *a3 = (char *)0xFFFF800000000000LL;
    return result;
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql >= 2u )
  {
    IsrStack = (char *)KeGetPcr()->Prcb.IsrStack;
    v13 = IsrStack - 24576;
    if ( a1 < (unsigned __int64)IsrStack && (unsigned __int64)v13 <= a1 )
    {
      *a2 = 6;
      *a4 = (unsigned __int64)IsrStack;
      result = 1;
      *a3 = v13;
      return result;
    }
    v14 = (char *)KeGetPcr()->Prcb.ExceptionStack + 80;
    v15 = v14 - 24576;
    if ( a1 < (unsigned __int64)v14 && (unsigned __int64)v15 <= a1 )
    {
      *a2 = 10;
      *a4 = (unsigned __int64)v14;
      result = 1;
      *a3 = v15;
      return result;
    }
  }
  else if ( (unsigned __int8)KeAreInterruptsEnabled() )
  {
    goto LABEL_5;
  }
  v16 = (char *)KeGetPcr()->Prcb.ExceptionStack + 80;
  v17 = v16 - 24576;
  if ( a1 < (unsigned __int64)v16 && (unsigned __int64)v17 <= a1 )
  {
    *a2 = 10;
    *a4 = (unsigned __int64)v16;
    result = 1;
    *a3 = v17;
    return result;
  }
LABEL_5:
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->InitialStack != (void *)KeGetPcr()->Prcb.RspBase )
  {
    *a2 = 5;
    goto LABEL_37;
  }
  if ( CurrentIrql >= 2u )
  {
    v18 = (char *)KeGetPcr()->Prcb.DpcStack + 80;
    v19 = &v18[-(unsigned int)KeKernelStackSize];
    if ( (unsigned __int64)v19 <= a1 && a1 < (unsigned __int64)v18 )
    {
      *a2 = 1;
      *a4 = (unsigned __int64)v18;
      *a3 = v19;
      return 1;
    }
    if ( KeGetCurrentPrcb() == (struct _KPRCB *)KiDebuggerOwner )
    {
      *a2 = 7;
LABEL_37:
      *a4 = -1LL;
      *a3 = (char *)0xFFFF800000000000LL;
      return 1;
    }
  }
  if ( !(unsigned __int8)KeAreInterruptsEnabled() || KeGetCurrentIrql() >= 0xFu )
  {
    if ( (unsigned int)KiRspInIstStack(3LL, a1) )
    {
      *a2 = 8;
    }
    else
    {
      if ( !(unsigned int)KiRspInIstStack(2LL, v20) )
        goto LABEL_9;
      *a2 = 9;
    }
    goto LABEL_37;
  }
LABEL_9:
  if ( (CurrentThread->MiscFlags & 0x1000) != 0 )
  {
    *a2 = 2;
  }
  else if ( CurrentThread->CallbackNestingLevel )
  {
    *a2 = 4;
  }
  else
  {
    *a2 = 3;
  }
  StackBase = CurrentThread->StackBase;
  StackLimit = (char *)CurrentThread->StackLimit;
  *a4 = (unsigned __int64)StackBase;
  *a3 = StackLimit;
  return (unsigned __int64)StackLimit <= a1 && a1 < *a4;
}
