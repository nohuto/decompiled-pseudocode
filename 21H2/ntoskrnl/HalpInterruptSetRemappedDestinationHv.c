/*
 * XREFs of HalpInterruptSetRemappedDestinationHv @ 0x140508364
 * Callers:
 *     HalpInterruptSetDestination @ 0x140251DC0 (HalpInterruptSetDestination.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     HalpInterruptSetLineStateInternal @ 0x140251FD8 (HalpInterruptSetLineStateInternal.c)
 *     HalpAcquireHighLevelLock @ 0x140252344 (HalpAcquireHighLevelLock.c)
 *     HalpInterruptGsiToLine @ 0x140252380 (HalpInterruptGsiToLine.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     HalpInterruptFindControllerAndLineState @ 0x1405080D4 (HalpInterruptFindControllerAndLineState.c)
 *     HalpHvRetargetDeviceMsiInterrupt @ 0x14050EEBC (HalpHvRetargetDeviceMsiInterrupt.c)
 *     HalpHvRetargetIoApicDeviceInterrupt @ 0x14050EF38 (HalpHvRetargetIoApicDeviceInterrupt.c)
 *     HalpInterruptSetProblemEx @ 0x14051E038 (HalpInterruptSetProblemEx.c)
 */

__int64 __fastcall HalpInterruptSetRemappedDestinationHv(unsigned int *a1, int *a2, __int64 a3)
{
  int v3; // ebx
  int v5; // eax
  int v6; // eax
  unsigned int v7; // ebx
  int ControllerAndLineState; // eax
  int v9; // edx
  ULONG_PTR *v10; // rsi
  int v11; // eax
  int v12; // eax
  unsigned __int64 v13; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  bool v18; // zf
  __int64 v20; // [rsp+30h] [rbp-10h] BYREF
  __int64 v21; // [rsp+38h] [rbp-8h] BYREF
  char v22; // [rsp+68h] [rbp+28h] BYREF
  ULONG_PTR *v23; // [rsp+78h] [rbp+38h] BYREF

  v23 = 0LL;
  v3 = a3;
  v21 = 0LL;
  v20 = 0LL;
  v5 = *a2;
  v22 = 0;
  if ( v5 )
  {
    if ( v5 == 3 )
    {
      v6 = HalpHvRetargetDeviceMsiInterrupt(a2, a3);
      v7 = v6;
      if ( v6 < 0 )
        HalpInterruptSetProblemEx(0, 37, v6, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 734);
      return v7;
    }
    return (unsigned int)-1073741811;
  }
  if ( !a1 )
    return (unsigned int)-1073741811;
  ControllerAndLineState = HalpInterruptFindControllerAndLineState(*a1, &v23, &v20);
  if ( ControllerAndLineState < 0 )
  {
    HalpInterruptSetProblemEx(
      (_DWORD)v23,
      18,
      ControllerAndLineState,
      (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c",
      752);
    return (unsigned int)-1073741811;
  }
  v10 = v23;
  v11 = HalpHvRetargetIoApicDeviceInterrupt(*((_DWORD *)v23 + 60), v9, v20, v3, (__int64)&v22);
  v7 = v11;
  if ( v11 < 0 )
  {
    HalpInterruptSetProblemEx(
      (_DWORD)v10,
      37,
      v11,
      (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c",
      767);
    return v7;
  }
  if ( v22 )
  {
    v12 = HalpInterruptGsiToLine(*a1, &v21);
    if ( v12 < 0 )
    {
      HalpInterruptSetProblemEx(
        (_DWORD)v10,
        18,
        v12,
        (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c",
        781);
      return (unsigned int)-1073741811;
    }
    v13 = HalpAcquireHighLevelLock(&HalpInterruptLock);
    v7 = HalpInterruptSetLineStateInternal((__int64)v10, (__int64)&v21, v20);
    KxReleaseSpinLock(&HalpInterruptLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
          v18 = (v17 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v17;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v13);
  }
  return v7;
}
