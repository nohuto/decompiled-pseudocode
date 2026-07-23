/*
 * XREFs of MiUnlockLoaderEntry @ 0x1402E095C
 * Callers:
 *     MiSetPagingOfDriver @ 0x1402DFC70 (MiSetPagingOfDriver.c)
 *     MiMakeDriverPagesPrivate @ 0x1402E0360 (MiMakeDriverPagesPrivate.c)
 *     MiFindDriverNonPagedSections @ 0x140746FC4 (MiFindDriverNonPagedSections.c)
 *     MiLockdownSections @ 0x1407488EC (MiLockdownSections.c)
 *     MiFreeInitializationCode @ 0x1407491CC (MiFreeInitializationCode.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140207E30 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KiAbEntryRemoveFromTree @ 0x140272F70 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x140331DC0 (ExReleaseAutoExpandPushLockExclusive.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiUnlockLoaderEntry(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  ULONG_PTR v3; // rdi
  struct _KTHREAD *v4; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v6; // r14
  unsigned int v7; // r8d
  bool v8; // zf
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v14; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = a1 + 104;
  if ( a2 )
  {
    if ( a2 == 2 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v3, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 104));
      KeAbPostRelease(v3);
    }
    else
    {
      ExReleaseAutoExpandPushLockExclusive(a1 + 104, 0LL);
    }
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 104));
    v14 = 0;
    v4 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v3) == 1 )
      SessionId = MmGetSessionIdEx((__int64)v4->ApcState.Process);
    else
      SessionId = -1;
    --v4->SpecialApcDisable;
    v6 = ++v4->AbAllocationRegionCount;
    v7 = ((char)v4->AbEntrySummary | (char)v4->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v8 = !_BitScanReverse((unsigned int *)&v9, v7);
      if ( v8 )
        break;
      v10 = (__int64)&v4->LockEntries[v9];
      v7 &= ~(1 << v9);
      if ( (*(_BYTE *)(v10 + 26) & 1) != 0
        && (*(_DWORD *)(v10 + 32) & 1) == 0
        && (*(_QWORD *)(v10 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v3 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v10 + 40) == SessionId )
      {
        *(_BYTE *)(v10 + 26) &= ~1u;
        if ( *(_QWORD *)(v10 + 32) )
        {
          if ( v10 )
          {
            *(_BYTE *)(v10 + 32) |= 2u;
            if ( *(__int64 *)(v10 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v10);
            v14 = *(_DWORD *)(v10 + 88) & 0x1FFFF;
            *(_DWORD *)(v10 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v10 + 25) &= ~1u;
            *(_QWORD *)(v10 + 32) = 0LL;
            v11 = (signed __int64)(v10 - (unsigned __int64)v4->LockEntries) / 96;
            if ( v6 == 1 )
              v4->AbEntrySummary |= 1 << v11;
            else
              _InterlockedOr8((volatile signed __int8 *)&v4->AbOrphanedEntrySummary, 1 << v11);
            goto LABEL_18;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v4->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v4, v3, SessionId, 0LL);
LABEL_18:
    --v4->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v4, v3, &v14);
    v8 = v4->SpecialApcDisable++ == -1;
    if ( v8 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v4->ApcState.ApcListHead[0].Flink != &v4->152 )
      KiCheckForKernelApcDelivery(v12);
  }
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
