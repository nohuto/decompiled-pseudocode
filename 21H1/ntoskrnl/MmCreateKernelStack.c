/*
 * XREFs of MmCreateKernelStack @ 0x140354A10
 * Callers:
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1403546E0 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     KeUserModeCallback @ 0x140705310 (KeUserModeCallback.c)
 *     KeAllocateCalloutStackEx @ 0x14076B1F0 (KeAllocateCalloutStackEx.c)
 *     KiStartDynamicProcessor @ 0x1408B625C (KiStartDynamicProcessor.c)
 *     KeInitThread @ 0x14098BDA4 (KeInitThread.c)
 *     KeStartAllProcessors @ 0x140A404CC (KeStartAllProcessors.c)
 * Callees:
 *     MiChargeCommit @ 0x14021A460 (MiChargeCommit.c)
 *     MiAllocateKernelStackPages @ 0x140224500 (MiAllocateKernelStackPages.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiReleasePtes @ 0x140247F40 (MiReleasePtes.c)
 *     MiReservePtes @ 0x1402743A0 (MiReservePtes.c)
 *     MiReturnCommit @ 0x14027D3E0 (MiReturnCommit.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiMarkPfnTradable @ 0x14032A278 (MiMarkPfnTradable.c)
 *     MiChargeResident @ 0x1403550AC (MiChargeResident.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1403FDD60 (RtlpInterlockedPopEntrySList.c)
 *     MiLogKernelStackEvent @ 0x140541020 (MiLogKernelStackEvent.c)
 */

