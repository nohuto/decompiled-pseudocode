/*
 * XREFs of IommuDomainAttachDeviceEx @ 0x140527F70
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140211E00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     HalpMmAllocCtxAlloc @ 0x1403B1F04 (HalpMmAllocCtxAlloc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     HalpIommuDeviceGetDomainTypes @ 0x140510C60 (HalpIommuDeviceGetDomainTypes.c)
 *     HalpIommuJoinDmaDomain @ 0x14051B384 (HalpIommuJoinDmaDomain.c)
 *     IommupFindAndPopCachedDevice @ 0x140529200 (IommupFindAndPopCachedDevice.c)
 */

__int64 __fastcall IommuDomainAttachDeviceEx(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbx
  int DomainTypes; // r8d
  int v6; // esi
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  __int64 *v11; // rax
  unsigned __int8 v12; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v14; // r8
  int v15; // eax
  bool v16; // zf
  char v18; // [rsp+40h] [rbp+8h] BYREF
  __int64 v19; // [rsp+50h] [rbp+18h] BYREF

  v18 = 0;
  v3 = 0LL;
  v19 = 0LL;
  DomainTypes = HalpIommuDeviceGetDomainTypes((__int64)a2);
  if ( _bittest(&DomainTypes, *(_DWORD *)(a1 + 8)) )
  {
    v7 = a2[3];
    if ( v7 )
    {
      if ( v7 == a1 )
        return 0;
      IommupFindAndPopCachedDevice(a2, &v19);
      v3 = v19;
    }
    v6 = HalpIommuJoinDmaDomain(a2, a1, &v18);
    if ( v6 >= 0 )
    {
      if ( !v3 )
      {
        v19 = HalpMmAllocCtxAlloc(v8, 56LL);
        v3 = v19;
        if ( !v19 )
          return (unsigned int)-1073741670;
      }
      *(_OWORD *)v3 = 0LL;
      *(_OWORD *)(v3 + 16) = 0LL;
      *(_OWORD *)(v3 + 32) = 0LL;
      *(_QWORD *)(v3 + 48) = 0LL;
      *(_QWORD *)(v3 + 32) = a2;
      *(_QWORD *)(v3 + 16) = a2[1];
      *(_DWORD *)(v3 + 24) = 0;
      *(_DWORD *)(v3 + 28) = 1;
      *(_QWORD *)(v3 + 40) = a1;
      *(_QWORD *)(v3 + 48) = *a2;
    }
    if ( v3 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xCuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        v3 = v19;
        SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0x1FFC;
      }
      KxAcquireSpinLock(&HalpIommuParaVirtDeviceCacheLock);
      v11 = (__int64 *)qword_140C4A108;
      if ( *(__int64 **)qword_140C4A108 != &HalpIommuParaVirtDeviceCache )
        __fastfail(3u);
      *(_QWORD *)v3 = &HalpIommuParaVirtDeviceCache;
      *(_QWORD *)(v3 + 8) = v11;
      *v11 = v3;
      qword_140C4A108 = v3;
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
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v6;
}
