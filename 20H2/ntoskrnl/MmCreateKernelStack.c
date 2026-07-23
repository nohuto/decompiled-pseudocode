/*
 * XREFs of MmCreateKernelStack @ 0x1402AD970
 * Callers:
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1402AD640 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     KeUserModeCallback @ 0x1406814B0 (KeUserModeCallback.c)
 *     KeAllocateCalloutStackEx @ 0x14077C3C0 (KeAllocateCalloutStackEx.c)
 *     KiStartDynamicProcessor @ 0x1408BD198 (KiStartDynamicProcessor.c)
 *     KeInitThread @ 0x1409922E0 (KeInitThread.c)
 *     KeStartAllProcessors @ 0x140A4BFC8 (KeStartAllProcessors.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiReturnCommit @ 0x140230300 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x14027C2B0 (MiChargeCommit.c)
 *     MiReservePtes @ 0x140285DC0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x140294430 (MiReleasePtes.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiMarkPfnTradable @ 0x140336088 (MiMarkPfnTradable.c)
 *     MiChargeResident @ 0x140344234 (MiChargeResident.c)
 *     MiAllocateKernelStackPages @ 0x140348E30 (MiAllocateKernelStackPages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1404052C0 (RtlpInterlockedPopEntrySList.c)
 *     MiLogKernelStackEvent @ 0x140545040 (MiLogKernelStackEvent.c)
 */

