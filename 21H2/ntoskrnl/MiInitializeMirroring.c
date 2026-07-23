/*
 * XREFs of MiInitializeMirroring @ 0x140A55728
 * Callers:
 *     MiInitSystem @ 0x140A54E5C (MiInitSystem.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MiReservePtes @ 0x1402CAEB0 (MiReservePtes.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     MiSizeMemoryListLocks @ 0x140622B08 (MiSizeMemoryListLocks.c)
 *     MiUpdateMirrorBitmaps @ 0x1407777B4 (MiUpdateMirrorBitmaps.c)
 *     MiInitializeDynamicBitmap @ 0x140786A9C (MiInitializeDynamicBitmap.c)
 */

__int64 MiInitializeMirroring()
{
  SIZE_T v0; // rax
  PVOID Pool; // rax
  __int64 v2; // r8
  unsigned __int64 v3; // r9
  __int64 *v4; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v6; // ebx
  ULONG_PTR v7; // rax
  struct _KTHREAD *v9; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v11; // bp
  unsigned int v12; // r8d
  bool v13; // zf
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int128 v17; // [rsp+30h] [rbp-38h] BYREF
  int v18; // [rsp+78h] [rbp+10h] BYREF

  *((_QWORD *)&v17 + 1) = 0LL;
  stru_140C4E728.List.Flink = 0LL;
  stru_140C4E710.Header.WaitListHead.Blink = &stru_140C4E710.Header.WaitListHead;
  stru_140C4E710.Header.WaitListHead.Flink = &stru_140C4E710.Header.WaitListHead;
  stru_140C4E728.WorkerRoutine = (void (__fastcall *)(void *))MiFinishResume;
  LOWORD(stru_140C4E710.Header.Lock) = 1;
  stru_140C4E710.Header.Size = 6;
  stru_140C4E710.Header.SignalState = 1;
  stru_140C4E728.Parameter = (void *)-1LL;
  v0 = MiSizeMemoryListLocks();
  Pool = MiAllocatePool(64, v0, 0x614C6D4Du);
  if ( Pool )
  {
    qword_140C52168 = (__int64)Pool;
    v4 = qword_140C4E750;
    CurrentThread = KeGetCurrentThread();
    v6 = 0;
    while ( 1 )
    {
      v7 = MiReservePtes((__int64)&qword_140C4EF80, 0x200000u, v2, v3);
      if ( !v7 || !(unsigned int)MiInitializeDynamicBitmap(&v17, (__int64)(v7 << 25) >> 16, 0x1000000000LL, 12) )
        break;
      *(_QWORD *)&v17 = 0LL;
      ++v6;
      *(_OWORD *)v4 = v17;
      v4 += 2;
      if ( v6 >= 2 )
      {
        if ( (dword_140CFB184 & 1) != 0 )
        {
          --CurrentThread->SpecialApcDisable;
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C50E80, 0LL);
          MiUpdateMirrorBitmaps();
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C50E80, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(&qword_140C50E80);
          v18 = 0;
          v9 = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_140C50E80) == 1 )
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
              goto LABEL_16;
            v15 = (__int64)&v9->LockEntries[v14];
            v12 &= ~(1 << v14);
            if ( (*(_BYTE *)(v15 + 26) & 1) != 0
              && (*(_DWORD *)(v15 + 32) & 1) == 0
              && (*(_QWORD *)(v15 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_140C50E80 & 0x7FFFFFFFFFFFFFFCLL)
              && *(_DWORD *)(v15 + 40) == SessionId )
            {
              *(_BYTE *)(v15 + 26) &= ~1u;
              if ( *(_QWORD *)(v15 + 32) )
                break;
            }
          }
          if ( !v15 )
          {
LABEL_16:
            if ( (*((_DWORD *)&v9->0 + 1) & 0x10000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)v9, (ULONG_PTR)&qword_140C50E80, SessionId, 0LL);
            goto LABEL_28;
          }
          *(_BYTE *)(v15 + 32) |= 2u;
          if ( *(__int64 *)(v15 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v15);
          v18 = *(_DWORD *)(v15 + 88) & 0x1FFFF;
          *(_DWORD *)(v15 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v15 + 25) &= ~1u;
          *(_QWORD *)(v15 + 32) = 0LL;
          v16 = (signed __int64)(v15 - (unsigned __int64)v9->LockEntries) / 96;
          if ( v11 == 1 )
            v9->AbEntrySummary |= 1 << v16;
          else
            _InterlockedOr8((volatile signed __int8 *)&v9->AbOrphanedEntrySummary, 1 << v16);
LABEL_28:
          --v9->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts((ULONG_PTR)v9, (__int64)&qword_140C50E80, (unsigned int *)&v18);
          v13 = v9->SpecialApcDisable++ == -1;
          if ( v13 && ($C459BD0D405E8E46662177FB3D0A143F *)v9->ApcState.ApcListHead[0].Flink != &v9->152 )
            KiCheckForKernelApcDelivery();
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        }
        return 1LL;
      }
    }
  }
  return 0LL;
}
