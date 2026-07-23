/*
 * XREFs of MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x1402A3FD4
 * Callers:
 *     MiRelocateImage @ 0x1406AC790 (MiRelocateImage.c)
 *     MiRelocateImageAgain @ 0x1406C290C (MiRelocateImageAgain.c)
 *     MiCaptureSecureImageBaseAddress @ 0x1408D7CC0 (MiCaptureSecureImageBaseAddress.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall MI_UNLOCK_RELOCATIONS_EXCLUSIVE(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v6; // r14
  unsigned int v7; // r8d
  bool v8; // zf
  __int64 v9; // rcx
  __int64 v10; // rdi
  unsigned int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9

  v2 = a2 + 24;
  *(_QWORD *)(a2 + 8) = a1 | 1;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a2 + 24);
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v2) == 1 )
    SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
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
          v11 = *(_DWORD *)(v10 + 88) & 0xFFFE0000;
          *(_BYTE *)(v10 + 25) &= ~1u;
          *(_DWORD *)(v10 + 88) = v11;
          *(_QWORD *)(v10 + 32) = 0LL;
          v12 = (signed __int64)(v10 - (unsigned __int64)CurrentThread->LockEntries) / 96;
          if ( v6 == 1 )
            CurrentThread->AbEntrySummary |= 1 << v12;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v12);
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
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
  v8 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v8 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v14, v13, v15, v16);
  return KiLeaveGuardedRegionUnsafe(a1);
}
