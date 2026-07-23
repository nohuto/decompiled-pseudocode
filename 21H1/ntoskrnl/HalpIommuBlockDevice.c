/*
 * XREFs of HalpIommuBlockDevice @ 0x1404C3B00
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
 *     HalpIommuDecreaseAliasTrack @ 0x1403EBE00 (HalpIommuDecreaseAliasTrack.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     HalpIommuLeaveDmaDomain @ 0x1404C45E8 (HalpIommuLeaveDmaDomain.c)
 *     HalpIommuQueryAcpiDeviceMapping @ 0x1404C48B8 (HalpIommuQueryAcpiDeviceMapping.c)
 *     HalpIommuDeleteDevice @ 0x14086031C (HalpIommuDeleteDevice.c)
 */

__int64 __fastcall HalpIommuBlockDevice(__int64 a1)
{
  __int64 result; // rax
  char v2; // si
  __int128 *v4; // rbx
  int v5; // eax
  __int128 *v6; // rdx
  int v7; // r14d
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v10; // si
  unsigned int v11; // r8d
  bool v12; // zf
  __int64 v13; // rcx
  __int64 v14; // rdi
  int v15; // eax
  unsigned int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  _DWORD *v21; // r9
  __int128 v22; // [rsp+30h] [rbp-20h] BYREF
  __int64 v23; // [rsp+40h] [rbp-10h]
  int v24; // [rsp+98h] [rbp+48h] BYREF
  __int64 v25; // [rsp+A0h] [rbp+50h] BYREF

  v25 = 0LL;
  result = 0LL;
  v2 = 0;
  v23 = 0LL;
  v22 = 0LL;
  if ( a1 )
  {
    v4 = *(__int128 **)(a1 + 32);
    if ( *(_DWORD *)v4 == 2 )
    {
      v5 = HalpIommuQueryAcpiDeviceMapping(*(_QWORD *)(a1 + 32), &v22);
      v6 = &v22;
      if ( v5 < 0 )
        v6 = v4;
      v4 = v6;
    }
    if ( *(_DWORD *)v4 != 1
      || (ExAcquirePushLockExclusiveEx((ULONG_PTR)&HalpDeviceBlockUnblockPushLock, 0LL),
          v2 = 1,
          v7 = HalpIommuDecreaseAliasTrack((__int64)v4, &v25),
          v7 < 0)
      || *(__int64 *)(v25 + 24) <= 0 )
    {
      v7 = HalpIommuLeaveDmaDomain(a1, HalpIommuBypassDomain);
    }
    HalpIommuDeleteDevice(a1);
    if ( v2 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HalpDeviceBlockUnblockPushLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&HalpDeviceBlockUnblockPushLock);
      v24 = 0;
      CurrentThread = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&HalpDeviceBlockUnblockPushLock) == 1 )
        SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      else
        SessionId = -1;
      --CurrentThread->SpecialApcDisable;
      v10 = ++CurrentThread->AbAllocationRegionCount;
      v11 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v12 = !_BitScanReverse((unsigned int *)&v13, v11);
        if ( v12 )
          break;
        v14 = (__int64)&CurrentThread->LockEntries[v13];
        v11 &= ~(1 << v13);
        if ( (*(_BYTE *)(v14 + 26) & 1) != 0
          && (*(_DWORD *)(v14 + 32) & 1) == 0
          && (*(_QWORD *)(v14 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&HalpDeviceBlockUnblockPushLock & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v14 + 40) == SessionId )
        {
          *(_BYTE *)(v14 + 26) &= ~1u;
          if ( *(_QWORD *)(v14 + 32) )
          {
            if ( v14 )
            {
              *(_BYTE *)(v14 + 32) |= 2u;
              if ( *(__int64 *)(v14 + 32) < 0 )
                KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v14);
              v15 = *(_DWORD *)(v14 + 88) & 0x1FFFF;
              v16 = *(_DWORD *)(v14 + 88) & 0xFFFE0000;
              *(_BYTE *)(v14 + 25) &= ~1u;
              v24 = v15;
              *(_DWORD *)(v14 + 88) = v16;
              *(_QWORD *)(v14 + 32) = 0LL;
              v17 = (signed __int64)(v14 - (unsigned __int64)CurrentThread->LockEntries) / 96;
              if ( v10 == 1 )
                CurrentThread->AbEntrySummary |= 1 << v17;
              else
                _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v17);
              goto LABEL_28;
            }
            break;
          }
        }
      }
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&HalpDeviceBlockUnblockPushLock, SessionId, 0LL);
LABEL_28:
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)&HalpDeviceBlockUnblockPushLock, &v24);
      v12 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v12
        && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v19, v18, v20, v21);
      }
    }
    return (unsigned int)v7;
  }
  return result;
}
