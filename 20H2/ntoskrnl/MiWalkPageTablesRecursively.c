/*
 * XREFs of MiWalkPageTablesRecursively @ 0x14026D0C0
 * Callers:
 *     MiWalkPageTables @ 0x14026A5E0 (MiWalkPageTables.c)
 *     MiWalkPageTablesRecursively @ 0x14026D0C0 (MiWalkPageTablesRecursively.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14022EA40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiLockLowestValidPageTable @ 0x140236270 (MiLockLowestValidPageTable.c)
 *     MiWalkPageTablesRecursively @ 0x14026D0C0 (MiWalkPageTablesRecursively.c)
 *     MiComputePxeWalkAction @ 0x14026DD70 (MiComputePxeWalkAction.c)
 *     MiGetNextPageTablePte @ 0x14026E0D0 (MiGetNextPageTablePte.c)
 *     MiLockPageTableInternal @ 0x14026FE10 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MiGetSharedVm @ 0x14027C730 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1402F81B8 (KiResetGlobalDpcWatchdogProfiler.c)
 *     MiYieldPageTableWalk @ 0x14030BC80 (MiYieldPageTableWalk.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 *     MiGetPageTableLockBuffer @ 0x14035BB38 (MiGetPageTableLockBuffer.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     MiWaitForFreePage @ 0x14055A72C (MiWaitForFreePage.c)
 *     EtwTraceShouldYieldProcessor @ 0x1405A66EC (EtwTraceShouldYieldProcessor.c)
 */

