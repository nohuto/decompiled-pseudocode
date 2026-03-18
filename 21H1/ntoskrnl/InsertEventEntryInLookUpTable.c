/*
 * XREFs of InsertEventEntryInLookUpTable @ 0x140372880
 * Callers:
 *     _tlgWriteAgg @ 0x1403727B4 (_tlgWriteAgg.c)
 * Callees:
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027D690 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14027D890 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402814C0 (ExAcquireSpinLockShared.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x14035A060 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     ComputeEventEntryHash @ 0x140372C40 (ComputeEventEntryHash.c)
 *     CompareEventEntry @ 0x140372D8C (CompareEventEntry.c)
 *     CreateNewEventEntry @ 0x140372E18 (CreateNewEventEntry.c)
 *     EnableFlushTimer @ 0x140373084 (EnableFlushTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F1844 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall InsertEventEntryInLookUpTable(__int64 a1, __int64 a2, char a3, __int64 a4, unsigned __int8 a5)
{
  __int64 v5; // rbx
  unsigned __int8 v6; // r14
  unsigned int v7; // r13d
  int v8; // r15d
  volatile signed __int64 *v9; // rbp
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v11; // r14
  __int64 v12; // rcx
  char v13; // dl
  int SessionId; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  _DWORD *v18; // r9
  bool v19; // zf
  __int64 v20; // rcx
  char v21; // bp
  volatile signed __int64 *i; // rsi
  volatile signed __int64 v23; // rsi
  int v24; // eax
  unsigned __int8 v25; // r9
  signed __int64 v26; // rdx
  __int64 v27; // rax
  int v28; // r10d
  volatile signed __int64 *v29; // r8
  unsigned int NewEventEntry; // eax
  unsigned int v32; // eax
  unsigned __int8 AbOrphanedEntrySummary; // al
  signed __int64 v34; // rax
  volatile signed __int64 v35; // rtt
  volatile LONG *v36; // rcx
  unsigned __int8 v37; // bl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v40; // eax
  int v41; // [rsp+40h] [rbp-78h] BYREF
  signed __int64 v42; // [rsp+48h] [rbp-70h] BYREF
  __int64 v43; // [rsp+50h] [rbp-68h]
  __int64 CurrentIrql; // [rsp+58h] [rbp-60h]
  int v45; // [rsp+C8h] [rbp+10h]

  v45 = a2;
  v5 = *(_QWORD *)(a1 + 48);
  LOBYTE(a2) = a3;
  v6 = a5;
  LOBYTE(a1) = a5;
  v42 = 0LL;
  v43 = v5;
  v7 = 0;
  v8 = ComputeEventEntryHash(a1, a2, a4);
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
      v41 = 0;
      v9 = (volatile signed __int64 *)(v5 + 272);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      ++CurrentThread->AbAllocationRegionCount;
      v11 = 0LL;
      if ( CurrentThread->AbAllocationRegionCount != 1 )
        KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v5 + 272, KeGetCurrentIrql(), 0LL);
      LOBYTE(v12) = CurrentThread->AbEntrySummary;
      if ( !(_BYTE)v12 )
      {
        if ( !CurrentThread->AbOrphanedEntrySummary )
        {
          if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
            EtwTraceAutoBoostEntryExhaustion(CurrentThread, v5 + 272);
          goto LABEL_48;
        }
        AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
        CurrentThread->AbOrphanedEntrySummary = 0;
        LOBYTE(v12) = AbOrphanedEntrySummary | CurrentThread->AbEntrySummary;
      }
      v13 = v12;
      _BitScanForward((unsigned int *)&v12, (unsigned __int8)v12);
      CurrentThread->AbEntrySummary = v13 & ~(1 << v12);
      v11 = (__int64)&CurrentThread->LockEntries[v12];
      if ( v11 )
      {
        if ( (unsigned __int64)v9 >= 0xFFFF800000000000uLL
          && byte_140C4F908[(((unsigned __int64)v9 >> 39) & 0x1FF) - 256] == 1 )
        {
          SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
        }
        else
        {
          SessionId = -1;
        }
        *(_DWORD *)(v11 + 40) = SessionId;
        *(_QWORD *)(v11 + 32) = (unsigned __int64)v9 & 0x7FFFFFFFFFFFFFFCLL;
        goto LABEL_10;
      }
LABEL_48:
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
LABEL_10:
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v5 + 272, &v41);
      v19 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v19
        && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v16, v15, v17, v18);
      }
      LODWORD(v20) = 17;
      if ( _InterlockedCompareExchange64(v9, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((unsigned __int64 *)(v5 + 272), v11, v5 + 272);
      if ( v11 )
        *(_BYTE *)(v11 + 26) |= 1u;
      v6 = a5;
      v21 = 0;
      goto LABEL_18;
    }
    if ( *(_BYTE *)(v5 + 373) )
      KeBugCheckEx(0xD1u, v5 + 280, KeGetCurrentIrql(), 1uLL, 0LL);
    ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v5 + 280));
  }
  v21 = 1;
LABEL_18:
  for ( i = (volatile signed __int64 *)(v5 + 8LL * (v8 & 0x1F));
        ;
        i = (volatile signed __int64 *)((((__int64)v24 >> 63) & 0xFFFFFFFFFFFFFFF8uLL) + v23 + 32) )
  {
    if ( !*i )
    {
      if ( *(_DWORD *)(v5 + 256) >= 0x400u )
      {
        ++*(_DWORD *)(v5 + 316);
        v7 = -1073741789;
        goto LABEL_29;
      }
      if ( !v42 )
      {
        LOBYTE(v17) = a3;
        LOBYTE(v20) = *(_BYTE *)(v5 + 373);
        NewEventEntry = CreateNewEventEntry(v20, v45, v17, a4, v6, v8, (__int64)&v42);
        v7 = NewEventEntry;
        if ( !v42 )
        {
          if ( NewEventEntry == -1073741801 )
            ++*(_DWORD *)(v5 + 320);
          else
            ++*(_DWORD *)(v5 + 324);
          goto LABEL_29;
        }
      }
      if ( !_InterlockedCompareExchange64(i, v42, 0LL) )
      {
        v42 = 0LL;
        if ( !_InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 256), 1u) )
          EnableFlushTimer(*(_QWORD *)(v5 + 360), *(unsigned int *)(v5 + 368));
        v32 = *(_DWORD *)(v5 + 256);
        if ( *(_DWORD *)(v5 + 304) < v32 )
          *(_DWORD *)(v5 + 304) = v32;
        goto LABEL_29;
      }
    }
    v23 = *i;
    v20 = *(unsigned int *)(v23 + 40);
    if ( v8 == (_DWORD)v20 )
    {
      LOBYTE(v20) = a3;
      v24 = CompareEventEntry(v20, a4, v23);
    }
    else
    {
      v24 = v8 - v20;
    }
    if ( !v24 )
      break;
  }
  if ( v23 )
  {
    v25 = 2;
    if ( v6 )
    {
      do
      {
        v26 = **(_QWORD **)(a4 + 16LL * v25);
        v27 = *(_QWORD *)(v23 + 16);
        v28 = *(unsigned __int8 *)(v27 + 16LL * v25 + 13);
        v29 = *(volatile signed __int64 **)(v27 + 16LL * v25);
        if ( v28 == 113 )
        {
          _InterlockedExchangeAdd64(v29, v26);
        }
        else if ( (unsigned int)(v28 - 114) <= 1 )
        {
          do
          {
            v34 = *v29;
            if ( v28 == 114 )
            {
              if ( v26 >= v34 )
                break;
            }
            else if ( v26 <= v34 )
            {
              break;
            }
            v35 = *v29;
          }
          while ( v35 != _InterlockedCompareExchange64(v29, v26, v34) );
        }
        ++v25;
      }
      while ( v25 < (unsigned int)v6 + 2 );
      v5 = v43;
    }
  }
LABEL_29:
  if ( v21 )
  {
    v36 = (volatile LONG *)(v5 + 280);
    v37 = CurrentIrql;
    ExReleaseSpinLockSharedFromDpcLevel(v36);
    if ( v37 < 2u )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v40 = ~(unsigned __int16)(-1LL << (v37 + 1));
          v19 = (v40 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v40;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v37);
    }
  }
  else
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 272), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v5 + 272));
    KeAbPostRelease(v5 + 272);
  }
  if ( v42 )
    ExFreePoolWithTag(*(PVOID *)(v42 + 16), 0);
  return v7;
}
