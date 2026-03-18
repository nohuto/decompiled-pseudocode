/*
 * XREFs of MmDeleteKernelStack @ 0x1402ADF80
 * Callers:
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1402AD640 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     PspDeleteKernelStack @ 0x1403213F0 (PspDeleteKernelStack.c)
 *     KeUserModeCallback @ 0x1406814B0 (KeUserModeCallback.c)
 *     PspInsertThread @ 0x1406867E0 (PspInsertThread.c)
 *     KeFreeCalloutStack @ 0x140778C20 (KeFreeCalloutStack.c)
 *     KeAllocateCalloutStackEx @ 0x14077C3C0 (KeAllocateCalloutStackEx.c)
 *     KiStartDynamicProcessor @ 0x1408BD198 (KiStartDynamicProcessor.c)
 *     KeInitThread @ 0x1409922E0 (KeInitThread.c)
 *     KeStartAllProcessors @ 0x140A4BFC8 (KeStartAllProcessors.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiDeleteKernelStack @ 0x140265A40 (MiDeleteKernelStack.c)
 *     MiSearchNumaNodeTable @ 0x1402AEBA0 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x140405300 (RtlpInterlockedPushEntrySList.c)
 *     MiLogKernelStackEvent @ 0x140545040 (MiLogKernelStackEvent.c)
 */

