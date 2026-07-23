/*
 * XREFs of MiWalkPageTablesRecursively @ 0x1402B06A0
 * Callers:
 *     MiWalkPageTables @ 0x1402ADBC0 (MiWalkPageTables.c)
 *     MiWalkPageTablesRecursively @ 0x1402B06A0 (MiWalkPageTablesRecursively.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiGetPageTableLockBuffer @ 0x1402029B8 (MiGetPageTableLockBuffer.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x140212038 (KiResetGlobalDpcWatchdogProfiler.c)
 *     MiYieldPageTableWalk @ 0x140228654 (MiYieldPageTableWalk.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiWalkPageTablesRecursively @ 0x1402B06A0 (MiWalkPageTablesRecursively.c)
 *     MiComputePxeWalkAction @ 0x1402B1350 (MiComputePxeWalkAction.c)
 *     MiGetNextPageTablePte @ 0x1402B16B0 (MiGetNextPageTablePte.c)
 *     MiLockPageTableInternal @ 0x1402B33F0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiGetSharedVm @ 0x1402BF850 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     MiLockLowestValidPageTable @ 0x140310310 (MiLockLowestValidPageTable.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031FAE0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     MiWaitForFreePage @ 0x14055C43C (MiWaitForFreePage.c)
 *     EtwTraceShouldYieldProcessor @ 0x1405A834C (EtwTraceShouldYieldProcessor.c)
 */

