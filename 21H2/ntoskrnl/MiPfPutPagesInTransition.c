/*
 * XREFs of MiPfPutPagesInTransition @ 0x1402FB620
 * Callers:
 *     MmPrefetchPagesEx @ 0x14061C354 (MmPrefetchPagesEx.c)
 *     MmPrefetchForCacheManager @ 0x1406E898C (MmPrefetchForCacheManager.c)
 *     MiPrefetchControlArea @ 0x140715998 (MiPrefetchControlArea.c)
 * Callees:
 *     MmAccessFault @ 0x14020D090 (MmAccessFault.c)
 *     MiGetPage @ 0x140213610 (MiGetPage.c)
 *     MiObtainFaultCharges @ 0x14021BA90 (MiObtainFaultCharges.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402315C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiPfnZeroingNeeded @ 0x140238B60 (MiPfnZeroingNeeded.c)
 *     MiUnlockProtoPoolPage @ 0x1402397F0 (MiUnlockProtoPoolPage.c)
 *     MiInvalidPteConforms @ 0x14023B540 (MiInvalidPteConforms.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x14023C0AC (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiGetInPageSupportBlock @ 0x14023EF24 (MiGetInPageSupportBlock.c)
 *     MiInitializePageColorBase @ 0x14023F280 (MiInitializePageColorBase.c)
 *     PsGetIoPriorityThread @ 0x140242810 (PsGetIoPriorityThread.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiUpdatePfnPriority @ 0x140270DA4 (MiUpdatePfnPriority.c)
 *     MiGetPagingFileOffset @ 0x1402712A0 (MiGetPagingFileOffset.c)
 *     MiPrefetchNormally @ 0x1402718D8 (MiPrefetchNormally.c)
 *     MiIsPteInStore @ 0x14028BE40 (MiIsPteInStore.c)
 *     MiReturnFaultCharges @ 0x14028E1E4 (MiReturnFaultCharges.c)
 *     MiZeroPhysicalPage @ 0x1402E6380 (MiZeroPhysicalPage.c)
 *     MiGetSlabPage @ 0x1402E803C (MiGetSlabPage.c)
 *     MiGetSlabAllocator @ 0x1402E824C (MiGetSlabAllocator.c)
 *     MiInitializeReadInProgressPfn @ 0x1402FBF30 (MiInitializeReadInProgressPfn.c)
 *     MiReduceMdl @ 0x1402FC75C (MiReduceMdl.c)
 *     MiFreeInPageSupportBlock @ 0x1402FC8DC (MiFreeInPageSupportBlock.c)
 *     MiSetInPagePriority @ 0x1402FCA78 (MiSetInPagePriority.c)
 *     MiReturnCommit @ 0x1403182A0 (MiReturnCommit.c)
 *     MiObtainProtoReference @ 0x14031A00C (MiObtainProtoReference.c)
 *     MiLockProtoPoolPage @ 0x14031A100 (MiLockProtoPoolPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     MiRefillPurgedExtents @ 0x140542050 (MiRefillPurgedExtents.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B5BA8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B5D8C (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiFreeReadListPages @ 0x1406E8BA4 (MiFreeReadListPages.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiPfPutPagesInTransition(__int64 a1, _QWORD *a2, int a3)
{
  struct _SLIST_ENTRY *v3; // rdi
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
  int v54; // r9d
  unsigned __int64 v55; // r9
  _DWORD *v56; // rcx
  __int64 v57; // rdx
  bool v58; // zf
  unsigned __int32 v59; // eax
  __int64 v60; // rax
  struct _SLIST_ENTRY *v61; // rcx
  PSLIST_ENTRY *v62; // rdx
  __int64 v63; // rcx
  unsigned __int64 v64; // rax
  _QWORD *v65; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 SlabAllocator; // rax
  ULONG_PTR *v70; // rcx
  unsigned int v71; // r10d
  signed __int32 v72; // ecx
  __int64 Page; // rax
  __int64 v74; // r8
  int v75; // eax
  int v76; // eax
  int v77; // eax
  unsigned __int8 v78; // al
  struct _KPRCB *v79; // r10
  _DWORD *v80; // r9
  int v81; // eax
  unsigned int PagingFileOffset; // eax
  __int64 v83; // r15
  int IsPteInStore; // r14d
  __int64 v85; // rbx
  bool v86; // cc
  __int64 v87; // r13
  ULONG_PTR v88; // rsi
  PSLIST_ENTRY *v89; // r8
  PSLIST_ENTRY v90; // rax
  unsigned __int8 v91; // dl
  unsigned __int64 v92; // r9
  int v93; // eax
  int Next; // eax
  PSLIST_ENTRY v95; // rax
  __int64 v96; // rdx
  __int64 v97; // [rsp+30h] [rbp-A9h]
  __int64 v98; // [rsp+38h] [rbp-A1h]
  PSLIST_ENTRY v99; // [rsp+40h] [rbp-99h]
  __int64 v100; // [rsp+48h] [rbp-91h]
  int v101; // [rsp+50h] [rbp-89h]
  int v102; // [rsp+54h] [rbp-85h]
  unsigned int v103; // [rsp+58h] [rbp-81h]
  __int64 v104; // [rsp+60h] [rbp-79h]
  int v105; // [rsp+68h] [rbp-71h] BYREF
  int v106; // [rsp+6Ch] [rbp-6Dh]
  unsigned int v107; // [rsp+70h] [rbp-69h]
  __int64 v108; // [rsp+78h] [rbp-61h] BYREF
  _BYTE *v109; // [rsp+80h] [rbp-59h]
  unsigned __int64 v110; // [rsp+88h] [rbp-51h]
  _QWORD *v111; // [rsp+90h] [rbp-49h]
  int v112; // [rsp+98h] [rbp-41h] BYREF
  unsigned int v113; // [rsp+9Ch] [rbp-3Dh]
  _QWORD *v114; // [rsp+A0h] [rbp-39h]
  void *Src; // [rsp+A8h] [rbp-31h]
  __int128 v116; // [rsp+B0h] [rbp-29h] BYREF
  unsigned __int64 v117; // [rsp+C0h] [rbp-19h]
  __int64 v118; // [rsp+C8h] [rbp-11h] BYREF
  PSLIST_ENTRY *v119; // [rsp+D0h] [rbp-9h]
  unsigned __int64 v120; // [rsp+D8h] [rbp-1h]
  PSLIST_ENTRY ListEntry; // [rsp+E0h] [rbp+7h]
  void *retaddr; // [rsp+138h] [rbp+5Fh]
  int v125; // [rsp+150h] [rbp+77h] BYREF
  int v126; // [rsp+158h] [rbp+7Fh]

  v125 = a3;
  v3 = 0LL;
  v4 = *(_DWORD *)(a1 + 80);
  v5 = a1;
  v107 = *(_DWORD *)(a1 + 84);
  v6 = 0LL;
  v7 = *(_QWORD *)(a1 + 8);
  v110 = 0LL;
  v8 = 0LL;
  v116 = 0LL;
  v9 = *(_WORD *)(v7 + 60) & 0x3FF;
  v103 = v4;
  v114 = 0LL;
  v97 = 0LL;
  v104 = *(_QWORD *)(qword_140C4E648 + 8 * v9);
  v100 = 0LL;
  v113 = *(_DWORD *)(v5 + 88) + 1;
  LOBYTE(v125) = 17;
  IoPriorityThread = PsGetIoPriorityThread((__int64)KeGetCurrentThread());
  v12 = *(_DWORD *)(v11 + 56);
  v13 = *(_QWORD *)(v5 + 120);
  v106 = IoPriorityThread;
  v119 = (PSLIST_ENTRY *)(v5 + 120);
  v98 = v13;
  v101 = v4 & 7 | 0x18;
  v99 = 0LL;
  MiInitializePageColorBase(v14 + 1664, (v12 >> 20) & 0x3F, (__int64)&v116);
  if ( v13 == v5 + 120 )
    goto LABEL_72;
  v16 = v4 & 7 | 0x18;
  while ( 2 )
  {
    v17 = 0xFFFFFA8000000000uLL;
    ListEntry = (PSLIST_ENTRY)v13;
    if ( v106 < 2 )
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
    v109 = v18;
    v120 = v20;
    *(_QWORD *)(v13 + 240) = *v18 & 0xFFFFFFFFFFFFFFFCuLL;
    v117 = *v18 & 0xFFFFFFFFFFFFFFFCuLL;
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
        *v21++ = qword_140C4ED78;
      }
      while ( v22 < v23 );
    }
    v24 = 0;
    v126 = 0;
    if ( !v99 )
    {
      v99 = MiGetInPageSupportBlock(0);
      if ( v99 )
      {
        v25 = v107;
        *((_QWORD *)&v99[15].Next + 1) = 0LL;
        MiSetInPagePriority(v99, v25, v103);
      }
      v15 = v97;
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
        MiUnlockProtoPoolPage(v15, v125);
      }
      v8 = ((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v100 = v8;
      while ( 1 )
      {
        v53 = MiLockProtoPoolPage(v26, &v125);
        v19 = 0LL;
        v97 = v53;
        if ( v53 )
          break;
        MmAccessFault(2uLL, v26, 0, 0LL);
      }
      v16 = v101;
      v13 = v98;
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
          v57 = 6 * ((v28 >> 12) & 0xFFFFFFFFFLL);
          if ( (*(_QWORD *)(48 * ((v28 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0 )
          {
            v29 = v17 + 48 * ((v28 >> 12) & 0xFFFFFFFFFLL);
            v112 = v19;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) )
            {
              do
              {
                do
                  KeYieldProcessorEx(&v112, v57, v23, v19);
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
          if ( qword_140C4DF40 && (v27 & 0x10) == 0 )
            v28 = v27 & ~qword_140C4DF40;
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
          v67 = *((_QWORD *)&Flink->Flink + ((v26 >> 3) & 0x1FF));
          v68 = v30 | 0x20;
          if ( (v67 & 0x20) == 0 )
            v68 = *(_QWORD *)v26;
          v30 = v68;
          if ( (v67 & 0x42) != 0 )
            v30 = v68 | 0x42;
        }
      }
      v118 = v30;
      if ( v29 )
      {
        MiUpdatePfnPriority(v29);
        _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v15 = v97;
        v19 = 0LL;
        goto LABEL_52;
      }
      if ( (v30 & 0x400) == 0 )
      {
        if ( !IS_PTE_NOT_DEMAND_ZERO(v30) || !v99 )
        {
LABEL_90:
          v15 = v97;
          goto LABEL_52;
        }
        v35 = 2;
        v32 = v19;
        v34 = 1LL;
        goto LABEL_27;
      }
      v31 = v30;
      if ( qword_140C4DF40 && (v30 & 0x10) == 0 )
        v31 = v30 & ~qword_140C4DF40;
      v23 = *(_QWORD *)(v5 + 8);
      v32 = v31 >> 16;
      v33 = *(_DWORD *)(v23 + 56);
      if ( (v33 & 0x40000000) != 0 )
      {
        MiUnlockProtoPoolPage(v97, v125);
        v97 = 0LL;
        if ( (int)MiRefillPurgedExtents(v32) < 0 )
        {
          v24 = v126;
          goto LABEL_65;
        }
LABEL_88:
        v19 = 0LL;
        goto LABEL_89;
      }
      if ( (v33 & 0x20) != 0 && (*(_QWORD *)(*(_QWORD *)(v23 + 96) + 48LL) & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      {
LABEL_89:
        v8 = v100;
        goto LABEL_90;
      }
      v34 = 1LL;
      v35 = 1;
      v36 = *(_DWORD *)(*(_QWORD *)v32 + 56LL);
      if ( (v36 & 0x20) == 0
        || (v36 & 0x40000000) != 0
        || (*(_DWORD *)(*(_QWORD *)v32 + 92LL) & 0xC0000) == 0
        || (*(_DWORD *)(v104 + 4) & 8) == 0
        || (*(_BYTE *)(v32 + 34) & 2) != 0 && (*(_BYTE *)(v32 + 32) & 0xA) == 8 )
      {
LABEL_27:
        v37 = 40LL;
        goto LABEL_28;
      }
      SlabAllocator = MiGetSlabAllocator(v104, 0, (*(unsigned __int16 *)(v32 + 32) >> 1) & 0x1F);
      LODWORD(v19) = 0;
      v34 = 1LL;
      v37 = 8LL * *(int *)(SlabAllocator + 52) + 48;
LABEL_28:
      v38 = *(_QWORD **)(v37 + v5);
      v39 = (_QWORD *)(v37 + v5);
      v111 = v38;
      if ( v38 )
      {
        *v39 = *v38;
        v40 = v109;
        v108 = (__int64)(v38 + 0xB000000000LL) / 48;
        goto LABEL_30;
      }
      if ( !MiPrefetchNormally(v104, v113) )
        goto LABEL_181;
      if ( !a2 )
        goto LABEL_140;
      if ( !*a2 )
        goto LABEL_181;
      --*a2;
LABEL_140:
      if ( !(unsigned int)MiObtainFaultCharges(v70, v71, v71) )
        goto LABEL_181;
      v72 = _InterlockedExchangeAdd((volatile signed __int32 *)v116, 1u);
      if ( v39 == (_QWORD *)(v5 + 40) )
      {
        v40 = v109;
        v74 = 770LL;
        if ( (*v109 & 1) == 0 )
          v74 = 512LL;
        Page = MiGetPage(v104, DWORD2(v116) & (unsigned int)v72 | HIDWORD(v116), v74);
      }
      else
      {
        Page = MiGetSlabPage(v104, (*(unsigned __int16 *)(v32 + 32) >> 1) & 0x1F, 0, 0LL, 0);
        v40 = v109;
      }
      v108 = Page;
      if ( Page == -1 )
      {
        MiReturnFaultCharges(v104, 1uLL, 1);
LABEL_181:
        v15 = v97;
        v13 = v98;
        break;
      }
      v38 = (_QWORD *)(48 * Page - 0x58000000000LL);
      LODWORD(v19) = 0;
      v111 = v38;
      v34 = 1LL;
LABEL_30:
      v102 = v19;
      if ( (*v40 & 1) != 0 )
      {
        if ( MiPfnZeroingNeeded((__int64)v38, 1) )
          v54 = v34;
        v102 = v54;
      }
      if ( v35 != 1 )
      {
        MiReturnCommit(v104, v34);
        MiInitializeReadInProgressPfn(-1, (unsigned int)&v108, 1, v26, (__int64)v99, v16);
        PagingFileOffset = MiGetPagingFileOffset((__int64)&v118);
        v83 = PagingFileOffset;
        LODWORD(v110) = PagingFileOffset;
        IsPteInStore = MiIsPteInStore(v104, v30);
        v85 = (unsigned __int16)v30 >> 12;
        v86 = v106 < 2;
        v87 = *(_QWORD *)(v104 + 8 * v85 + 6944);
        v99[16].Next = v99 + 17;
        if ( v86 )
          LODWORD(v99[12].Next) |= 0x80u;
        v88 = v108;
        v99[17].Next = 0LL;
        v99[19].Next = 0LL;
        *((_DWORD *)&v99[17].Next + 2) = 56;
        *((_QWORD *)&v99[19].Next + 1) = 4096LL;
        *((_WORD *)&v99[17].Next + 5) |= 0x4042u;
        v99[20].Next = (_SLIST_ENTRY *)v88;
        MiObtainProtoReference(v97, 0LL);
        v89 = v119;
        v99[10].Next = (_SLIST_ENTRY *)v97;
        v90 = *v89;
        if ( *((PSLIST_ENTRY **)&(*v89)->Next + 1) == v89 )
        {
          v99->Next = v90;
          *((_QWORD *)&v99->Next + 1) = v89;
          *((_QWORD *)&v90->Next + 1) = v99;
          *v89 = v99;
          v91 = v125;
          ++*(_DWORD *)(a1 + 108);
          MiUnlockProtoPoolPage(v97, v91);
          v97 = 0LL;
          if ( v102 == 1 )
            MiZeroPhysicalPage(v88, 1, *((unsigned __int8 *)v111 + 34) >> 6, v92);
          v99[14].Next = 0LL;
          if ( IsPteInStore )
          {
            Next = (int)v99[12].Next;
            v99[6].Next = (_SLIST_ENTRY *)(v83 | (v85 << 60));
            v93 = Next | 0x100;
          }
          else
          {
            v110 = (unsigned __int64)(unsigned int)v110 << 12;
            v99[6].Next = (_SLIST_ENTRY *)v110;
            v93 = (int)v99[12].Next;
          }
          *((_QWORD *)&v99[12].Next + 1) = v87;
          LODWORD(v99[12].Next) = v93 | 0x200000;
          *((_QWORD *)&v99[15].Next + 1) = v111;
          v99[15].Next = (_SLIST_ENTRY *)v26;
          v95 = MiGetInPageSupportBlock(0);
          v99 = v95;
          if ( v95 )
          {
            v96 = v107;
            *((_QWORD *)&v95[15].Next + 1) = 0LL;
            MiSetInPagePriority(v95, v96, v103);
          }
          v13 = v98;
          v15 = 0LL;
          v5 = a1;
          v19 = 0LL;
          v8 = v100;
          goto LABEL_52;
        }
        goto LABEL_182;
      }
      v13 = v98;
      if ( !*(_QWORD *)(v98 + 248) )
        *(_QWORD *)(v98 + 248) = v38;
      ++v126;
      MiInitializeReadInProgressPfn(-1, (unsigned int)&v108, v34, v26, v98, v16);
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
        v105 = 0;
        v45 = CurrentPrcb->SchedulerAssist;
        if ( v45 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v75 = v45[6];
            v45[6] = v75 + 1;
            if ( v75 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( _interlockedbittestandset((volatile signed __int32 *)(v42 + 72), 0x1Fu) )
        {
          v56 = CurrentPrcb->SchedulerAssist;
          if ( v56 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v76 = v56[6] - 1;
              v56[6] = v76;
              if ( !v76 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          v105 = ExpWaitForSpinLockExclusiveAndAcquire(v42 + 72, CurrentIrql, v23, SchedulerAssist);
        }
        v46 = *(unsigned int *)(v42 + 72);
        if ( (*(_DWORD *)(v42 + 72) & 0xBFFFFFFF) != 0x80000000 )
        {
          do
          {
            if ( (v46 & 0x40000000) == 0 )
            {
              v59 = _InterlockedCompareExchange((volatile signed __int32 *)(v42 + 72), v46 | 0x40000000, v46);
              v58 = (_DWORD)v46 == v59;
              v46 = v59;
              if ( !v58 )
                continue;
            }
            KeYieldProcessorEx(&v105, v46, v23, (__int64)SchedulerAssist);
            v46 = *(unsigned int *)(v42 + 72);
          }
          while ( (v46 & 0xBFFFFFFF) != 0x80000000 );
        }
        v13 = v98;
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
          v77 = v48[6] - 1;
          v48[6] = v77;
          if ( !v77 )
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
          v78 = KeGetCurrentIrql();
          if ( v78 <= 0xFu && CurrentIrql <= 0xFu && v78 >= 2u )
          {
            v79 = KeGetCurrentPrcb();
            v80 = v79->SchedulerAssist;
            v81 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v58 = (v81 & v80[5]) == 0;
            v23 = (unsigned int)v81 & v80[5];
            v80[5] = v23;
            if ( v58 )
              KiRemoveSystemWorkPriorityKick(v79);
            v19 = 0LL;
          }
        }
      }
      __writecr8(CurrentIrql);
      v49 = v108;
      *((_QWORD *)Src + ((__int64)(v26 - v117) >> 3) + 6) = v108;
      if ( *(_QWORD *)(v13 + 160) )
      {
        v15 = v97;
      }
      else
      {
        MiObtainProtoReference(v97, 0LL);
        v15 = v97;
        v19 = 0LL;
        *(_QWORD *)(v13 + 160) = v97;
      }
      if ( v102 == 1 )
      {
        MiUnlockProtoPoolPage(v15, v125);
        v97 = 0LL;
        MiZeroPhysicalPage(v49, 1, *((unsigned __int8 *)v111 + 34) >> 6, v55);
        v5 = a1;
        goto LABEL_88;
      }
      v5 = a1;
      v8 = v100;
LABEL_52:
      v18 = v109 + 8;
      v109 = v18;
      if ( (unsigned __int64)v18 < v120 )
      {
        v17 = 0xFFFFFA8000000000uLL;
        continue;
      }
      break;
    }
    v24 = v126;
LABEL_63:
    if ( v15 )
    {
      MiUnlockProtoPoolPage(v15, v125);
      v97 = 0LL;
    }
LABEL_65:
    if ( !v24 )
    {
      v60 = *(_QWORD *)v13;
      v61 = ListEntry;
      v13 = v60;
      v98 = v60;
      v62 = (PSLIST_ENTRY *)*((_QWORD *)&ListEntry->Next + 1);
      if ( *(PSLIST_ENTRY *)(v60 + 8) == ListEntry && *v62 == ListEntry )
      {
        *v62 = (PSLIST_ENTRY)v60;
        *(_QWORD *)(v60 + 8) = v62;
        --*(_DWORD *)(v5 + 108);
        MiFreeInPageSupportBlock(v61);
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
      v63 = 48LL * v50[6] - 0x58000000000LL;
      v64 = *(_QWORD *)(v63 + 8) | 0x8000000000000000uLL;
      *(_QWORD *)(v13 + 248) = v63;
      *(_QWORD *)(v13 + 240) = v64;
    }
    if ( v50 != (_QWORD *)(v13 + 272) && *((_DWORD *)v50 + 10) <= 0x10000u )
    {
      memmove((void *)(v13 + 272), v50, *((__int16 *)v50 + 4));
      *v50 = v114;
      *(_QWORD *)(v13 + 256) = v13 + 272;
      v114 = v50;
    }
    v13 = *(_QWORD *)v13;
    v98 = v13;
LABEL_70:
    if ( v13 != v5 + 120 )
    {
      v15 = v97;
      v8 = v100;
      continue;
    }
    break;
  }
  v3 = v99;
  v6 = v114;
LABEL_72:
  MiFreeReadListPages(v5);
  if ( v6 )
  {
    do
    {
      v65 = (_QWORD *)*v6;
      ExFreePoolWithTag(v6, 0);
      v6 = v65;
    }
    while ( v65 );
  }
  if ( v3 )
    MiFreeInPageSupportBlock(v3);
  return 0LL;
}