void __fastcall MmDeleteKernelStack(unsigned __int64 a1, int a2)
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
  __int64 i; // rdx
  char *v21; // r9
  ULONG_PTR BugCheckParameter4; // r10
  __int64 v23; // rcx
  unsigned int v24; // ebx
  BOOL v25; // esi
  __int64 v26; // rax
  unsigned __int64 v27; // r8
  __int64 v28; // rdx
  struct _LIST_ENTRY *v29; // r9
  __int64 v30; // rax
  __int64 v31; // rdi
  unsigned __int8 CurrentIrql; // bp
  _DWORD *SchedulerAssist; // r9
  __int64 v34; // rax
  unsigned __int8 v35; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v37; // r9
  int v38; // eax
  bool v39; // zf
  unsigned __int64 v40; // rsi
  unsigned __int8 v41; // al
  struct _KPRCB *v42; // r10
  int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // rax
  int *v46; // r15
  __int64 v47; // r13
  unsigned __int8 v48; // r12
  int v49; // ebp
  int v50; // edi
  unsigned __int64 v51; // r14
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // r14
  __int64 v54; // rbx
  unsigned __int64 v55; // r8
  __int64 v56; // rax
  unsigned __int64 v57; // rdx
  unsigned __int64 Process; // rcx
  struct _LIST_ENTRY *v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rsi
  struct _LIST_ENTRY *v62; // r8
  __int64 v63; // rax
  __int64 v64; // r8
  ULONG_PTR v65; // r8
  __int64 v66; // rax
  int v67; // ecx
  int v68; // eax
  unsigned __int8 v69; // al
  struct _KPRCB *v70; // r10
  int v71; // eax
  unsigned __int8 v72; // al
  struct _KPRCB *v73; // r9
  _DWORD *v74; // r8
  int v75; // eax
  unsigned __int64 v76; // [rsp+30h] [rbp-88h] BYREF
  __int64 v77; // [rsp+38h] [rbp-80h] BYREF
  __int64 v78; // [rsp+40h] [rbp-78h]
  unsigned __int64 v79; // [rsp+48h] [rbp-70h] BYREF
  unsigned __int64 v80; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int64 v81; // [rsp+58h] [rbp-60h]
  __int64 v82; // [rsp+60h] [rbp-58h]
  int v83; // [rsp+C0h] [rbp+8h] BYREF
  int v84; // [rsp+C8h] [rbp+10h]
  unsigned __int64 v85; // [rsp+D0h] [rbp+18h]
  int v86; // [rsp+D8h] [rbp+20h] BYREF

  v84 = a2;
  v76 = 0LL;
  v2 = a2;
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 && (a2 & 2) != 0 )
  {
    v4 = 18LL;
    if ( (v2 & 1) == 0 )
      v4 = (unsigned __int8)byte_140C4EA3C;
    MiLogKernelStackEvent(a1 - (unsigned int)((_DWORD)v4 << 12), v4, 0LL);
  }
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL;
  v81 = v5;
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
  v79 = v7;
  if ( MiPteInShadowRange((unsigned __int64)&v79)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v7 & 1) != 0
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    v10 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v10 )
    {
      v11 = *((_QWORD *)&v10->Flink + (((unsigned __int64)&v79 >> 3) & 0x1FF));
      v12 = v7 | 0x20;
      if ( (v11 & 0x20) == 0 )
        v12 = v7;
      v7 = v12;
      if ( (v11 & 0x42) != 0 )
        v7 = v12 | 0x42;
    }
  }
  if ( *(ULONG_PTR **)(qword_140C4E4C8
                     + 8 * ((*(_QWORD *)(48 * ((v7 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 40) >> 39) & 0x3FFLL)) != &MiSystemPartition
    || (v2 & 1) != 0 )
  {
LABEL_188:
    MiDeleteKernelStack(v5, v2);
    return;
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
  v80 = v6;
  if ( MiPteInShadowRange((unsigned __int64)&v80)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v6 & 1) != 0
    && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
  {
    v16 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v16 )
    {
      v17 = *((_QWORD *)&v16->Flink + (((unsigned __int64)&v80 >> 3) & 0x1FF));
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
  v23 = 0LL;
  v78 = 0LL;
  v24 = *(_DWORD *)(v19 + 8);
  LODWORD(v85) = v24;
  if ( (v2 & 4) != 0 )
  {
    v25 = MiPteInShadowRange((unsigned __int64)&v76);
    while ( 1 )
    {
      v26 = MI_READ_PTE_LOCK_FREE(v5);
      v76 = v26;
      v27 = v26;
      if ( v25 )
      {
        if ( (MiFlags & 0xC00000) != 0 && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 && (v26 & 1) != 0 )
        {
          v28 = v26;
          if ( (v26 & 0x20) == 0 || (v26 & 0x42) == 0 )
          {
            v29 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v29 )
            {
              v30 = *((_QWORD *)&v29->Flink + (((unsigned __int64)&v76 >> 3) & 0x1FF));
              if ( (v30 & 0x20) != 0 )
                v27 = v28 | 0x20;
              if ( (v30 & 0x42) != 0 )
                v27 |= 0x42uLL;
            }
            else
            {
              v27 = v76;
            }
          }
        }
      }
      v31 = 48 * ((v27 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
      }
      v83 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v31 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v83);
        while ( *(__int64 *)(v31 + 24) < 0 );
      }
      v34 = MI_READ_PTE_LOCK_FREE(v5);
      if ( v76 == v34 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v35 = KeGetCurrentIrql();
          if ( v35 <= 0xFu && CurrentIrql <= 0xFu && v35 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v37 = CurrentPrcb->SchedulerAssist;
            v38 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v39 = (v38 & v37[5]) == 0;
            v37[5] &= v38;
            if ( v39 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
    if ( (*(_QWORD *)v31 & 0xFFFFFFFFFFELL) != 0 )
      v40 = 8 * (*(_QWORD *)v31 & 0xFFFFFFFFFFELL | 0xFFFFF00000000000uLL);
    else
      v40 = 0LL;
    _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v24 = v85;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v41 = KeGetCurrentIrql();
        if ( v41 <= 0xFu && CurrentIrql <= 0xFu && v41 >= 2u )
        {
          v42 = KeGetCurrentPrcb();
          i = -1LL << (CurrentIrql + 1);
          v21 = (char *)v42->SchedulerAssist;
          v43 = ~(unsigned __int16)i;
          v39 = (v43 & *((_DWORD *)v21 + 5)) == 0;
          *((_DWORD *)v21 + 5) &= v43;
          if ( v39 )
            KiRemoveSystemWorkPriorityKick(v42);
        }
      }
    }
    __writecr8(CurrentIrql);
    BugCheckParameter4 = 0LL;
    v23 = 0LL;
    v78 = 0LL;
    if ( v40 == -32LL )
    {
      i = (__int64)KeGetCurrentPrcb();
      if ( *(unsigned __int16 *)(*(_QWORD *)(i + 192) + 146LL) == v24 && !*(_QWORD *)(i + 32520) )
      {
        v44 = (__int64)(v5 << 25) >> 16;
        *(_QWORD *)(v44 + 4064) = v44 ^ qword_140C4ED48;
        if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(i + 32520), v44 + 4080, 0LL) )
          return;
      }
      v23 = 1LL;
      v78 = 1LL;
    }
  }
  v45 = 176LL * v24;
  v82 = v45;
  while ( 1 )
  {
    v46 = (int *)((char *)&SListHead[2 * v23] + v45);
    if ( *(unsigned __int16 *)v46 >= v46[4] )
      goto LABEL_176;
    v47 = (__int64)(v5 << 25) >> 16;
    *(_QWORD *)(v47 + 0xFE0) = v47 ^ qword_140C4ED48;
    if ( v23 == 1 )
    {
      RtlpInterlockedPushEntrySList((PSLIST_HEADER)v46, (PSLIST_ENTRY)(v47 + 4080));
      return;
    }
    v48 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v48 <= 0xFu )
    {
      v21 = (char *)KeGetCurrentPrcb()->SchedulerAssist;
      i = (-1LL << (v48 + 1)) & 4;
      *((_DWORD *)v21 + 5) |= i;
    }
    v49 = 1;
    v77 = 0LL;
    v50 = -1;
    v51 = v5 - 8LL * (unsigned __int8)byte_140C4EA3C;
    v52 = v51 + 8LL * ((unsigned int)(unsigned __int8)byte_140C4EA3C + 1);
    v53 = v51 + 8;
    v85 = v52;
    if ( v53 >= v52 )
      break;
    do
    {
      v54 = *(_QWORD *)v53;
      v55 = 0xFFFFF6FB7DBED7F8uLL;
      if ( v53 >= 0xFFFFF6FB7DBED000uLL
        && v53 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED000uLL, i, 0xFFFFF6FB7DBED7F8uLL, v21)
        && (v54 & 1) != 0
        && ((v54 & 0x20) == 0 || (v54 & 0x42) == 0) )
      {
        i = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( i )
        {
          v56 = *(_QWORD *)(i + 8 * ((v53 >> 3) & 0x1FF));
          i = v54 | 0x20;
          if ( (v56 & 0x20) == 0 )
            i = v54;
          v54 = i;
          if ( (v56 & 0x42) != 0 )
            v54 = i | 0x42;
        }
      }
      v77 = v54;
      if ( (v54 & 1) != 0 )
      {
        v57 = v54;
        Process = (unsigned __int64)&v77;
        if ( (unsigned __int64)&v77 >= 0xFFFFF6FB7DBED000uLL )
        {
          Process = (unsigned __int64)&v77;
          if ( (unsigned __int64)&v77 <= v55
            && (unsigned int)MiPteHasShadow(&v77, v54, v55, v21)
            && ((v54 & 0x20) == 0 || (v54 & 0x42) == 0) )
          {
            Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
            v59 = *(struct _LIST_ENTRY **)(Process + 1928);
            if ( v59 )
            {
              v60 = *((_QWORD *)&v59->Flink + (((unsigned __int64)&v77 >> 3) & 0x1FF));
              v57 = v54 | 0x20;
              Process = (unsigned __int8)v60;
              LOBYTE(Process) = v60 & 0x20;
              if ( (v60 & 0x20) == 0 )
                v57 = v54;
              if ( (v60 & 0x42) != 0 )
                v57 |= 0x42uLL;
            }
            else
            {
              v57 = v54;
            }
          }
        }
        v21 = (char *)0xFFFFFA8000000000LL;
        v61 = 48 * ((v57 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        v86 = BugCheckParameter4;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v61 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v86);
            while ( *(__int64 *)(v61 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v61 + 24), 0x3FuLL) );
          BugCheckParameter4 = 0LL;
          v21 = (char *)0xFFFFFA8000000000LL;
        }
        i = *(_QWORD *)v53;
        if ( v53 >= 0xFFFFF6FB7DBED000uLL
          && v53 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow(Process, i, v55, 0xFFFFFA8000000000uLL)
          && (i & 1) != 0
          && ((i & 0x20) == 0 || (i & 0x42) == 0) )
        {
          v62 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v62 )
          {
            v63 = *((_QWORD *)&v62->Flink + ((v53 >> 3) & 0x1FF));
            v64 = i | 0x20;
            if ( (v63 & 0x20) == 0 )
              v64 = i;
            i = v64;
            if ( (v63 & 0x42) != 0 )
              i = v64 | 0x42;
          }
        }
        if ( v54 == i )
        {
          i = (unsigned __int128)((v61 - (__int64)v21) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
          v65 = (v61 - (__int64)v21) / 48;
          if ( v50 == -1 )
          {
            v66 = MiSearchNumaNodeTable((v61 - (__int64)v21) / 48);
            BugCheckParameter4 = 0LL;
            v50 = *(_DWORD *)(v66 + 8);
          }
          else
          {
            v67 = dword_140C4DD08;
            if ( dword_140C4DD04 > (unsigned int)dword_140C4DD08
              || (v21 = (char *)qword_140C4DD48 + 16 * dword_140C4DD04, v65 < *(_QWORD *)v21)
              || dword_140C4DD04 != dword_140C4DD08 && v65 >= *((_QWORD *)v21 + 2) )
            {
              for ( i = (unsigned int)BugCheckParameter4; ; i = (unsigned int)(v68 + 1) )
              {
                while ( 1 )
                {
                  if ( v67 < (int)i )
                    KeBugCheckEx(0x1Au, 0x6201uLL, v65, 0LL, BugCheckParameter4);
                  v68 = ((int)i + v67) >> 1;
                  v21 = (char *)qword_140C4DD48 + 16 * v68;
                  if ( v65 >= *(_QWORD *)v21 )
                    break;
                  if ( !v68 )
                    KeBugCheckEx(0x1Au, 0x6200uLL, v65, (ULONG_PTR)v21, BugCheckParameter4);
                  v67 = v68 - 1;
                }
                if ( v68 == dword_140C4DD08 || v65 < *((_QWORD *)v21 + 2) )
                  break;
              }
              dword_140C4DD04 = ((int)i + v67) >> 1;
            }
            if ( v50 != *((_DWORD *)v21 + 2) )
              v49 = BugCheckParameter4;
          }
          *(_QWORD *)v61 &= 0xFFFFF00000000001uLL;
          v53 += 8LL;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v61 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      else
      {
        v53 += 8LL;
      }
    }
    while ( v53 < v85 );
    if ( v49 == 1 )
      break;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v69 = KeGetCurrentIrql();
        if ( v69 <= 0xFu && v48 <= 0xFu && v69 >= 2u )
        {
          v70 = KeGetCurrentPrcb();
          i = -1LL << (v48 + 1);
          v21 = (char *)v70->SchedulerAssist;
          v71 = ~(unsigned __int16)i;
          v39 = (v71 & *((_DWORD *)v21 + 5)) == 0;
          *((_DWORD *)v21 + 5) &= v71;
          if ( v39 )
            KiRemoveSystemWorkPriorityKick(v70);
        }
      }
    }
    __writecr8(v48);
    v23 = v78;
    v5 = v81;
LABEL_176:
    if ( v23 != 1 )
    {
      v2 = v84;
      goto LABEL_188;
    }
    v45 = v82;
    BugCheckParameter4 = 0LL;
    v23 = 0LL;
    v78 = 0LL;
  }
  RtlpInterlockedPushEntrySList((PSLIST_HEADER)v46, (PSLIST_ENTRY)(v47 + 4080));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v72 = KeGetCurrentIrql();
      if ( v72 <= 0xFu && v48 <= 0xFu && v72 >= 2u )
      {
        v73 = KeGetCurrentPrcb();
        v74 = v73->SchedulerAssist;
        v75 = ~(unsigned __int16)(-1LL << (v48 + 1));
        v39 = (v75 & v74[5]) == 0;
        v74[5] &= v75;
        if ( v39 )
          KiRemoveSystemWorkPriorityKick(v73);
      }
    }
  }
  __writecr8(v48);
}
