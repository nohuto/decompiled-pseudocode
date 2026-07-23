/*
 * XREFs of HalpIommuUnblockDevice @ 0x1404C4AD0
 * Callers:
 *     <none>
 * Callees:
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     HalpIommuCreateIncreaseAliasTrack @ 0x1403EBCF4 (HalpIommuCreateIncreaseAliasTrack.c)
 *     HalpIommuGetAcpiDeviceMapCount @ 0x1403EBEE8 (HalpIommuGetAcpiDeviceMapCount.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     HalpIommuCheckExceptionList @ 0x1404BFE2C (HalpIommuCheckExceptionList.c)
 *     HalpIommuCheckDpptException @ 0x1404C3D88 (HalpIommuCheckDpptException.c)
 *     HalpIommuJoinDmaDomain @ 0x1404C4510 (HalpIommuJoinDmaDomain.c)
 *     HalpIommuQueryAcpiDeviceMapping @ 0x1404C48B8 (HalpIommuQueryAcpiDeviceMapping.c)
 *     HalpIommuCreateDevice @ 0x140860044 (HalpIommuCreateDevice.c)
 *     HalpIommuDeleteDevice @ 0x14086031C (HalpIommuDeleteDevice.c)
 */

__int64 __fastcall HalpIommuUnblockDevice(__int128 *Src, _QWORD *a2)
{
  char v2; // r15
  char v3; // si
  __int128 *v5; // rbx
  __int64 v6; // rcx
  _DWORD *v7; // rcx
  int AcpiDeviceMapping; // eax
  __int128 *v10; // rcx
  int Device; // eax
  int v12; // r14d
  int v13; // eax
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v16; // r13
  unsigned int v17; // r8d
  bool v18; // zf
  __int64 v19; // rcx
  __int64 v20; // rsi
  int v21; // eax
  unsigned int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  _DWORD *v27; // r9
  __int64 v28; // [rsp+38h] [rbp-48h] BYREF
  __int64 v29; // [rsp+40h] [rbp-40h] BYREF
  __int128 v30; // [rsp+48h] [rbp-38h] BYREF
  __int64 v31; // [rsp+58h] [rbp-28h]
  __int128 v32; // [rsp+60h] [rbp-20h] BYREF
  __int64 v33; // [rsp+70h] [rbp-10h]
  int v34; // [rsp+D8h] [rbp+58h] BYREF

  v28 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v2 = 0;
  v32 = 0LL;
  v33 = 0LL;
  v3 = 0;
  *a2 = 0LL;
  v5 = Src;
  if ( HalpIommuCheckDpptException(Src) || HalpIommuCheckExceptionList(v6) )
    return 0LL;
  if ( HalpHvIommu && !HalpHvIommuDeviceDomain )
    return 3221225659LL;
  if ( *v7 == 2 )
  {
    AcpiDeviceMapping = HalpIommuQueryAcpiDeviceMapping((__int64)v7, (__int64)&v32);
    v10 = &v32;
    if ( AcpiDeviceMapping < 0 )
      v10 = v5;
    v5 = v10;
  }
  Device = HalpIommuCreateDevice(v5);
  if ( Device >= 0 )
  {
    if ( *(_DWORD *)v5 == 1 && (unsigned int)HalpIommuGetAcpiDeviceMapCount((__int64)v5) > 1 )
    {
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&HalpDeviceBlockUnblockPushLock, 0LL);
      v3 = 1;
      v12 = HalpIommuCreateIncreaseAliasTrack(v5, &v28);
      if ( v12 >= 0 && *(__int64 *)(v28 + 24) > 1 )
        goto LABEL_22;
    }
    v2 = 1;
    if ( HalpHvIommu )
    {
      *(_QWORD *)&v30 = 4LL;
      v31 = 0LL;
      v29 = 0LL;
      *((_QWORD *)&v30 + 1) = MEMORY[0x18];
      v13 = ((__int64 (__fastcall *)(__int128 *, __int64 *))qword_140C4A4D8)(&v30, &v29);
    }
    else
    {
      v13 = HalpIommuJoinDmaDomain(0LL, HalpIommuBypassDomain);
    }
    v12 = v13;
    if ( v3 )
    {
LABEL_22:
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HalpDeviceBlockUnblockPushLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&HalpDeviceBlockUnblockPushLock);
      CurrentThread = KeGetCurrentThread();
      v34 = 0;
      if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&HalpDeviceBlockUnblockPushLock) == 1 )
        SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      else
        SessionId = -1;
      --CurrentThread->SpecialApcDisable;
      v16 = ++CurrentThread->AbAllocationRegionCount;
      v17 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v18 = !_BitScanReverse((unsigned int *)&v19, v17);
        if ( v18 )
          break;
        v20 = (__int64)&CurrentThread->LockEntries[v19];
        v17 &= ~(1 << v19);
        if ( (*(_BYTE *)(v20 + 26) & 1) != 0
          && (*(_DWORD *)(v20 + 32) & 1) == 0
          && (*(_QWORD *)(v20 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&HalpDeviceBlockUnblockPushLock & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v20 + 40) == SessionId )
        {
          *(_BYTE *)(v20 + 26) &= ~1u;
          if ( *(_QWORD *)(v20 + 32) )
          {
            if ( v20 )
            {
              *(_BYTE *)(v20 + 32) |= 2u;
              if ( *(__int64 *)(v20 + 32) < 0 )
                KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v20);
              v21 = *(_DWORD *)(v20 + 88) & 0x1FFFF;
              v22 = *(_DWORD *)(v20 + 88) & 0xFFFE0000;
              *(_BYTE *)(v20 + 25) &= ~1u;
              v34 = v21;
              *(_DWORD *)(v20 + 88) = v22;
              *(_QWORD *)(v20 + 32) = 0LL;
              v23 = (signed __int64)(v20 - (unsigned __int64)CurrentThread->LockEntries) / 96;
              if ( v16 == 1 )
                CurrentThread->AbEntrySummary |= 1 << v23;
              else
                _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v23);
              goto LABEL_39;
            }
            break;
          }
        }
      }
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&HalpDeviceBlockUnblockPushLock, SessionId, 0LL);
LABEL_39:
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)&HalpDeviceBlockUnblockPushLock, &v34);
      v18 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v18
        && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v25, v24, v26, v27);
      }
    }
  }
  else
  {
    v12 = 0;
    if ( Device != -1073741275 )
      v12 = Device;
  }
  if ( v12 < 0 && v2 )
    HalpIommuDeleteDevice(0LL);
  else
    *a2 = 0LL;
  return (unsigned int)v12;
}
