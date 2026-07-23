/*
 * XREFs of CcBoostLowPriorityWorkerThread @ 0x1402D0704
 * Callers:
 *     CcFlushCachePriv @ 0x14022C120 (CcFlushCachePriv.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x14027BB40 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 * Callees:
 *     PsGetIoPriorityThread @ 0x140226200 (PsGetIoPriorityThread.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     PsBoostThreadIoEx @ 0x140263860 (PsBoostThreadIoEx.c)
 *     CcUpdateSharedCacheMapFlag @ 0x1402D036C (CcUpdateSharedCacheMapFlag.c)
 *     IoBoostThreadIoPriority @ 0x1402E33DC (IoBoostThreadIoPriority.c)
 *     KeSetPriorityThread @ 0x1403310D0 (KeSetPriorityThread.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

_QWORD *__fastcall CcBoostLowPriorityWorkerThread(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rsi
  char v5; // al
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v8; // bp
  unsigned int v9; // r8d
  bool v10; // zf
  __int64 v11; // rcx
  __int64 v12; // rdi
  int v13; // eax
  unsigned int v14; // ecx
  __int64 v15; // rdx
  _QWORD *result; // rax
  __int64 v17; // rcx
  __int64 v18; // r10
  __int64 v19; // rax
  int v20; // [rsp+60h] [rbp+18h] BYREF

  if ( a2 && !*(_DWORD *)(a2 + 4) )
    KeBugCheckEx(0x34u, 0x517uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v4 = a1 + 952;
  ExAcquirePushLockExclusiveEx(a1 + 952, 0LL);
  if ( *(_QWORD *)(a1 + 928)
    && (int)PsGetIoPriorityThread((__int64)KeGetCurrentThread()) > 0
    && (!a2 || a2 == *(_QWORD *)(a1 + 936)) )
  {
    IoBoostThreadIoPriority(v18, 2LL, 0LL);
    *(_DWORD *)(a1 + 944) = KeSetPriorityThread(*(PKTHREAD *)(a1 + 928), 13);
    v19 = *(_QWORD *)(a1 + 936);
    if ( !*(_DWORD *)(v19 + 4) )
      KeBugCheckEx(0x34u, 0x544uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( (*(_DWORD *)(v19 + 152) & 0x20000000) == 0 )
    {
      PsBoostThreadIoEx(*(_QWORD *)(a1 + 928), 0, 0, 0LL);
      CcUpdateSharedCacheMapFlag(*(_QWORD *)(a1 + 936), 0x20000000, 1);
    }
  }
  v5 = _InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v5 & 2) != 0 && (v5 & 4) == 0 )
    ExfTryToWakePushLock(v4);
  v20 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v4) == 1 )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
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
          v13 = *(_DWORD *)(v12 + 88) & 0x1FFFF;
          v14 = *(_DWORD *)(v12 + 88) & 0xFFFE0000;
          *(_BYTE *)(v12 + 25) &= ~1u;
          v20 = v13;
          *(_DWORD *)(v12 + 88) = v14;
          *(_QWORD *)(v12 + 32) = 0LL;
          v15 = (signed __int64)(v12 - (unsigned __int64)CurrentThread->LockEntries) / 96;
          if ( v8 == 1 )
            CurrentThread->AbEntrySummary |= 1 << v15;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v15);
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
  result = (_QWORD *)KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v4, &v20);
  v10 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v10 )
  {
    result = &CurrentThread->152;
    if ( (_QWORD *)*result != result )
      return (_QWORD *)KiCheckForKernelApcDelivery(v17);
  }
  return result;
}
