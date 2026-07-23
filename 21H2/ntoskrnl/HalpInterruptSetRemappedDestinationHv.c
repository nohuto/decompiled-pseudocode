/*
 * XREFs of HalpInterruptSetRemappedDestinationHv @ 0x1404BBB00
 * Callers:
 *     HalpInterruptSetDestination @ 0x1403784E0 (HalpInterruptSetDestination.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     HalpInterruptSetLineStateInternal @ 0x1403786FC (HalpInterruptSetLineStateInternal.c)
 *     HalpAcquireHighLevelLock @ 0x140378A70 (HalpAcquireHighLevelLock.c)
 *     HalpInterruptGsiToLine @ 0x140378AAC (HalpInterruptGsiToLine.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     HalpInterruptFindControllerAndLineState @ 0x1404BB874 (HalpInterruptFindControllerAndLineState.c)
 *     HalpHvRetargetDeviceMsiInterrupt @ 0x1404C2CDC (HalpHvRetargetDeviceMsiInterrupt.c)
 *     HalpHvRetargetIoApicDeviceInterrupt @ 0x1404C2D58 (HalpHvRetargetIoApicDeviceInterrupt.c)
 */

__int64 __fastcall HalpInterruptSetRemappedDestinationHv(unsigned int *a1, int *a2, __int64 a3)
{
  int v3; // ebx
  int v5; // eax
  unsigned int v6; // ebx
  int ControllerAndLineState; // eax
  int v8; // edx
  ULONG_PTR *v9; // rcx
  ULONG_PTR *v10; // rdi
  int v11; // eax
  int v12; // eax
  unsigned __int64 v13; // rsi
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
      if ( (v6 & 0x80000000) != 0 )
        HalpInterruptLastProblem = 37;
      return v6;
    }
    return (unsigned int)-1073741811;
  }
  if ( !a1 )
    return (unsigned int)-1073741811;
  ControllerAndLineState = HalpInterruptFindControllerAndLineState(*a1, &v23, &v20);
  if ( ControllerAndLineState < 0 )
  {
    v9 = v23;
    HalpInterruptLastProblem = 18;
    if ( v23 )
    {
      *((_DWORD *)v23 + 74) = ControllerAndLineState;
      v9[38] = (ULONG_PTR)"minkernel\\hals\\lib\\interrupts\\common\\connect.c";
      *((_DWORD *)v9 + 73) = 18;
      *((_DWORD *)v9 + 78) = 727;
    }
    return (unsigned int)-1073741811;
  }
  v10 = v23;
  v11 = HalpHvRetargetIoApicDeviceInterrupt(*((_DWORD *)v23 + 58), v8, v20, v3, (__int64)&v22);
  v6 = v11;
  if ( v11 < 0 )
  {
    *((_DWORD *)v10 + 74) = v11;
    v10[38] = (ULONG_PTR)"minkernel\\hals\\lib\\interrupts\\common\\connect.c";
    HalpInterruptLastProblem = 37;
    *((_DWORD *)v10 + 73) = 37;
    *((_DWORD *)v10 + 78) = 742;
    return v6;
  }
  if ( !v22 )
    return v6;
  v12 = HalpInterruptGsiToLine(*a1, &v21);
  if ( v12 < 0 )
  {
    *((_DWORD *)v10 + 74) = v12;
    HalpInterruptLastProblem = 18;
    v10[38] = (ULONG_PTR)"minkernel\\hals\\lib\\interrupts\\common\\connect.c";
    *((_DWORD *)v10 + 73) = 18;
    *((_DWORD *)v10 + 78) = 756;
    return (unsigned int)-1073741811;
  }
  v13 = HalpAcquireHighLevelLock(&HalpInterruptLock);
  v6 = HalpInterruptSetLineStateInternal((__int64)v10, (__int64)&v21, v20);
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
  return v6;
}
