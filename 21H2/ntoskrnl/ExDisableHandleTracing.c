/*
 * XREFs of ExDisableHandleTracing @ 0x1405B2BC8
 * Callers:
 *     PsSetProcessHandleTracingInformation @ 0x140907AD8 (PsSetProcessHandleTracingInformation.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     ExDereferenceHandleDebugInfo @ 0x14094C824 (ExDereferenceHandleDebugInfo.c)
 */

_QWORD *__fastcall ExDisableHandleTracing(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 v3; // rsi
  __int64 v4; // r14
  struct _KTHREAD *v5; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v7; // r12
  unsigned int v8; // r8d
  __int64 v9; // rdi
  bool v10; // zf
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *result; // rax
  int v17; // [rsp+68h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = a1 + 56;
  ExAcquirePushLockExclusiveEx(a1 + 56, 0LL);
  v4 = *(_QWORD *)(a1 + 96);
  *(_QWORD *)(a1 + 96) = 0LL;
  if ( v4 && (*(_DWORD *)(v4 + 8) & 8) == 0 )
    *(_BYTE *)(a1 + 44) &= ~2u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  v17 = 0;
  v5 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v3) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v5->ApcState.Process);
  else
    SessionId = -1;
  --v5->SpecialApcDisable;
  v7 = ++v5->AbAllocationRegionCount;
  v8 = ((char)v5->AbEntrySummary | (char)v5->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v10 = !_BitScanReverse((unsigned int *)&v11, v8);
    if ( v10 )
      goto LABEL_16;
    v9 = (__int64)&v5->LockEntries[v11];
    v8 &= ~(1 << v11);
    if ( (*(_BYTE *)(v9 + 26) & 1) != 0
      && (*(_DWORD *)(v9 + 32) & 1) == 0
      && (*(_QWORD *)(v9 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v3 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v9 + 40) == SessionId )
    {
      *(_BYTE *)(v9 + 26) &= ~1u;
      if ( *(_QWORD *)(v9 + 32) )
        break;
    }
  }
  if ( !v9 )
  {
LABEL_16:
    if ( (*((_DWORD *)&v5->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v5, v3, SessionId, 0LL);
    goto LABEL_23;
  }
  *(_BYTE *)(v9 + 32) |= 2u;
  if ( *(__int64 *)(v9 + 32) < 0 )
    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v9);
  v17 = *(_DWORD *)(v9 + 88) & 0x1FFFF;
  *(_DWORD *)(v9 + 88) &= 0xFFFE0000;
  *(_BYTE *)(v9 + 25) &= ~1u;
  *(_QWORD *)(v9 + 32) = 0LL;
  v12 = (signed __int64)(v9 - (unsigned __int64)v5->LockEntries) / 96;
  if ( v7 == 1 )
    v5->AbEntrySummary |= 1 << v12;
  else
    _InterlockedOr8((volatile signed __int8 *)&v5->AbOrphanedEntrySummary, 1 << v12);
LABEL_23:
  --v5->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v5, v3, (unsigned int *)&v17);
  v10 = v5->SpecialApcDisable++ == -1;
  if ( v10 && ($C459BD0D405E8E46662177FB3D0A143F *)v5->ApcState.ApcListHead[0].Flink != &v5->152 )
    KiCheckForKernelApcDelivery();
  result = KeLeaveCriticalRegionThread((__int64)CurrentThread, v13, v14, v15);
  if ( v4 )
    return (_QWORD *)ExDereferenceHandleDebugInfo(a1, v4);
  return result;
}
