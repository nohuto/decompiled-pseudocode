/*
 * XREFs of EtwpDisableCompression @ 0x1405AB758
 * Callers:
 *     EtwpDequeueFreeBuffer @ 0x1402672C4 (EtwpDequeueFreeBuffer.c)
 *     EtwpDequeueBufferPendingCompression @ 0x1405AB5F4 (EtwpDequeueBufferPendingCompression.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     ObGetCurrentIrql @ 0x1402473F0 (ObGetCurrentIrql.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1402F05E0 (KiAbEntryRemoveFromTree.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     EtwpRelinquishCompressionTarget @ 0x1405ABD74 (EtwpRelinquishCompressionTarget.c)
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
  __int64 v12; // rcx
  int v13; // [rsp+58h] [rbp+10h] BYREF

  if ( *(_DWORD *)(a1 + 1164) != 1
    && _InterlockedExchange((volatile __int32 *)(a1 + 1152), 0)
    && !*(_DWORD *)(a1 + 1120)
    && ObGetCurrentIrql() < 2u )
  {
    v2 = a1 + 1128;
    ExAcquirePushLockExclusiveEx(a1 + 1128, 0LL);
    EtwpRelinquishCompressionTarget(a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1128), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1128));
    v13 = 0;
    v3 = a1 + 1128;
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
    v13 = *(_DWORD *)(v8 + 88) & 0x1FFFF;
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
    KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v2, &v13);
    v9 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v9 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v12);
  }
}
