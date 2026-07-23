/*
 * XREFs of MiContractWsSwapPageFileWorker @ 0x1405569C0
 * Callers:
 *     <none>
 * Callees:
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     MiWsSwapPageFileNumber @ 0x1402CCF98 (MiWsSwapPageFileNumber.c)
 *     PsDereferencePartition @ 0x1402D4730 (PsDereferencePartition.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiQueuePageFileExtension @ 0x14053E2DC (MiQueuePageFileExtension.c)
 */

void __fastcall MiContractWsSwapPageFileWorker(__int64 a1)
{
  unsigned int v2; // eax
  struct _KTHREAD *CurrentThread; // r12
  __int64 v4; // rcx
  __int64 v5; // rbx
  char v6; // al
  struct _KTHREAD *v7; // rbx
  unsigned int SessionId; // r8d
  unsigned __int8 v9; // r13
  unsigned int v10; // edx
  bool v11; // zf
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  _DWORD *v18; // r9
  _QWORD v19[18]; // [rsp+30h] [rbp-39h] BYREF
  int v20; // [rsp+D8h] [rbp+6Fh] BYREF

  v2 = MiWsSwapPageFileNumber(a1);
  CurrentThread = KeGetCurrentThread();
  v5 = *(_QWORD *)(v4 + 8LL * v2 + 6944);
  memset(v19, 0, 0x58uLL);
  v19[3] = a1;
  v19[4] = -1LL;
  v6 = *(_BYTE *)(v5 + 204) & 0xF;
  v19[5] = 0x10000LL;
  BYTE4(v19[9]) = v6;
  v19[8] = &v19[7];
  v19[7] = &v19[7];
  LOWORD(v19[6]) = 0;
  BYTE2(v19[6]) = 6;
  HIDWORD(v19[6]) = 0;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 1128, 0LL);
  MiQueuePageFileExtension((__int64)v19, 1, 0x11u);
  KeWaitForSingleObject(&v19[6], Executive, 0, 0, 0LL);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1128), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 1128);
  v20 = 0;
  v7 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(a1 + 1128) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v7->ApcState.Process);
  else
    SessionId = -1;
  --v7->SpecialApcDisable;
  v9 = ++v7->AbAllocationRegionCount;
  v10 = ((char)v7->AbEntrySummary | (char)v7->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v11 = !_BitScanReverse((unsigned int *)&v12, v10);
    if ( v11 )
      break;
    v13 = (__int64)&v7->LockEntries[v12];
    v10 &= ~(1 << v12);
    if ( (*(_BYTE *)(v13 + 26) & 1) != 0
      && (*(_DWORD *)(v13 + 32) & 1) == 0
      && (*(_QWORD *)(v13 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((a1 + 1128) & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v13 + 40) == SessionId )
    {
      *(_BYTE *)(v13 + 26) &= ~1u;
      if ( *(_QWORD *)(v13 + 32) )
      {
        if ( v13 )
        {
          *(_BYTE *)(v13 + 32) |= 2u;
          if ( *(__int64 *)(v13 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v13);
          v20 = *(_DWORD *)(v13 + 88) & 0x1FFFF;
          *(_DWORD *)(v13 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v13 + 25) &= ~1u;
          *(_QWORD *)(v13 + 32) = 0LL;
          v14 = (signed __int64)(v13 - (unsigned __int64)v7->LockEntries) / 96;
          if ( v9 == 1 )
            v7->AbEntrySummary |= 1 << v14;
          else
            _InterlockedOr8((volatile signed __int8 *)&v7->AbOrphanedEntrySummary, 1 << v14);
          goto LABEL_19;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v7->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v7, a1 + 1128, SessionId, 0LL);
LABEL_19:
  --v7->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v7, a1 + 1128, &v20);
  v11 = v7->SpecialApcDisable++ == -1;
  if ( v11 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v7->ApcState.ApcListHead[0].Flink != &v7->152 )
    KiCheckForKernelApcDelivery(v16, v15, v17, v18);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v15, v17, (__int64)v18);
  _InterlockedExchange((volatile __int32 *)(a1 + 1120), 0);
  PsDereferencePartition(*(_QWORD *)(a1 + 176));
}
