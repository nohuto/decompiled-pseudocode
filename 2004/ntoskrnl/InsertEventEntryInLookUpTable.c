/*
 * XREFs of InsertEventEntryInLookUpTable @ 0x140373690
 * Callers:
 *     _tlgWriteAgg @ 0x1403735C4 (_tlgWriteAgg.c)
 * Callees:
 *     KiAbThreadRemoveBoosts @ 0x140207E30 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140224640 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140224840 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140228470 (ExAcquireSpinLockShared.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402743C0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     ComputeEventEntryHash @ 0x140373A50 (ComputeEventEntryHash.c)
 *     CompareEventEntry @ 0x140373B9C (CompareEventEntry.c)
 *     CreateNewEventEntry @ 0x140373C28 (CreateNewEventEntry.c)
 *     EnableFlushTimer @ 0x140373E94 (EnableFlushTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F2AD4 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
  __int64 v15; // rcx
  int v16; // r8d
  bool v17; // zf
  __int64 v18; // rcx
  char v19; // bp
  volatile signed __int64 *i; // rsi
  volatile signed __int64 v21; // rsi
  int v22; // eax
  unsigned __int8 v23; // r9
  signed __int64 v24; // rdx
  __int64 v25; // rax
  int v26; // r10d
  volatile signed __int64 *v27; // r8
  unsigned int NewEventEntry; // eax
  unsigned int v30; // eax
  unsigned __int8 AbOrphanedEntrySummary; // al
  signed __int64 v32; // rax
  volatile signed __int64 v33; // rtt
  volatile LONG *v34; // rcx
  unsigned __int8 v35; // bl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v38; // eax
  int v39; // [rsp+40h] [rbp-78h] BYREF
  signed __int64 v40; // [rsp+48h] [rbp-70h] BYREF
  __int64 v41; // [rsp+50h] [rbp-68h]
  __int64 CurrentIrql; // [rsp+58h] [rbp-60h]
  int v43; // [rsp+C8h] [rbp+10h]

  v43 = a2;
  v5 = *(_QWORD *)(a1 + 48);
  LOBYTE(a2) = a3;
  v6 = a5;
  LOBYTE(a1) = a5;
  v40 = 0LL;
  v41 = v5;
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
      v39 = 0;
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
          && byte_140C4F7C8[(((unsigned __int64)v9 >> 39) & 0x1FF) - 256] == 1 )
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
      KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v5 + 272, &v39);
      v17 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v17
        && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v15);
      }
      LODWORD(v18) = 17;
      if ( _InterlockedCompareExchange64(v9, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((unsigned __int64 *)(v5 + 272), v11, v5 + 272);
      if ( v11 )
        *(_BYTE *)(v11 + 26) |= 1u;
      v6 = a5;
      v19 = 0;
      goto LABEL_18;
    }
    if ( *(_BYTE *)(v5 + 373) )
      KeBugCheckEx(0xD1u, v5 + 280, KeGetCurrentIrql(), 1uLL, 0LL);
    ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v5 + 280));
  }
  v19 = 1;
LABEL_18:
  for ( i = (volatile signed __int64 *)(v5 + 8LL * (v8 & 0x1F));
        ;
        i = (volatile signed __int64 *)((((__int64)v22 >> 63) & 0xFFFFFFFFFFFFFFF8uLL) + v21 + 32) )
  {
    if ( !*i )
    {
      if ( *(_DWORD *)(v5 + 256) >= 0x400u )
      {
        ++*(_DWORD *)(v5 + 316);
        v7 = -1073741789;
        goto LABEL_29;
      }
      if ( !v40 )
      {
        LOBYTE(v16) = a3;
        LOBYTE(v18) = *(_BYTE *)(v5 + 373);
        NewEventEntry = CreateNewEventEntry(v18, v43, v16, a4, v6, v8, (__int64)&v40);
        v7 = NewEventEntry;
        if ( !v40 )
        {
          if ( NewEventEntry == -1073741801 )
            ++*(_DWORD *)(v5 + 320);
          else
            ++*(_DWORD *)(v5 + 324);
          goto LABEL_29;
        }
      }
      if ( !_InterlockedCompareExchange64(i, v40, 0LL) )
      {
        v40 = 0LL;
        if ( !_InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 256), 1u) )
          EnableFlushTimer(*(_QWORD *)(v5 + 360), *(unsigned int *)(v5 + 368));
        v30 = *(_DWORD *)(v5 + 256);
        if ( *(_DWORD *)(v5 + 304) < v30 )
          *(_DWORD *)(v5 + 304) = v30;
        goto LABEL_29;
      }
    }
    v21 = *i;
    v18 = *(unsigned int *)(v21 + 40);
    if ( v8 == (_DWORD)v18 )
    {
      LOBYTE(v18) = a3;
      v22 = CompareEventEntry(v18, a4, v21);
    }
    else
    {
      v22 = v8 - v18;
    }
    if ( !v22 )
      break;
  }
  if ( v21 )
  {
    v23 = 2;
    if ( v6 )
    {
      do
      {
        v24 = **(_QWORD **)(a4 + 16LL * v23);
        v25 = *(_QWORD *)(v21 + 16);
        v26 = *(unsigned __int8 *)(v25 + 16LL * v23 + 13);
        v27 = *(volatile signed __int64 **)(v25 + 16LL * v23);
        if ( v26 == 113 )
        {
          _InterlockedExchangeAdd64(v27, v24);
        }
        else if ( (unsigned int)(v26 - 114) <= 1 )
        {
          do
          {
            v32 = *v27;
            if ( v26 == 114 )
            {
              if ( v24 >= v32 )
                break;
            }
            else if ( v24 <= v32 )
            {
              break;
            }
            v33 = *v27;
          }
          while ( v33 != _InterlockedCompareExchange64(v27, v24, v32) );
        }
        ++v23;
      }
      while ( v23 < (unsigned int)v6 + 2 );
      v5 = v41;
    }
  }
LABEL_29:
  if ( v19 )
  {
    v34 = (volatile LONG *)(v5 + 280);
    v35 = CurrentIrql;
    ExReleaseSpinLockSharedFromDpcLevel(v34);
    if ( v35 < 2u )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v38 = ~(unsigned __int16)(-1LL << (v35 + 1));
          v17 = (v38 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v38;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v35);
    }
  }
  else
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 272), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v5 + 272));
    KeAbPostRelease(v5 + 272);
  }
  if ( v40 )
    ExFreePoolWithTag(*(PVOID *)(v40 + 16), 0);
  return v7;
}
