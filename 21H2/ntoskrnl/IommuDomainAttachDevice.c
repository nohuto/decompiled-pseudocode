/*
 * XREFs of IommuDomainAttachDevice @ 0x140527CF0
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140211E00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     HalpMmAllocCtxFree @ 0x1403B1B5C (HalpMmAllocCtxFree.c)
 *     HalpMmAllocCtxAlloc @ 0x1403B1F04 (HalpMmAllocCtxAlloc.c)
 *     HalpIommuGetDeviceId @ 0x1403CD2D0 (HalpIommuGetDeviceId.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     HalpIommuJoinDmaDomain @ 0x14051B384 (HalpIommuJoinDmaDomain.c)
 *     IommupFindAndPopCachedDevice @ 0x140529200 (IommupFindAndPopCachedDevice.c)
 *     HalpIommuCreateDevice @ 0x140846E20 (HalpIommuCreateDevice.c)
 *     HalpIommuDeleteDevice @ 0x140908DD4 (HalpIommuDeleteDevice.c)
 */

__int64 __fastcall IommuDomainAttachDevice(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v6; // rbx
  __int64 v9; // rcx
  int DeviceId; // edi
  char v11; // r12
  void *v12; // rax
  unsigned __int8 CurrentIrql; // r14
  _DWORD *SchedulerAssist; // r9
  __int64 *v15; // rax
  unsigned __int8 v16; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v18; // r8
  int v19; // eax
  bool v20; // zf
  __int64 v22; // [rsp+30h] [rbp-10h] BYREF
  void *Src; // [rsp+38h] [rbp-8h] BYREF

  Src = 0LL;
  v6 = 0LL;
  v22 = 0LL;
  DeviceId = HalpIommuGetDeviceId(a2, (__int64 *)&Src);
  if ( DeviceId < 0 )
    goto LABEL_35;
  if ( a3 || a4 != 1 )
  {
    DeviceId = -1073741583;
    v11 = 0;
    goto LABEL_16;
  }
  DeviceId = HalpIommuCreateDevice(Src);
  if ( DeviceId < 0 )
  {
LABEL_35:
    if ( Src )
      HalpMmAllocCtxFree(v9, (__int64)Src);
    return (unsigned int)DeviceId;
  }
  if ( MEMORY[0x18] )
  {
    v11 = 1;
    if ( MEMORY[0x18] == a1 )
    {
      DeviceId = 0;
LABEL_34:
      HalpIommuDeleteDevice(0LL);
      return (unsigned int)DeviceId;
    }
    IommupFindAndPopCachedDevice(0LL, &v22);
    v6 = v22;
  }
  else
  {
    v11 = 0;
  }
  DeviceId = HalpIommuJoinDmaDomain(0LL, a1, 0LL);
  if ( DeviceId >= 0 )
  {
    if ( !v6 )
    {
      v22 = HalpMmAllocCtxAlloc(v9, 56LL);
      v6 = v22;
      if ( !v22 )
      {
        DeviceId = -1073741670;
        goto LABEL_35;
      }
    }
    *(_OWORD *)v6 = 0LL;
    *(_OWORD *)(v6 + 16) = 0LL;
    *(_OWORD *)(v6 + 32) = 0LL;
    *(_QWORD *)(v6 + 48) = 0LL;
    *(_QWORD *)(v6 + 32) = 0LL;
    *(_QWORD *)(v6 + 16) = a2;
    *(_DWORD *)(v6 + 24) = 0;
    v12 = Src;
    *(_DWORD *)(v6 + 28) = 1;
    *(_QWORD *)(v6 + 40) = a1;
    *(_QWORD *)(v6 + 48) = v12;
  }
LABEL_16:
  if ( v6 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      v6 = v22;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0x1FFC;
    }
    KxAcquireSpinLock(&HalpIommuParaVirtDeviceCacheLock);
    v15 = (__int64 *)qword_140C4A108;
    if ( *(__int64 **)qword_140C4A108 != &HalpIommuParaVirtDeviceCache )
      __fastfail(3u);
    *(_QWORD *)v6 = &HalpIommuParaVirtDeviceCache;
    *(_QWORD *)(v6 + 8) = v15;
    *v15 = v6;
    qword_140C4A108 = v6;
    KxReleaseSpinLock(&HalpIommuParaVirtDeviceCacheLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v16 = KeGetCurrentIrql();
        if ( v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v9 = (unsigned int)CurrentIrql + 1;
          v18 = CurrentPrcb->SchedulerAssist;
          v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v20 = (v19 & v18[5]) == 0;
          v18[5] &= v19;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  if ( DeviceId < 0 )
    goto LABEL_35;
  if ( v11 )
    goto LABEL_34;
  return (unsigned int)DeviceId;
}
