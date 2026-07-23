/*
 * XREFs of HalpIommuUnblockDevice @ 0x1404CA0C0
 * Callers:
 *     <none>
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     HalpMmAllocCtxFree @ 0x140378FB0 (HalpMmAllocCtxFree.c)
 *     HalpIommuCreateIncreaseAliasTrack @ 0x1403F01F0 (HalpIommuCreateIncreaseAliasTrack.c)
 *     HalpIommuGetAcpiDeviceMapCount @ 0x1403F0418 (HalpIommuGetAcpiDeviceMapCount.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HalpIommuCheckExceptionList @ 0x1404C5680 (HalpIommuCheckExceptionList.c)
 *     HalpIommuCheckDpptException @ 0x1404C9330 (HalpIommuCheckDpptException.c)
 *     HalpIommuJoinDmaDomain @ 0x1404C9AFC (HalpIommuJoinDmaDomain.c)
 *     HalpIommuQueryAcpiDeviceMapping @ 0x1404C9EA4 (HalpIommuQueryAcpiDeviceMapping.c)
 *     HalpIommuCreateDevice @ 0x140864B24 (HalpIommuCreateDevice.c)
 *     HalpIommuDeleteDevice @ 0x140864DB0 (HalpIommuDeleteDevice.c)
 */

__int64 __fastcall HalpIommuUnblockDevice(__int128 *Src, _QWORD *a2)
{
  int v2; // r14d
  __int64 v3; // rsi
  char v4; // r12
  char v5; // r15
  __int128 *v7; // rbx
  __int64 v8; // rcx
  _DWORD *v9; // rcx
  int AcpiDeviceMapping; // eax
  __int128 *v12; // rcx
  int Device; // eax
  __int64 v14; // rcx
  int v15; // eax
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v18; // r15
  unsigned int v19; // r8d
  bool v20; // zf
  __int64 v21; // rcx
  __int64 v22; // rsi
  int v23; // eax
  unsigned int v24; // ecx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // [rsp+38h] [rbp-48h] BYREF
  __int64 v28; // [rsp+40h] [rbp-40h] BYREF
  __int128 v29; // [rsp+48h] [rbp-38h] BYREF
  __int64 v30; // [rsp+58h] [rbp-28h]
  __int128 v31; // [rsp+60h] [rbp-20h] BYREF
  __int64 v32; // [rsp+70h] [rbp-10h]
  int v33; // [rsp+D8h] [rbp+58h] BYREF

  v2 = 0;
  v30 = 0LL;
  v29 = 0LL;
  v32 = 0LL;
  v3 = 0LL;
  v31 = 0LL;
  v27 = 0LL;
  v4 = 0;
  *a2 = 0LL;
  v5 = 0;
  v7 = Src;
  if ( HalpIommuCheckDpptException(Src) || HalpIommuCheckExceptionList(v8) )
    return 0LL;
  if ( HalpHvIommu && !HalpHvIommuDeviceDomain )
    return 3221225659LL;
  if ( *v9 == 2 )
  {
    AcpiDeviceMapping = HalpIommuQueryAcpiDeviceMapping((__int64)v9, (__int64)&v31);
    v12 = &v31;
    if ( AcpiDeviceMapping < 0 )
      v12 = v7;
    v7 = v12;
  }
  Device = HalpIommuCreateDevice(v7);
  if ( Device >= 0 )
  {
    v4 = 1;
    if ( *(_DWORD *)v7 == 1
      && ((unsigned int)HalpIommuGetAcpiDeviceMapCount((__int64)v7) > 1 || (*((_BYTE *)v7 + 4) & 1) != 0) )
    {
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&HalpDeviceBlockUnblockPushLock, 0LL);
      v5 = 1;
      v2 = HalpIommuCreateIncreaseAliasTrack(v7, &v27);
      if ( v2 < 0 )
        goto LABEL_23;
      v3 = v27;
      if ( *(__int64 *)(v27 + 24) > 1 )
        goto LABEL_23;
    }
    if ( HalpHvIommu )
    {
      *(_QWORD *)&v29 = 4LL;
      v30 = 0LL;
      v28 = 0LL;
      *((_QWORD *)&v29 + 1) = MEMORY[0x18];
      v15 = ((__int64 (__fastcall *)(__int128 *, __int64 *))qword_140C4A338)(&v29, &v28);
    }
    else
    {
      v15 = HalpIommuJoinDmaDomain(0LL, HalpIommuBypassDomain);
    }
    v2 = v15;
    if ( v5 )
    {
LABEL_23:
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HalpDeviceBlockUnblockPushLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&HalpDeviceBlockUnblockPushLock);
      v33 = 0;
      CurrentThread = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&HalpDeviceBlockUnblockPushLock) == 1 )
        SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      else
        SessionId = -1;
      --CurrentThread->SpecialApcDisable;
      v18 = ++CurrentThread->AbAllocationRegionCount;
      v19 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v20 = !_BitScanReverse((unsigned int *)&v21, v19);
        if ( v20 )
          break;
        v22 = (__int64)&CurrentThread->LockEntries[v21];
        v19 &= ~(1 << v21);
        if ( (*(_BYTE *)(v22 + 26) & 1) != 0
          && (*(_DWORD *)(v22 + 32) & 1) == 0
          && (*(_QWORD *)(v22 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&HalpDeviceBlockUnblockPushLock & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v22 + 40) == SessionId )
        {
          *(_BYTE *)(v22 + 26) &= ~1u;
          if ( *(_QWORD *)(v22 + 32) )
          {
            if ( v22 )
            {
              *(_BYTE *)(v22 + 32) |= 2u;
              if ( *(__int64 *)(v22 + 32) < 0 )
                KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v22);
              v23 = *(_DWORD *)(v22 + 88) & 0x1FFFF;
              v24 = *(_DWORD *)(v22 + 88) & 0xFFFE0000;
              *(_BYTE *)(v22 + 25) &= ~1u;
              v33 = v23;
              *(_DWORD *)(v22 + 88) = v24;
              *(_QWORD *)(v22 + 32) = 0LL;
              v25 = (signed __int64)(v22 - (unsigned __int64)CurrentThread->LockEntries) / 96;
              if ( v18 == 1 )
                CurrentThread->AbEntrySummary |= 1 << v25;
              else
                _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v25);
              goto LABEL_40;
            }
            break;
          }
        }
      }
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&HalpDeviceBlockUnblockPushLock, SessionId, 0LL);
LABEL_40:
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)&HalpDeviceBlockUnblockPushLock, (unsigned int *)&v33);
      v20 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v20
        && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      v3 = v27;
    }
  }
  else if ( Device != -1073741275 )
  {
    v2 = Device;
  }
  if ( v2 >= 0 )
  {
    *a2 = 0LL;
  }
  else
  {
    if ( v4 )
      HalpIommuDeleteDevice(0LL);
    if ( v3 )
    {
      v26 = *(_QWORD *)(v3 + 16);
      if ( v26 )
        HalpMmAllocCtxFree(v14, v26);
      HalpMmAllocCtxFree(v14, v3);
    }
  }
  return (unsigned int)v2;
}
