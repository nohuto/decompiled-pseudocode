/*
 * XREFs of MiRemoveWsle @ 0x140331CC0
 * Callers:
 *     MiConvertPrivateToProto @ 0x140272A10 (MiConvertPrivateToProto.c)
 *     MiTerminateWsle @ 0x1403146E0 (MiTerminateWsle.c)
 *     MiTerminateWsleCluster @ 0x14032F750 (MiTerminateWsleCluster.c)
 *     MiDeleteVa @ 0x140330730 (MiDeleteVa.c)
 * Callees:
 *     MiIsDriverPage @ 0x1402189A0 (MiIsDriverPage.c)
 *     MiGetSystemRegionType @ 0x14027B080 (MiGetSystemRegionType.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiVolunteerForTrimFirst @ 0x1403335A0 (MiVolunteerForTrimFirst.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140366A20 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140461B20 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiLogRemoveWsleEvent @ 0x140583EE0 (MiLogRemoveWsleEvent.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14063D8E0 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

char __fastcall MiRemoveWsle(__int64 a1, unsigned __int64 a2, __int64 a3, char a4, int a5, int a6)
{
  volatile signed __int32 *v6; // rsi
  unsigned __int64 v9; // r15
  _DWORD *v11; // r14
  struct _KPRCB *CurrentPrcb; // rbp
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v14; // ett
  int v15; // r14d
  unsigned __int64 v16; // rbp
  unsigned __int8 v17; // di
  unsigned __int64 v18; // r8
  __int64 v19; // rcx
  unsigned __int64 *v20; // rdx
  unsigned __int64 v21; // r8
  unsigned __int8 v22; // al
  unsigned __int64 v23; // rcx
  signed __int64 v24; // rax
  struct _KPRCB *v25; // rcx
  _DWORD *v26; // rdx
  unsigned __int8 v27; // dl
  unsigned __int64 v28; // r9
  __int64 v29; // r10
  volatile signed __int64 *v30; // r8
  signed __int64 v31; // rtt
  _DWORD *v32; // rcx
  int v33; // eax
  int v34; // eax
  struct _LIST_ENTRY *Flink; // rax
  __int64 v36; // rax
  __int64 v37; // r8
  void *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v40; // [rsp+50h] [rbp+8h] BYREF

  v6 = (volatile signed __int32 *)&unk_140C53D40;
  v9 = a2;
  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
    v11 = &unk_140C53D40;
  else
    v11 = (_DWORD *)(a1 + 256);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    LOBYTE(a2) = -1;
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v11, a2);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v33 = SchedulerAssist[6];
        SchedulerAssist[6] = v33 + 1;
        if ( v33 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    _m_prefetchw(v11);
    v14 = *v11 & 0x7FFFFFFF;
    if ( v14 != _InterlockedCompareExchange(v11, v14 + 1, v14) )
    {
      v32 = CurrentPrcb->SchedulerAssist;
      if ( v32 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v34 = v32[6] - 1;
          v32[6] = v34;
          if ( !v34 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      LOBYTE(a2) = -1;
      ExpWaitForSpinLockSharedAndAcquire(v11, a2);
    }
  }
  if ( a6 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 152), -a3);
    if ( v9 < 0xFFFFF68000000000uLL || v9 > 0xFFFFF6FFFFFFFFFFuLL )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 136), -a3);
  }
  v15 = 1;
  if ( (*(_BYTE *)(a1 + 184) & 7) == 4 )
  {
    if ( PsNtosImageBase && (v9 < PsNtosImageEnd && v9 >= PsNtosImageBase || v9 < PsHalImageEnd && v9 >= PsHalImageBase) )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&xmmword_140C4F4F8, -(int)a3);
    }
    else if ( (unsigned int)MiGetSystemRegionType(v9) == 12
           && MiIsDriverPage(((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1) )
    {
      _InterlockedExchangeAdd((_DWORD *)&xmmword_140C4F4F8 + 1, -(int)a3);
    }
  }
  v16 = -a3;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 144), -a3);
  if ( v9 < 0xFFFFF68000000000uLL || v9 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 128), v16);
    v17 = a4 & 0xF;
    if ( v17 == 8 )
      goto LABEL_18;
  }
  else
  {
    v15 = 0;
    if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
      goto LABEL_18;
    v17 = a4 & 0xF;
  }
  if ( v9 < 0xFFFFF68000000000uLL || v9 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v18 = ((v9 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v19 = *(_QWORD *)v18;
    if ( v18 >= 0xFFFFF6FB7DBED000uLL
      && v18 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v19 & 1) != 0
      && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v36 = *((_QWORD *)&Flink->Flink + ((v18 >> 3) & 0x1FF));
        v37 = v19 | 0x20;
        if ( (v36 & 0x20) == 0 )
          v37 = v19;
        v19 = v37;
        if ( (v36 & 0x42) != 0 )
          v19 = v37 | 0x42;
      }
    }
    v40 = v19;
    v20 = (unsigned __int64 *)(48
                             * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v40) >> 12) & 0xFFFFFFFFFFLL)
                             - 0x220000000000LL);
    v21 = *v20;
    v22 = (*v20 >> 14) & 7;
    if ( ((*v20 >> 4) & 0x3FF) != 0 )
    {
      if ( v17 == v22 )
      {
        v23 = v21 ^ ((unsigned __int16)v21 ^ (unsigned __int16)(16 * (((*v20 >> 4) & 0x3FF) - a3))) & 0x3FF0;
LABEL_15:
        *v20 = v23;
        goto LABEL_16;
      }
      if ( v17 > v22 )
      {
        v23 = v21 & 0xFFFFFFFFFFFE000FuLL | (16 * (v16 & 0x3FF | ((unsigned __int64)(v17 & 7) << 10)));
        goto LABEL_15;
      }
    }
  }
LABEL_16:
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8LL * v17 + 40), v16);
  if ( v17 == 7 )
    MiVolunteerForTrimFirst(a1, -a3);
LABEL_18:
  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
  {
    _InterlockedExchangeAdd64(&qword_140C53D88, v16);
    if ( v15 )
      _InterlockedExchangeAdd64(&qword_140C53D90, v16);
  }
  LOBYTE(v24) = *(_BYTE *)(a1 + 184) & 7;
  if ( (_BYTE)v24 != 2 )
    v6 = (volatile signed __int32 *)(a1 + 256);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    LOBYTE(v24) = ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v6, retaddr);
  }
  else
  {
    _InterlockedAnd(v6, 0xBFFFFFFF);
    _InterlockedDecrement(v6);
  }
  v25 = KeGetCurrentPrcb();
  v26 = v25->SchedulerAssist;
  if ( v26 )
  {
    if ( v25->NestingLevel <= 1u )
    {
      LODWORD(v24) = v26[6] - 1;
      v26[6] = v24;
      if ( !(_DWORD)v24 )
        LOBYTE(v24) = KiRemoveSystemWorkPriorityKick(v25);
    }
  }
  if ( v15 )
  {
    v27 = a5;
    if ( a5 == 9 || a5 == 10 && (LOBYTE(v24) = 0, (*(_BYTE *)(((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 1) != 0) )
    {
      if ( a3 )
      {
        v28 = v9;
        v29 = a3;
        do
        {
          v30 = (volatile signed __int64 *)(((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          v24 = *v30;
          do
          {
            if ( (MiFlags & 0x4000000) != 0 )
              _mm_lfence();
            v31 = v24;
            v24 = _InterlockedCompareExchange64(v30, ((unsigned __int64)v27 << 56) | v24 & 0x80FFFFFFFFFFFFFFuLL, v24);
          }
          while ( v31 != v24 );
          v28 += 4096LL;
          --v29;
        }
        while ( v29 );
      }
    }
  }
  if ( (DWORD1(PerfGlobalGroupMask) & 0x8000000) != 0 && a3 )
  {
    do
    {
      LOBYTE(v24) = MiLogRemoveWsleEvent(v9, *(_BYTE *)(a1 + 184) & 7);
      v9 += 4096LL;
      --a3;
    }
    while ( a3 );
  }
  return v24;
}
