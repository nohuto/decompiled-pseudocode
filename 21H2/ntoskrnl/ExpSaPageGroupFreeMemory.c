/*
 * XREFs of ExpSaPageGroupFreeMemory @ 0x14039455C
 * Callers:
 *     ExpSaAllocatorFree @ 0x140394354 (ExpSaAllocatorFree.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402F2C90 (ExfAcquirePushLockExclusiveEx.c)
 *     RtlClearBitsEx @ 0x1402FE300 (RtlClearBitsEx.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F921C (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 */

bool __fastcall ExpSaPageGroupFreeMemory(__int64 a1, unsigned __int64 a2, unsigned int a3, _DWORD *a4)
{
  ULONG_PTR v4; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 v6; // r12
  unsigned int v9; // r15d
  __int64 v10; // rax
  char v11; // cl
  __int64 v12; // rbp
  int SessionId; // eax
  __int64 v14; // rcx
  bool v15; // zf
  bool v16; // bp
  struct _KTHREAD *v17; // rbx
  __int64 v18; // r9
  unsigned __int8 AbAllocationRegionCount; // r14
  unsigned int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rdx
  $C459BD0D405E8E46662177FB3D0A143F *v24; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al
  _DWORD v27[3]; // [rsp+34h] [rbp-34h] BYREF
  int v28; // [rsp+88h] [rbp+20h] BYREF

  v27[0] = 0;
  v4 = a1 + 24;
  CurrentThread = KeGetCurrentThread();
  v6 = a3;
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, a1 + 24, KeGetCurrentIrql(), 0LL);
  v9 = -1;
  LOBYTE(v10) = CurrentThread->AbEntrySummary;
  if ( !(_BYTE)v10 )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      v12 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, a1 + 24);
      goto LABEL_37;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    LOBYTE(v10) = CurrentThread->AbEntrySummary | AbOrphanedEntrySummary;
  }
  v11 = v10;
  _BitScanForward((unsigned int *)&v10, (unsigned __int8)v10);
  CurrentThread->AbEntrySummary = v11 & ~(1 << v10);
  v12 = (__int64)&CurrentThread->LockEntries[v10];
  if ( v12 )
  {
    if ( v4 >= 0xFFFF800000000000uLL && byte_140C4F9C8[((v4 >> 39) & 0x1FF) - 256] == 1 )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v12 + 40) = SessionId;
    *(_QWORD *)(v12 + 32) = v4 & 0x7FFFFFFFFFFFFFFCLL;
    goto LABEL_8;
  }
LABEL_37:
  _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
LABEL_8:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v4, (__int64)v27, a4);
  v15 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v15 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v14);
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v4, v12, v4);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  RtlClearBitsEx(a1 + 48, (a2 >> 4) & 0x1FF, v6);
  *(_DWORD *)(a1 + 36) += v6;
  v16 = *(_DWORD *)(a1 + 36) == 512;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v4);
  v28 = 0;
  v17 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v4) == 1 )
    v9 = MmGetSessionIdEx((__int64)v17->ApcState.Process);
  --v17->SpecialApcDisable;
  ++v17->AbAllocationRegionCount;
  v18 = 0x7FFFFFFFFFFFFFFCLL;
  AbAllocationRegionCount = v17->AbAllocationRegionCount;
  v20 = ((char)v17->AbEntrySummary | (char)v17->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v15 = !_BitScanReverse((unsigned int *)&v21, v20);
    if ( v15 )
      break;
    v22 = (__int64)&v17->LockEntries[v21];
    v20 &= ~(1 << v21);
    if ( (*(_BYTE *)(v22 + 26) & 1) != 0
      && (*(_DWORD *)(v22 + 32) & 1) == 0
      && (*(_QWORD *)(v22 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v4 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v22 + 40) == v9 )
    {
      *(_BYTE *)(v22 + 26) &= ~1u;
      if ( *(_QWORD *)(v22 + 32) )
      {
        if ( v22 )
        {
          *(_BYTE *)(v22 + 32) |= 2u;
          if ( *(__int64 *)(v22 + 32) < 0 )
            KiAbEntryRemoveFromTree(v22);
          v28 = *(_DWORD *)(v22 + 88) & 0x1FFFF;
          *(_DWORD *)(v22 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v22 + 25) &= ~1u;
          *(_QWORD *)(v22 + 32) = 0LL;
          v23 = (signed __int64)(v22 - (unsigned __int64)v17->LockEntries) / 96;
          if ( AbAllocationRegionCount == 1 )
            v17->AbEntrySummary |= 1 << v23;
          else
            _InterlockedOr8((volatile signed __int8 *)&v17->AbOrphanedEntrySummary, 1 << v23);
          goto LABEL_31;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v17->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v17, v4, v9, 0LL);
LABEL_31:
  --v17->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v17, v4, (__int64)&v28, (_DWORD *)v18);
  v15 = v17->SpecialApcDisable++ == -1;
  if ( v15 )
  {
    v24 = &v17->152;
    if ( ($C459BD0D405E8E46662177FB3D0A143F *)v24->ApcState.ApcListHead[0].Flink != v24 )
      KiCheckForKernelApcDelivery((__int64)v24);
  }
  return v16;
}
