/*
 * XREFs of InsertEventEntryInLookUpTable @ 0x140375AB0
 * Callers:
 *     _tlgWriteAgg @ 0x1403759E4 (_tlgWriteAgg.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x1402C1680 (ExAcquireSpinLockShared.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FDC10 (ExfAcquirePushLockSharedEx.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140327550 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140327620 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     ComputeEventEntryHash @ 0x140375E70 (ComputeEventEntryHash.c)
 *     CompareEventEntry @ 0x140375FBC (CompareEventEntry.c)
 *     CreateNewEventEntry @ 0x140376048 (CreateNewEventEntry.c)
 *     EnableFlushTimer @ 0x1403762B4 (EnableFlushTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F9348 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
  int v15; // r8d
  bool v16; // zf
  __int64 v17; // rcx
  char v18; // bp
  volatile signed __int64 *i; // rsi
  volatile signed __int64 v20; // rsi
  int v21; // eax
  unsigned __int8 v22; // r9
  signed __int64 v23; // rdx
  __int64 v24; // rax
  int v25; // r10d
  volatile signed __int64 *v26; // r8
  unsigned int NewEventEntry; // eax
  unsigned int v29; // eax
  unsigned __int8 AbOrphanedEntrySummary; // al
  signed __int64 v31; // rax
  volatile signed __int64 v32; // rtt
  volatile LONG *v33; // rcx
  unsigned __int8 v34; // bl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v37; // eax
  unsigned int v38; // [rsp+40h] [rbp-78h] BYREF
  signed __int64 v39; // [rsp+48h] [rbp-70h] BYREF
  __int64 v40; // [rsp+50h] [rbp-68h]
  __int64 CurrentIrql; // [rsp+58h] [rbp-60h]
  int v42; // [rsp+C8h] [rbp+10h]

  v42 = a2;
  v5 = *(_QWORD *)(a1 + 48);
  LOBYTE(a2) = a3;
  v6 = a5;
  LOBYTE(a1) = a5;
  v39 = 0LL;
  v40 = v5;
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
      v38 = 0;
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
          && byte_140C4FA08[(((unsigned __int64)v9 >> 39) & 0x1FF) - 256] == 1 )
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
      KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v5 + 272, &v38);
      v16 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v16
        && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      LODWORD(v17) = 17;
      if ( _InterlockedCompareExchange64(v9, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((unsigned __int64 *)(v5 + 272), (_RTL_BALANCED_NODE *)v11, v5 + 272);
      if ( v11 )
        *(_BYTE *)(v11 + 26) |= 1u;
      v6 = a5;
      v18 = 0;
      goto LABEL_18;
    }
    if ( *(_BYTE *)(v5 + 373) )
      KeBugCheckEx(0xD1u, v5 + 280, KeGetCurrentIrql(), 1uLL, 0LL);
    ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v5 + 280));
  }
  v18 = 1;
LABEL_18:
  for ( i = (volatile signed __int64 *)(v5 + 8LL * (v8 & 0x1F));
        ;
        i = (volatile signed __int64 *)((((__int64)v21 >> 63) & 0xFFFFFFFFFFFFFFF8uLL) + v20 + 32) )
  {
    if ( !*i )
    {
      if ( *(_DWORD *)(v5 + 256) >= 0x400u )
      {
        ++*(_DWORD *)(v5 + 316);
        v7 = -1073741789;
        goto LABEL_29;
      }
      if ( !v39 )
      {
        LOBYTE(v15) = a3;
        LOBYTE(v17) = *(_BYTE *)(v5 + 373);
        NewEventEntry = CreateNewEventEntry(v17, v42, v15, a4, v6, v8, (__int64)&v39);
        v7 = NewEventEntry;
        if ( !v39 )
        {
          if ( NewEventEntry == -1073741801 )
            ++*(_DWORD *)(v5 + 320);
          else
            ++*(_DWORD *)(v5 + 324);
          goto LABEL_29;
        }
      }
      if ( !_InterlockedCompareExchange64(i, v39, 0LL) )
      {
        v39 = 0LL;
        if ( !_InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 256), 1u) )
          EnableFlushTimer(*(_QWORD *)(v5 + 360), *(unsigned int *)(v5 + 368));
        v29 = *(_DWORD *)(v5 + 256);
        if ( *(_DWORD *)(v5 + 304) < v29 )
          *(_DWORD *)(v5 + 304) = v29;
        goto LABEL_29;
      }
    }
    v20 = *i;
    v17 = *(unsigned int *)(v20 + 40);
    if ( v8 == (_DWORD)v17 )
    {
      LOBYTE(v17) = a3;
      v21 = CompareEventEntry(v17, a4, v20);
    }
    else
    {
      v21 = v8 - v17;
    }
    if ( !v21 )
      break;
  }
  if ( v20 )
  {
    v22 = 2;
    if ( v6 )
    {
      do
      {
        v23 = **(_QWORD **)(a4 + 16LL * v22);
        v24 = *(_QWORD *)(v20 + 16);
        v25 = *(unsigned __int8 *)(v24 + 16LL * v22 + 13);
        v26 = *(volatile signed __int64 **)(v24 + 16LL * v22);
        if ( v25 == 113 )
        {
          _InterlockedExchangeAdd64(v26, v23);
        }
        else if ( (unsigned int)(v25 - 114) <= 1 )
        {
          do
          {
            v31 = *v26;
            if ( v25 == 114 )
            {
              if ( v23 >= v31 )
                break;
            }
            else if ( v23 <= v31 )
            {
              break;
            }
            v32 = *v26;
          }
          while ( v32 != _InterlockedCompareExchange64(v26, v23, v31) );
        }
        ++v22;
      }
      while ( v22 < (unsigned int)v6 + 2 );
      v5 = v40;
    }
  }
LABEL_29:
  if ( v18 )
  {
    v33 = (volatile LONG *)(v5 + 280);
    v34 = CurrentIrql;
    ExReleaseSpinLockSharedFromDpcLevel(v33);
    if ( v34 < 2u )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v37 = ~(unsigned __int16)(-1LL << (v34 + 1));
          v16 = (v37 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v37;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v34);
    }
  }
  else
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 272), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v5 + 272));
    KeAbPostRelease(v5 + 272);
  }
  if ( v39 )
    ExFreePoolWithTag(*(PVOID *)(v39 + 16), 0);
  return v7;
}
