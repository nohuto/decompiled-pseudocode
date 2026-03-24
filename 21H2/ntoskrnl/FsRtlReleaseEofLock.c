/*
 * XREFs of FsRtlReleaseEofLock @ 0x1402EEC80
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     ExpReleaseFastMutexContended @ 0x1402F171C (ExpReleaseFastMutexContended.c)
 *     KeSetEventBoostPriorityEx @ 0x1402F1788 (KeSetEventBoostPriorityEx.c)
 *     ExpAcquireFastMutexContended @ 0x1402F2BC0 (ExpAcquireFastMutexContended.c)
 *     FsRtlReleaseHeaderMutex @ 0x140348BA0 (FsRtlReleaseHeaderMutex.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     PsBoostThreadIoEx @ 0x14034D800 (PsBoostThreadIoEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F921C (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
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
  bool v12; // zf
  unsigned __int8 CurrentIrql; // bl
  __int64 v14; // rbx
  _QWORD *v15; // rcx
  int v16; // eax
  ULONG_PTR v17; // rbx
  unsigned __int64 v18; // rdi
  unsigned __int32 v19; // eax
  _QWORD *v20; // rbx
  _QWORD *result; // rax
  _QWORD *v22; // rdx
  __int64 v23; // r8
  _QWORD *v24; // r8
  _QWORD *v25; // r8
  _QWORD *v26; // rcx
  _QWORD *v27; // r8
  _QWORD *v28; // r8
  unsigned __int8 AbOrphanedEntrySummary; // al
  unsigned __int8 v30; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v33; // eax
  _QWORD *v35; // [rsp+38h] [rbp-50h] BYREF
  _QWORD **v36; // [rsp+40h] [rbp-48h]
  int v37; // [rsp+90h] [rbp+8h] BYREF
  volatile signed __int32 *v38; // [rsp+98h] [rbp+10h]
  int v39; // [rsp+A0h] [rbp+18h]
  int v40; // [rsp+A8h] [rbp+20h]

  v38 = a2;
  v40 = 0;
  v36 = &v35;
  v37 = 0;
  v35 = &v35;
  v3 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v5, KeGetCurrentIrql(), 0LL);
  LOBYTE(v6) = CurrentThread->AbEntrySummary;
  v39 = 0;
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
  v39 = v6;
  CurrentThread->AbEntrySummary = v7 & ~(1 << v6);
  v8 = (__int64)&CurrentThread->LockEntries[v6];
  if ( !v8 )
  {
LABEL_51:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
    goto LABEL_8;
  }
  if ( v5 >= 0xFFFF800000000000uLL && byte_140C4F9C8[((v5 >> 39) & 0x1FF) - 256] == 1 )
    SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  *(_DWORD *)(v8 + 40) = SessionId;
  *(_QWORD *)(v8 + 32) = v5 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_8:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
  v12 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v12 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v11);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v5, 0) )
    ExpAcquireFastMutexContended(v5);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  *(_QWORD *)(v5 + 8) = KeGetCurrentThread();
  *(_DWORD *)(v5 + 48) = CurrentIrql;
  if ( a2 )
    _InterlockedIncrement(a2);
  v12 = (*(_WORD *)(a1 + 38))-- == 1;
  if ( !v12 )
    return (_QWORD *)FsRtlReleaseHeaderMutex(a1, v38);
  v14 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL);
  if ( *(_BYTE *)(a1 + 36) )
  {
    LOBYTE(v10) = 1;
    PsBoostThreadIoEx(*(_QWORD *)a1, v10, 0LL, 0LL);
    *(_BYTE *)(a1 + 36) = 0;
  }
  v15 = *(_QWORD **)(a1 + 8);
  if ( v15 == (_QWORD *)(a1 + 8) )
    goto LABEL_21;
  do
  {
    v22 = v15;
    v15 = (_QWORD *)*v15;
    v23 = v22[5];
    if ( v23 < 0 || v23 > v14 )
    {
      if ( !v3 )
      {
        v24 = (_QWORD *)v22[1];
        if ( (_QWORD *)v15[1] != v22 )
          goto LABEL_46;
        if ( (_QWORD *)*v24 != v22 )
          goto LABEL_46;
        *v24 = v15;
        v15[1] = v24;
        v25 = v35;
        if ( (_QWORD **)v35[1] != &v35 )
          goto LABEL_46;
        *v22 = v35;
        v22[1] = &v35;
        v3 = v22;
        v25[1] = v22;
        v35 = v22;
      }
    }
    else
    {
      v27 = (_QWORD *)v22[1];
      if ( (_QWORD *)v15[1] != v22 || (_QWORD *)*v27 != v22 || (*v27 = v15, v15[1] = v27, v28 = v36, *v36 != &v35) )
LABEL_46:
        __fastfail(3u);
      v22[1] = v36;
      *v22 = &v35;
      *v28 = v22;
      v36 = (_QWORD **)v22;
    }
  }
  while ( v15 != (_QWORD *)(a1 + 8) );
  if ( !v3 )
  {
LABEL_21:
    *(_QWORD *)a1 = 0LL;
    v16 = 0;
    *(_WORD *)(a1 + 38) = 0;
  }
  else
  {
    *(_QWORD *)a1 = v3[6];
    *(_WORD *)(a1 + 38) = 1;
    v16 = *((_DWORD *)v3 + 14);
  }
  *(_DWORD *)(a1 + 32) = v16;
  if ( v38 )
    _InterlockedIncrement(v38);
  v17 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  v18 = *(unsigned __int8 *)(v17 + 48);
  *(_QWORD *)(v17 + 8) = 0LL;
  v19 = _InterlockedCompareExchange((volatile signed __int32 *)v17, 1, 0);
  if ( v19 )
    ExpReleaseFastMutexContended(v17, v19);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v30 = KeGetCurrentIrql();
      if ( v30 <= 0xFu && (unsigned __int8)v18 <= 0xFu && v30 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v33 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
        v12 = (v33 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v33;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v18);
  KeAbPostRelease(v17);
  v20 = v35;
  for ( result = &v35; v20 != &v35; result = &v35 )
  {
    v26 = v20;
    v20 = (_QWORD *)*v20;
    v37 = *((_DWORD *)v26 + 14);
    KeSetEventBoostPriorityEx((_DWORD)v26 + 16, 0, (unsigned int)&v37, 0, 1, 0);
  }
  return result;
}
