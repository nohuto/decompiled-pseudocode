/*
 * XREFs of UNLOCK_ADDRESS_SPACE @ 0x1402304A4
 * Callers:
 *     MiDeleteFinalPageTables @ 0x14026314C (MiDeleteFinalPageTables.c)
 *     MiBeginProcessClean @ 0x14033B300 (MiBeginProcessClean.c)
 *     MiDeleteEmptyPageTables @ 0x1403F3750 (MiDeleteEmptyPageTables.c)
 *     MiReleaseCommitForResetPages @ 0x14052AA54 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x14052AC08 (MiReleaseOutSwappedProcessCommit.c)
 *     MiCopyOnWriteCheckConditions @ 0x14055A428 (MiCopyOnWriteCheckConditions.c)
 *     MiMapViewOfDataSection @ 0x140622CE0 (MiMapViewOfDataSection.c)
 *     MmCleanProcessAddressSpace @ 0x1406242E8 (MmCleanProcessAddressSpace.c)
 *     MmFreeVirtualMemory @ 0x140624BF0 (MmFreeVirtualMemory.c)
 *     MiReserveUserMemory @ 0x140625E30 (MiReserveUserMemory.c)
 *     MiPrepareVadDelete @ 0x14062649C (MiPrepareVadDelete.c)
 *     MiMapViewOfImageSection @ 0x140626CE0 (MiMapViewOfImageSection.c)
 *     MiUnlockVadRange @ 0x14062DF70 (MiUnlockVadRange.c)
 *     MiFindNextEnclaveBoundary @ 0x14067A340 (MiFindNextEnclaveBoundary.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x140686200 (MiAllocateFromSubAllocatedRegion.c)
 *     MiInitializeVadBitMap @ 0x1406EED74 (MiInitializeVadBitMap.c)
 *     MiMapLockedPagesInUserSpace @ 0x140767510 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x1407BE808 (MiMapViewOfPhysicalSection.c)
 *     MiAllocateEnclaveVad @ 0x1408D4698 (MiAllocateEnclaveVad.c)
 *     MiResizeAweBitMap @ 0x1408D8D24 (MiResizeAweBitMap.c)
 *     NtFreeUserPhysicalPages @ 0x1408D9040 (NtFreeUserPhysicalPages.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1402F05E0 (KiAbEntryRemoveFromTree.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

_QWORD *__fastcall UNLOCK_ADDRESS_SPACE(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v6; // r14
  unsigned int v7; // r8d
  bool v8; // zf
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rdx
  _QWORD *result; // rax
  int v13; // [rsp+68h] [rbp+10h] BYREF

  *(_BYTE *)(a1 + 1304) &= ~1u;
  v2 = a2 + 1224;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 1224), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a2 + 1224);
  v13 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v2) == 1 )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  --CurrentThread->SpecialApcDisable;
  v6 = ++CurrentThread->AbAllocationRegionCount;
  v7 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v8 = !_BitScanReverse((unsigned int *)&v9, v7);
    if ( v8 )
      break;
    v10 = (__int64)&CurrentThread->LockEntries[v9];
    v7 &= ~(1 << v9);
    if ( (*(_BYTE *)(v10 + 26) & 1) != 0
      && (*(_DWORD *)(v10 + 32) & 1) == 0
      && (*(_QWORD *)(v10 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v2 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v10 + 40) == SessionId )
    {
      *(_BYTE *)(v10 + 26) &= ~1u;
      if ( *(_QWORD *)(v10 + 32) )
      {
        if ( v10 )
        {
          *(_BYTE *)(v10 + 32) |= 2u;
          if ( *(__int64 *)(v10 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v10);
          v13 = *(_DWORD *)(v10 + 88) & 0x1FFFF;
          *(_DWORD *)(v10 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v10 + 25) &= ~1u;
          *(_QWORD *)(v10 + 32) = 0LL;
          v11 = (signed __int64)(v10 - (unsigned __int64)CurrentThread->LockEntries) / 96;
          if ( v6 == 1 )
            CurrentThread->AbEntrySummary |= 1 << v11;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v11);
          goto LABEL_17;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v2, SessionId, 0LL);
LABEL_17:
  --CurrentThread->AbAllocationRegionCount;
  result = (_QWORD *)KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v2, &v13);
  v8 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v8 )
  {
    result = &CurrentThread->152;
    if ( (_QWORD *)*result != result )
      result = (_QWORD *)KiCheckForKernelApcDelivery();
  }
  v8 = (*(_WORD *)(a1 + 486))++ == 0xFFFF;
  if ( v8 )
  {
    result = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*result != result )
      return (_QWORD *)KiCheckForKernelApcDelivery();
  }
  return result;
}
