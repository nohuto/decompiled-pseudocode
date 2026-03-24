/*
 * XREFs of PfTSetTraceWorkerPriority @ 0x140382DA4
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1406DBD54 (PfSetSuperfetchInformation.c)
 *     PfpLogScenarioEvent @ 0x140776764 (PfpLogScenarioEvent.c)
 *     PfPowerActionNotify @ 0x1409909B4 (PfPowerActionNotify.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     KeSetPriorityThread @ 0x140257AE0 (KeSetPriorityThread.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegion @ 0x14034B3B0 (KeLeaveCriticalRegion.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 */

__int64 __fastcall PfTSetTraceWorkerPriority(unsigned int Priority)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // esi
  struct _KTHREAD *v4; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v6; // bp
  _DWORD *v7; // r9
  unsigned int v8; // r8d
  bool v9; // zf
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v15; // [rsp+68h] [rbp+10h] BYREF

  if ( Priority > 0x1F )
  {
    return 32;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PfTGlobals, 0LL);
    if ( Thread )
      v3 = KeSetPriorityThread(Thread, Priority);
    else
      v3 = 33;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PfTGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&PfTGlobals);
    v15 = 0;
    v4 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&PfTGlobals) == 1 )
      SessionId = MmGetSessionIdEx((__int64)v4->ApcState.Process);
    else
      SessionId = -1;
    --v4->SpecialApcDisable;
    v6 = ++v4->AbAllocationRegionCount;
    v7 = (_DWORD *)((unsigned __int64)&PfTGlobals & 0x7FFFFFFFFFFFFFFCLL);
    v8 = ((char)v4->AbEntrySummary | (char)v4->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v9 = !_BitScanReverse((unsigned int *)&v10, v8);
      if ( v9 )
        break;
      v11 = (__int64)&v4->LockEntries[v10];
      v8 &= ~(1 << v10);
      if ( (*(_BYTE *)(v11 + 26) & 1) != 0
        && (*(_DWORD *)(v11 + 32) & 1) == 0
        && (_DWORD *)(*(_QWORD *)(v11 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v7
        && *(_DWORD *)(v11 + 40) == SessionId )
      {
        *(_BYTE *)(v11 + 26) &= ~1u;
        if ( *(_QWORD *)(v11 + 32) )
        {
          if ( v11 )
          {
            *(_BYTE *)(v11 + 32) |= 2u;
            if ( *(__int64 *)(v11 + 32) < 0 )
              KiAbEntryRemoveFromTree(v11);
            v15 = *(_DWORD *)(v11 + 88) & 0x1FFFF;
            *(_DWORD *)(v11 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v11 + 25) &= ~1u;
            *(_QWORD *)(v11 + 32) = 0LL;
            v12 = (signed __int64)(v11 - (unsigned __int64)v4->LockEntries) / 96;
            if ( v6 == 1 )
              v4->AbEntrySummary |= 1 << v12;
            else
              _InterlockedOr8((volatile signed __int8 *)&v4->AbOrphanedEntrySummary, 1 << v12);
            goto LABEL_20;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v4->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v4, (ULONG_PTR)&PfTGlobals, SessionId, 0LL);
LABEL_20:
    --v4->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v4, (__int64)&PfTGlobals, (__int64)&v15, v7);
    v9 = v4->SpecialApcDisable++ == -1;
    if ( v9 && ($C459BD0D405E8E46662177FB3D0A143F *)v4->ApcState.ApcListHead[0].Flink != &v4->152 )
      KiCheckForKernelApcDelivery(v13);
    KeLeaveCriticalRegion();
  }
  return v3;
}
