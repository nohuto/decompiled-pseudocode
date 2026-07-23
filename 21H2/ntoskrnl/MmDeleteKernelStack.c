/*
 * XREFs of MmDeleteKernelStack @ 0x1403358C0
 * Callers:
 *     PspDeleteKernelStack @ 0x140241070 (PspDeleteKernelStack.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x140334F80 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     PspInsertThread @ 0x14063DE48 (PspInsertThread.c)
 *     KeUserModeCallback @ 0x140707410 (KeUserModeCallback.c)
 *     KeFreeCalloutStack @ 0x14077CD90 (KeFreeCalloutStack.c)
 *     KeAllocateCalloutStackEx @ 0x140780360 (KeAllocateCalloutStackEx.c)
 *     KiStartDynamicProcessor @ 0x1408BA7D8 (KiStartDynamicProcessor.c)
 *     KeInitThread @ 0x140990D94 (KeInitThread.c)
 *     KeStartAllProcessors @ 0x140A4E568 (KeStartAllProcessors.c)
 * Callees:
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiDeleteKernelStack @ 0x1402606E0 (MiDeleteKernelStack.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiSearchNumaNodeTable @ 0x1403364E0 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x140407B50 (RtlpInterlockedPushEntrySList.c)
 *     MiLogKernelStackEvent @ 0x140546D80 (MiLogKernelStackEvent.c)
 */

