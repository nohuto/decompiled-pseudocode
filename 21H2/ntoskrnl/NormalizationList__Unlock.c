/*
 * XREFs of NormalizationList__Unlock @ 0x1405943D8
 * Callers:
 *     RtlpGetNormalization @ 0x14091B820 (RtlpGetNormalization.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 */

_QWORD *NormalizationList__Unlock()
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v2; // si
  _DWORD *v3; // r9
  unsigned int v4; // r8d
  __int64 v5; // rdi
  bool v6; // zf
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v13; // [rsp+58h] [rbp+10h] BYREF

  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&NormalizationListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&NormalizationListLock);
  v13 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&NormalizationListLock) == 1 )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  --CurrentThread->SpecialApcDisable;
  v2 = ++CurrentThread->AbAllocationRegionCount;
  v3 = (_DWORD *)((unsigned __int64)&NormalizationListLock & 0x7FFFFFFFFFFFFFFCLL);
  v4 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v6 = !_BitScanReverse((unsigned int *)&v7, v4);
    if ( v6 )
      goto LABEL_13;
    v5 = (__int64)&CurrentThread->LockEntries[v7];
    v4 &= ~(1 << v7);
    if ( (*(_BYTE *)(v5 + 26) & 1) != 0
      && (*(_DWORD *)(v5 + 32) & 1) == 0
      && (_DWORD *)(*(_QWORD *)(v5 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v3
      && *(_DWORD *)(v5 + 40) == SessionId )
    {
      *(_BYTE *)(v5 + 26) &= ~1u;
      if ( *(_QWORD *)(v5 + 32) )
        break;
    }
  }
  if ( !v5 )
  {
LABEL_13:
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&NormalizationListLock, SessionId, 0LL);
    goto LABEL_20;
  }
  *(_BYTE *)(v5 + 32) |= 2u;
  if ( *(__int64 *)(v5 + 32) < 0 )
    KiAbEntryRemoveFromTree(v5);
  v8 = *(_DWORD *)(v5 + 88) & 0x1FFFF;
  v9 = *(_DWORD *)(v5 + 88) & 0xFFFE0000;
  *(_BYTE *)(v5 + 25) &= ~1u;
  v13 = v8;
  *(_DWORD *)(v5 + 88) = v9;
  *(_QWORD *)(v5 + 32) = 0LL;
  v10 = (signed __int64)(v5 - (unsigned __int64)CurrentThread->LockEntries) / 96;
  if ( v2 == 1 )
    CurrentThread->AbEntrySummary |= 1 << v10;
  else
    _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v10);
LABEL_20:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)&NormalizationListLock, (__int64)&v13, v3);
  v6 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v6 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v11);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
