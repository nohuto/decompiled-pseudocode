/*
 * XREFs of IommuDomainAttachDevice @ 0x1404DA620
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402CDEB0 (KxAcquireSpinLock.c)
 *     HalpMmAllocCtxFree @ 0x140378FB0 (HalpMmAllocCtxFree.c)
 *     HalpIommuGetDeviceId @ 0x140379584 (HalpIommuGetDeviceId.c)
 *     HalpMmAllocCtxAlloc @ 0x14037C598 (HalpMmAllocCtxAlloc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     HalpIommuJoinDmaDomain @ 0x1404C9AFC (HalpIommuJoinDmaDomain.c)
 *     HalpIommuCreateDevice @ 0x140864B24 (HalpIommuCreateDevice.c)
 *     HalpIommuDeleteDevice @ 0x140864DB0 (HalpIommuDeleteDevice.c)
 */

__int64 __fastcall IommuDomainAttachDevice(__int64 a1, struct _DEVICE_OBJECT *a2, int a3, int a4)
{
  int DeviceId; // eax
  __int64 v9; // rcx
  void *v10; // rbp
  int v11; // edi
  int Device; // eax
  _QWORD *v13; // rsi
  __int64 v14; // rax
  _QWORD *v15; // rbx
  unsigned __int8 CurrentIrql; // si
  _DWORD *SchedulerAssist; // r9
  _QWORD *v19; // rax
  unsigned __int8 v20; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v22; // r8
  int v23; // eax
  bool v24; // zf
  void *Src; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v26; // [rsp+28h] [rbp-20h]

  Src = 0LL;
  v26 = 0LL;
  DeviceId = HalpIommuGetDeviceId(a2, (__int64 *)&Src);
  v10 = Src;
  v11 = DeviceId;
  if ( DeviceId < 0 )
    goto LABEL_11;
  if ( !a3 && a4 == 1 )
  {
    Device = HalpIommuCreateDevice(Src);
    v13 = v26;
    v11 = Device;
    if ( Device >= 0 )
    {
      v11 = HalpIommuJoinDmaDomain(v26, a1);
      if ( v11 >= 0 )
      {
        v14 = HalpMmAllocCtxAlloc(v9, 56LL);
        v15 = (_QWORD *)v14;
        if ( v14 )
        {
          *(_QWORD *)v14 = 0LL;
          *(_QWORD *)(v14 + 8) = 0LL;
          *(_DWORD *)(v14 + 24) = 0;
          *(_QWORD *)(v14 + 32) = v13;
          *(_QWORD *)(v14 + 16) = a2;
          *(_DWORD *)(v14 + 28) = 1;
          *(_QWORD *)(v14 + 40) = a1;
          *(_QWORD *)(v14 + 48) = v10;
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(0xCuLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
          {
            SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
            SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0x1FFC;
          }
          KxAcquireSpinLock(&HalpIommuParaVirtDeviceCacheLock);
          v19 = (_QWORD *)qword_140C48D28;
          if ( *(__int64 **)qword_140C48D28 != &HalpIommuParaVirtDeviceCache )
            __fastfail(3u);
          *v15 = &HalpIommuParaVirtDeviceCache;
          v15[1] = v19;
          *v19 = v15;
          qword_140C48D28 = (__int64)v15;
          KxReleaseSpinLock(&HalpIommuParaVirtDeviceCacheLock);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v20 = KeGetCurrentIrql();
              if ( v20 <= 0xFu && CurrentIrql <= 0xFu && v20 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v22 = CurrentPrcb->SchedulerAssist;
                v23 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                v24 = (v23 & v22[5]) == 0;
                v22[5] &= v23;
                if ( v24 )
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              }
            }
          }
          __writecr8(CurrentIrql);
          return (unsigned int)v11;
        }
        v11 = -1073741670;
      }
    }
    if ( v13 )
      HalpIommuDeleteDevice(v13);
    if ( v11 >= 0 )
      return (unsigned int)v11;
LABEL_11:
    if ( v10 )
      HalpMmAllocCtxFree(v9, (__int64)v10);
    return (unsigned int)v11;
  }
  return 3221225713LL;
}