__int64 __fastcall MmCreateKernelStack(unsigned int a1, unsigned int a2, unsigned __int64 a3)
{
  __int64 v3; // rsi
  unsigned int v4; // r12d
  ULONG_PTR *v5; // rdi
  __int64 v6; // rax
  unsigned __int64 v7; // r13
  unsigned int v8; // r8d
  unsigned int v9; // r14d
  __int64 i; // rbp
  _SLIST_HEADER *v11; // rbx
  __int16 Alignment; // r15
  unsigned __int8 CurrentIrql; // cl
  PSLIST_ENTRY v14; // rax
  ULONG_PTR Next; // r9
  ULONG_PTR v16; // rcx
  ULONG_PTR v17; // rax
  unsigned __int64 v18; // rsi
  __int64 v19; // rbp
  unsigned __int64 v20; // r14
  BOOL v21; // r15d
  __int64 v22; // rbx
  unsigned __int64 v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // rcx
  struct _LIST_ENTRY *v27; // rdx
  __int64 v28; // rax
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 v30; // rax
  ULONG_PTR v31; // r9
  ULONG_PTR v32; // rbp
  ULONG_PTR v33; // rax
  unsigned __int64 v34; // rbx
  ULONG_PTR v35; // rax
  _QWORD *v36; // r14
  int v37; // r13d
  unsigned __int64 v38; // rsi
  __int64 v39; // rax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v41; // al
  struct _KPRCB *v42; // r10
  _DWORD *v43; // r9
  int v44; // eax
  bool v45; // zf
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v47; // rax
  __int64 v48; // rdx
  struct _LIST_ENTRY *v49; // r8
  __int64 v50; // rax
  __int64 v51; // r8
  unsigned __int8 v52; // al
  struct _KPRCB *v53; // r9
  _DWORD *v54; // r8
  int v55; // eax
  struct _KPRCB *v56; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v58; // eax
  int BugCheckParameter4; // [rsp+20h] [rbp-78h]
  unsigned __int8 v60; // [rsp+30h] [rbp-68h]
  int v61; // [rsp+38h] [rbp-60h]
  unsigned __int64 v62; // [rsp+40h] [rbp-58h]
  __int64 v63; // [rsp+48h] [rbp-50h] BYREF
  __int64 v64; // [rsp+50h] [rbp-48h]
  int v66; // [rsp+B8h] [rbp+20h] BYREF

  v3 = a2;
  v63 = 0LL;
  v4 = a1;
  v5 = &MiSystemPartition;
  if ( (a1 & 0x10) != 0 )
  {
    v7 = -32LL;
    v64 = -32LL;
    if ( a3 )
      v5 = *(ULONG_PTR **)(qword_140C4E4C8 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a3 + 544) + 1838LL));
  }
  else if ( a3 )
  {
    v6 = *(_QWORD *)(a3 + 544);
    v7 = a3;
    v64 = a3;
    v5 = *(ULONG_PTR **)(qword_140C4E4C8 + 8LL * *(unsigned __int16 *)(v6 + 1838));
  }
  else
  {
    v7 = -16LL;
    v64 = -16LL;
  }
  if ( (a1 & 1) != 0 )
  {
    v8 = 18;
    v39 = 18LL;
    v61 = 18;
    if ( (a1 & 4) == 0 )
      v39 = 6LL;
    v62 = v39;
  }
  else
  {
    v8 = (unsigned __int8)byte_140C4EA3C;
    v61 = (unsigned __int8)byte_140C4EA3C;
    v62 = (unsigned __int8)byte_140C4EA3C;
    if ( (a1 & 0x10) != 0 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v9 = 1;
      if ( CurrentPrcb->ParentNode->Affinity.Reserved[0] == (_DWORD)v3 )
      {
        if ( CurrentPrcb->CachedStack )
        {
          v30 = _InterlockedExchange64((volatile __int64 *)&CurrentPrcb->CachedStack, 0LL);
          if ( v30 )
          {
            v31 = *(_QWORD *)(v30 - 16);
            v32 = v30 - 4080;
            v33 = (v30 - 4080) ^ qword_140C4ED48;
            if ( v31 != v33 )
              KeBugCheckEx(0x1Au, 0x3470uLL, v32, v31, v33);
            v19 = (__int64)(((v32 & 0xFFFFFFFFFFFFF000uLL) << 16) + 0x10000000) >> 16;
            goto LABEL_28;
          }
        }
      }
    }
    else
    {
      v9 = 0;
    }
    if ( v5 == &MiSystemPartition )
    {
      for ( i = v9; ; i = 0LL )
      {
        v11 = &SListHead[11 * v3 + 2 * i];
        Alignment = v11->Alignment;
        if ( LOWORD(v11->Alignment) )
        {
          if ( i == 1 )
          {
            v60 = 17;
          }
          else
          {
            CurrentIrql = KeGetCurrentIrql();
            v60 = CurrentIrql;
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
            {
              SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
              SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
            }
          }
          v14 = RtlpInterlockedPopEntrySList(v11);
          if ( v14 )
          {
            if ( Alignment == 1 && !*((_DWORD *)&v11[1].HeaderX64 + 3) )
              *((_DWORD *)&v11[1].HeaderX64 + 3) = 1;
            Next = (ULONG_PTR)v14[-1].Next;
            v16 = (ULONG_PTR)&v14[-255];
            v17 = (unsigned __int64)&v14[-255] ^ qword_140C4ED48;
            if ( Next != v17 )
              KeBugCheckEx(0x1Au, 0x3470uLL, v16, Next, v17);
            v18 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v19 = (__int64)((v18 << 25) + 0x10000000) >> 16;
            v64 = v19;
            if ( v9 != 1 )
            {
              v20 = v18 - 8LL * (unsigned __int8)byte_140C4EA3C + 8;
              v21 = MiPteInShadowRange((unsigned __int64)&v63);
              do
              {
                v22 = *(_QWORD *)v18;
                if ( v18 >= 0xFFFFF6FB7DBED000uLL
                  && v18 <= 0xFFFFF6FB7DBED7F8uLL
                  && (MiFlags & 0xC00000) != 0
                  && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                  && (v22 & 1) != 0
                  && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0) )
                {
                  Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                  if ( Flink )
                  {
                    v47 = *((_QWORD *)&Flink->Flink + ((v18 >> 3) & 0x1FF));
                    v48 = v22 | 0x20;
                    if ( (v47 & 0x20) == 0 )
                      v48 = *(_QWORD *)v18;
                    v22 = v48;
                    if ( (v47 & 0x42) != 0 )
                      v22 = v48 | 0x42;
                  }
                }
                v63 = v22;
                v23 = v22;
                if ( v21
                  && (MiFlags & 0xC00000) != 0
                  && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                  && (v22 & 1) != 0
                  && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0) )
                {
                  v27 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                  if ( v27 )
                  {
                    v28 = *((_QWORD *)&v27->Flink + (((unsigned __int64)&v63 >> 3) & 0x1FF));
                    v23 = v22 | 0x20;
                    if ( (v28 & 0x20) == 0 )
                      v23 = v22;
                    if ( (v28 & 0x42) != 0 )
                      v23 |= 0x42uLL;
                  }
                  else
                  {
                    v23 = v22;
                  }
                }
                v24 = 48 * ((v23 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
                v66 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) )
                {
                  do
                    KeYieldProcessorEx(&v66);
                  while ( *(__int64 *)(v24 + 24) < 0 );
                }
                v25 = *(_QWORD *)v18;
                if ( v18 >= 0xFFFFF6FB7DBED000uLL
                  && v18 <= 0xFFFFF6FB7DBED7F8uLL
                  && (MiFlags & 0xC00000) != 0
                  && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                  && (v25 & 1) != 0
                  && ((v25 & 0x20) == 0 || (v25 & 0x42) == 0) )
                {
                  v49 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                  if ( v49 )
                  {
                    v50 = *((_QWORD *)&v49->Flink + ((v18 >> 3) & 0x1FF));
                    v51 = v25 | 0x20;
                    if ( (v50 & 0x20) == 0 )
                      v51 = *(_QWORD *)v18;
                    v25 = v51;
                    if ( (v50 & 0x42) != 0 )
                      v25 = v51 | 0x42;
                  }
                }
                if ( v22 == v25 )
                {
                  *(_QWORD *)v24 ^= (*(_QWORD *)v24 ^ (v7 >> 3)) & 0xFFFFFFFFFFELL;
                  if ( (*(_BYTE *)v24 & 1) == 0 )
                    MiMarkPfnTradable(v24, 1LL, 0xFFFFFFFFFFELL, 0xFFFFFA8000000000uLL);
                  v18 -= 8LL;
                }
                _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              }
              while ( v18 >= v20 );
              v19 = v64;
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v52 = KeGetCurrentIrql();
                  if ( v52 <= 0xFu && v60 <= 0xFu && v52 >= 2u )
                  {
                    v53 = KeGetCurrentPrcb();
                    v54 = v53->SchedulerAssist;
                    v55 = ~(unsigned __int16)(-1LL << (v60 + 1));
                    v45 = (v55 & v54[5]) == 0;
                    v54[5] &= v55;
                    if ( v45 )
                      KiRemoveSystemWorkPriorityKick(v53);
                  }
                }
              }
              __writecr8(v60);
            }
            goto LABEL_28;
          }
          if ( i != 1 )
          {
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v41 = KeGetCurrentIrql();
                if ( v41 <= 0xFu && v60 <= 0xFu && v41 >= 2u )
                {
                  v42 = KeGetCurrentPrcb();
                  v43 = v42->SchedulerAssist;
                  v44 = ~(unsigned __int16)(-1LL << (v60 + 1));
                  v45 = (v44 & v43[5]) == 0;
                  v43[5] &= v44;
                  if ( v45 )
                    KiRemoveSystemWorkPriorityKick(v42);
                }
              }
            }
            __writecr8(v60);
          }
        }
        ++*((_DWORD *)&v11[1].HeaderX64 + 1);
        if ( i != 1 )
        {
          v4 = a1;
          v8 = v61;
          break;
        }
        v9 = 0;
      }
    }
  }
  v34 = v8;
  if ( !(unsigned int)MiChargeCommit((unsigned __int64)v5, v8, (v4 >> 1) & 1) )
    return 0LL;
  v35 = MiReservePtes((__int64)&unk_140C4E9D8, v61 + 1);
  v36 = (_QWORD *)v35;
  if ( !v35 )
  {
LABEL_127:
    MiReturnCommit((__int64)v5, v34);
    return 0LL;
  }
  v37 = v35;
  v19 = (__int64)((v35 << 25) + ((v34 + 1) << 28)) >> 16;
  if ( (v4 & 5) == 1 )
    v37 = v35 + 96;
  if ( !(unsigned int)MiChargeResident(v5, v62, 0LL) )
    goto LABEL_126;
  BugCheckParameter4 = v3;
  v38 = v62;
  if ( !(unsigned int)MiAllocateKernelStackPages((_DWORD)v5, v37 + 8, v62, v64, BugCheckParameter4, v4) )
  {
    if ( v5 == &MiSystemPartition )
    {
      v56 = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)v56->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable != -1 )
      {
        if ( v62 + CachedResidentAvailable <= 0x100 )
        {
          do
          {
            v58 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&v56->CachedResidentAvailable,
                    CachedResidentAvailable + v62,
                    CachedResidentAvailable);
            v45 = (_DWORD)CachedResidentAvailable == v58;
            LODWORD(CachedResidentAvailable) = v58;
            if ( v45 )
              goto LABEL_126;
          }
          while ( v58 != -1 && v62 + v58 <= 0x100 );
        }
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&v56->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v38 = (int)CachedResidentAvailable - 192 + v62;
        }
      }
    }
    if ( v38 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)v5 + 896, v38);
LABEL_126:
    MiReleasePtes((__int64)&unk_140C4E9D8, v36, v61 + 1);
    goto LABEL_127;
  }
  if ( v5 == &MiSystemPartition )
    _InterlockedExchangeAdd64(&qword_140C4EE48, v34);
LABEL_28:
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 && (a1 & 8) != 0 )
    MiLogKernelStackEvent(v19 - (unsigned int)(v61 << 12), (unsigned int)v62, 1LL);
  return v19;
}
