/*
 * XREFs of InsertEventEntryInLookUpTable @ 0x140375F60
 * Callers:
 *     _tlgWriteAgg @ 0x140375E94 (_tlgWriteAgg.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x14021CD80 (ExAcquireSpinLockShared.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x1402F1470 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402F2EC0 (ExfAcquirePushLockSharedEx.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14031C800 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14031C8D0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     ComputeEventEntryHash @ 0x140376320 (ComputeEventEntryHash.c)
 *     CompareEventEntry @ 0x14037646C (CompareEventEntry.c)
 *     CreateNewEventEntry @ 0x1403764F8 (CreateNewEventEntry.c)
 *     EnableFlushTimer @ 0x140376764 (EnableFlushTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F921C (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall InsertEventEntryInLookUpTable(__int64 a1, __int64 a2, char a3, __int64 a4, unsigned __int8 a5)
{
  __int64 v5; // rbx
  unsigned __int8 v6; // r14
  unsigned int v7; // r13d
  _DWORD *v8; // r9
  int v9; // r15d
  volatile signed __int64 *v10; // rbp
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v12; // r14
  __int64 v13; // rcx
  char v14; // dl
  int SessionId; // eax
  __int64 v16; // rcx
  int v17; // r8d
  bool v18; // zf
  __int64 v19; // rcx
  char v20; // bp
  volatile signed __int64 *i; // rsi
  volatile signed __int64 v22; // rsi
  int v23; // eax
  unsigned __int8 v24; // r9
  signed __int64 v25; // rdx
  __int64 v26; // rax
  int v27; // r10d
  volatile signed __int64 *v28; // r8
  unsigned int NewEventEntry; // eax
  unsigned int v31; // eax
  unsigned __int8 AbOrphanedEntrySummary; // al
  signed __int64 v33; // rax
  volatile signed __int64 v34; // rtt
  volatile LONG *v35; // rcx
  unsigned __int8 v36; // bl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v39; // eax
  int v40; // [rsp+40h] [rbp-78h] BYREF
  signed __int64 v41; // [rsp+48h] [rbp-70h] BYREF
  __int64 v42; // [rsp+50h] [rbp-68h]
  __int64 CurrentIrql; // [rsp+58h] [rbp-60h]
  int v44; // [rsp+C8h] [rbp+10h]

  v44 = a2;
  v5 = *(_QWORD *)(a1 + 48);
  LOBYTE(a2) = a3;
  v6 = a5;
  LOBYTE(a1) = a5;
  v41 = 0LL;
  v42 = v5;
  v7 = 0;
  v9 = ComputeEventEntryHash(a1, a2, a4);
  CurrentIrql = KeGetCurrentIrql();
  if ( (unsigned __int8)CurrentIrql >= 2u )
  {
    if ( *(_BYTE *)(v5 + 373) )
      KeBugCheckEx(0xD1u, v5 + 280, KeGetCurrentIrql(), 1uLL, 0LL);
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v5 + 280));
  }
  else
  {
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
    {
      v40 = 0;
      v10 = (volatile signed __int64 *)(v5 + 272);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      ++CurrentThread->AbAllocationRegionCount;
      v12 = 0LL;
      if ( CurrentThread->AbAllocationRegionCount != 1 )
        KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v5 + 272, KeGetCurrentIrql(), 0LL);
      LOBYTE(v13) = CurrentThread->AbEntrySummary;
      if ( !(_BYTE)v13 )
      {
        if ( !CurrentThread->AbOrphanedEntrySummary )
        {
          if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
            EtwTraceAutoBoostEntryExhaustion(CurrentThread, v5 + 272);
          goto LABEL_48;
        }
        AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
        CurrentThread->AbOrphanedEntrySummary = 0;
        LOBYTE(v13) = AbOrphanedEntrySummary | CurrentThread->AbEntrySummary;
      }
      v14 = v13;
      _BitScanForward((unsigned int *)&v13, (unsigned __int8)v13);
      CurrentThread->AbEntrySummary = v14 & ~(1 << v13);
      v12 = (__int64)&CurrentThread->LockEntries[v13];
      if ( v12 )
      {
        if ( (unsigned __int64)v10 >= 0xFFFF800000000000uLL
          && byte_140C4F9C8[(((unsigned __int64)v10 >> 39) & 0x1FF) - 256] == 1 )
        {
          SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
        }
        else
        {
          SessionId = -1;
        }
        *(_DWORD *)(v12 + 40) = SessionId;
        *(_QWORD *)(v12 + 32) = (unsigned __int64)v10 & 0x7FFFFFFFFFFFFFFCLL;
        goto LABEL_10;
      }
LABEL_48:
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
LABEL_10:
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v5 + 272, (__int64)&v40, v8);
      v18 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v18
        && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v16);
      }
      LODWORD(v19) = 17;
      if ( _InterlockedCompareExchange64(v10, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((unsigned __int64 *)(v5 + 272), v12, v5 + 272);
      if ( v12 )
        *(_BYTE *)(v12 + 26) |= 1u;
      v6 = a5;
      v20 = 0;
      goto LABEL_18;
    }
    if ( *(_BYTE *)(v5 + 373) )
      KeBugCheckEx(0xD1u, v5 + 280, KeGetCurrentIrql(), 1uLL, 0LL);
    ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v5 + 280));
  }
  v20 = 1;
LABEL_18:
  for ( i = (volatile signed __int64 *)(v5 + 8LL * (v9 & 0x1F));
        ;
        i = (volatile signed __int64 *)((((__int64)v23 >> 63) & 0xFFFFFFFFFFFFFFF8uLL) + v22 + 32) )
  {
    if ( !*i )
    {
      if ( *(_DWORD *)(v5 + 256) >= 0x400u )
      {
        ++*(_DWORD *)(v5 + 316);
        v7 = -1073741789;
        goto LABEL_29;
      }
      if ( !v41 )
      {
        LOBYTE(v17) = a3;
        LOBYTE(v19) = *(_BYTE *)(v5 + 373);
        NewEventEntry = CreateNewEventEntry(v19, v44, v17, a4, v6, v9, (__int64)&v41);
        v7 = NewEventEntry;
        if ( !v41 )
        {
          if ( NewEventEntry == -1073741801 )
            ++*(_DWORD *)(v5 + 320);
          else
            ++*(_DWORD *)(v5 + 324);
          goto LABEL_29;
        }
      }
      if ( !_InterlockedCompareExchange64(i, v41, 0LL) )
      {
        v41 = 0LL;
        if ( !_InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 256), 1u) )
          EnableFlushTimer(*(_QWORD *)(v5 + 360), *(unsigned int *)(v5 + 368));
        v31 = *(_DWORD *)(v5 + 256);
        if ( *(_DWORD *)(v5 + 304) < v31 )
          *(_DWORD *)(v5 + 304) = v31;
        goto LABEL_29;
      }
    }
    v22 = *i;
    v19 = *(unsigned int *)(v22 + 40);
    if ( v9 == (_DWORD)v19 )
    {
      LOBYTE(v19) = a3;
      v23 = CompareEventEntry(v19, a4, v22);
    }
    else
    {
      v23 = v9 - v19;
    }
    if ( !v23 )
      break;
  }
  if ( v22 )
  {
    v24 = 2;
    if ( v6 )
    {
      do
      {
        v25 = **(_QWORD **)(a4 + 16LL * v24);
        v26 = *(_QWORD *)(v22 + 16);
        v27 = *(unsigned __int8 *)(v26 + 16LL * v24 + 13);
        v28 = *(volatile signed __int64 **)(v26 + 16LL * v24);
        if ( v27 == 113 )
        {
          _InterlockedExchangeAdd64(v28, v25);
        }
        else if ( (unsigned int)(v27 - 114) <= 1 )
        {
          do
          {
            v33 = *v28;
            if ( v27 == 114 )
            {
              if ( v25 >= v33 )
                break;
            }
            else if ( v25 <= v33 )
            {
              break;
            }
            v34 = *v28;
          }
          while ( v34 != _InterlockedCompareExchange64(v28, v25, v33) );
        }
        ++v24;
      }
      while ( v24 < (unsigned int)v6 + 2 );
      v5 = v42;
    }
  }
LABEL_29:
  if ( v20 )
  {
    v35 = (volatile LONG *)(v5 + 280);
    v36 = CurrentIrql;
    ExReleaseSpinLockSharedFromDpcLevel(v35);
    if ( v36 < 2u )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v39 = ~(unsigned __int16)(-1LL << (v36 + 1));
          v18 = (v39 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v39;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v36);
    }
  }
  else
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 272), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v5 + 272));
    KeAbPostRelease(v5 + 272);
  }
  if ( v41 )
    ExFreePoolWithTag(*(PVOID *)(v41 + 16), 0);
  return v7;
}