__int64 __fastcall MiWalkPageTablesRecursively(unsigned __int16 *a1, unsigned __int64 a2, int a3)
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
  unsigned __int64 valid; // rax
  __int64 SharedVm; // rbx
  __int64 v16; // rbx
  __int64 v17; // rax
  unsigned __int64 v18; // r8
  unsigned __int16 **v19; // r10
  __int64 v20; // r11
  unsigned __int16 *v21; // rax
  char v22; // cl
  char v23; // al
  __int64 (__fastcall *v24)(unsigned __int16 *); // rdx
  char v25; // al
  int v26; // ebx
  __int64 v27; // r10
  LONG *v28; // rax
  unsigned __int64 v29; // r9
  char v30; // dl
  struct _KPRCB *CurrentPrcb; // rax
  bool v32; // zf
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  __int64 v34; // rcx
  int v35; // ecx
  char *PageTableLockBuffer; // rax
  unsigned __int64 v37; // rcx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v39; // r8
  __int64 v40; // rax
  struct _KPRCB *v41; // rcx
  volatile int DpcRequestSummary; // r8d
  unsigned int DpcWatchdogCount; // esi
  unsigned int DpcTimeCount; // ebp
  int v45; // edx
  unsigned int v46; // ebx
  _KTHREAD *NextThread; // rax
  int v48; // eax
  int NextPageTablePte; // ecx
  __int64 v50; // rax
  __int64 v51; // rsi
  unsigned __int64 *v52; // rbx
  __int16 v53; // r9
  __int16 v54; // r10
  unsigned __int64 *v55; // r8
  unsigned __int64 v56; // rdx
  unsigned __int64 v57; // r8
  struct _LIST_ENTRY *v58; // rax
  __int64 v59; // rax
  __int64 v60; // r8
  __int64 v61; // rax
  __int64 v62; // rax
  int v63; // eax
  __int64 (__fastcall *v64)(unsigned __int16 *); // rax
  char v65; // cl
  int v66; // eax
  char v67; // cl
  unsigned __int64 v68; // rcx
  int v69; // ebp
  int v70; // eax
  unsigned __int64 v71; // rcx
  unsigned __int64 *v72; // r9
  __int64 v73; // r10
  __int64 v74; // r8
  unsigned __int64 v75; // rax
  __int64 v76; // r8
  unsigned __int64 *v77; // rcx
  __int64 v78; // rax
  unsigned __int64 v79; // rcx
  unsigned __int64 *v80; // r9
  __int64 v81; // r10
  __int64 v82; // r8
  unsigned __int64 v83; // rax
  __int64 v84; // r8
  unsigned __int64 *v85; // rcx
  __int64 v86; // rbx
  char v87; // al
  __int64 (__fastcall *v88)(unsigned __int16 *); // rdx
  char v89; // al
  char v90; // al
  __int64 v92; // [rsp+20h] [rbp-78h]
  __int64 v93; // [rsp+28h] [rbp-70h]
  unsigned __int64 v94; // [rsp+30h] [rbp-68h]
  __int64 (__fastcall *v95)(unsigned __int16 *, unsigned __int64, _QWORD); // [rsp+38h] [rbp-60h]
  char v96[88]; // [rsp+40h] [rbp-58h] BYREF
  int v97; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v98; // [rsp+A8h] [rbp+10h]
  int v99; // [rsp+B0h] [rbp+18h]
  unsigned __int64 *v100; // [rsp+B8h] [rbp+20h]

  v99 = a3;
  v4 = *((_QWORD *)a1 + 3);
  v95 = (__int64 (__fastcall *)(unsigned __int16 *, unsigned __int64, _QWORD))*((_QWORD *)a1 + 19);
  v5 = 0;
  v6 = a3;
  v98 = v4;
  v93 = a3;
  v8 = 0;
  v9 = (unsigned __int64)&a1[8 * a3 + 40];
  v92 = 8LL * a3;
  v100 = (unsigned __int64 *)v9;
  if ( a2 < *(_QWORD *)v9 )
    a2 = *(_QWORD *)v9;
  if ( a3 == 3 )
  {
    v10 = *((_QWORD *)a1 + 17);
  }
  else
  {
    v10 = (a2 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    if ( v10 > *(_QWORD *)(v9 + 8) )
      v10 = *(_QWORD *)(v9 + 8);
  }
  v94 = v10;
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
              ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C4E35C);
            goto LABEL_18;
          }
          v13 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          MiLockWorkingSetShared(*((_QWORD *)a1 + 3));
          valid = MiLockLowestValidPageTable(v12, v13 << 25 >> 16, v96);
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
        v18 = *(_QWORD *)(v17 + 7104);
        if ( v18 < 0x420 )
        {
          v19 = (unsigned __int16 **)(v17 + 4200);
          v20 = 0LL;
          while ( 1 )
          {
            v21 = *v19;
            v9 = 0LL;
            if ( dword_140C4DF3C )
              break;
LABEL_26:
            ++v20;
            ++v19;
            if ( v20 > 1 )
            {
              v8 = 4;
              goto LABEL_28;
            }
          }
          while ( 1 )
          {
            v18 += *v21;
            if ( v18 >= 0x420 )
              break;
            v9 = (unsigned int)(v9 + 1);
            v21 += 8;
            if ( (unsigned int)v9 >= dword_140C4DF3C )
              goto LABEL_26;
          }
        }
      }
      if ( (*a1 & 2) == 0 || ((unsigned __int8)v16 & *((_BYTE *)a1 + 5)) != 0 )
        goto LABEL_103;
      v27 = *((_QWORD *)a1 + 3);
      v28 = &dword_140C4F7C0;
      if ( (*(_BYTE *)(v27 + 184) & 7) != 2 )
        v28 = (LONG *)(v27 + 192);
      if ( (*v28 & 0x40000000) != 0 )
      {
LABEL_99:
        v48 = MiYieldPageTableWalk((__int64)a1, 1);
        if ( v48 >= 3 )
          v8 = v48;
        goto LABEL_209;
      }
      if ( (*(_BYTE *)a1 & 4) != 0 )
      {
        v29 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v30 = *(_BYTE *)(v27 + 184) & 7;
        v97 = 0;
        if ( ((a2 >> 9) & 0x7FFFFFFFF8LL) == 0x7B7DBEDF68LL )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          if ( v30 )
          {
            if ( v30 == 7 )
            {
              v32 = CurrentPrcb->SelfmapLockHandle[1].LockQueue.Next == 0LL;
            }
            else
            {
              if ( v30 == 5 )
                Next = CurrentPrcb->SelfmapLockHandle[0].LockQueue.Next;
              else
                Next = CurrentPrcb->SelfmapLockHandle[3].LockQueue.Next;
              v32 = Next == 0LL;
            }
          }
          else
          {
            v32 = CurrentPrcb->SelfmapLockHandle[2].LockQueue.Next == 0LL;
          }
        }
        else
        {
          if ( v30
            || v29 < 0xFFFFF6FB7DBED000uLL
            || v29 > 0xFFFFF6FB7DBEDFFFuLL
            || (v34 = *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[8] + 608)) == 0 )
          {
            if ( v30 && v29 >= 0xFFFFF6FB7DBED000uLL && v29 <= 0xFFFFF6FB7DBEDFFFuLL )
            {
              PageTableLockBuffer = MiGetPageTableLockBuffer(v27, ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, &v97);
              if ( ((*(_DWORD *)PageTableLockBuffer >> v97) & 2) != 0 )
                goto LABEL_99;
              goto LABEL_75;
            }
            v37 = *(_QWORD *)v29;
            if ( v29 >= 0xFFFFF6FB7DBED000uLL
              && v29 <= 0xFFFFF6FB7DBED7F8uLL
              && (MiFlags & 0xC00000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v37 & 1) != 0
              && ((v37 & 0x20) == 0 || (v37 & 0x42) == 0) )
            {
              Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( Flink )
              {
                v39 = v37 | 0x20;
                v40 = *((_QWORD *)&Flink->Flink + ((v29 >> 3) & 0x1FF));
                if ( (v40 & 0x20) == 0 )
                  v39 = *(_QWORD *)v29;
                v37 = v39;
                if ( (v40 & 0x42) != 0 )
                  v37 = v39 | 0x42;
              }
            }
            v35 = (v37 >> 60) & 2;
          }
          else
          {
            v35 = (*(_DWORD *)(v34 + 4 * ((((a2 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF)) >> 30) & 1;
          }
          v32 = v35 == 0;
        }
        if ( !v32 )
          goto LABEL_99;
      }
LABEL_75:
      if ( (*a1 & 0x400) != 0 && (dword_140C4E35C & 0x40000000) != 0 )
        goto LABEL_99;
      if ( *((_BYTE *)a1 + 6) < 2u )
      {
        v41 = KeGetCurrentPrcb();
        DpcRequestSummary = v41->DpcRequestSummary;
        DpcWatchdogCount = v41->DpcWatchdogCount;
        DpcTimeCount = v41->DpcTimeCount;
        if ( (DpcRequestSummary & 1) != 0 )
        {
          v45 = 1;
          if ( DpcTimeCount > 7 )
          {
            if ( v41->QuantumEnd )
            {
              v46 = 1;
LABEL_96:
              if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
                EtwTraceShouldYieldProcessor(v46, DpcWatchdogCount, DpcTimeCount);
              if ( v46 )
                goto LABEL_99;
LABEL_102:
              v6 = v99;
              goto LABEL_103;
            }
LABEL_91:
            if ( (DpcRequestSummary & 0x1E) != 0 )
            {
              v46 = 5;
              goto LABEL_96;
            }
            if ( v41->CurrentThread != v41->IdleThread )
            {
              v46 = 6;
              goto LABEL_96;
            }
LABEL_95:
            _disable();
            v41->DpcWatchdogCount = 0;
            v41->DpcTimeCount = 0;
            KiResetGlobalDpcWatchdogProfiler((__int64)v41);
            _enable();
            v46 = 0;
            goto LABEL_96;
          }
        }
        else
        {
          v45 = 0;
          if ( (DpcRequestSummary & 0x1E) != 0 )
          {
            v46 = 2;
            goto LABEL_96;
          }
          if ( v41->QuantumEnd )
          {
            v46 = 3;
            goto LABEL_96;
          }
          NextThread = v41->NextThread;
          if ( NextThread && NextThread != v41->CurrentThread )
          {
            v46 = 4;
            goto LABEL_96;
          }
        }
        if ( DpcWatchdogCount <= 7 )
          goto LABEL_102;
        if ( v45 )
          goto LABEL_91;
        goto LABEL_95;
      }
LABEL_103:
      if ( (*(_BYTE *)a1 & 0x20) != 0 )
      {
        NextPageTablePte = MiGetNextPageTablePte(a1, a2, (unsigned int)v6);
        if ( NextPageTablePte == 3 )
        {
          v8 = 3;
          goto LABEL_209;
        }
        if ( (a1[1] & 1) != 0 )
          goto LABEL_209;
        v50 = *((_QWORD *)a1 + 8);
        if ( v50 && v50 == a2 )
        {
          *((_QWORD *)a1 + 8) = 0LL;
LABEL_110:
          v51 = v98;
LABEL_111:
          v52 = v100;
          goto LABEL_112;
        }
      }
      else
      {
        NextPageTablePte = MiComputePxeWalkAction(a1, a2, (unsigned int)v6);
      }
      if ( !NextPageTablePte )
        goto LABEL_190;
      if ( NextPageTablePte == 1 || v6 <= ((*((unsigned __int8 *)a1 + 2) >> 2) & 7) )
        goto LABEL_110;
      v64 = (__int64 (__fastcall *)(unsigned __int16 *))*((_QWORD *)a1 + 20);
      v65 = *((_BYTE *)a1 + 2) | 2;
      *((_BYTE *)a1 + 2) = v65;
      if ( v64 )
      {
        v66 = v64(a1);
        v65 = *((_BYTE *)a1 + 2);
LABEL_147:
        v67 = v65 & 0xFD;
        *((_BYTE *)a1 + 2) = v67;
        if ( v66 >= 3 )
          goto LABEL_183;
        goto LABEL_148;
      }
      v66 = 0;
      if ( *((_BYTE *)a1 + 6) != 17 )
        goto LABEL_147;
      v67 = v65 & 0xFD;
      *((_BYTE *)a1 + 2) = v67;
LABEL_148:
      if ( (v67 & 1) != 0 )
        goto LABEL_183;
      v9 = 2LL * v6;
      v68 = (__int64)(a2 << 25) >> 16;
      if ( v68 < *(_QWORD *)&a1[8 * v6 + 32] )
        v68 = *(_QWORD *)&a1[8 * v6 + 32];
      if ( v68 > *(_QWORD *)&a1[8 * v6 + 36] )
      {
        v51 = v98;
        v52 = v100;
        goto LABEL_112;
      }
      if ( (*(_BYTE *)a1 & 4) != 0 )
      {
        MiLockPageTableInternal(v98, a2, 0LL);
        MiUnlockPageTableInternal(v98, ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        *((_QWORD *)a1 + 6) = a2;
      }
      v69 = 0;
      v70 = MiWalkPageTablesRecursively(a1, (__int64)(a2 << 25) >> 16, (unsigned int)(v99 - 1));
      v52 = v100;
      v8 = v70;
      if ( *v100 != a2 )
      {
        v9 = *a1;
        LOBYTE(v69) = (*v100 & 0xFFF) == 0;
        LOWORD(v9) = v9 & 0x4000;
        if ( (_WORD)v9 && a2 < *v100 )
        {
          if ( (a1[1] & 1) == 0 && (unsigned int)MiYieldPageTableWalk((__int64)a1, 1) == 4 )
            v8 = 4;
          a2 = *v52;
          goto LABEL_209;
        }
        v71 = a2;
        *((_QWORD *)a1 + 8) = a2;
        if ( !(_WORD)v9 || (v72 = (unsigned __int64 *)&a1[v92 + 40], a2 > *v72) )
        {
          v72 = (unsigned __int64 *)&a1[v92 + 40];
          *v72 = a2;
        }
        v73 = v93;
        if ( v93 < 3 )
        {
          v74 = 3 - v93;
          v9 = (unsigned __int64)(v72 + 2);
          do
          {
            v71 = ((v71 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            *(_QWORD *)v9 = v71;
            v9 += 16LL;
            --v74;
          }
          while ( v74 );
          v73 = v93;
          v52 = v100;
        }
        v75 = a2;
        v76 = v73;
        if ( v73 )
        {
          v77 = v72 - 2;
          do
          {
            v9 = (__int64)(v75 << 25) >> 16;
            if ( (*a1 & 0x4000) == 0 || (v75 = *v77, v9 > *v77) )
            {
              v75 = v9;
              *v77 = v9;
            }
            v77 -= 2;
            --v76;
          }
          while ( v76 );
        }
      }
      if ( v8 < 3 && (a1[1] & 1) == 0 )
      {
        if ( (*(_BYTE *)a1 & 4) != 0 )
        {
          if ( v69
            || (v51 = v98,
                !(unsigned int)MiLockPageTableInternal(v98, ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL)) )
          {
            v66 = MiYieldPageTableWalk((__int64)a1, 1);
LABEL_183:
            if ( v66 == 4 )
              v8 = 4;
            v11 = 1;
            goto LABEL_210;
          }
          MiUnlockPageTableInternal(v51, a2);
          v6 = v99;
          *((_QWORD *)a1 + 6) = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          goto LABEL_111;
        }
        v6 = v99;
        v51 = v98;
LABEL_112:
        v53 = *a1;
        v54 = *a1 & 1;
        if ( !v54 && !v6 )
        {
          v55 = (unsigned __int64 *)(((((__int64)(a2 << 25) >> 16) & 0xFFFFFFFFF000uLL) >> 9) - 0x98000000000LL);
          v56 = *v55;
          if ( (unsigned __int64)v55 >= 0xFFFFF6FB7DBED000uLL
            && (unsigned __int64)v55 <= 0xFFFFF6FB7DBED7F8uLL
            && (unsigned int)MiPteHasShadow()
            && (v56 & 1) != 0
            && ((v56 & 0x20) == 0 || (v56 & 0x42) == 0) )
          {
            v58 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v58 )
            {
              v59 = *((_QWORD *)&v58->Flink + ((v57 >> 3) & 0x1FF));
              v60 = v56 | 0x20;
              if ( (v59 & 0x20) == 0 )
                v60 = v56;
              v56 = v60;
              if ( (v59 & 0x42) != 0 )
                v56 = v60 | 0x42;
            }
          }
          v9 = HIBYTE(v56);
          LOBYTE(v9) = v9 & 0xF;
          if ( (_BYTE)v9 == 10 || (_BYTE)v9 == 9 || (_BYTE)v9 == 8 && v53 >= 0 )
            goto LABEL_190;
        }
        v61 = *((_QWORD *)a1 + 8);
        if ( v61 && v61 == *v52 )
          *((_QWORD *)a1 + 8) = 0LL;
        v62 = *((_QWORD *)a1 + 7);
        if ( v62 && v62 == *v52 )
          *((_QWORD *)a1 + 7) = 0LL;
        if ( v6 >= 1 && (*(_BYTE *)(v51 + 184) & 7) != 0 && !v54 || (v53 & 0x40) != 0 )
        {
LABEL_190:
          v8 = 0;
        }
        else
        {
          v63 = v95(a1, a2, (unsigned int)v6);
          v8 = v63;
          if ( v63 == 1 )
          {
            v8 = 0;
            goto LABEL_207;
          }
          if ( v63 == 2 )
          {
            v8 = 0;
            MiYieldPageTableWalk((__int64)a1, 1);
            MiWaitForFreePage(*((_QWORD *)a1 + 9));
            v11 = 1;
            goto LABEL_207;
          }
        }
        v78 = *((unsigned __int8 *)a1 + 3);
        *((_BYTE *)a1 + 3) = 0;
        a2 += 8 * v78 + 8;
        if ( v6 || (a2 & 0xFFF) == 0 )
        {
          v79 = a2;
          if ( (*a1 & 0x4000) == 0 || (v80 = (unsigned __int64 *)&a1[v92 + 40], a2 > *v80) )
          {
            v80 = (unsigned __int64 *)&a1[v92 + 40];
            *v80 = a2;
          }
          v81 = v6;
          if ( v6 < 3LL )
          {
            v9 = (unsigned __int64)(v80 + 2);
            v82 = 3LL - v6;
            do
            {
              v79 = ((v79 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              *(_QWORD *)v9 = v79;
              v9 += 16LL;
              --v82;
            }
            while ( v82 );
            v81 = v6;
          }
          v83 = a2;
          v84 = v81;
          if ( v81 )
          {
            v85 = v80 - 2;
            do
            {
              v9 = (__int64)(v83 << 25) >> 16;
              if ( (*a1 & 0x4000) == 0 || (v83 = *v85, v9 > *v85) )
              {
                v83 = v9;
                *v85 = v9;
              }
              v85 -= 2;
              --v84;
            }
            while ( v84 );
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
      v6 = v99;
      if ( a2 > v94 )
      {
LABEL_28:
        v4 = v98;
        break;
      }
    }
  }
  if ( v6 != 3 )
  {
LABEL_223:
    v87 = *((_BYTE *)a1 + 2);
    if ( (v87 & 1) != 0 )
      return (unsigned int)v8;
    v88 = (__int64 (__fastcall *)(unsigned __int16 *))*((_QWORD *)a1 + 20);
    v89 = v87 | 2;
    *((_BYTE *)a1 + 2) = v89;
    if ( v88 )
    {
      v5 = v88(a1);
      v89 = *((_BYTE *)a1 + 2);
    }
    else if ( *((_BYTE *)a1 + 6) == 17 )
    {
      v90 = v89 & 0xFD;
LABEL_228:
      *((_BYTE *)a1 + 2) = v90;
      return (unsigned int)v8;
    }
    v90 = v89 & 0xFD;
    if ( v5 == 4 )
      v8 = 4;
    goto LABEL_228;
  }
  v22 = *((_BYTE *)a1 + 2);
  v23 = v22;
  if ( (v22 & 1) == 0 && ((*(_BYTE *)a1 & 0x40) == 0 || v8 != 3) )
  {
    v24 = (__int64 (__fastcall *)(unsigned __int16 *))*((_QWORD *)a1 + 20);
    v25 = v22 | 2;
    *((_BYTE *)a1 + 2) = v22 | 2;
    if ( v24 )
    {
      v26 = v24(a1);
      v25 = *((_BYTE *)a1 + 2);
    }
    else
    {
      v26 = 0;
    }
    v9 = *((_QWORD *)a1 + 6);
    v23 = v25 & 0xFD;
    *((_BYTE *)a1 + 2) = v23;
    if ( v9 )
    {
      MiUnlockPageTableInternal(v4, v9);
      v23 = *((_BYTE *)a1 + 2);
      *((_QWORD *)a1 + 6) = 0LL;
    }
    if ( v26 == 4 )
      v8 = 4;
  }
  if ( (v23 & 1) != 0 )
  {
    if ( (*(_BYTE *)a1 & 4) != 0 )
    {
      MiLockWorkingSetShared(v4);
      *((_BYTE *)a1 + 2) &= ~1u;
    }
    else
    {
      v86 = MiGetSharedVm(v4, v9);
      ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v86);
      *(_DWORD *)(v86 + 4) = 0;
      if ( (*a1 & 0x400) != 0 )
        ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C4E35C);
      *((_BYTE *)a1 + 2) &= ~1u;
    }
  }
  return (unsigned int)v8;
}
