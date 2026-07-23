/*
 * XREFs of MiPfPutPagesInTransition @ 0x1402BA1E0
 * Callers:
 *     MmPrefetchPagesEx @ 0x14063ECA8 (MmPrefetchPagesEx.c)
 *     MmPrefetchForCacheManager @ 0x14063EE9C (MmPrefetchForCacheManager.c)
 *     MiPrefetchControlArea @ 0x1406CA620 (MiPrefetchControlArea.c)
 * Callees:
 *     MmAccessFault @ 0x14020C560 (MmAccessFault.c)
 *     MiGetPage @ 0x140212FA0 (MiGetPage.c)
 *     MiObtainFaultCharges @ 0x14021B070 (MiObtainFaultCharges.c)
 *     MiGetInPageSupportBlock @ 0x140224CB4 (MiGetInPageSupportBlock.c)
 *     PsGetIoPriorityThread @ 0x140226200 (PsGetIoPriorityThread.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x14022956C (IS_PTE_NOT_DEMAND_ZERO.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14023C7F0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiReturnCommit @ 0x14027D3E0 (MiReturnCommit.c)
 *     MiPrefetchNormally @ 0x140280360 (MiPrefetchNormally.c)
 *     MiFreeInPageSupportBlock @ 0x140282584 (MiFreeInPageSupportBlock.c)
 *     MiObtainProtoReference @ 0x140282684 (MiObtainProtoReference.c)
 *     MiLockProtoPoolPage @ 0x140282DC0 (MiLockProtoPoolPage.c)
 *     MiInvalidPteConforms @ 0x1402838C0 (MiInvalidPteConforms.c)
 *     MiUnlockProtoPoolPage @ 0x1402839B0 (MiUnlockProtoPoolPage.c)
 *     MiUpdatePfnPriority @ 0x1402A91E0 (MiUpdatePfnPriority.c)
 *     MiInitializePageColorBase @ 0x1402B7AA0 (MiInitializePageColorBase.c)
 *     MiInitializeReadInProgressPfn @ 0x1402BAAF0 (MiInitializeReadInProgressPfn.c)
 *     MiReduceMdl @ 0x1402BB31C (MiReduceMdl.c)
 *     MiSetInPagePriority @ 0x1402BB538 (MiSetInPagePriority.c)
 *     MiGetSlabPage @ 0x140326128 (MiGetSlabPage.c)
 *     MiGetSlabAllocator @ 0x140326338 (MiGetSlabAllocator.c)
 *     MiReturnFaultCharges @ 0x140340698 (MiReturnFaultCharges.c)
 *     MiIsPteInStore @ 0x1403441B4 (MiIsPteInStore.c)
 *     MiGetPagingFileOffset @ 0x140344E64 (MiGetPagingFileOffset.c)
 *     MiPfnZeroingNeeded @ 0x140349390 (MiPfnZeroingNeeded.c)
 *     MiZeroPhysicalPage @ 0x1403510C0 (MiZeroPhysicalPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     MiRefillPurgedExtents @ 0x14053C530 (MiRefillPurgedExtents.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405AFF18 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B00F4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiFreeReadListPages @ 0x14063E4FC (MiFreeReadListPages.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
  ULONG_PTR *v65; // rcx
  unsigned int v66; // r10d
  signed __int32 v67; // ecx
  __int64 Page; // rax
  __int64 v69; // r8
  int v70; // eax
  int v71; // eax
  int v72; // eax
  unsigned __int8 v73; // al
  struct _KPRCB *v74; // r10
  _DWORD *v75; // r9
  int v76; // eax
  unsigned int PagingFileOffset; // eax
  __int64 v78; // r15
  __int64 v79; // r8
  __int64 v80; // r9
  int IsPteInStore; // r14d
  __int64 v82; // rbx
  bool v83; // cc
  __int64 v84; // r13
  ULONG_PTR v85; // rsi
  __int64 v86; // r9
  __int64 v87; // r8
  __int64 v88; // rax
  __int64 v89; // rdx
  int v90; // eax
  int Next; // eax
  PSLIST_ENTRY v92; // rax
  __int64 v93; // rdx
  __int64 v94; // [rsp+30h] [rbp-A9h]
  __int64 v95; // [rsp+38h] [rbp-A1h]
  PSLIST_ENTRY v96; // [rsp+40h] [rbp-99h]
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
  __int64 v116; // [rsp+D0h] [rbp-9h]
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
  v101 = *(_QWORD *)(qword_140C4E588 + 8 * v9);
  v97 = 0LL;
  v110 = *(_DWORD *)(v5 + 88) + 1;
  LOBYTE(v122) = 17;
  IoPriorityThread = PsGetIoPriorityThread((__int64)KeGetCurrentThread());
  v12 = *(_DWORD *)(v11 + 56);
  v13 = *(_QWORD *)(v5 + 120);
  v103 = IoPriorityThread;
  v116 = v5 + 120;
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
        *(_QWORD *)Flink = qword_140C4ECB8;
        Flink += 8LL;
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
        *((_QWORD *)&v96[15].Next + 1) = 0LL;
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
        Flink = ((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v8 == Flink )
          goto LABEL_15;
        MiUnlockProtoPoolPage(v15, (unsigned __int8)v122, v23, v19);
      }
      v8 = ((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v97 = v8;
      while ( 1 )
      {
        v52 = MiLockProtoPoolPage(v26, (__int64)&v122);
        v19 = 0LL;
        v94 = v52;
        if ( v52 )
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
          Flink = 6 * ((v28 >> 12) & 0xFFFFFFFFFLL);
          if ( (*(_QWORD *)(48 * ((v28 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0 )
          {
            v29 = v17 + 48 * ((v28 >> 12) & 0xFFFFFFFFFLL);
            v109 = v19;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) )
            {
              do
              {
                do
                  KeYieldProcessorEx(&v109, Flink, v23, v19);
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
          if ( qword_140C4DE80 && (v27 & 0x10) == 0 )
            v28 = v27 & ~qword_140C4DE80;
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
      if ( qword_140C4DE80 && (v30 & 0x10) == 0 )
        v31 = v30 & ~qword_140C4DE80;
      v23 = *(_QWORD *)(v5 + 8);
      v32 = v31 >> 16;
      v33 = *(_DWORD *)(v23 + 56);
      if ( (v33 & 0x40000000) != 0 )
      {
        MiUnlockProtoPoolPage(v94, (unsigned __int8)v122, v23, v19);
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
      SlabAllocator = MiGetSlabAllocator(v101, 0LL, (*(unsigned __int16 *)(v32 + 32) >> 1) & 0x1F);
      LODWORD(v19) = 0;
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
      Flink = (__int64)a2;
      if ( !a2 )
        goto LABEL_140;
      if ( !*a2 )
        goto LABEL_181;
      --*a2;
LABEL_140:
      if ( !(unsigned int)MiObtainFaultCharges(v65, v66, v66) )
        goto LABEL_181;
      v67 = _InterlockedExchangeAdd((volatile signed __int32 *)v113, 1u);
      if ( v39 == (_QWORD *)(v5 + 40) )
      {
        v40 = v106;
        v69 = 770LL;
        if ( (*v106 & 1) == 0 )
          v69 = 512LL;
        Page = MiGetPage(v101, DWORD2(v113) & (unsigned int)v67 | HIDWORD(v113), v69);
      }
      else
      {
        Page = MiGetSlabPage(v101, (*(unsigned __int16 *)(v32 + 32) >> 1) & 0x1F, 0, 0, 0);
        v40 = v106;
      }
      v105 = Page;
      if ( Page == -1 )
      {
        MiReturnFaultCharges(v101, 1LL, 1LL);
LABEL_181:
        v15 = v94;
        v13 = v95;
        break;
      }
      v38 = (_QWORD *)(48 * Page - 0x58000000000LL);
      LODWORD(v19) = 0;
      v108 = v38;
      v34 = 1LL;
LABEL_30:
      v99 = v19;
      if ( (*v40 & 1) != 0 )
      {
        if ( (unsigned int)MiPfnZeroingNeeded(v38, 1LL) )
          v53 = v34;
        v99 = v53;
      }
      if ( v35 != 1 )
      {
        MiReturnCommit(v101, v34);
        MiInitializeReadInProgressPfn(-1, (unsigned int)&v105, 1, v26, (__int64)v96, v16);
        PagingFileOffset = MiGetPagingFileOffset(&v115);
        v78 = PagingFileOffset;
        LODWORD(v107) = PagingFileOffset;
        IsPteInStore = MiIsPteInStore(v101, v30);
        v82 = (unsigned __int16)v30 >> 12;
        v83 = v103 < 2;
        v84 = *(_QWORD *)(v101 + 8 * v82 + 6944);
        v96[16].Next = v96 + 17;
        if ( v83 )
          LODWORD(v96[12].Next) |= 0x80u;
        v85 = v105;
        v96[17].Next = 0LL;
        v96[19].Next = 0LL;
        *((_DWORD *)&v96[17].Next + 2) = 56;
        *((_QWORD *)&v96[19].Next + 1) = 4096LL;
        *((_WORD *)&v96[17].Next + 5) |= 0x4042u;
        v96[20].Next = (_SLIST_ENTRY *)v85;
        MiObtainProtoReference(v94, 0LL, v79, v80);
        v87 = v116;
        v96[10].Next = (_SLIST_ENTRY *)v94;
        v88 = *(_QWORD *)v87;
        if ( *(_QWORD *)(*(_QWORD *)v87 + 8LL) == v87 )
        {
          v96->Next = (_SLIST_ENTRY *)v88;
          *((_QWORD *)&v96->Next + 1) = v87;
          *(_QWORD *)(v88 + 8) = v96;
          *(_QWORD *)v87 = v96;
          v89 = (unsigned __int8)v122;
          ++*(_DWORD *)(a1 + 108);
          MiUnlockProtoPoolPage(v94, v89, v87, v86);
          v94 = 0LL;
          if ( v99 == 1 )
            MiZeroPhysicalPage(v85);
          v96[14].Next = 0LL;
          if ( IsPteInStore )
          {
            Next = (int)v96[12].Next;
            v96[6].Next = (_SLIST_ENTRY *)(v78 | (v82 << 60));
            v90 = Next | 0x100;
          }
          else
          {
            v107 = (unsigned __int64)(unsigned int)v107 << 12;
            v96[6].Next = (_SLIST_ENTRY *)v107;
            v90 = (int)v96[12].Next;
          }
          *((_QWORD *)&v96[12].Next + 1) = v84;
          LODWORD(v96[12].Next) = v90 | 0x200000;
          *((_QWORD *)&v96[15].Next + 1) = v108;
          v96[15].Next = (_SLIST_ENTRY *)v26;
          v92 = MiGetInPageSupportBlock(0);
          v96 = v92;
          if ( v92 )
          {
            v93 = v104;
            *((_QWORD *)&v92[15].Next + 1) = 0LL;
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
            v70 = v45[6];
            v45[6] = v70 + 1;
            if ( v70 == -1 )
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
              v71 = v54[6] - 1;
              v54[6] = v71;
              if ( !v71 )
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
              v56 = _InterlockedCompareExchange((volatile signed __int32 *)(v42 + 72), v46 | 0x40000000, v46);
              v55 = (_DWORD)v46 == v56;
              v46 = v56;
              if ( !v55 )
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
      Flink = (__int64)v47->SchedulerAssist;
      if ( Flink )
      {
        if ( v47->NestingLevel <= 1u )
        {
          v72 = *(_DWORD *)(Flink + 24) - 1;
          *(_DWORD *)(Flink + 24) = v72;
          if ( !v72 )
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
          v73 = KeGetCurrentIrql();
          if ( v73 <= 0xFu && CurrentIrql <= 0xFu && v73 >= 2u )
          {
            v74 = KeGetCurrentPrcb();
            Flink = -1LL << (CurrentIrql + 1);
            v75 = v74->SchedulerAssist;
            v76 = ~(unsigned __int16)Flink;
            v55 = (v76 & v75[5]) == 0;
            v23 = (unsigned int)v76 & v75[5];
            v75[5] = v23;
            if ( v55 )
              KiRemoveSystemWorkPriorityKick(v74);
            v19 = 0LL;
          }
        }
      }
      __writecr8(CurrentIrql);
      v48 = v105;
      *((_QWORD *)Src + ((__int64)(v26 - v114) >> 3) + 6) = v105;
      if ( *(_QWORD *)(v13 + 160) )
      {
        v15 = v94;
      }
      else
      {
        MiObtainProtoReference(v94, 0LL, v23, 0LL);
        v15 = v94;
        v19 = 0LL;
        *(_QWORD *)(v13 + 160) = v94;
      }
      if ( v99 == 1 )
      {
        MiUnlockProtoPoolPage(v15, (unsigned __int8)v122, v23, 0LL);
        v94 = 0LL;
        MiZeroPhysicalPage(v48);
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
      MiUnlockProtoPoolPage(v15, (unsigned __int8)v122, v23, v19);
      v94 = 0LL;
    }
LABEL_65:
    if ( !v24 )
    {
      v57 = *(_QWORD *)v13;
      v58 = ListEntry;
      v13 = v57;
      v95 = v57;
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
      *v49 = v111;
      *(_QWORD *)(v13 + 256) = v13 + 272;
      v111 = v49;
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
  v3 = v96;
  v6 = v111;
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
