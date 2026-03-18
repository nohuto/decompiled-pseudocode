/*
 * XREFs of IommuCreateAtsDevice @ 0x1405251A0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpMmAllocCtxFree @ 0x1403B1B5C (HalpMmAllocCtxFree.c)
 *     HalpMmAllocCtxAlloc @ 0x1403B1F04 (HalpMmAllocCtxAlloc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     HalpIommuLocateFromDevice @ 0x14084667C (HalpIommuLocateFromDevice.c)
 */

__int64 __fastcall IommuCreateAtsDevice(__int64 a1, __int64 a2, __int64 *a3)
{
  char v3; // si
  __int64 v4; // rbp
  char v5; // r13
  KIRQL v10; // al
  __int64 v11; // rcx
  unsigned __int64 v12; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  int v18; // edi
  __int64 v19; // rcx
  void *v20; // rax
  __int64 v21; // rbx
  KIRQL v22; // al
  __int64 v23; // rcx
  unsigned __int64 v24; // rsi
  __int64 *v25; // rax
  __int64 v26; // rcx
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r9
  int v29; // eax
  _DWORD *v30; // r8
  __int64 v31; // [rsp+60h] [rbp+8h] BYREF
  __int64 v32; // [rsp+78h] [rbp+20h] BYREF

  v31 = 0LL;
  v3 = 0;
  v32 = 0LL;
  v4 = 0LL;
  v5 = 0;
  if ( *(_DWORD *)a1 != 1 )
    return 3221225659LL;
  v10 = KeAcquireSpinLockRaiseToDpc(&HalpIommuAtsDeviceLock);
  v11 = HalpIommuAtsDeviceList;
  v12 = v10;
  if ( (__int64 *)HalpIommuAtsDeviceList != &HalpIommuAtsDeviceList )
  {
    while ( 1 )
    {
      v4 = v11;
      if ( *(_WORD *)(v11 + 24) == *(_WORD *)(a1 + 8) && *(_WORD *)(v11 + 28) == *(_WORD *)(a1 + 12) )
        break;
      v11 = *(_QWORD *)v11;
      if ( (__int64 *)v11 == &HalpIommuAtsDeviceList )
        goto LABEL_9;
    }
    v3 = 1;
  }
LABEL_9:
  KxReleaseSpinLock(&HalpIommuAtsDeviceLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v12 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
        v17 = (v16 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v16;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v12);
  if ( v3 )
  {
    v18 = HalpIommuLocateFromDevice(a1, &v31, &v32);
    if ( v18 >= 0 )
    {
      v20 = (void *)HalpMmAllocCtxAlloc(v19, 128LL);
      v21 = (__int64)v20;
      if ( v20 )
      {
        memset(v20, 0, 0x80uLL);
        *(_QWORD *)(v21 + 24) = v31;
        *(_QWORD *)(v21 + 40) = v32;
        *(_WORD *)(v21 + 48) = *(_WORD *)(v4 + 24);
        *(_DWORD *)(v21 + 64) = *(_DWORD *)(v4 + 40);
        *(_QWORD *)(v21 + 52) = *(_QWORD *)a2;
        *(_DWORD *)(v21 + 60) = *(_DWORD *)(a2 + 8);
      }
      v22 = KeAcquireSpinLockRaiseToDpc(&HalpIommuTrackedAtsListLock);
      v23 = HalpIommuTrackedAtsList;
      v24 = v22;
      if ( (__int64 *)HalpIommuTrackedAtsList == &HalpIommuTrackedAtsList )
      {
LABEL_26:
        if ( v21 )
        {
          v25 = (__int64 *)qword_140C4BE58;
          if ( *(__int64 **)qword_140C4BE58 != &HalpIommuTrackedAtsList )
            __fastfail(3u);
          *(_QWORD *)v21 = &HalpIommuTrackedAtsList;
          *(_QWORD *)(v21 + 8) = v25;
          *v25 = v21;
          qword_140C4BE58 = v21;
          *a3 = v21;
        }
        else
        {
          v18 = -1073741670;
        }
      }
      else
      {
        while ( *(_QWORD *)(v21 + 24) != *(_QWORD *)(v23 + 24)
             || *(_QWORD *)(v21 + 40) != *(_QWORD *)(v23 + 40)
             || *(_WORD *)(v21 + 48) != *(_WORD *)(v23 + 48) )
        {
          v23 = *(_QWORD *)v23;
          if ( (__int64 *)v23 == &HalpIommuTrackedAtsList )
            goto LABEL_26;
        }
        v5 = 1;
        *a3 = v23;
      }
      KxReleaseSpinLock(&HalpIommuTrackedAtsListLock);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v27 = KeGetCurrentIrql();
          if ( v27 <= 0xFu && (unsigned __int8)v24 <= 0xFu && v27 >= 2u )
          {
            v28 = KeGetCurrentPrcb();
            v26 = (unsigned int)(v24 + 1);
            v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v24 + 1));
            v30 = v28->SchedulerAssist;
            v17 = (v29 & v30[5]) == 0;
            v30[5] &= v29;
            if ( v17 )
              KiRemoveSystemWorkPriorityKick((__int64)v28);
          }
        }
      }
      __writecr8(v24);
      if ( v5 )
      {
        if ( v21 )
          HalpMmAllocCtxFree(v26, v21);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return (unsigned int)v18;
}
