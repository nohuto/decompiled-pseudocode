/*
 * XREFs of MmDeleteKernelStack @ 0x14032AB70
 * Callers:
 *     PspDeleteKernelStack @ 0x1402C2B50 (PspDeleteKernelStack.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x14032A230 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     PspInsertThread @ 0x140649028 (PspInsertThread.c)
 *     KeUserModeCallback @ 0x1406F0030 (KeUserModeCallback.c)
 *     KeFreeCalloutStack @ 0x14077CBD0 (KeFreeCalloutStack.c)
 *     KeAllocateCalloutStackEx @ 0x1407801A0 (KeAllocateCalloutStackEx.c)
 *     KiStartDynamicProcessor @ 0x1408BA678 (KiStartDynamicProcessor.c)
 *     KeInitThread @ 0x14098F2E0 (KeInitThread.c)
 *     KeStartAllProcessors @ 0x140A4D568 (KeStartAllProcessors.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiDeleteKernelStack @ 0x140272740 (MiDeleteKernelStack.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiSearchNumaNodeTable @ 0x14032B790 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x140407970 (RtlpInterlockedPushEntrySList.c)
 *     MiLogKernelStackEvent @ 0x140546B40 (MiLogKernelStackEvent.c)
 */

signed __int64 __fastcall MmDeleteKernelStack(unsigned __int64 a1, struct _LIST_ENTRY *Flink)
{
  unsigned int v2; // esi
  __int64 v4; // rdx
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // r8
  char *v11; // r9
  __int64 v12; // rax
  __int64 v13; // rax
  struct _LIST_ENTRY *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  ULONG_PTR BugCheckParameter4; // r10
  __int64 v20; // rcx
  unsigned int v21; // ebx
  int v22; // esi
  __int64 v23; // rax
  __int64 Process; // rdx
  _QWORD *p_Flink; // r9
  unsigned __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // rdi
  unsigned __int8 CurrentIrql; // bp
  __int64 v31; // rax
  unsigned __int8 v32; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v35; // eax
  bool v36; // zf
  unsigned __int64 v37; // rsi
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // r10
  int v40; // eax
  struct _KPRCB *v41; // rdx
  __int64 v42; // rcx
  signed __int64 result; // rax
  __int64 v44; // rax
  int *v45; // r15
  __int64 v46; // r13
  unsigned __int8 v47; // r12
  int v48; // ebp
  int v49; // edi
  unsigned __int64 v50; // r14
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // r14
  __int64 v53; // rbx
  struct _LIST_ENTRY *v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rdx
  unsigned __int64 v57; // rdx
  struct _LIST_ENTRY *v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rsi
  __int64 v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rax
  int v65; // ecx
  int i; // edx
  int v67; // eax
  unsigned __int8 v68; // al
  struct _KPRCB *v69; // r10
  int v70; // eax
  unsigned __int8 v71; // al
  struct _KPRCB *v72; // r9
  _DWORD *v73; // r8
  int v74; // eax
  unsigned __int64 v75; // [rsp+30h] [rbp-88h] BYREF
  __int64 v76; // [rsp+38h] [rbp-80h] BYREF
  __int64 v77; // [rsp+40h] [rbp-78h]
  unsigned __int64 v78; // [rsp+48h] [rbp-70h] BYREF
  unsigned __int64 v79; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int64 v80; // [rsp+58h] [rbp-60h]
  __int64 v81; // [rsp+60h] [rbp-58h]
  int v82; // [rsp+C0h] [rbp+8h] BYREF
  unsigned int v83; // [rsp+C8h] [rbp+10h]
  unsigned __int64 v84; // [rsp+D0h] [rbp+18h]
  int v85; // [rsp+D8h] [rbp+20h] BYREF

  v83 = (unsigned int)Flink;
  v75 = 0LL;
  v2 = (unsigned int)Flink;
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 && ((unsigned __int8)Flink & 2) != 0 )
  {
    v4 = 18LL;
    if ( (v2 & 1) == 0 )
      v4 = (unsigned __int8)byte_140C4EBBC;
    MiLogKernelStackEvent(a1 - (unsigned int)((_DWORD)v4 << 12), v4, 0LL);
  }
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL;
  v80 = v5;
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
      v8 = *((_QWORD *)&Flink->Flink + ((v5 >> 3) & 0x1FF));
      if ( (v8 & 0x20) == 0 )
        v7 = *(_QWORD *)v5;
      if ( (v8 & 0x42) != 0 )
        v7 |= 0x42uLL;
    }
  }
  v78 = v7;
  if ( (unsigned int)MiPteInShadowRange(&v78, Flink)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v7 & 1) != 0
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    v9 = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v9 )
    {
      v12 = *(_QWORD *)(v9 + 8 * (((unsigned __int64)&v78 >> 3) & 0x1FF));
      v9 = v7 | 0x20;
      if ( (v12 & 0x20) == 0 )
        v9 = v7;
      v7 = v9;
      if ( (v12 & 0x42) != 0 )
        v7 = v9 | 0x42;
    }
  }
  if ( *(ULONG_PTR **)(qword_140C4E648
                     + 8 * ((*(_QWORD *)(48 * ((v7 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 40) >> 39) & 0x3FFLL)) != &MiSystemPartition
    || (v2 & 1) != 0 )
  {
    return MiDeleteKernelStack(v5, v2, v10, v11);
  }
  if ( v5 >= 0xFFFFF6FB7DBED000uLL
    && v5 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v6 & 1) != 0
    && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
  {
    v9 = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v9 )
    {
      v13 = *(_QWORD *)(v9 + 8 * ((v5 >> 3) & 0x1FF));
      v9 = v6 | 0x20;
      if ( (v13 & 0x20) == 0 )
        v9 = v6;
      v6 = v9;
      if ( (v13 & 0x42) != 0 )
        v6 = v9 | 0x42;
    }
  }
  v79 = v6;
  if ( (unsigned int)MiPteInShadowRange(&v79, v9)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v6 & 1) != 0
    && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
  {
    v14 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v14 )
    {
      v15 = *((_QWORD *)&v14->Flink + (((unsigned __int64)&v79 >> 3) & 0x1FF));
      v16 = v6 | 0x20;
      if ( (v15 & 0x20) == 0 )
        v16 = v6;
      v6 = v16;
      if ( (v15 & 0x42) != 0 )
        v6 = v16 | 0x42;
    }
  }
  v17 = MiSearchNumaNodeTable((__int64)(48 * ((v6 >> 12) & 0xFFFFFFFFFLL)) / 48);
  BugCheckParameter4 = 0LL;
  v20 = 0LL;
  v77 = 0LL;
  v21 = *(_DWORD *)(v17 + 8);
  LODWORD(v84) = v21;
  v10 = 2LL;
  if ( (v2 & 4) != 0 )
  {
    v22 = MiPteInShadowRange(&v75, v18);
    while ( 1 )
    {
      v23 = MI_READ_PTE_LOCK_FREE(v5);
      v75 = v23;
      v26 = v23;
      if ( v22 )
      {
        if ( (MiFlags & 0xC00000) != 0 )
        {
          Process = (__int64)KeGetCurrentThread()->ApcState.Process;
          if ( *(_BYTE *)(Process + 912) != 1 && (v23 & 1) != 0 )
          {
            Process = v23;
            if ( (v23 & 0x20) == 0 || (v23 & 0x42) == 0 )
            {
              p_Flink = &KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink->Flink;
              if ( p_Flink )
              {
                v27 = p_Flink[((unsigned __int64)&v75 >> 3) & 0x1FF];
                if ( (v27 & 0x20) != 0 )
                  v26 = Process | 0x20;
                if ( (v27 & 0x42) != 0 )
                  v26 |= 0x42uLL;
              }
              else
              {
                v26 = v75;
              }
            }
          }
        }
      }
      v28 = (v26 >> 12) & 0xFFFFFFFFFLL;
      v29 = 48 * v28 - 0x58000000000LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        p_Flink = KeGetCurrentPrcb()->SchedulerAssist;
        Process = (-1LL << (CurrentIrql + 1)) & 4;
        v28 = (unsigned int)Process | *((_DWORD *)p_Flink + 5);
        *((_DWORD *)p_Flink + 5) = v28;
      }
      v82 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v82, Process, v28, (__int64)p_Flink);
        while ( *(__int64 *)(v29 + 24) < 0 );
      }
      v31 = MI_READ_PTE_LOCK_FREE(v5);
      if ( v75 == v31 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v32 = KeGetCurrentIrql();
          if ( v32 <= 0xFu && CurrentIrql <= 0xFu && v32 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v35 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v36 = (v35 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v35;
            if ( v36 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
    if ( (*(_QWORD *)v29 & 0xFFFFFFFFFFELL) != 0 )
      v37 = 8 * (*(_QWORD *)v29 & 0xFFFFFFFFFFELL | 0xFFFFF00000000000uLL);
    else
      v37 = 0LL;
    _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v21 = v84;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v38 = KeGetCurrentIrql();
        if ( v38 <= 0xFu && CurrentIrql <= 0xFu && v38 >= 2u )
        {
          v39 = KeGetCurrentPrcb();
          v11 = (char *)v39->SchedulerAssist;
          v40 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v36 = (v40 & *((_DWORD *)v11 + 5)) == 0;
          *((_DWORD *)v11 + 5) &= v40;
          if ( v36 )
            KiRemoveSystemWorkPriorityKick(v39);
        }
      }
    }
    __writecr8(CurrentIrql);
    BugCheckParameter4 = 0LL;
    v20 = 0LL;
    v77 = 0LL;
    if ( v37 == -32LL )
    {
      v41 = KeGetCurrentPrcb();
      if ( v41->ParentNode->Affinity.Reserved[0] == v21 && !v41->CachedStack )
      {
        v42 = (__int64)(v5 << 25) >> 16;
        *(_QWORD *)(v42 + 4064) = v42 ^ qword_140C4EEC8;
        result = _InterlockedCompareExchange64((volatile signed __int64 *)&v41->CachedStack, v42 + 4080, 0LL);
        if ( !result )
          return result;
      }
      v20 = 1LL;
      v77 = 1LL;
    }
    v10 = 2LL;
  }
  v44 = 176LL * v21;
  v81 = v44;
  while ( 1 )
  {
    v45 = (int *)((char *)&SListHead[2 * v20] + v44);
    if ( *(unsigned __int16 *)v45 >= v45[4] )
      goto LABEL_177;
    v46 = (__int64)(v5 << 25) >> 16;
    *(_QWORD *)(v46 + 0xFE0) = v46 ^ qword_140C4EEC8;
    if ( v20 == 1 )
      return (signed __int64)RtlpInterlockedPushEntrySList((PSLIST_HEADER)v45, (PSLIST_ENTRY)(v46 + 4080));
    v47 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v47 <= 0xFu )
    {
      v11 = (char *)KeGetCurrentPrcb()->SchedulerAssist;
      *((_DWORD *)v11 + 5) |= (-1 << (v47 + 1)) & 4;
    }
    v48 = 1;
    v76 = 0LL;
    v49 = -1;
    v50 = v5 - 8LL * (unsigned __int8)byte_140C4EBBC;
    v51 = v50 + 8LL * ((unsigned int)(unsigned __int8)byte_140C4EBBC + 1);
    v52 = v50 + 8;
    v84 = v51;
    if ( v52 >= v51 )
      break;
    do
    {
      v53 = *(_QWORD *)v52;
      v10 = 0xFFFFF6FB7DBED7F8uLL;
      if ( v52 >= 0xFFFFF6FB7DBED000uLL
        && v52 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow()
        && (v53 & 1) != 0
        && ((v53 & 0x20) == 0 || (v53 & 0x42) == 0) )
      {
        v54 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v54 )
        {
          v55 = *((_QWORD *)&v54->Flink + ((v52 >> 3) & 0x1FF));
          v56 = v53 | 0x20;
          if ( (v55 & 0x20) == 0 )
            v56 = v53;
          v53 = v56;
          if ( (v55 & 0x42) != 0 )
            v53 = v56 | 0x42;
        }
      }
      v76 = v53;
      if ( (v53 & 1) != 0 )
      {
        v57 = v53;
        if ( (unsigned __int64)&v76 >= 0xFFFFF6FB7DBED000uLL
          && (unsigned __int64)&v76 <= v10
          && (unsigned int)MiPteHasShadow()
          && ((v53 & 0x20) == 0 || (v53 & 0x42) == 0) )
        {
          v58 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v58 )
          {
            v59 = *((_QWORD *)&v58->Flink + (((unsigned __int64)&v76 >> 3) & 0x1FF));
            v57 = v53 | 0x20;
            if ( (v59 & 0x20) == 0 )
              v57 = v53;
            if ( (v59 & 0x42) != 0 )
              v57 |= 0x42uLL;
          }
          else
          {
            v57 = v53;
          }
        }
        v60 = (v57 >> 12) & 0xFFFFFFFFFLL;
        v11 = (char *)0xFFFFFA8000000000LL;
        v61 = 48 * v60 - 0x58000000000LL;
        v85 = BugCheckParameter4;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v61 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v85, v60, v10, (__int64)v11);
            while ( *(__int64 *)(v61 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v61 + 24), 0x3FuLL) );
          BugCheckParameter4 = 0LL;
          v11 = (char *)0xFFFFFA8000000000LL;
        }
        v62 = *(_QWORD *)v52;
        if ( v52 >= 0xFFFFF6FB7DBED000uLL
          && v52 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow()
          && (v62 & 1) != 0
          && ((v62 & 0x20) == 0 || (v62 & 0x42) == 0) )
        {
          v10 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v10 )
          {
            v63 = *(_QWORD *)(v10 + 8 * ((v52 >> 3) & 0x1FF));
            v10 = v62 | 0x20;
            if ( (v63 & 0x20) == 0 )
              v10 = v62;
            v62 = v10;
            if ( (v63 & 0x42) != 0 )
              v62 = v10 | 0x42;
          }
        }
        if ( v53 == v62 )
        {
          v10 = (v61 - (__int64)v11) / 48;
          if ( v49 == -1 )
          {
            v64 = MiSearchNumaNodeTable((v61 - (__int64)v11) / 48);
            BugCheckParameter4 = 0LL;
            v49 = *(_DWORD *)(v64 + 8);
          }
          else
          {
            v65 = dword_140C4DE88;
            if ( dword_140C4DE84 > (unsigned int)dword_140C4DE88
              || (v11 = (char *)qword_140C4DEC8 + 16 * dword_140C4DE84, v10 < *(_QWORD *)v11)
              || dword_140C4DE84 != dword_140C4DE88 && v10 >= *((_QWORD *)v11 + 2) )
            {
              for ( i = BugCheckParameter4; ; i = v67 + 1 )
              {
                while ( 1 )
                {
                  if ( v65 < i )
                    KeBugCheckEx(0x1Au, 0x6201uLL, v10, 0LL, BugCheckParameter4);
                  v67 = (i + v65) >> 1;
                  v11 = (char *)qword_140C4DEC8 + 16 * v67;
                  if ( v10 >= *(_QWORD *)v11 )
                    break;
                  if ( !v67 )
                    KeBugCheckEx(0x1Au, 0x6200uLL, v10, (ULONG_PTR)v11, BugCheckParameter4);
                  v65 = v67 - 1;
                }
                if ( v67 == dword_140C4DE88 || v10 < *((_QWORD *)v11 + 2) )
                  break;
              }
              dword_140C4DE84 = (i + v65) >> 1;
            }
            if ( v49 != *((_DWORD *)v11 + 2) )
              v48 = BugCheckParameter4;
          }
          *(_QWORD *)v61 &= 0xFFFFF00000000001uLL;
          v52 += 8LL;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v61 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      else
      {
        v52 += 8LL;
      }
    }
    while ( v52 < v84 );
    if ( v48 == 1 )
      break;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v68 = KeGetCurrentIrql();
        if ( v68 <= 0xFu && v47 <= 0xFu && v68 >= 2u )
        {
          v69 = KeGetCurrentPrcb();
          v11 = (char *)v69->SchedulerAssist;
          v70 = ~(unsigned __int16)(-1LL << (v47 + 1));
          v36 = (v70 & *((_DWORD *)v11 + 5)) == 0;
          v10 = (unsigned int)v70 & *((_DWORD *)v11 + 5);
          *((_DWORD *)v11 + 5) = v10;
          if ( v36 )
            KiRemoveSystemWorkPriorityKick(v69);
        }
      }
    }
    __writecr8(v47);
    v20 = v77;
    v5 = v80;
LABEL_177:
    if ( v20 != 1 )
    {
      v2 = v83;
      return MiDeleteKernelStack(v5, v2, v10, v11);
    }
    v44 = v81;
    BugCheckParameter4 = 0LL;
    v20 = 0LL;
    v77 = 0LL;
    v10 = 2LL;
  }
  RtlpInterlockedPushEntrySList((PSLIST_HEADER)v45, (PSLIST_ENTRY)(v46 + 4080));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v71 = KeGetCurrentIrql();
      if ( v71 <= 0xFu && v47 <= 0xFu && v71 >= 2u )
      {
        v72 = KeGetCurrentPrcb();
        v73 = v72->SchedulerAssist;
        v74 = ~(unsigned __int16)(-1LL << (v47 + 1));
        v36 = (v74 & v73[5]) == 0;
        v73[5] &= v74;
        if ( v36 )
          KiRemoveSystemWorkPriorityKick(v72);
      }
    }
  }
  result = v47;
  __writecr8(v47);
  return result;
}
