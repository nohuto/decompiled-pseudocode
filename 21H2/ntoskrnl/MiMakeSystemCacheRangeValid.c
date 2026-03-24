/*
 * XREFs of MiMakeSystemCacheRangeValid @ 0x14031EB90
 * Callers:
 *     MmCheckCachedPageStates @ 0x140321590 (MmCheckCachedPageStates.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020EAF0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiAllocateWsle @ 0x140211CC0 (MiAllocateWsle.c)
 *     MiAddWorkingSetEntries @ 0x1402123C0 (MiAddWorkingSetEntries.c)
 *     MiDecrementShareCount @ 0x1402401C0 (MiDecrementShareCount.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     ExReleaseRundownProtection_0 @ 0x14027C4F0 (ExReleaseRundownProtection_0.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029BF60 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiLockPageInline @ 0x1402FFE30 (MiLockPageInline.c)
 *     PfSnLogPageFaultCommon @ 0x14031B04C (PfSnLogPageFaultCommon.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x14031B9F4 (MiEmptyDeferredWorkingSetEntries.c)
 *     MiReferenceControlAreaFile @ 0x14031CEB0 (MiReferenceControlAreaFile.c)
 *     PfSnReferenceProcessTrace @ 0x14031E2C0 (PfSnReferenceProcessTrace.c)
 *     MiStartingOffset @ 0x14031E410 (MiStartingOffset.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     ObDereferenceObjectDeferDelete @ 0x140343540 (ObDereferenceObjectDeferDelete.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     PfSnCheckLoggingForThread @ 0x14035EC2C (PfSnCheckLoggingForThread.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405B5C64 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiMakeSystemCacheRangeValid(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        _DWORD *SchedulerAssist)
{
  __int64 v5; // rdi
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // r12
  __int64 v8; // rsi
  _DWORD *v9; // r9
  LONG *v10; // rbx
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v13; // rcx
  int v14; // eax
  signed __int32 v15; // ett
  _DWORD *v16; // rcx
  int v17; // eax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rbx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v21; // rax
  struct _LIST_ENTRY *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rdx
  unsigned __int64 v26; // rdx
  unsigned int v27; // r15d
  unsigned __int64 v28; // rcx
  unsigned __int8 v29; // si
  __int64 v30; // r14
  __int64 v31; // rbx
  unsigned __int64 v32; // r8
  __int64 v33; // rcx
  unsigned __int64 v34; // r12
  __int64 v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // rbx
  struct _LIST_ENTRY *v38; // r8
  __int64 v39; // rax
  unsigned __int64 v40; // r15
  unsigned __int64 v41; // r14
  struct _LIST_ENTRY *v42; // rdx
  __int64 v43; // rax
  _QWORD *v44; // r14
  unsigned int v45; // eax
  char v46; // al
  unsigned __int64 v47; // rdx
  int v48; // ecx
  char v49; // r9
  __int64 result; // rax
  unsigned __int64 v51; // r14
  __int64 v52; // r13
  unsigned __int64 v53; // r15
  __int64 v54; // rbx
  __int64 v55; // rdx
  __int64 v56; // r8
  _DWORD *v57; // r9
  unsigned __int64 v58; // rsi
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // r9
  unsigned __int8 v62; // al
  struct _KPRCB *v63; // r10
  _DWORD *v64; // r9
  int v65; // eax
  bool v66; // zf
  __int64 v67; // rsi
  __int64 v68; // rsi
  __int64 v69; // rbx
  signed __int64 v70; // r14
  unsigned __int64 v71; // r12
  struct _KTHREAD *CurrentThread; // r15
  struct _EX_RUNDOWN_REF *v73; // rax
  struct _EX_RUNDOWN_REF *v74; // rsi
  char v75; // r8
  signed __int64 v76; // rax
  signed __int64 v77; // rtt
  __int64 v78; // [rsp+40h] [rbp-C0h]
  __int64 v79; // [rsp+40h] [rbp-C0h]
  __int128 v80; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v81; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v82; // [rsp+60h] [rbp-A0h]
  unsigned int v83; // [rsp+68h] [rbp-98h]
  __int64 v84; // [rsp+70h] [rbp-90h] BYREF
  int v85; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v86; // [rsp+80h] [rbp-80h] BYREF
  __int64 v87; // [rsp+88h] [rbp-78h]
  __int64 v88; // [rsp+90h] [rbp-70h]
  _DWORD *v89; // [rsp+98h] [rbp-68h]
  __int64 v90; // [rsp+A0h] [rbp-60h]
  _OWORD v91[8]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v92[16]; // [rsp+130h] [rbp+30h]

  v89 = SchedulerAssist;
  v83 = a3;
  v84 = 0LL;
  v92[0] = 0LL;
  v81 = 0LL;
  v80 = 0LL;
  v5 = (__int64)SchedulerAssist;
  v82 = a1;
  memset(v91, 0, sizeof(v91));
  v90 = 0LL;
  v6 = (__int64)(a1 << 25) >> 16;
  v7 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (byte_140C52A78 & 7u) < 6 )
  {
    v10 = &dword_140C4F780;
    if ( (byte_140C52A78 & 7) != 2 )
      v10 = (LONG *)&unk_140C52A80;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      a3 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
      SchedulerAssist[5] = a3;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v10, CurrentIrql);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v13 = CurrentPrcb->SchedulerAssist;
      if ( v13 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v14 = v13[6];
          v13[6] = v14 + 1;
          if ( v14 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      _m_prefetchw(v10);
      v15 = *v10 & 0x7FFFFFFF;
      if ( v15 != _InterlockedCompareExchange(v10, v15 + 1, v15) )
      {
        v16 = CurrentPrcb->SchedulerAssist;
        if ( v16 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v17 = v16[6] - 1;
            v16[6] = v17;
            if ( !v17 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        ExpWaitForSpinLockSharedAndAcquire((unsigned __int64)v10, CurrentIrql, a3, SchedulerAssist);
      }
    }
    if ( v10[1] )
      _InterlockedExchange(v10 + 1, 0);
    LOBYTE(v8) = CurrentIrql;
    v88 = CurrentIrql;
  }
  else
  {
    v8 = KeGetCurrentIrql();
    v88 = v8;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v8 <= 0xFu )
    {
      v9 = KeGetCurrentPrcb()->SchedulerAssist;
      v9[5] |= (-1 << (v8 + 1)) & 4;
    }
  }
  MiLockPageTableInternal((__int64)&unk_140C529C0, v7, 0LL);
  v18 = ((v6 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v19 = *(_QWORD *)v18;
  if ( v18 >= 0xFFFFF6FB7DBED000uLL
    && v18 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v19 & 1) != 0
    && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v21 = *((_QWORD *)&Flink->Flink + ((v18 >> 3) & 0x1FF));
      v18 = v19 | 0x20;
      if ( (v21 & 0x20) == 0 )
        v18 = v19;
      v19 = v18;
      if ( (v21 & 0x42) != 0 )
        v19 = v18 | 0x42;
    }
  }
  v86 = v19;
  if ( (unsigned int)MiPteInShadowRange(&v86, v18)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v19 & 1) != 0
    && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
  {
    v22 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v22 )
    {
      v23 = *((_QWORD *)&v22->Flink + (((unsigned __int64)&v86 >> 3) & 0x1FF));
      v24 = v19 | 0x20;
      if ( (v23 & 0x20) == 0 )
        v24 = v19;
      v19 = v24;
      if ( (v23 & 0x42) != 0 )
        v19 = v24 | 0x42;
    }
  }
  v25 = *(_QWORD *)(48 * ((v19 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 16);
  if ( v25 )
    v25 += 40 * ((v6 >> 18) & 7);
  v26 = *(_QWORD *)(v25 + 24);
  v27 = v83;
  BYTE12(v80) = v8;
  v28 = v26 & 0xFFFFFFFFFFFFFFFEuLL;
  v81 = v7;
  if ( (v26 & 1) == 0 )
    v28 = v26;
  v29 = BYTE13(v80) | 4;
  BYTE13(v80) |= 4u;
  v30 = *(_QWORD *)(qword_140C4E648 + 8LL * (*(_WORD *)(*(_QWORD *)v28 + 60LL) & 0x3FF)) + 7232LL;
  v87 = v30;
  v31 = v30;
  *(_QWORD *)&v80 = v30;
  if ( v83 )
  {
    v32 = v82 - a2;
    v33 = v83;
    v34 = 0LL;
    v82 -= a2;
    v78 = v83;
    v35 = v30;
    while ( 1 )
    {
      *(_QWORD *)((char *)v91 + v34) = 0LL;
      v36 = *(_QWORD *)a2;
      v37 = *(_QWORD *)a2;
      if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        if ( (MiFlags & 0xC00000) != 0 )
        {
          if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v37 & 1) != 0
            && ((v37 & 0x20) == 0 || (v37 & 0x42) == 0) )
          {
            v38 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v38 )
            {
              v37 |= 0x20uLL;
              v39 = *((_QWORD *)&v38->Flink + ((a2 >> 3) & 0x1FF));
              if ( (v39 & 0x20) == 0 )
                v37 = *(_QWORD *)a2;
              if ( (v39 & 0x42) != 0 )
                v37 |= 0x42uLL;
            }
          }
          v29 = BYTE13(v80);
        }
        v33 = v78;
        v32 = v82;
      }
      v84 = v37;
      if ( !v37 )
        goto LABEL_108;
      if ( (v37 & 1) != 0 )
        break;
      *(_QWORD *)((char *)v91 + v34) = 1LL;
      *(_QWORD *)a2 = v36 | 1;
LABEL_108:
      v32 = v82;
      v34 += 8LL;
      a2 += 8LL;
      v78 = --v33;
      if ( !v33 )
      {
        v7 = v81;
        v31 = v80;
        v5 = (__int64)v89;
        v30 = v87;
        v27 = v83;
        goto LABEL_110;
      }
    }
    v40 = v32 + a2;
    if ( (*(_BYTE *)(v32 + a2) & 1) != 0 )
      goto LABEL_106;
    v41 = v37;
    if ( (unsigned int)MiPteInShadowRange(&v84, v36) && (MiFlags & 0xC00000) != 0 )
    {
      if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 && ((v37 & 0x20) == 0 || (v37 & 0x42) == 0) )
      {
        v42 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v42 )
        {
          v41 = v37 | 0x20;
          v43 = *((_QWORD *)&v42->Flink + (((unsigned __int64)&v84 >> 3) & 0x1FF));
          if ( (v43 & 0x20) == 0 )
            v41 = v37;
          if ( (v43 & 0x42) != 0 )
            v41 |= 0x42uLL;
        }
      }
      v29 = BYTE13(v80);
    }
    v44 = (_QWORD *)(48 * ((v41 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
    v92[v34 / 8] = v44[2];
    if ( (v29 & 4) == 0 || (v29 & 1) != 0 || (v29 & 2) != 0 )
    {
      v46 = 0;
      goto LABEL_102;
    }
    v45 = v40;
    if ( !WORD5(v80) )
    {
LABEL_97:
      WORD5(v80) = 1;
      WORD4(v80) = (v45 >> 3) & 0x1FF;
      if ( (unsigned int)MI_PFN_IS_PROTO(v44) )
        v29 &= ~0x10u;
      else
        v29 |= 0x10u;
      v46 = 4;
      BYTE13(v80) = v29;
LABEL_102:
      if ( (unsigned int)MiAllocateWsle(v35, v40, v44, 0, v37, v46, 0LL) )
      {
        if ( (v92[v34 / 8] & 0x400LL) != 0 && PfSnNumActiveTraces )
          *(_QWORD *)((char *)v91 + v34) = v44[1] | 0x8000000000000000uLL;
        goto LABEL_107;
      }
LABEL_106:
      *(_QWORD *)((char *)v91 + v34) = 1LL;
LABEL_107:
      v33 = v78;
      goto LABEL_108;
    }
    if ( WORD5(v80) + WORD4(v80) == (((unsigned int)v40 >> 3) & 0x1FF) )
    {
      if ( (unsigned int)MI_PFN_IS_PROTO(v44) )
      {
        if ( (v29 & 0x10) == 0 )
          goto LABEL_95;
      }
      else if ( (v29 & 0x10) != 0 )
      {
        goto LABEL_95;
      }
    }
    MiEmptyDeferredWorkingSetEntries((__int64)&v80);
    v29 = BYTE13(v80);
LABEL_95:
    v45 = v40;
    if ( WORD5(v80) )
    {
      ++WORD5(v80);
      v46 = 4;
      goto LABEL_102;
    }
    goto LABEL_97;
  }
LABEL_110:
  if ( v7 )
  {
    if ( WORD5(v80) )
    {
      v47 = ((unsigned __int64)WORD4(v80) << 12) + ((((__int64)((v7 << 25) - v90) >> 16 << 25) - v90) >> 16);
      v48 = 2 * ((v29 >> 4) & 1);
      if ( v47 < 0xFFFFF68000000000uLL || v47 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v49 = v48 | 5;
      }
      else
      {
        v49 = v48 | 4;
        if ( (*(_BYTE *)(v31 + 184) & 7) != 0 )
          v49 = 2 * ((v29 & 0x10) != 0);
      }
      MiAddWorkingSetEntries(v31, v47, WORD5(v80), v49);
      WORD5(v80) = 0;
    }
    MiUnlockPageTableInternal(v31, v7);
    BYTE13(v80) = v29 | 2;
    v81 = 0LL;
  }
  MiUnlockWorkingSetShared(v30, v88);
  v79 = v27;
  result = -(__int64)v27;
  v51 = a2 - 8LL * v27;
  v82 = v51;
  if ( v27 )
  {
    result = v27;
    v52 = 0LL;
    while ( 1 )
    {
      v53 = *(_QWORD *)((char *)v91 + v52 * 8);
      if ( v53 == 1 )
        break;
      if ( v53 )
      {
        v67 = v92[v52];
        if ( qword_140C4DF40 && (v67 & 0x10) == 0 )
          v67 &= ~qword_140C4DF40;
        v68 = v67 >> 16;
        v69 = *(_QWORD *)v68;
        v70 = MiReferenceControlAreaFile(*(_QWORD *)v68);
        v71 = MiStartingOffset((__int64 *)v68, v53, 0xFFFFFFFF);
        if ( !*(_QWORD *)(v70 + 32) )
        {
          CurrentThread = KeGetCurrentThread();
          v73 = PfSnReferenceProcessTrace((__int64)CurrentThread->ApcState.Process);
          v74 = v73;
          if ( v73 )
          {
            if ( (unsigned int)PfSnCheckLoggingForThread(CurrentThread, v73, 4LL) )
              PfSnLogPageFaultCommon((__int64)v74, v70, *(_QWORD *)(v70 + 24), v71, v75);
            ExReleaseRundownProtection_0(v74 + 45);
          }
        }
        _m_prefetchw((const void *)(v69 + 64));
        v76 = *(_QWORD *)(v69 + 64);
        if ( (v70 ^ (unsigned __int64)v76) >= 0xF )
        {
LABEL_146:
          ObDereferenceObjectDeferDelete((PVOID)v70);
        }
        else
        {
          while ( 1 )
          {
            v77 = v76;
            v76 = _InterlockedCompareExchange64((volatile signed __int64 *)(v69 + 64), v76 + 1, v76);
            if ( v77 == v76 )
              break;
            if ( (v70 ^ (unsigned __int64)v76) >= 0xF )
              goto LABEL_146;
          }
        }
        v51 = v82;
        goto LABEL_148;
      }
LABEL_149:
      v51 += 8LL;
      ++v52;
      --result;
      v82 = v51;
      v79 = result;
      if ( !result )
        return result;
    }
    v84 = MI_READ_PTE_LOCK_FREE(v51);
    v54 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v84) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v58 = (unsigned __int8)MiLockPageInline(v54, v55, v56, v57);
    MiDecrementShareCount(v54);
    _InterlockedAnd64((volatile signed __int64 *)(v54 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v85 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v85, v59, v60, v61);
      while ( *(__int64 *)(v5 + 24) < 0 );
    }
    MiDecrementShareCount(v5);
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v62 = KeGetCurrentIrql();
        if ( v62 <= 0xFu && (unsigned __int8)v58 <= 0xFu && v62 >= 2u )
        {
          v63 = KeGetCurrentPrcb();
          v64 = v63->SchedulerAssist;
          v65 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v58 + 1));
          v66 = (v65 & v64[5]) == 0;
          v64[5] &= v65;
          if ( v66 )
            KiRemoveSystemWorkPriorityKick(v63);
        }
      }
    }
    __writecr8(v58);
LABEL_148:
    result = v79;
    goto LABEL_149;
  }
  return result;
}
