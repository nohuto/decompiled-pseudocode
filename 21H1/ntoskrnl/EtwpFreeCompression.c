/*
 * XREFs of EtwpFreeCompression @ 0x14033FF7C
 * Callers:
 *     EtwpFreeLoggerContext @ 0x1407013FC (EtwpFreeLoggerContext.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KeRemoveQueueDpcEx @ 0x140340050 (KeRemoveQueueDpcEx.c)
 *     EtwpFreePlaceholderList @ 0x140340144 (EtwpFreePlaceholderList.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     EtwpRelinquishCompressionTarget @ 0x1405A7B24 (EtwpRelinquishCompressionTarget.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpFreeCompression(__int64 a1)
{
  void *v2; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v6; // r14
  unsigned int v7; // r8d
  bool v8; // zf
  __int64 v9; // rcx
  __int64 v10; // rdi
  int v11; // eax
  unsigned int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // [rsp+68h] [rbp+10h] BYREF

  KeRemoveQueueDpcEx(a1 + 1208, 0LL);
  if ( *(_DWORD *)(a1 + 1184) )
  {
    ExAcquirePushLockExclusiveEx(a1 + 1160, 0LL);
    EtwpRelinquishCompressionTarget(a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1160), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 1160);
    v15 = 0;
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(a1 + 1160) == 1 )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    --CurrentThread->SpecialApcDisable;
    v6 = ++CurrentThread->AbAllocationRegionCount;
    v7 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v8 = !_BitScanReverse((unsigned int *)&v9, v7);
      if ( v8 )
        goto LABEL_12;
      v10 = (__int64)&CurrentThread->LockEntries[v9];
      v7 &= ~(1 << v9);
      if ( (*(_BYTE *)(v10 + 26) & 1) != 0
        && (*(_DWORD *)(v10 + 32) & 1) == 0
        && (*(_QWORD *)(v10 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((a1 + 1160) & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v10 + 40) == SessionId )
      {
        *(_BYTE *)(v10 + 26) &= ~1u;
        if ( *(_QWORD *)(v10 + 32) )
          break;
      }
    }
    if ( !v10 )
    {
LABEL_12:
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, a1 + 1160, SessionId, 0LL);
      goto LABEL_24;
    }
    *(_BYTE *)(v10 + 32) |= 2u;
    if ( *(__int64 *)(v10 + 32) < 0 )
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v10);
    v11 = *(_DWORD *)(v10 + 88) & 0x1FFFF;
    v12 = *(_DWORD *)(v10 + 88) & 0xFFFE0000;
    *(_BYTE *)(v10 + 25) &= ~1u;
    v15 = v11;
    *(_DWORD *)(v10 + 88) = v12;
    *(_QWORD *)(v10 + 32) = 0LL;
    v13 = (signed __int64)(v10 - (unsigned __int64)CurrentThread->LockEntries) / 96;
    if ( v6 == 1 )
      CurrentThread->AbEntrySummary |= 1 << v13;
    else
      _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v13);
LABEL_24:
    --CurrentThread->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, a1 + 1160, &v15);
    v8 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v8 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v14);
    _InterlockedExchange((volatile __int32 *)(a1 + 1184), 0);
  }
  v2 = *(void **)(a1 + 1176);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  return EtwpFreePlaceholderList(a1);
}
