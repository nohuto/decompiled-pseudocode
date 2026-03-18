/*
 * XREFs of IommupFindAndPopCachedDevice @ 0x140529200
 * Callers:
 *     IommuDomainAttachDevice @ 0x140527CF0 (IommuDomainAttachDevice.c)
 *     IommuDomainAttachDeviceEx @ 0x140527F70 (IommuDomainAttachDeviceEx.c)
 *     IommuDomainDetachDeviceEx @ 0x140528320 (IommuDomainDetachDeviceEx.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140211E00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall IommupFindAndPopCachedDevice(__int64 a1, __int64 **a2)
{
  __int64 *v2; // rbp
  char v4; // di
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 *i; // rcx
  unsigned __int8 v9; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v11; // r8
  int v12; // eax
  bool v13; // zf
  __int64 v15; // rdx
  __int64 **v16; // rax

  v2 = 0LL;
  v4 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0x1FFC;
  }
  KxAcquireSpinLock(&HalpIommuParaVirtDeviceCacheLock);
  for ( i = (__int64 *)HalpIommuParaVirtDeviceCache; i != &HalpIommuParaVirtDeviceCache; i = (__int64 *)*i )
  {
    v2 = i;
    if ( i[4] == a1 && i[5] == *(_QWORD *)(a1 + 24) && !*((_DWORD *)i + 6) )
    {
      v15 = *i;
      v4 = 1;
      v16 = (__int64 **)i[1];
      if ( *(__int64 **)(*i + 8) != i || *v16 != i )
        __fastfail(3u);
      *v16 = (__int64 *)v15;
      *(_QWORD *)(v15 + 8) = v16;
      break;
    }
  }
  KxReleaseSpinLock(&HalpIommuParaVirtDeviceCacheLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v9 = KeGetCurrentIrql();
      if ( v9 <= 0xFu && CurrentIrql <= 0xFu && v9 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v11 = CurrentPrcb->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v13 = (v12 & v11[5]) == 0;
        v11[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( v4 )
    *a2 = v2;
  return v4;
}
