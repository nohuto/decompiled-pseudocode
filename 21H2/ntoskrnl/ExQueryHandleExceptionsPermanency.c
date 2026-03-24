/*
 * XREFs of ExQueryHandleExceptionsPermanency @ 0x140381050
 * Callers:
 *     ObpCloseHandle @ 0x14061ABC0 (ObpCloseHandle.c)
 *     NtQueryInformationProcess @ 0x1406212A0 (NtQueryInformationProcess.c)
 *     NtClose @ 0x1406F0980 (NtClose.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 */

_QWORD *__fastcall ExQueryHandleExceptionsPermanency(__int64 a1, _BYTE *a2, _BYTE *a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 v7; // rsi
  __int64 v8; // rax
  struct _KTHREAD *v9; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v11; // r14
  _DWORD *v12; // r9
  unsigned int v13; // r8d
  bool v14; // zf
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v20; // [rsp+78h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = a1 + 56;
  ExAcquirePushLockExclusiveEx(a1 + 56, 0LL);
  v8 = *(_QWORD *)(a1 + 96);
  if ( v8 )
  {
    *a2 = 1;
    LOBYTE(v8) = (*(_DWORD *)(v8 + 8) & 8) != 0;
  }
  else if ( (*(_BYTE *)(a1 + 44) & 2) != 0 )
  {
    *a2 = 1;
    LOBYTE(v8) = 1;
  }
  else
  {
    *a2 = 0;
  }
  *a3 = v8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v7);
  v20 = 0;
  v9 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v7) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v9->ApcState.Process);
  else
    SessionId = -1;
  --v9->SpecialApcDisable;
  v11 = ++v9->AbAllocationRegionCount;
  v12 = (_DWORD *)(v7 & 0x7FFFFFFFFFFFFFFCLL);
  v13 = ((char)v9->AbEntrySummary | (char)v9->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v14 = !_BitScanReverse((unsigned int *)&v15, v13);
    if ( v14 )
      break;
    v16 = (__int64)&v9->LockEntries[v15];
    v13 &= ~(1 << v15);
    if ( (*(_BYTE *)(v16 + 26) & 1) != 0
      && (*(_DWORD *)(v16 + 32) & 1) == 0
      && (_DWORD *)(*(_QWORD *)(v16 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v12
      && *(_DWORD *)(v16 + 40) == SessionId )
    {
      *(_BYTE *)(v16 + 26) &= ~1u;
      if ( *(_QWORD *)(v16 + 32) )
      {
        if ( v16 )
        {
          *(_BYTE *)(v16 + 32) |= 2u;
          if ( *(__int64 *)(v16 + 32) < 0 )
            KiAbEntryRemoveFromTree(v16);
          v20 = *(_DWORD *)(v16 + 88) & 0x1FFFF;
          *(_DWORD *)(v16 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v16 + 25) &= ~1u;
          *(_QWORD *)(v16 + 32) = 0LL;
          v17 = (signed __int64)(v16 - (unsigned __int64)v9->LockEntries) / 96;
          if ( v11 == 1 )
            v9->AbEntrySummary |= 1 << v17;
          else
            _InterlockedOr8((volatile signed __int8 *)&v9->AbOrphanedEntrySummary, 1 << v17);
          goto LABEL_20;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v9->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v9, v7, SessionId, 0LL);
LABEL_20:
  --v9->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v9, v7, (__int64)&v20, v12);
  v14 = v9->SpecialApcDisable++ == -1;
  if ( v14 && ($C459BD0D405E8E46662177FB3D0A143F *)v9->ApcState.ApcListHead[0].Flink != &v9->152 )
    KiCheckForKernelApcDelivery(v18);
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
