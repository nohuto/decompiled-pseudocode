/*
 * XREFs of MmDeleteKernelStack @ 0x140239560
 * Callers:
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1402F8700 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     PspDeleteKernelStack @ 0x140350B00 (PspDeleteKernelStack.c)
 *     PspInsertThread @ 0x1406AE2E4 (PspInsertThread.c)
 *     KeUserModeCallback @ 0x1406AF450 (KeUserModeCallback.c)
 *     KeFreeCalloutStack @ 0x14076A610 (KeFreeCalloutStack.c)
 *     KeAllocateCalloutStackEx @ 0x14076D990 (KeAllocateCalloutStackEx.c)
 *     KiStartDynamicProcessor @ 0x1408B757C (KiStartDynamicProcessor.c)
 *     KeInitThread @ 0x14098C548 (KeInitThread.c)
 *     KeStartAllProcessors @ 0x140A45D28 (KeStartAllProcessors.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiSearchNumaNodeTable @ 0x14023A180 (MiSearchNumaNodeTable.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiDeleteKernelStack @ 0x1402B9020 (MiDeleteKernelStack.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FF030 (RtlpInterlockedPushEntrySList.c)
 *     MiLogKernelStackEvent @ 0x140541670 (MiLogKernelStackEvent.c)
 */

signed __int64 __fastcall MmDeleteKernelStack(unsigned __int64 a1, unsigned int a2)
{
  unsigned int v2; // esi
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
  __int64 Process; // rdx
  unsigned __int64 v28; // r8
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
  signed __int64 result; // rax
  __int64 v46; // rax
  int *v47; // r15
  __int64 v48; // r13
  unsigned __int8 v49; // r12
  int v50; // ebp
  int v51; // edi
  unsigned __int64 v52; // r14
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // r14
  __int64 v55; // rbx
  unsigned __int64 v56; // r8
  __int64 v57; // rax
  unsigned __int64 v58; // rdx
  unsigned __int64 v59; // rcx
  struct _LIST_ENTRY *v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rsi
  struct _LIST_ENTRY *v64; // r8
  __int64 v65; // rax
  __int64 v66; // r8
  ULONG_PTR v67; // r8
  __int64 v68; // rax
  int v69; // ecx
  int v70; // eax
  unsigned __int8 v71; // al
  struct _KPRCB *v72; // r10
  int v73; // eax
  unsigned __int8 v74; // al
  struct _KPRCB *v75; // r9
  _DWORD *v76; // r8
  int v77; // eax
  unsigned __int64 v78; // [rsp+30h] [rbp-88h] BYREF
  __int64 v79; // [rsp+38h] [rbp-80h] BYREF
  __int64 v80; // [rsp+40h] [rbp-78h]
  unsigned __int64 v81; // [rsp+48h] [rbp-70h] BYREF
  unsigned __int64 v82; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int64 v83; // [rsp+58h] [rbp-60h]
  __int64 v84; // [rsp+60h] [rbp-58h]
  int v85; // [rsp+C0h] [rbp+8h] BYREF
  unsigned int v86; // [rsp+C8h] [rbp+10h]
  unsigned __int64 v87; // [rsp+D0h] [rbp+18h]
  int v88; // [rsp+D8h] [rbp+20h] BYREF

  v86 = a2;
  v78 = 0LL;
  v2 = a2;
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 && (a2 & 2) != 0 )
  {
    v4 = 18LL;
    if ( (v2 & 1) == 0 )
      v4 = (unsigned __int8)byte_140C4E9BC;
    MiLogKernelStackEvent(a1 - (unsigned int)((_DWORD)v4 << 12), v4, 0LL);
  }
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL;
  v83 = v5;
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
  v81 = v7;
  if ( MiPteInShadowRange((unsigned __int64)&v81)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v7 & 1) != 0
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    v10 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v10 )
    {
      v11 = *((_QWORD *)&v10->Flink + (((unsigned __int64)&v81 >> 3) & 0x1FF));
      v12 = v7 | 0x20;
      if ( (v11 & 0x20) == 0 )
        v12 = v7;
      v7 = v12;
      if ( (v11 & 0x42) != 0 )
        v7 = v12 | 0x42;
    }
  }
  if ( *(ULONG_PTR **)(qword_140C4E448
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
  v82 = v6;
  if ( MiPteInShadowRange((unsigned __int64)&v82)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v6 & 1) != 0
    && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
  {
    v16 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v16 )
    {
      v17 = *((_QWORD *)&v16->Flink + (((unsigned __int64)&v82 >> 3) & 0x1FF));
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
  v80 = 0LL;
  v24 = *(_DWORD *)(v19 + 8);
  LODWORD(v87) = v24;
  if ( (v2 & 4) != 0 )
  {
    v25 = MiPteInShadowRange((unsigned __int64)&v78);
    while ( 1 )
    {
      v26 = MI_READ_PTE_LOCK_FREE(v5);
      v78 = v26;
      v28 = v26;
      if ( v25 )
      {
        if ( (MiFlags & 0xC00000) != 0 )
        {
          Process = (__int64)KeGetCurrentThread()->ApcState.Process;
          if ( *(_BYTE *)(Process + 912) != 1 && (v26 & 1) != 0 )
          {
            Process = v26;
            if ( (v26 & 0x20) == 0 || (v26 & 0x42) == 0 )
            {
              v29 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( v29 )
              {
                v30 = *((_QWORD *)&v29->Flink + (((unsigned __int64)&v78 >> 3) & 0x1FF));
                if ( (v30 & 0x20) != 0 )
                  v28 = Process | 0x20;
                if ( (v30 & 0x42) != 0 )
                  v28 |= 0x42uLL;
              }
              else
              {
                v28 = v78;
              }
            }
          }
        }
      }
      v31 = 48 * ((v28 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        Process = (-1LL << (CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= Process;
      }
      v85 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v31 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v85, Process);
        while ( *(__int64 *)(v31 + 24) < 0 );
      }
      v34 = MI_READ_PTE_LOCK_FREE(v5);
      if ( v78 == v34 )
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
    v24 = v87;
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
    v80 = 0LL;
    if ( v40 == -32LL )
    {
      i = (__int64)KeGetCurrentPrcb();
      if ( *(unsigned __int16 *)(*(_QWORD *)(i + 192) + 146LL) == v24 && !*(_QWORD *)(i + 32520) )
      {
        v44 = (__int64)(v5 << 25) >> 16;
        *(_QWORD *)(v44 + 4064) = v44 ^ qword_140C4ECC8;
        result = _InterlockedCompareExchange64((volatile signed __int64 *)(i + 32520), v44 + 4080, 0LL);
        if ( !result )
          return result;
      }
      v23 = 1LL;
      v80 = 1LL;
    }
  }
  v46 = 176LL * v24;
  v84 = v46;
  while ( 1 )
  {
    v47 = (int *)((char *)&SListHead[2 * v23] + v46);
    if ( *(unsigned __int16 *)v47 >= v47[4] )
      goto LABEL_176;
    v48 = (__int64)(v5 << 25) >> 16;
    *(_QWORD *)(v48 + 0xFE0) = v48 ^ qword_140C4ECC8;
    if ( v23 == 1 )
      return (signed __int64)RtlpInterlockedPushEntrySList((PSLIST_HEADER)v47, (PSLIST_ENTRY)(v48 + 4080));
    v49 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v49 <= 0xFu )
    {
      v21 = (char *)KeGetCurrentPrcb()->SchedulerAssist;
      i = (-1LL << (v49 + 1)) & 4;
      *((_DWORD *)v21 + 5) |= i;
    }
    v50 = 1;
    v79 = 0LL;
    v51 = -1;
    v52 = v5 - 8LL * (unsigned __int8)byte_140C4E9BC;
    v53 = v52 + 8LL * ((unsigned int)(unsigned __int8)byte_140C4E9BC + 1);
    v54 = v52 + 8;
    v87 = v53;
    if ( v54 >= v53 )
      break;
    do
    {
      v55 = *(_QWORD *)v54;
      v56 = 0xFFFFF6FB7DBED7F8uLL;
      if ( v54 >= 0xFFFFF6FB7DBED000uLL
        && v54 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED000uLL, i, 0xFFFFF6FB7DBED7F8uLL, v21)
        && (v55 & 1) != 0
        && ((v55 & 0x20) == 0 || (v55 & 0x42) == 0) )
      {
        i = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( i )
        {
          v57 = *(_QWORD *)(i + 8 * ((v54 >> 3) & 0x1FF));
          i = v55 | 0x20;
          if ( (v57 & 0x20) == 0 )
            i = v55;
          v55 = i;
          if ( (v57 & 0x42) != 0 )
            v55 = i | 0x42;
        }
      }
      v79 = v55;
      if ( (v55 & 1) != 0 )
      {
        v58 = v55;
        v59 = (unsigned __int64)&v79;
        if ( (unsigned __int64)&v79 >= 0xFFFFF6FB7DBED000uLL )
        {
          v59 = (unsigned __int64)&v79;
          if ( (unsigned __int64)&v79 <= v56
            && (unsigned int)MiPteHasShadow(&v79, v55, v56, v21)
            && ((v55 & 0x20) == 0 || (v55 & 0x42) == 0) )
          {
            v59 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
            v60 = *(struct _LIST_ENTRY **)(v59 + 1928);
            if ( v60 )
            {
              v61 = *((_QWORD *)&v60->Flink + (((unsigned __int64)&v79 >> 3) & 0x1FF));
              v58 = v55 | 0x20;
              v59 = (unsigned __int8)v61;
              LOBYTE(v59) = v61 & 0x20;
              if ( (v61 & 0x20) == 0 )
                v58 = v55;
              if ( (v61 & 0x42) != 0 )
                v58 |= 0x42uLL;
            }
            else
            {
              v58 = v55;
            }
          }
        }
        v62 = (v58 >> 12) & 0xFFFFFFFFFLL;
        v21 = (char *)0xFFFFFA8000000000LL;
        v63 = 48 * v62 - 0x58000000000LL;
        v88 = BugCheckParameter4;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v63 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v88, v62);
            while ( *(__int64 *)(v63 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v63 + 24), 0x3FuLL) );
          BugCheckParameter4 = 0LL;
          v21 = (char *)0xFFFFFA8000000000LL;
        }
        i = *(_QWORD *)v54;
        if ( v54 >= 0xFFFFF6FB7DBED000uLL
          && v54 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow(v59, i, v56, 0xFFFFFA8000000000uLL)
          && (i & 1) != 0
          && ((i & 0x20) == 0 || (i & 0x42) == 0) )
        {
          v64 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v64 )
          {
            v65 = *((_QWORD *)&v64->Flink + ((v54 >> 3) & 0x1FF));
            v66 = i | 0x20;
            if ( (v65 & 0x20) == 0 )
              v66 = i;
            i = v66;
            if ( (v65 & 0x42) != 0 )
              i = v66 | 0x42;
          }
        }
        if ( v55 == i )
        {
          i = (unsigned __int128)((v63 - (__int64)v21) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
          v67 = (v63 - (__int64)v21) / 48;
          if ( v51 == -1 )
          {
            v68 = MiSearchNumaNodeTable((v63 - (__int64)v21) / 48);
            BugCheckParameter4 = 0LL;
            v51 = *(_DWORD *)(v68 + 8);
          }
          else
          {
            v69 = dword_140C4DC88;
            if ( dword_140C4DC84 > (unsigned int)dword_140C4DC88
              || (v21 = (char *)qword_140C4DCC8 + 16 * dword_140C4DC84, v67 < *(_QWORD *)v21)
              || dword_140C4DC84 != dword_140C4DC88 && v67 >= *((_QWORD *)v21 + 2) )
            {
              for ( i = (unsigned int)BugCheckParameter4; ; i = (unsigned int)(v70 + 1) )
              {
                while ( 1 )
                {
                  if ( v69 < (int)i )
                    KeBugCheckEx(0x1Au, 0x6201uLL, v67, 0LL, BugCheckParameter4);
                  v70 = ((int)i + v69) >> 1;
                  v21 = (char *)qword_140C4DCC8 + 16 * v70;
                  if ( v67 >= *(_QWORD *)v21 )
                    break;
                  if ( !v70 )
                    KeBugCheckEx(0x1Au, 0x6200uLL, v67, (ULONG_PTR)v21, BugCheckParameter4);
                  v69 = v70 - 1;
                }
                if ( v70 == dword_140C4DC88 || v67 < *((_QWORD *)v21 + 2) )
                  break;
              }
              dword_140C4DC84 = ((int)i + v69) >> 1;
            }
            if ( v51 != *((_DWORD *)v21 + 2) )
              v50 = BugCheckParameter4;
          }
          *(_QWORD *)v63 &= 0xFFFFF00000000001uLL;
          v54 += 8LL;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v63 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      else
      {
        v54 += 8LL;
      }
    }
    while ( v54 < v87 );
    if ( v50 == 1 )
      break;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v71 = KeGetCurrentIrql();
        if ( v71 <= 0xFu && v49 <= 0xFu && v71 >= 2u )
        {
          v72 = KeGetCurrentPrcb();
          i = -1LL << (v49 + 1);
          v21 = (char *)v72->SchedulerAssist;
          v73 = ~(unsigned __int16)i;
          v39 = (v73 & *((_DWORD *)v21 + 5)) == 0;
          *((_DWORD *)v21 + 5) &= v73;
          if ( v39 )
            KiRemoveSystemWorkPriorityKick(v72);
        }
      }
    }
    __writecr8(v49);
    v23 = v80;
    v5 = v83;
LABEL_176:
    if ( v23 != 1 )
    {
      v2 = v86;
      return MiDeleteKernelStack(v5, v2);
    }
    v46 = v84;
    BugCheckParameter4 = 0LL;
    v23 = 0LL;
    v80 = 0LL;
  }
  RtlpInterlockedPushEntrySList((PSLIST_HEADER)v47, (PSLIST_ENTRY)(v48 + 4080));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v74 = KeGetCurrentIrql();
      if ( v74 <= 0xFu && v49 <= 0xFu && v74 >= 2u )
      {
        v75 = KeGetCurrentPrcb();
        v76 = v75->SchedulerAssist;
        v77 = ~(unsigned __int16)(-1LL << (v49 + 1));
        v39 = (v77 & v76[5]) == 0;
        v76[5] &= v77;
        if ( v39 )
          KiRemoveSystemWorkPriorityKick(v75);
      }
    }
  }
  result = v49;
  __writecr8(v49);
  return result;
}
