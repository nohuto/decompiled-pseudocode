/*
 * XREFs of IommuDomainDetachDevice @ 0x1404DA830
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402CDEB0 (KxAcquireSpinLock.c)
 *     HalpMmAllocCtxFree @ 0x140378FB0 (HalpMmAllocCtxFree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     HalpIommuLeaveDmaDomain @ 0x1404C9BD4 (HalpIommuLeaveDmaDomain.c)
 *     HalpIommuDeleteDevice @ 0x140864DB0 (HalpIommuDeleteDevice.c)
 */

__int64 __fastcall IommuDomainDetachDevice(ULONG_PTR a1, __int64 a2, int a3)
{
  char v3; // r13
  __int32 v4; // ebp
  __int64 v5; // rsi
  __int64 v7; // rdi
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v11; // rax
  unsigned __int8 v12; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v14; // r8
  int v15; // eax
  bool v16; // zf
  int v17; // ebx
  __int64 v18; // rdx
  __int64 *v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx

  v3 = 0;
  v4 = 0;
  v5 = 0LL;
  v7 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0x1FFC;
  }
  KxAcquireSpinLock(&HalpIommuParaVirtDeviceCacheLock);
  v11 = HalpIommuParaVirtDeviceCache;
  if ( (__int64 *)HalpIommuParaVirtDeviceCache != &HalpIommuParaVirtDeviceCache )
  {
    while ( 1 )
    {
      v5 = v11;
      if ( *(_QWORD *)(v11 + 40) == a1 && *(_QWORD *)(v11 + 16) == a2 && *(_DWORD *)(v11 + 24) == a3 )
        break;
      v11 = *(_QWORD *)v11;
      if ( (__int64 *)v11 == &HalpIommuParaVirtDeviceCache )
        goto LABEL_10;
    }
    v7 = *(_QWORD *)(v11 + 32);
    v3 = 1;
    v4 = _InterlockedExchange((volatile __int32 *)(v7 + 208), 1);
    v18 = *(_QWORD *)v11;
    v19 = *(__int64 **)(v11 + 8);
    if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) != v11 || *v19 != v11 )
      __fastfail(3u);
    *v19 = v18;
    *(_QWORD *)(v18 + 8) = v19;
  }
LABEL_10:
  KxReleaseSpinLock(&HalpIommuParaVirtDeviceCacheLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v12 = KeGetCurrentIrql();
      if ( v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v14 = CurrentPrcb->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v16 = (v15 & v14[5]) == 0;
        v14[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( v3 )
  {
    v17 = HalpIommuLeaveDmaDomain((_QWORD *)v7, a1);
    if ( v17 >= 0 )
    {
      if ( v4 != 2 )
        v17 = HalpIommuDeleteDevice(v7);
      HalpMmAllocCtxFree(v20, *(_QWORD *)(v5 + 48));
      HalpMmAllocCtxFree(v21, v5);
    }
  }
  else
  {
    return (unsigned int)-1073741584;
  }
  return (unsigned int)v17;
}
