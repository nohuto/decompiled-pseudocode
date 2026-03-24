/*
 * XREFs of MiWalkPageTablesRecursively @ 0x14020BDA0
 * Callers:
 *     MiWalkPageTables @ 0x1402092C0 (MiWalkPageTables.c)
 *     MiWalkPageTablesRecursively @ 0x14020BDA0 (MiWalkPageTablesRecursively.c)
 * Callees:
 *     MiWalkPageTablesRecursively @ 0x14020BDA0 (MiWalkPageTablesRecursively.c)
 *     MiComputePxeWalkAction @ 0x14020CA50 (MiComputePxeWalkAction.c)
 *     MiGetNextPageTablePte @ 0x14020CDB0 (MiGetNextPageTablePte.c)
 *     MiLockPageTableInternal @ 0x14020EAF0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219CB0 (MiLockWorkingSetShared.c)
 *     MiGetSharedVm @ 0x14021AF50 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14021D060 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     MiGetPageTableLockBuffer @ 0x140285818 (MiGetPageTableLockBuffer.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1402940C8 (KiResetGlobalDpcWatchdogProfiler.c)
 *     MiYieldPageTableWalk @ 0x1402AA514 (MiYieldPageTableWalk.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiLockLowestValidPageTable @ 0x1403055C0 (MiLockLowestValidPageTable.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140314D90 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     MiWaitForFreePage @ 0x14055C1FC (MiWaitForFreePage.c)
 *     EtwTraceShouldYieldProcessor @ 0x1405A811C (EtwTraceShouldYieldProcessor.c)
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
  __int64 valid; // rax
  __int64 SharedVm; // rbx
  __int64 v16; // rbx
  __int64 v17; // rax
  unsigned __int16 **v18; // r10
  __int64 v19; // r11
  unsigned __int16 *v20; // rax
  char v21; // cl
  char v22; // al
  __int64 (__fastcall *v23)(unsigned __int16 *); // rdx
  char v24; // al
  int v25; // ebx
  __int64 v26; // r10
  LONG *v27; // rax
  unsigned __int64 v28; // r9
  char v29; // dl
  struct _KPRCB *CurrentPrcb; // rax
  bool v31; // zf
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  __int64 v33; // rcx
  int v34; // ecx
  _DWORD *PageTableLockBuffer; // rax
  unsigned __int64 v36; // rcx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v38; // rax
  struct _KPRCB *v39; // rcx
  unsigned int DpcWatchdogCount; // esi
  unsigned int DpcTimeCount; // ebp
  int v42; // edx
  unsigned int v43; // ebx
  _KTHREAD *NextThread; // rax
  int v45; // eax
  unsigned int NextPageTablePte; // eax
  unsigned __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rsi
  unsigned __int64 *v50; // rbx
  __int64 v51; // r9
  __int16 v52; // r10
  unsigned __int64 v53; // rdx
  struct _LIST_ENTRY *v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  int v58; // eax
  __int64 (__fastcall *v59)(unsigned __int16 *); // rax
  char v60; // cl
  int v61; // eax
  char v62; // cl
  int v63; // ebp
  int v64; // eax
  unsigned __int16 *v65; // r9
  unsigned __int64 v66; // r10
  __int64 v67; // r8
  unsigned __int64 v68; // rax
  __int64 v69; // rax
  unsigned __int64 v70; // rcx
  unsigned __int16 *v71; // r9
  unsigned __int64 v72; // r10
  __int64 v73; // r8
  unsigned __int64 v74; // rax
  unsigned __int64 *v75; // rcx
  __int64 v76; // rbx
  char v77; // al
  __int64 (__fastcall *v78)(unsigned __int16 *); // rdx
  char v79; // al
  char v80; // al
  __int64 v82; // [rsp+20h] [rbp-78h]
  __int64 v83; // [rsp+28h] [rbp-70h]
  unsigned __int64 v84; // [rsp+30h] [rbp-68h]
  __int64 (__fastcall *v85)(unsigned __int16 *, unsigned __int64, _QWORD); // [rsp+38h] [rbp-60h]
  char v86[88]; // [rsp+40h] [rbp-58h] BYREF
  int v87; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v88; // [rsp+A8h] [rbp+10h]
  int v89; // [rsp+B0h] [rbp+18h]
  unsigned __int64 *v90; // [rsp+B8h] [rbp+20h]

  v89 = DpcRequestSummary;
  v4 = *((_QWORD *)a1 + 3);
  v85 = (__int64 (__fastcall *)(unsigned __int16 *, unsigned __int64, _QWORD))*((_QWORD *)a1 + 19);
  v5 = 0;
  v6 = DpcRequestSummary;
  v88 = v4;
  v83 = (int)DpcRequestSummary;
  v8 = 0;
  v9 = (unsigned __int64)&a1[8 * (int)DpcRequestSummary + 40];
  v82 = 8LL * (int)DpcRequestSummary;
  v90 = (unsigned __int64 *)v9;
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
  v84 = v10;
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
              ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C4E31C);
            goto LABEL_18;
          }
          v13 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          MiLockWorkingSetShared(*((_QWORD *)a1 + 3));
          valid = MiLockLowestValidPageTable(v12, v13 << 25 >> 16, v86);
          if ( valid == v13 )
          {
            *((_QWORD *)a1 + 6) = v13;
LABEL_18:
            *((_BYTE *)a1 + 2) &= ~1u;
            goto LABEL_19;
          }
          MiUnlockPageTableInternal(v12, valid);
          MiUnlockWorkingSetShared(*((_QWORD *)a1 + 3), *((unsigned __int8 *)a1 + 6));
        }
      }
LABEL_19:
      v16 = ++*((_QWORD *)a1 + 18);
      if ( (*a1 & 8) != 0 && (v16 & 0xF) == 0 )
      {
        v17 = *((_QWORD *)a1 + 9);
        DpcRequestSummary = *(_QWORD *)(v17 + 7104);
        if ( DpcRequestSummary < 0x420 )
        {
          v18 = (unsigned __int16 **)(v17 + 4200);
          v19 = 0LL;
          while ( 1 )
          {
            v20 = *v18;
            v9 = 0LL;
            if ( dword_140C4DEFC )
              break;
LABEL_26:
            ++v19;
            ++v18;
            if ( v19 > 1 )
            {
              v8 = 4;
              goto LABEL_28;
            }
          }
          while ( 1 )
          {
            DpcRequestSummary += *v20;
            if ( DpcRequestSummary >= 0x420 )
              break;
            v9 = (unsigned int)(v9 + 1);
            v20 += 8;
            if ( (unsigned int)v9 >= dword_140C4DEFC )
              goto LABEL_26;
          }
        }
      }
      if ( (*a1 & 2) == 0 || ((unsigned __int8)v16 & *((_BYTE *)a1 + 5)) != 0 )
        goto LABEL_103;
      v26 = *((_QWORD *)a1 + 3);
      v27 = &dword_140C4F780;
      if ( (*(_BYTE *)(v26 + 184) & 7) != 2 )
        v27 = (LONG *)(v26 + 192);
      if ( (*v27 & 0x40000000) != 0 )
      {
LABEL_99:
        v45 = MiYieldPageTableWalk(a1, 1LL, DpcRequestSummary);
        if ( v45 >= 3 )
          v8 = v45;
        goto LABEL_209;
      }
      if ( (*(_BYTE *)a1 & 4) != 0 )
      {
        v28 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v29 = *(_BYTE *)(v26 + 184) & 7;
        v87 = 0;
        if ( ((a2 >> 9) & 0x7FFFFFFFF8LL) == 0x7B7DBEDF68LL )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          if ( v29 )
          {
            if ( v29 == 7 )
            {
              v31 = CurrentPrcb->SelfmapLockHandle[1].LockQueue.Next == 0LL;
            }
            else
            {
              if ( v29 == 5 )
                Next = CurrentPrcb->SelfmapLockHandle[0].LockQueue.Next;
              else
                Next = CurrentPrcb->SelfmapLockHandle[3].LockQueue.Next;
              v31 = Next == 0LL;
            }
          }
          else
          {
            v31 = CurrentPrcb->SelfmapLockHandle[2].LockQueue.Next == 0LL;
          }
        }
        else
        {
          DpcRequestSummary = 0xFFFFF6FB7DBED000uLL;
          if ( v29
            || v28 < 0xFFFFF6FB7DBED000uLL
            || v28 > 0xFFFFF6FB7DBEDFFFuLL
            || (v33 = *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[8] + 608)) == 0 )
          {
            if ( v29 && v28 >= 0xFFFFF6FB7DBED000uLL && v28 <= 0xFFFFF6FB7DBEDFFFuLL )
            {
              PageTableLockBuffer = (_DWORD *)MiGetPageTableLockBuffer(
                                                v26,
                                                ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                                                &v87);
              if ( ((*PageTableLockBuffer >> v87) & 2) != 0 )
                goto LABEL_99;
              goto LABEL_75;
            }
            v36 = *(_QWORD *)v28;
            if ( v28 >= 0xFFFFF6FB7DBED000uLL
              && v28 <= 0xFFFFF6FB7DBED7F8uLL
              && (MiFlags & 0xC00000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v36 & 1) != 0
              && ((v36 & 0x20) == 0 || (v36 & 0x42) == 0) )
            {
              Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( Flink )
              {
                DpcRequestSummary = v36 | 0x20;
                v38 = *((_QWORD *)&Flink->Flink + ((v28 >> 3) & 0x1FF));
                if ( (v38 & 0x20) == 0 )
                  DpcRequestSummary = *(_QWORD *)v28;
                v36 = DpcRequestSummary;
                if ( (v38 & 0x42) != 0 )
                  v36 = DpcRequestSummary | 0x42;
              }
            }
            v34 = (v36 >> 60) & 2;
          }
          else
          {
            v34 = (*(_DWORD *)(v33 + 4 * ((((a2 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF)) >> 30) & 1;
          }
          v31 = v34 == 0;
        }
        if ( !v31 )
          goto LABEL_99;
      }
LABEL_75:
      if ( (*a1 & 0x400) != 0 && (dword_140C4E31C & 0x40000000) != 0 )
        goto LABEL_99;
      if ( *((_BYTE *)a1 + 6) < 2u )
      {
        v39 = KeGetCurrentPrcb();
        DpcRequestSummary = (unsigned int)v39->DpcRequestSummary;
        DpcWatchdogCount = v39->DpcWatchdogCount;
        DpcTimeCount = v39->DpcTimeCount;
        if ( (DpcRequestSummary & 1) != 0 )
        {
          v42 = 1;
          if ( DpcTimeCount > 7 )
          {
            if ( v39->QuantumEnd )
            {
              v43 = 1;
LABEL_96:
              if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
                EtwTraceShouldYieldProcessor(v43, DpcWatchdogCount, DpcTimeCount);
              if ( v43 )
                goto LABEL_99;
LABEL_102:
              v6 = v89;
              goto LABEL_103;
            }
LABEL_91:
            if ( (DpcRequestSummary & 0x1E) != 0 )
            {
              v43 = 5;
              goto LABEL_96;
            }
            if ( v39->CurrentThread != v39->IdleThread )
            {
              v43 = 6;
              goto LABEL_96;
            }
LABEL_95:
            _disable();
            v39->DpcWatchdogCount = 0;
            v39->DpcTimeCount = 0;
            KiResetGlobalDpcWatchdogProfiler();
            _enable();
            v43 = 0;
            goto LABEL_96;
          }
        }
        else
        {
          v42 = 0;
          if ( (DpcRequestSummary & 0x1E) != 0 )
          {
            v43 = 2;
            goto LABEL_96;
          }
          if ( v39->QuantumEnd )
          {
            v43 = 3;
            goto LABEL_96;
          }
          NextThread = v39->NextThread;
          if ( NextThread && NextThread != v39->CurrentThread )
          {
            v43 = 4;
            goto LABEL_96;
          }
        }
        if ( DpcWatchdogCount <= 7 )
          goto LABEL_102;
        if ( v42 )
          goto LABEL_91;
        goto LABEL_95;
      }
LABEL_103:
      if ( (*(_BYTE *)a1 & 0x20) != 0 )
      {
        NextPageTablePte = MiGetNextPageTablePte(a1, a2, (unsigned int)v6);
        v47 = NextPageTablePte;
        if ( NextPageTablePte == 3 )
        {
          v8 = 3;
          goto LABEL_209;
        }
        if ( (a1[1] & 1) != 0 )
          goto LABEL_209;
        v48 = *((_QWORD *)a1 + 8);
        if ( v48 && v48 == a2 )
        {
          *((_QWORD *)a1 + 8) = 0LL;
LABEL_110:
          v49 = v88;
LABEL_111:
          v50 = v90;
          goto LABEL_112;
        }
      }
      else
      {
        v47 = (unsigned int)MiComputePxeWalkAction(a1, a2, (unsigned int)v6);
      }
      if ( !(_DWORD)v47 )
        goto LABEL_190;
      if ( (_DWORD)v47 == 1 )
        goto LABEL_110;
      v47 = *((unsigned __int8 *)a1 + 2);
      if ( v6 <= ((*((unsigned __int8 *)a1 + 2) >> 2) & 7) )
        goto LABEL_110;
      v59 = (__int64 (__fastcall *)(unsigned __int16 *))*((_QWORD *)a1 + 20);
      v60 = v47 | 2;
      *((_BYTE *)a1 + 2) = v60;
      if ( v59 )
      {
        v61 = v59(a1);
        v60 = *((_BYTE *)a1 + 2);
LABEL_147:
        v62 = v60 & 0xFD;
        *((_BYTE *)a1 + 2) = v62;
        if ( v61 >= 3 )
          goto LABEL_183;
        goto LABEL_148;
      }
      v61 = 0;
      if ( *((_BYTE *)a1 + 6) != 17 )
        goto LABEL_147;
      v62 = v60 & 0xFD;
      *((_BYTE *)a1 + 2) = v62;
LABEL_148:
      if ( (v62 & 1) != 0 )
        goto LABEL_183;
      v9 = 2LL * v6;
      v47 = (__int64)(a2 << 25) >> 16;
      if ( v47 < *(_QWORD *)&a1[8 * v6 + 32] )
        v47 = *(_QWORD *)&a1[8 * v6 + 32];
      if ( v47 > *(_QWORD *)&a1[8 * v6 + 36] )
      {
        v49 = v88;
        v50 = v90;
        goto LABEL_112;
      }
      if ( (*(_BYTE *)a1 & 4) != 0 )
      {
        MiLockPageTableInternal(v88, a2, 0LL);
        MiUnlockPageTableInternal(v88, ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        *((_QWORD *)a1 + 6) = a2;
      }
      v63 = 0;
      v64 = MiWalkPageTablesRecursively(a1, (__int64)(a2 << 25) >> 16, (unsigned int)(v89 - 1));
      v50 = v90;
      v8 = v64;
      if ( *v90 != a2 )
      {
        v9 = *a1;
        LOBYTE(v63) = (*v90 & 0xFFF) == 0;
        LOWORD(v9) = v9 & 0x4000;
        if ( (_WORD)v9 && a2 < *v90 )
        {
          if ( (a1[1] & 1) == 0 && (unsigned int)MiYieldPageTableWalk(a1, 1LL, DpcRequestSummary) == 4 )
            v8 = 4;
          a2 = *v50;
          goto LABEL_209;
        }
        v47 = a2;
        *((_QWORD *)a1 + 8) = a2;
        if ( !(_WORD)v9 || (v65 = &a1[v82 + 40], a2 > *(_QWORD *)v65) )
        {
          v65 = &a1[v82 + 40];
          *(_QWORD *)v65 = a2;
        }
        v66 = v83;
        if ( v83 < 3 )
        {
          v67 = 3 - v83;
          v9 = (unsigned __int64)(v65 + 8);
          do
          {
            v47 = ((v47 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            *(_QWORD *)v9 = v47;
            v9 += 16LL;
            --v67;
          }
          while ( v67 );
          v66 = v83;
          v50 = v90;
        }
        v68 = a2;
        DpcRequestSummary = v66;
        if ( v66 )
        {
          v47 = (unsigned __int64)(v65 - 8);
          do
          {
            v9 = (__int64)(v68 << 25) >> 16;
            if ( (*a1 & 0x4000) == 0 || (v68 = *(_QWORD *)v47, v9 > *(_QWORD *)v47) )
            {
              v68 = v9;
              *(_QWORD *)v47 = v9;
            }
            v47 -= 16LL;
            --DpcRequestSummary;
          }
          while ( DpcRequestSummary );
        }
      }
      if ( v8 < 3 && (a1[1] & 1) == 0 )
      {
        if ( (*(_BYTE *)a1 & 4) != 0 )
        {
          if ( v63
            || (v49 = v88,
                !(unsigned int)MiLockPageTableInternal(v88, ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL)) )
          {
            v61 = MiYieldPageTableWalk(a1, 1LL, DpcRequestSummary);
LABEL_183:
            if ( v61 == 4 )
              v8 = 4;
            v11 = 1;
            goto LABEL_210;
          }
          MiUnlockPageTableInternal(v49, a2);
          v6 = v89;
          *((_QWORD *)a1 + 6) = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          goto LABEL_111;
        }
        v6 = v89;
        v49 = v88;
LABEL_112:
        v51 = *a1;
        v52 = *a1 & 1;
        if ( (v51 & 1) == 0 && !v6 )
        {
          DpcRequestSummary = ((((__int64)(a2 << 25) >> 16) & 0xFFFFFFFFF000uLL) >> 9) - 0x98000000000LL;
          v53 = *(_QWORD *)DpcRequestSummary;
          if ( DpcRequestSummary >= 0xFFFFF6FB7DBED000uLL
            && DpcRequestSummary <= 0xFFFFF6FB7DBED7F8uLL
            && (unsigned int)MiPteHasShadow(v47, v53, DpcRequestSummary, v51)
            && (v53 & 1) != 0
            && ((v53 & 0x20) == 0 || (v53 & 0x42) == 0) )
          {
            v54 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v54 )
            {
              v55 = *((_QWORD *)&v54->Flink + ((DpcRequestSummary >> 3) & 0x1FF));
              DpcRequestSummary = v53 | 0x20;
              if ( (v55 & 0x20) == 0 )
                DpcRequestSummary = v53;
              v53 = DpcRequestSummary;
              if ( (v55 & 0x42) != 0 )
                v53 = DpcRequestSummary | 0x42;
            }
          }
          v9 = HIBYTE(v53);
          LOBYTE(v9) = v9 & 0xF;
          if ( (_BYTE)v9 == 10 || (_BYTE)v9 == 9 || (_BYTE)v9 == 8 && (v51 & 0x8000u) == 0LL )
            goto LABEL_190;
        }
        v56 = *((_QWORD *)a1 + 8);
        if ( v56 && v56 == *v50 )
          *((_QWORD *)a1 + 8) = 0LL;
        v57 = *((_QWORD *)a1 + 7);
        if ( v57 && v57 == *v50 )
          *((_QWORD *)a1 + 7) = 0LL;
        if ( v6 >= 1 && (*(_BYTE *)(v49 + 184) & 7) != 0 && !v52 || (v51 & 0x40) != 0 )
        {
LABEL_190:
          v8 = 0;
        }
        else
        {
          v58 = v85(a1, a2, (unsigned int)v6);
          v8 = v58;
          if ( v58 == 1 )
          {
            v8 = 0;
            goto LABEL_207;
          }
          if ( v58 == 2 )
          {
            v8 = 0;
            MiYieldPageTableWalk(a1, 1LL, DpcRequestSummary);
            MiWaitForFreePage(*((_QWORD *)a1 + 9));
            v11 = 1;
            goto LABEL_207;
          }
        }
        v69 = *((unsigned __int8 *)a1 + 3);
        *((_BYTE *)a1 + 3) = 0;
        a2 += 8 * v69 + 8;
        if ( v6 || (a2 & 0xFFF) == 0 )
        {
          v70 = a2;
          if ( (*a1 & 0x4000) == 0 || (v71 = &a1[v82 + 40], a2 > *(_QWORD *)v71) )
          {
            v71 = &a1[v82 + 40];
            *(_QWORD *)v71 = a2;
          }
          v72 = v6;
          if ( v6 < 3LL )
          {
            v9 = (unsigned __int64)(v71 + 8);
            v73 = 3LL - v6;
            do
            {
              v70 = ((v70 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              *(_QWORD *)v9 = v70;
              v9 += 16LL;
              --v73;
            }
            while ( v73 );
            v72 = v6;
          }
          v74 = a2;
          DpcRequestSummary = v72;
          if ( v72 )
          {
            v75 = (unsigned __int64 *)(v71 - 8);
            do
            {
              v9 = (__int64)(v74 << 25) >> 16;
              if ( (*a1 & 0x4000) == 0 || (v74 = *v75, v9 > *v75) )
              {
                v74 = v9;
                *v75 = v9;
              }
              v75 -= 2;
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
      v6 = v89;
      if ( a2 > v84 )
      {
LABEL_28:
        v4 = v88;
        break;
      }
    }
  }
  if ( v6 != 3 )
  {
LABEL_223:
    v77 = *((_BYTE *)a1 + 2);
    if ( (v77 & 1) != 0 )
      return (unsigned int)v8;
    v78 = (__int64 (__fastcall *)(unsigned __int16 *))*((_QWORD *)a1 + 20);
    v79 = v77 | 2;
    *((_BYTE *)a1 + 2) = v79;
    if ( v78 )
    {
      v5 = v78(a1);
      v79 = *((_BYTE *)a1 + 2);
    }
    else if ( *((_BYTE *)a1 + 6) == 17 )
    {
      v80 = v79 & 0xFD;
LABEL_228:
      *((_BYTE *)a1 + 2) = v80;
      return (unsigned int)v8;
    }
    v80 = v79 & 0xFD;
    if ( v5 == 4 )
      v8 = 4;
    goto LABEL_228;
  }
  v21 = *((_BYTE *)a1 + 2);
  v22 = v21;
  if ( (v21 & 1) == 0 && ((*(_BYTE *)a1 & 0x40) == 0 || v8 != 3) )
  {
    v23 = (__int64 (__fastcall *)(unsigned __int16 *))*((_QWORD *)a1 + 20);
    v24 = v21 | 2;
    *((_BYTE *)a1 + 2) = v21 | 2;
    if ( v23 )
    {
      v25 = v23(a1);
      v24 = *((_BYTE *)a1 + 2);
    }
    else
    {
      v25 = 0;
    }
    v9 = *((_QWORD *)a1 + 6);
    v22 = v24 & 0xFD;
    *((_BYTE *)a1 + 2) = v22;
    if ( v9 )
    {
      MiUnlockPageTableInternal(v4, v9);
      v22 = *((_BYTE *)a1 + 2);
      *((_QWORD *)a1 + 6) = 0LL;
    }
    if ( v25 == 4 )
      v8 = 4;
  }
  if ( (v22 & 1) != 0 )
  {
    if ( (*(_BYTE *)a1 & 4) != 0 )
    {
      MiLockWorkingSetShared(v4);
      *((_BYTE *)a1 + 2) &= ~1u;
    }
    else
    {
      v76 = MiGetSharedVm(v4, v9);
      ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v76);
      *(_DWORD *)(v76 + 4) = 0;
      if ( (*a1 & 0x400) != 0 )
        ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C4E31C);
      *((_BYTE *)a1 + 2) &= ~1u;
    }
  }
  return (unsigned int)v8;
}
