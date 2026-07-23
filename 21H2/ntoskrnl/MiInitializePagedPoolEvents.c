/*
 * XREFs of MiInitializePagedPoolEvents @ 0x140A4FB3C
 * Callers:
 *     MiInitializeMemoryEvents @ 0x1407A08D4 (MiInitializeMemoryEvents.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     MiFreePoolPagesLeft @ 0x140260420 (MiFreePoolPagesLeft.c)
 *     KeResetEvent @ 0x140269BE0 (KeResetEvent.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

char MiInitializePagedPoolEvents()
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 v1; // rbx
  char v2; // al
  struct _KTHREAD *v3; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v5; // bp
  unsigned int v6; // r8d
  bool v7; // zf
  __int64 v8; // rcx
  __int64 v9; // rdi
  int v10; // eax
  unsigned int v11; // ecx
  __int64 v12; // rdx
  int v14; // [rsp+68h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4EF58, 0LL);
  v1 = MiFreePoolPagesLeft(6);
  if ( v1 < qword_140C4C930 )
    KeResetEvent(qword_140C50EC0);
  else
    KeSetEvent(qword_140C50EC0, 0, 0);
  if ( v1 <= qword_140C4C928 )
    KeSetEvent(qword_140C50EB8, 0, 0);
  else
    KeResetEvent(qword_140C50EB8);
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4EF58, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v2 & 2) != 0 && (v2 & 4) == 0 )
    ExfTryToWakePushLock(&qword_140C4EF58);
  v14 = 0;
  v3 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_140C4EF58) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v3->ApcState.Process);
  else
    SessionId = -1;
  --v3->SpecialApcDisable;
  v5 = ++v3->AbAllocationRegionCount;
  v6 = ((char)v3->AbEntrySummary | (char)v3->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v7 = !_BitScanReverse((unsigned int *)&v8, v6);
    if ( v7 )
      break;
    v9 = (__int64)&v3->LockEntries[v8];
    v6 &= ~(1 << v8);
    if ( (*(_BYTE *)(v9 + 26) & 1) != 0
      && (*(_DWORD *)(v9 + 32) & 1) == 0
      && (*(_QWORD *)(v9 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_140C4EF58 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v9 + 40) == SessionId )
    {
      *(_BYTE *)(v9 + 26) &= ~1u;
      if ( *(_QWORD *)(v9 + 32) )
      {
        if ( v9 )
        {
          *(_BYTE *)(v9 + 32) |= 2u;
          if ( *(__int64 *)(v9 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v9);
          v10 = *(_DWORD *)(v9 + 88) & 0x1FFFF;
          v11 = *(_DWORD *)(v9 + 88) & 0xFFFE0000;
          *(_BYTE *)(v9 + 25) &= ~1u;
          v14 = v10;
          *(_DWORD *)(v9 + 88) = v11;
          *(_QWORD *)(v9 + 32) = 0LL;
          v12 = (signed __int64)(v9 - (unsigned __int64)v3->LockEntries) / 96;
          if ( v5 == 1 )
            v3->AbEntrySummary |= 1 << v12;
          else
            _InterlockedOr8((volatile signed __int8 *)&v3->AbOrphanedEntrySummary, 1 << v12);
          goto LABEL_20;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v3->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v3, (ULONG_PTR)&qword_140C4EF58, SessionId, 0LL);
LABEL_20:
  --v3->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v3, (__int64)&qword_140C4EF58, (unsigned int *)&v14);
  v7 = v3->SpecialApcDisable++ == -1;
  if ( v7 && ($C459BD0D405E8E46662177FB3D0A143F *)v3->ApcState.ApcListHead[0].Flink != &v3->152 )
    KiCheckForKernelApcDelivery();
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