signed __int64 __fastcall MmDeleteKernelStack(unsigned __int64 a1, int a2)
{
  char v2; // si
  __int64 v4; // rdx
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v9; // rax
  struct _LIST_ENTRY *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  struct _LIST_ENTRY *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  struct _LIST_ENTRY *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  ULONG_PTR BugCheckParameter4; // r10
  __int64 v21; // rcx
  unsigned int v22; // ebx
  int v23; // esi
  __int64 v24; // rax
  __int64 Process; // rdx
  _QWORD *p_Flink; // r9
  unsigned __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // rdi
  unsigned __int8 CurrentIrql; // bp
  __int64 v32; // rax
  unsigned __int8 v33; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v36; // eax
  bool v37; // zf
  unsigned __int64 v38; // rsi
  unsigned __int8 v39; // al
  struct _KPRCB *v40; // r10
  _DWORD *v41; // r9
  int v42; // eax
  struct _KPRCB *v43; // rdx
  __int64 v44; // rcx
  signed __int64 result; // rax
  __int64 v46; // rax
  int *v47; // r15
  __int64 v48; // r13
  unsigned __int8 v49; // r12
  _DWORD *v50; // r9
  int v51; // ebp
  int v52; // edi
  unsigned __int64 v53; // r14
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // r14
  __int64 v56; // rbx
  unsigned __int64 v57; // r8
  struct _LIST_ENTRY *v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rdx
  unsigned __int64 v61; // rdx
  struct _LIST_ENTRY *v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // r9
  __int64 v66; // rsi
  __int64 v67; // rdx
  struct _LIST_ENTRY *v68; // r8
  __int64 v69; // rax
  __int64 v70; // r8
  ULONG_PTR v71; // r8
  __int64 v72; // rax
  int v73; // ecx
  char *v74; // r9
  int i; // edx
  int v76; // eax
  unsigned __int8 v77; // al
  struct _KPRCB *v78; // r10
  _DWORD *v79; // r9
  int v80; // eax
  unsigned __int8 v81; // al
  struct _KPRCB *v82; // r9
  _DWORD *v83; // r8
  int v84; // eax
  unsigned __int64 v85; // [rsp+30h] [rbp-88h] BYREF
  __int64 v86; // [rsp+38h] [rbp-80h] BYREF
  __int64 v87; // [rsp+40h] [rbp-78h]
  unsigned __int64 v88; // [rsp+48h] [rbp-70h] BYREF
  unsigned __int64 v89; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int64 v90; // [rsp+58h] [rbp-60h]
  __int64 v91; // [rsp+60h] [rbp-58h]
  int v92; // [rsp+C0h] [rbp+8h] BYREF
  int v93; // [rsp+C8h] [rbp+10h]
  unsigned __int64 v94; // [rsp+D0h] [rbp+18h]
  int v95; // [rsp+D8h] [rbp+20h] BYREF

  v93 = a2;
  v85 = 0LL;
  v2 = a2;
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 && (a2 & 2) != 0 )
  {
    v4 = 18LL;
    if ( (v2 & 1) == 0 )
      v4 = (unsigned __int8)byte_140C4EBFC;
    MiLogKernelStackEvent(a1 - (unsigned int)((_DWORD)v4 << 12), v4, 0LL);
  }
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL;
  v90 = v5;
  v6 = *(_QWORD *)v5;
  v7 = *(_QWORD *)v5;
  if ( v5 >= 0xFFFFF6FB7DBED000uLL
    && v5 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v7 & 1) != 0
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v7 |= 0x20uLL;
      v9 = *((_QWORD *)&Flink->Flink + ((v5 >> 3) & 0x1FF));
      if ( (v9 & 0x20) == 0 )
        v7 = *(_QWORD *)v5;
      if ( (v9 & 0x42) != 0 )
        v7 |= 0x42uLL;
    }
  }
  v88 = v7;
  if ( (unsigned int)MiPteInShadowRange(&v88)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v7 & 1) != 0
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    v10 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v10 )
    {
      v11 = *((_QWORD *)&v10->Flink + (((unsigned __int64)&v88 >> 3) & 0x1FF));
      v12 = v7 | 0x20;
      if ( (v11 & 0x20) == 0 )
        v12 = v7;
      v7 = v12;
      if ( (v11 & 0x42) != 0 )
        v7 = v12 | 0x42;
    }
  }
  if ( *(ULONG_PTR **)(qword_140C4E688
                     + 8 * ((*(_QWORD *)(48 * ((v7 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 40) >> 39) & 0x3FFLL)) != &MiSystemPartition
    || (v2 & 1) != 0 )
  {
    return MiDeleteKernelStack(v5, v2);
  }
  if ( v5 >= 0xFFFFF6FB7DBED000uLL
    && v5 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v6 & 1) != 0
    && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
  {
    v13 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v13 )
    {
      v14 = *((_QWORD *)&v13->Flink + ((v5 >> 3) & 0x1FF));
      v15 = v6 | 0x20;
      if ( (v14 & 0x20) == 0 )
        v15 = v6;
      v6 = v15;
      if ( (v14 & 0x42) != 0 )
        v6 = v15 | 0x42;
    }
  }
  v89 = v6;
  if ( (unsigned int)MiPteInShadowRange(&v89)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v6 & 1) != 0
    && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
  {
    v16 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v16 )
    {
      v17 = *((_QWORD *)&v16->Flink + (((unsigned __int64)&v89 >> 3) & 0x1FF));
      v18 = v6 | 0x20;
      if ( (v17 & 0x20) == 0 )
        v18 = v6;
      v6 = v18;
      if ( (v17 & 0x42) != 0 )
        v6 = v18 | 0x42;
    }
  }
  v19 = MiSearchNumaNodeTable((__int64)(48 * ((v6 >> 12) & 0xFFFFFFFFFLL)) / 48);
  BugCheckParameter4 = 0LL;
  v21 = 0LL;
  v87 = 0LL;
  v22 = *(_DWORD *)(v19 + 8);
  LODWORD(v94) = v22;
  if ( (v2 & 4) != 0 )
  {
    v23 = MiPteInShadowRange(&v85);
    while ( 1 )
    {
      v24 = MI_READ_PTE_LOCK_FREE(v5);
      v85 = v24;
      v27 = v24;
      if ( v23 )
      {
        if ( (MiFlags & 0xC00000) != 0 )
        {
          Process = (__int64)KeGetCurrentThread()->ApcState.Process;
          if ( *(_BYTE *)(Process + 912) != 1 && (v24 & 1) != 0 )
          {
            Process = v24;
            if ( (v24 & 0x20) == 0 || (v24 & 0x42) == 0 )
            {
              p_Flink = &KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink->Flink;
              if ( p_Flink )
              {
                v28 = p_Flink[((unsigned __int64)&v85 >> 3) & 0x1FF];
                if ( (v28 & 0x20) != 0 )
                  v27 = Process | 0x20;
                if ( (v28 & 0x42) != 0 )
                  v27 |= 0x42uLL;
              }
              else
              {
                v27 = v85;
              }
            }
          }
        }
      }
      v29 = (v27 >> 12) & 0xFFFFFFFFFLL;
      v30 = 48 * v29 - 0x58000000000LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        p_Flink = KeGetCurrentPrcb()->SchedulerAssist;
        Process = (-1LL << (CurrentIrql + 1)) & 4;
        v29 = (unsigned int)Process | *((_DWORD *)p_Flink + 5);
        *((_DWORD *)p_Flink + 5) = v29;
      }
      v92 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v92, Process, v29, (__int64)p_Flink);
        while ( *(__int64 *)(v30 + 24) < 0 );
      }
      v32 = MI_READ_PTE_LOCK_FREE(v5);
      if ( v85 == v32 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v33 = KeGetCurrentIrql();
          if ( v33 <= 0xFu && CurrentIrql <= 0xFu && v33 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v36 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v37 = (v36 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v36;
            if ( v37 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
    if ( (*(_QWORD *)v30 & 0xFFFFFFFFFFELL) != 0 )
      v38 = 8 * (*(_QWORD *)v30 & 0xFFFFFFFFFFELL | 0xFFFFF00000000000uLL);
    else
      v38 = 0LL;
    _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v22 = v94;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v39 = KeGetCurrentIrql();
        if ( v39 <= 0xFu && CurrentIrql <= 0xFu && v39 >= 2u )
        {
          v40 = KeGetCurrentPrcb();
          v41 = v40->SchedulerAssist;
          v42 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v37 = (v42 & v41[5]) == 0;
          v41[5] &= v42;
          if ( v37 )
            KiRemoveSystemWorkPriorityKick(v40);
        }
      }
    }
    __writecr8(CurrentIrql);
    BugCheckParameter4 = 0LL;
    v21 = 0LL;
    v87 = 0LL;
    if ( v38 == -32LL )
    {
      v43 = KeGetCurrentPrcb();
      if ( v43->ParentNode->Affinity.Reserved[0] == v22 && !v43->CachedStack )
      {
        v44 = (__int64)(v5 << 25) >> 16;
        *(_QWORD *)(v44 + 4064) = v44 ^ qword_140C4EF08;
        result = _InterlockedCompareExchange64((volatile signed __int64 *)&v43->CachedStack, v44 + 4080, 0LL);
        if ( !result )
          return result;
      }
      v21 = 1LL;
      v87 = 1LL;
    }
  }
  v46 = 176LL * v22;
  v91 = v46;
  while ( 1 )
  {
    v47 = (int *)((char *)&SListHead[2 * v21] + v46);
    if ( *(unsigned __int16 *)v47 >= v47[4] )
      goto LABEL_176;
    v48 = (__int64)(v5 << 25) >> 16;
    *(_QWORD *)(v48 + 0xFE0) = v48 ^ qword_140C4EF08;
    if ( v21 == 1 )
      return (signed __int64)RtlpInterlockedPushEntrySList((PSLIST_HEADER)v47, (PSLIST_ENTRY)(v48 + 4080));
    v49 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v49 <= 0xFu )
    {
      v50 = KeGetCurrentPrcb()->SchedulerAssist;
      v50[5] |= (-1 << (v49 + 1)) & 4;
    }
    v51 = 1;
    v86 = 0LL;
    v52 = -1;
    v53 = v5 - 8LL * (unsigned __int8)byte_140C4EBFC;
    v54 = v53 + 8LL * ((unsigned int)(unsigned __int8)byte_140C4EBFC + 1);
    v55 = v53 + 8;
    v94 = v54;
    if ( v55 >= v54 )
      break;
    do
    {
      v56 = *(_QWORD *)v55;
      v57 = 0xFFFFF6FB7DBED7F8uLL;
      if ( v55 >= 0xFFFFF6FB7DBED000uLL
        && v55 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow()
        && (v56 & 1) != 0
        && ((v56 & 0x20) == 0 || (v56 & 0x42) == 0) )
      {
        v58 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v58 )
        {
          v59 = *((_QWORD *)&v58->Flink + ((v55 >> 3) & 0x1FF));
          v60 = v56 | 0x20;
          if ( (v59 & 0x20) == 0 )
            v60 = v56;
          v56 = v60;
          if ( (v59 & 0x42) != 0 )
            v56 = v60 | 0x42;
        }
      }
      v86 = v56;
      if ( (v56 & 1) != 0 )
      {
        v61 = v56;
        if ( (unsigned __int64)&v86 >= 0xFFFFF6FB7DBED000uLL
          && (unsigned __int64)&v86 <= v57
          && (unsigned int)MiPteHasShadow()
          && ((v56 & 0x20) == 0 || (v56 & 0x42) == 0) )
        {
          v62 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v62 )
          {
            v63 = *((_QWORD *)&v62->Flink + (((unsigned __int64)&v86 >> 3) & 0x1FF));
            v61 = v56 | 0x20;
            if ( (v63 & 0x20) == 0 )
              v61 = v56;
            if ( (v63 & 0x42) != 0 )
              v61 |= 0x42uLL;
          }
          else
          {
            v61 = v56;
          }
        }
        v64 = (v61 >> 12) & 0xFFFFFFFFFLL;
        v65 = 0xFFFFFA8000000000uLL;
        v66 = 48 * v64 - 0x58000000000LL;
        v95 = BugCheckParameter4;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v66 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v95, v64, v57, v65);
            while ( *(__int64 *)(v66 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v66 + 24), 0x3FuLL) );
          BugCheckParameter4 = 0LL;
          v65 = 0xFFFFFA8000000000uLL;
        }
        v67 = *(_QWORD *)v55;
        if ( v55 >= 0xFFFFF6FB7DBED000uLL
          && v55 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow()
          && (v67 & 1) != 0
          && ((v67 & 0x20) == 0 || (v67 & 0x42) == 0) )
        {
          v68 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v68 )
          {
            v69 = *((_QWORD *)&v68->Flink + ((v55 >> 3) & 0x1FF));
            v70 = v67 | 0x20;
            if ( (v69 & 0x20) == 0 )
              v70 = v67;
            v67 = v70;
            if ( (v69 & 0x42) != 0 )
              v67 = v70 | 0x42;
          }
        }
        if ( v56 == v67 )
        {
          v71 = (v66 - v65) / 48;
          if ( v52 == -1 )
          {
            v72 = MiSearchNumaNodeTable((v66 - v65) / 48);
            BugCheckParameter4 = 0LL;
            v52 = *(_DWORD *)(v72 + 8);
          }
          else
          {
            v73 = dword_140C4DEC8;
            if ( dword_140C4DEC4 > (unsigned int)dword_140C4DEC8
              || (v74 = (char *)qword_140C4DF08 + 16 * dword_140C4DEC4, v71 < *(_QWORD *)v74)
              || dword_140C4DEC4 != dword_140C4DEC8 && v71 >= *((_QWORD *)v74 + 2) )
            {
              for ( i = BugCheckParameter4; ; i = v76 + 1 )
              {
                while ( 1 )
                {
                  if ( v73 < i )
                    KeBugCheckEx(0x1Au, 0x6201uLL, v71, 0LL, BugCheckParameter4);
                  v76 = (i + v73) >> 1;
                  v74 = (char *)qword_140C4DF08 + 16 * v76;
                  if ( v71 >= *(_QWORD *)v74 )
                    break;
                  if ( !v76 )
                    KeBugCheckEx(0x1Au, 0x6200uLL, v71, (ULONG_PTR)v74, BugCheckParameter4);
                  v73 = v76 - 1;
                }
                if ( v76 == dword_140C4DEC8 || v71 < *((_QWORD *)v74 + 2) )
                  break;
              }
              dword_140C4DEC4 = (i + v73) >> 1;
            }
            if ( v52 != *((_DWORD *)v74 + 2) )
              v51 = BugCheckParameter4;
          }
          *(_QWORD *)v66 &= 0xFFFFF00000000001uLL;
          v55 += 8LL;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v66 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      else
      {
        v55 += 8LL;
      }
    }
    while ( v55 < v94 );
    if ( v51 == 1 )
      break;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v77 = KeGetCurrentIrql();
        if ( v77 <= 0xFu && v49 <= 0xFu && v77 >= 2u )
        {
          v78 = KeGetCurrentPrcb();
          v79 = v78->SchedulerAssist;
          v80 = ~(unsigned __int16)(-1LL << (v49 + 1));
          v37 = (v80 & v79[5]) == 0;
          v79[5] &= v80;
          if ( v37 )
            KiRemoveSystemWorkPriorityKick(v78);
        }
      }
    }
    __writecr8(v49);
    v21 = v87;
    v5 = v90;
LABEL_176:
    if ( v21 != 1 )
    {
      v2 = v93;
      return MiDeleteKernelStack(v5, v2);
    }
    v46 = v91;
    BugCheckParameter4 = 0LL;
    v21 = 0LL;
    v87 = 0LL;
  }
  RtlpInterlockedPushEntrySList((PSLIST_HEADER)v47, (PSLIST_ENTRY)(v48 + 4080));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v81 = KeGetCurrentIrql();
      if ( v81 <= 0xFu && v49 <= 0xFu && v81 >= 2u )
      {
        v82 = KeGetCurrentPrcb();
        v83 = v82->SchedulerAssist;
        v84 = ~(unsigned __int16)(-1LL << (v49 + 1));
        v37 = (v84 & v83[5]) == 0;
        v83[5] &= v84;
        if ( v37 )
          KiRemoveSystemWorkPriorityKick(v82);
      }
    }
  }
  result = v49;
  __writecr8(v49);
  return result;
}
