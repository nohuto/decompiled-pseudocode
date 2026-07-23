/*
 * XREFs of ExDisableHandleTracing @ 0x1405ACD18
 * Callers:
 *     PsSetProcessHandleTracingInformation @ 0x1409032C8 (PsSetProcessHandleTracingInformation.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     ExDereferenceHandleDebugInfo @ 0x140947D24 (ExDereferenceHandleDebugInfo.c)
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
  __int64 v14; // rcx
  __int64 v15; // r8
  _DWORD *v16; // r9
  _QWORD *result; // rax
  int v18; // [rsp+68h] [rbp+10h] BYREF

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
  v18 = 0;
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
  v18 = *(_DWORD *)(v9 + 88) & 0x1FFFF;
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
  KiAbThreadRemoveBoosts((ULONG_PTR)v5, v3, &v18);
  v10 = v5->SpecialApcDisable++ == -1;
  if ( v10 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v5->ApcState.ApcListHead[0].Flink != &v5->152 )
    KiCheckForKernelApcDelivery(v14, v13, v15, v16);
  result = KeLeaveCriticalRegionThread((__int64)CurrentThread, v13, v15, (__int64)v16);
  if ( v4 )
    return (_QWORD *)ExDereferenceHandleDebugInfo(a1, v4);
  return result;
}
