/*
 * XREFs of MiInitializeMirroring @ 0x140A53120
 * Callers:
 *     MiInitSystem @ 0x140A52854 (MiInitSystem.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     MiAllocatePool @ 0x14022D320 (MiAllocatePool.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     MiReservePtes @ 0x140285DC0 (MiReservePtes.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1402F05E0 (KiAbEntryRemoveFromTree.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     MiSizeMemoryListLocks @ 0x1406E4268 (MiSizeMemoryListLocks.c)
 *     MiUpdateMirrorBitmaps @ 0x140772C24 (MiUpdateMirrorBitmaps.c)
 *     MiInitializeDynamicBitmap @ 0x140782AFC (MiInitializeDynamicBitmap.c)
 */

__int64 MiInitializeMirroring()
{
  SIZE_T v0; // rax
  PVOID Pool; // rax
  __int64 *v2; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v4; // ebx
  ULONG_PTR v5; // rax
  struct _KTHREAD *v7; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v9; // bp
  unsigned int v10; // r8d
  bool v11; // zf
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int128 v16; // [rsp+30h] [rbp-38h] BYREF
  int v17; // [rsp+78h] [rbp+10h] BYREF

  *((_QWORD *)&v16 + 1) = 0LL;
  stru_140C4E568.List.Flink = 0LL;
  stru_140C4E550.Header.WaitListHead.Blink = &stru_140C4E550.Header.WaitListHead;
  stru_140C4E550.Header.WaitListHead.Flink = &stru_140C4E550.Header.WaitListHead;
  stru_140C4E568.WorkerRoutine = (void (__fastcall *)(void *))MiFinishResume;
  LOWORD(stru_140C4E550.Header.Lock) = 1;
  stru_140C4E550.Header.Size = 6;
  stru_140C4E550.Header.SignalState = 1;
  stru_140C4E568.Parameter = (void *)-1LL;
  v0 = MiSizeMemoryListLocks();
  Pool = MiAllocatePool(64, v0, 0x614C6D4Du);
  if ( Pool )
  {
    qword_140C51FA8 = (__int64)Pool;
    v2 = qword_140C4E590;
    CurrentThread = KeGetCurrentThread();
    v4 = 0;
    while ( 1 )
    {
      v5 = MiReservePtes((__int64)&qword_140C4EDC0, 0x200000u);
      if ( !v5 || !(unsigned int)MiInitializeDynamicBitmap(&v16, (__int64)(v5 << 25) >> 16, 0x1000000000LL, 12) )
        break;
      *(_QWORD *)&v16 = 0LL;
      ++v4;
      *(_OWORD *)v2 = v16;
      v2 += 2;
      if ( v4 >= 2 )
      {
        if ( (dword_140CFB184 & 1) != 0 )
        {
          --CurrentThread->SpecialApcDisable;
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C50CC0, 0LL);
          MiUpdateMirrorBitmaps();
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C50CC0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C50CC0);
          v17 = 0;
          v7 = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_140C50CC0) == 1 )
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
              goto LABEL_16;
            v13 = (__int64)&v7->LockEntries[v12];
            v10 &= ~(1 << v12);
            if ( (*(_BYTE *)(v13 + 26) & 1) != 0
              && (*(_DWORD *)(v13 + 32) & 1) == 0
              && (*(_QWORD *)(v13 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_140C50CC0 & 0x7FFFFFFFFFFFFFFCLL)
              && *(_DWORD *)(v13 + 40) == SessionId )
            {
              *(_BYTE *)(v13 + 26) &= ~1u;
              if ( *(_QWORD *)(v13 + 32) )
                break;
            }
          }
          if ( !v13 )
          {
LABEL_16:
            if ( (*((_DWORD *)&v7->0 + 1) & 0x10000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)v7, (ULONG_PTR)&qword_140C50CC0, SessionId, 0LL);
            goto LABEL_28;
          }
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
LABEL_28:
          --v7->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts((ULONG_PTR)v7, (__int64)&qword_140C50CC0, &v17);
          v11 = v7->SpecialApcDisable++ == -1;
          if ( v11 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v7->ApcState.ApcListHead[0].Flink != &v7->152 )
            KiCheckForKernelApcDelivery(v15);
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        }
        return 1LL;
      }
    }
  }
  return 0LL;
}
