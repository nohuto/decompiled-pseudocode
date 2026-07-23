/*
 * XREFs of MiPfPutPagesInTransition @ 0x14024CE50
 * Callers:
 *     MmPrefetchPagesEx @ 0x1406580A8 (MmPrefetchPagesEx.c)
 *     MmPrefetchForCacheManager @ 0x14065829C (MmPrefetchForCacheManager.c)
 *     MiPrefetchControlArea @ 0x14070F6A0 (MiPrefetchControlArea.c)
 * Callees:
 *     MiReturnCommit @ 0x140230300 (MiReturnCommit.c)
 *     MiInitializePageColorBase @ 0x140231F50 (MiInitializePageColorBase.c)
 *     MiGetInPageSupportBlock @ 0x1402320A0 (MiGetInPageSupportBlock.c)
 *     MiGetPagingFileOffset @ 0x1402397FC (MiGetPagingFileOffset.c)
 *     MiIsPteInStore @ 0x14023AE70 (MiIsPteInStore.c)
 *     MiInitializeReadInProgressPfn @ 0x14024D760 (MiInitializeReadInProgressPfn.c)
 *     MiReduceMdl @ 0x14024DF8C (MiReduceMdl.c)
 *     MiSetInPagePriority @ 0x14024E1A8 (MiSetInPagePriority.c)
 *     MmAccessFault @ 0x14026E3B0 (MmAccessFault.c)
 *     MiGetPage @ 0x140274DF0 (MiGetPage.c)
 *     MiObtainFaultCharges @ 0x14027D270 (MiObtainFaultCharges.c)
 *     PsGetIoPriorityThread @ 0x14028EE50 (PsGetIoPriorityThread.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402BF7C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiPfnZeroingNeeded @ 0x1402C7380 (MiPfnZeroingNeeded.c)
 *     MiUnlockProtoPoolPage @ 0x1402C8010 (MiUnlockProtoPoolPage.c)
 *     MiInvalidPteConforms @ 0x1402C9D60 (MiInvalidPteConforms.c)
 *     MiFreeInPageSupportBlock @ 0x1402CA7B8 (MiFreeInPageSupportBlock.c)
 *     MiObtainProtoReference @ 0x1402CA8B8 (MiObtainProtoReference.c)
 *     MiLockProtoPoolPage @ 0x1402CA9B0 (MiLockProtoPoolPage.c)
 *     MiUpdatePfnPriority @ 0x1402D3D44 (MiUpdatePfnPriority.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiReturnFaultCharges @ 0x140329604 (MiReturnFaultCharges.c)
 *     MiPrefetchNormally @ 0x1403328A4 (MiPrefetchNormally.c)
 *     MiGetSlabPage @ 0x140332E88 (MiGetSlabPage.c)
 *     MiGetSlabAllocator @ 0x140333098 (MiGetSlabAllocator.c)
 *     MiZeroPhysicalPage @ 0x1403332D4 (MiZeroPhysicalPage.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x140349584 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     MiRefillPurgedExtents @ 0x140540550 (MiRefillPurgedExtents.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B4198 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B4374 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiFreeReadListPages @ 0x1406584B4 (MiFreeReadListPages.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
  _SLIST_ENTRY *v15; // r11
  int v16; // edi
  unsigned __int64 v17; // r10
  _QWORD *v18; // rbx
  ULONG_PTR v19; // r9
  unsigned __int64 v20; // r12
  _QWORD *v21; // rdx
  unsigned int v22; // eax
  unsigned __int64 v23; // r8
  int v24; // esi
  __int64 v25; // rdx
  ULONG_PTR v26; // r12
  __int64 v27; // rdx
  unsigned __int64 v28; // rbx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rsi
  __int64 v31; // rbx
  __int64 v32; // r15
  __int64 v33; // r8
  ULONG_PTR v34; // r15
  int v35; // eax
  __int64 v36; // r10
  int v37; // r14d
  int v38; // eax
  __int64 v39; // rcx
  _QWORD *v40; // r8
  _QWORD *v41; // rsi
  _BYTE *v42; // rsi
  __int64 v43; // rbx
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // r14
  _DWORD *v46; // rcx
  signed __int32 v47; // edx
  struct _KPRCB *v48; // rcx
  _DWORD *v49; // rdx
  ULONG_PTR v50; // rbx
  _QWORD *v51; // rsi
  __int64 v52; // rax
  __int64 v54; // rax
  int v55; // r9d
  _DWORD *v56; // rcx
  bool v57; // zf
  signed __int32 v58; // eax
  __int64 v59; // rax
  _SLIST_ENTRY *v60; // rcx
  PSLIST_ENTRY *v61; // rdx
  __int64 v62; // rcx
  unsigned __int64 v63; // rax
  _QWORD *v64; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 SlabAllocator; // rax
  __int64 v69; // rcx
  unsigned int v70; // r10d
  signed __int32 v71; // ecx
  __int64 Page; // rax
  __int64 v73; // r8
  _DWORD *SchedulerAssist; // r9
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
  __int64 v91; // rdx
  int v92; // eax
  int Next; // eax
  PSLIST_ENTRY v94; // rax
  __int64 v95; // rdx
  _SLIST_ENTRY *v96; // [rsp+30h] [rbp-A9h]
  __int64 v97; // [rsp+38h] [rbp-A1h]
  PSLIST_ENTRY v98; // [rsp+40h] [rbp-99h]
  __int64 v99; // [rsp+48h] [rbp-91h]
  int v100; // [rsp+50h] [rbp-89h]
  int v101; // [rsp+54h] [rbp-85h]
  unsigned int v102; // [rsp+58h] [rbp-81h]
  __int64 v103; // [rsp+60h] [rbp-79h]
  int v104; // [rsp+68h] [rbp-71h] BYREF
  int v105; // [rsp+6Ch] [rbp-6Dh]
  unsigned int v106; // [rsp+70h] [rbp-69h]
  __int64 v107; // [rsp+78h] [rbp-61h] BYREF
  _BYTE *v108; // [rsp+80h] [rbp-59h]
  unsigned __int64 v109; // [rsp+88h] [rbp-51h]
  _QWORD *v110; // [rsp+90h] [rbp-49h]
  int v111; // [rsp+98h] [rbp-41h] BYREF
  unsigned int v112; // [rsp+9Ch] [rbp-3Dh]
  _QWORD *v113; // [rsp+A0h] [rbp-39h]
  void *Src; // [rsp+A8h] [rbp-31h]
  __int128 v115; // [rsp+B0h] [rbp-29h] BYREF
  unsigned __int64 v116; // [rsp+C0h] [rbp-19h]
  __int64 v117; // [rsp+C8h] [rbp-11h] BYREF
  PSLIST_ENTRY *v118; // [rsp+D0h] [rbp-9h]
  unsigned __int64 v119; // [rsp+D8h] [rbp-1h]
  PSLIST_ENTRY ListEntry; // [rsp+E0h] [rbp+7h]
  void *retaddr; // [rsp+138h] [rbp+5Fh]
  int v124; // [rsp+150h] [rbp+77h] BYREF
  int v125; // [rsp+158h] [rbp+7Fh]

  v124 = a3;
  v3 = 0LL;
  v4 = *(_DWORD *)(a1 + 80);
  v5 = a1;
  v106 = *(_DWORD *)(a1 + 84);
  v6 = 0LL;
  v7 = *(_QWORD *)(a1 + 8);
  v109 = 0LL;
  v8 = 0LL;
  v115 = 0LL;
  v9 = *(_WORD *)(v7 + 60) & 0x3FF;
  v102 = v4;
  v113 = 0LL;
  v96 = 0LL;
  v103 = *(_QWORD *)(qword_140C4E4C8 + 8 * v9);
  v99 = 0LL;
  v112 = *(_DWORD *)(v5 + 88) + 1;
  LOBYTE(v124) = 17;
  IoPriorityThread = PsGetIoPriorityThread(KeGetCurrentThread());
  v12 = *(_DWORD *)(v11 + 56);
  v13 = *(_QWORD *)(v5 + 120);
  v105 = IoPriorityThread;
  v118 = (PSLIST_ENTRY *)(v5 + 120);
  v97 = v13;
  v100 = v4 & 7 | 0x18;
  v98 = 0LL;
  MiInitializePageColorBase(v14 + 1664, (v12 >> 20) & 0x3F, (__int64)&v115);
  if ( v13 == v5 + 120 )
    goto LABEL_72;
  v16 = v4 & 7 | 0x18;
  while ( 2 )
  {
    v17 = 0xFFFFFA8000000000uLL;
    ListEntry = (PSLIST_ENTRY)v13;
    if ( v105 < 2 )
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
    v108 = v18;
    v119 = v20;
    *(_QWORD *)(v13 + 240) = *v18 & 0xFFFFFFFFFFFFFFFCuLL;
    v116 = *v18 & 0xFFFFFFFFFFFFFFFCuLL;
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
        *v21++ = qword_140C4EBF8;
      }
      while ( v22 < v23 );
    }
    v24 = 0;
    v125 = 0;
    if ( !v98 )
    {
      v98 = MiGetInPageSupportBlock(0);
      if ( v98 )
      {
        v25 = v106;
        *((_QWORD *)&v98[15].Next + 1) = 0LL;
        MiSetInPagePriority(v98, v25, v102);
      }
      v15 = v96;
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
        v27 = ((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v8 == v27 )
          goto LABEL_15;
        MiUnlockProtoPoolPage(v15, (unsigned __int8)v124);
      }
      v8 = ((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v99 = v8;
      while ( 1 )
      {
        v54 = MiLockProtoPoolPage(v26, &v124);
        v19 = 0LL;
        v96 = (_SLIST_ENTRY *)v54;
        if ( v54 )
          break;
        MmAccessFault(2uLL, v26);
      }
      v16 = v100;
      v13 = v97;
      v17 = 0xFFFFFA8000000000uLL;
      while ( 1 )
      {
LABEL_15:
        while ( 1 )
        {
          v28 = *(_QWORD *)v26;
          v29 = *(_QWORD *)v26;
          if ( (*(_QWORD *)v26 & 1) == 0 )
            break;
LABEL_97:
          v27 = 6 * ((v29 >> 12) & 0xFFFFFFFFFLL);
          if ( (*(_QWORD *)(48 * ((v29 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0 )
          {
            v30 = v17 + 48 * ((v29 >> 12) & 0xFFFFFFFFFLL);
            v111 = v19;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) )
            {
              do
              {
                do
                  KeYieldProcessorEx(&v111);
                while ( *(__int64 *)(v30 + 24) < 0 );
              }
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) );
              v19 = 0LL;
              v17 = 0xFFFFFA8000000000uLL;
            }
            if ( *(_QWORD *)v26 == v28 )
              goto LABEL_18;
            _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
        }
        if ( (*(_QWORD *)v26 & 0xC00LL) != 0x800 )
          break;
        if ( (unsigned int)MiInvalidPteConforms(*(_QWORD *)v26, v27) )
        {
          v29 = v28;
          if ( qword_140C4DDC0 && (v28 & 0x10) == 0 )
            v29 = v28 & ~qword_140C4DDC0;
          goto LABEL_97;
        }
      }
      v30 = v19;
LABEL_18:
      v31 = *(_QWORD *)v26;
      if ( v26 >= 0xFFFFF6FB7DBED000uLL
        && v26 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v31 & 1) != 0
        && ((v31 & 0x20) == 0 || (v31 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v66 = *((_QWORD *)&Flink->Flink + ((v26 >> 3) & 0x1FF));
          v67 = v31 | 0x20;
          if ( (v66 & 0x20) == 0 )
            v67 = *(_QWORD *)v26;
          v31 = v67;
          if ( (v66 & 0x42) != 0 )
            v31 = v67 | 0x42;
        }
      }
      v117 = v31;
      if ( v30 )
      {
        MiUpdatePfnPriority(v30, v102, 0LL);
        _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v15 = v96;
        v19 = 0LL;
        goto LABEL_52;
      }
      if ( (v31 & 0x400) == 0 )
      {
        if ( !(unsigned int)IS_PTE_NOT_DEMAND_ZERO(v31) || !v98 )
        {
LABEL_90:
          v15 = v96;
          goto LABEL_52;
        }
        v37 = 2;
        v34 = v19;
        v36 = 1LL;
        goto LABEL_27;
      }
      v32 = v31;
      if ( qword_140C4DDC0 && (v31 & 0x10) == 0 )
        v32 = v31 & ~qword_140C4DDC0;
      v33 = *(_QWORD *)(v5 + 8);
      v34 = v32 >> 16;
      v35 = *(_DWORD *)(v33 + 56);
      if ( (v35 & 0x40000000) != 0 )
      {
        MiUnlockProtoPoolPage(v96, (unsigned __int8)v124);
        v96 = 0LL;
        if ( (int)MiRefillPurgedExtents(v34) < 0 )
        {
          v24 = v125;
          goto LABEL_65;
        }
LABEL_88:
        v19 = 0LL;
        goto LABEL_89;
      }
      if ( (v35 & 0x20) != 0 && (*(_QWORD *)(*(_QWORD *)(v33 + 96) + 48LL) & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      {
LABEL_89:
        v8 = v99;
        goto LABEL_90;
      }
      v36 = 1LL;
      v37 = 1;
      v38 = *(_DWORD *)(*(_QWORD *)v34 + 56LL);
      if ( (v38 & 0x20) == 0
        || (v38 & 0x40000000) != 0
        || (*(_DWORD *)(*(_QWORD *)v34 + 92LL) & 0xC0000) == 0
        || (*(_DWORD *)(v103 + 4) & 8) == 0
        || (*(_BYTE *)(v34 + 34) & 2) != 0 && (*(_BYTE *)(v34 + 32) & 0xA) == 8 )
      {
LABEL_27:
        v39 = 40LL;
        goto LABEL_28;
      }
      SlabAllocator = MiGetSlabAllocator(v103, 0LL, (*(unsigned __int16 *)(v34 + 32) >> 1) & 0x1F);
      LODWORD(v19) = 0;
      v36 = 1LL;
      v39 = 8LL * *(int *)(SlabAllocator + 52) + 48;
LABEL_28:
      v40 = *(_QWORD **)(v39 + v5);
      v41 = (_QWORD *)(v39 + v5);
      v110 = v40;
      if ( v40 )
      {
        *v41 = *v40;
        v42 = v108;
        v107 = (__int64)(v40 + 0xB000000000LL) / 48;
        goto LABEL_30;
      }
      if ( !(unsigned int)MiPrefetchNormally(v103, v112) )
        goto LABEL_181;
      if ( !a2 )
        goto LABEL_140;
      if ( !*a2 )
        goto LABEL_181;
      --*a2;
LABEL_140:
      if ( !(unsigned int)MiObtainFaultCharges(v69, v70, v70) )
        goto LABEL_181;
      v71 = _InterlockedExchangeAdd((volatile signed __int32 *)v115, 1u);
      if ( v41 == (_QWORD *)(v5 + 40) )
      {
        v42 = v108;
        v73 = 770LL;
        if ( (*v108 & 1) == 0 )
          v73 = 512LL;
        Page = MiGetPage(v103, DWORD2(v115) & (unsigned int)v71 | HIDWORD(v115), v73);
      }
      else
      {
        Page = MiGetSlabPage(v103, (*(unsigned __int16 *)(v34 + 32) >> 1) & 0x1F, 0, 0, 0);
        v42 = v108;
      }
      v107 = Page;
      if ( Page == -1 )
      {
        MiReturnFaultCharges(v103, 1LL, 1LL);
LABEL_181:
        v15 = v96;
        v13 = v97;
        break;
      }
      v40 = (_QWORD *)(48 * Page - 0x58000000000LL);
      LODWORD(v19) = 0;
      v110 = v40;
      v36 = 1LL;
LABEL_30:
      v101 = v19;
      if ( (*v42 & 1) != 0 )
      {
        if ( (unsigned int)MiPfnZeroingNeeded(v40, 1LL) )
          v55 = v36;
        v101 = v55;
      }
      if ( v37 != 1 )
      {
        MiReturnCommit(v103, v36);
        MiInitializeReadInProgressPfn(-1, (unsigned int)&v107, 1, v26, (__int64)v98, v16);
        PagingFileOffset = MiGetPagingFileOffset((__int64)&v117);
        v83 = PagingFileOffset;
        LODWORD(v109) = PagingFileOffset;
        IsPteInStore = MiIsPteInStore(v103, v31);
        v85 = (unsigned __int16)v31 >> 12;
        v86 = v105 < 2;
        v87 = *(_QWORD *)(v103 + 8 * v85 + 6944);
        v98[16].Next = v98 + 17;
        if ( v86 )
          LODWORD(v98[12].Next) |= 0x80u;
        v88 = v107;
        v98[17].Next = 0LL;
        v98[19].Next = 0LL;
        *((_DWORD *)&v98[17].Next + 2) = 56;
        *((_QWORD *)&v98[19].Next + 1) = 4096LL;
        *((_WORD *)&v98[17].Next + 5) |= 0x4042u;
        v98[20].Next = (_SLIST_ENTRY *)v88;
        MiObtainProtoReference(v96, 0LL);
        v89 = v118;
        v98[10].Next = v96;
        v90 = *v89;
        if ( *((PSLIST_ENTRY **)&(*v89)->Next + 1) == v89 )
        {
          v98->Next = v90;
          *((_QWORD *)&v98->Next + 1) = v89;
          *((_QWORD *)&v90->Next + 1) = v98;
          *v89 = v98;
          v91 = (unsigned __int8)v124;
          ++*(_DWORD *)(a1 + 108);
          MiUnlockProtoPoolPage(v96, v91);
          v96 = 0LL;
          if ( v101 == 1 )
            MiZeroPhysicalPage(v88);
          v98[14].Next = 0LL;
          if ( IsPteInStore )
          {
            Next = (int)v98[12].Next;
            v98[6].Next = (_SLIST_ENTRY *)(v83 | (v85 << 60));
            v92 = Next | 0x100;
          }
          else
          {
            v109 = (unsigned __int64)(unsigned int)v109 << 12;
            v98[6].Next = (_SLIST_ENTRY *)v109;
            v92 = (int)v98[12].Next;
          }
          *((_QWORD *)&v98[12].Next + 1) = v87;
          LODWORD(v98[12].Next) = v92 | 0x200000;
          *((_QWORD *)&v98[15].Next + 1) = v110;
          v98[15].Next = (_SLIST_ENTRY *)v26;
          v94 = MiGetInPageSupportBlock(0);
          v98 = v94;
          if ( v94 )
          {
            v95 = v106;
            *((_QWORD *)&v94[15].Next + 1) = 0LL;
            MiSetInPagePriority(v94, v95, v102);
          }
          v13 = v97;
          v15 = 0LL;
          v5 = a1;
          v19 = 0LL;
          v8 = v99;
          goto LABEL_52;
        }
        goto LABEL_182;
      }
      v13 = v97;
      if ( !*(_QWORD *)(v97 + 248) )
        *(_QWORD *)(v97 + 248) = v40;
      ++v125;
      MiInitializeReadInProgressPfn(-1, (unsigned int)&v107, v36, v26, v97, v16);
      v43 = *(_QWORD *)(v5 + 8);
      if ( (*(_DWORD *)(v43 + 56) & 0x20) != 0 || !*(_QWORD *)(v43 + 64) )
        v34 = 0LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v43 + 72, CurrentIrql);
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v104 = 0;
        v46 = CurrentPrcb->SchedulerAssist;
        if ( v46 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v75 = v46[6];
            v46[6] = v75 + 1;
            if ( v75 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( _interlockedbittestandset((volatile signed __int32 *)(v43 + 72), 0x1Fu) )
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
          v104 = ExpWaitForSpinLockExclusiveAndAcquire(v43 + 72, CurrentIrql);
        }
        v47 = *(_DWORD *)(v43 + 72);
        while ( (v47 & 0xBFFFFFFF) != 0x80000000 )
        {
          if ( (v47 & 0x40000000) == 0 )
          {
            v58 = _InterlockedCompareExchange((volatile signed __int32 *)(v43 + 72), v47 | 0x40000000, v47);
            v57 = v47 == v58;
            v47 = v58;
            if ( !v57 )
              continue;
          }
          KeYieldProcessorEx(&v104);
          v47 = *(_DWORD *)(v43 + 72);
        }
        v13 = v97;
      }
      ++*(_QWORD *)(v43 + 32);
      if ( v34 )
        ++*(_DWORD *)(v34 + 104);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v43 + 72, retaddr);
        v19 = 0LL;
      }
      else
      {
        v19 = 0LL;
        *(_DWORD *)(v43 + 72) = 0;
      }
      v48 = KeGetCurrentPrcb();
      v49 = v48->SchedulerAssist;
      if ( v49 )
      {
        if ( v48->NestingLevel <= 1u )
        {
          v77 = v49[6] - 1;
          v49[6] = v77;
          if ( !v77 )
          {
            KiRemoveSystemWorkPriorityKick(v48);
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
            v57 = (v81 & v80[5]) == 0;
            v80[5] &= v81;
            if ( v57 )
              KiRemoveSystemWorkPriorityKick(v79);
            v19 = 0LL;
          }
        }
      }
      __writecr8(CurrentIrql);
      v50 = v107;
      *((_QWORD *)Src + ((__int64)(v26 - v116) >> 3) + 6) = v107;
      if ( *(_QWORD *)(v13 + 160) )
      {
        v15 = v96;
      }
      else
      {
        MiObtainProtoReference(v96, 0LL);
        v15 = v96;
        v19 = 0LL;
        *(_QWORD *)(v13 + 160) = v96;
      }
      if ( v101 == 1 )
      {
        MiUnlockProtoPoolPage(v15, (unsigned __int8)v124);
        v96 = 0LL;
        MiZeroPhysicalPage(v50);
        v5 = a1;
        goto LABEL_88;
      }
      v5 = a1;
      v8 = v99;
LABEL_52:
      v18 = v108 + 8;
      v108 = v18;
      if ( (unsigned __int64)v18 < v119 )
      {
        v17 = 0xFFFFFA8000000000uLL;
        continue;
      }
      break;
    }
    v24 = v125;
LABEL_63:
    if ( v15 )
    {
      MiUnlockProtoPoolPage(v15, (unsigned __int8)v124);
      v96 = 0LL;
    }
LABEL_65:
    if ( !v24 )
    {
      v59 = *(_QWORD *)v13;
      v60 = ListEntry;
      v13 = v59;
      v97 = v59;
      v61 = (PSLIST_ENTRY *)*((_QWORD *)&ListEntry->Next + 1);
      if ( *(PSLIST_ENTRY *)(v59 + 8) == ListEntry && *v61 == ListEntry )
      {
        *v61 = (PSLIST_ENTRY)v59;
        *(_QWORD *)(v59 + 8) = v61;
        --*(_DWORD *)(v5 + 108);
        MiFreeInPageSupportBlock(v60);
        goto LABEL_70;
      }
LABEL_182:
      __fastfail(3u);
    }
    v51 = Src;
    v52 = MiReduceMdl(Src);
    if ( v52 )
    {
      *(_QWORD *)(v13 + 96) += v52 << 12;
      v62 = 48LL * v51[6] - 0x58000000000LL;
      v63 = *(_QWORD *)(v62 + 8) | 0x8000000000000000uLL;
      *(_QWORD *)(v13 + 248) = v62;
      *(_QWORD *)(v13 + 240) = v63;
    }
    if ( v51 != (_QWORD *)(v13 + 272) && *((_DWORD *)v51 + 10) <= 0x10000u )
    {
      memmove((void *)(v13 + 272), v51, *((__int16 *)v51 + 4));
      *v51 = v113;
      *(_QWORD *)(v13 + 256) = v13 + 272;
      v113 = v51;
    }
    v13 = *(_QWORD *)v13;
    v97 = v13;
LABEL_70:
    if ( v13 != v5 + 120 )
    {
      v15 = v96;
      v8 = v99;
      continue;
    }
    break;
  }
  v3 = v98;
  v6 = v113;
LABEL_72:
  MiFreeReadListPages(v5);
  if ( v6 )
  {
    do
    {
      v64 = (_QWORD *)*v6;
      ExFreePoolWithTag(v6, 0);
      v6 = v64;
    }
    while ( v64 );
  }
  if ( v3 )
    MiFreeInPageSupportBlock(v3);
  return 0LL;
}
