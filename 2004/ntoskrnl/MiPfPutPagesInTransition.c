/*
 * XREFs of MiPfPutPagesInTransition @ 0x1402611B0
 * Callers:
 *     MmPrefetchPagesEx @ 0x140609B58 (MmPrefetchPagesEx.c)
 *     MmPrefetchForCacheManager @ 0x140609D4C (MmPrefetchForCacheManager.c)
 *     MiPrefetchControlArea @ 0x1406EB8A0 (MiPrefetchControlArea.c)
 * Callees:
 *     MiReturnCommit @ 0x140224390 (MiReturnCommit.c)
 *     MiPrefetchNormally @ 0x140227310 (MiPrefetchNormally.c)
 *     MiFreeInPageSupportBlock @ 0x140229534 (MiFreeInPageSupportBlock.c)
 *     MiObtainProtoReference @ 0x140229634 (MiObtainProtoReference.c)
 *     MiLockProtoPoolPage @ 0x140229D70 (MiLockProtoPoolPage.c)
 *     MiInvalidPteConforms @ 0x14022A870 (MiInvalidPteConforms.c)
 *     MiUnlockProtoPoolPage @ 0x14022A960 (MiUnlockProtoPoolPage.c)
 *     MiUpdatePfnPriority @ 0x1402501B0 (MiUpdatePfnPriority.c)
 *     MiInitializePageColorBase @ 0x14025EA70 (MiInitializePageColorBase.c)
 *     MiInitializeReadInProgressPfn @ 0x140261AC0 (MiInitializeReadInProgressPfn.c)
 *     MiReduceMdl @ 0x1402622EC (MiReduceMdl.c)
 *     MiSetInPagePriority @ 0x140262508 (MiSetInPagePriority.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MmAccessFault @ 0x14029F070 (MmAccessFault.c)
 *     MiGetPage @ 0x1402A5AB0 (MiGetPage.c)
 *     MiObtainFaultCharges @ 0x1402ADCF0 (MiObtainFaultCharges.c)
 *     MiGetInPageSupportBlock @ 0x1402B7934 (MiGetInPageSupportBlock.c)
 *     PsGetIoPriorityThread @ 0x1402B8E80 (PsGetIoPriorityThread.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1402BC1EC (IS_PTE_NOT_DEMAND_ZERO.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402CF620 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiGetSlabPage @ 0x1402E1028 (MiGetSlabPage.c)
 *     MiGetSlabAllocator @ 0x1402E1238 (MiGetSlabAllocator.c)
 *     MiZeroPhysicalPage @ 0x1402F50E4 (MiZeroPhysicalPage.c)
 *     MiReturnFaultCharges @ 0x140311E30 (MiReturnFaultCharges.c)
 *     MiIsPteInStore @ 0x140314E74 (MiIsPteInStore.c)
 *     MiGetPagingFileOffset @ 0x140315B24 (MiGetPagingFileOffset.c)
 *     MiPfnZeroingNeeded @ 0x14031A050 (MiPfnZeroingNeeded.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     MiRefillPurgedExtents @ 0x14053CB80 (MiRefillPurgedExtents.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B0638 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B0814 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiFreeReadListPages @ 0x1406093AC (MiFreeReadListPages.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
  ULONG_PTR v19; // r9
  unsigned __int64 v20; // r12
  __int64 Flink; // rdx
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
  __int64 v32; // r8
  ULONG_PTR v33; // r15
  int v34; // eax
  __int64 v35; // r10
  int v36; // r14d
  int v37; // eax
  __int64 v38; // rcx
  _QWORD *v39; // r8
  _QWORD *v40; // rsi
  _BYTE *v41; // rsi
  __int64 v42; // rbx
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // r14
  _DWORD *v45; // rcx
  __int64 v46; // rdx
  struct _KPRCB *v47; // rcx
  ULONG_PTR v48; // rbx
  _QWORD *v49; // rsi
  __int64 v50; // rax
  __int64 v52; // rax
  int v53; // r9d
  _DWORD *v54; // rcx
  bool v55; // zf
  unsigned __int32 v56; // eax
  __int64 v57; // rax
  _SLIST_ENTRY *v58; // rcx
  PSLIST_ENTRY *v59; // rdx
  __int64 v60; // rcx
  unsigned __int64 v61; // rax
  _QWORD *v62; // rbx
  __int64 v63; // rax
  __int64 SlabAllocator; // rax
  __int64 v65; // rcx
  unsigned int v66; // r10d
  signed __int32 v67; // ecx
  __int64 Page; // rax
  __int64 v69; // r8
  _DWORD *SchedulerAssist; // r9
  int v71; // eax
  int v72; // eax
  int v73; // eax
  unsigned __int8 v74; // al
  struct _KPRCB *v75; // r10
  _DWORD *v76; // r9
  int v77; // eax
  unsigned int PagingFileOffset; // eax
  __int64 v79; // r15
  int IsPteInStore; // r14d
  __int64 v81; // rbx
  bool v82; // cc
  __int64 v83; // r13
  ULONG_PTR v84; // rsi
  __int64 *v85; // r8
  __int64 v86; // rax
  __int64 v87; // rdx
  int v88; // eax
  int v89; // eax
  __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // [rsp+30h] [rbp-A9h]
  __int64 v93; // [rsp+38h] [rbp-A1h]
  __int64 v94; // [rsp+40h] [rbp-99h]
  __int64 v95; // [rsp+48h] [rbp-91h]
  int v96; // [rsp+50h] [rbp-89h]
  int v97; // [rsp+54h] [rbp-85h]
  unsigned int v98; // [rsp+58h] [rbp-81h]
  __int64 v99; // [rsp+60h] [rbp-79h]
  int v100; // [rsp+68h] [rbp-71h] BYREF
  int v101; // [rsp+6Ch] [rbp-6Dh]
  unsigned int v102; // [rsp+70h] [rbp-69h]
  __int64 v103; // [rsp+78h] [rbp-61h] BYREF
  _BYTE *v104; // [rsp+80h] [rbp-59h]
  unsigned __int64 v105; // [rsp+88h] [rbp-51h]
  _QWORD *v106; // [rsp+90h] [rbp-49h]
  int v107; // [rsp+98h] [rbp-41h] BYREF
  unsigned int v108; // [rsp+9Ch] [rbp-3Dh]
  _QWORD *v109; // [rsp+A0h] [rbp-39h]
  void *Src; // [rsp+A8h] [rbp-31h]
  __int128 v111; // [rsp+B0h] [rbp-29h] BYREF
  unsigned __int64 v112; // [rsp+C0h] [rbp-19h]
  __int64 v113; // [rsp+C8h] [rbp-11h] BYREF
  __int64 *v114; // [rsp+D0h] [rbp-9h]
  unsigned __int64 v115; // [rsp+D8h] [rbp-1h]
  PSLIST_ENTRY ListEntry; // [rsp+E0h] [rbp+7h]
  void *retaddr; // [rsp+138h] [rbp+5Fh]
  int v120; // [rsp+150h] [rbp+77h] BYREF
  int v121; // [rsp+158h] [rbp+7Fh]

  v120 = a3;
  v3 = 0LL;
  v4 = *(_DWORD *)(a1 + 80);
  v5 = a1;
  v102 = *(_DWORD *)(a1 + 84);
  v6 = 0LL;
  v7 = *(_QWORD *)(a1 + 8);
  v105 = 0LL;
  v8 = 0LL;
  v111 = 0LL;
  v9 = *(_WORD *)(v7 + 60) & 0x3FF;
  v98 = v4;
  v109 = 0LL;
  v92 = 0LL;
  v99 = *(_QWORD *)(qword_140C4E448 + 8 * v9);
  v95 = 0LL;
  v108 = *(_DWORD *)(v5 + 88) + 1;
  LOBYTE(v120) = 17;
  IoPriorityThread = PsGetIoPriorityThread(KeGetCurrentThread(), a2, v7);
  v12 = *(_DWORD *)(v11 + 56);
  v13 = *(_QWORD *)(v5 + 120);
  v101 = IoPriorityThread;
  v114 = (__int64 *)(v5 + 120);
  v93 = v13;
  v96 = v4 & 7 | 0x18;
  v94 = 0LL;
  MiInitializePageColorBase(v14 + 1664, (v12 >> 20) & 0x3F, (__int64)&v111);
  if ( v13 == v5 + 120 )
    goto LABEL_72;
  v16 = v4 & 7 | 0x18;
  while ( 2 )
  {
    v17 = 0xFFFFFA8000000000uLL;
    ListEntry = (PSLIST_ENTRY)v13;
    if ( v101 < 2 )
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
    v104 = v18;
    v115 = v20;
    *(_QWORD *)(v13 + 240) = *v18 & 0xFFFFFFFFFFFFFFFCuLL;
    v112 = *v18 & 0xFFFFFFFFFFFFFFFCuLL;
    Src = *(void **)(v13 + 256);
    Flink = (__int64)Src + 48;
    v22 = 0;
    v23 = (((*((_DWORD *)Src + 8) + *((_DWORD *)Src + 11)) & 0xFFF)
         + (unsigned __int64)*((unsigned int *)Src + 10)
         + 4095) >> 12;
    if ( v23 )
    {
      do
      {
        ++v22;
        *(_QWORD *)Flink = qword_140C4EB78;
        Flink += 8LL;
      }
      while ( v22 < v23 );
    }
    v24 = 0;
    v121 = 0;
    if ( !v94 )
    {
      v94 = MiGetInPageSupportBlock(0LL);
      if ( v94 )
      {
        v25 = v102;
        *(_QWORD *)(v94 + 248) = 0LL;
        MiSetInPagePriority(v94, v25, v98);
      }
      v15 = v92;
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
        Flink = ((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v8 == Flink )
          goto LABEL_15;
        MiUnlockProtoPoolPage(v15, (unsigned __int8)v120);
      }
      v8 = ((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v95 = v8;
      while ( 1 )
      {
        v52 = MiLockProtoPoolPage(v26, (unsigned __int8 *)&v120);
        v19 = 0LL;
        v92 = v52;
        if ( v52 )
          break;
        MmAccessFault(2uLL, v26);
      }
      v16 = v96;
      v13 = v93;
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
          Flink = 6 * ((v28 >> 12) & 0xFFFFFFFFFLL);
          if ( (*(_QWORD *)(48 * ((v28 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0 )
          {
            v29 = v17 + 48 * ((v28 >> 12) & 0xFFFFFFFFFLL);
            v107 = v19;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) )
            {
              do
              {
                do
                  KeYieldProcessorEx(&v107, Flink);
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
          if ( qword_140C4DD40 && (v27 & 0x10) == 0 )
            v28 = v27 & ~qword_140C4DD40;
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
        Flink = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v63 = *(_QWORD *)(Flink + 8 * ((v26 >> 3) & 0x1FF));
          Flink = v30 | 0x20;
          if ( (v63 & 0x20) == 0 )
            Flink = *(_QWORD *)v26;
          v30 = Flink;
          if ( (v63 & 0x42) != 0 )
            v30 = Flink | 0x42;
        }
      }
      v113 = v30;
      if ( v29 )
      {
        MiUpdatePfnPriority(v29);
        _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v15 = v92;
        v19 = 0LL;
        goto LABEL_52;
      }
      if ( (v30 & 0x400) == 0 )
      {
        if ( !(unsigned int)IS_PTE_NOT_DEMAND_ZERO(v30) || !v94 )
        {
LABEL_90:
          v15 = v92;
          goto LABEL_52;
        }
        v36 = 2;
        v33 = v19;
        v35 = 1LL;
        goto LABEL_27;
      }
      v31 = v30;
      if ( qword_140C4DD40 && (v30 & 0x10) == 0 )
        v31 = v30 & ~qword_140C4DD40;
      v32 = *(_QWORD *)(v5 + 8);
      v33 = v31 >> 16;
      v34 = *(_DWORD *)(v32 + 56);
      if ( (v34 & 0x40000000) != 0 )
      {
        MiUnlockProtoPoolPage(v92, (unsigned __int8)v120);
        v92 = 0LL;
        if ( (int)MiRefillPurgedExtents(v33) < 0 )
        {
          v24 = v121;
          goto LABEL_65;
        }
LABEL_88:
        v19 = 0LL;
        goto LABEL_89;
      }
      if ( (v34 & 0x20) != 0 && (*(_QWORD *)(*(_QWORD *)(v32 + 96) + 48LL) & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      {
LABEL_89:
        v8 = v95;
        goto LABEL_90;
      }
      v35 = 1LL;
      v36 = 1;
      v37 = *(_DWORD *)(*(_QWORD *)v33 + 56LL);
      if ( (v37 & 0x20) == 0
        || (v37 & 0x40000000) != 0
        || (*(_DWORD *)(*(_QWORD *)v33 + 92LL) & 0xC0000) == 0
        || (*(_DWORD *)(v99 + 4) & 8) == 0
        || (*(_BYTE *)(v33 + 34) & 2) != 0 && (*(_BYTE *)(v33 + 32) & 0xA) == 8 )
      {
LABEL_27:
        v38 = 40LL;
        goto LABEL_28;
      }
      SlabAllocator = MiGetSlabAllocator(v99, 0LL, (*(unsigned __int16 *)(v33 + 32) >> 1) & 0x1F);
      LODWORD(v19) = 0;
      v35 = 1LL;
      v38 = 8LL * *(int *)(SlabAllocator + 52) + 48;
LABEL_28:
      v39 = *(_QWORD **)(v38 + v5);
      v40 = (_QWORD *)(v38 + v5);
      v106 = v39;
      if ( v39 )
      {
        *v40 = *v39;
        v41 = v104;
        v103 = (__int64)(v39 + 0xB000000000LL) / 48;
        goto LABEL_30;
      }
      if ( !MiPrefetchNormally(v99, v108) )
        goto LABEL_181;
      Flink = (__int64)a2;
      if ( !a2 )
        goto LABEL_140;
      if ( !*a2 )
        goto LABEL_181;
      --*a2;
LABEL_140:
      if ( !(unsigned int)MiObtainFaultCharges(v65, v66, v66) )
        goto LABEL_181;
      v67 = _InterlockedExchangeAdd((volatile signed __int32 *)v111, 1u);
      if ( v40 == (_QWORD *)(v5 + 40) )
      {
        v41 = v104;
        v69 = 770LL;
        if ( (*v104 & 1) == 0 )
          v69 = 512LL;
        Page = MiGetPage(v99, DWORD2(v111) & (unsigned int)v67 | HIDWORD(v111), v69);
      }
      else
      {
        Page = MiGetSlabPage(v99, (*(unsigned __int16 *)(v33 + 32) >> 1) & 0x1F, 0, 0, 0);
        v41 = v104;
      }
      v103 = Page;
      if ( Page == -1 )
      {
        MiReturnFaultCharges(v99, 1LL, 1LL);
LABEL_181:
        v15 = v92;
        v13 = v93;
        break;
      }
      v39 = (_QWORD *)(48 * Page - 0x58000000000LL);
      LODWORD(v19) = 0;
      v106 = v39;
      v35 = 1LL;
LABEL_30:
      v97 = v19;
      if ( (*v41 & 1) != 0 )
      {
        if ( (unsigned int)MiPfnZeroingNeeded(v39, 1LL) )
          v53 = v35;
        v97 = v53;
      }
      if ( v36 != 1 )
      {
        MiReturnCommit(v99, v35);
        MiInitializeReadInProgressPfn(-1, (unsigned int)&v103, 1, v26, v94, v16);
        PagingFileOffset = MiGetPagingFileOffset(&v113);
        v79 = PagingFileOffset;
        LODWORD(v105) = PagingFileOffset;
        IsPteInStore = MiIsPteInStore(v99, v30);
        v81 = (unsigned __int16)v30 >> 12;
        v82 = v101 < 2;
        v83 = *(_QWORD *)(v99 + 8 * v81 + 6944);
        *(_QWORD *)(v94 + 256) = v94 + 272;
        if ( v82 )
          *(_DWORD *)(v94 + 192) |= 0x80u;
        v84 = v103;
        *(_QWORD *)(v94 + 272) = 0LL;
        *(_QWORD *)(v94 + 304) = 0LL;
        *(_DWORD *)(v94 + 280) = 56;
        *(_QWORD *)(v94 + 312) = 4096LL;
        *(_WORD *)(v94 + 282) |= 0x4042u;
        *(_QWORD *)(v94 + 320) = v84;
        MiObtainProtoReference(v92, 0LL);
        v85 = v114;
        *(_QWORD *)(v94 + 160) = v92;
        v86 = *v85;
        if ( *(__int64 **)(*v85 + 8) == v85 )
        {
          *(_QWORD *)v94 = v86;
          *(_QWORD *)(v94 + 8) = v85;
          *(_QWORD *)(v86 + 8) = v94;
          *v85 = v94;
          v87 = (unsigned __int8)v120;
          ++*(_DWORD *)(a1 + 108);
          MiUnlockProtoPoolPage(v92, v87);
          v92 = 0LL;
          if ( v97 == 1 )
            MiZeroPhysicalPage(v84);
          *(_QWORD *)(v94 + 224) = 0LL;
          if ( IsPteInStore )
          {
            v89 = *(_DWORD *)(v94 + 192);
            *(_QWORD *)(v94 + 96) = v79 | (v81 << 60);
            v88 = v89 | 0x100;
          }
          else
          {
            v105 = (unsigned __int64)(unsigned int)v105 << 12;
            *(_QWORD *)(v94 + 96) = v105;
            v88 = *(_DWORD *)(v94 + 192);
          }
          *(_QWORD *)(v94 + 200) = v83;
          *(_DWORD *)(v94 + 192) = v88 | 0x200000;
          *(_QWORD *)(v94 + 248) = v106;
          *(_QWORD *)(v94 + 240) = v26;
          v90 = MiGetInPageSupportBlock(0LL);
          v94 = v90;
          if ( v90 )
          {
            v91 = v102;
            *(_QWORD *)(v90 + 248) = 0LL;
            MiSetInPagePriority(v90, v91, v98);
          }
          v13 = v93;
          v15 = 0LL;
          v5 = a1;
          v19 = 0LL;
          v8 = v95;
          goto LABEL_52;
        }
        goto LABEL_182;
      }
      v13 = v93;
      if ( !*(_QWORD *)(v93 + 248) )
        *(_QWORD *)(v93 + 248) = v39;
      ++v121;
      MiInitializeReadInProgressPfn(-1, (unsigned int)&v103, v35, v26, v93, v16);
      v42 = *(_QWORD *)(v5 + 8);
      if ( (*(_DWORD *)(v42 + 56) & 0x20) != 0 || !*(_QWORD *)(v42 + 64) )
        v33 = 0LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v42 + 72, CurrentIrql);
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v100 = 0;
        v45 = CurrentPrcb->SchedulerAssist;
        if ( v45 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v71 = v45[6];
            v45[6] = v71 + 1;
            if ( v71 == -1 )
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
              v72 = v54[6] - 1;
              v54[6] = v72;
              if ( !v72 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          v100 = ExpWaitForSpinLockExclusiveAndAcquire(v42 + 72, CurrentIrql);
        }
        v46 = *(unsigned int *)(v42 + 72);
        if ( (*(_DWORD *)(v42 + 72) & 0xBFFFFFFF) != 0x80000000 )
        {
          do
          {
            if ( (v46 & 0x40000000) == 0 )
            {
              v56 = _InterlockedCompareExchange((volatile signed __int32 *)(v42 + 72), v46 | 0x40000000, v46);
              v55 = (_DWORD)v46 == v56;
              v46 = v56;
              if ( !v55 )
                continue;
            }
            KeYieldProcessorEx(&v100, v46);
            v46 = *(unsigned int *)(v42 + 72);
          }
          while ( (v46 & 0xBFFFFFFF) != 0x80000000 );
        }
        v13 = v93;
      }
      ++*(_QWORD *)(v42 + 32);
      if ( v33 )
        ++*(_DWORD *)(v33 + 104);
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
      Flink = (__int64)v47->SchedulerAssist;
      if ( Flink )
      {
        if ( v47->NestingLevel <= 1u )
        {
          v73 = *(_DWORD *)(Flink + 24) - 1;
          *(_DWORD *)(Flink + 24) = v73;
          if ( !v73 )
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
          v74 = KeGetCurrentIrql();
          if ( v74 <= 0xFu && CurrentIrql <= 0xFu && v74 >= 2u )
          {
            v75 = KeGetCurrentPrcb();
            Flink = -1LL << (CurrentIrql + 1);
            v76 = v75->SchedulerAssist;
            v77 = ~(unsigned __int16)Flink;
            v55 = (v77 & v76[5]) == 0;
            v76[5] &= v77;
            if ( v55 )
              KiRemoveSystemWorkPriorityKick(v75);
            v19 = 0LL;
          }
        }
      }
      __writecr8(CurrentIrql);
      v48 = v103;
      *((_QWORD *)Src + ((__int64)(v26 - v112) >> 3) + 6) = v103;
      if ( *(_QWORD *)(v13 + 160) )
      {
        v15 = v92;
      }
      else
      {
        MiObtainProtoReference(v92, 0LL);
        v15 = v92;
        v19 = 0LL;
        *(_QWORD *)(v13 + 160) = v92;
      }
      if ( v97 == 1 )
      {
        MiUnlockProtoPoolPage(v15, (unsigned __int8)v120);
        v92 = 0LL;
        MiZeroPhysicalPage(v48);
        v5 = a1;
        goto LABEL_88;
      }
      v5 = a1;
      v8 = v95;
LABEL_52:
      v18 = v104 + 8;
      v104 = v18;
      if ( (unsigned __int64)v18 < v115 )
      {
        v17 = 0xFFFFFA8000000000uLL;
        continue;
      }
      break;
    }
    v24 = v121;
LABEL_63:
    if ( v15 )
    {
      MiUnlockProtoPoolPage(v15, (unsigned __int8)v120);
      v92 = 0LL;
    }
LABEL_65:
    if ( !v24 )
    {
      v57 = *(_QWORD *)v13;
      v58 = ListEntry;
      v13 = v57;
      v93 = v57;
      v59 = (PSLIST_ENTRY *)*((_QWORD *)&ListEntry->Next + 1);
      if ( *(PSLIST_ENTRY *)(v57 + 8) == ListEntry && *v59 == ListEntry )
      {
        *v59 = (PSLIST_ENTRY)v57;
        *(_QWORD *)(v57 + 8) = v59;
        --*(_DWORD *)(v5 + 108);
        MiFreeInPageSupportBlock(v58);
        goto LABEL_70;
      }
LABEL_182:
      __fastfail(3u);
    }
    v49 = Src;
    v50 = MiReduceMdl(Src, Flink);
    if ( v50 )
    {
      *(_QWORD *)(v13 + 96) += v50 << 12;
      v60 = 48LL * v49[6] - 0x58000000000LL;
      v61 = *(_QWORD *)(v60 + 8) | 0x8000000000000000uLL;
      *(_QWORD *)(v13 + 248) = v60;
      *(_QWORD *)(v13 + 240) = v61;
    }
    if ( v49 != (_QWORD *)(v13 + 272) && *((_DWORD *)v49 + 10) <= 0x10000u )
    {
      memmove((void *)(v13 + 272), v49, *((__int16 *)v49 + 4));
      *v49 = v109;
      *(_QWORD *)(v13 + 256) = v13 + 272;
      v109 = v49;
    }
    v13 = *(_QWORD *)v13;
    v93 = v13;
LABEL_70:
    if ( v13 != v5 + 120 )
    {
      v15 = v92;
      v8 = v95;
      continue;
    }
    break;
  }
  v3 = (_SLIST_ENTRY *)v94;
  v6 = v109;
LABEL_72:
  MiFreeReadListPages(v5);
  if ( v6 )
  {
    do
    {
      v62 = (_QWORD *)*v6;
      ExFreePoolWithTag(v6, 0);
      v6 = v62;
    }
    while ( v62 );
  }
  if ( v3 )
    MiFreeInPageSupportBlock(v3);
  return 0LL;
}
