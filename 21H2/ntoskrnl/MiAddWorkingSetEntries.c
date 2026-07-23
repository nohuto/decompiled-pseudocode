/*
 * XREFs of MiAddWorkingSetEntries @ 0x1402B6CC0
 * Callers:
 *     MiAllocateWsle @ 0x1402B65C0 (MiAllocateWsle.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x140326744 (MiEmptyDeferredWorkingSetEntries.c)
 *     MiMakeSystemCacheRangeValid @ 0x1403298E0 (MiMakeSystemCacheRangeValid.c)
 * Callees:
 *     MiCountWslesInPageTable @ 0x140202320 (MiCountWslesInPageTable.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x140204330 (KxWaitForLockChainValid.c)
 *     MiGetStandbyRepurposed @ 0x14025F744 (MiGetStandbyRepurposed.c)
 *     KxWaitForLockOwnerShip @ 0x1402D36F0 (KxWaitForLockOwnerShip.c)
 *     MiIsDriverPage @ 0x140327410 (MiIsDriverPage.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051660C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405166CC (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall MiAddWorkingSetEntries(__int64 a1, unsigned __int64 a2, __int64 a3, char a4)
{
  char v4; // al
  unsigned __int64 v7; // r14
  volatile signed __int64 *v9; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v12; // edx
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r9
  _QWORD *v16; // r13
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r12
  char v19; // al
  unsigned __int64 v20; // rcx
  char v21; // r9
  int v22; // r15d
  unsigned __int64 v23; // rdx
  __int64 v24; // rbx
  unsigned __int8 v25; // bl
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // r12
  unsigned __int64 *v28; // rdx
  unsigned __int64 v29; // r8
  unsigned __int8 v30; // al
  __int64 result; // rax
  struct _KPRCB *v32; // rcx
  _DWORD *v33; // rdx
  unsigned __int64 v34; // rdi
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rbx
  __int64 Process; // rcx
  unsigned __int64 *v38; // rbx
  __int64 v39; // rcx
  unsigned __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r13
  __int64 *v43; // rbx
  __int64 *v44; // r12
  __int64 v45; // r8
  __int64 v46; // rax
  unsigned __int64 v47; // r10
  unsigned __int64 v48; // r12
  unsigned __int64 v49; // rbx
  struct _KPRCB *v50; // rcx
  _DWORD *v51; // rdx
  unsigned __int8 v52; // cl
  int v53; // edx
  struct _LIST_ENTRY *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 **v58; // rcx
  __int64 v59; // rax
  int v60; // eax
  __int64 v61; // rcx
  int StandbyRepurposed; // eax
  __int64 v63; // r11
  int v64; // r10d
  struct _LIST_ENTRY *Flink; // rax
  __int64 v66; // rax
  char v67; // rdx^7
  struct _LIST_ENTRY *v68; // rax
  __int64 v69; // rax
  __int64 v70; // rdx
  struct _LIST_ENTRY *v71; // rdx
  __int64 v72; // rax
  __int64 v73; // rdx
  int v74; // eax
  struct _LIST_ENTRY *v75; // rax
  __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rdx
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // [rsp+20h] [rbp-69h] BYREF
  volatile signed __int64 *v82; // [rsp+28h] [rbp-61h]
  __int64 v83; // [rsp+30h] [rbp-59h]
  unsigned __int64 v84; // [rsp+38h] [rbp-51h] BYREF
  unsigned __int64 v85; // [rsp+40h] [rbp-49h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-41h] BYREF
  __int64 v87; // [rsp+60h] [rbp-29h]
  unsigned __int64 v88; // [rsp+68h] [rbp-21h]
  __int128 v89; // [rsp+70h] [rbp-19h]
  __int64 v90; // [rsp+80h] [rbp-9h]
  _OWORD v91[2]; // [rsp+88h] [rbp-1h] BYREF
  void *retaddr; // [rsp+E8h] [rbp+5Fh]

  v4 = *(_BYTE *)(a1 + 184) & 7;
  v83 = 0LL;
  v88 = a2;
  v7 = a2;
  if ( v4 == 2 )
    v9 = (volatile signed __int64 *)&unk_140C4F800;
  else
    v9 = (volatile signed __int64 *)(a1 + 256);
  v82 = v9;
  v81 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v60 = SchedulerAssist[6];
      SchedulerAssist[6] = v60 + 1;
      if ( v60 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v81, v9);
  }
  else if ( _InterlockedExchange64(v9, (__int64)&v81) )
  {
    KxWaitForLockOwnerShip(&v81);
  }
  v12 = 1;
  if ( (a4 & 1) != 0 )
  {
    v13 = a3 + *(_QWORD *)(a1 + 120);
    if ( v13 > *(_QWORD *)(a1 + 112) && (*(_BYTE *)(a1 + 187) & 8) == 0 )
    {
      v14 = *(_QWORD *)(a1 + 136);
      v15 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
      if ( v14 > v15 )
      {
        v16 = *(_QWORD **)(qword_140C4E688 + 8LL * *(unsigned __int16 *)(a1 + 174));
        v17 = v16[866];
        if ( (v14 & 0x3F) != 0 )
        {
          v18 = -1LL;
        }
        else
        {
          v18 = v16[888];
          if ( v18 < v17 / 0x14 )
          {
            v12 = 1;
            if ( v14 >= v17 / 0x14 )
            {
LABEL_87:
              *(_BYTE *)(a1 + 187) |= 8u;
              goto LABEL_15;
            }
          }
          else
          {
            v12 = 1;
          }
        }
        if ( v14 - v15 >= 3 * (v17 >> 2) )
        {
          v61 = *(_QWORD *)(qword_140C4E688 + 8LL * *(unsigned __int16 *)(a1 + 174));
          v87 = v16[856];
          StandbyRepurposed = MiGetStandbyRepurposed(v61, 1u);
          if ( StandbyRepurposed == v64 )
          {
            v12 = 1;
          }
          else
          {
            if ( v63 )
              v18 = v16[888];
            v12 = 1;
            if ( v18 < 10LL * *(_QWORD *)(v87 + 2384) )
              goto LABEL_87;
          }
        }
      }
      if ( (*(_BYTE *)(a1 + 184) & 0x40) != 0 && v13 > *(_QWORD *)(a1 + 152) )
        goto LABEL_87;
    }
  }
LABEL_15:
  v19 = *(_BYTE *)(a1 + 184);
  *(_DWORD *)(a1 + 4) += a3;
  if ( (v19 & 7) == 2 )
    dword_140C4F840 += a3;
  __addgsdword(0x2E90u, a3);
  *(_QWORD *)(a1 + 136) += a3;
  if ( v7 < 0xFFFFF68000000000uLL || v7 > 0xFFFFF6FFFFFFFFFFuLL )
    *(_QWORD *)(a1 + 120) += a3;
  else
    v12 = 0;
  v20 = a3 + *(_QWORD *)(a1 + 120);
  if ( v20 > *(_QWORD *)(a1 + 160) )
    *(_QWORD *)(a1 + 160) = v20;
  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
  {
    qword_140C4F848 += a3;
    if ( v12 == 1 )
      qword_140C4F850 += a3;
    if ( qword_140C4F850 > (unsigned __int64)qword_140C4F858 )
      qword_140C4F858 = qword_140C4F850;
  }
  if ( (a4 & 2) != 0 )
  {
    *(_QWORD *)(a1 + 144) += a3;
    v89 = 0LL;
    v90 = 0LL;
    if ( v7 < 0xFFFFF68000000000uLL || v7 > 0xFFFFF6FFFFFFFFFFuLL )
      *(_QWORD *)(a1 + 128) += a3;
  }
  v21 = *(_BYTE *)(a1 + 184);
  if ( (v21 & 7u) >= 2 )
  {
    v45 = *(_QWORD *)(qword_140C4E688 + 8LL * *(unsigned __int16 *)(a1 + 174));
    v46 = (v21 & 7u) - 2;
    v47 = *(_QWORD *)(a1 + 136) + *(_QWORD *)(v45 + 4352);
    if ( v47 > *(_QWORD *)(v45 + 8 * v46 + 4360) )
    {
      *(_QWORD *)(v45 + 8 * v46 + 4360) = v47;
      v21 = *(_BYTE *)(a1 + 184);
    }
    if ( (v21 & 7) == 4 )
    {
      if ( PsNtosImageBase
        && (v7 >= (unsigned __int64)PsNtosImageBase && v7 < PsNtosImageEnd
         || v7 < PsHalImageEnd && v7 >= (unsigned __int64)PsHalImageBase) )
      {
        LODWORD(xmmword_140C4CD88) = a3 + xmmword_140C4CD88;
      }
      else if ( (unsigned int)MiGetSystemRegionType(v7) == 12
             && MiIsDriverPage(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) )
      {
        DWORD1(xmmword_140C4CD88) += a3;
      }
    }
  }
  v22 = a4 & 4;
  if ( v22 && a3 )
  {
    do
    {
      if ( v7 < 0xFFFFF68000000000uLL || v7 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v23 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v24 = *(_QWORD *)v23;
        if ( v23 >= 0xFFFFF6FB7DBED000uLL
          && v23 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v24 & 1) != 0
          && ((v24 & 0x20) == 0 || (v24 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v66 = *((_QWORD *)&Flink->Flink + ((v23 >> 3) & 0x1FF));
            v67 = HIBYTE(*(_QWORD *)v23);
            if ( (v66 & 0x20) == 0 )
              v67 = HIBYTE(v24);
            HIBYTE(v24) = v67;
            if ( (v66 & 0x42) != 0 )
              HIBYTE(v24) = v67;
          }
        }
        v25 = HIBYTE(v24) & 0xF;
      }
      else
      {
        v48 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v49 = *(_QWORD *)v48;
        if ( (unsigned int)MiPteInShadowRange(v48)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v49 & 1) != 0
          && ((v49 & 0x20) == 0 || (v49 & 0x42) == 0) )
        {
          v54 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v54 )
          {
            v55 = v49 | 0x20;
            v56 = *((_QWORD *)&v54->Flink + ((v48 >> 3) & 0x1FF));
            if ( (v56 & 0x20) == 0 )
              v55 = v49;
            v49 = v55;
            if ( (v56 & 0x42) != 0 )
              v49 = v55 | 0x42;
          }
        }
        v25 = (*(_BYTE *)(48 * ((v49 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL) >> 1) & 7;
      }
      if ( v7 < 0xFFFFF68000000000uLL || v7 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v26 = ((v7 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
        v27 = *(_QWORD *)v26;
        if ( v26 >= 0xFFFFF6FB7DBED000uLL
          && v26 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v27 & 1) != 0
          && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
        {
          v68 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v68 )
          {
            v69 = *((_QWORD *)&v68->Flink + ((v26 >> 3) & 0x1FF));
            v70 = v27 | 0x20;
            if ( (v69 & 0x20) == 0 )
              v70 = v27;
            v27 = v70;
            if ( (v69 & 0x42) != 0 )
              v27 = v70 | 0x42;
          }
        }
        v84 = v27;
        if ( (unsigned int)MiPteInShadowRange(&v84)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v27 & 1) != 0
          && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
        {
          v71 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v71 )
          {
            v72 = *((_QWORD *)&v71->Flink + (((unsigned __int64)&v84 >> 3) & 0x1FF));
            v73 = v27 | 0x20;
            if ( (v72 & 0x20) == 0 )
              v73 = v27;
            v27 = v73;
            if ( (v72 & 0x42) != 0 )
              v27 = v73 | 0x42;
          }
        }
        v28 = (unsigned __int64 *)(48 * ((v27 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
        v29 = *v28;
        v30 = (*v28 >> 14) & 7;
        if ( ((*v28 >> 4) & 0x3FF) != 0 )
        {
          if ( v25 == v30 )
          {
            *v28 = v29 ^ ((unsigned __int16)v29 ^ (unsigned __int16)(16 * (((*v28 >> 4) & 0x3FF) + 1))) & 0x3FF0;
          }
          else if ( v25 > v30 )
          {
            *v28 = v29 & 0xFFFFFFFFFFFE001FuLL | ((unsigned __int64)(v25 & 7) << 14) | 0x10;
          }
        }
      }
      ++*(_QWORD *)(a1 + 8LL * v25 + 40);
      if ( v25 == 7 )
      {
        v39 = *(unsigned __int16 *)(a1 + 174);
        v40 = *(_QWORD *)(a1 + 96);
        memset(&LockHandle, 0, sizeof(LockHandle));
        v41 = *(_QWORD *)(qword_140C4E688 + 8 * v39);
        v42 = *(_QWORD *)(v41 + 6848);
        if ( v40 >= *(_QWORD *)(v42 + 56) )
        {
          v43 = (__int64 *)(a1 + 24);
          if ( *(_QWORD *)(a1 + 24) )
          {
            v44 = (__int64 *)(v41 + 6856);
            if ( *(__int64 **)(v41 + 6856) != v43 )
            {
              LockHandle.LockQueue.Lock = &SpinLock;
              LockHandle.LockQueue.Next = 0LL;
              v50 = KeGetCurrentPrcb();
              v51 = v50->SchedulerAssist;
              if ( v51 )
              {
                if ( v50->NestingLevel <= 1u )
                {
                  v74 = v51[6];
                  v51[6] = v74 + 1;
                  if ( v74 == -1 )
                    KiRemoveSystemWorkPriorityKick(v50);
                }
              }
              if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
              {
                KiAcquireQueuedSpinLockInstrumented(&LockHandle, &SpinLock);
              }
              else if ( _InterlockedExchange64((volatile __int64 *)&SpinLock, (__int64)&LockHandle) )
              {
                KxWaitForLockOwnerShip(&LockHandle);
              }
              if ( *(_BYTE *)(v42 + 53) || (v57 = *v43) == 0 )
              {
                *(_BYTE *)(v42 + 54) = 1;
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
              }
              else
              {
                v58 = *(__int64 ***)(a1 + 32);
                if ( *(__int64 **)(v57 + 8) != v43
                  || *v58 != v43
                  || (*v58 = (__int64 *)v57, *(_QWORD *)(v57 + 8) = v58, v59 = *v44, *(__int64 **)(*v44 + 8) != v44) )
                {
                  __fastfail(3u);
                }
                *v43 = v59;
                *(_QWORD *)(a1 + 32) = v44;
                *(_QWORD *)(v59 + 8) = v43;
                *v44 = (__int64)v43;
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
              }
            }
          }
        }
      }
      v7 += 4096LL;
      --a3;
    }
    while ( a3 );
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    result = KiReleaseQueuedSpinLockInstrumented(&v81, retaddr);
    goto LABEL_42;
  }
  _m_prefetchw(&v81);
  result = v81;
  if ( v81 )
    goto LABEL_113;
  result = _InterlockedCompareExchange64(v82, 0LL, (signed __int64)&v81);
  if ( (__int64 *)result != &v81 )
  {
    result = KxWaitForLockChainValid(&v81);
LABEL_113:
    v81 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(result + 8), 1uLL);
  }
LABEL_42:
  v32 = KeGetCurrentPrcb();
  v33 = v32->SchedulerAssist;
  if ( v33 )
  {
    if ( v32->NestingLevel <= 1u )
    {
      result = (unsigned int)(v33[6] - 1);
      v33[6] = result;
      if ( !(_DWORD)result )
        result = KiRemoveSystemWorkPriorityKick(v32);
    }
  }
  if ( v22 )
  {
    v34 = v88;
    if ( v88 < 0xFFFFF68000000000uLL || (result = 0xFFFFF6FFFFFFFFFFuLL, v88 > 0xFFFFF6FFFFFFFFFFuLL) )
    {
      v35 = ((v88 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      v36 = *(_QWORD *)v35;
      if ( v35 >= 0xFFFFF6FB7DBED000uLL
        && v35 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v36 & 1) != 0
        && ((v36 & 0x20) == 0 || (v36 & 0x42) == 0) )
      {
        v75 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v75 )
        {
          v76 = *((_QWORD *)&v75->Flink + ((v35 >> 3) & 0x1FF));
          v77 = v36 | 0x20;
          if ( (v76 & 0x20) == 0 )
            v77 = v36;
          v36 = v77;
          if ( (v76 & 0x42) != 0 )
            v36 = v77 | 0x42;
        }
      }
      v85 = v36;
      if ( (unsigned int)MiPteInShadowRange(&v85) )
      {
        if ( (MiFlags & 0xC00000) != 0 )
        {
          Process = (__int64)KeGetCurrentThread()->ApcState.Process;
          if ( *(_BYTE *)(Process + 912) != 1 && (v36 & 1) != 0 && ((v36 & 0x20) == 0 || (v36 & 0x42) == 0) )
          {
            Process = (__int64)KeGetCurrentThread()->ApcState.Process;
            v78 = *(_QWORD *)(Process + 1928);
            if ( v78 )
            {
              v79 = *(_QWORD *)(v78 + 8 * (((unsigned __int64)&v85 >> 3) & 0x1FF));
              v80 = v36 | 0x20;
              Process = (unsigned __int8)v79;
              LOBYTE(Process) = v79 & 0x20;
              if ( (v79 & 0x20) == 0 )
                v80 = v36;
              v36 = v80;
              if ( (v79 & 0x42) != 0 )
                v36 = v80 | 0x42;
            }
          }
        }
      }
      v38 = (unsigned __int64 *)(48 * ((v36 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
      result = (unsigned __int64)*(unsigned int *)v38 >> 4;
      if ( (result & 0x3FF) == 0 )
      {
        MiCountWslesInPageTable(Process, v34, v91);
        v52 = 8;
        while ( 1 )
        {
          result = --v52;
          v53 = *((_DWORD *)v91 + v52);
          if ( v53 )
            break;
          if ( !v52 )
            return result;
        }
        result = *v38 & 0xFFFFFFFFFFFE000FuLL;
        *v38 = result | (16 * (v53 & 0x3FF | ((unsigned __int64)(v52 & 7) << 10)));
      }
    }
  }
  return result;
}
