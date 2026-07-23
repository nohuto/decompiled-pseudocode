/*
 * XREFs of HalpIommuBlockDevice @ 0x1404C90A0
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
 *     HalpIommuDecreaseAliasTrack @ 0x1403F02FC (HalpIommuDecreaseAliasTrack.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     HalpIommuLeaveDmaDomain @ 0x1404C9BD4 (HalpIommuLeaveDmaDomain.c)
 *     HalpIommuQueryAcpiDeviceMapping @ 0x1404C9EA4 (HalpIommuQueryAcpiDeviceMapping.c)
 *     HalpIommuDeleteDevice @ 0x140864DB0 (HalpIommuDeleteDevice.c)
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
  unsigned int v12; // r8d
  bool v13; // zf
  __int64 v14; // rcx
  __int64 v15; // rdi
  int v16; // eax
  unsigned int v17; // ecx
  __int64 v18; // rdx
  __int128 v19; // [rsp+30h] [rbp-20h] BYREF
  __int64 v20; // [rsp+40h] [rbp-10h]
  int v21; // [rsp+98h] [rbp+48h] BYREF
  __int64 v22; // [rsp+A0h] [rbp+50h] BYREF

  v22 = 0LL;
  result = 0LL;
  v2 = 0;
  v20 = 0LL;
  v19 = 0LL;
  if ( !a1 )
    return result;
  v4 = *(__int128 **)(a1 + 32);
  if ( *(_DWORD *)v4 == 2 )
  {
    v5 = HalpIommuQueryAcpiDeviceMapping(*(_QWORD *)(a1 + 32), &v19);
    v6 = &v19;
    if ( v5 < 0 )
      v6 = v4;
    v4 = v6;
  }
  if ( *(_DWORD *)v4 != 1 )
    goto LABEL_10;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&HalpDeviceBlockUnblockPushLock, 0LL);
  v2 = 1;
  v8 = HalpIommuDecreaseAliasTrack((__int64)v4, &v22);
  if ( v8 < 0 )
    goto LABEL_10;
  if ( *(__int64 *)(v22 + 24) <= 0 )
  {
    HalpMmAllocCtxFree(v7, *(_QWORD *)(v22 + 16));
LABEL_10:
    v8 = HalpIommuLeaveDmaDomain(a1, HalpIommuBypassDomain);
  }
  HalpIommuDeleteDevice(a1);
  if ( v2 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HalpDeviceBlockUnblockPushLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&HalpDeviceBlockUnblockPushLock);
    v21 = 0;
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&HalpDeviceBlockUnblockPushLock) == 1 )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    --CurrentThread->SpecialApcDisable;
    v11 = ++CurrentThread->AbAllocationRegionCount;
    v12 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v13 = !_BitScanReverse((unsigned int *)&v14, v12);
      if ( v13 )
        break;
      v15 = (__int64)&CurrentThread->LockEntries[v14];
      v12 &= ~(1 << v14);
      if ( (*(_BYTE *)(v15 + 26) & 1) != 0
        && (*(_DWORD *)(v15 + 32) & 1) == 0
        && (*(_QWORD *)(v15 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&HalpDeviceBlockUnblockPushLock & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v15 + 40) == SessionId )
      {
        *(_BYTE *)(v15 + 26) &= ~1u;
        if ( *(_QWORD *)(v15 + 32) )
        {
          if ( v15 )
          {
            *(_BYTE *)(v15 + 32) |= 2u;
            if ( *(__int64 *)(v15 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v15);
            v16 = *(_DWORD *)(v15 + 88) & 0x1FFFF;
            v17 = *(_DWORD *)(v15 + 88) & 0xFFFE0000;
            *(_BYTE *)(v15 + 25) &= ~1u;
            v21 = v16;
            *(_DWORD *)(v15 + 88) = v17;
            *(_QWORD *)(v15 + 32) = 0LL;
            v18 = (signed __int64)(v15 - (unsigned __int64)CurrentThread->LockEntries) / 96;
            if ( v11 == 1 )
              CurrentThread->AbEntrySummary |= 1 << v18;
            else
              _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v18);
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
    KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)&HalpDeviceBlockUnblockPushLock, (unsigned int *)&v21);
    v13 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v13 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  return (unsigned int)v8;
}
