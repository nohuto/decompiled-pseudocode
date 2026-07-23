/*
 * XREFs of MiDereferenceExtendInfo @ 0x14024DEB4
 * Callers:
 *     MiDeleteVad @ 0x1402C08F0 (MiDeleteVad.c)
 *     MiMapViewOfDataSection @ 0x1407034E0 (MiMapViewOfDataSection.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall MiDereferenceExtendInfo(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // r14
  void *v3; // rbp
  unsigned int SessionId; // esi
  struct _KTHREAD *v7; // rbx
  unsigned __int8 v8; // r15
  unsigned int v9; // edx
  bool v10; // zf
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rdx

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4C9D0, 0LL);
  SessionId = -1;
  if ( !--*(_DWORD *)(*(_QWORD *)(a1 + 120) + 8LL) )
  {
    v3 = *(void **)(a1 + 120);
    *(_QWORD *)(*(_QWORD *)a2 + 32LL) = 0LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4C9D0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C4C9D0);
  v7 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(&qword_140C4C9D0) == 1 )
    SessionId = MmGetSessionIdEx(v7->ApcState.Process);
  --v7->SpecialApcDisable;
  v8 = ++v7->AbAllocationRegionCount;
  v9 = ((char)v7->AbEntrySummary | (char)v7->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v10 = !_BitScanReverse((unsigned int *)&v11, v9);
    if ( v10 )
      break;
    v12 = (__int64)&v7->LockEntries[v11];
    v9 &= ~(1 << v11);
    if ( (*(_BYTE *)(v12 + 26) & 1) != 0
      && (*(_DWORD *)(v12 + 32) & 1) == 0
      && (*(_QWORD *)(v12 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_140C4C9D0 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v12 + 40) == SessionId )
    {
      *(_BYTE *)(v12 + 26) &= ~1u;
      if ( *(_QWORD *)(v12 + 32) )
      {
        if ( v12 )
        {
          *(_BYTE *)(v12 + 32) |= 2u;
          if ( *(__int64 *)(v12 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v12);
          *(_DWORD *)(v12 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v12 + 25) &= ~1u;
          *(_QWORD *)(v12 + 32) = 0LL;
          v13 = (signed __int64)(v12 - (unsigned __int64)v7->LockEntries) / 96;
          if ( v8 == 1 )
            v7->AbEntrySummary |= 1 << v13;
          else
            _InterlockedOr8((volatile signed __int8 *)&v7->AbOrphanedEntrySummary, 1 << v13);
          goto LABEL_19;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v7->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v7, (ULONG_PTR)&qword_140C4C9D0, SessionId, 0LL);
LABEL_19:
  --v7->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v7);
  v10 = v7->SpecialApcDisable++ == -1;
  if ( v10 && ($C459BD0D405E8E46662177FB3D0A143F *)v7->ApcState.ApcListHead[0].Flink != &v7->152 )
    KiCheckForKernelApcDelivery();
  KiLeaveGuardedRegionUnsafe(CurrentThread);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
}
