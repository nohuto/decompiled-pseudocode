/*
 * XREFs of PopDirectedDripsNotifyResiliencyCompletionWorker @ 0x140568920
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
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     PopPdcCompleteResiliencyCallback @ 0x1408EFE00 (PopPdcCompleteResiliencyCallback.c)
 */

char __fastcall PopDirectedDripsNotifyResiliencyCompletionWorker(__int64 a1)
{
  unsigned __int64 v1; // rsi
  unsigned int v3; // ebp
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v6; // r14
  _DWORD *v7; // r9
  unsigned int v8; // r8d
  __int64 v9; // rdi
  bool v10; // zf
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // rdx
  $C459BD0D405E8E46662177FB3D0A143F *v15; // rax
  __int64 v16; // rcx
  int v18; // [rsp+68h] [rbp+10h] BYREF

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
  v18 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v1) == 1 )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  --CurrentThread->SpecialApcDisable;
  v6 = ++CurrentThread->AbAllocationRegionCount;
  v7 = (_DWORD *)(v1 & 0x7FFFFFFFFFFFFFFCLL);
  v8 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v10 = !_BitScanReverse((unsigned int *)&v11, v8);
    if ( v10 )
      goto LABEL_15;
    v9 = (__int64)&CurrentThread->LockEntries[v11];
    v8 &= ~(1 << v11);
    if ( (*(_BYTE *)(v9 + 26) & 1) != 0
      && (*(_DWORD *)(v9 + 32) & 1) == 0
      && (_DWORD *)(*(_QWORD *)(v9 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v7
      && *(_DWORD *)(v9 + 40) == SessionId )
    {
      *(_BYTE *)(v9 + 26) &= ~1u;
      if ( *(_QWORD *)(v9 + 32) )
        break;
    }
  }
  if ( !v9 )
  {
LABEL_15:
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v1, SessionId, 0LL);
    goto LABEL_22;
  }
  *(_BYTE *)(v9 + 32) |= 2u;
  if ( *(__int64 *)(v9 + 32) < 0 )
    KiAbEntryRemoveFromTree(v9);
  v12 = *(_DWORD *)(v9 + 88) & 0x1FFFF;
  v13 = *(_DWORD *)(v9 + 88) & 0xFFFE0000;
  *(_BYTE *)(v9 + 25) &= ~1u;
  v18 = v12;
  *(_DWORD *)(v9 + 88) = v13;
  *(_QWORD *)(v9 + 32) = 0LL;
  v14 = (signed __int64)(v9 - (unsigned __int64)CurrentThread->LockEntries) / 96;
  if ( v6 == 1 )
    CurrentThread->AbEntrySummary |= 1 << v14;
  else
    _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v14);
LABEL_22:
  --CurrentThread->AbAllocationRegionCount;
  LOBYTE(v15) = KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v1, (__int64)&v18, v7);
  v10 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v10 )
  {
    v15 = &CurrentThread->152;
    if ( ($C459BD0D405E8E46662177FB3D0A143F *)v15->ApcState.ApcListHead[0].Flink != v15 )
      LOBYTE(v15) = KiCheckForKernelApcDelivery(v16);
  }
  if ( v3 )
    LOBYTE(v15) = PopPdcCompleteResiliencyCallback(v16, v3);
  return (char)v15;
}
