/*
 * XREFs of PopDirectedDripsNotifyResiliencyCompletionWorker @ 0x140562E20
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
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     PopPdcCompleteResiliencyCallback @ 0x1408EB770 (PopPdcCompleteResiliencyCallback.c)
 */

char __fastcall PopDirectedDripsNotifyResiliencyCompletionWorker(__int64 a1)
{
  unsigned __int64 v1; // rsi
  unsigned int v3; // ebp
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v6; // r14
  unsigned int v7; // r8d
  __int64 v8; // rdi
  bool v9; // zf
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // ecx
  __int64 v13; // rdx
  $C774EFD68449142D8271B1EC1EB7FB26 *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  _DWORD *v18; // r9
  int v20; // [rsp+68h] [rbp+10h] BYREF

  v1 = a1 + 136;
  v3 = 0;
  ExAcquirePushLockExclusiveEx(a1 + 136, 0LL);
  if ( *(_BYTE *)(a1 + 152) )
  {
    v3 = *(_DWORD *)(a1 + 148);
    *(_DWORD *)(a1 + 148) = 0;
    *(_BYTE *)(a1 + 152) = 0;
  }
  _InterlockedExchange((volatile __int32 *)(a1 + 192), 0);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v1);
  v20 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v1) == 1 )
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
      goto LABEL_15;
    v8 = (__int64)&CurrentThread->LockEntries[v10];
    v7 &= ~(1 << v10);
    if ( (*(_BYTE *)(v8 + 26) & 1) != 0
      && (*(_DWORD *)(v8 + 32) & 1) == 0
      && (*(_QWORD *)(v8 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v1 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v8 + 40) == SessionId )
    {
      *(_BYTE *)(v8 + 26) &= ~1u;
      if ( *(_QWORD *)(v8 + 32) )
        break;
    }
  }
  if ( !v8 )
  {
LABEL_15:
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v1, SessionId, 0LL);
    goto LABEL_22;
  }
  *(_BYTE *)(v8 + 32) |= 2u;
  if ( *(__int64 *)(v8 + 32) < 0 )
    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v8);
  v11 = *(_DWORD *)(v8 + 88) & 0x1FFFF;
  v12 = *(_DWORD *)(v8 + 88) & 0xFFFE0000;
  *(_BYTE *)(v8 + 25) &= ~1u;
  v20 = v11;
  *(_DWORD *)(v8 + 88) = v12;
  *(_QWORD *)(v8 + 32) = 0LL;
  v13 = (signed __int64)(v8 - (unsigned __int64)CurrentThread->LockEntries) / 96;
  if ( v6 == 1 )
    CurrentThread->AbEntrySummary |= 1 << v13;
  else
    _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v13);
LABEL_22:
  --CurrentThread->AbAllocationRegionCount;
  LOBYTE(v14) = KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v1, &v20);
  v9 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v9 )
  {
    v14 = &CurrentThread->152;
    if ( ($C774EFD68449142D8271B1EC1EB7FB26 *)v14->ApcState.ApcListHead[0].Flink != v14 )
      LOBYTE(v14) = KiCheckForKernelApcDelivery(v16, v15, v17, v18);
  }
  if ( v3 )
    LOBYTE(v14) = PopPdcCompleteResiliencyCallback(v16, v3);
  return (char)v14;
}
