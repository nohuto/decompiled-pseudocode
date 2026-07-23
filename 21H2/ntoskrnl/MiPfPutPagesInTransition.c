/*
 * XREFs of MiPfPutPagesInTransition @ 0x140306370
 * Callers:
 *     MmPrefetchPagesEx @ 0x140685FC4 (MmPrefetchPagesEx.c)
 *     MiPrefetchControlArea @ 0x1406C3FE8 (MiPrefetchControlArea.c)
 *     MmPrefetchForCacheManager @ 0x1406FFD6C (MmPrefetchForCacheManager.c)
 * Callees:
 *     MiIsPteInStore @ 0x140208FE0 (MiIsPteInStore.c)
 *     MiReturnFaultCharges @ 0x14020B384 (MiReturnFaultCharges.c)
 *     MiUpdatePfnPriority @ 0x14025ED44 (MiUpdatePfnPriority.c)
 *     MiGetPagingFileOffset @ 0x14025F240 (MiGetPagingFileOffset.c)
 *     MiPrefetchNormally @ 0x14025F878 (MiPrefetchNormally.c)
 *     MiZeroPhysicalPage @ 0x1402976D0 (MiZeroPhysicalPage.c)
 *     MiGetSlabPage @ 0x14029938C (MiGetSlabPage.c)
 *     MiGetSlabAllocator @ 0x14029959C (MiGetSlabAllocator.c)
 *     MmAccessFault @ 0x1402B1990 (MmAccessFault.c)
 *     MiGetPage @ 0x1402B7F10 (MiGetPage.c)
 *     MiObtainFaultCharges @ 0x1402C0390 (MiObtainFaultCharges.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402D5E10 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiPfnZeroingNeeded @ 0x1402DD3B0 (MiPfnZeroingNeeded.c)
 *     MiUnlockProtoPoolPage @ 0x1402DE040 (MiUnlockProtoPoolPage.c)
 *     MiInvalidPteConforms @ 0x1402DFD90 (MiInvalidPteConforms.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1402E08FC (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiGetInPageSupportBlock @ 0x1402E3774 (MiGetInPageSupportBlock.c)
 *     MiInitializePageColorBase @ 0x1402E3AD0 (MiInitializePageColorBase.c)
 *     PsGetIoPriorityThread @ 0x1402E7060 (PsGetIoPriorityThread.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiInitializeReadInProgressPfn @ 0x140306C80 (MiInitializeReadInProgressPfn.c)
 *     MiReduceMdl @ 0x1403074AC (MiReduceMdl.c)
 *     MiFreeInPageSupportBlock @ 0x14030762C (MiFreeInPageSupportBlock.c)
 *     MiSetInPagePriority @ 0x1403077C8 (MiSetInPagePriority.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     MiObtainProtoReference @ 0x140324D5C (MiObtainProtoReference.c)
 *     MiLockProtoPoolPage @ 0x140324E50 (MiLockProtoPoolPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     MiRefillPurgedExtents @ 0x140542290 (MiRefillPurgedExtents.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B5DD8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B5FBC (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiFreeReadListPages @ 0x1406FFF84 (MiFreeReadListPages.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiPfPutPagesInTransition(__int64 a1, _QWORD *a2, int a3)
{
  _SLIST_ENTRY *v3; // rdi
  unsigned int v4; // r12d
  __int64 v5; // r13
  _QWORD *v6; // rsi
  __int64 v7; // r8
  __int64 v8; // r15
  __int64 v9; // rcx
  int IoPriorityThread; // eax
  __int64 v11; // r8
  unsigned int v12; // edx
  __int64 v13; // r14
  __int64 v14; // r10
  __int64 v15; // r11
  int v16; // edi
  unsigned __int64 v17; // r10
  _QWORD *v18; // rbx
  __int64 v19; // r9
  unsigned __int64 v20; // r12
  _QWORD *v21; // rdx
  unsigned int v22; // eax
  unsigned __int64 v23; // r8
  int v24; // esi
  __int64 v25; // rdx
  unsigned __int64 v26; // r12
  __int64 v27; // rbx
  unsigned __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rbx
  __int64 v31; // r15
  ULONG_PTR v32; // r15
  int v33; // eax
  __int64 v34; // r10
  int v35; // r14d
  int v36; // eax
  __int64 v37; // rcx
  _QWORD *v38; // r8
  _QWORD *v39; // rsi
  _BYTE *v40; // rsi
  _DWORD *SchedulerAssist; // r9
  __int64 v42; // rbx
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // r14
  _DWORD *v45; // rcx
  __int64 v46; // rdx
  struct _KPRCB *v47; // rcx
  _DWORD *v48; // rdx
  ULONG_PTR v49; // rbx
  _QWORD *v50; // rsi
  __int64 v51; // rax
  __int64 v53; // rax
  _DWORD *v54; // rcx
  __int64 v55; // rdx
  bool v56; // zf
  unsigned __int32 v57; // eax
  __int64 v58; // rax
  _SLIST_ENTRY *v59; // rcx
  PSLIST_ENTRY *v60; // rdx
  __int64 v61; // rcx
  unsigned __int64 v62; // rax
  _QWORD *v63; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 SlabAllocator; // rax
  ULONG_PTR *v68; // rcx
  unsigned int v69; // r10d
  signed __int32 v70; // ecx
  __int64 Page; // rax
  __int64 v72; // r8
  int v73; // eax
  int v74; // eax
  int v75; // eax
  unsigned __int8 v76; // al
  struct _KPRCB *v77; // r10
  _DWORD *v78; // r9
  int v79; // eax
  unsigned int PagingFileOffset; // eax
  __int64 v81; // r15
  int IsPteInStore; // r14d
  __int64 v83; // rbx
  bool v84; // cc
  __int64 v85; // r13
  ULONG_PTR v86; // rsi
  ULONG_PTR *v87; // r8
  ULONG_PTR v88; // rax
  unsigned __int8 v89; // dl
  int v90; // eax
  int v91; // eax
  ULONG_PTR v92; // rax
  __int64 v93; // rdx
  __int64 v94; // [rsp+30h] [rbp-A9h]
  __int64 v95; // [rsp+38h] [rbp-A1h]
  ULONG_PTR v96; // [rsp+40h] [rbp-99h]
  __int64 v97; // [rsp+48h] [rbp-91h]
  int v98; // [rsp+50h] [rbp-89h]
  int v99; // [rsp+54h] [rbp-85h]
  unsigned int v100; // [rsp+58h] [rbp-81h]
  __int64 v101; // [rsp+60h] [rbp-79h]
  int v102; // [rsp+68h] [rbp-71h] BYREF
  int v103; // [rsp+6Ch] [rbp-6Dh]
  unsigned int v104; // [rsp+70h] [rbp-69h]
  __int64 v105; // [rsp+78h] [rbp-61h] BYREF
  _BYTE *v106; // [rsp+80h] [rbp-59h]
  unsigned __int64 v107; // [rsp+88h] [rbp-51h]
  _QWORD *v108; // [rsp+90h] [rbp-49h]
  int v109; // [rsp+98h] [rbp-41h] BYREF
  unsigned int v110; // [rsp+9Ch] [rbp-3Dh]
  _QWORD *v111; // [rsp+A0h] [rbp-39h]
  void *Src; // [rsp+A8h] [rbp-31h]
  __int128 v113; // [rsp+B0h] [rbp-29h] BYREF
  unsigned __int64 v114; // [rsp+C0h] [rbp-19h]
  __int64 v115; // [rsp+C8h] [rbp-11h] BYREF
  ULONG_PTR *v116; // [rsp+D0h] [rbp-9h]
  unsigned __int64 v117; // [rsp+D8h] [rbp-1h]
  PSLIST_ENTRY ListEntry; // [rsp+E0h] [rbp+7h]
  void *retaddr; // [rsp+138h] [rbp+5Fh]
  int v122; // [rsp+150h] [rbp+77h] BYREF
  int v123; // [rsp+158h] [rbp+7Fh]

  v122 = a3;
  v3 = 0LL;
  v4 = *(_DWORD *)(a1 + 80);
  v5 = a1;
  v104 = *(_DWORD *)(a1 + 84);
  v6 = 0LL;
  v7 = *(_QWORD *)(a1 + 8);
  v107 = 0LL;
  v8 = 0LL;
  v113 = 0LL;
  v9 = *(_WORD *)(v7 + 60) & 0x3FF;
  v100 = v4;
  v111 = 0LL;
  v94 = 0LL;
  v101 = *(_QWORD *)(qword_140C4E688 + 8 * v9);
  v97 = 0LL;
  v110 = *(_DWORD *)(v5 + 88) + 1;
  LOBYTE(v122) = 17;
  IoPriorityThread = PsGetIoPriorityThread((__int64)KeGetCurrentThread());
  v12 = *(_DWORD *)(v11 + 56);
  v13 = *(_QWORD *)(v5 + 120);
  v103 = IoPriorityThread;
  v116 = (ULONG_PTR *)(v5 + 120);
  v95 = v13;
  v98 = v4 & 7 | 0x18;
  v96 = 0LL;
  MiInitializePageColorBase(v14 + 1664, (v12 >> 20) & 0x3F, (__int64)&v113);
  if ( v13 == v5 + 120 )
    goto LABEL_72;
  v16 = v4 & 7 | 0x18;
  while ( 2 )
  {
    v17 = 0xFFFFFA8000000000uLL;
    ListEntry = (PSLIST_ENTRY)v13;
    if ( v103 < 2 )
    {
      *(_DWORD *)(v13 + 192) |= 0x80u;
    }
    else if ( (*(_DWORD *)(v5 + 104) & 1) != 0 )
    {
      *(_DWORD *)(v13 + 192) |= 0x20u;
    }
    v18 = *(_QWORD **)(v13 + 240);
    v19 = 0LL;
    v20 = *(_QWORD *)(v13 + 200) + 8LL;
    v106 = v18;
    v117 = v20;
    *(_QWORD *)(v13 + 240) = *v18 & 0xFFFFFFFFFFFFFFFCuLL;
    v114 = *v18 & 0xFFFFFFFFFFFFFFFCuLL;
    Src = *(void **)(v13 + 256);
    v21 = (char *)Src + 48;
    v22 = 0;
    v23 = (((*((_DWORD *)Src + 8) + *((_DWORD *)Src + 11)) & 0xFFF)
         + (unsigned __int64)*((unsigned int *)Src + 10)
         + 4095) >> 12;
    if ( v23 )
    {
      do
      {
        ++v22;
        *v21++ = qword_140C4EDB8;
      }
      while ( v22 < v23 );
    }
    v24 = 0;
    v123 = 0;
    if ( !v96 )
    {
      v96 = MiGetInPageSupportBlock(0);
      if ( v96 )
      {
        v25 = v104;
        *(_QWORD *)(v96 + 248) = 0LL;
        MiSetInPagePriority(v96, v25, v100);
      }
      v15 = v94;
      v19 = 0LL;
      v17 = 0xFFFFFA8000000000uLL;
    }
    if ( (unsigned __int64)v18 >= v20 )
      goto LABEL_63;
    while ( 2 )
    {
      v26 = *v18 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v15 )
      {
        if ( v8 == ((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
          goto LABEL_15;
        MiUnlockProtoPoolPage(v15, v122);
      }
      v8 = ((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v97 = v8;
      while ( 1 )
      {
        v53 = MiLockProtoPoolPage(v26, &v122);
        v19 = 0LL;
        v94 = v53;
        if ( v53 )
          break;
        MmAccessFault(2uLL, v26, 0, 0LL);
      }
      v16 = v98;
      v13 = v95;
      v17 = 0xFFFFFA8000000000uLL;
      while ( 1 )
      {
LABEL_15:
        while ( 1 )
        {
          v27 = *(_QWORD *)v26;
          v28 = *(_QWORD *)v26;
          if ( (*(_QWORD *)v26 & 1) == 0 )
            break;
LABEL_97:
          v55 = 6 * ((v28 >> 12) & 0xFFFFFFFFFLL);
          if ( (*(_QWORD *)(48 * ((v28 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0 )
          {
            v29 = v17 + 48 * ((v28 >> 12) & 0xFFFFFFFFFLL);
            v109 = v19;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) )
            {
              do
              {
                do
                  KeYieldProcessorEx(&v109, v55, v23, v19);
                while ( *(__int64 *)(v29 + 24) < 0 );
              }
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) );
              v19 = 0LL;
              v17 = 0xFFFFFA8000000000uLL;
            }
            if ( *(_QWORD *)v26 == v27 )
              goto LABEL_18;
            _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
        }
        if ( (*(_QWORD *)v26 & 0xC00LL) != 0x800 )
          break;
        if ( MiInvalidPteConforms(*(_QWORD *)v26) )
        {
          v28 = v27;
          if ( qword_140C4DF80 && (v27 & 0x10) == 0 )
            v28 = v27 & ~qword_140C4DF80;
          goto LABEL_97;
        }
      }
      v29 = v19;
LABEL_18:
      v30 = *(_QWORD *)v26;
      if ( v26 >= 0xFFFFF6FB7DBED000uLL
        && v26 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v30 & 1) != 0
        && ((v30 & 0x20) == 0 || (v30 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v65 = *((_QWORD *)&Flink->Flink + ((v26 >> 3) & 0x1FF));
          v66 = v30 | 0x20;
          if ( (v65 & 0x20) == 0 )
            v66 = *(_QWORD *)v26;
          v30 = v66;
          if ( (v65 & 0x42) != 0 )
            v30 = v66 | 0x42;
        }
      }
      v115 = v30;
      if ( v29 )
      {
        MiUpdatePfnPriority(v29);
        _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v15 = v94;
        v19 = 0LL;
        goto LABEL_52;
      }
      if ( (v30 & 0x400) == 0 )
      {
        if ( !IS_PTE_NOT_DEMAND_ZERO(v30) || !v96 )
        {
LABEL_90:
          v15 = v94;
          goto LABEL_52;
        }
        v35 = 2;
        v32 = v19;
        v34 = 1LL;
        goto LABEL_27;
      }
      v31 = v30;
      if ( qword_140C4DF80 && (v30 & 0x10) == 0 )
        v31 = v30 & ~qword_140C4DF80;
      v23 = *(_QWORD *)(v5 + 8);
      v32 = v31 >> 16;
      v33 = *(_DWORD *)(v23 + 56);
      if ( (v33 & 0x40000000) != 0 )
      {
        MiUnlockProtoPoolPage(v94, v122);
        v94 = 0LL;
        if ( (int)MiRefillPurgedExtents(v32) < 0 )
        {
          v24 = v123;
          goto LABEL_65;
        }
LABEL_88:
        v19 = 0LL;
        goto LABEL_89;
      }
      if ( (v33 & 0x20) != 0 && (*(_QWORD *)(*(_QWORD *)(v23 + 96) + 48LL) & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      {
LABEL_89:
        v8 = v97;
        goto LABEL_90;
      }
      v34 = 1LL;
      v35 = 1;
      v36 = *(_DWORD *)(*(_QWORD *)v32 + 56LL);
      if ( (v36 & 0x20) == 0
        || (v36 & 0x40000000) != 0
        || (*(_DWORD *)(*(_QWORD *)v32 + 92LL) & 0xC0000) == 0
        || (*(_DWORD *)(v101 + 4) & 8) == 0
        || (*(_BYTE *)(v32 + 34) & 2) != 0 && (*(_BYTE *)(v32 + 32) & 0xA) == 8 )
      {
LABEL_27:
        v37 = 40LL;
        goto LABEL_28;
      }
      SlabAllocator = MiGetSlabAllocator(v101, 0, (*(unsigned __int16 *)(v32 + 32) >> 1) & 0x1F);
      v19 = 0LL;
      v34 = 1LL;
      v37 = 8LL * *(int *)(SlabAllocator + 52) + 48;
LABEL_28:
      v38 = *(_QWORD **)(v37 + v5);
      v39 = (_QWORD *)(v37 + v5);
      v108 = v38;
      if ( v38 )
      {
        *v39 = *v38;
        v40 = v106;
        v105 = (__int64)(v38 + 0xB000000000LL) / 48;
        goto LABEL_30;
      }
      if ( !MiPrefetchNormally(v101, v110) )
        goto LABEL_181;
      if ( !a2 )
        goto LABEL_140;
      if ( !*a2 )
        goto LABEL_181;
      --*a2;
LABEL_140:
      if ( !(unsigned int)MiObtainFaultCharges(v68, v69, v69) )
        goto LABEL_181;
      v70 = _InterlockedExchangeAdd((volatile signed __int32 *)v113, 1u);
      if ( v39 == (_QWORD *)(v5 + 40) )
      {
        v40 = v106;
        v72 = 770LL;
        if ( (*v106 & 1) == 0 )
          v72 = 512LL;
        Page = MiGetPage(v101, DWORD2(v113) & (unsigned int)v70 | HIDWORD(v113), v72);
      }
      else
      {
        Page = MiGetSlabPage(v101, (*(unsigned __int16 *)(v32 + 32) >> 1) & 0x1F, 0, 0LL, 0);
        v40 = v106;
      }
      v105 = Page;
      if ( Page == -1 )
      {
        MiReturnFaultCharges(v101, 1uLL, 1LL);
LABEL_181:
        v15 = v94;
        v13 = v95;
        break;
      }
      v38 = (_QWORD *)(48 * Page - 0x58000000000LL);
      v19 = 0LL;
      v108 = v38;
      v34 = 1LL;
LABEL_30:
      v99 = v19;
      if ( (*v40 & 1) != 0 )
      {
        if ( MiPfnZeroingNeeded((__int64)v38, 1) )
          v19 = (unsigned int)v34;
        v99 = v19;
      }
      if ( v35 != 1 )
      {
        MiReturnCommit(v101, v34, v38, v19);
        MiInitializeReadInProgressPfn(-1, (unsigned int)&v105, 1, v26, v96, v16);
        PagingFileOffset = MiGetPagingFileOffset((__int64)&v115);
        v81 = PagingFileOffset;
        LODWORD(v107) = PagingFileOffset;
        IsPteInStore = MiIsPteInStore(v101, v30);
        v83 = (unsigned __int16)v30 >> 12;
        v84 = v103 < 2;
        v85 = *(_QWORD *)(v101 + 8 * v83 + 6944);
        *(_QWORD *)(v96 + 256) = v96 + 272;
        if ( v84 )
          *(_DWORD *)(v96 + 192) |= 0x80u;
        v86 = v105;
        *(_QWORD *)(v96 + 272) = 0LL;
        *(_QWORD *)(v96 + 304) = 0LL;
        *(_DWORD *)(v96 + 280) = 56;
        *(_QWORD *)(v96 + 312) = 4096LL;
        *(_WORD *)(v96 + 282) |= 0x4042u;
        *(_QWORD *)(v96 + 320) = v86;
        MiObtainProtoReference(v94, 0LL);
        v87 = v116;
        *(_QWORD *)(v96 + 160) = v94;
        v88 = *v87;
        if ( *(ULONG_PTR **)(*v87 + 8) == v87 )
        {
          *(_QWORD *)v96 = v88;
          *(_QWORD *)(v96 + 8) = v87;
          *(_QWORD *)(v88 + 8) = v96;
          *v87 = v96;
          v89 = v122;
          ++*(_DWORD *)(a1 + 108);
          MiUnlockProtoPoolPage(v94, v89);
          v94 = 0LL;
          if ( v99 == 1 )
            MiZeroPhysicalPage(v86, 1, *((unsigned __int8 *)v108 + 34) >> 6);
          *(_QWORD *)(v96 + 224) = 0LL;
          if ( IsPteInStore )
          {
            v91 = *(_DWORD *)(v96 + 192);
            *(_QWORD *)(v96 + 96) = v81 | (v83 << 60);
            v90 = v91 | 0x100;
          }
          else
          {
            v107 = (unsigned __int64)(unsigned int)v107 << 12;
            *(_QWORD *)(v96 + 96) = v107;
            v90 = *(_DWORD *)(v96 + 192);
          }
          *(_QWORD *)(v96 + 200) = v85;
          *(_DWORD *)(v96 + 192) = v90 | 0x200000;
          *(_QWORD *)(v96 + 248) = v108;
          *(_QWORD *)(v96 + 240) = v26;
          v92 = MiGetInPageSupportBlock(0);
          v96 = v92;
          if ( v92 )
          {
            v93 = v104;
            *(_QWORD *)(v92 + 248) = 0LL;
            MiSetInPagePriority(v92, v93, v100);
          }
          v13 = v95;
          v15 = 0LL;
          v5 = a1;
          v19 = 0LL;
          v8 = v97;
          goto LABEL_52;
        }
        goto LABEL_182;
      }
      v13 = v95;
      if ( !*(_QWORD *)(v95 + 248) )
        *(_QWORD *)(v95 + 248) = v38;
      ++v123;
      MiInitializeReadInProgressPfn(-1, (unsigned int)&v105, v34, v26, v95, v16);
      v42 = *(_QWORD *)(v5 + 8);
      if ( (*(_DWORD *)(v42 + 56) & 0x20) != 0 || !*(_QWORD *)(v42 + 64) )
        v32 = 0LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        v23 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
        SchedulerAssist[5] = v23;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v42 + 72, CurrentIrql);
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v102 = 0;
        v45 = CurrentPrcb->SchedulerAssist;
        if ( v45 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v73 = v45[6];
            v45[6] = v73 + 1;
            if ( v73 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( _interlockedbittestandset((volatile signed __int32 *)(v42 + 72), 0x1Fu) )
        {
          v54 = CurrentPrcb->SchedulerAssist;
          if ( v54 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v74 = v54[6] - 1;
              v54[6] = v74;
              if ( !v74 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          v102 = ExpWaitForSpinLockExclusiveAndAcquire(v42 + 72, CurrentIrql, v23, SchedulerAssist);
        }
        v46 = *(unsigned int *)(v42 + 72);
        if ( (*(_DWORD *)(v42 + 72) & 0xBFFFFFFF) != 0x80000000 )
        {
          do
          {
            if ( (v46 & 0x40000000) == 0 )
            {
              v57 = _InterlockedCompareExchange((volatile signed __int32 *)(v42 + 72), v46 | 0x40000000, v46);
              v56 = (_DWORD)v46 == v57;
              v46 = v57;
              if ( !v56 )
                continue;
            }
            KeYieldProcessorEx(&v102, v46, v23, (__int64)SchedulerAssist);
            v46 = *(unsigned int *)(v42 + 72);
          }
          while ( (v46 & 0xBFFFFFFF) != 0x80000000 );
        }
        v13 = v95;
      }
      ++*(_QWORD *)(v42 + 32);
      if ( v32 )
        ++*(_DWORD *)(v32 + 104);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v42 + 72, retaddr);
        v19 = 0LL;
      }
      else
      {
        v19 = 0LL;
        *(_DWORD *)(v42 + 72) = 0;
      }
      v47 = KeGetCurrentPrcb();
      v48 = v47->SchedulerAssist;
      if ( v48 )
      {
        if ( v47->NestingLevel <= 1u )
        {
          v75 = v48[6] - 1;
          v48[6] = v75;
          if ( !v75 )
          {
            KiRemoveSystemWorkPriorityKick(v47);
            v19 = 0LL;
          }
        }
      }
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v76 = KeGetCurrentIrql();
          if ( v76 <= 0xFu && CurrentIrql <= 0xFu && v76 >= 2u )
          {
            v77 = KeGetCurrentPrcb();
            v78 = v77->SchedulerAssist;
            v79 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v56 = (v79 & v78[5]) == 0;
            v23 = (unsigned int)v79 & v78[5];
            v78[5] = v23;
            if ( v56 )
              KiRemoveSystemWorkPriorityKick(v77);
            v19 = 0LL;
          }
        }
      }
      __writecr8(CurrentIrql);
      v49 = v105;
      *((_QWORD *)Src + ((__int64)(v26 - v114) >> 3) + 6) = v105;
      if ( *(_QWORD *)(v13 + 160) )
      {
        v15 = v94;
      }
      else
      {
        MiObtainProtoReference(v94, 0LL);
        v15 = v94;
        v19 = 0LL;
        *(_QWORD *)(v13 + 160) = v94;
      }
      if ( v99 == 1 )
      {
        MiUnlockProtoPoolPage(v15, v122);
        v94 = 0LL;
        MiZeroPhysicalPage(v49, 1, *((unsigned __int8 *)v108 + 34) >> 6);
        v5 = a1;
        goto LABEL_88;
      }
      v5 = a1;
      v8 = v97;
LABEL_52:
      v18 = v106 + 8;
      v106 = v18;
      if ( (unsigned __int64)v18 < v117 )
      {
        v17 = 0xFFFFFA8000000000uLL;
        continue;
      }
      break;
    }
    v24 = v123;
LABEL_63:
    if ( v15 )
    {
      MiUnlockProtoPoolPage(v15, v122);
      v94 = 0LL;
    }
LABEL_65:
    if ( !v24 )
    {
      v58 = *(_QWORD *)v13;
      v59 = ListEntry;
      v13 = v58;
      v95 = v58;
      v60 = (PSLIST_ENTRY *)*((_QWORD *)&ListEntry->Next + 1);
      if ( *(PSLIST_ENTRY *)(v58 + 8) == ListEntry && *v60 == ListEntry )
      {
        *v60 = (PSLIST_ENTRY)v58;
        *(_QWORD *)(v58 + 8) = v60;
        --*(_DWORD *)(v5 + 108);
        MiFreeInPageSupportBlock(v59);
        goto LABEL_70;
      }
LABEL_182:
      __fastfail(3u);
    }
    v50 = Src;
    v51 = MiReduceMdl(Src);
    if ( v51 )
    {
      *(_QWORD *)(v13 + 96) += v51 << 12;
      v61 = 48LL * v50[6] - 0x58000000000LL;
      v62 = *(_QWORD *)(v61 + 8) | 0x8000000000000000uLL;
      *(_QWORD *)(v13 + 248) = v61;
      *(_QWORD *)(v13 + 240) = v62;
    }
    if ( v50 != (_QWORD *)(v13 + 272) && *((_DWORD *)v50 + 10) <= 0x10000u )
    {
      memmove((void *)(v13 + 272), v50, *((__int16 *)v50 + 4));
      *v50 = v111;
      *(_QWORD *)(v13 + 256) = v13 + 272;
      v111 = v50;
    }
    v13 = *(_QWORD *)v13;
    v95 = v13;
LABEL_70:
    if ( v13 != v5 + 120 )
    {
      v15 = v94;
      v8 = v97;
      continue;
    }
    break;
  }
  v3 = (_SLIST_ENTRY *)v96;
  v6 = v111;
LABEL_72:
  MiFreeReadListPages(v5);
  if ( v6 )
  {
    do
    {
      v63 = (_QWORD *)*v6;
      ExFreePoolWithTag(v6, 0);
      v6 = v63;
    }
    while ( v63 );
  }
  if ( v3 )
    MiFreeInPageSupportBlock(v3);
  return 0LL;
}
