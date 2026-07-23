/*
 * XREFs of EtwpSetCompressionSettings @ 0x1405A8304
 * Callers:
 *     NtTraceControl @ 0x14068D910 (NtTraceControl.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140207E30 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140272F70 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14027B290 (PsGetCurrentServerSiloGlobals.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x14066BA28 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x14066BAFC (EtwpReleaseLoggerContext.c)
 */

__int64 __fastcall EtwpSetCompressionSettings(unsigned int *a1)
{
  unsigned int v2; // esi
  _QWORD *CurrentServerSiloGlobals; // rax
  __int64 v4; // rax
  _DWORD *v5; // r14
  unsigned __int64 v6; // rbp
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v9; // r15
  unsigned int v10; // r8d
  __int64 v11; // rdi
  bool v12; // zf
  __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // ecx
  __int64 v16; // rdx
  $C774EFD68449142D8271B1EC1EB7FB26 *v17; // rcx
  int v19; // [rsp+68h] [rbp+10h] BYREF

  v2 = 0;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v4 = EtwpAcquireLoggerContextByLoggerId(CurrentServerSiloGlobals[108], *a1, 0LL);
  v5 = (_DWORD *)v4;
  if ( v4 )
  {
    v6 = v4 + 1160;
    ExAcquirePushLockExclusiveEx(v4 + 1160, 0LL);
    v5[298] = a1[1];
    v5[297] = a1[2];
    v5[299] = a1[3];
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v6);
    CurrentThread = KeGetCurrentThread();
    v19 = 0;
    if ( (unsigned int)MiGetSystemRegionType(v6) == 1 )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    --CurrentThread->SpecialApcDisable;
    v9 = ++CurrentThread->AbAllocationRegionCount;
    v10 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v12 = !_BitScanReverse((unsigned int *)&v13, v10);
      if ( v12 )
        goto LABEL_15;
      v11 = (__int64)&CurrentThread->LockEntries[v13];
      v10 &= ~(1 << v13);
      if ( (*(_BYTE *)(v11 + 26) & 1) != 0
        && (*(_DWORD *)(v11 + 32) & 1) == 0
        && (*(_QWORD *)(v11 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v6 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v11 + 40) == SessionId )
      {
        *(_BYTE *)(v11 + 26) &= ~1u;
        if ( *(_QWORD *)(v11 + 32) )
          break;
      }
    }
    if ( !v11 )
    {
LABEL_15:
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v6, SessionId, 0LL);
      goto LABEL_22;
    }
    *(_BYTE *)(v11 + 32) |= 2u;
    if ( *(__int64 *)(v11 + 32) < 0 )
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v11);
    v14 = *(_DWORD *)(v11 + 88) & 0x1FFFF;
    v15 = *(_DWORD *)(v11 + 88) & 0xFFFE0000;
    *(_BYTE *)(v11 + 25) &= ~1u;
    v19 = v14;
    *(_DWORD *)(v11 + 88) = v15;
    *(_QWORD *)(v11 + 32) = 0LL;
    v16 = (signed __int64)(v11 - (unsigned __int64)CurrentThread->LockEntries) / 96;
    if ( v9 == 1 )
      CurrentThread->AbEntrySummary |= 1 << v16;
    else
      _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v16);
LABEL_22:
    --CurrentThread->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v6, &v19);
    v12 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v12 )
    {
      v17 = &CurrentThread->152;
      if ( ($C774EFD68449142D8271B1EC1EB7FB26 *)v17->ApcState.ApcListHead[0].Flink != v17 )
        KiCheckForKernelApcDelivery((__int64)v17);
    }
    EtwpReleaseLoggerContext(v5, 0LL);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
