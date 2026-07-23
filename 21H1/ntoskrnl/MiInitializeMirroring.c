/*
 * XREFs of MiInitializeMirroring @ 0x140A4CDA0
 * Callers:
 *     MiInitSystem @ 0x140A4C4D4 (MiInitSystem.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     MiReservePtes @ 0x1402743A0 (MiReservePtes.c)
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     MiSizeMemoryListLocks @ 0x1406EDD90 (MiSizeMemoryListLocks.c)
 *     MiUpdateMirrorBitmaps @ 0x14075F454 (MiUpdateMirrorBitmaps.c)
 *     MiInitializeDynamicBitmap @ 0x1407720EC (MiInitializeDynamicBitmap.c)
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
  $C774EFD68449142D8271B1EC1EB7FB26 *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  _DWORD *v18; // r9
  __int128 v19; // [rsp+30h] [rbp-38h] BYREF
  int v20; // [rsp+78h] [rbp+10h] BYREF

  *((_QWORD *)&v19 + 1) = 0LL;
  stru_140C4E628.List.Flink = 0LL;
  stru_140C4E610.Header.WaitListHead.Blink = &stru_140C4E610.Header.WaitListHead;
  stru_140C4E610.Header.WaitListHead.Flink = &stru_140C4E610.Header.WaitListHead;
  stru_140C4E628.WorkerRoutine = (void (__fastcall *)(void *))MiFinishResume;
  LOWORD(stru_140C4E610.Header.Lock) = 1;
  stru_140C4E610.Header.Size = 6;
  stru_140C4E610.Header.SignalState = 1;
  stru_140C4E628.Parameter = (void *)-1LL;
  v0 = MiSizeMemoryListLocks();
  Pool = MiAllocatePool(64, v0, 0x614C6D4Du);
  if ( Pool )
  {
    qword_140C52028 = (__int64)Pool;
    v2 = qword_140C4E650;
    CurrentThread = KeGetCurrentThread();
    v4 = 0;
    while ( 1 )
    {
      v5 = MiReservePtes((__int64)&qword_140C4EE80, 0x200000LL);
      if ( !v5 || !(unsigned int)MiInitializeDynamicBitmap(&v19, (__int64)(v5 << 25) >> 16, 0x1000000000LL, 12) )
        break;
      *(_QWORD *)&v19 = 0LL;
      ++v4;
      *(_OWORD *)v2 = v19;
      v2 += 2;
      if ( v4 >= 2 )
      {
        if ( (dword_140CFB184 & 1) != 0 )
        {
          --CurrentThread->SpecialApcDisable;
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C50D40, 0LL);
          MiUpdateMirrorBitmaps();
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C50D40, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(&qword_140C50D40);
          v20 = 0;
          v7 = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_140C50D40) == 1 )
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
              && (*(_QWORD *)(v13 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_140C50D40 & 0x7FFFFFFFFFFFFFFCLL)
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
              KeBugCheckEx(0x162u, (ULONG_PTR)v7, (ULONG_PTR)&qword_140C50D40, SessionId, 0LL);
            goto LABEL_28;
          }
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
LABEL_28:
          --v7->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts((ULONG_PTR)v7, (__int64)&qword_140C50D40, &v20);
          v11 = v7->SpecialApcDisable++ == -1;
          if ( v11 )
          {
            v15 = &v7->152;
            if ( ($C774EFD68449142D8271B1EC1EB7FB26 *)v15->ApcState.ApcListHead[0].Flink != v15 )
              KiCheckForKernelApcDelivery(v16, (__int64)v15, v17, v18);
          }
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, (__int64)v15, v17, (__int64)v18);
        }
        return 1LL;
      }
    }
  }
  return 0LL;
}
