/*
 * XREFs of MiMakeSystemCacheRangeValid @ 0x1403298E0
 * Callers:
 *     MmCheckCachedPageStates @ 0x14032C2E0 (MmCheckCachedPageStates.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140213930 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     PfSnCheckLoggingForThread @ 0x1402A3B5C (PfSnCheckLoggingForThread.c)
 *     MiLockPageTableInternal @ 0x1402B33F0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiAllocateWsle @ 0x1402B65C0 (MiAllocateWsle.c)
 *     MiAddWorkingSetEntries @ 0x1402B6CC0 (MiAddWorkingSetEntries.c)
 *     MiDecrementShareCount @ 0x1402E4A10 (MiDecrementShareCount.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     PfSnLogPageFaultCommon @ 0x140325D9C (PfSnLogPageFaultCommon.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x140326744 (MiEmptyDeferredWorkingSetEntries.c)
 *     MiReferenceControlAreaFile @ 0x140327C00 (MiReferenceControlAreaFile.c)
 *     PfSnReferenceProcessTrace @ 0x140329010 (PfSnReferenceProcessTrace.c)
 *     MiStartingOffset @ 0x140329160 (MiStartingOffset.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     ObDereferenceObjectDeferDelete @ 0x14034E290 (ObDereferenceObjectDeferDelete.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405B5E94 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiMakeSystemCacheRangeValid(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rdi
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // r12
  __int64 v8; // rsi
  _DWORD *v9; // r9
  LONG *v10; // rbx
  unsigned __int8 CurrentIrql; // r14
  _DWORD *SchedulerAssist; // r9
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v14; // rcx
  int v15; // eax
  signed __int32 v16; // ett
  _DWORD *v17; // rcx
  int v18; // eax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rbx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  struct _LIST_ENTRY *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rdx
  unsigned __int64 v28; // rdx
  unsigned int v29; // r15d
  unsigned __int64 v30; // rcx
  unsigned __int8 v31; // si
  __int64 v32; // r14
  __int64 v33; // rbx
  unsigned __int64 v34; // r8
  __int64 v35; // rcx
  unsigned __int64 v36; // r12
  __int64 v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // rbx
  struct _LIST_ENTRY *v40; // r8
  __int64 v41; // rax
  unsigned __int64 v42; // r15
  unsigned __int64 v43; // r14
  struct _LIST_ENTRY *v44; // rdx
  __int64 v45; // rax
  _QWORD *v46; // r14
  unsigned int v47; // eax
  char v48; // al
  unsigned __int64 v49; // rdx
  int v50; // ecx
  char v51; // r9
  __int64 result; // rax
  unsigned __int64 v53; // r14
  __int64 v54; // r13
  unsigned __int64 v55; // r15
  __int64 v56; // rbx
  __int64 v57; // rdx
  __int64 v58; // r8
  _DWORD *v59; // r9
  unsigned __int64 v60; // rsi
  __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // r9
  unsigned __int8 v64; // al
  struct _KPRCB *v65; // r10
  _DWORD *v66; // r9
  int v67; // eax
  bool v68; // zf
  __int64 v69; // rsi
  __int64 v70; // rsi
  __int64 v71; // rbx
  signed __int64 v72; // r14
  unsigned __int64 v73; // r12
  struct _KTHREAD *CurrentThread; // r15
  struct _EX_RUNDOWN_REF *v75; // rax
  struct _EX_RUNDOWN_REF *v76; // rsi
  char v77; // r8
  signed __int64 v78; // rax
  signed __int64 v79; // rtt
  __int64 v80; // [rsp+40h] [rbp-C0h]
  __int64 v81; // [rsp+40h] [rbp-C0h]
  __int128 v82; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v83; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v84; // [rsp+60h] [rbp-A0h]
  unsigned int v85; // [rsp+68h] [rbp-98h]
  __int64 v86; // [rsp+70h] [rbp-90h] BYREF
  int v87; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v88; // [rsp+80h] [rbp-80h] BYREF
  __int64 v89; // [rsp+88h] [rbp-78h]
  __int64 v90; // [rsp+90h] [rbp-70h]
  __int64 v91; // [rsp+98h] [rbp-68h]
  __int64 v92; // [rsp+A0h] [rbp-60h]
  _OWORD v93[8]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v94[16]; // [rsp+130h] [rbp+30h]

  v91 = a4;
  v85 = a3;
  v86 = 0LL;
  v94[0] = 0LL;
  v83 = 0LL;
  v82 = 0LL;
  v5 = a4;
  v84 = a1;
  memset(v93, 0, sizeof(v93));
  v92 = 0LL;
  v6 = (__int64)(a1 << 25) >> 16;
  v7 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (byte_140C52AB8 & 7u) < 6 )
  {
    v10 = &dword_140C4F7C0;
    if ( (byte_140C52AB8 & 7) != 2 )
      v10 = (LONG *)&unk_140C52AC0;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v10, CurrentIrql);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v14 = CurrentPrcb->SchedulerAssist;
      if ( v14 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v15 = v14[6];
          v14[6] = v15 + 1;
          if ( v15 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      _m_prefetchw(v10);
      v16 = *v10 & 0x7FFFFFFF;
      if ( v16 != _InterlockedCompareExchange(v10, v16 + 1, v16) )
      {
        v17 = CurrentPrcb->SchedulerAssist;
        if ( v17 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v18 = v17[6] - 1;
            v17[6] = v18;
            if ( !v18 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        ExpWaitForSpinLockSharedAndAcquire(v10, CurrentIrql);
      }
    }
    if ( v10[1] )
      _InterlockedExchange(v10 + 1, 0);
    LOBYTE(v8) = CurrentIrql;
    v90 = CurrentIrql;
  }
  else
  {
    v8 = KeGetCurrentIrql();
    v90 = v8;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v8 <= 0xFu )
    {
      v9 = KeGetCurrentPrcb()->SchedulerAssist;
      v9[5] |= (-1 << (v8 + 1)) & 4;
    }
  }
  MiLockPageTableInternal((__int64)&unk_140C52A00, v7, 0);
  v19 = ((v6 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v20 = *(_QWORD *)v19;
  if ( v19 >= 0xFFFFF6FB7DBED000uLL
    && v19 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v20 & 1) != 0
    && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v22 = *((_QWORD *)&Flink->Flink + ((v19 >> 3) & 0x1FF));
      v23 = v20 | 0x20;
      if ( (v22 & 0x20) == 0 )
        v23 = v20;
      v20 = v23;
      if ( (v22 & 0x42) != 0 )
        v20 = v23 | 0x42;
    }
  }
  v88 = v20;
  if ( (unsigned int)MiPteInShadowRange(&v88)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v20 & 1) != 0
    && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
  {
    v24 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v24 )
    {
      v25 = *((_QWORD *)&v24->Flink + (((unsigned __int64)&v88 >> 3) & 0x1FF));
      v26 = v20 | 0x20;
      if ( (v25 & 0x20) == 0 )
        v26 = v20;
      v20 = v26;
      if ( (v25 & 0x42) != 0 )
        v20 = v26 | 0x42;
    }
  }
  v27 = *(_QWORD *)(48 * ((v20 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 16);
  if ( v27 )
    v27 += 40 * ((v6 >> 18) & 7);
  v28 = *(_QWORD *)(v27 + 24);
  v29 = v85;
  BYTE12(v82) = v8;
  v30 = v28 & 0xFFFFFFFFFFFFFFFEuLL;
  v83 = v7;
  if ( (v28 & 1) == 0 )
    v30 = v28;
  v31 = BYTE13(v82) | 4;
  BYTE13(v82) |= 4u;
  v32 = *(_QWORD *)(qword_140C4E688 + 8LL * (*(_WORD *)(*(_QWORD *)v30 + 60LL) & 0x3FF)) + 7232LL;
  v89 = v32;
  v33 = v32;
  *(_QWORD *)&v82 = v32;
  if ( v85 )
  {
    v34 = v84 - a2;
    v35 = v85;
    v36 = 0LL;
    v84 -= a2;
    v80 = v85;
    v37 = v32;
    while ( 1 )
    {
      *(_QWORD *)((char *)v93 + v36) = 0LL;
      v38 = *(_QWORD *)a2;
      v39 = *(_QWORD *)a2;
      if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        if ( (MiFlags & 0xC00000) != 0 )
        {
          if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v39 & 1) != 0
            && ((v39 & 0x20) == 0 || (v39 & 0x42) == 0) )
          {
            v40 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v40 )
            {
              v39 |= 0x20uLL;
              v41 = *((_QWORD *)&v40->Flink + ((a2 >> 3) & 0x1FF));
              if ( (v41 & 0x20) == 0 )
                v39 = *(_QWORD *)a2;
              if ( (v41 & 0x42) != 0 )
                v39 |= 0x42uLL;
            }
          }
          v31 = BYTE13(v82);
        }
        v35 = v80;
        v34 = v84;
      }
      v86 = v39;
      if ( !v39 )
        goto LABEL_108;
      if ( (v39 & 1) != 0 )
        break;
      *(_QWORD *)((char *)v93 + v36) = 1LL;
      *(_QWORD *)a2 = v38 | 1;
LABEL_108:
      v34 = v84;
      v36 += 8LL;
      a2 += 8LL;
      v80 = --v35;
      if ( !v35 )
      {
        v7 = v83;
        v33 = v82;
        v5 = v91;
        v32 = v89;
        v29 = v85;
        goto LABEL_110;
      }
    }
    v42 = v34 + a2;
    if ( (*(_BYTE *)(v34 + a2) & 1) != 0 )
      goto LABEL_106;
    v43 = v39;
    if ( (unsigned int)MiPteInShadowRange(&v86) && (MiFlags & 0xC00000) != 0 )
    {
      if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 && ((v39 & 0x20) == 0 || (v39 & 0x42) == 0) )
      {
        v44 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v44 )
        {
          v43 = v39 | 0x20;
          v45 = *((_QWORD *)&v44->Flink + (((unsigned __int64)&v86 >> 3) & 0x1FF));
          if ( (v45 & 0x20) == 0 )
            v43 = v39;
          if ( (v45 & 0x42) != 0 )
            v43 |= 0x42uLL;
        }
      }
      v31 = BYTE13(v82);
    }
    v46 = (_QWORD *)(48 * ((v43 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
    v94[v36 / 8] = v46[2];
    if ( (v31 & 4) == 0 || (v31 & 1) != 0 || (v31 & 2) != 0 )
    {
      v48 = 0;
      goto LABEL_102;
    }
    v47 = v42;
    if ( !WORD5(v82) )
    {
LABEL_97:
      WORD5(v82) = 1;
      WORD4(v82) = (v47 >> 3) & 0x1FF;
      if ( (unsigned int)MI_PFN_IS_PROTO(v46) )
        v31 &= ~0x10u;
      else
        v31 |= 0x10u;
      v48 = 4;
      BYTE13(v82) = v31;
LABEL_102:
      if ( (unsigned int)MiAllocateWsle(v37, v42, v46, 0, v39, v48, 0LL) )
      {
        if ( (v94[v36 / 8] & 0x400LL) != 0 && PfSnNumActiveTraces )
          *(_QWORD *)((char *)v93 + v36) = v46[1] | 0x8000000000000000uLL;
        goto LABEL_107;
      }
LABEL_106:
      *(_QWORD *)((char *)v93 + v36) = 1LL;
LABEL_107:
      v35 = v80;
      goto LABEL_108;
    }
    if ( WORD5(v82) + WORD4(v82) == (((unsigned int)v42 >> 3) & 0x1FF) )
    {
      if ( (unsigned int)MI_PFN_IS_PROTO(v46) )
      {
        if ( (v31 & 0x10) == 0 )
          goto LABEL_95;
      }
      else if ( (v31 & 0x10) != 0 )
      {
        goto LABEL_95;
      }
    }
    MiEmptyDeferredWorkingSetEntries((__int64)&v82);
    v31 = BYTE13(v82);
LABEL_95:
    v47 = v42;
    if ( WORD5(v82) )
    {
      ++WORD5(v82);
      v48 = 4;
      goto LABEL_102;
    }
    goto LABEL_97;
  }
LABEL_110:
  if ( v7 )
  {
    if ( WORD5(v82) )
    {
      v49 = ((unsigned __int64)WORD4(v82) << 12) + ((((__int64)((v7 << 25) - v92) >> 16 << 25) - v92) >> 16);
      v50 = 2 * ((v31 >> 4) & 1);
      if ( v49 < 0xFFFFF68000000000uLL || v49 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v51 = v50 | 5;
      }
      else
      {
        v51 = v50 | 4;
        if ( (*(_BYTE *)(v33 + 184) & 7) != 0 )
          v51 = 2 * ((v31 & 0x10) != 0);
      }
      MiAddWorkingSetEntries(v33, v49, WORD5(v82), v51);
      WORD5(v82) = 0;
    }
    MiUnlockPageTableInternal(v33, v7);
    BYTE13(v82) = v31 | 2;
    v83 = 0LL;
  }
  MiUnlockWorkingSetShared(v32, v90);
  v81 = v29;
  result = -(__int64)v29;
  v53 = a2 - 8LL * v29;
  v84 = v53;
  if ( v29 )
  {
    result = v29;
    v54 = 0LL;
    while ( 1 )
    {
      v55 = *(_QWORD *)((char *)v93 + v54 * 8);
      if ( v55 == 1 )
        break;
      if ( v55 )
      {
        v69 = v94[v54];
        if ( qword_140C4DF80 && (v69 & 0x10) == 0 )
          v69 &= ~qword_140C4DF80;
        v70 = v69 >> 16;
        v71 = *(_QWORD *)v70;
        v72 = MiReferenceControlAreaFile(*(_QWORD *)v70);
        v73 = MiStartingOffset((__int64 *)v70, v55, 0xFFFFFFFF);
        if ( !*(_QWORD *)(v72 + 32) )
        {
          CurrentThread = KeGetCurrentThread();
          v75 = PfSnReferenceProcessTrace((__int64)CurrentThread->ApcState.Process);
          v76 = v75;
          if ( v75 )
          {
            if ( (unsigned int)PfSnCheckLoggingForThread((__int64)CurrentThread, (__int64)v75, 4) )
              PfSnLogPageFaultCommon((__int64)v76, v72, *(_QWORD *)(v72 + 24), v73, v77);
            ExReleaseRundownProtection(v76 + 45);
          }
        }
        _m_prefetchw((const void *)(v71 + 64));
        v78 = *(_QWORD *)(v71 + 64);
        if ( (v72 ^ (unsigned __int64)v78) >= 0xF )
        {
LABEL_146:
          ObDereferenceObjectDeferDelete((PVOID)v72);
        }
        else
        {
          while ( 1 )
          {
            v79 = v78;
            v78 = _InterlockedCompareExchange64((volatile signed __int64 *)(v71 + 64), v78 + 1, v78);
            if ( v79 == v78 )
              break;
            if ( (v72 ^ (unsigned __int64)v78) >= 0xF )
              goto LABEL_146;
          }
        }
        v53 = v84;
        goto LABEL_148;
      }
LABEL_149:
      v53 += 8LL;
      ++v54;
      --result;
      v84 = v53;
      v81 = result;
      if ( !result )
        return result;
    }
    v86 = MI_READ_PTE_LOCK_FREE(v53);
    v56 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v86) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v60 = (unsigned __int8)MiLockPageInline(v56, v57, v58, v59);
    MiDecrementShareCount(v56);
    _InterlockedAnd64((volatile signed __int64 *)(v56 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v87 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v87, v61, v62, v63);
      while ( *(__int64 *)(v5 + 24) < 0 );
    }
    MiDecrementShareCount(v5);
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v64 = KeGetCurrentIrql();
        if ( v64 <= 0xFu && (unsigned __int8)v60 <= 0xFu && v64 >= 2u )
        {
          v65 = KeGetCurrentPrcb();
          v66 = v65->SchedulerAssist;
          v67 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v60 + 1));
          v68 = (v67 & v66[5]) == 0;
          v66[5] &= v67;
          if ( v68 )
            KiRemoveSystemWorkPriorityKick(v65);
        }
      }
    }
    __writecr8(v60);
LABEL_148:
    result = v81;
    goto LABEL_149;
  }
  return result;
}
