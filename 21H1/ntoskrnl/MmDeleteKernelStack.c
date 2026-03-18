/*
 * XREFs of MmDeleteKernelStack @ 0x1402925B0
 * Callers:
 *     PspDeleteKernelStack @ 0x140312D60 (PspDeleteKernelStack.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1403546E0 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     PspInsertThread @ 0x1406F3184 (PspInsertThread.c)
 *     KeUserModeCallback @ 0x140705310 (KeUserModeCallback.c)
 *     KeFreeCalloutStack @ 0x140768230 (KeFreeCalloutStack.c)
 *     KeAllocateCalloutStackEx @ 0x14076B1F0 (KeAllocateCalloutStackEx.c)
 *     KiStartDynamicProcessor @ 0x1408B625C (KiStartDynamicProcessor.c)
 *     KeInitThread @ 0x14098BDA4 (KeInitThread.c)
 *     KeStartAllProcessors @ 0x140A404CC (KeStartAllProcessors.c)
 * Callees:
 *     MiDeleteKernelStack @ 0x1402263A0 (MiDeleteKernelStack.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiSearchNumaNodeTable @ 0x1402931D0 (MiSearchNumaNodeTable.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FDDA0 (RtlpInterlockedPushEntrySList.c)
 *     MiLogKernelStackEvent @ 0x140541020 (MiLogKernelStackEvent.c)
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
  __int64 i; // rdx
  ULONG_PTR BugCheckParameter4; // r10
  __int64 v22; // rcx
  unsigned int v23; // ebx
  BOOL v24; // esi
  __int64 v25; // rax
  __int64 Process; // rdx
  _QWORD *p_Flink; // r9
  unsigned __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // rdi
  unsigned __int8 CurrentIrql; // bp
  __int64 v33; // rax
  unsigned __int8 v34; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v37; // eax
  bool v38; // zf
  unsigned __int64 v39; // rsi
  unsigned __int8 v40; // al
  struct _KPRCB *v41; // r10
  _DWORD *v42; // r9
  int v43; // eax
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
  __int64 v58; // rax
  unsigned __int64 v59; // rdx
  unsigned __int64 v60; // rcx
  struct _LIST_ENTRY *v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // r9
  __int64 v65; // rsi
  struct _LIST_ENTRY *v66; // r8
  __int64 v67; // rax
  __int64 v68; // r8
  ULONG_PTR v69; // r8
  __int64 v70; // rax
  int v71; // ecx
  char *v72; // r9
  int v73; // eax
  unsigned __int8 v74; // al
  struct _KPRCB *v75; // r10
  _DWORD *v76; // r9
  int v77; // eax
  unsigned __int8 v78; // al
  struct _KPRCB *v79; // r9
  _DWORD *v80; // r8
  int v81; // eax
  unsigned __int64 v82; // [rsp+30h] [rbp-88h] BYREF
  __int64 v83; // [rsp+38h] [rbp-80h] BYREF
  __int64 v84; // [rsp+40h] [rbp-78h]
  unsigned __int64 v85; // [rsp+48h] [rbp-70h] BYREF
  unsigned __int64 v86; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int64 v87; // [rsp+58h] [rbp-60h]
  __int64 v88; // [rsp+60h] [rbp-58h]
  int v89; // [rsp+C0h] [rbp+8h] BYREF
  int v90; // [rsp+C8h] [rbp+10h]
  unsigned __int64 v91; // [rsp+D0h] [rbp+18h]
  int v92; // [rsp+D8h] [rbp+20h] BYREF

  v90 = a2;
  v82 = 0LL;
  v2 = a2;
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 && (a2 & 2) != 0 )
  {
    v4 = 18LL;
    if ( (v2 & 1) == 0 )
      v4 = (unsigned __int8)byte_140C4EAFC;
    MiLogKernelStackEvent(a1 - (unsigned int)((_DWORD)v4 << 12), v4, 0LL);
  }
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL;
  v87 = v5;
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
  v85 = v7;
  if ( MiPteInShadowRange((unsigned __int64)&v85)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v7 & 1) != 0
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    v10 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v10 )
    {
      v11 = *((_QWORD *)&v10->Flink + (((unsigned __int64)&v85 >> 3) & 0x1FF));
      v12 = v7 | 0x20;
      if ( (v11 & 0x20) == 0 )
        v12 = v7;
      v7 = v12;
      if ( (v11 & 0x42) != 0 )
        v7 = v12 | 0x42;
    }
  }
  if ( *(ULONG_PTR **)(qword_140C4E588
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
  v86 = v6;
  if ( MiPteInShadowRange((unsigned __int64)&v86)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v6 & 1) != 0
    && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
  {
    v16 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v16 )
    {
      v17 = *((_QWORD *)&v16->Flink + (((unsigned __int64)&v86 >> 3) & 0x1FF));
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
  v22 = 0LL;
  v84 = 0LL;
  v23 = *(_DWORD *)(v19 + 8);
  LODWORD(v91) = v23;
  if ( (v2 & 4) != 0 )
  {
    v24 = MiPteInShadowRange((unsigned __int64)&v82);
    while ( 1 )
    {
      v25 = MI_READ_PTE_LOCK_FREE(v5);
      v82 = v25;
      v28 = v25;
      if ( v24 )
      {
        if ( (MiFlags & 0xC00000) != 0 )
        {
          Process = (__int64)KeGetCurrentThread()->ApcState.Process;
          if ( *(_BYTE *)(Process + 912) != 1 && (v25 & 1) != 0 )
          {
            Process = v25;
            if ( (v25 & 0x20) == 0 || (v25 & 0x42) == 0 )
            {
              p_Flink = &KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink->Flink;
              if ( p_Flink )
              {
                v29 = p_Flink[((unsigned __int64)&v82 >> 3) & 0x1FF];
                if ( (v29 & 0x20) != 0 )
                  v28 = Process | 0x20;
                if ( (v29 & 0x42) != 0 )
                  v28 |= 0x42uLL;
              }
              else
              {
                v28 = v82;
              }
            }
          }
        }
      }
      v30 = (v28 >> 12) & 0xFFFFFFFFFLL;
      v31 = 48 * v30 - 0x58000000000LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        p_Flink = KeGetCurrentPrcb()->SchedulerAssist;
        Process = (-1LL << (CurrentIrql + 1)) & 4;
        v30 = (unsigned int)Process | *((_DWORD *)p_Flink + 5);
        *((_DWORD *)p_Flink + 5) = v30;
      }
      v89 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v31 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v89, Process, v30, (__int64)p_Flink);
        while ( *(__int64 *)(v31 + 24) < 0 );
      }
      v33 = MI_READ_PTE_LOCK_FREE(v5);
      if ( v82 == v33 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v34 = KeGetCurrentIrql();
          if ( v34 <= 0xFu && CurrentIrql <= 0xFu && v34 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v37 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v38 = (v37 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v37;
            if ( v38 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
    if ( (*(_QWORD *)v31 & 0xFFFFFFFFFFELL) != 0 )
      v39 = 8 * (*(_QWORD *)v31 & 0xFFFFFFFFFFELL | 0xFFFFF00000000000uLL);
    else
      v39 = 0LL;
    _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v23 = v91;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v40 = KeGetCurrentIrql();
        if ( v40 <= 0xFu && CurrentIrql <= 0xFu && v40 >= 2u )
        {
          v41 = KeGetCurrentPrcb();
          i = -1LL << (CurrentIrql + 1);
          v42 = v41->SchedulerAssist;
          v43 = ~(unsigned __int16)i;
          v38 = (v43 & v42[5]) == 0;
          v42[5] &= v43;
          if ( v38 )
            KiRemoveSystemWorkPriorityKick(v41);
        }
      }
    }
    __writecr8(CurrentIrql);
    BugCheckParameter4 = 0LL;
    v22 = 0LL;
    v84 = 0LL;
    if ( v39 == -32LL )
    {
      i = (__int64)KeGetCurrentPrcb();
      if ( *(unsigned __int16 *)(*(_QWORD *)(i + 192) + 146LL) == v23 && !*(_QWORD *)(i + 32520) )
      {
        v44 = (__int64)(v5 << 25) >> 16;
        *(_QWORD *)(v44 + 4064) = v44 ^ qword_140C4EE08;
        result = _InterlockedCompareExchange64((volatile signed __int64 *)(i + 32520), v44 + 4080, 0LL);
        if ( !result )
          return result;
      }
      v22 = 1LL;
      v84 = 1LL;
    }
  }
  v46 = 176LL * v23;
  v88 = v46;
  while ( 1 )
  {
    v47 = (int *)((char *)&SListHead[2 * v22] + v46);
    if ( *(unsigned __int16 *)v47 >= v47[4] )
      goto LABEL_176;
    v48 = (__int64)(v5 << 25) >> 16;
    *(_QWORD *)(v48 + 0xFE0) = v48 ^ qword_140C4EE08;
    if ( v22 == 1 )
      return (signed __int64)RtlpInterlockedPushEntrySList((PSLIST_HEADER)v47, (PSLIST_ENTRY)(v48 + 4080));
    v49 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v49 <= 0xFu )
    {
      v50 = KeGetCurrentPrcb()->SchedulerAssist;
      i = (-1LL << (v49 + 1)) & 4;
      v50[5] |= i;
    }
    v51 = 1;
    v83 = 0LL;
    v52 = -1;
    v53 = v5 - 8LL * (unsigned __int8)byte_140C4EAFC;
    v54 = v53 + 8LL * ((unsigned int)(unsigned __int8)byte_140C4EAFC + 1);
    v55 = v53 + 8;
    v91 = v54;
    if ( v55 >= v54 )
      break;
    do
    {
      v56 = *(_QWORD *)v55;
      v57 = 0xFFFFF6FB7DBED7F8uLL;
      if ( v55 >= 0xFFFFF6FB7DBED000uLL
        && v55 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED000uLL, i)
        && (v56 & 1) != 0
        && ((v56 & 0x20) == 0 || (v56 & 0x42) == 0) )
      {
        i = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( i )
        {
          v58 = *(_QWORD *)(i + 8 * ((v55 >> 3) & 0x1FF));
          i = v56 | 0x20;
          if ( (v58 & 0x20) == 0 )
            i = v56;
          v56 = i;
          if ( (v58 & 0x42) != 0 )
            v56 = i | 0x42;
        }
      }
      v83 = v56;
      if ( (v56 & 1) != 0 )
      {
        v59 = v56;
        v60 = (unsigned __int64)&v83;
        if ( (unsigned __int64)&v83 >= 0xFFFFF6FB7DBED000uLL )
        {
          v60 = (unsigned __int64)&v83;
          if ( (unsigned __int64)&v83 <= v57
            && (unsigned int)MiPteHasShadow(&v83, v56)
            && ((v56 & 0x20) == 0 || (v56 & 0x42) == 0) )
          {
            v60 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
            v61 = *(struct _LIST_ENTRY **)(v60 + 1928);
            if ( v61 )
            {
              v62 = *((_QWORD *)&v61->Flink + (((unsigned __int64)&v83 >> 3) & 0x1FF));
              v59 = v56 | 0x20;
              v60 = (unsigned __int8)v62;
              LOBYTE(v60) = v62 & 0x20;
              if ( (v62 & 0x20) == 0 )
                v59 = v56;
              if ( (v62 & 0x42) != 0 )
                v59 |= 0x42uLL;
            }
            else
            {
              v59 = v56;
            }
          }
        }
        v63 = (v59 >> 12) & 0xFFFFFFFFFLL;
        v64 = 0xFFFFFA8000000000uLL;
        v65 = 48 * v63 - 0x58000000000LL;
        v92 = BugCheckParameter4;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v65 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v92, v63, v57, v64);
            while ( *(__int64 *)(v65 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v65 + 24), 0x3FuLL) );
          BugCheckParameter4 = 0LL;
          v64 = 0xFFFFFA8000000000uLL;
        }
        i = *(_QWORD *)v55;
        if ( v55 >= 0xFFFFF6FB7DBED000uLL
          && v55 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow(v60, i)
          && (i & 1) != 0
          && ((i & 0x20) == 0 || (i & 0x42) == 0) )
        {
          v66 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v66 )
          {
            v67 = *((_QWORD *)&v66->Flink + ((v55 >> 3) & 0x1FF));
            v68 = i | 0x20;
            if ( (v67 & 0x20) == 0 )
              v68 = i;
            i = v68;
            if ( (v67 & 0x42) != 0 )
              i = v68 | 0x42;
          }
        }
        if ( v56 == i )
        {
          i = (unsigned __int128)((v65 - v64) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
          v69 = (v65 - v64) / 48;
          if ( v52 == -1 )
          {
            v70 = MiSearchNumaNodeTable((v65 - v64) / 48);
            BugCheckParameter4 = 0LL;
            v52 = *(_DWORD *)(v70 + 8);
          }
          else
          {
            v71 = dword_140C4DDC8;
            if ( dword_140C4DDC4 > (unsigned int)dword_140C4DDC8
              || (v72 = (char *)qword_140C4DE08 + 16 * dword_140C4DDC4, v69 < *(_QWORD *)v72)
              || dword_140C4DDC4 != dword_140C4DDC8 && v69 >= *((_QWORD *)v72 + 2) )
            {
              for ( i = (unsigned int)BugCheckParameter4; ; i = (unsigned int)(v73 + 1) )
              {
                while ( 1 )
                {
                  if ( v71 < (int)i )
                    KeBugCheckEx(0x1Au, 0x6201uLL, v69, 0LL, BugCheckParameter4);
                  v73 = ((int)i + v71) >> 1;
                  v72 = (char *)qword_140C4DE08 + 16 * v73;
                  if ( v69 >= *(_QWORD *)v72 )
                    break;
                  if ( !v73 )
                    KeBugCheckEx(0x1Au, 0x6200uLL, v69, (ULONG_PTR)v72, BugCheckParameter4);
                  v71 = v73 - 1;
                }
                if ( v73 == dword_140C4DDC8 || v69 < *((_QWORD *)v72 + 2) )
                  break;
              }
              dword_140C4DDC4 = ((int)i + v71) >> 1;
            }
            if ( v52 != *((_DWORD *)v72 + 2) )
              v51 = BugCheckParameter4;
          }
          *(_QWORD *)v65 &= 0xFFFFF00000000001uLL;
          v55 += 8LL;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v65 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      else
      {
        v55 += 8LL;
      }
    }
    while ( v55 < v91 );
    if ( v51 == 1 )
      break;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v74 = KeGetCurrentIrql();
        if ( v74 <= 0xFu && v49 <= 0xFu && v74 >= 2u )
        {
          v75 = KeGetCurrentPrcb();
          i = -1LL << (v49 + 1);
          v76 = v75->SchedulerAssist;
          v77 = ~(unsigned __int16)i;
          v38 = (v77 & v76[5]) == 0;
          v76[5] &= v77;
          if ( v38 )
            KiRemoveSystemWorkPriorityKick(v75);
        }
      }
    }
    __writecr8(v49);
    v22 = v84;
    v5 = v87;
LABEL_176:
    if ( v22 != 1 )
    {
      v2 = v90;
      return MiDeleteKernelStack(v5, v2);
    }
    v46 = v88;
    BugCheckParameter4 = 0LL;
    v22 = 0LL;
    v84 = 0LL;
  }
  RtlpInterlockedPushEntrySList((PSLIST_HEADER)v47, (PSLIST_ENTRY)(v48 + 4080));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v78 = KeGetCurrentIrql();
      if ( v78 <= 0xFu && v49 <= 0xFu && v78 >= 2u )
      {
        v79 = KeGetCurrentPrcb();
        v80 = v79->SchedulerAssist;
        v81 = ~(unsigned __int16)(-1LL << (v49 + 1));
        v38 = (v81 & v80[5]) == 0;
        v80[5] &= v81;
        if ( v38 )
          KiRemoveSystemWorkPriorityKick(v79);
      }
    }
  }
  result = v49;
  __writecr8(v49);
  return result;
}
