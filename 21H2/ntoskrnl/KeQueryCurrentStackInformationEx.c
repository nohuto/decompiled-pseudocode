/*
 * XREFs of KeQueryCurrentStackInformationEx @ 0x1402AB9C0
 * Callers:
 *     KeCheckStackAndTargetAddress @ 0x140236890 (KeCheckStackAndTargetAddress.c)
 *     RtlpGetStackLimitsEx @ 0x140294D50 (RtlpGetStackLimitsEx.c)
 *     KeQueryCurrentStackInformation @ 0x140294D90 (KeQueryCurrentStackInformation.c)
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x1402AA9B0 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     RtlpGetStackLimits @ 0x1402AB970 (RtlpGetStackLimits.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1402F4850 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     WheaIsAltContextAllocPossible @ 0x140644C80 (WheaIsAltContextAllocPossible.c)
 * Callees:
 *     KiRspInIstStack @ 0x14024EF40 (KiRspInIstStack.c)
 *     KeAreInterruptsEnabled @ 0x1402ABBD0 (KeAreInterruptsEnabled.c)
 */

bool __fastcall KeQueryCurrentStackInformationEx(unsigned __int64 a1, _DWORD *a2, char **a3, unsigned __int64 *a4)
{
  unsigned __int8 CurrentIrql; // di
  struct _KTHREAD *CurrentThread; // rbx
  char *StackLimit; // r8
  unsigned __int64 v11; // rax
  char *StackBase; // rcx
  bool result; // al
  char *IsrStack; // rax
  char *v15; // rcx
  char *v16; // rax
  char *v17; // rcx
  char *v18; // rax
  char *v19; // rcx
  char *v20; // rcx
  char *v21; // rdx
  unsigned __int64 v22; // rdx

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
    v15 = IsrStack - 24576;
    if ( a1 < (unsigned __int64)IsrStack && (unsigned __int64)v15 <= a1 )
    {
      *a2 = 6;
      *a4 = (unsigned __int64)IsrStack;
      result = 1;
      *a3 = v15;
      return result;
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
  }
  else if ( (unsigned __int8)KeAreInterruptsEnabled() )
  {
    goto LABEL_5;
  }
  v18 = (char *)KeGetPcr()->Prcb.ExceptionStack + 80;
  v19 = v18 - 24576;
  if ( a1 < (unsigned __int64)v18 && (unsigned __int64)v19 <= a1 )
  {
    *a2 = 10;
    *a4 = (unsigned __int64)v18;
    result = 1;
    *a3 = v19;
    return result;
  }
LABEL_5:
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->InitialStack != (void *)KeGetPcr()->Prcb.RspBase )
  {
    *a2 = 5;
    result = 1;
    *a4 = -1LL;
    *a3 = (char *)0xFFFF800000000000LL;
    return result;
  }
  if ( CurrentIrql >= 2u )
  {
    v20 = (char *)KeGetPcr()->Prcb.DpcStack + 80;
    v21 = &v20[-(unsigned int)KeKernelStackSize];
    if ( (unsigned __int64)v21 <= a1 && a1 < (unsigned __int64)v20 )
    {
      *a2 = 1;
      result = 1;
      *a4 = (unsigned __int64)v20;
      *a3 = v21;
      return result;
    }
    if ( KeGetCurrentPrcb() == (struct _KPRCB *)KiDebuggerOwner )
    {
      *a2 = 7;
      result = 1;
      *a4 = -1LL;
      *a3 = (char *)0xFFFF800000000000LL;
      return result;
    }
  }
  if ( !(unsigned __int8)KeAreInterruptsEnabled() || KeGetCurrentIrql() >= 0xFu )
  {
    if ( KiRspInIstStack(3u, a1) )
    {
      *a2 = 8;
      result = 1;
      *a4 = -1LL;
      *a3 = (char *)0xFFFF800000000000LL;
      return result;
    }
    if ( KiRspInIstStack(2u, v22) )
    {
      *a2 = 9;
      *a4 = -1LL;
      *a3 = (char *)0xFFFF800000000000LL;
      return 1;
    }
  }
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
  StackLimit = (char *)CurrentThread->StackLimit;
  v11 = (unsigned __int64)StackLimit;
  StackBase = (char *)CurrentThread->StackBase;
  *a4 = (unsigned __int64)StackBase;
  if ( StackLimit >= StackBase )
    v11 = (unsigned __int64)StackLimit;
  *a3 = StackLimit;
  return v11 <= a1 && a1 < *a4;
}
