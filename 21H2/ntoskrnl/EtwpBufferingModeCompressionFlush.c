/*
 * XREFs of EtwpBufferingModeCompressionFlush @ 0x1405AC4FC
 * Callers:
 *     EtwpBufferingModeFlush @ 0x14093D188 (EtwpBufferingModeFlush.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     EtwpCompressPendingBuffers @ 0x1405ACA9C (EtwpCompressPendingBuffers.c)
 *     EtwpRelinquishCompressionTarget @ 0x1405AD774 (EtwpRelinquishCompressionTarget.c)
 */

char __fastcall EtwpBufferingModeCompressionFlush(__int64 a1)
{
  $C459BD0D405E8E46662177FB3D0A143F *v1; // rax
  ULONG_PTR v3; // rsi
  unsigned __int64 v4; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v7; // bp
  _DWORD *v8; // r9
  unsigned int v9; // r8d
  __int64 v10; // rdi
  bool v11; // zf
  __int64 v12; // rcx
  int v13; // eax
  unsigned int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v18; // [rsp+58h] [rbp+10h] BYREF

  LODWORD(v1) = *(_DWORD *)(a1 + 1152);
  if ( (_DWORD)v1 )
  {
    EtwpCompressPendingBuffers();
    v3 = a1 + 1128;
    ExAcquirePushLockExclusiveEx(a1 + 1128, 0LL);
    EtwpRelinquishCompressionTarget(a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1128), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 1128);
    v18 = 0;
    v4 = a1 + 1128;
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v4) == 1 )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    --CurrentThread->SpecialApcDisable;
    v7 = ++CurrentThread->AbAllocationRegionCount;
    v8 = (_DWORD *)(v3 & 0x7FFFFFFFFFFFFFFCLL);
    v9 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v11 = !_BitScanReverse((unsigned int *)&v12, v9);
      if ( v11 )
        goto LABEL_14;
      v10 = (__int64)&CurrentThread->LockEntries[v12];
      v9 &= ~(1 << v12);
      if ( (*(_BYTE *)(v10 + 26) & 1) != 0
        && (*(_DWORD *)(v10 + 32) & 1) == 0
        && (_DWORD *)(*(_QWORD *)(v10 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v8
        && *(_DWORD *)(v10 + 40) == SessionId )
      {
        *(_BYTE *)(v10 + 26) &= ~1u;
        if ( *(_QWORD *)(v10 + 32) )
          break;
      }
    }
    if ( !v10 )
    {
LABEL_14:
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v3, SessionId, 0LL);
      goto LABEL_21;
    }
    *(_BYTE *)(v10 + 32) |= 2u;
    if ( *(__int64 *)(v10 + 32) < 0 )
      KiAbEntryRemoveFromTree(v10);
    v13 = *(_DWORD *)(v10 + 88) & 0x1FFFF;
    v14 = *(_DWORD *)(v10 + 88) & 0xFFFE0000;
    *(_BYTE *)(v10 + 25) &= ~1u;
    v18 = v13;
    *(_DWORD *)(v10 + 88) = v14;
    *(_QWORD *)(v10 + 32) = 0LL;
    v15 = (signed __int64)(v10 - (unsigned __int64)CurrentThread->LockEntries) / 96;
    if ( v7 == 1 )
      CurrentThread->AbEntrySummary |= 1 << v15;
    else
      _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v15);
LABEL_21:
    --CurrentThread->AbAllocationRegionCount;
    LOBYTE(v1) = KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v3, (__int64)&v18, v8);
    v11 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v11 )
    {
      v1 = &CurrentThread->152;
      if ( ($C459BD0D405E8E46662177FB3D0A143F *)v1->ApcState.ApcListHead[0].Flink != v1 )
        LOBYTE(v1) = KiCheckForKernelApcDelivery(v16);
    }
  }
  return (char)v1;
}
