/*
 * XREFs of MiGetWsAndInsertVad @ 0x140320DD0
 * Callers:
 *     MiMapViewOfImageSection @ 0x140686B20 (MiMapViewOfImageSection.c)
 *     MiInsertProcessVads @ 0x1406BFD68 (MiInsertProcessVads.c)
 *     MiMapViewOfDataSection @ 0x1407034E0 (MiMapViewOfDataSection.c)
 *     MiInsertChildVads @ 0x1408D98E0 (MiInsertChildVads.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiInsertVad @ 0x140321080 (MiInsertVad.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiGetWsAndInsertVad(__int64 a1)
{
  _KPROCESS *Process; // rdi
  __int64 result; // rax
  __int64 *v4; // rax
  _QWORD *v5; // rdi
  __int64 v6; // rbx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v8; // rsi
  __int64 v9; // rcx
  _QWORD *v10; // rax
  struct _KTHREAD *v11; // rbp
  __int64 v12; // rcx
  struct _KTHREAD *v13; // rbx
  ULONG_PTR SessionId; // r9
  unsigned __int8 v15; // r15
  unsigned int v16; // edx
  bool v17; // zf
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rdx

  Process = KeGetCurrentThread()->ApcState.Process;
  result = MiInsertVad(a1, Process, 1LL);
  if ( (*(_DWORD *)(a1 + 48) & 0x100000) == 0 )
  {
    v4 = *(__int64 **)(a1 + 72);
    *(_QWORD *)(a1 + 112) = (unsigned __int64)Process | 1;
    v5 = (_QWORD *)(a1 + 96);
    v6 = *v4;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v8 = v6 + 104;
    ExAcquirePushLockExclusiveEx(v6 + 104, 0LL);
    if ( (*(_DWORD *)(v6 + 56) & 0x400) == 0 )
    {
      v9 = *(_QWORD *)(v6 + 8);
      v10 = (_QWORD *)(v6 + 8);
      if ( *(_QWORD *)(v9 + 8) != v6 + 8 )
        __fastfail(3u);
      *v5 = v9;
      v5[1] = v10;
      *(_QWORD *)(v9 + 8) = v5;
      *v10 = v5;
    }
    v11 = KeGetCurrentThread();
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v6 + 104);
    v12 = v6 + 104;
    v13 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v12) == 1 )
      SessionId = (unsigned int)MmGetSessionIdEx(v13->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    --v13->SpecialApcDisable;
    v15 = ++v13->AbAllocationRegionCount;
    v16 = ((char)v13->AbEntrySummary | (char)v13->AbOrphanedEntrySummary) ^ 0x3F;
    v17 = !_BitScanReverse((unsigned int *)&v18, v16);
    if ( v17 )
      goto LABEL_27;
    while ( 1 )
    {
      v19 = (__int64)&v13->LockEntries[v18];
      v16 &= ~(1 << v18);
      if ( (*(_BYTE *)(v19 + 26) & 1) != 0
        && (*(_DWORD *)(v19 + 32) & 1) == 0
        && (*(_QWORD *)(v19 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v8 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v19 + 40) == (_DWORD)SessionId )
      {
        *(_BYTE *)(v19 + 26) &= ~1u;
        if ( *(_QWORD *)(v19 + 32) )
          break;
      }
      v17 = !_BitScanReverse((unsigned int *)&v18, v16);
      if ( v17 )
        goto LABEL_27;
    }
    if ( !v19 )
    {
LABEL_27:
      if ( (*((_DWORD *)&v13->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v13, v8, SessionId, 0LL);
    }
    else
    {
      *(_BYTE *)(v19 + 32) |= 2u;
      if ( *(__int64 *)(v19 + 32) < 0 )
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v19);
      *(_DWORD *)(v19 + 88) &= 0xFFFE0000;
      *(_BYTE *)(v19 + 25) &= ~1u;
      *(_QWORD *)(v19 + 32) = 0LL;
      v20 = (signed __int64)(v19 - (unsigned __int64)v13->LockEntries) / 96;
      if ( v15 == 1 )
        v13->AbEntrySummary |= 1 << v20;
      else
        _InterlockedOr8((volatile signed __int8 *)&v13->AbOrphanedEntrySummary, 1 << v20);
    }
    --v13->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v13);
    v17 = v13->SpecialApcDisable++ == -1;
    if ( v17 && ($C459BD0D405E8E46662177FB3D0A143F *)v13->ApcState.ApcListHead[0].Flink != &v13->152 )
      KiCheckForKernelApcDelivery();
    return KiLeaveGuardedRegionUnsafe(v11);
  }
  return result;
}
