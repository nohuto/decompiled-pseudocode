/*
 * XREFs of ExQueryHandleExceptionsPermanency @ 0x14037E020
 * Callers:
 *     NtQueryInformationProcess @ 0x1405DBB20 (NtQueryInformationProcess.c)
 *     NtClose @ 0x14062C900 (NtClose.c)
 *     ObpCloseHandle @ 0x140637590 (ObpCloseHandle.c)
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
 */

_QWORD *__fastcall ExQueryHandleExceptionsPermanency(__int64 a1, _BYTE *a2, _BYTE *a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 v7; // rsi
  __int64 v8; // rax
  struct _KTHREAD *v9; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v11; // r14
  unsigned int v12; // r8d
  bool v13; // zf
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  _DWORD *v20; // r9
  int v22; // [rsp+78h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = a1 + 56;
  ExAcquirePushLockExclusiveEx(a1 + 56, 0LL);
  v8 = *(_QWORD *)(a1 + 96);
  if ( v8 )
  {
    *a2 = 1;
    LOBYTE(v8) = (*(_DWORD *)(v8 + 8) & 8) != 0;
  }
  else if ( (*(_BYTE *)(a1 + 44) & 2) != 0 )
  {
    *a2 = 1;
    LOBYTE(v8) = 1;
  }
  else
  {
    *a2 = 0;
  }
  *a3 = v8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v7);
  v22 = 0;
  v9 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v7) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v9->ApcState.Process);
  else
    SessionId = -1;
  --v9->SpecialApcDisable;
  v11 = ++v9->AbAllocationRegionCount;
  v12 = ((char)v9->AbEntrySummary | (char)v9->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v13 = !_BitScanReverse((unsigned int *)&v14, v12);
    if ( v13 )
      break;
    v15 = (__int64)&v9->LockEntries[v14];
    v12 &= ~(1 << v14);
    if ( (*(_BYTE *)(v15 + 26) & 1) != 0
      && (*(_DWORD *)(v15 + 32) & 1) == 0
      && (*(_QWORD *)(v15 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v7 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v15 + 40) == SessionId )
    {
      *(_BYTE *)(v15 + 26) &= ~1u;
      if ( *(_QWORD *)(v15 + 32) )
      {
        if ( v15 )
        {
          *(_BYTE *)(v15 + 32) |= 2u;
          if ( *(__int64 *)(v15 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v15);
          v22 = *(_DWORD *)(v15 + 88) & 0x1FFFF;
          *(_DWORD *)(v15 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v15 + 25) &= ~1u;
          *(_QWORD *)(v15 + 32) = 0LL;
          v16 = (signed __int64)(v15 - (unsigned __int64)v9->LockEntries) / 96;
          if ( v11 == 1 )
            v9->AbEntrySummary |= 1 << v16;
          else
            _InterlockedOr8((volatile signed __int8 *)&v9->AbOrphanedEntrySummary, 1 << v16);
          goto LABEL_20;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v9->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v9, v7, SessionId, 0LL);
LABEL_20:
  --v9->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v9, v7, &v22);
  v13 = v9->SpecialApcDisable++ == -1;
  if ( v13 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v9->ApcState.ApcListHead[0].Flink != &v9->152 )
    KiCheckForKernelApcDelivery(v18, v17, v19, v20);
  return KeLeaveCriticalRegionThread((__int64)CurrentThread, v17, v19, (__int64)v20);
}
