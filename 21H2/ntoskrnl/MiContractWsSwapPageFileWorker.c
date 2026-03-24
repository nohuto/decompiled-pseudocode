/*
 * XREFs of MiContractWsSwapPageFileWorker @ 0x14055C4B0
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     PsDereferencePartition @ 0x1402ABFDC (PsDereferencePartition.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     MiWsSwapPageFileNumber @ 0x14035C3AC (MiWsSwapPageFileNumber.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     memset @ 0x140414200 (memset.c)
 *     MiQueuePageFileExtension @ 0x140543DFC (MiQueuePageFileExtension.c)
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
  _DWORD *v10; // r9
  unsigned int v11; // edx
  bool v12; // zf
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD v17[18]; // [rsp+30h] [rbp-39h] BYREF
  int v18; // [rsp+D8h] [rbp+6Fh] BYREF

  v2 = MiWsSwapPageFileNumber(a1);
  CurrentThread = KeGetCurrentThread();
  v5 = *(_QWORD *)(v4 + 8LL * v2 + 6944);
  memset(v17, 0, 0x58uLL);
  v17[3] = a1;
  v17[4] = -1LL;
  v6 = *(_BYTE *)(v5 + 204) & 0xF;
  v17[5] = 0x10000LL;
  BYTE4(v17[9]) = v6;
  v17[8] = &v17[7];
  v17[7] = &v17[7];
  LOWORD(v17[6]) = 0;
  BYTE2(v17[6]) = 6;
  HIDWORD(v17[6]) = 0;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 1128, 0LL);
  MiQueuePageFileExtension((__int64)v17, 1, 0x11u);
  KeWaitForSingleObject(&v17[6], Executive, 0, 0, 0LL);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1128), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 1128);
  v18 = 0;
  v7 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(a1 + 1128) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v7->ApcState.Process);
  else
    SessionId = -1;
  --v7->SpecialApcDisable;
  v9 = ++v7->AbAllocationRegionCount;
  v10 = (_DWORD *)((a1 + 1128) & 0x7FFFFFFFFFFFFFFCLL);
  v11 = ((char)v7->AbEntrySummary | (char)v7->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v12 = !_BitScanReverse((unsigned int *)&v13, v11);
    if ( v12 )
      break;
    v14 = (__int64)&v7->LockEntries[v13];
    v11 &= ~(1 << v13);
    if ( (*(_BYTE *)(v14 + 26) & 1) != 0
      && (*(_DWORD *)(v14 + 32) & 1) == 0
      && (_DWORD *)(*(_QWORD *)(v14 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v10
      && *(_DWORD *)(v14 + 40) == SessionId )
    {
      *(_BYTE *)(v14 + 26) &= ~1u;
      if ( *(_QWORD *)(v14 + 32) )
      {
        if ( v14 )
        {
          *(_BYTE *)(v14 + 32) |= 2u;
          if ( *(__int64 *)(v14 + 32) < 0 )
            KiAbEntryRemoveFromTree(v14);
          v18 = *(_DWORD *)(v14 + 88) & 0x1FFFF;
          *(_DWORD *)(v14 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v14 + 25) &= ~1u;
          *(_QWORD *)(v14 + 32) = 0LL;
          v15 = (signed __int64)(v14 - (unsigned __int64)v7->LockEntries) / 96;
          if ( v9 == 1 )
            v7->AbEntrySummary |= 1 << v15;
          else
            _InterlockedOr8((volatile signed __int8 *)&v7->AbOrphanedEntrySummary, 1 << v15);
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
  KiAbThreadRemoveBoosts((ULONG_PTR)v7, a1 + 1128, (__int64)&v18, v10);
  v12 = v7->SpecialApcDisable++ == -1;
  if ( v12 && ($C459BD0D405E8E46662177FB3D0A143F *)v7->ApcState.ApcListHead[0].Flink != &v7->152 )
    KiCheckForKernelApcDelivery(v16);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  _InterlockedExchange((volatile __int32 *)(a1 + 1120), 0);
  PsDereferencePartition(*(_QWORD *)(a1 + 176));
}
