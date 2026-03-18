/*
 * XREFs of FsRtlReleaseEofLock @ 0x14035AE20
 * Callers:
 *     <none>
 * Callees:
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     PsBoostThreadIoEx @ 0x140263860 (PsBoostThreadIoEx.c)
 *     FsRtlReleaseHeaderMutex @ 0x140263AD0 (FsRtlReleaseHeaderMutex.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x140359D60 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x14035A82C (ExpReleaseFastMutexContended.c)
 *     KeSetEventBoostPriorityEx @ 0x14035A898 (KeSetEventBoostPriorityEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F1844 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

_QWORD *__fastcall FsRtlReleaseEofLock(__int64 a1, volatile signed __int32 *a2)
{
  _QWORD *v3; // r15
  struct _KTHREAD *CurrentThread; // rbx
  ULONG_PTR v5; // rsi
  __int64 v6; // rcx
  char v7; // dl
  __int64 v8; // rbp
  int SessionId; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  _DWORD *v13; // r9
  bool v14; // zf
  unsigned __int8 CurrentIrql; // bl
  __int64 v16; // rbx
  _QWORD *v17; // rcx
  int v18; // eax
  ULONG_PTR v19; // rbx
  unsigned __int64 v20; // rdi
  signed __int32 v21; // eax
  _QWORD *v22; // rbx
  _QWORD *result; // rax
  _QWORD *v24; // rdx
  __int64 v25; // r8
  _QWORD *v26; // r8
  _QWORD *v27; // r8
  _QWORD *v28; // rcx
  _QWORD *v29; // r8
  _QWORD *v30; // r8
  unsigned __int8 AbOrphanedEntrySummary; // al
  unsigned __int8 v32; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v35; // eax
  _QWORD *v37; // [rsp+38h] [rbp-50h] BYREF
  _QWORD **v38; // [rsp+40h] [rbp-48h]
  int v39; // [rsp+90h] [rbp+8h] BYREF
  volatile signed __int32 *v40; // [rsp+98h] [rbp+10h]
  int v41; // [rsp+A0h] [rbp+18h]
  int v42; // [rsp+A8h] [rbp+20h] BYREF

  v40 = a2;
  v42 = 0;
  v38 = &v37;
  v39 = 0;
  v37 = &v37;
  v3 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v5, KeGetCurrentIrql(), 0LL);
  LOBYTE(v6) = CurrentThread->AbEntrySummary;
  v41 = 0;
  if ( !(_BYTE)v6 )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      v8 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, v5);
      goto LABEL_51;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    LOBYTE(v6) = AbOrphanedEntrySummary | CurrentThread->AbEntrySummary;
  }
  v7 = v6;
  _BitScanForward((unsigned int *)&v6, (unsigned __int8)v6);
  v41 = v6;
  CurrentThread->AbEntrySummary = v7 & ~(1 << v6);
  v8 = (__int64)&CurrentThread->LockEntries[v6];
  if ( !v8 )
  {
LABEL_51:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
    goto LABEL_8;
  }
  if ( v5 >= 0xFFFF800000000000uLL && byte_140C4F908[((v5 >> 39) & 0x1FF) - 256] == 1 )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  *(_DWORD *)(v8 + 40) = SessionId;
  *(_QWORD *)(v8 + 32) = v5 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_8:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v5, &v42);
  v14 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v14 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v11, v10, v12, v13);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v5, 0) )
    ExpAcquireFastMutexContended(v5, v8);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  *(_QWORD *)(v5 + 8) = KeGetCurrentThread();
  *(_DWORD *)(v5 + 48) = CurrentIrql;
  if ( a2 )
    _InterlockedIncrement(a2);
  v14 = (*(_WORD *)(a1 + 38))-- == 1;
  if ( !v14 )
    return (_QWORD *)FsRtlReleaseHeaderMutex(a1, v40);
  v16 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL);
  if ( *(_BYTE *)(a1 + 36) )
  {
    PsBoostThreadIoEx(*(_QWORD *)a1, 1, 0, 0LL);
    *(_BYTE *)(a1 + 36) = 0;
  }
  v17 = *(_QWORD **)(a1 + 8);
  if ( v17 == (_QWORD *)(a1 + 8) )
    goto LABEL_21;
  do
  {
    v24 = v17;
    v17 = (_QWORD *)*v17;
    v25 = v24[5];
    if ( v25 < 0 || v25 > v16 )
    {
      if ( !v3 )
      {
        v26 = (_QWORD *)v24[1];
        if ( (_QWORD *)v17[1] != v24 )
          goto LABEL_46;
        if ( (_QWORD *)*v26 != v24 )
          goto LABEL_46;
        *v26 = v17;
        v17[1] = v26;
        v27 = v37;
        if ( (_QWORD **)v37[1] != &v37 )
          goto LABEL_46;
        *v24 = v37;
        v24[1] = &v37;
        v3 = v24;
        v27[1] = v24;
        v37 = v24;
      }
    }
    else
    {
      v29 = (_QWORD *)v24[1];
      if ( (_QWORD *)v17[1] != v24 || (_QWORD *)*v29 != v24 || (*v29 = v17, v17[1] = v29, v30 = v38, *v38 != &v37) )
LABEL_46:
        __fastfail(3u);
      v24[1] = v38;
      *v24 = &v37;
      *v30 = v24;
      v38 = (_QWORD **)v24;
    }
  }
  while ( v17 != (_QWORD *)(a1 + 8) );
  if ( !v3 )
  {
LABEL_21:
    *(_QWORD *)a1 = 0LL;
    v18 = 0;
    *(_WORD *)(a1 + 38) = 0;
  }
  else
  {
    *(_QWORD *)a1 = v3[6];
    *(_WORD *)(a1 + 38) = 1;
    v18 = *((_DWORD *)v3 + 14);
  }
  *(_DWORD *)(a1 + 32) = v18;
  if ( v40 )
    _InterlockedIncrement(v40);
  v19 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  v20 = *(unsigned __int8 *)(v19 + 48);
  *(_QWORD *)(v19 + 8) = 0LL;
  v21 = _InterlockedCompareExchange((volatile signed __int32 *)v19, 1, 0);
  if ( v21 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)v19, v21);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v32 = KeGetCurrentIrql();
      if ( v32 <= 0xFu && (unsigned __int8)v20 <= 0xFu && v32 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v35 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v20 + 1));
        v14 = (v35 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v35;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v20);
  KeAbPostRelease(v19);
  v22 = v37;
  for ( result = &v37; v22 != &v37; result = &v37 )
  {
    v28 = v22;
    v22 = (_QWORD *)*v22;
    v39 = *((_DWORD *)v28 + 14);
    KeSetEventBoostPriorityEx((__int64)(v28 + 2), 0LL, (__int64)&v39, 0LL, 1, 0);
  }
  return result;
}