__int64 __fastcall MmCreateKernelStack(unsigned int a1, unsigned int a2, __int64 a3)
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
  __int64 v22; // r9
  __int64 v23; // r8
  __int64 v24; // rbx
  unsigned __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rdi
  __int64 v28; // rcx
  struct _LIST_ENTRY *v30; // rdx
  __int64 v31; // rax
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 v33; // rax
  ULONG_PTR v34; // r9
  ULONG_PTR v35; // rbp
  ULONG_PTR v36; // rax
  unsigned __int64 v37; // rbx
  ULONG_PTR v38; // rax
  __int64 v39; // r9
  _QWORD *v40; // r14
  ULONG_PTR v41; // r13
  unsigned __int64 v42; // rsi
  __int64 v43; // rax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v45; // al
  struct _KPRCB *v46; // r10
  _DWORD *v47; // r9
  int v48; // eax
  bool v49; // zf
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v51; // rax
  __int64 v52; // rdx
  struct _LIST_ENTRY *v53; // r8
  __int64 v54; // rax
  __int64 v55; // r8
  unsigned __int8 v56; // al
  struct _KPRCB *v57; // r9
  _DWORD *v58; // r8
  int v59; // eax
  struct _KPRCB *v60; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v62; // eax
  int BugCheckParameter4; // [rsp+20h] [rbp-78h]
  unsigned __int8 v64; // [rsp+30h] [rbp-68h]
  int v65; // [rsp+38h] [rbp-60h]
  __int64 v66; // [rsp+40h] [rbp-58h]
  __int64 v67; // [rsp+48h] [rbp-50h] BYREF
  __int64 v68; // [rsp+50h] [rbp-48h]
  int v70; // [rsp+B8h] [rbp+20h] BYREF

  v3 = a2;
  v67 = 0LL;
  v4 = a1;
  v5 = &MiSystemPartition;
  if ( (a1 & 0x10) != 0 )
  {
    v7 = -32LL;
    v68 = -32LL;
    if ( a3 )
      v5 = *(ULONG_PTR **)(qword_140C4E588 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a3 + 544) + 1838LL));
  }
  else if ( a3 )
  {
    v6 = *(_QWORD *)(a3 + 544);
    v7 = a3;
    v68 = a3;
    v5 = *(ULONG_PTR **)(qword_140C4E588 + 8LL * *(unsigned __int16 *)(v6 + 1838));
  }
  else
  {
    v7 = -16LL;
    v68 = -16LL;
  }
  if ( (a1 & 1) != 0 )
  {
    v8 = 18;
    v43 = 18LL;
    v65 = 18;
    if ( (a1 & 4) == 0 )
      v43 = 6LL;
    v66 = v43;
  }
  else
  {
    v8 = (unsigned __int8)byte_140C4EAFC;
    v65 = (unsigned __int8)byte_140C4EAFC;
    v66 = (unsigned __int8)byte_140C4EAFC;
    if ( (a1 & 0x10) != 0 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v9 = 1;
      if ( CurrentPrcb->ParentNode->Affinity.Reserved[0] == (_DWORD)v3 )
      {
        if ( CurrentPrcb->CachedStack )
        {
          v33 = _InterlockedExchange64((volatile __int64 *)&CurrentPrcb->CachedStack, 0LL);
          if ( v33 )
          {
            v34 = *(_QWORD *)(v33 - 16);
            v35 = v33 - 4080;
            v36 = (v33 - 4080) ^ qword_140C4EE08;
            if ( v34 != v36 )
              KeBugCheckEx(0x1Au, 0x3470uLL, v35, v34, v36);
            v19 = (__int64)(((v35 & 0xFFFFFFFFFFFFF000uLL) << 16) + 0x10000000) >> 16;
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
            v64 = 17;
          }
          else
          {
            CurrentIrql = KeGetCurrentIrql();
            v64 = CurrentIrql;
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
            v17 = (unsigned __int64)&v14[-255] ^ qword_140C4EE08;
            if ( Next != v17 )
              KeBugCheckEx(0x1Au, 0x3470uLL, v16, Next, v17);
            v18 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v19 = (__int64)((v18 << 25) + 0x10000000) >> 16;
            v68 = v19;
            if ( v9 != 1 )
            {
              v20 = v18 - 8LL * (unsigned __int8)byte_140C4EAFC + 8;
              v21 = MiPteInShadowRange((unsigned __int64)&v67);
              v22 = 0xFFFFFA8000000000uLL;
              v23 = 0xFFFFFFFFFFELL;
              do
              {
                v24 = *(_QWORD *)v18;
                if ( v18 >= 0xFFFFF6FB7DBED000uLL
                  && v18 <= 0xFFFFF6FB7DBED7F8uLL
                  && (MiFlags & 0xC00000) != 0
                  && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                  && (v24 & 1) != 0
                  && ((v24 & 0x20) == 0 || (v24 & 0x42) == 0) )
                {
                  Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                  if ( Flink )
                  {
                    v51 = *((_QWORD *)&Flink->Flink + ((v18 >> 3) & 0x1FF));
                    v52 = v24 | 0x20;
                    if ( (v51 & 0x20) == 0 )
                      v52 = *(_QWORD *)v18;
                    v24 = v52;
                    if ( (v51 & 0x42) != 0 )
                      v24 = v52 | 0x42;
                  }
                }
                v67 = v24;
                v25 = v24;
                if ( v21
                  && (MiFlags & 0xC00000) != 0
                  && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                  && (v24 & 1) != 0
                  && ((v24 & 0x20) == 0 || (v24 & 0x42) == 0) )
                {
                  v30 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                  if ( v30 )
                  {
                    v31 = *((_QWORD *)&v30->Flink + (((unsigned __int64)&v67 >> 3) & 0x1FF));
                    v25 = v24 | 0x20;
                    if ( (v31 & 0x20) == 0 )
                      v25 = v24;
                    if ( (v31 & 0x42) != 0 )
                      v25 |= 0x42uLL;
                  }
                  else
                  {
                    v25 = v24;
                  }
                }
                v26 = (v25 >> 12) & 0xFFFFFFFFFLL;
                v27 = 48 * v26 - 0x58000000000LL;
                v70 = 0;
                if ( _interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) )
                {
                  do
                  {
                    do
                      KeYieldProcessorEx(&v70, v26, v23, v22);
                    while ( *(__int64 *)(v27 + 24) < 0 );
                  }
                  while ( _interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) );
                  v23 = 0xFFFFFFFFFFELL;
                  v22 = 0xFFFFFA8000000000uLL;
                }
                v28 = *(_QWORD *)v18;
                if ( v18 >= 0xFFFFF6FB7DBED000uLL
                  && v18 <= 0xFFFFF6FB7DBED7F8uLL
                  && (MiFlags & 0xC00000) != 0
                  && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                  && (v28 & 1) != 0
                  && ((v28 & 0x20) == 0 || (v28 & 0x42) == 0) )
                {
                  v53 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                  if ( v53 )
                  {
                    v54 = *((_QWORD *)&v53->Flink + ((v18 >> 3) & 0x1FF));
                    v55 = v28 | 0x20;
                    if ( (v54 & 0x20) == 0 )
                      v55 = *(_QWORD *)v18;
                    v28 = v55;
                    if ( (v54 & 0x42) != 0 )
                      v28 = v55 | 0x42;
                  }
                  v23 = 0xFFFFFFFFFFELL;
                }
                if ( v24 == v28 )
                {
                  *(_QWORD *)v27 ^= (*(_QWORD *)v27 ^ (v7 >> 3)) & 0xFFFFFFFFFFELL;
                  if ( (*(_BYTE *)v27 & 1) == 0 )
                    MiMarkPfnTradable(v27, 1LL, 0xFFFFFFFFFFELL);
                  v18 -= 8LL;
                  v22 = 0xFFFFFA8000000000uLL;
                  v23 = 0xFFFFFFFFFFELL;
                }
                _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              }
              while ( v18 >= v20 );
              v19 = v68;
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v56 = KeGetCurrentIrql();
                  if ( v56 <= 0xFu && v64 <= 0xFu && v56 >= 2u )
                  {
                    v57 = KeGetCurrentPrcb();
                    v58 = v57->SchedulerAssist;
                    v59 = ~(unsigned __int16)(-1LL << (v64 + 1));
                    v49 = (v59 & v58[5]) == 0;
                    v58[5] &= v59;
                    if ( v49 )
                      KiRemoveSystemWorkPriorityKick(v57);
                  }
                }
              }
              __writecr8(v64);
            }
            goto LABEL_28;
          }
          if ( i != 1 )
          {
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v45 = KeGetCurrentIrql();
                if ( v45 <= 0xFu && v64 <= 0xFu && v45 >= 2u )
                {
                  v46 = KeGetCurrentPrcb();
                  v47 = v46->SchedulerAssist;
                  v48 = ~(unsigned __int16)(-1LL << (v64 + 1));
                  v49 = (v48 & v47[5]) == 0;
                  v47[5] &= v48;
                  if ( v49 )
                    KiRemoveSystemWorkPriorityKick(v46);
                }
              }
            }
            __writecr8(v64);
          }
        }
        ++*((_DWORD *)&v11[1].HeaderX64 + 1);
        if ( i != 1 )
        {
          v4 = a1;
          v8 = v65;
          break;
        }
        v9 = 0;
      }
    }
  }
  v37 = v8;
  if ( !(unsigned int)MiChargeCommit((__int64)v5, v8, (v4 >> 1) & 1) )
    return 0LL;
  v38 = MiReservePtes((__int64)&unk_140C4EA98, (unsigned int)(v65 + 1));
  v40 = (_QWORD *)v38;
  if ( !v38 )
  {
LABEL_127:
    MiReturnCommit((__int64)v5, v37);
    return 0LL;
  }
  v41 = v38;
  v19 = (__int64)((v38 << 25) + ((v37 + 1) << 28)) >> 16;
  if ( (v4 & 5) == 1 )
    v41 = v38 + 96;
  if ( !(unsigned int)MiChargeResident(v5, v66, 0LL, v39) )
    goto LABEL_126;
  BugCheckParameter4 = v3;
  v42 = v66;
  if ( !(unsigned int)MiAllocateKernelStackPages((__int64)v5, (__int64 *)(v41 + 8), v66, v68, BugCheckParameter4, v4) )
  {
    if ( v5 == &MiSystemPartition )
    {
      v60 = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)v60->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable != -1 )
      {
        if ( (unsigned __int64)(v66 + CachedResidentAvailable) <= 0x100 )
        {
          do
          {
            v62 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&v60->CachedResidentAvailable,
                    CachedResidentAvailable + v66,
                    CachedResidentAvailable);
            v49 = (_DWORD)CachedResidentAvailable == v62;
            LODWORD(CachedResidentAvailable) = v62;
            if ( v49 )
              goto LABEL_126;
          }
          while ( v62 != -1 && (unsigned __int64)(v66 + v62) <= 0x100 );
        }
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&v60->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v42 = (int)CachedResidentAvailable - 192 + v66;
        }
      }
    }
    if ( v42 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)v5 + 896, v42);
LABEL_126:
    MiReleasePtes((__int64)&unk_140C4EA98, v40, v65 + 1);
    goto LABEL_127;
  }
  if ( v5 == &MiSystemPartition )
    _InterlockedExchangeAdd64(&qword_140C4EF08, v37);
LABEL_28:
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 && (a1 & 8) != 0 )
    MiLogKernelStackEvent(v19 - (unsigned int)(v65 << 12), (unsigned int)v66, 1LL);
  return v19;
}
