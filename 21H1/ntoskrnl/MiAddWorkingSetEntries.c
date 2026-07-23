/*
 * XREFs of MiAddWorkingSetEntries @ 0x140211890
 * Callers:
 *     MiAllocateWsle @ 0x140211190 (MiAllocateWsle.c)
 *     MiMakeSystemCacheRangeValid @ 0x140286080 (MiMakeSystemCacheRangeValid.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x1402B6294 (MiEmptyDeferredWorkingSetEntries.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x14022E070 (KxWaitForLockOwnerShip.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiIsDriverPage @ 0x14027D7B0 (MiIsDriverPage.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     KxWaitForLockChainValid @ 0x1402DAB20 (KxWaitForLockChainValid.c)
 *     MiCountWslesInPageTable @ 0x1402DE480 (MiCountWslesInPageTable.c)
 *     MiGetStandbyRepurposed @ 0x140337488 (MiGetStandbyRepurposed.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051090C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405109CC (KiReleaseQueuedSpinLockInstrumented.c)
 */

unsigned __int64 __fastcall MiAddWorkingSetEntries(__int64 a1, unsigned __int64 a2, __int64 a3, char a4)
{
  char v4; // al
  unsigned __int64 v7; // r14
  volatile signed __int64 *v9; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r9
  _QWORD *v16; // r13
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r12
  char v19; // al
  unsigned __int64 v20; // rcx
  char v21; // r9
  unsigned __int64 v22; // r8
  int v23; // r15d
  unsigned __int64 v24; // rbx
  unsigned __int8 v25; // bl
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // r12
  unsigned __int8 v28; // al
  unsigned __int64 result; // rax
  struct _KPRCB *v30; // rcx
  _DWORD *v31; // rdx
  unsigned __int64 v32; // rdi
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rbx
  _KPROCESS *Process; // rcx
  unsigned __int64 *v36; // rbx
  __int64 v37; // rcx
  __int64 v38; // r13
  __int64 *v39; // rbx
  unsigned __int64 v40; // r12
  __int64 v41; // r8
  __int64 v42; // rax
  unsigned __int64 v43; // r10
  unsigned __int64 v44; // r12
  unsigned __int64 v45; // rbx
  struct _KPRCB *v46; // rcx
  _DWORD *v47; // rdx
  unsigned __int8 v48; // cl
  int v49; // edx
  struct _LIST_ENTRY *v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 **v53; // rcx
  __int64 v54; // rax
  int v55; // eax
  __int64 v56; // rcx
  int StandbyRepurposed; // eax
  __int64 v58; // r11
  int v59; // r10d
  struct _LIST_ENTRY *Flink; // rax
  __int64 v61; // rax
  struct _LIST_ENTRY *v62; // rax
  __int64 v63; // rax
  struct _LIST_ENTRY *v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rdx
  int v67; // eax
  struct _LIST_ENTRY *v68; // rax
  __int64 v69; // rax
  struct _LIST_ENTRY *v70; // rdx
  __int64 v71; // rax
  __int64 v72; // rdx
  unsigned __int64 v73; // [rsp+20h] [rbp-69h] BYREF
  volatile signed __int64 *v74; // [rsp+28h] [rbp-61h]
  __int64 v75; // [rsp+30h] [rbp-59h]
  unsigned __int64 v76; // [rsp+38h] [rbp-51h] BYREF
  unsigned __int64 v77; // [rsp+40h] [rbp-49h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-41h] BYREF
  __int64 v79; // [rsp+60h] [rbp-29h]
  unsigned __int64 v80; // [rsp+68h] [rbp-21h]
  __int128 v81; // [rsp+70h] [rbp-19h]
  __int64 v82; // [rsp+80h] [rbp-9h]
  _DWORD v83[8]; // [rsp+88h] [rbp-1h] BYREF
  void *retaddr; // [rsp+E8h] [rbp+5Fh]

  v4 = *(_BYTE *)(a1 + 184) & 7;
  v75 = 0LL;
  v80 = a2;
  v7 = a2;
  if ( v4 == 2 )
    v9 = (volatile signed __int64 *)&unk_140C4F700;
  else
    v9 = (volatile signed __int64 *)(a1 + 256);
  v74 = v9;
  v73 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v55 = SchedulerAssist[6];
      SchedulerAssist[6] = v55 + 1;
      if ( v55 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v73, v9);
  }
  else if ( _InterlockedExchange64(v9, (__int64)&v73) )
  {
    KxWaitForLockOwnerShip(&v73);
  }
  v12 = 1LL;
  if ( (a4 & 1) != 0 )
  {
    v13 = a3 + *(_QWORD *)(a1 + 120);
    if ( v13 > *(_QWORD *)(a1 + 112) && (*(_BYTE *)(a1 + 187) & 8) == 0 )
    {
      v14 = *(_QWORD *)(a1 + 136);
      v15 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
      if ( v14 > v15 )
      {
        v16 = *(_QWORD **)(qword_140C4E588 + 8LL * *(unsigned __int16 *)(a1 + 174));
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
            v12 = 1LL;
            if ( v14 >= v17 / 0x14 )
            {
LABEL_87:
              *(_BYTE *)(a1 + 187) |= 8u;
              goto LABEL_15;
            }
          }
          else
          {
            v12 = 1LL;
          }
        }
        if ( v14 - v15 >= 3 * (v17 >> 2) )
        {
          v56 = *(_QWORD *)(qword_140C4E588 + 8LL * *(unsigned __int16 *)(a1 + 174));
          v79 = v16[856];
          StandbyRepurposed = MiGetStandbyRepurposed(v56);
          if ( StandbyRepurposed == v59 )
          {
            v12 = 1LL;
          }
          else
          {
            if ( v58 )
              v18 = v16[888];
            v12 = 1LL;
            if ( v18 < 10LL * *(_QWORD *)(v79 + 2384) )
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
    dword_140C4F740 += a3;
  __addgsdword(0x2E90u, a3);
  *(_QWORD *)(a1 + 136) += a3;
  if ( v7 < 0xFFFFF68000000000uLL || v7 > 0xFFFFF6FFFFFFFFFFuLL )
    *(_QWORD *)(a1 + 120) += a3;
  else
    v12 = 0LL;
  v20 = a3 + *(_QWORD *)(a1 + 120);
  if ( v20 > *(_QWORD *)(a1 + 160) )
    *(_QWORD *)(a1 + 160) = v20;
  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
  {
    qword_140C4F748 += a3;
    if ( (_DWORD)v12 == 1 )
      qword_140C4F750 += a3;
    if ( qword_140C4F750 > (unsigned __int64)qword_140C4F758 )
      qword_140C4F758 = qword_140C4F750;
  }
  if ( (a4 & 2) != 0 )
  {
    *(_QWORD *)(a1 + 144) += a3;
    v81 = 0LL;
    v82 = 0LL;
    if ( v7 < 0xFFFFF68000000000uLL || v7 > 0xFFFFF6FFFFFFFFFFuLL )
      *(_QWORD *)(a1 + 128) += a3;
  }
  v21 = *(_BYTE *)(a1 + 184);
  if ( (v21 & 7u) >= 2 )
  {
    v41 = *(_QWORD *)(qword_140C4E588 + 8LL * *(unsigned __int16 *)(a1 + 174));
    v42 = (v21 & 7u) - 2;
    v43 = *(_QWORD *)(a1 + 136) + *(_QWORD *)(v41 + 4352);
    if ( v43 > *(_QWORD *)(v41 + 8 * v42 + 4360) )
    {
      *(_QWORD *)(v41 + 8 * v42 + 4360) = v43;
      v21 = *(_BYTE *)(a1 + 184);
    }
    if ( (v21 & 7) == 4 )
    {
      if ( PsNtosImageBase
        && (v7 >= (unsigned __int64)PsNtosImageBase && v7 < PsNtosImageEnd
         || v7 < PsHalImageEnd && v7 >= (unsigned __int64)PsHalImageBase) )
      {
        LODWORD(xmmword_140C4CC88) = a3 + xmmword_140C4CC88;
      }
      else if ( (unsigned int)MiGetSystemRegionType(v7) == 12
             && MiIsDriverPage(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) )
      {
        DWORD1(xmmword_140C4CC88) += a3;
      }
    }
  }
  v22 = 0xFFFFF6FB7DBED7F8uLL;
  v23 = a4 & 4;
  if ( v23 && a3 )
  {
    while ( 1 )
    {
      if ( v7 < 0xFFFFF68000000000uLL || v7 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v12 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v24 = *(_QWORD *)v12;
        if ( v12 >= 0xFFFFF6FB7DBED000uLL
          && v12 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v24 & 1) != 0
          && ((v24 & 0x20) == 0 || (v24 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v61 = *((_QWORD *)&Flink->Flink + ((v12 >> 3) & 0x1FF));
            v12 = v24 | 0x20;
            if ( (v61 & 0x20) == 0 )
              v12 = v24;
            HIBYTE(v24) = HIBYTE(v12);
            if ( (v61 & 0x42) != 0 )
              HIBYTE(v24) = HIBYTE(v12);
          }
        }
        v25 = HIBYTE(v24) & 0xF;
      }
      else
      {
        v44 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v45 = *(_QWORD *)v44;
        if ( (unsigned int)MiPteInShadowRange(v44, v12)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v45 & 1) != 0
          && ((v45 & 0x20) == 0 || (v45 & 0x42) == 0) )
        {
          v50 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v50 )
          {
            v12 = v45 | 0x20;
            v51 = *((_QWORD *)&v50->Flink + ((v44 >> 3) & 0x1FF));
            if ( (v51 & 0x20) == 0 )
              v12 = v45;
            v45 = v12;
            if ( (v51 & 0x42) != 0 )
              v45 = v12 | 0x42;
          }
        }
        v25 = (*(_BYTE *)(48 * ((v45 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL) >> 1) & 7;
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
          v62 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v62 )
          {
            v63 = *((_QWORD *)&v62->Flink + ((v26 >> 3) & 0x1FF));
            v26 = v27 | 0x20;
            if ( (v63 & 0x20) == 0 )
              v26 = v27;
            v27 = v26;
            if ( (v63 & 0x42) != 0 )
              v27 = v26 | 0x42;
          }
        }
        v76 = v27;
        if ( (unsigned int)MiPteInShadowRange(&v76, v26)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v27 & 1) != 0
          && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
        {
          v64 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v64 )
          {
            v65 = *((_QWORD *)&v64->Flink + (((unsigned __int64)&v76 >> 3) & 0x1FF));
            v66 = v27 | 0x20;
            if ( (v65 & 0x20) == 0 )
              v66 = v27;
            v27 = v66;
            if ( (v65 & 0x42) != 0 )
              v27 = v66 | 0x42;
          }
        }
        v12 = 48 * ((v27 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        v22 = *(_QWORD *)v12;
        v28 = (*(_QWORD *)v12 >> 14) & 7;
        if ( ((*(_QWORD *)v12 >> 4) & 0x3FF) != 0 )
        {
          if ( v25 == v28 )
          {
            *(_QWORD *)v12 = v22 ^ ((unsigned __int16)v22 ^ (unsigned __int16)(16 * (((*(_QWORD *)v12 >> 4) & 0x3FF) + 1))) & 0x3FF0;
          }
          else if ( v25 > v28 )
          {
            v22 &= 0xFFFFFFFFFFFE001FuLL;
            *(_QWORD *)v12 = v22 | ((unsigned __int64)(v25 & 7) << 14) | 0x10;
          }
        }
      }
      ++*(_QWORD *)(a1 + 8LL * v25 + 40);
      if ( v25 == 7 )
      {
        v37 = *(unsigned __int16 *)(a1 + 174);
        v12 = *(_QWORD *)(a1 + 96);
        memset(&LockHandle, 0, sizeof(LockHandle));
        v22 = *(_QWORD *)(qword_140C4E588 + 8 * v37);
        v38 = *(_QWORD *)(v22 + 6848);
        if ( v12 >= *(_QWORD *)(v38 + 56) )
        {
          v39 = (__int64 *)(a1 + 24);
          if ( *(_QWORD *)(a1 + 24) )
          {
            v40 = v22 + 6856;
            if ( *(__int64 **)(v22 + 6856) != v39 )
            {
              LockHandle.LockQueue.Lock = &qword_140C4ED80;
              LockHandle.LockQueue.Next = 0LL;
              v46 = KeGetCurrentPrcb();
              v47 = v46->SchedulerAssist;
              if ( v47 )
              {
                if ( v46->NestingLevel <= 1u )
                {
                  v67 = v47[6];
                  v47[6] = v67 + 1;
                  if ( v67 == -1 )
                    KiRemoveSystemWorkPriorityKick(v46);
                }
              }
              if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
              {
                KiAcquireQueuedSpinLockInstrumented(&LockHandle, &qword_140C4ED80);
              }
              else if ( _InterlockedExchange64((volatile __int64 *)&qword_140C4ED80, (__int64)&LockHandle) )
              {
                KxWaitForLockOwnerShip(&LockHandle);
              }
              if ( *(_BYTE *)(v38 + 53) || (v52 = *v39) == 0 )
              {
                *(_BYTE *)(v38 + 54) = 1;
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
              }
              else
              {
                v53 = *(__int64 ***)(a1 + 32);
                if ( *(__int64 **)(v52 + 8) != v39
                  || *v53 != v39
                  || (*v53 = (__int64 *)v52,
                      *(_QWORD *)(v52 + 8) = v53,
                      v54 = *(_QWORD *)v40,
                      *(_QWORD *)(*(_QWORD *)v40 + 8LL) != v40) )
                {
                  __fastfail(3u);
                }
                *v39 = v54;
                *(_QWORD *)(a1 + 32) = v40;
                *(_QWORD *)(v54 + 8) = v39;
                *(_QWORD *)v40 = v39;
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
              }
            }
          }
        }
      }
      v7 += 4096LL;
      if ( !--a3 )
        break;
      v22 = 0xFFFFF6FB7DBED7F8uLL;
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    result = KiReleaseQueuedSpinLockInstrumented(&v73, retaddr, v22);
    goto LABEL_42;
  }
  _m_prefetchw(&v73);
  result = v73;
  if ( v73 )
    goto LABEL_113;
  result = _InterlockedCompareExchange64(v74, 0LL, (signed __int64)&v73);
  if ( (unsigned __int64 *)result != &v73 )
  {
    result = KxWaitForLockChainValid(&v73, v12, v22);
LABEL_113:
    v73 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(result + 8), 1uLL);
  }
LABEL_42:
  v30 = KeGetCurrentPrcb();
  v31 = v30->SchedulerAssist;
  if ( v31 )
  {
    if ( v30->NestingLevel <= 1u )
    {
      result = (unsigned int)(v31[6] - 1);
      v31[6] = result;
      if ( !(_DWORD)result )
        result = KiRemoveSystemWorkPriorityKick(v30);
    }
  }
  if ( v23 )
  {
    v32 = v80;
    if ( v80 < 0xFFFFF68000000000uLL || (result = 0xFFFFF6FFFFFFFFFFuLL, v80 > 0xFFFFF6FFFFFFFFFFuLL) )
    {
      v33 = ((v80 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      v34 = *(_QWORD *)v33;
      if ( v33 >= 0xFFFFF6FB7DBED000uLL
        && v33 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v34 & 1) != 0
        && ((v34 & 0x20) == 0 || (v34 & 0x42) == 0) )
      {
        v68 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v68 )
        {
          v69 = *((_QWORD *)&v68->Flink + ((v33 >> 3) & 0x1FF));
          v33 = v34 | 0x20;
          if ( (v69 & 0x20) == 0 )
            v33 = v34;
          v34 = v33;
          if ( (v69 & 0x42) != 0 )
            v34 = v33 | 0x42;
        }
      }
      v77 = v34;
      if ( (unsigned int)MiPteInShadowRange(&v77, v33) )
      {
        if ( (MiFlags & 0xC00000) != 0 )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          if ( Process->AddressPolicy != 1 && (v34 & 1) != 0 && ((v34 & 0x20) == 0 || (v34 & 0x42) == 0) )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            v70 = Process[1].ProcessListEntry.Flink;
            if ( v70 )
            {
              v71 = *((_QWORD *)&v70->Flink + (((unsigned __int64)&v77 >> 3) & 0x1FF));
              v72 = v34 | 0x20;
              Process = (_KPROCESS *)(unsigned __int8)v71;
              LOBYTE(Process) = v71 & 0x20;
              if ( (v71 & 0x20) == 0 )
                v72 = v34;
              v34 = v72;
              if ( (v71 & 0x42) != 0 )
                v34 = v72 | 0x42;
            }
          }
        }
      }
      v36 = (unsigned __int64 *)(48 * ((v34 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
      result = (unsigned __int64)*(unsigned int *)v36 >> 4;
      if ( (result & 0x3FF) == 0 )
      {
        MiCountWslesInPageTable(Process, v32, v83);
        v48 = 8;
        while ( 1 )
        {
          result = --v48;
          v49 = v83[v48];
          if ( v49 )
            break;
          if ( !v48 )
            return result;
        }
        result = *v36 & 0xFFFFFFFFFFFE000FuLL;
        *v36 = result | (16 * (v49 & 0x3FF | ((unsigned __int64)(v48 & 7) << 10)));
      }
    }
  }
  return result;
}