__int64 __fastcall MiWalkPageTablesRecursively(
        unsigned __int16 *a1,
        unsigned __int64 a2,
        unsigned __int64 DpcRequestSummary)
{
  __int64 v4; // rsi
  int v5; // r15d
  int v6; // ebp
  int v8; // r14d
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  int v11; // r13d
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 SharedVm; // rbx
  __int64 v15; // rbx
  __int64 v16; // rax
  unsigned __int16 **v17; // r10
  __int64 v18; // r11
  unsigned __int16 *v19; // rax
  char v20; // cl
  char v21; // al
  __int64 (__fastcall *v22)(unsigned __int16 *); // rdx
  char v23; // al
  int v24; // ebx
  __int64 v25; // r10
  LONG *v26; // rax
  unsigned __int64 v27; // r9
  char v28; // dl
  struct _KPRCB *CurrentPrcb; // rax
  bool v30; // zf
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  __int64 v32; // rcx
  int v33; // ecx
  _DWORD *PageTableLockBuffer; // rax
  unsigned __int64 v35; // rcx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v37; // rax
  struct _KPRCB *v38; // rcx
  unsigned int DpcWatchdogCount; // esi
  unsigned int DpcTimeCount; // ebp
  int v41; // edx
  unsigned int v42; // ebx
  _KTHREAD *NextThread; // rax
  int v44; // eax
  unsigned int NextPageTablePte; // eax
  unsigned __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rsi
  unsigned __int64 *v49; // rbx
  __int64 v50; // r9
  __int16 v51; // r10
  unsigned __int64 v52; // rdx
  struct _LIST_ENTRY *v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  int v57; // eax
  __int64 (__fastcall *v58)(unsigned __int16 *); // rax
  char v59; // cl
  int v60; // eax
  char v61; // cl
  int v62; // ebp
  int v63; // eax
  unsigned __int16 *v64; // r9
  unsigned __int64 v65; // r10
  __int64 v66; // r8
  unsigned __int64 v67; // rax
  __int64 v68; // rax
  unsigned __int64 v69; // rcx
  unsigned __int16 *v70; // r9
  unsigned __int64 v71; // r10
  __int64 v72; // r8
  unsigned __int64 v73; // rax
  unsigned __int64 *v74; // rcx
  __int64 v75; // rbx
  char v76; // al
  __int64 (__fastcall *v77)(unsigned __int16 *); // rdx
  char v78; // al
  char v79; // al
  __int64 v81; // [rsp+20h] [rbp-78h]
  __int64 v82; // [rsp+28h] [rbp-70h]
  unsigned __int64 v83; // [rsp+30h] [rbp-68h]
  __int64 (__fastcall *v84)(unsigned __int16 *, unsigned __int64, _QWORD); // [rsp+38h] [rbp-60h]
  unsigned __int64 v85[11]; // [rsp+40h] [rbp-58h] BYREF
  int v86; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v87; // [rsp+A8h] [rbp+10h]
  int v88; // [rsp+B0h] [rbp+18h]
  unsigned __int64 *v89; // [rsp+B8h] [rbp+20h]

  v88 = DpcRequestSummary;
  v4 = *((_QWORD *)a1 + 3);
  v84 = (__int64 (__fastcall *)(unsigned __int16 *, unsigned __int64, _QWORD))*((_QWORD *)a1 + 19);
  v5 = 0;
  v6 = DpcRequestSummary;
  v87 = v4;
  v82 = (int)DpcRequestSummary;
  v8 = 0;
  v9 = (unsigned __int64)&a1[8 * (int)DpcRequestSummary + 40];
  v81 = 8LL * (int)DpcRequestSummary;
  v89 = (unsigned __int64 *)v9;
  if ( a2 < *(_QWORD *)v9 )
    a2 = *(_QWORD *)v9;
  if ( (_DWORD)DpcRequestSummary == 3 )
  {
    v10 = *((_QWORD *)a1 + 17);
  }
  else
  {
    v10 = (a2 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    if ( v10 > *(_QWORD *)(v9 + 8) )
      v10 = *(_QWORD *)(v9 + 8);
  }
  v83 = v10;
  v11 = 0;
  if ( a2 <= v10 )
  {
    while ( 1 )
    {
      v9 = 0x7FFFFFFFF8LL;
      if ( v11 )
      {
        v11 = 0;
        if ( v8 >= 3 )
          goto LABEL_28;
        if ( (a1[1] & 1) != 0 )
        {
          if ( v6 != 3 )
            goto LABEL_223;
          v12 = *((_QWORD *)a1 + 3);
          if ( (*(_BYTE *)a1 & 4) == 0 )
          {
            SharedVm = MiGetSharedVm(*((_QWORD *)a1 + 3), 0x7FFFFFFFF8LL);
            ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
            *(_DWORD *)(SharedVm + 4) = 0;
            if ( (*a1 & 0x400) != 0 )
              ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C4E19C);
            goto LABEL_18;
          }
          v13 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          MiLockWorkingSetShared(*((_QWORD *)a1 + 3));
          if ( MiLockLowestValidPageTable(v12, v13 << 25 >> 16, v85) == v13 )
          {
            *((_QWORD *)a1 + 6) = v13;
LABEL_18:
            *((_BYTE *)a1 + 2) &= ~1u;
            goto LABEL_19;
          }
          MiUnlockPageTableInternal(v12);
          MiUnlockWorkingSetShared(*((_QWORD *)a1 + 3), *((unsigned __int8 *)a1 + 6));
        }
      }
LABEL_19:
      v15 = ++*((_QWORD *)a1 + 18);
      if ( (*a1 & 8) != 0 && (v15 & 0xF) == 0 )
      {
        v16 = *((_QWORD *)a1 + 9);
        DpcRequestSummary = *(_QWORD *)(v16 + 7104);
        if ( DpcRequestSummary < 0x420 )
        {
          v17 = (unsigned __int16 **)(v16 + 4200);
          v18 = 0LL;
          while ( 1 )
          {
            v19 = *v17;
            v9 = 0LL;
            if ( dword_140C4DD7C )
              break;
LABEL_26:
            ++v18;
            ++v17;
            if ( v18 > 1 )
            {
              v8 = 4;
              goto LABEL_28;
            }
          }
          while ( 1 )
          {
            DpcRequestSummary += *v19;
            if ( DpcRequestSummary >= 0x420 )
              break;
            v9 = (unsigned int)(v9 + 1);
            v19 += 8;
            if ( (unsigned int)v9 >= dword_140C4DD7C )
              goto LABEL_26;
          }
        }
      }
      if ( (*a1 & 2) == 0 || ((unsigned __int8)v15 & *((_BYTE *)a1 + 5)) != 0 )
        goto LABEL_103;
      v25 = *((_QWORD *)a1 + 3);
      v26 = &dword_140C4F600;
      if ( (*(_BYTE *)(v25 + 184) & 7) != 2 )
        v26 = (LONG *)(v25 + 192);
      if ( (*v26 & 0x40000000) != 0 )
      {
LABEL_99:
        v44 = MiYieldPageTableWalk(a1, 1LL, DpcRequestSummary);
        if ( v44 >= 3 )
          v8 = v44;
        goto LABEL_209;
      }
      if ( (*(_BYTE *)a1 & 4) != 0 )
      {
        v27 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v28 = *(_BYTE *)(v25 + 184) & 7;
        v86 = 0;
        if ( ((a2 >> 9) & 0x7FFFFFFFF8LL) == 0x7B7DBEDF68LL )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          if ( v28 )
          {
            if ( v28 == 7 )
            {
              v30 = CurrentPrcb->SelfmapLockHandle[1].LockQueue.Next == 0LL;
            }
            else
            {
              if ( v28 == 5 )
                Next = CurrentPrcb->SelfmapLockHandle[0].LockQueue.Next;
              else
                Next = CurrentPrcb->SelfmapLockHandle[3].LockQueue.Next;
              v30 = Next == 0LL;
            }
          }
          else
          {
            v30 = CurrentPrcb->SelfmapLockHandle[2].LockQueue.Next == 0LL;
          }
        }
        else
        {
          DpcRequestSummary = 0xFFFFF6FB7DBED000uLL;
          if ( v28
            || v27 < 0xFFFFF6FB7DBED000uLL
            || v27 > 0xFFFFF6FB7DBEDFFFuLL
            || (v32 = *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[8] + 608)) == 0 )
          {
            if ( v28 && v27 >= 0xFFFFF6FB7DBED000uLL && v27 <= 0xFFFFF6FB7DBEDFFFuLL )
            {
              PageTableLockBuffer = (_DWORD *)MiGetPageTableLockBuffer(
                                                v25,
                                                ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                                                &v86);
              if ( ((*PageTableLockBuffer >> v86) & 2) != 0 )
                goto LABEL_99;
              goto LABEL_75;
            }
            v35 = *(_QWORD *)v27;
            if ( v27 >= 0xFFFFF6FB7DBED000uLL
              && v27 <= 0xFFFFF6FB7DBED7F8uLL
              && (MiFlags & 0xC00000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v35 & 1) != 0
              && ((v35 & 0x20) == 0 || (v35 & 0x42) == 0) )
            {
              Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( Flink )
              {
                DpcRequestSummary = v35 | 0x20;
                v37 = *((_QWORD *)&Flink->Flink + ((v27 >> 3) & 0x1FF));
                if ( (v37 & 0x20) == 0 )
                  DpcRequestSummary = *(_QWORD *)v27;
                v35 = DpcRequestSummary;
                if ( (v37 & 0x42) != 0 )
                  v35 = DpcRequestSummary | 0x42;
              }
            }
            v33 = (v35 >> 60) & 2;
          }
          else
          {
            v33 = (*(_DWORD *)(v32 + 4 * ((((a2 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF)) >> 30) & 1;
          }
          v30 = v33 == 0;
        }
        if ( !v30 )
          goto LABEL_99;
      }
LABEL_75:
      if ( (*a1 & 0x400) != 0 && (dword_140C4E19C & 0x40000000) != 0 )
        goto LABEL_99;
      if ( *((_BYTE *)a1 + 6) < 2u )
      {
        v38 = KeGetCurrentPrcb();
        DpcRequestSummary = (unsigned int)v38->DpcRequestSummary;
        DpcWatchdogCount = v38->DpcWatchdogCount;
        DpcTimeCount = v38->DpcTimeCount;
        if ( (DpcRequestSummary & 1) != 0 )
        {
          v41 = 1;
          if ( DpcTimeCount > 7 )
          {
            if ( v38->QuantumEnd )
            {
              v42 = 1;
LABEL_96:
              if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
                EtwTraceShouldYieldProcessor(v42, DpcWatchdogCount, DpcTimeCount);
              if ( v42 )
                goto LABEL_99;
LABEL_102:
              v6 = v88;
              goto LABEL_103;
            }
LABEL_91:
            if ( (DpcRequestSummary & 0x1E) != 0 )
            {
              v42 = 5;
              goto LABEL_96;
            }
            if ( v38->CurrentThread != v38->IdleThread )
            {
              v42 = 6;
              goto LABEL_96;
            }
LABEL_95:
            _disable();
            v38->DpcWatchdogCount = 0;
            v38->DpcTimeCount = 0;
            KiResetGlobalDpcWatchdogProfiler();
            _enable();
            v42 = 0;
            goto LABEL_96;
          }
        }
        else
        {
          v41 = 0;
          if ( (DpcRequestSummary & 0x1E) != 0 )
          {
            v42 = 2;
            goto LABEL_96;
          }
          if ( v38->QuantumEnd )
          {
            v42 = 3;
            goto LABEL_96;
          }
          NextThread = v38->NextThread;
          if ( NextThread && NextThread != v38->CurrentThread )
          {
            v42 = 4;
            goto LABEL_96;
          }
        }
        if ( DpcWatchdogCount <= 7 )
          goto LABEL_102;
        if ( v41 )
          goto LABEL_91;
        goto LABEL_95;
      }
LABEL_103:
      if ( (*(_BYTE *)a1 & 0x20) != 0 )
      {
        NextPageTablePte = MiGetNextPageTablePte(a1, a2, (unsigned int)v6);
        v46 = NextPageTablePte;
        if ( NextPageTablePte == 3 )
        {
          v8 = 3;
          goto LABEL_209;
        }
        if ( (a1[1] & 1) != 0 )
          goto LABEL_209;
        v47 = *((_QWORD *)a1 + 8);
        if ( v47 && v47 == a2 )
        {
          *((_QWORD *)a1 + 8) = 0LL;
LABEL_110:
          v48 = v87;
LABEL_111:
          v49 = v89;
          goto LABEL_112;
        }
      }
      else
      {
        v46 = (unsigned int)MiComputePxeWalkAction(a1, a2, (unsigned int)v6);
      }
      if ( !(_DWORD)v46 )
        goto LABEL_190;
      if ( (_DWORD)v46 == 1 )
        goto LABEL_110;
      v46 = *((unsigned __int8 *)a1 + 2);
      if ( v6 <= ((*((unsigned __int8 *)a1 + 2) >> 2) & 7) )
        goto LABEL_110;
      v58 = (__int64 (__fastcall *)(unsigned __int16 *))*((_QWORD *)a1 + 20);
      v59 = v46 | 2;
      *((_BYTE *)a1 + 2) = v59;
      if ( v58 )
      {
        v60 = v58(a1);
        v59 = *((_BYTE *)a1 + 2);
LABEL_147:
        v61 = v59 & 0xFD;
        *((_BYTE *)a1 + 2) = v61;
        if ( v60 >= 3 )
          goto LABEL_183;
        goto LABEL_148;
      }
      v60 = 0;
      if ( *((_BYTE *)a1 + 6) != 17 )
        goto LABEL_147;
      v61 = v59 & 0xFD;
      *((_BYTE *)a1 + 2) = v61;
LABEL_148:
      if ( (v61 & 1) != 0 )
        goto LABEL_183;
      v9 = 2LL * v6;
      v46 = (__int64)(a2 << 25) >> 16;
      if ( v46 < *(_QWORD *)&a1[8 * v6 + 32] )
        v46 = *(_QWORD *)&a1[8 * v6 + 32];
      if ( v46 > *(_QWORD *)&a1[8 * v6 + 36] )
      {
        v48 = v87;
        v49 = v89;
        goto LABEL_112;
      }
      if ( (*(_BYTE *)a1 & 4) != 0 )
      {
        MiLockPageTableInternal(v87, a2, 0LL);
        MiUnlockPageTableInternal(v87);
        *((_QWORD *)a1 + 6) = a2;
      }
      v62 = 0;
      v63 = MiWalkPageTablesRecursively(a1, (__int64)(a2 << 25) >> 16, (unsigned int)(v88 - 1));
      v49 = v89;
      v8 = v63;
      if ( *v89 != a2 )
      {
        v9 = *a1;
        LOBYTE(v62) = (*v89 & 0xFFF) == 0;
        LOWORD(v9) = v9 & 0x4000;
        if ( (_WORD)v9 && a2 < *v89 )
        {
          if ( (a1[1] & 1) == 0 && (unsigned int)MiYieldPageTableWalk(a1, 1LL, DpcRequestSummary) == 4 )
            v8 = 4;
          a2 = *v49;
          goto LABEL_209;
        }
        v46 = a2;
        *((_QWORD *)a1 + 8) = a2;
        if ( !(_WORD)v9 || (v64 = &a1[v81 + 40], a2 > *(_QWORD *)v64) )
        {
          v64 = &a1[v81 + 40];
          *(_QWORD *)v64 = a2;
        }
        v65 = v82;
        if ( v82 < 3 )
        {
          v66 = 3 - v82;
          v9 = (unsigned __int64)(v64 + 8);
          do
          {
            v46 = ((v46 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            *(_QWORD *)v9 = v46;
            v9 += 16LL;
            --v66;
          }
          while ( v66 );
          v65 = v82;
          v49 = v89;
        }
        v67 = a2;
        DpcRequestSummary = v65;
        if ( v65 )
        {
          v46 = (unsigned __int64)(v64 - 8);
          do
          {
            v9 = (__int64)(v67 << 25) >> 16;
            if ( (*a1 & 0x4000) == 0 || (v67 = *(_QWORD *)v46, v9 > *(_QWORD *)v46) )
            {
              v67 = v9;
              *(_QWORD *)v46 = v9;
            }
            v46 -= 16LL;
            --DpcRequestSummary;
          }
          while ( DpcRequestSummary );
        }
      }
      if ( v8 < 3 && (a1[1] & 1) == 0 )
      {
        if ( (*(_BYTE *)a1 & 4) != 0 )
        {
          if ( v62
            || (v48 = v87,
                !(unsigned int)MiLockPageTableInternal(v87, ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL)) )
          {
            v60 = MiYieldPageTableWalk(a1, 1LL, DpcRequestSummary);
LABEL_183:
            if ( v60 == 4 )
              v8 = 4;
            v11 = 1;
            goto LABEL_210;
          }
          MiUnlockPageTableInternal(v48);
          v6 = v88;
          *((_QWORD *)a1 + 6) = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          goto LABEL_111;
        }
        v6 = v88;
        v48 = v87;
LABEL_112:
        v50 = *a1;
        v51 = *a1 & 1;
        if ( (v50 & 1) == 0 && !v6 )
        {
          DpcRequestSummary = ((((__int64)(a2 << 25) >> 16) & 0xFFFFFFFFF000uLL) >> 9) - 0x98000000000LL;
          v52 = *(_QWORD *)DpcRequestSummary;
          if ( DpcRequestSummary >= 0xFFFFF6FB7DBED000uLL
            && DpcRequestSummary <= 0xFFFFF6FB7DBED7F8uLL
            && (unsigned int)MiPteHasShadow(v46, v52, DpcRequestSummary, v50)
            && (v52 & 1) != 0
            && ((v52 & 0x20) == 0 || (v52 & 0x42) == 0) )
          {
            v53 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v53 )
            {
              v54 = *((_QWORD *)&v53->Flink + ((DpcRequestSummary >> 3) & 0x1FF));
              DpcRequestSummary = v52 | 0x20;
              if ( (v54 & 0x20) == 0 )
                DpcRequestSummary = v52;
              v52 = DpcRequestSummary;
              if ( (v54 & 0x42) != 0 )
                v52 = DpcRequestSummary | 0x42;
            }
          }
          v9 = HIBYTE(v52);
          LOBYTE(v9) = v9 & 0xF;
          if ( (_BYTE)v9 == 10 || (_BYTE)v9 == 9 || (_BYTE)v9 == 8 && (v50 & 0x8000u) == 0LL )
            goto LABEL_190;
        }
        v55 = *((_QWORD *)a1 + 8);
        if ( v55 && v55 == *v49 )
          *((_QWORD *)a1 + 8) = 0LL;
        v56 = *((_QWORD *)a1 + 7);
        if ( v56 && v56 == *v49 )
          *((_QWORD *)a1 + 7) = 0LL;
        if ( v6 >= 1 && (*(_BYTE *)(v48 + 184) & 7) != 0 && !v51 || (v50 & 0x40) != 0 )
        {
LABEL_190:
          v8 = 0;
        }
        else
        {
          v57 = v84(a1, a2, (unsigned int)v6);
          v8 = v57;
          if ( v57 == 1 )
          {
            v8 = 0;
            goto LABEL_207;
          }
          if ( v57 == 2 )
          {
            v8 = 0;
            MiYieldPageTableWalk(a1, 1LL, DpcRequestSummary);
            MiWaitForFreePage(*((_QWORD *)a1 + 9));
            v11 = 1;
            goto LABEL_207;
          }
        }
        v68 = *((unsigned __int8 *)a1 + 3);
        *((_BYTE *)a1 + 3) = 0;
        a2 += 8 * v68 + 8;
        if ( v6 || (a2 & 0xFFF) == 0 )
        {
          v69 = a2;
          if ( (*a1 & 0x4000) == 0 || (v70 = &a1[v81 + 40], a2 > *(_QWORD *)v70) )
          {
            v70 = &a1[v81 + 40];
            *(_QWORD *)v70 = a2;
          }
          v71 = v6;
          if ( v6 < 3LL )
          {
            v9 = (unsigned __int64)(v70 + 8);
            v72 = 3LL - v6;
            do
            {
              v69 = ((v69 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              *(_QWORD *)v9 = v69;
              v9 += 16LL;
              --v72;
            }
            while ( v72 );
            v71 = v6;
          }
          v73 = a2;
          DpcRequestSummary = v71;
          if ( v71 )
          {
            v74 = (unsigned __int64 *)(v70 - 8);
            do
            {
              v9 = (__int64)(v73 << 25) >> 16;
              if ( (*a1 & 0x4000) == 0 || (v73 = *v74, v9 > *v74) )
              {
                v73 = v9;
                *v74 = v9;
              }
              v74 -= 2;
              --DpcRequestSummary;
            }
            while ( DpcRequestSummary );
          }
        }
        else
        {
          *((_QWORD *)a1 + 10) = a2;
        }
LABEL_207:
        if ( (a1[1] & 1) == 0 && v8 < 3 )
          goto LABEL_210;
      }
LABEL_209:
      v11 = 1;
LABEL_210:
      v6 = v88;
      if ( a2 > v83 )
      {
LABEL_28:
        v4 = v87;
        break;
      }
    }
  }
  if ( v6 != 3 )
  {
LABEL_223:
    v76 = *((_BYTE *)a1 + 2);
    if ( (v76 & 1) != 0 )
      return (unsigned int)v8;
    v77 = (__int64 (__fastcall *)(unsigned __int16 *))*((_QWORD *)a1 + 20);
    v78 = v76 | 2;
    *((_BYTE *)a1 + 2) = v78;
    if ( v77 )
    {
      v5 = v77(a1);
      v78 = *((_BYTE *)a1 + 2);
    }
    else if ( *((_BYTE *)a1 + 6) == 17 )
    {
      v79 = v78 & 0xFD;
LABEL_228:
      *((_BYTE *)a1 + 2) = v79;
      return (unsigned int)v8;
    }
    v79 = v78 & 0xFD;
    if ( v5 == 4 )
      v8 = 4;
    goto LABEL_228;
  }
  v20 = *((_BYTE *)a1 + 2);
  v21 = v20;
  if ( (v20 & 1) == 0 && ((*(_BYTE *)a1 & 0x40) == 0 || v8 != 3) )
  {
    v22 = (__int64 (__fastcall *)(unsigned __int16 *))*((_QWORD *)a1 + 20);
    v23 = v20 | 2;
    *((_BYTE *)a1 + 2) = v20 | 2;
    if ( v22 )
    {
      v24 = v22(a1);
      v23 = *((_BYTE *)a1 + 2);
    }
    else
    {
      v24 = 0;
    }
    v9 = *((_QWORD *)a1 + 6);
    v21 = v23 & 0xFD;
    *((_BYTE *)a1 + 2) = v21;
    if ( v9 )
    {
      MiUnlockPageTableInternal(v4);
      v21 = *((_BYTE *)a1 + 2);
      *((_QWORD *)a1 + 6) = 0LL;
    }
    if ( v24 == 4 )
      v8 = 4;
  }
  if ( (v21 & 1) != 0 )
  {
    if ( (*(_BYTE *)a1 & 4) != 0 )
    {
      MiLockWorkingSetShared(v4);
      *((_BYTE *)a1 + 2) &= ~1u;
    }
    else
    {
      v75 = MiGetSharedVm(v4, v9);
      ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v75);
      *(_DWORD *)(v75 + 4) = 0;
      if ( (*a1 & 0x400) != 0 )
        ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C4E19C);
      *((_BYTE *)a1 + 2) &= ~1u;
    }
  }
  return (unsigned int)v8;
}
