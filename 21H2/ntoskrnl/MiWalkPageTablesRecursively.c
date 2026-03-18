/*
 * XREFs of MiWalkPageTablesRecursively @ 0x14031A5C0
 * Callers:
 *     MiWalkPageTables @ 0x14030CF90 (MiWalkPageTables.c)
 *     MiWalkPageTablesRecursively @ 0x14031A5C0 (MiWalkPageTablesRecursively.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiGetPageTableLockBuffer @ 0x14020DAE8 (MiGetPageTableLockBuffer.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x140222280 (KiResetGlobalDpcWatchdogProfiler.c)
 *     MiYieldPageTableWalk @ 0x140234128 (MiYieldPageTableWalk.c)
 *     MiAdvanceToLastUntrimmableVa @ 0x140252ED0 (MiAdvanceToLastUntrimmableVa.c)
 *     MiReacquireWalkLocks @ 0x14027D2D8 (MiReacquireWalkLocks.c)
 *     MiGetSharedVm @ 0x140282AD0 (MiGetSharedVm.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MiGetLeafVa @ 0x1402CFEB0 (MiGetLeafVa.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiWalkPageTablesRecursively @ 0x14031A5C0 (MiWalkPageTablesRecursively.c)
 *     MiComputePxeWalkAction @ 0x14031B1C0 (MiComputePxeWalkAction.c)
 *     MiGetNextPageTablePte @ 0x14031B510 (MiGetNextPageTablePte.c)
 *     MiLockPageTableInternal @ 0x14031DE00 (MiLockPageTableInternal.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     MiWaitForFreePage @ 0x1405B8348 (MiWaitForFreePage.c)
 *     EtwTraceShouldYieldProcessor @ 0x14062E40C (EtwTraceShouldYieldProcessor.c)
 */

