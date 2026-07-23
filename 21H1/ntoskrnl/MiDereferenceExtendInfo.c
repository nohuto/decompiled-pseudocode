/*
 * XREFs of MiDereferenceExtendInfo @ 0x14031F914
 * Callers:
 *     MiDeleteVad @ 0x14026B790 (MiDeleteVad.c)
 *     MiMapViewOfDataSection @ 0x140632720 (MiMapViewOfDataSection.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4C8D0, 0LL);
  SessionId = -1;
  if ( !--*(_DWORD *)(*(_QWORD *)(a1 + 120) + 8LL) )
  {
    v3 = *(void **)(a1 + 120);
    *(_QWORD *)(*(_QWORD *)a2 + 32LL) = 0LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4C8D0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C4C8D0);
  v18 = 0;
  v7 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_140C4C8D0) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v7->ApcState.Process);
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
      && (*(_QWORD *)(v12 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_140C4C8D0 & 0x7FFFFFFFFFFFFFFCLL)
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
          v18 = *(_DWORD *)(v12 + 88) & 0x1FFFF;
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
    KeBugCheckEx(0x162u, (ULONG_PTR)v7, (ULONG_PTR)&qword_140C4C8D0, SessionId, 0LL);
LABEL_19:
  --v7->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v7, (__int64)&qword_140C4C8D0, &v18);
  v10 = v7->SpecialApcDisable++ == -1;
  if ( v10 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v7->ApcState.ApcListHead[0].Flink != &v7->152 )
    KiCheckForKernelApcDelivery(v15);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v14, v16, v17);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
}
