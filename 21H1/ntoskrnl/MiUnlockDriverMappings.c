/*
 * XREFs of MiUnlockDriverMappings @ 0x14036FADC
 * Callers:
 *     MiReleaseDriverPtes @ 0x140748668 (MiReleaseDriverPtes.c)
 *     MiReserveDriverPtes @ 0x14074881C (MiReserveDriverPtes.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

__int64 __fastcall MiUnlockDriverMappings(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v4; // bp
  unsigned int v5; // r8d
  bool v6; // zf
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  _DWORD *v13; // r9
  int v15; // [rsp+70h] [rbp+18h] BYREF

  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4CC68, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C4CC68);
  v15 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_140C4CC68) == 1 )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  --CurrentThread->SpecialApcDisable;
  v4 = ++CurrentThread->AbAllocationRegionCount;
  v5 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v6 = !_BitScanReverse((unsigned int *)&v7, v5);
    if ( v6 )
      break;
    v8 = (__int64)&CurrentThread->LockEntries[v7];
    v5 &= ~(1 << v7);
    if ( (*(_BYTE *)(v8 + 26) & 1) != 0
      && (*(_DWORD *)(v8 + 32) & 1) == 0
      && (*(_QWORD *)(v8 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_140C4CC68 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v8 + 40) == SessionId )
    {
      *(_BYTE *)(v8 + 26) &= ~1u;
      if ( *(_QWORD *)(v8 + 32) )
      {
        if ( v8 )
        {
          *(_BYTE *)(v8 + 32) |= 2u;
          if ( *(__int64 *)(v8 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v8);
          v15 = *(_DWORD *)(v8 + 88) & 0x1FFFF;
          *(_DWORD *)(v8 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v8 + 25) &= ~1u;
          *(_QWORD *)(v8 + 32) = 0LL;
          v9 = (signed __int64)(v8 - (unsigned __int64)CurrentThread->LockEntries) / 96;
          if ( v4 == 1 )
            CurrentThread->AbEntrySummary |= 1 << v9;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v9);
          goto LABEL_17;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&qword_140C4CC68, SessionId, 0LL);
LABEL_17:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)&qword_140C4CC68, &v15);
  v6 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v6 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v11, v10, v12, v13);
  return KiLeaveGuardedRegionUnsafe(a1, v10, v12, (__int64)v13);
}
