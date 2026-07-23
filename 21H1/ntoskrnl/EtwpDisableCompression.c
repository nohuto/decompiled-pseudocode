/*
 * XREFs of EtwpDisableCompression @ 0x1405A7508
 * Callers:
 *     EtwpDequeueFreeBuffer @ 0x140241460 (EtwpDequeueFreeBuffer.c)
 *     EtwpDequeueBufferPendingCompression @ 0x1405A73A4 (EtwpDequeueBufferPendingCompression.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x140236140 (ObGetCurrentIrql.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     EtwpRelinquishCompressionTarget @ 0x1405A7B24 (EtwpRelinquishCompressionTarget.c)
 */

void __fastcall EtwpDisableCompression(__int64 a1)
{
  ULONG_PTR v2; // rsi
  unsigned __int64 v3; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v6; // bp
  unsigned int v7; // r8d
  __int64 v8; // rdi
  bool v9; // zf
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  _DWORD *v15; // r9
  int v16; // [rsp+58h] [rbp+10h] BYREF

  if ( *(_DWORD *)(a1 + 1196) != 1
    && _InterlockedExchange((volatile __int32 *)(a1 + 1184), 0)
    && !*(_DWORD *)(a1 + 1152)
    && ObGetCurrentIrql() < 2u )
  {
    v2 = a1 + 1160;
    ExAcquirePushLockExclusiveEx(a1 + 1160, 0LL);
    EtwpRelinquishCompressionTarget(a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1160), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 1160);
    v16 = 0;
    v3 = a1 + 1160;
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v3) == 1 )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    --CurrentThread->SpecialApcDisable;
    v6 = ++CurrentThread->AbAllocationRegionCount;
    v7 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v9 = !_BitScanReverse((unsigned int *)&v10, v7);
      if ( v9 )
        goto LABEL_17;
      v8 = (__int64)&CurrentThread->LockEntries[v10];
      v7 &= ~(1 << v10);
      if ( (*(_BYTE *)(v8 + 26) & 1) != 0
        && (*(_DWORD *)(v8 + 32) & 1) == 0
        && (*(_QWORD *)(v8 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v2 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v8 + 40) == SessionId )
      {
        *(_BYTE *)(v8 + 26) &= ~1u;
        if ( *(_QWORD *)(v8 + 32) )
          break;
      }
    }
    if ( !v8 )
    {
LABEL_17:
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v2, SessionId, 0LL);
      goto LABEL_24;
    }
    *(_BYTE *)(v8 + 32) |= 2u;
    if ( *(__int64 *)(v8 + 32) < 0 )
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v8);
    v16 = *(_DWORD *)(v8 + 88) & 0x1FFFF;
    *(_DWORD *)(v8 + 88) &= 0xFFFE0000;
    *(_BYTE *)(v8 + 25) &= ~1u;
    *(_QWORD *)(v8 + 32) = 0LL;
    v11 = (signed __int64)(v8 - (unsigned __int64)CurrentThread->LockEntries) / 96;
    if ( v6 == 1 )
      CurrentThread->AbEntrySummary |= 1 << v11;
    else
      _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v11);
LABEL_24:
    --CurrentThread->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v2, &v16);
    v9 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v9 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v13, v12, v14, v15);
  }
}