__int64 __fastcall MiWalkPageTablesRecursively(__int64 a1, unsigned __int64 a2, int a3)
{
  int v4; // r12d
  __int64 v5; // r13
  int v7; // r15d
  __int64 v8; // rbp
  unsigned __int64 *v9; // rdx
  unsigned __int64 v10; // rcx
  int v11; // esi
  unsigned __int64 DpcWatchdogCount; // r9
  __int64 v13; // r8
  int NextPageTablePte; // ecx
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  unsigned __int64 *v21; // r11
  unsigned __int64 *v22; // r9
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int64 *v25; // rdx
  unsigned __int64 v26; // r8
  int v27; // r8d
  int v28; // r10d
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // r10
  _DWORD *v34; // rax
  char v35; // cl
  unsigned __int64 v36; // rax
  int v37; // eax
  bool v38; // zf
  struct _KPRCB *v39; // rcx
  volatile int DpcRequestSummary; // edx
  unsigned int DpcTimeCount; // r10d
  int v42; // r8d
  _KTHREAD *NextThread; // rax
  unsigned int v44; // edi
  __int64 v45; // rax
  char v46; // al
  __int64 (__fastcall *v47)(__int64); // rdx
  char v48; // al
  char v49; // al
  __int64 (__fastcall *v51)(__int64); // rax
  char v52; // cl
  int v53; // eax
  char v54; // cl
  unsigned __int64 v55; // rcx
  int v56; // esi
  __int64 v57; // rcx
  __int64 v58; // rsi
  char v59; // cl
  char v60; // al
  __int64 (__fastcall *v61)(__int64); // rdx
  char v62; // al
  int v63; // edi
  unsigned __int64 v64; // rdx
  int v65; // ecx
  __int64 v66; // rax
  unsigned __int64 v67; // rdx
  unsigned __int64 *v68; // r9
  __int64 v69; // r10
  unsigned __int64 *v70; // r8
  __int64 v71; // rcx
  unsigned __int64 v72; // rax
  __int64 v73; // r8
  unsigned __int64 *v74; // rcx
  unsigned __int64 v75; // rdx
  char *PageTableLockBuffer; // rax
  unsigned __int64 LeafVa; // rax
  __int64 v78; // rcx
  struct _KPRCB *CurrentPrcb; // rax
  _KLOCK_QUEUE_HANDLE *v80; // rax
  int v81; // eax
  volatile LONG *SharedVm; // rdi
  unsigned __int64 *v83; // r11
  __int64 v84; // rdi
  unsigned int v85; // r10d
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v87; // rcx
  volatile LONG *v88; // rdi
  unsigned __int64 *v89; // [rsp+20h] [rbp-68h]
  unsigned __int64 v90; // [rsp+28h] [rbp-60h]
  __int64 (__fastcall *v91)(__int64, unsigned __int64, _QWORD); // [rsp+30h] [rbp-58h]
  int v92; // [rsp+90h] [rbp+8h] BYREF
  __int64 v93; // [rsp+98h] [rbp+10h]
  int v94; // [rsp+A0h] [rbp+18h]
  __int64 v95; // [rsp+A8h] [rbp+20h]

  v93 = *(_QWORD *)(a1 + 24);
  v4 = 0;
  v5 = a3;
  v91 = *(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD))(a1 + 152);
  v7 = 0;
  v8 = a3;
  v9 = (unsigned __int64 *)(16LL * a3 + a1 + 80);
  v95 = 16LL * a3;
  v89 = v9;
  if ( a2 < *v9 )
    a2 = *v9;
  if ( a3 == 3 )
  {
    v10 = *(_QWORD *)(a1 + 136);
  }
  else
  {
    v10 = (a2 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    if ( v10 > v9[1] )
      v10 = v9[1];
  }
  v90 = v10;
  v11 = 0;
  v94 = 0;
  if ( a2 <= v10 )
  {
    while ( 1 )
    {
      DpcWatchdogCount = 0xFFFFF68000000000uLL;
      if ( v11 )
      {
        v94 = 0;
        v11 = 0;
        if ( v7 >= 4 )
          break;
        if ( (*(_BYTE *)(a1 + 4) & 1) != 0 )
        {
          if ( (_DWORD)v5 != 3 )
            goto LABEL_76;
          if ( (*(_DWORD *)a1 & 4) != 0 )
          {
            MiReacquireWalkLocks(a1, ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 0);
          }
          else
          {
            SharedVm = (volatile LONG *)MiGetSharedVm(*(_QWORD *)(a1 + 24));
            ExAcquireSpinLockExclusive(SharedVm);
            *((_DWORD *)SharedVm + 1) = 0;
            if ( (*(_DWORD *)a1 & 0x400) != 0 )
              ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C51BA4);
            *(_BYTE *)(a1 + 4) &= ~1u;
          }
        }
      }
      v13 = ++*(_QWORD *)(a1 + 144);
      if ( (v13 & 0xF) == 0 && (*(_DWORD *)a1 & 8) != 0 )
      {
        v18 = *(_QWORD *)(a1 + 72);
        v19 = *(_QWORD *)(v18 + 16896);
        if ( v19 < 0x420 )
        {
          v83 = (unsigned __int64 *)(v18 + 6616);
          v84 = 0LL;
          while ( 1 )
          {
            DpcWatchdogCount = *v83;
            v85 = 0;
            if ( dword_140C5073C )
              break;
LABEL_205:
            ++v84;
            ++v83;
            if ( v84 > 1 )
            {
              v7 = 5;
              goto LABEL_75;
            }
          }
          while ( 1 )
          {
            v19 += *(unsigned __int16 *)DpcWatchdogCount;
            if ( v19 >= 0x420 )
              break;
            ++v85;
            DpcWatchdogCount += 16LL;
            if ( v85 >= dword_140C5073C )
              goto LABEL_205;
          }
          v11 = v94;
        }
      }
      if ( (*(_DWORD *)a1 & 2) == 0 || ((unsigned __int8)v13 & *(_BYTE *)(a1 + 6)) != 0 )
        goto LABEL_11;
      v33 = *(_QWORD *)(a1 + 24);
      if ( (*(_BYTE *)(v33 + 184) & 7) == 2 )
        v34 = &unk_140C53D00;
      else
        v34 = (_DWORD *)(v33 + 192);
      if ( (*v34 & 0x40000000) != 0 )
        goto LABEL_166;
      if ( (*(_DWORD *)a1 & 4) != 0 )
      {
        DpcWatchdogCount = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v35 = *(_BYTE *)(v33 + 184) & 7;
        v92 = 0;
        if ( ((a2 >> 9) & 0x7FFFFFFFF8LL) == 0x7B7DBEDF68LL )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          if ( v35 )
          {
            if ( v35 == 7 )
            {
              v80 = &CurrentPrcb->SelfmapLockHandle[1];
            }
            else
            {
              if ( v35 == 5 )
              {
                v38 = CurrentPrcb->SelfmapLockHandle[0].LockQueue.Next == 0LL;
                goto LABEL_57;
              }
              v80 = &CurrentPrcb->SelfmapLockHandle[3];
            }
          }
          else
          {
            v80 = &CurrentPrcb->SelfmapLockHandle[2];
          }
          v38 = v80->LockQueue.Next == 0LL;
          goto LABEL_57;
        }
        if ( DpcWatchdogCount < 0xFFFFF6FB7DBED000uLL )
          goto LABEL_54;
        if ( !v35 )
        {
          if ( DpcWatchdogCount <= 0xFFFFF6FB7DBEDFFFuLL
            && (v57 = *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28] + 592)) != 0 )
          {
            DpcWatchdogCount = (((a2 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF;
            v37 = (*(_DWORD *)(v57 + 4 * DpcWatchdogCount) >> 30) & 1;
          }
          else
          {
LABEL_54:
            v36 = *(_QWORD *)DpcWatchdogCount;
            if ( DpcWatchdogCount >= 0xFFFFF6FB7DBED000uLL
              && DpcWatchdogCount <= 0xFFFFF6FB7DBED7F8uLL
              && (MiFlags & 0xC00000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v36 & 1) != 0
              && ((v36 & 0x20) == 0 || (v36 & 0x42) == 0) )
            {
              Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( Flink )
              {
                DpcWatchdogCount = (DpcWatchdogCount >> 3) & 0x1FF;
                v87 = *((_QWORD *)&Flink->Flink + DpcWatchdogCount);
                if ( (v87 & 0x20) != 0 )
                  v36 |= 0x20uLL;
                if ( (v87 & 0x42) != 0 )
                  v36 |= 0x42uLL;
              }
            }
            v37 = (v36 >> 60) & 2;
          }
          v38 = v37 == 0;
LABEL_57:
          if ( !v38 )
            goto LABEL_166;
          goto LABEL_58;
        }
        if ( DpcWatchdogCount > 0xFFFFF6FB7DBEDFFFuLL )
          goto LABEL_54;
        PageTableLockBuffer = MiGetPageTableLockBuffer(v33, ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, &v92);
        if ( ((*(_DWORD *)PageTableLockBuffer >> v92) & 2) != 0 )
          goto LABEL_166;
      }
LABEL_58:
      if ( (*(_DWORD *)a1 & 0x400) != 0 && (dword_140C51BA4 & 0x40000000) != 0 )
        goto LABEL_166;
      if ( *(_BYTE *)(a1 + 7) >= 2u )
        goto LABEL_11;
      v39 = KeGetCurrentPrcb();
      DpcRequestSummary = v39->DpcRequestSummary;
      DpcWatchdogCount = (unsigned int)v39->DpcWatchdogCount;
      DpcTimeCount = v39->DpcTimeCount;
      if ( (DpcRequestSummary & 1) == 0 )
      {
        v42 = 0;
        if ( (DpcRequestSummary & 0x1E) != 0 )
        {
          v44 = 2;
          goto LABEL_163;
        }
        if ( v39->QuantumEnd )
        {
          v44 = 3;
          goto LABEL_163;
        }
        NextThread = v39->NextThread;
        if ( NextThread && NextThread != v39->CurrentThread )
        {
          v44 = 4;
          goto LABEL_163;
        }
LABEL_64:
        if ( (unsigned int)DpcWatchdogCount <= 7 )
          goto LABEL_11;
        if ( !v42 )
        {
LABEL_66:
          _disable();
          v39->DpcWatchdogCount = 0;
          v39->DpcTimeCount = 0;
          KiResetGlobalDpcWatchdogProfiler((__int64)v39);
          _enable();
          v44 = 0;
          goto LABEL_163;
        }
        goto LABEL_219;
      }
      v42 = 1;
      if ( DpcTimeCount <= 7 )
        goto LABEL_64;
      if ( v39->QuantumEnd )
      {
        v44 = 1;
        goto LABEL_163;
      }
LABEL_219:
      if ( (DpcRequestSummary & 0x1E) != 0 )
      {
        v44 = 5;
      }
      else
      {
        if ( v39->CurrentThread == v39->IdleThread )
          goto LABEL_66;
        v44 = 6;
      }
LABEL_163:
      if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
        EtwTraceShouldYieldProcessor(v44, (unsigned int)DpcWatchdogCount, DpcTimeCount);
      if ( v44 )
      {
LABEL_166:
        v81 = MiYieldPageTableWalk(a1, 1);
        if ( v81 >= 4 )
          v7 = v81;
        goto LABEL_96;
      }
LABEL_11:
      if ( (*(_DWORD *)a1 & 0x20) != 0 )
      {
        NextPageTablePte = MiGetNextPageTablePte(a1, a2, (unsigned int)v5, DpcWatchdogCount);
        if ( NextPageTablePte == 3 )
        {
          v11 = 1;
          v7 = 4;
          v94 = 1;
          goto LABEL_20;
        }
        if ( (*(_BYTE *)(a1 + 4) & 1) != 0 )
          goto LABEL_96;
        v45 = *(_QWORD *)(a1 + 64);
        if ( v45 && v45 == a2 )
        {
          *(_QWORD *)(a1 + 64) = 0LL;
          goto LABEL_37;
        }
      }
      else
      {
        NextPageTablePte = MiComputePxeWalkAction(a1, a2, (unsigned int)v5, DpcWatchdogCount);
      }
      if ( !NextPageTablePte )
        goto LABEL_14;
      if ( NextPageTablePte != 1 && (int)v5 > ((*(unsigned __int8 *)(a1 + 4) >> 2) & 7) )
      {
        v51 = *(__int64 (__fastcall **)(__int64))(a1 + 160);
        v52 = *(_BYTE *)(a1 + 4) | 2;
        *(_BYTE *)(a1 + 4) = v52;
        if ( v51 )
        {
          v53 = v51(a1);
          v52 = *(_BYTE *)(a1 + 4);
LABEL_86:
          v54 = v52 & 0xFD;
          *(_BYTE *)(a1 + 4) = v54;
          if ( (v54 & 1) != 0 )
          {
            if ( v53 >= 4 )
            {
LABEL_195:
              if ( v53 == 5 )
                v7 = 5;
              goto LABEL_96;
            }
          }
          else if ( v53 >= 4 )
          {
            goto LABEL_195;
          }
        }
        else
        {
          v53 = 0;
          if ( *(_BYTE *)(a1 + 7) != 17 )
            goto LABEL_86;
          v54 = v52 & 0xFD;
          *(_BYTE *)(a1 + 4) = v54;
        }
        if ( (v54 & 1) != 0 )
          goto LABEL_96;
        v55 = (__int64)(a2 << 25) >> 16;
        if ( v55 < *(_QWORD *)(a1 + 16 * v5 + 64) )
          v55 = *(_QWORD *)(a1 + 16 * v5 + 64);
        if ( v55 <= *(_QWORD *)(a1 + 16 * v5 + 72) )
        {
          if ( (*(_DWORD *)a1 & 4) != 0 )
          {
            MiLockPageTableInternal(v93, a2, 0LL);
            MiUnlockPageTableInternal(v93, ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
            *(_QWORD *)(a1 + 48) = a2;
          }
          v56 = 0;
          v7 = MiWalkPageTablesRecursively(a1, (__int64)(a2 << 25) >> 16, (unsigned int)(v5 - 1));
          if ( *v89 != a2 )
          {
            LOBYTE(v56) = (*v89 & 0xFFF) == 0;
            v65 = *(_DWORD *)a1 & 0x4000;
            if ( v65 && a2 < *v89 )
            {
              if ( (*(_BYTE *)(a1 + 4) & 1) == 0 && (unsigned int)MiYieldPageTableWalk(a1, 1) == 5 )
                v7 = 5;
              a2 = *v89;
              v11 = 1;
              v94 = 1;
              goto LABEL_20;
            }
            v66 = v95;
            v67 = a2;
            *(_QWORD *)(a1 + 64) = a2;
            if ( !v65 || (v68 = (unsigned __int64 *)(a1 + v66 + 80), a2 > *v68) )
            {
              v68 = (unsigned __int64 *)(v66 + a1 + 80);
              *v68 = a2;
            }
            v69 = v5;
            if ( v5 < 3 )
            {
              v70 = v68 + 2;
              v71 = 3 - v5;
              do
              {
                v67 = ((v67 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                *v70 = v67;
                v70 += 2;
                --v71;
              }
              while ( v71 );
              v69 = v5;
            }
            v72 = a2;
            v73 = v69;
            if ( v69 )
            {
              v74 = v68 - 2;
              do
              {
                v75 = (__int64)(v72 << 25) >> 16;
                if ( (*(_DWORD *)a1 & 0x4000) == 0 || (v72 = *v74, v75 > *v74) )
                {
                  v72 = v75;
                  *v74 = v75;
                }
                v74 -= 2;
                --v73;
              }
              while ( v73 );
            }
          }
          if ( v7 >= 4 || (*(_BYTE *)(a1 + 4) & 1) != 0 )
            goto LABEL_96;
          if ( (*(_DWORD *)a1 & 4) != 0 )
          {
            if ( v56
              || (v58 = v93,
                  !(unsigned int)MiLockPageTableInternal(v93, ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL)) )
            {
              if ( (unsigned int)MiYieldPageTableWalk(a1, 1) == 5 )
                v7 = 5;
LABEL_96:
              v11 = 1;
              v94 = 1;
              goto LABEL_20;
            }
            MiUnlockPageTableInternal(v58, a2);
            *(_QWORD *)(a1 + 48) = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          }
          v11 = v94;
        }
        v8 = v5;
      }
LABEL_37:
      v27 = *(_DWORD *)a1;
      v28 = *(_DWORD *)a1 & 1;
      if ( !v28 && !(_DWORD)v5 )
      {
        v29 = *(_QWORD *)(((((__int64)(a2 << 25) >> 16) & 0xFFFFFFFFF000uLL) >> 9) - 0x98000000000LL);
        if ( (unsigned __int8)((HIBYTE(v29) & 0xF) - 9) <= 1u )
        {
          if ( (*(_BYTE *)(v93 + 184) & 7) == 0 )
          {
            LeafVa = MiGetLeafVa(a2);
            v78 = (__int64)(((MiAdvanceToLastUntrimmableVa(LeafVa) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL - a2) >> 3;
            if ( v78 > 0xFFFFFFFFLL )
              *(_DWORD *)(a1 + 8) = -1;
            else
              *(_DWORD *)(a1 + 8) = v78;
          }
LABEL_14:
          v7 = 0;
          goto LABEL_15;
        }
        if ( (HIBYTE(v29) & 0xF) == 8 && (v27 & 0x8000) == 0 )
          goto LABEL_14;
      }
      v30 = *(_QWORD *)(a1 + 64);
      if ( v30 && v30 == *v89 )
        *(_QWORD *)(a1 + 64) = 0LL;
      v31 = *(_QWORD *)(a1 + 56);
      if ( v31 && v31 == *v89 )
        *(_QWORD *)(a1 + 56) = 0LL;
      if ( (v27 & 0x40) != 0 || (int)v5 >= 1 && !v28 && (*(_BYTE *)(v93 + 184) & 7) != 0 )
        goto LABEL_14;
      v32 = v91(a1, a2, (unsigned int)v5);
      v7 = v32;
      if ( v32 == 2 )
      {
        v7 = 0;
        goto LABEL_18;
      }
      if ( v32 == 3 )
      {
        v7 = 0;
        MiYieldPageTableWalk(a1, 1);
        MiWaitForFreePage(*(_QWORD *)(a1 + 72));
        v11 = 1;
        v94 = 1;
        goto LABEL_18;
      }
LABEL_15:
      v15 = *(unsigned int *)(a1 + 8) + 1LL;
      *(_DWORD *)(a1 + 8) = 0;
      v16 = a2 + 8 * v15;
      v17 = (a2 >> 9) & 0x7FFFFFFFF8LL;
      a2 = v16;
      if ( (_DWORD)v5 || ((v16 >> 9) & 0x7FFFFFFFF8LL) != v17 )
      {
        v20 = v16;
        if ( (*(_DWORD *)a1 & 0x4000) == 0 || (v21 = (unsigned __int64 *)(a1 + v95 + 80), v16 > *v21) )
        {
          v21 = (unsigned __int64 *)(v95 + a1 + 80);
          *v21 = v16;
        }
        if ( v8 < 3 )
        {
          v22 = v21 + 2;
          v23 = 3 - v8;
          do
          {
            v20 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            *v22 = v20;
            v22 += 2;
            --v23;
          }
          while ( v23 );
          v11 = v94;
        }
        v24 = v8;
        if ( v8 )
        {
          v25 = v21 - 2;
          do
          {
            v26 = (__int64)(v16 << 25) >> 16;
            if ( (*(_DWORD *)a1 & 0x4000) == 0 || (v16 = *v25, v26 > *v25) )
            {
              v16 = v26;
              *v25 = v26;
            }
            v25 -= 2;
            --v24;
          }
          while ( v24 );
        }
      }
      else
      {
        *(_QWORD *)(a1 + 80) = v16;
      }
LABEL_18:
      if ( (*(_BYTE *)(a1 + 4) & 1) != 0 || v7 >= 4 )
        goto LABEL_96;
LABEL_20:
      if ( a2 > v90 )
        break;
      v8 = v5;
    }
  }
LABEL_75:
  if ( (_DWORD)v5 == 3 )
  {
    v59 = *(_BYTE *)(a1 + 4);
    v60 = v59;
    if ( (v59 & 1) == 0 )
    {
      if ( (*(_DWORD *)a1 & 0x40) == 0 || (v60 = *(_BYTE *)(a1 + 4), v7 != 4) )
      {
        v61 = *(__int64 (__fastcall **)(__int64))(a1 + 160);
        v62 = v59 | 2;
        *(_BYTE *)(a1 + 4) = v59 | 2;
        if ( v61 )
        {
          v63 = v61(a1);
          v62 = *(_BYTE *)(a1 + 4);
        }
        else
        {
          v63 = 0;
        }
        v64 = *(_QWORD *)(a1 + 48);
        v60 = v62 & 0xFD;
        *(_BYTE *)(a1 + 4) = v60;
        if ( v64 )
        {
          MiUnlockPageTableInternal(v93, v64);
          v60 = *(_BYTE *)(a1 + 4);
          *(_QWORD *)(a1 + 48) = 0LL;
        }
        if ( v63 == 5 )
          v7 = 5;
      }
    }
    if ( (v60 & 1) != 0 )
    {
      if ( (*(_DWORD *)a1 & 4) != 0 )
      {
        MiLockWorkingSetShared(v93);
      }
      else
      {
        v88 = (volatile LONG *)MiGetSharedVm(v93);
        ExAcquireSpinLockExclusive(v88);
        *((_DWORD *)v88 + 1) = 0;
        if ( (*(_DWORD *)a1 & 0x400) != 0 )
          ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C51BA4);
      }
      *(_BYTE *)(a1 + 4) &= ~1u;
    }
    return (unsigned int)v7;
  }
LABEL_76:
  v46 = *(_BYTE *)(a1 + 4);
  if ( (v46 & 1) != 0 )
    return (unsigned int)v7;
  v47 = *(__int64 (__fastcall **)(__int64))(a1 + 160);
  v48 = v46 | 2;
  *(_BYTE *)(a1 + 4) = v48;
  if ( v47 )
  {
    v4 = v47(a1);
    v48 = *(_BYTE *)(a1 + 4);
    goto LABEL_79;
  }
  if ( *(_BYTE *)(a1 + 7) == 17 )
  {
    *(_BYTE *)(a1 + 4) = v48 & 0xFD;
    return (unsigned int)v7;
  }
LABEL_79:
  v49 = v48 & 0xFD;
  *(_BYTE *)(a1 + 4) = v49;
  if ( (v49 & 1) == 0 && v4 < 4 || v4 != 5 )
    return (unsigned int)v7;
  return 5LL;
}
