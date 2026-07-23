/*
 * XREFs of CcBoostLowPriorityWorkerThread @ 0x14024ECCC
 * Callers:
 *     CcFlushCachePriv @ 0x1402D13F0 (CcFlushCachePriv.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x140341080 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     KeSetPriorityThread @ 0x140279050 (KeSetPriorityThread.c)
 *     PsGetIoPriorityThread @ 0x1402E7060 (PsGetIoPriorityThread.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     CcUpdateSharedCacheMapFlag @ 0x1402F90C0 (CcUpdateSharedCacheMapFlag.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     PsBoostThreadIoEx @ 0x140358550 (PsBoostThreadIoEx.c)
 *     IoBoostThreadIoPriority @ 0x140363380 (IoBoostThreadIoPriority.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

$C459BD0D405E8E46662177FB3D0A143F *__fastcall CcBoostLowPriorityWorkerThread(__int64 a1, __int64 a2)
{
  ULONG_PTR v4; // rsi
  char v5; // al
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v8; // bp
  unsigned int v9; // r8d
  bool v10; // zf
  __int64 v11; // rcx
  __int64 v12; // rdi
  unsigned int v13; // ecx
  __int64 v14; // rdx
  $C459BD0D405E8E46662177FB3D0A143F *result; // rax
  __int64 v16; // r10
  __int64 v17; // rax
  __int64 v18; // r8

  if ( a2 && !*(_DWORD *)(a2 + 4) )
    KeBugCheckEx(0x34u, 0x518uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v4 = a1 + 952;
  ExAcquirePushLockExclusiveEx(a1 + 952, 0LL);
  if ( *(_QWORD *)(a1 + 928)
    && (int)PsGetIoPriorityThread(KeGetCurrentThread()) > 0
    && (!a2 || a2 == *(_QWORD *)(a1 + 936)) )
  {
    IoBoostThreadIoPriority(v16, 2LL);
    *(_DWORD *)(a1 + 944) = KeSetPriorityThread(*(PKTHREAD *)(a1 + 928), 13);
    v17 = *(_QWORD *)(a1 + 936);
    if ( !*(_DWORD *)(v17 + 4) )
      KeBugCheckEx(0x34u, 0x545uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( (*(_DWORD *)(v17 + 152) & 0x20000000) == 0 )
    {
      PsBoostThreadIoEx(*(_QWORD *)(a1 + 928), 0LL, 0LL, 0LL);
      LOBYTE(v18) = 1;
      CcUpdateSharedCacheMapFlag(*(_QWORD *)(a1 + 936), 0x20000000LL, v18);
    }
  }
  v5 = _InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v5 & 2) != 0 && (v5 & 4) == 0 )
    ExfTryToWakePushLock(v4);
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v4) == 1 )
    SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  --CurrentThread->SpecialApcDisable;
  v8 = ++CurrentThread->AbAllocationRegionCount;
  v9 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v10 = !_BitScanReverse((unsigned int *)&v11, v9);
    if ( v10 )
      break;
    v12 = (__int64)&CurrentThread->LockEntries[v11];
    v9 &= ~(1 << v11);
    if ( (*(_BYTE *)(v12 + 26) & 1) != 0
      && (*(_DWORD *)(v12 + 32) & 1) == 0
      && (*(_QWORD *)(v12 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v4 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v12 + 40) == SessionId )
    {
      *(_BYTE *)(v12 + 26) &= ~1u;
      if ( *(_QWORD *)(v12 + 32) )
      {
        if ( v12 )
        {
          *(_BYTE *)(v12 + 32) |= 2u;
          if ( *(__int64 *)(v12 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v12);
          v13 = *(_DWORD *)(v12 + 88) & 0xFFFE0000;
          *(_BYTE *)(v12 + 25) &= ~1u;
          *(_DWORD *)(v12 + 88) = v13;
          *(_QWORD *)(v12 + 32) = 0LL;
          v14 = (signed __int64)(v12 - (unsigned __int64)CurrentThread->LockEntries) / 96;
          if ( v8 == 1 )
            CurrentThread->AbEntrySummary |= 1 << v14;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v14);
          goto LABEL_19;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v4, SessionId, 0LL);
LABEL_19:
  --CurrentThread->AbAllocationRegionCount;
  result = ($C459BD0D405E8E46662177FB3D0A143F *)KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
  v10 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v10 )
  {
    result = &CurrentThread->152;
    if ( ($C459BD0D405E8E46662177FB3D0A143F *)result->ApcState.ApcListHead[0].Flink != result )
      return ($C459BD0D405E8E46662177FB3D0A143F *)KiCheckForKernelApcDelivery();
  }
  return result;
}
