/*
 * XREFs of EtwpSetCompressionSettings @ 0x1405ADA94
 * Callers:
 *     NtTraceControl @ 0x1406DA6C0 (NtTraceControl.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     EtwpReleaseLoggerContext @ 0x140638848 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140638894 (EtwpAcquireLoggerContextByLoggerId.c)
 */

__int64 __fastcall EtwpSetCompressionSettings(unsigned int *a1, __int64 a2)
{
  unsigned int v3; // esi
  _QWORD *CurrentServerSiloGlobals; // rax
  __int64 v5; // rax
  _DWORD *v6; // r14
  unsigned __int64 v7; // rbp
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v10; // r15
  unsigned int v11; // r8d
  __int64 v12; // rdi
  bool v13; // zf
  __int64 v14; // rcx
  int v15; // eax
  unsigned int v16; // ecx
  __int64 v17; // rdx
  int v19; // [rsp+68h] [rbp+10h] BYREF

  v3 = 0;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals((__int64)a1, a2);
  v5 = EtwpAcquireLoggerContextByLoggerId(CurrentServerSiloGlobals[108], *a1, 0LL);
  v6 = (_DWORD *)v5;
  if ( v5 )
  {
    v7 = v5 + 1128;
    ExAcquirePushLockExclusiveEx(v5 + 1128, 0LL);
    v6[290] = a1[1];
    v6[289] = a1[2];
    v6[291] = a1[3];
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v7);
    CurrentThread = KeGetCurrentThread();
    v19 = 0;
    if ( (unsigned int)MiGetSystemRegionType(v7) == 1 )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    --CurrentThread->SpecialApcDisable;
    v10 = ++CurrentThread->AbAllocationRegionCount;
    v11 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v13 = !_BitScanReverse((unsigned int *)&v14, v11);
      if ( v13 )
        goto LABEL_15;
      v12 = (__int64)&CurrentThread->LockEntries[v14];
      v11 &= ~(1 << v14);
      if ( (*(_BYTE *)(v12 + 26) & 1) != 0
        && (*(_DWORD *)(v12 + 32) & 1) == 0
        && (*(_QWORD *)(v12 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v7 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v12 + 40) == SessionId )
      {
        *(_BYTE *)(v12 + 26) &= ~1u;
        if ( *(_QWORD *)(v12 + 32) )
          break;
      }
    }
    if ( !v12 )
    {
LABEL_15:
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v7, SessionId, 0LL);
      goto LABEL_22;
    }
    *(_BYTE *)(v12 + 32) |= 2u;
    if ( *(__int64 *)(v12 + 32) < 0 )
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v12);
    v15 = *(_DWORD *)(v12 + 88) & 0x1FFFF;
    v16 = *(_DWORD *)(v12 + 88) & 0xFFFE0000;
    *(_BYTE *)(v12 + 25) &= ~1u;
    v19 = v15;
    *(_DWORD *)(v12 + 88) = v16;
    *(_QWORD *)(v12 + 32) = 0LL;
    v17 = (signed __int64)(v12 - (unsigned __int64)CurrentThread->LockEntries) / 96;
    if ( v10 == 1 )
      CurrentThread->AbEntrySummary |= 1 << v17;
    else
      _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v17);
LABEL_22:
    --CurrentThread->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v7, (unsigned int *)&v19);
    v13 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v13 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    EtwpReleaseLoggerContext(v6, 0LL);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
