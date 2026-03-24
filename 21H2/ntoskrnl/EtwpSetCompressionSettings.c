/*
 * XREFs of EtwpSetCompressionSettings @ 0x1405AD864
 * Callers:
 *     NtTraceControl @ 0x1405EAF60 (NtTraceControl.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140362150 (PsGetCurrentServerSiloGlobals.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     EtwpReleaseLoggerContext @ 0x140643A38 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140643A84 (EtwpAcquireLoggerContextByLoggerId.c)
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
  _DWORD *v11; // r9
  unsigned int v12; // r8d
  __int64 v13; // rdi
  bool v14; // zf
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v17; // ecx
  __int64 v18; // rdx
  $C459BD0D405E8E46662177FB3D0A143F *v19; // rcx
  int v21; // [rsp+68h] [rbp+10h] BYREF

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
    v21 = 0;
    if ( (unsigned int)MiGetSystemRegionType(v7) == 1 )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    --CurrentThread->SpecialApcDisable;
    v10 = ++CurrentThread->AbAllocationRegionCount;
    v11 = (_DWORD *)(v7 & 0x7FFFFFFFFFFFFFFCLL);
    v12 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v14 = !_BitScanReverse((unsigned int *)&v15, v12);
      if ( v14 )
        goto LABEL_15;
      v13 = (__int64)&CurrentThread->LockEntries[v15];
      v12 &= ~(1 << v15);
      if ( (*(_BYTE *)(v13 + 26) & 1) != 0
        && (*(_DWORD *)(v13 + 32) & 1) == 0
        && (_DWORD *)(*(_QWORD *)(v13 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v11
        && *(_DWORD *)(v13 + 40) == SessionId )
      {
        *(_BYTE *)(v13 + 26) &= ~1u;
        if ( *(_QWORD *)(v13 + 32) )
          break;
      }
    }
    if ( !v13 )
    {
LABEL_15:
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v7, SessionId, 0LL);
      goto LABEL_22;
    }
    *(_BYTE *)(v13 + 32) |= 2u;
    if ( *(__int64 *)(v13 + 32) < 0 )
      KiAbEntryRemoveFromTree(v13);
    v16 = *(_DWORD *)(v13 + 88) & 0x1FFFF;
    v17 = *(_DWORD *)(v13 + 88) & 0xFFFE0000;
    *(_BYTE *)(v13 + 25) &= ~1u;
    v21 = v16;
    *(_DWORD *)(v13 + 88) = v17;
    *(_QWORD *)(v13 + 32) = 0LL;
    v18 = (signed __int64)(v13 - (unsigned __int64)CurrentThread->LockEntries) / 96;
    if ( v10 == 1 )
      CurrentThread->AbEntrySummary |= 1 << v18;
    else
      _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v18);
LABEL_22:
    --CurrentThread->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v7, (__int64)&v21, v11);
    v14 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v14 )
    {
      v19 = &CurrentThread->152;
      if ( ($C459BD0D405E8E46662177FB3D0A143F *)v19->ApcState.ApcListHead[0].Flink != v19 )
        KiCheckForKernelApcDelivery((__int64)v19);
    }
    EtwpReleaseLoggerContext(v6, 0LL);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
