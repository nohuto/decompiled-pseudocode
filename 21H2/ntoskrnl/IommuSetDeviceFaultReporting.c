/*
 * XREFs of IommuSetDeviceFaultReporting @ 0x140528C60
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140211E00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall IommuSetDeviceFaultReporting(__int64 a1, int a2, char a3, _QWORD *a4)
{
  char v4; // bp
  __int64 v9; // rbx
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  __int64 i; // rax
  unsigned __int8 v13; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v15; // r8
  int v16; // eax
  bool v17; // zf
  __int64 result; // rax

  v4 = 0;
  if ( !HalpHvIommu || !HalpHvParaVirtIommuDomain )
    return 3221225659LL;
  v9 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0x1FFC;
  }
  KxAcquireSpinLock(&HalpIommuParaVirtDeviceCacheLock);
  for ( i = HalpIommuParaVirtDeviceCache; (__int64 *)i != &HalpIommuParaVirtDeviceCache; i = *(_QWORD *)i )
  {
    if ( *(_QWORD *)(i + 16) == a1 && *(_DWORD *)(i + 24) == a2 )
    {
      v9 = *(_QWORD *)(i + 32);
      v4 = 1;
      break;
    }
  }
  KxReleaseSpinLock(&HalpIommuParaVirtDeviceCacheLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v13 = KeGetCurrentIrql();
      if ( v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v15 = CurrentPrcb->SchedulerAssist;
        v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v17 = (v16 & v15[5]) == 0;
        v15[5] &= v16;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( !v4 )
    return 3221225485LL;
  if ( a3 )
    *(_QWORD *)(v9 + 64) = *a4;
  *(_QWORD *)(v9 + 64) = 0LL;
  result = 3221225474LL;
  *(_QWORD *)(v9 + 72) = 0LL;
  return result;
}
