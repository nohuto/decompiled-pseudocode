/*
 * XREFs of MiMakeSystemCacheRangeValid @ 0x140286080
 * Callers:
 *     MmCheckCachedPageStates @ 0x140288A80 (MmCheckCachedPageStates.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     MiLockPageTableInternal @ 0x14020DFC0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiAllocateWsle @ 0x140211190 (MiAllocateWsle.c)
 *     MiAddWorkingSetEntries @ 0x140211890 (MiAddWorkingSetEntries.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     ObDereferenceObjectDeferDelete @ 0x14024A1D0 (ObDereferenceObjectDeferDelete.c)
 *     MiReferenceControlAreaFile @ 0x140282C60 (MiReferenceControlAreaFile.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiStartingOffset @ 0x14029EDC0 (MiStartingOffset.c)
 *     PfSnReferenceProcessTrace @ 0x1402B6100 (PfSnReferenceProcessTrace.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x1402B6294 (MiEmptyDeferredWorkingSetEntries.c)
 *     PfSnLogPageFaultCommon @ 0x1402B632C (PfSnLogPageFaultCommon.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402EF840 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     PfSnCheckLoggingForThread @ 0x140324330 (PfSnCheckLoggingForThread.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiDecrementShareCount @ 0x140353040 (MiDecrementShareCount.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405AFFD4 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
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
  struct _LIST_ENTRY *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rdx
  unsigned __int64 v27; // rdx
  unsigned int v28; // r15d
  unsigned __int64 v29; // rcx
  unsigned __int8 v30; // si
  __int64 v31; // r14
  __int64 v32; // rbx
  unsigned __int64 v33; // r8
  __int64 v34; // rcx
  unsigned __int64 v35; // r12
  __int64 v36; // rdi
  __int64 v37; // rdx
  __int64 v38; // rbx
  struct _LIST_ENTRY *v39; // r8
  __int64 v40; // rax
  unsigned __int64 v41; // r15
  unsigned __int64 v42; // r14
  __int64 v43; // r8
  struct _LIST_ENTRY *v44; // rdx
  __int64 v45; // rax
  ULONG_PTR v46; // r14
  __int64 v47; // rdx
  unsigned int v48; // eax
  char v49; // al
  unsigned __int64 v50; // rdx
  int v51; // ecx
  char v52; // r9
  __int64 result; // rax
  unsigned __int64 v54; // r14
  __int64 v55; // r13
  __int64 v56; // r15
  unsigned __int64 v57; // rbx
  __int64 v58; // rdx
  __int64 v59; // r8
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
  ULONG_PTR v72; // r14
  int v73; // r12d
  struct _KTHREAD *CurrentThread; // r15
  __int64 v75; // rax
  struct _EX_RUNDOWN_REF *v76; // rsi
  int v77; // r8d
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
  if ( (byte_140C52978 & 7u) < 6 )
  {
    v10 = &dword_140C4F6C0;
    if ( (byte_140C52978 & 7) != 2 )
      v10 = (LONG *)&unk_140C52980;
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
  MiLockPageTableInternal((__int64)&unk_140C528C0, v7, 0LL);
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
      v19 = v20 | 0x20;
      if ( (v22 & 0x20) == 0 )
        v19 = v20;
      v20 = v19;
      if ( (v22 & 0x42) != 0 )
        v20 = v19 | 0x42;
    }
  }
  v88 = v20;
  if ( (unsigned int)MiPteInShadowRange(&v88, v19)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v20 & 1) != 0
    && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
  {
    v23 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v23 )
    {
      v24 = *((_QWORD *)&v23->Flink + (((unsigned __int64)&v88 >> 3) & 0x1FF));
      v25 = v20 | 0x20;
      if ( (v24 & 0x20) == 0 )
        v25 = v20;
      v20 = v25;
      if ( (v24 & 0x42) != 0 )
        v20 = v25 | 0x42;
    }
  }
  v26 = *(_QWORD *)(48 * ((v20 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 16);
  if ( v26 )
    v26 += 40 * ((v6 >> 18) & 7);
  v27 = *(_QWORD *)(v26 + 24);
  v28 = v85;
  BYTE12(v82) = v8;
  v29 = v27 & 0xFFFFFFFFFFFFFFFEuLL;
  v83 = v7;
  if ( (v27 & 1) == 0 )
    v29 = v27;
  v30 = BYTE13(v82) | 4;
  BYTE13(v82) |= 4u;
  v31 = *(_QWORD *)(qword_140C4E588 + 8LL * (*(_WORD *)(*(_QWORD *)v29 + 60LL) & 0x3FF)) + 7232LL;
  v89 = v31;
  v32 = v31;
  *(_QWORD *)&v82 = v31;
  if ( v85 )
  {
    v33 = v84 - a2;
    v34 = v85;
    v35 = 0LL;
    v84 -= a2;
    v80 = v85;
    v36 = v31;
    while ( 1 )
    {
      *(_QWORD *)((char *)v93 + v35) = 0LL;
      v37 = *(_QWORD *)a2;
      v38 = *(_QWORD *)a2;
      if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        if ( (MiFlags & 0xC00000) != 0 )
        {
          if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v38 & 1) != 0
            && ((v38 & 0x20) == 0 || (v38 & 0x42) == 0) )
          {
            v39 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v39 )
            {
              v38 |= 0x20uLL;
              v40 = *((_QWORD *)&v39->Flink + ((a2 >> 3) & 0x1FF));
              if ( (v40 & 0x20) == 0 )
                v38 = *(_QWORD *)a2;
              if ( (v40 & 0x42) != 0 )
                v38 |= 0x42uLL;
            }
          }
          v30 = BYTE13(v82);
        }
        v34 = v80;
        v33 = v84;
      }
      v86 = v38;
      if ( !v38 )
        goto LABEL_108;
      if ( (v38 & 1) != 0 )
        break;
      *(_QWORD *)((char *)v93 + v35) = 1LL;
      *(_QWORD *)a2 = v37 | 1;
LABEL_108:
      v33 = v84;
      v35 += 8LL;
      a2 += 8LL;
      v80 = --v34;
      if ( !v34 )
      {
        v7 = v83;
        v32 = v82;
        v5 = v91;
        v31 = v89;
        v28 = v85;
        goto LABEL_110;
      }
    }
    v41 = v33 + a2;
    if ( (*(_BYTE *)(v33 + a2) & 1) != 0 )
      goto LABEL_106;
    v42 = v38;
    if ( (unsigned int)MiPteInShadowRange(&v86, v37) && (MiFlags & 0xC00000) != 0 )
    {
      if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 && ((v38 & 0x20) == 0 || (v38 & 0x42) == 0) )
      {
        v44 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v44 )
        {
          v42 = v38 | 0x20;
          v45 = *((_QWORD *)&v44->Flink + (((unsigned __int64)&v86 >> 3) & 0x1FF));
          if ( (v45 & 0x20) == 0 )
            v42 = v38;
          if ( (v45 & 0x42) != 0 )
            v42 |= 0x42uLL;
        }
      }
      v30 = BYTE13(v82);
    }
    v46 = 48 * ((v42 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v94[v35 / 8] = *(_QWORD *)(v46 + 16);
    if ( (v30 & 4) == 0 || (v30 & 1) != 0 || (v30 & 2) != 0 )
    {
      v49 = 0;
      goto LABEL_102;
    }
    v47 = WORD5(v82);
    v48 = v41;
    if ( !WORD5(v82) )
    {
LABEL_97:
      WORD5(v82) = 1;
      WORD4(v82) = (v48 >> 3) & 0x1FF;
      if ( (unsigned int)MI_PFN_IS_PROTO(v46, v47, v43) )
        v30 &= ~0x10u;
      else
        v30 |= 0x10u;
      v49 = 4;
      BYTE13(v82) = v30;
LABEL_102:
      if ( (unsigned int)MiAllocateWsle(v36, v41, v46, 0, v38, v49, 0LL) )
      {
        if ( (v94[v35 / 8] & 0x400LL) != 0 && PfSnNumActiveTraces )
          *(_QWORD *)((char *)v93 + v35) = *(_QWORD *)(v46 + 8) | 0x8000000000000000uLL;
        goto LABEL_107;
      }
LABEL_106:
      *(_QWORD *)((char *)v93 + v35) = 1LL;
LABEL_107:
      v34 = v80;
      goto LABEL_108;
    }
    if ( WORD5(v82) + WORD4(v82) == (((unsigned int)v41 >> 3) & 0x1FF) )
    {
      if ( (unsigned int)MI_PFN_IS_PROTO(v46, 511LL, v43) )
      {
        if ( (v30 & 0x10) == 0 )
          goto LABEL_95;
      }
      else if ( (v30 & 0x10) != 0 )
      {
        goto LABEL_95;
      }
    }
    MiEmptyDeferredWorkingSetEntries(&v82);
    v30 = BYTE13(v82);
LABEL_95:
    v48 = v41;
    if ( WORD5(v82) )
    {
      ++WORD5(v82);
      v49 = 4;
      goto LABEL_102;
    }
    goto LABEL_97;
  }
LABEL_110:
  if ( v7 )
  {
    if ( WORD5(v82) )
    {
      v50 = ((unsigned __int64)WORD4(v82) << 12) + ((((__int64)((v7 << 25) - v92) >> 16 << 25) - v92) >> 16);
      v51 = 2 * ((v30 >> 4) & 1);
      if ( v50 < 0xFFFFF68000000000uLL || v50 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v52 = v51 | 5;
      }
      else
      {
        v52 = v51 | 4;
        if ( (*(_BYTE *)(v32 + 184) & 7) != 0 )
          v52 = 2 * ((v30 & 0x10) != 0);
      }
      MiAddWorkingSetEntries(v32, v50, WORD5(v82), v52);
      WORD5(v82) = 0;
    }
    MiUnlockPageTableInternal(v32, v7);
    BYTE13(v82) = v30 | 2;
    v83 = 0LL;
  }
  MiUnlockWorkingSetShared(v31, v90);
  v81 = v28;
  result = -(__int64)v28;
  v54 = a2 - 8LL * v28;
  v84 = v54;
  if ( v28 )
  {
    result = v28;
    v55 = 0LL;
    while ( 1 )
    {
      v56 = *(_QWORD *)((char *)v93 + v55 * 8);
      if ( v56 == 1 )
        break;
      if ( v56 )
      {
        v69 = v94[v55];
        if ( qword_140C4DE80 && (v69 & 0x10) == 0 )
          v69 &= ~qword_140C4DE80;
        v70 = v69 >> 16;
        v71 = *(_QWORD *)v70;
        v72 = MiReferenceControlAreaFile(*(_QWORD *)v70);
        v73 = MiStartingOffset(v70, v56, 0xFFFFFFFFLL);
        if ( !*(_QWORD *)(v72 + 32) )
        {
          CurrentThread = KeGetCurrentThread();
          v75 = PfSnReferenceProcessTrace(CurrentThread->ApcState.Process);
          v76 = (struct _EX_RUNDOWN_REF *)v75;
          if ( v75 )
          {
            if ( (unsigned int)PfSnCheckLoggingForThread(CurrentThread, v75, 4LL) )
              PfSnLogPageFaultCommon((_DWORD)v76, v72, *(_QWORD *)(v72 + 24), v73, v77);
            ExReleaseRundownProtection_0(v76 + 45);
          }
        }
        _m_prefetchw((const void *)(v71 + 64));
        v78 = *(_QWORD *)(v71 + 64);
        if ( (v72 ^ v78) >= 0xF )
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
            if ( (v72 ^ v78) >= 0xF )
              goto LABEL_146;
          }
        }
        v54 = v84;
        goto LABEL_148;
      }
LABEL_149:
      v54 += 8LL;
      ++v55;
      --result;
      v84 = v54;
      v81 = result;
      if ( !result )
        return result;
    }
    v86 = MI_READ_PTE_LOCK_FREE(v54);
    v57 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v86) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v60 = (unsigned __int8)MiLockPageInline(v57, v58, v59);
    MiDecrementShareCount(v57);
    _InterlockedAnd64((volatile signed __int64 *)(v57 + 24), 0x7FFFFFFFFFFFFFFFuLL);
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
