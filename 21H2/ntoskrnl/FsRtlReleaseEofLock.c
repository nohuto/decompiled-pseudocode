/*
 * XREFs of FsRtlReleaseEofLock @ 0x1402F99D0
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExpReleaseFastMutexContended @ 0x1402FC46C (ExpReleaseFastMutexContended.c)
 *     KeSetEventBoostPriorityEx @ 0x1402FC4D8 (KeSetEventBoostPriorityEx.c)
 *     ExpAcquireFastMutexContended @ 0x1402FD910 (ExpAcquireFastMutexContended.c)
 *     FsRtlReleaseHeaderMutex @ 0x1403538F0 (FsRtlReleaseHeaderMutex.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     PsBoostThreadIoEx @ 0x140358550 (PsBoostThreadIoEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F9348 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
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
  bool v11; // zf
  unsigned __int8 CurrentIrql; // bl
  __int64 v13; // rbx
  _QWORD *v14; // rcx
  int v15; // eax
  ULONG_PTR v16; // rbx
  unsigned __int64 v17; // rdi
  unsigned __int32 v18; // eax
  _QWORD *v19; // rbx
  _QWORD *result; // rax
  _QWORD *v21; // rdx
  __int64 v22; // r8
  _QWORD *v23; // r8
  _QWORD *v24; // r8
  _QWORD *v25; // rcx
  _QWORD *v26; // r8
  _QWORD *v27; // r8
  unsigned __int8 AbOrphanedEntrySummary; // al
  unsigned __int8 v29; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v32; // eax
  _QWORD *v34; // [rsp+38h] [rbp-50h] BYREF
  _QWORD **v35; // [rsp+40h] [rbp-48h]
  int v36; // [rsp+90h] [rbp+8h] BYREF
  volatile signed __int32 *v37; // [rsp+98h] [rbp+10h]
  int v38; // [rsp+A0h] [rbp+18h]
  int v39; // [rsp+A8h] [rbp+20h]

  v37 = a2;
  v39 = 0;
  v35 = &v34;
  v36 = 0;
  v34 = &v34;
  v3 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v5, KeGetCurrentIrql(), 0LL);
  LOBYTE(v6) = CurrentThread->AbEntrySummary;
  v38 = 0;
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
  v38 = v6;
  CurrentThread->AbEntrySummary = v7 & ~(1 << v6);
  v8 = (__int64)&CurrentThread->LockEntries[v6];
  if ( !v8 )
  {
LABEL_51:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
    goto LABEL_8;
  }
  if ( v5 >= 0xFFFF800000000000uLL && byte_140C4FA08[((v5 >> 39) & 0x1FF) - 256] == 1 )
    SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  *(_DWORD *)(v8 + 40) = SessionId;
  *(_QWORD *)(v8 + 32) = v5 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_8:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
  v11 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v11 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v5, 0) )
    ExpAcquireFastMutexContended(v5, (PRTL_BALANCED_NODE)v8);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  *(_QWORD *)(v5 + 8) = KeGetCurrentThread();
  *(_DWORD *)(v5 + 48) = CurrentIrql;
  if ( a2 )
    _InterlockedIncrement(a2);
  v11 = (*(_WORD *)(a1 + 38))-- == 1;
  if ( !v11 )
    return (_QWORD *)FsRtlReleaseHeaderMutex(a1, v37);
  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL);
  if ( *(_BYTE *)(a1 + 36) )
  {
    LOBYTE(v10) = 1;
    PsBoostThreadIoEx(*(_QWORD *)a1, v10, 0LL, 0LL);
    *(_BYTE *)(a1 + 36) = 0;
  }
  v14 = *(_QWORD **)(a1 + 8);
  if ( v14 == (_QWORD *)(a1 + 8) )
    goto LABEL_21;
  do
  {
    v21 = v14;
    v14 = (_QWORD *)*v14;
    v22 = v21[5];
    if ( v22 < 0 || v22 > v13 )
    {
      if ( !v3 )
      {
        v23 = (_QWORD *)v21[1];
        if ( (_QWORD *)v14[1] != v21 )
          goto LABEL_46;
        if ( (_QWORD *)*v23 != v21 )
          goto LABEL_46;
        *v23 = v14;
        v14[1] = v23;
        v24 = v34;
        if ( (_QWORD **)v34[1] != &v34 )
          goto LABEL_46;
        *v21 = v34;
        v21[1] = &v34;
        v3 = v21;
        v24[1] = v21;
        v34 = v21;
      }
    }
    else
    {
      v26 = (_QWORD *)v21[1];
      if ( (_QWORD *)v14[1] != v21 || (_QWORD *)*v26 != v21 || (*v26 = v14, v14[1] = v26, v27 = v35, *v35 != &v34) )
LABEL_46:
        __fastfail(3u);
      v21[1] = v35;
      *v21 = &v34;
      *v27 = v21;
      v35 = (_QWORD **)v21;
    }
  }
  while ( v14 != (_QWORD *)(a1 + 8) );
  if ( !v3 )
  {
LABEL_21:
    *(_QWORD *)a1 = 0LL;
    v15 = 0;
    *(_WORD *)(a1 + 38) = 0;
  }
  else
  {
    *(_QWORD *)a1 = v3[6];
    *(_WORD *)(a1 + 38) = 1;
    v15 = *((_DWORD *)v3 + 14);
  }
  *(_DWORD *)(a1 + 32) = v15;
  if ( v37 )
    _InterlockedIncrement(v37);
  v16 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  v17 = *(unsigned __int8 *)(v16 + 48);
  *(_QWORD *)(v16 + 8) = 0LL;
  v18 = _InterlockedCompareExchange((volatile signed __int32 *)v16, 1, 0);
  if ( v18 )
    ExpReleaseFastMutexContended(v16, v18);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v29 = KeGetCurrentIrql();
      if ( v29 <= 0xFu && (unsigned __int8)v17 <= 0xFu && v29 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
        v11 = (v32 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v32;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v17);
  KeAbPostRelease(v16);
  v19 = v34;
  for ( result = &v34; v19 != &v34; result = &v34 )
  {
    v25 = v19;
    v19 = (_QWORD *)*v19;
    v36 = *((_DWORD *)v25 + 14);
    KeSetEventBoostPriorityEx((_DWORD)v25 + 16, 0, (unsigned int)&v36, 0, 1, 0);
  }
  return result;
}
