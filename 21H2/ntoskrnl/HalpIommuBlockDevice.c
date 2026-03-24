/*
 * XREFs of HalpIommuBlockDevice @ 0x1404C8E60
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
 *     HalpIommuDecreaseAliasTrack @ 0x1403F018C (HalpIommuDecreaseAliasTrack.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     HalpIommuLeaveDmaDomain @ 0x1404C9994 (HalpIommuLeaveDmaDomain.c)
 *     HalpIommuQueryAcpiDeviceMapping @ 0x1404C9C64 (HalpIommuQueryAcpiDeviceMapping.c)
 *     HalpIommuDeleteDevice @ 0x140864C50 (HalpIommuDeleteDevice.c)
 */

__int64 __fastcall HalpIommuBlockDevice(__int64 a1)
{
  __int64 result; // rax
  char v2; // si
  __int128 *v4; // rbx
  int v5; // eax
  __int128 *v6; // rdx
  __int64 v7; // rcx
  int v8; // r14d
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v11; // si
  _DWORD *v12; // r9
  unsigned int v13; // r8d
  bool v14; // zf
  __int64 v15; // rcx
  __int64 v16; // rdi
  int v17; // eax
  unsigned int v18; // ecx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int128 v21; // [rsp+30h] [rbp-20h] BYREF
  __int64 v22; // [rsp+40h] [rbp-10h]
  int v23; // [rsp+98h] [rbp+48h] BYREF
  __int64 v24; // [rsp+A0h] [rbp+50h] BYREF

  v24 = 0LL;
  result = 0LL;
  v2 = 0;
  v22 = 0LL;
  v21 = 0LL;
  if ( !a1 )
    return result;
  v4 = *(__int128 **)(a1 + 32);
  if ( *(_DWORD *)v4 == 2 )
  {
    v5 = HalpIommuQueryAcpiDeviceMapping(*(_QWORD *)(a1 + 32), &v21);
    v6 = &v21;
    if ( v5 < 0 )
      v6 = v4;
    v4 = v6;
  }
  if ( *(_DWORD *)v4 != 1 )
    goto LABEL_10;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&HalpDeviceBlockUnblockPushLock, 0LL);
  v2 = 1;
  v8 = HalpIommuDecreaseAliasTrack((__int64)v4, &v24);
  if ( v8 < 0 )
    goto LABEL_10;
  if ( *(__int64 *)(v24 + 24) <= 0 )
  {
    HalpMmAllocCtxFree(v7, *(_QWORD *)(v24 + 16));
LABEL_10:
    v8 = HalpIommuLeaveDmaDomain(a1, HalpIommuBypassDomain);
  }
  HalpIommuDeleteDevice(a1);
  if ( v2 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HalpDeviceBlockUnblockPushLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&HalpDeviceBlockUnblockPushLock);
    v23 = 0;
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&HalpDeviceBlockUnblockPushLock) == 1 )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    --CurrentThread->SpecialApcDisable;
    v11 = ++CurrentThread->AbAllocationRegionCount;
    v12 = (_DWORD *)((unsigned __int64)&HalpDeviceBlockUnblockPushLock & 0x7FFFFFFFFFFFFFFCLL);
    v13 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v14 = !_BitScanReverse((unsigned int *)&v15, v13);
      if ( v14 )
        break;
      v16 = (__int64)&CurrentThread->LockEntries[v15];
      v13 &= ~(1 << v15);
      if ( (*(_BYTE *)(v16 + 26) & 1) != 0
        && (*(_DWORD *)(v16 + 32) & 1) == 0
        && (_DWORD *)(*(_QWORD *)(v16 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v12
        && *(_DWORD *)(v16 + 40) == SessionId )
      {
        *(_BYTE *)(v16 + 26) &= ~1u;
        if ( *(_QWORD *)(v16 + 32) )
        {
          if ( v16 )
          {
            *(_BYTE *)(v16 + 32) |= 2u;
            if ( *(__int64 *)(v16 + 32) < 0 )
              KiAbEntryRemoveFromTree(v16);
            v17 = *(_DWORD *)(v16 + 88) & 0x1FFFF;
            v18 = *(_DWORD *)(v16 + 88) & 0xFFFE0000;
            *(_BYTE *)(v16 + 25) &= ~1u;
            v23 = v17;
            *(_DWORD *)(v16 + 88) = v18;
            *(_QWORD *)(v16 + 32) = 0LL;
            v19 = (signed __int64)(v16 - (unsigned __int64)CurrentThread->LockEntries) / 96;
            if ( v11 == 1 )
              CurrentThread->AbEntrySummary |= 1 << v19;
            else
              _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v19);
            goto LABEL_29;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&HalpDeviceBlockUnblockPushLock, SessionId, 0LL);
LABEL_29:
    --CurrentThread->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)&HalpDeviceBlockUnblockPushLock, (__int64)&v23, v12);
    v14 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v14 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v20);
  }
  return (unsigned int)v8;
}
