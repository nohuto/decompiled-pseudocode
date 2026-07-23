/*
 * XREFs of PfTSetTraceWorkerPriority @ 0x1403827BC
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1406F4480 (PfSetSuperfetchInformation.c)
 *     PfpLogScenarioEvent @ 0x1407727B4 (PfpLogScenarioEvent.c)
 *     PfPowerActionNotify @ 0x1409939B4 (PfPowerActionNotify.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     KeSetPriorityThread @ 0x1402DAB40 (KeSetPriorityThread.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1402F05E0 (KiAbEntryRemoveFromTree.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

__int64 __fastcall PfTSetTraceWorkerPriority(unsigned int Priority)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // esi
  struct _KTHREAD *v4; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v6; // bp
  unsigned int v7; // r8d
  bool v8; // zf
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v14; // [rsp+68h] [rbp+10h] BYREF

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
      ExfTryToWakePushLock((volatile signed __int64 *)&PfTGlobals);
    v14 = 0;
    v4 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&PfTGlobals) == 1 )
      SessionId = MmGetSessionIdEx((__int64)v4->ApcState.Process);
    else
      SessionId = -1;
    --v4->SpecialApcDisable;
    v6 = ++v4->AbAllocationRegionCount;
    v7 = ((char)v4->AbEntrySummary | (char)v4->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v8 = !_BitScanReverse((unsigned int *)&v9, v7);
      if ( v8 )
        break;
      v10 = (__int64)&v4->LockEntries[v9];
      v7 &= ~(1 << v9);
      if ( (*(_BYTE *)(v10 + 26) & 1) != 0
        && (*(_DWORD *)(v10 + 32) & 1) == 0
        && (*(_QWORD *)(v10 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&PfTGlobals & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v10 + 40) == SessionId )
      {
        *(_BYTE *)(v10 + 26) &= ~1u;
        if ( *(_QWORD *)(v10 + 32) )
        {
          if ( v10 )
          {
            *(_BYTE *)(v10 + 32) |= 2u;
            if ( *(__int64 *)(v10 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v10);
            v14 = *(_DWORD *)(v10 + 88) & 0x1FFFF;
            *(_DWORD *)(v10 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v10 + 25) &= ~1u;
            *(_QWORD *)(v10 + 32) = 0LL;
            v11 = (signed __int64)(v10 - (unsigned __int64)v4->LockEntries) / 96;
            if ( v6 == 1 )
              v4->AbEntrySummary |= 1 << v11;
            else
              _InterlockedOr8((volatile signed __int8 *)&v4->AbOrphanedEntrySummary, 1 << v11);
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
    KiAbThreadRemoveBoosts((ULONG_PTR)v4, (__int64)&PfTGlobals, &v14);
    v8 = v4->SpecialApcDisable++ == -1;
    if ( v8 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v4->ApcState.ApcListHead[0].Flink != &v4->152 )
      KiCheckForKernelApcDelivery(v12);
    KeLeaveCriticalRegion();
  }
  return v3;
}
