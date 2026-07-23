/*
 * XREFs of HalpInterruptSetDestination @ 0x1403784E0
 * Callers:
 *     ExtEnvSetVpptTarget @ 0x1404BF9E4 (ExtEnvSetVpptTarget.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     HalpInterruptSetDestinationInternal @ 0x1403785BC (HalpInterruptSetDestinationInternal.c)
 *     HalpAcquireHighLevelLock @ 0x140378A70 (HalpAcquireHighLevelLock.c)
 *     HalpInterruptGsiToLine @ 0x140378AAC (HalpInterruptGsiToLine.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     HalpInterruptSetRemappedDestination @ 0x1404BBA08 (HalpInterruptSetRemappedDestination.c)
 *     HalpInterruptSetRemappedDestinationHv @ 0x1404BBB00 (HalpInterruptSetRemappedDestinationHv.c)
 */

__int64 __fastcall HalpInterruptSetDestination(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned __int64 v5; // rdi
  unsigned int v6; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  __int64 v14; // [rsp+20h] [rbp-28h] BYREF
  _DWORD v15[2]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v16; // [rsp+30h] [rbp-18h]
  __int64 v17; // [rsp+38h] [rbp-10h]
  int v18; // [rsp+68h] [rbp+20h] BYREF
  int v19; // [rsp+6Ch] [rbp+24h]

  v15[1] = 0;
  v14 = 0LL;
  if ( qword_140C4A1E8 )
    return (unsigned int)HalpInterruptSetRemappedDestinationHv(a3, a1, a2);
  if ( (*(_DWORD *)(HalpInterruptController + 220) & 0x100) != 0 )
    return (unsigned int)HalpInterruptSetRemappedDestination(a3, a1, a2);
  if ( !a3 )
    return (unsigned int)-1073741811;
  if ( (int)HalpInterruptGsiToLine(*a3, &v14) < 0 )
  {
    HalpInterruptLastProblem = 18;
    return (unsigned int)-1073741811;
  }
  v18 = -1;
  v17 = a1 + 40;
  v15[0] = 1;
  v16 = a2;
  v19 = 1;
  v5 = (unsigned __int8)HalpAcquireHighLevelLock(&HalpInterruptLock);
  v6 = HalpInterruptSetDestinationInternal(&v14, v15, &v18);
  KxReleaseSpinLock(&HalpInterruptLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v13 = (v12 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  return v6;
}
