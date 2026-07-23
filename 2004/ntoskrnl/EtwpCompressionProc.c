/*
 * XREFs of EtwpCompressionProc @ 0x1405A7840
 * Callers:
 *     <none>
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140207E30 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140272F70 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140311DB0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     EtwpCompressPendingBuffers @ 0x1405A7528 (EtwpCompressPendingBuffers.c)
 *     EtwpRelinquishCompressionTarget @ 0x1405A8214 (EtwpRelinquishCompressionTarget.c)
 */

void __fastcall EtwpCompressionProc(unsigned int *a1)
{
  signed __int32 i; // eax
  bool v3; // zf
  unsigned int v4; // eax
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v7; // r14
  unsigned int v8; // r8d
  __int64 v9; // rsi
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // [rsp+68h] [rbp+10h] BYREF

  for ( i = _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 288, 0xFFFFFFFF);
        ;
        i = _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 288, 0xFFFFFFFF) )
  {
    v3 = i == 2;
    v4 = a1[296];
    if ( !v3 )
      break;
    if ( v4 )
      EtwpCompressPendingBuffers((__int64)a1);
  }
  if ( !v4 )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(a1 + 290), 0LL);
    EtwpRelinquishCompressionTarget(a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 145, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)a1 + 145);
    v15 = 0;
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)(a1 + 290)) == 1 )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    --CurrentThread->SpecialApcDisable;
    v7 = ++CurrentThread->AbAllocationRegionCount;
    v8 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v3 = !_BitScanReverse((unsigned int *)&v10, v8);
      if ( v3 )
        goto LABEL_19;
      v9 = (__int64)&CurrentThread->LockEntries[v10];
      v8 &= ~(1 << v10);
      if ( (*(_BYTE *)(v9 + 26) & 1) != 0
        && (*(_DWORD *)(v9 + 32) & 1) == 0
        && (*(_QWORD *)(v9 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)(a1 + 290) & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v9 + 40) == SessionId )
      {
        *(_BYTE *)(v9 + 26) &= ~1u;
        if ( *(_QWORD *)(v9 + 32) )
          break;
      }
    }
    if ( !v9 )
    {
LABEL_19:
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)(a1 + 290), SessionId, 0LL);
      goto LABEL_26;
    }
    *(_BYTE *)(v9 + 32) |= 2u;
    if ( *(__int64 *)(v9 + 32) < 0 )
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v9);
    v11 = *(_DWORD *)(v9 + 88) & 0x1FFFF;
    v12 = *(_DWORD *)(v9 + 88) & 0xFFFE0000;
    *(_BYTE *)(v9 + 25) &= ~1u;
    v15 = v11;
    *(_DWORD *)(v9 + 88) = v12;
    *(_QWORD *)(v9 + 32) = 0LL;
    v13 = (signed __int64)(v9 - (unsigned __int64)CurrentThread->LockEntries) / 96;
    if ( v7 == 1 )
      CurrentThread->AbEntrySummary |= 1 << v13;
    else
      _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v13);
LABEL_26:
    --CurrentThread->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)(a1 + 290), &v15);
    v3 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v3 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v14);
  }
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a1 + 139) + 448LL) + 8LL * *a1),
    1u);
}
