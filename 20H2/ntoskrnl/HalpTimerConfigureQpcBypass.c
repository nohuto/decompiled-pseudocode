/*
 * XREFs of HalpTimerConfigureQpcBypass @ 0x1403CD3C4
 * Callers:
 *     HalpTimerInitSystem @ 0x1403AE600 (HalpTimerInitSystem.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     HalpFindTimer @ 0x14039D818 (HalpFindTimer.c)
 *     HalpGetCpuInfo @ 0x1403A06B0 (HalpGetCpuInfo.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     NtQuerySystemInformation @ 0x140607EE0 (NtQuerySystemInformation.c)
 */

__int64 HalpTimerConfigureQpcBypass()
{
  NTSTATUS v0; // esi
  char v1; // bl
  ULONG_PTR *Timer; // rax
  unsigned __int64 v3; // rdi
  int v4; // eax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v8; // zf
  signed __int32 v9[8]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int8 v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = 0LL;
  v10 = 0;
  v0 = NtQuerySystemInformation(SystemHypervisorSharedPageInformation, &v11, 8u, 0LL);
  v1 = 0;
  Timer = HalpFindTimer(5, 0, 0, 0, 1);
  if ( Timer )
  {
    if ( (Timer[28] & 0x1000000) != 0 )
    {
      v1 = 0x80;
    }
    else if ( HalpGetCpuInfo(0LL, 0LL, 0LL, &v10) )
    {
      if ( v10 == 2 )
      {
        v1 = 32;
      }
      else
      {
        v1 = 0;
        if ( v10 == 1 )
          v1 = 16;
      }
    }
  }
  v3 = KeAcquireSpinLockRaiseToDpc(&HalpTscFallbackLock);
  v4 = *(_DWORD *)(HalpPerformanceCounter + 228);
  if ( (v4 == 5 || v4 == 8) && v0 >= 0 && v11 )
  {
    MEMORY[0xFFFFF780000003C7] = 0;
    _InterlockedOr(v9, 0);
    MEMORY[0xFFFFF780000003C6] = v1 | 3;
  }
  else
  {
    MEMORY[0xFFFFF780000003C6] = 0;
  }
  KxReleaseSpinLock(&HalpTscFallbackLock);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v3 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v8 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v8 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v3);
  return result;
}
