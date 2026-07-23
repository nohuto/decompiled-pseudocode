/*
 * XREFs of MiContractWsSwapPageFileWorker @ 0x14055A9E0
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     PsDereferencePartition @ 0x140263688 (PsDereferencePartition.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1402F05E0 (KiAbEntryRemoveFromTree.c)
 *     MiWsSwapPageFileNumber @ 0x14033A0F4 (MiWsSwapPageFileNumber.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     memset @ 0x140411300 (memset.c)
 *     MiQueuePageFileExtension @ 0x1405422FC (MiQueuePageFileExtension.c)
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
  __int64 v15; // rcx
  _QWORD v16[18]; // [rsp+30h] [rbp-39h] BYREF
  int v17; // [rsp+D8h] [rbp+6Fh] BYREF

  v2 = MiWsSwapPageFileNumber(a1);
  CurrentThread = KeGetCurrentThread();
  v5 = *(_QWORD *)(v4 + 8LL * v2 + 6944);
  memset(v16, 0, 0x58uLL);
  v16[3] = a1;
  v16[4] = -1LL;
  v6 = *(_BYTE *)(v5 + 204) & 0xF;
  v16[5] = 0x10000LL;
  BYTE4(v16[9]) = v6;
  v16[8] = &v16[7];
  v16[7] = &v16[7];
  LOWORD(v16[6]) = 0;
  BYTE2(v16[6]) = 6;
  HIDWORD(v16[6]) = 0;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 1128, 0LL);
  MiQueuePageFileExtension((__int64)v16, 1, 0x11u);
  KeWaitForSingleObject(&v16[6], Executive, 0, 0, 0LL);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1128), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1128));
  v17 = 0;
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
          v17 = *(_DWORD *)(v13 + 88) & 0x1FFFF;
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
  KiAbThreadRemoveBoosts((ULONG_PTR)v7, a1 + 1128, &v17);
  v11 = v7->SpecialApcDisable++ == -1;
  if ( v11 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v7->ApcState.ApcListHead[0].Flink != &v7->152 )
    KiCheckForKernelApcDelivery(v15);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  _InterlockedExchange((volatile __int32 *)(a1 + 1120), 0);
  PsDereferencePartition(*(_QWORD *)(a1 + 176));
}
