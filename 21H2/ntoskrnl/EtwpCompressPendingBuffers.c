/*
 * XREFs of EtwpCompressPendingBuffers @ 0x1405ACA9C
 * Callers:
 *     EtwpBufferingModeCompressionFlush @ 0x1405AC4FC (EtwpBufferingModeCompressionFlush.c)
 *     EtwpCompressionProc @ 0x1405ACDA0 (EtwpCompressionProc.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022C340 (KeQueryPerformanceCounter.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     EtwpCompressBuffer @ 0x1405AC714 (EtwpCompressBuffer.c)
 *     EtwpDequeueBufferPendingCompression @ 0x1405ACFF4 (EtwpDequeueBufferPendingCompression.c)
 *     EtwpRotateCompressionTargetIfNeeded @ 0x1405AD830 (EtwpRotateCompressionTargetIfNeeded.c)
 *     EtwpCompleteBuffer @ 0x140644ADC (EtwpCompleteBuffer.c)
 */

char __fastcall EtwpCompressPendingBuffers(__int64 a1)
{
  unsigned __int64 v1; // rbp
  LARGE_INTEGER PerformanceCounter; // rbx
  _DWORD *v4; // rax
  _DWORD *v5; // rsi
  LARGE_INTEGER v6; // rax
  __int64 v7; // rcx
  LONGLONG v8; // rax
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v11; // si
  _DWORD *v12; // r9
  unsigned int v13; // r8d
  __int64 v14; // rdi
  bool v15; // zf
  __int64 v16; // rcx
  int v17; // eax
  unsigned int v18; // ecx
  __int64 v19; // rdx
  $C459BD0D405E8E46662177FB3D0A143F *v20; // rax
  __int64 v21; // rcx
  int v23; // [rsp+58h] [rbp+10h] BYREF

  v1 = a1 + 1128;
  ExAcquirePushLockExclusiveEx(a1 + 1128, 0LL);
  EtwpRotateCompressionTargetIfNeeded(a1);
  while ( 1 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v4 = (_DWORD *)EtwpDequeueBufferPendingCompression(a1);
    v5 = v4;
    if ( !v4 )
      break;
    if ( (int)v4[3] > 0 || v4[1] > 0x48u && v4[2] > 0x48u )
    {
      if ( (int)EtwpCompressBuffer(a1, (__int64)v4) < 0 )
        _InterlockedAdd((volatile signed __int32 *)(a1 + 268), 1u);
      EtwpCompleteBuffer(a1, v5);
      v6 = KeQueryPerformanceCounter(0LL);
      v7 = *(_QWORD *)(a1 + 1256);
      v8 = v6.QuadPart - PerformanceCounter.QuadPart;
      if ( v7 )
        *(_QWORD *)(a1 + 1256) = (v8 + 4 * v7) / 5;
      else
        *(_QWORD *)(a1 + 1256) = v8;
    }
    else
    {
      EtwpCompleteBuffer(a1, v4);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v1);
  v23 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v1) == 1 )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  --CurrentThread->SpecialApcDisable;
  v11 = ++CurrentThread->AbAllocationRegionCount;
  v12 = (_DWORD *)(v1 & 0x7FFFFFFFFFFFFFFCLL);
  v13 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v15 = !_BitScanReverse((unsigned int *)&v16, v13);
    if ( v15 )
      goto LABEL_24;
    v14 = (__int64)&CurrentThread->LockEntries[v16];
    v13 &= ~(1 << v16);
    if ( (*(_BYTE *)(v14 + 26) & 1) != 0
      && (*(_DWORD *)(v14 + 32) & 1) == 0
      && (_DWORD *)(*(_QWORD *)(v14 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v12
      && *(_DWORD *)(v14 + 40) == SessionId )
    {
      *(_BYTE *)(v14 + 26) &= ~1u;
      if ( *(_QWORD *)(v14 + 32) )
        break;
    }
  }
  if ( !v14 )
  {
LABEL_24:
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v1, SessionId, 0LL);
    goto LABEL_31;
  }
  *(_BYTE *)(v14 + 32) |= 2u;
  if ( *(__int64 *)(v14 + 32) < 0 )
    KiAbEntryRemoveFromTree(v14);
  v17 = *(_DWORD *)(v14 + 88) & 0x1FFFF;
  v18 = *(_DWORD *)(v14 + 88) & 0xFFFE0000;
  *(_BYTE *)(v14 + 25) &= ~1u;
  v23 = v17;
  *(_DWORD *)(v14 + 88) = v18;
  *(_QWORD *)(v14 + 32) = 0LL;
  v19 = (signed __int64)(v14 - (unsigned __int64)CurrentThread->LockEntries) / 96;
  if ( v11 == 1 )
    CurrentThread->AbEntrySummary |= 1 << v19;
  else
    _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v19);
LABEL_31:
  --CurrentThread->AbAllocationRegionCount;
  LOBYTE(v20) = KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v1, (__int64)&v23, v12);
  v15 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v15 )
  {
    v20 = &CurrentThread->152;
    if ( ($C459BD0D405E8E46662177FB3D0A143F *)v20->ApcState.ApcListHead[0].Flink != v20 )
      LOBYTE(v20) = KiCheckForKernelApcDelivery(v21);
  }
  return (char)v20;
}
