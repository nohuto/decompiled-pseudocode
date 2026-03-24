/*
 * XREFs of HalpIommuUnblockDevice @ 0x1404C9E80
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     HalpMmAllocCtxFree @ 0x140379460 (HalpMmAllocCtxFree.c)
 *     HalpIommuCreateIncreaseAliasTrack @ 0x1403F0080 (HalpIommuCreateIncreaseAliasTrack.c)
 *     HalpIommuGetAcpiDeviceMapCount @ 0x1403F02A8 (HalpIommuGetAcpiDeviceMapCount.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     HalpIommuCheckExceptionList @ 0x1404C5440 (HalpIommuCheckExceptionList.c)
 *     HalpIommuCheckDpptException @ 0x1404C90F0 (HalpIommuCheckDpptException.c)
 *     HalpIommuJoinDmaDomain @ 0x1404C98BC (HalpIommuJoinDmaDomain.c)
 *     HalpIommuQueryAcpiDeviceMapping @ 0x1404C9C64 (HalpIommuQueryAcpiDeviceMapping.c)
 *     HalpIommuCreateDevice @ 0x1408649C4 (HalpIommuCreateDevice.c)
 *     HalpIommuDeleteDevice @ 0x140864C50 (HalpIommuDeleteDevice.c)
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
  _DWORD *v19; // r9
  unsigned int v20; // r8d
  bool v21; // zf
  __int64 v22; // rcx
  __int64 v23; // rsi
  int v24; // eax
  unsigned int v25; // ecx
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // [rsp+38h] [rbp-48h] BYREF
  __int64 v29; // [rsp+40h] [rbp-40h] BYREF
  __int128 v30; // [rsp+48h] [rbp-38h] BYREF
  __int64 v31; // [rsp+58h] [rbp-28h]
  __int128 v32; // [rsp+60h] [rbp-20h] BYREF
  __int64 v33; // [rsp+70h] [rbp-10h]
  int v34; // [rsp+D8h] [rbp+58h] BYREF

  v2 = 0;
  v31 = 0LL;
  v30 = 0LL;
  v33 = 0LL;
  v3 = 0LL;
  v32 = 0LL;
  v28 = 0LL;
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
    AcpiDeviceMapping = HalpIommuQueryAcpiDeviceMapping((__int64)v9, (__int64)&v32);
    v12 = &v32;
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
      v2 = HalpIommuCreateIncreaseAliasTrack(v7, &v28);
      if ( v2 < 0 )
        goto LABEL_23;
      v3 = v28;
      if ( *(__int64 *)(v28 + 24) > 1 )
        goto LABEL_23;
    }
    if ( HalpHvIommu )
    {
      *(_QWORD *)&v30 = 4LL;
      v31 = 0LL;
      v29 = 0LL;
      *((_QWORD *)&v30 + 1) = MEMORY[0x18];
      v15 = ((__int64 (__fastcall *)(__int128 *, __int64 *))qword_140C4A2F8)(&v30, &v29);
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
      v34 = 0;
      CurrentThread = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&HalpDeviceBlockUnblockPushLock) == 1 )
        SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      else
        SessionId = -1;
      --CurrentThread->SpecialApcDisable;
      v18 = ++CurrentThread->AbAllocationRegionCount;
      v19 = (_DWORD *)((unsigned __int64)&HalpDeviceBlockUnblockPushLock & 0x7FFFFFFFFFFFFFFCLL);
      v20 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v21 = !_BitScanReverse((unsigned int *)&v22, v20);
        if ( v21 )
          break;
        v23 = (__int64)&CurrentThread->LockEntries[v22];
        v20 &= ~(1 << v22);
        if ( (*(_BYTE *)(v23 + 26) & 1) != 0
          && (*(_DWORD *)(v23 + 32) & 1) == 0
          && (_DWORD *)(*(_QWORD *)(v23 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v19
          && *(_DWORD *)(v23 + 40) == SessionId )
        {
          *(_BYTE *)(v23 + 26) &= ~1u;
          if ( *(_QWORD *)(v23 + 32) )
          {
            if ( v23 )
            {
              *(_BYTE *)(v23 + 32) |= 2u;
              if ( *(__int64 *)(v23 + 32) < 0 )
                KiAbEntryRemoveFromTree(v23);
              v24 = *(_DWORD *)(v23 + 88) & 0x1FFFF;
              v25 = *(_DWORD *)(v23 + 88) & 0xFFFE0000;
              *(_BYTE *)(v23 + 25) &= ~1u;
              v34 = v24;
              *(_DWORD *)(v23 + 88) = v25;
              *(_QWORD *)(v23 + 32) = 0LL;
              v26 = (signed __int64)(v23 - (unsigned __int64)CurrentThread->LockEntries) / 96;
              if ( v18 == 1 )
                CurrentThread->AbEntrySummary |= 1 << v26;
              else
                _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v26);
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
      KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)&HalpDeviceBlockUnblockPushLock, (__int64)&v34, v19);
      v21 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v21
        && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v14);
      }
      v3 = v28;
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
      v27 = *(_QWORD *)(v3 + 16);
      if ( v27 )
        HalpMmAllocCtxFree(v14, v27);
      HalpMmAllocCtxFree(v14, v3);
    }
  }
  return (unsigned int)v2;
}
