/*
 * XREFs of MiMakePageAvoidRead @ 0x140324070
 * Callers:
 *     MmCopyToCachedPage @ 0x140331500 (MmCopyToCachedPage.c)
 * Callees:
 *     MiGetPage @ 0x140213610 (MiGetPage.c)
 *     MiIsPfnFileOnly @ 0x140218D60 (MiIsPfnFileOnly.c)
 *     MiChargeCommit @ 0x14021AAD0 (MiChargeCommit.c)
 *     MiReservePtes @ 0x1402265B0 (MiReservePtes.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402315C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiPfnZeroingNeeded @ 0x140238B60 (MiPfnZeroingNeeded.c)
 *     MiUnlockProtoPoolPage @ 0x1402397F0 (MiUnlockProtoPoolPage.c)
 *     MiWriteValidPteVolatile @ 0x140241370 (MiWriteValidPteVolatile.c)
 *     MiReleasePtes @ 0x140245800 (MiReleasePtes.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiUserPdeOrAbove @ 0x1402ABED4 (MiUserPdeOrAbove.c)
 *     MiChargePartitionResidentAvailable @ 0x1402B0CC8 (MiChargePartitionResidentAvailable.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiZeroPhysicalPage @ 0x1402E6380 (MiZeroPhysicalPage.c)
 *     MiReleaseFreshPage @ 0x1402E6774 (MiReleaseFreshPage.c)
 *     EtwTraceKernelEvent @ 0x1402EAC90 (EtwTraceKernelEvent.c)
 *     MiLockPageInline @ 0x1402FFE30 (MiLockPageInline.c)
 *     MiChangePageAttribute @ 0x1403041E4 (MiChangePageAttribute.c)
 *     MiReturnCommit @ 0x1403182A0 (MiReturnCommit.c)
 *     MiLockOwnedProtoPage @ 0x14031A320 (MiLockOwnedProtoPage.c)
 *     MiIsAddressGlobal @ 0x14031EB10 (MiIsAddressGlobal.c)
 *     MiAreChargesNeededToLockPage @ 0x140323430 (MiAreChargesNeededToLockPage.c)
 *     MiPfnReferenceCountIsZero @ 0x140325DF0 (MiPfnReferenceCountIsZero.c)
 *     MiPfnShareCountIsZero @ 0x140326190 (MiPfnShareCountIsZero.c)
 *     MiIsPfnCommitNotCharged @ 0x1403272D0 (MiIsPfnCommitNotCharged.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiIdentifyPfn @ 0x140349250 (MiIdentifyPfn.c)
 *     KiSetVpThreadSpinLockCount @ 0x14034B590 (KiSetVpThreadSpinLockCount.c)
 *     MiLockAndInsertPageInFreeList @ 0x1403B750C (MiLockAndInsertPageInFreeList.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     MiBadRefCount @ 0x1403F48DC (MiBadRefCount.c)
 *     MiBadShareCount @ 0x1403F4934 (MiBadShareCount.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     memset @ 0x140414200 (memset.c)
 *     MiWaitForFreePage @ 0x14055C1FC (MiWaitForFreePage.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B5BA8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B5D8C (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiMapCacheExceptionFilter @ 0x1408C83EC (MiMapCacheExceptionFilter.c)
 */

__int64 __fastcall MiMakePageAvoidRead(
        unsigned __int64 a1,
        void *a2,
        unsigned int a3,
        size_t a4,
        char a5,
        unsigned __int64 a6,
        _DWORD *a7)
{
  size_t v8; // r13
  __int64 v9; // r8
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rbx
  struct _KPRCB *CurrentPrcb; // r8
  int NodeShiftedColor; // r9d
  int v16; // eax
  signed __int32 v17; // edx
  __int64 v18; // r8
  __int64 Page; // rax
  _DWORD *v20; // r9
  __int64 v22; // rdi
  unsigned __int64 v23; // rsi
  struct _LIST_ENTRY *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  unsigned int v27; // esi
  unsigned int v28; // ebx
  BOOL v29; // r15d
  signed __int64 i; // rdx
  signed __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  unsigned __int64 v34; // r9
  ULONG_PTR v35; // r14
  unsigned __int64 v36; // r14
  unsigned __int64 v37; // rbx
  _DWORD *SchedulerAssist; // r8
  __int64 v39; // r9
  int v40; // r15d
  struct _LIST_ENTRY *v41; // rdx
  char v42; // dl
  int v43; // eax
  ULONG_PTR v44; // rbx
  unsigned __int64 v45; // rdi
  int v46; // eax
  unsigned __int64 v47; // rdi
  int v48; // ebx
  __int64 v49; // r8
  __int64 v50; // rcx
  char *v51; // rdi
  __int64 v52; // rax
  __int64 v53; // rbx
  __int64 v54; // rdi
  unsigned __int8 CurrentIrql; // r12
  unsigned __int64 *v56; // r13
  unsigned __int64 v57; // rax
  struct _LIST_ENTRY *v58; // r8
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // r8
  ULONG_PTR *v62; // r9
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  char v66; // r14
  int IsPfnCommitNotCharged; // eax
  char v68; // r10
  __int64 v69; // rcx
  ULONG_PTR *v70; // r15
  signed __int32 v71; // eax
  signed __int32 v72; // ett
  int v73; // ebx
  volatile signed __int64 *v74; // rbx
  char v75; // al
  unsigned __int8 v76; // al
  int v77; // ecx
  bool v78; // zf
  unsigned __int64 v79; // rbx
  unsigned __int64 v80; // rdx
  unsigned __int64 v81; // r11
  __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rdx
  unsigned __int64 v85; // r10
  struct _LIST_ENTRY *v86; // r8
  __int64 v87; // rax
  __int64 v88; // r8
  __int64 v89; // rax
  __int64 v90; // r9
  unsigned int v91; // esi
  unsigned __int64 v92; // r8
  struct _LIST_ENTRY *v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // r8
  __int64 v97; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v99; // eax
  unsigned __int8 v100; // cl
  char v101; // cl
  char v102; // cl
  volatile signed __int32 *v103; // rbx
  unsigned __int8 v104; // r14
  struct _KPRCB *v105; // rsi
  _DWORD *v106; // rcx
  int v107; // eax
  __int64 v108; // r8
  _DWORD *v109; // r9
  __int64 v110; // rdx
  unsigned __int32 v111; // eax
  struct _KPRCB *v112; // rcx
  _DWORD *v113; // rdx
  int v114; // eax
  unsigned __int8 v115; // al
  struct _KPRCB *v116; // r10
  _DWORD *v117; // r9
  int v118; // eax
  ULONG_PTR v119; // rbx
  unsigned __int64 v120; // rbx
  int v121; // edx
  _QWORD *v122; // r8
  unsigned __int64 v123; // r11
  __int64 v124; // rdx
  __int64 v125; // r8
  _QWORD *v126; // r9
  __int64 v127; // r8
  __int64 v128; // rdx
  __int16 v129; // bx
  __int16 v130; // bx
  __int64 v131; // r8
  __int64 v132; // rax
  unsigned __int64 v133; // r9
  char v134; // al
  int v135; // edx
  unsigned __int64 v136; // r8
  unsigned __int64 v137; // r9
  __int64 v138; // r10
  unsigned __int64 v139; // r11
  __int64 v140; // r8
  __int64 v141; // rsi
  unsigned __int64 v142; // r8
  struct _KPRCB *v143; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v145; // eax
  unsigned __int8 v146; // bl
  unsigned __int8 v147; // al
  struct _KPRCB *v148; // r9
  _DWORD *v149; // r8
  int v150; // eax
  unsigned __int8 v151; // al
  struct _KPRCB *v152; // r9
  _DWORD *v153; // r8
  int v154; // eax
  unsigned __int8 v155; // [rsp+30h] [rbp-148h]
  int v156; // [rsp+34h] [rbp-144h]
  int v157; // [rsp+38h] [rbp-140h]
  __int64 v158; // [rsp+40h] [rbp-138h]
  unsigned __int64 v159; // [rsp+48h] [rbp-130h] BYREF
  int v160; // [rsp+50h] [rbp-128h] BYREF
  unsigned int v161; // [rsp+54h] [rbp-124h]
  int v162; // [rsp+58h] [rbp-120h] BYREF
  unsigned int v163; // [rsp+5Ch] [rbp-11Ch]
  unsigned __int64 *v164; // [rsp+60h] [rbp-118h]
  unsigned __int64 v165; // [rsp+68h] [rbp-110h]
  ULONG_PTR v166; // [rsp+70h] [rbp-108h]
  unsigned int v167; // [rsp+78h] [rbp-100h]
  int v168; // [rsp+7Ch] [rbp-FCh] BYREF
  int v169; // [rsp+80h] [rbp-F8h] BYREF
  int v170; // [rsp+84h] [rbp-F4h] BYREF
  int v171; // [rsp+88h] [rbp-F0h] BYREF
  unsigned __int64 v172; // [rsp+90h] [rbp-E8h] BYREF
  __int64 v173; // [rsp+98h] [rbp-E0h]
  __int64 v174; // [rsp+A0h] [rbp-D8h]
  __int64 v175; // [rsp+A8h] [rbp-D0h]
  unsigned __int64 v176; // [rsp+B0h] [rbp-C8h]
  _DWORD *v177; // [rsp+B8h] [rbp-C0h]
  __int64 v178; // [rsp+C0h] [rbp-B8h]
  volatile signed __int64 *v179; // [rsp+C8h] [rbp-B0h]
  void *Src; // [rsp+D0h] [rbp-A8h]
  __int64 v181; // [rsp+D8h] [rbp-A0h]
  ULONG_PTR v182; // [rsp+E0h] [rbp-98h]
  __int64 v183; // [rsp+E8h] [rbp-90h]
  __int64 v184; // [rsp+F0h] [rbp-88h]
  __int64 v185; // [rsp+F8h] [rbp-80h]
  __int128 v186; // [rsp+100h] [rbp-78h] BYREF
  __int128 v187; // [rsp+110h] [rbp-68h]
  _QWORD v188[2]; // [rsp+128h] [rbp-50h] BYREF
  void *retaddr; // [rsp+178h] [rbp+0h]

  v8 = a3;
  Src = a2;
  v165 = a1;
  v176 = a6;
  v178 = a1;
  v179 = (volatile signed __int64 *)a6;
  v177 = a7;
  v155 = 0;
  v186 = 0LL;
  v187 = 0LL;
  *a7 = 0;
  v9 = *(_QWORD *)a6;
  if ( a6 >= 0xFFFFF6FB7DBED000uLL
    && a6 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v9 & 1) != 0
    && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v11 = *((_QWORD *)&Flink->Flink + ((a6 >> 3) & 0x1FF));
      v12 = v9 | 0x20;
      if ( (v11 & 0x20) == 0 )
        v12 = *(_QWORD *)a6;
      v9 = v12;
      if ( (v11 & 0x42) != 0 )
        v9 = v12 | 0x42;
    }
  }
  v175 = v9;
  if ( qword_140C4DF40 )
  {
    if ( (v9 & 0x10) != 0 )
      v9 &= ~0x10uLL;
    else
      v9 &= ~qword_140C4DF40;
  }
  v174 = v9 >> 16;
  v184 = v9 >> 16;
  v173 = *(_QWORD *)(v9 >> 16);
  v183 = v173;
  v13 = *(_QWORD *)(qword_140C4E648 + 8LL * (*(_WORD *)(v173 + 60) & 0x3FF));
  if ( ((*(_DWORD *)(v173 + 56) >> 20) & 0x3F) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    NodeShiftedColor = (((*(_DWORD *)(v173 + 56) >> 20) & 0x3F) - 1) << byte_140C4DE8C;
  }
  else
  {
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    NodeShiftedColor = CurrentPrcb->NodeShiftedColor;
  }
  v16 = (1 << byte_140C4DE8D) - 1;
  v17 = v16 & _InterlockedExchangeAdd((volatile signed __int32 *)&CurrentPrcb->PageColor, 1u);
  v18 = 0LL;
  if ( a4 != 4096 )
    v18 = 2LL;
  Page = MiGetPage(v13, NodeShiftedColor | (unsigned int)v17, v18);
  v166 = Page;
  v185 = Page;
  if ( Page == -1 )
  {
    MiWaitForFreePage(v13);
    return 1LL;
  }
  v22 = 48 * Page - 0x58000000000LL;
  v158 = v22;
  v181 = v22;
  v23 = *(_QWORD *)a6;
  if ( v176 >= 0xFFFFF6FB7DBED000uLL
    && v176 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v23 & 1) != 0
    && ((v23 & 0x20) == 0 || (v23 & 0x42) == 0) )
  {
    v24 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v24 )
    {
      v25 = *((_QWORD *)&v24->Flink + ((v176 >> 3) & 0x1FF));
      v26 = v23 | 0x20;
      if ( (v25 & 0x20) == 0 )
        v26 = *(_QWORD *)a6;
      v23 = v26;
      if ( (v25 & 0x42) != 0 )
        v23 = v26 | 0x42;
    }
  }
  v27 = (v23 >> 5) & 0x1F;
  v167 = v27;
  v163 = v27;
  if ( v27 )
  {
    if ( v27 == 31 )
    {
      v28 = 1;
    }
    else if ( v27 >> 3 == 3 && (v27 & 7) != 0 )
    {
      v28 = 2;
    }
    else
    {
      v28 = v27 >> 3 != 1;
    }
  }
  else
  {
    v28 = 3;
  }
  v29 = 0;
  v156 = 0;
  if ( a4 != 4096 )
    v29 = MiPfnZeroingNeeded(v22, v28);
  if ( *(unsigned __int8 *)(v22 + 34) >> 6 != v28 )
    MiChangePageAttribute(v22, v28, 0LL, v20);
  for ( i = *(_QWORD *)(v22 + 24); ; i = v31 )
  {
    v31 = _InterlockedCompareExchange64((volatile signed __int64 *)(v22 + 24), i & 0xF0FFFFFFFFFFFFFFuLL, i);
    if ( i == v31 )
      break;
  }
  v35 = MiReservePtes((__int64)&qword_140C4EF40, 1u, 0xF0FFFFFFFFFFFFFFuLL, (unsigned __int64)v20);
  v182 = v35;
  if ( v35 )
  {
    v42 = 4;
    if ( v166 <= 0xFFFFFFFFFLL && (*(_QWORD *)(48 * v166 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0 )
    {
      v43 = *(unsigned __int8 *)(48 * v166 - 0x57FFFFFFFDELL) >> 6;
      if ( !v43 || v43 == 3 )
      {
        v42 = 12;
      }
      else if ( v43 == 2 )
      {
        v42 = 28;
      }
    }
    v44 = ((v166 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v42 & 0x1F] & 0xFFFF000000000E7FuLL | 0x21;
    if ( v35 >= 0xFFFFF68000000000uLL && v35 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      v45 = (__int64)(v35 << 25) >> 16;
      if ( v35 >= 0xFFFFF6FB40000000uLL && v35 <= 0xFFFFF6FB7FFFFFFFuLL )
      {
        v44 = v35 == 0xFFFFF6FB7DBEDF68uLL
            ? ((v166 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v42 & 0x1F] & 0xFFFF000000000E7FuLL | 0x8000000000000021uLL
            : ((v166 & 0xFFFFFFFFFLL) << 12) & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v42 & 0x1F] & 0x7FFF000000000E7FLL | 0x21;
        if ( (unsigned int)MiUserPdeOrAbove(v35) )
          v44 |= 4uLL;
      }
      if ( v35 <= 0xFFFFF6BFFFFFFF78uLL )
        v44 |= 4uLL;
      if ( v45 >= 0xFFFF800000000000uLL )
      {
        if ( byte_140C4F9C8[((v45 >> 39) & 0x1FF) - 256] == 1
          || v45 >= 0xFFFFF68000000000uLL && v45 <= 0xFFFFF6FFFFFFFFFFuLL )
        {
LABEL_94:
          v47 = v44 & 0xFAFFFFFFFFFFFEFFuLL | ((unsigned __int64)(word_140C4E008 & 1) << 8) | 0xA00000000000042LL;
          v48 = 0;
          if ( (unsigned int)MiPteInShadowRange(v35, 0xFFFFF68000000000uLL) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v48 = 1;
              if ( !HIBYTE(word_140C4E008) )
                goto LABEL_99;
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
LABEL_99:
              v47 |= 0x8000000000000000uLL;
            }
          }
          *(_QWORD *)v35 = v47;
          if ( v48 )
            MiWritePteShadow(v35, v47, v49);
          v50 = (__int64)(v35 << 25) >> 16;
          v51 = (char *)(v50 + v8);
          if ( v29 )
          {
            if ( (_DWORD)v8 )
              memset((void *)v50, 0, v8);
            if ( 4096 - v8 != a4 )
              memset(&v51[a4], 0, 4096 - v8 - a4);
          }
          memmove(v51, Src, a4);
          MiReleasePtes((__int64)&qword_140C4EF40, (_QWORD *)v35, 1u);
          goto LABEL_56;
        }
        if ( v45 < qword_140C4FB38 || (v46 = HIBYTE(word_140C4E008), v45 > qword_140C4E368) )
          v46 = (unsigned __int8)word_140C4E008;
      }
      else
      {
        v46 = HIBYTE(word_140C4E008);
      }
      if ( !v46 )
        goto LABEL_94;
    }
    v44 |= 0x100uLL;
    goto LABEL_94;
  }
  if ( (a5 & 1) == 0 )
  {
    MiReleaseFreshPage(v22, v32, v33);
    return 4LL;
  }
  if ( v29 )
    MiZeroPhysicalPage(v166, 1, v28, v34);
  v156 = 1;
LABEL_56:
  v157 = BYTE4(PerfGlobalGroupMask) & 1;
  v164 = (unsigned __int64 *)(((v165 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v159 = *v164;
  v36 = v159 & 1;
  do
  {
    if ( !v36 )
      goto LABEL_375;
    v37 = v159;
    if ( (v159 & 0x200) != 0 )
      goto LABEL_375;
    v40 = MiPteInShadowRange(&v159, v32);
    if ( v40
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && ((v37 & 0x20) == 0 || (v37 & 0x42) == 0) )
    {
      v41 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v41 )
      {
        v52 = *((_QWORD *)&v41->Flink + (((unsigned __int64)&v159 >> 3) & 0x1FF));
        if ( (v52 & 0x20) != 0 )
          v37 |= 0x20uLL;
        if ( (v52 & 0x42) != 0 )
          v37 |= 0x42uLL;
      }
      else
      {
        v37 = v159;
      }
    }
    v53 = (v37 >> 12) & 0xFFFFFFFFFLL;
    v32 = 48 * v53;
    v178 = 48 * v53;
  }
  while ( (*(_QWORD *)(48 * v53 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 );
  v54 = v32 - 0x58000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v32 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
    SchedulerAssist[5] = v32;
  }
  v168 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v54 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v168, v32, (__int64)SchedulerAssist, v39);
    while ( *(__int64 *)(v54 + 24) < 0 );
  }
  v56 = v164;
  v57 = *v164;
  v159 = v57;
  if ( (v57 & 1) == 0 || (v57 & 0x200) != 0 )
    goto LABEL_366;
  if ( v40
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && ((v57 & 0x20) == 0 || (v57 & 0x42) == 0) )
  {
    v58 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v58 )
    {
      v59 = *((_QWORD *)&v58->Flink + (((unsigned __int64)&v159 >> 3) & 0x1FF));
      if ( (v59 & 0x20) != 0 )
        v57 |= 0x20uLL;
      if ( (v59 & 0x42) != 0 )
        v57 |= 0x42uLL;
    }
    else
    {
      v57 = v159;
    }
  }
  if ( v53 != ((v57 >> 12) & 0xFFFFFFFFFLL) )
  {
LABEL_366:
    _InterlockedAnd64((volatile signed __int64 *)(v54 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( CurrentIrql != 17 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v151 = KeGetCurrentIrql();
          if ( v151 <= 0xFu && CurrentIrql <= 0xFu && v151 >= 2u )
          {
            v152 = KeGetCurrentPrcb();
            v153 = v152->SchedulerAssist;
            v154 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v78 = (v154 & v153[5]) == 0;
            v153[5] &= v154;
            if ( v78 )
              KiRemoveSystemWorkPriorityKick(v152);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
    goto LABEL_375;
  }
  if ( !(unsigned int)MiAreChargesNeededToLockPage(v54) )
    goto LABEL_152;
  if ( (unsigned int)MI_PFN_IS_PROTO(v54) && (*(_DWORD *)(v54 + 16) & 0x400LL) != 0 )
  {
    v66 = 1;
  }
  else
  {
    IsPfnCommitNotCharged = MiIsPfnCommitNotCharged(v64, v63, v65);
    v66 = v68;
    if ( IsPfnCommitNotCharged )
      v66 = 1;
  }
  v69 = (*(_QWORD *)(v54 + 40) >> 39) & 0x3FFLL;
  v70 = *(ULONG_PTR **)(qword_140C4E648 + 8 * v69);
  if ( !v66 || (unsigned int)MiChargeCommit(*(_QWORD *)(qword_140C4E648 + 8 * v69), 1uLL, 4u) )
  {
    v62 = &MiSystemPartition;
    if ( v70 == &MiSystemPartition )
    {
      v60 = (__int64)KeGetCurrentPrcb();
      v71 = *(_DWORD *)(v60 + 33564);
      if ( v71 )
      {
        v61 = 0xFFFFFFFFLL;
        do
        {
          if ( v71 == -1 )
            break;
          v72 = v71;
          v71 = _InterlockedCompareExchange((volatile signed __int32 *)(v60 + 33564), v71 - 1, v71);
          if ( v72 == v71 )
            goto LABEL_152;
        }
        while ( v71 );
      }
    }
    v73 = MiChargePartitionResidentAvailable((__int64)v70, 1uLL, 0xFFFFFFFFLL);
    if ( !v73 && v66 )
      MiReturnCommit((__int64)v70, 1LL);
    if ( v73 )
LABEL_152:
      ++*(_WORD *)(v54 + 32);
  }
  if ( CurrentIrql == 17 )
  {
    LOBYTE(v60) = 17;
    MiLockOwnedProtoPage(v54, v60, v61, v62);
  }
  else
  {
    v155 = CurrentIrql;
    v160 = 0;
    v74 = (volatile signed __int64 *)(*(_QWORD *)(v54 + 8) | 0x8000000000000000uLL);
    v179 = v74;
    v75 = *(_BYTE *)(v54 + 34);
    if ( (v75 & 0x20) != 0 )
    {
      do
      {
        _InterlockedAnd64((volatile signed __int64 *)(v54 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v76 = KeGetCurrentIrql();
            if ( v76 <= 0xFu && CurrentIrql <= 0xFu && v76 >= 2u )
            {
              v62 = (ULONG_PTR *)KeGetCurrentPrcb();
              v61 = v62[4247];
              v77 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v78 = (v77 & *(_DWORD *)(v61 + 20)) == 0;
              v60 = (unsigned int)v77 & *(_DWORD *)(v61 + 20);
              *(_DWORD *)(v61 + 20) = v60;
              if ( v78 )
                KiRemoveSystemWorkPriorityKick(v62);
            }
          }
        }
        __writecr8(CurrentIrql);
        v160 = 0;
        while ( (*(_BYTE *)(v54 + 34) & 0x20) != 0 )
          KeYieldProcessorEx(&v160, v60, v61, (__int64)v62);
        MiLockPageInline(v54, v60, v61, v62);
        v75 = *(_BYTE *)(v54 + 34);
      }
      while ( (v75 & 0x20) != 0 );
      v74 = v179;
      v56 = v164;
    }
    *(_BYTE *)(v54 + 34) = v75 | 0x20;
    if ( (*(_QWORD *)(v54 + 24) & 0x4000000000000000LL) == 0 && (*(_BYTE *)v74 & 0x20) == 0 )
      MiWriteValidPteVolatile(v74, 1, 0);
    _InterlockedAnd64((volatile signed __int64 *)(v54 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  v79 = v165;
  v80 = *(_QWORD *)v165;
  v81 = 0xFFFFF6FB7DBED000uLL;
  if ( v165 >= 0xFFFFF6FB7DBED000uLL
    && v165 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow()
    && (v80 & 1) != 0
    && ((v80 & 0x20) == 0 || (v80 & 0x42) == 0) )
  {
    v61 = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v61 )
    {
      v82 = *(_QWORD *)(v61 + 8 * ((v79 >> 3) & 0x1FF));
      v61 = v80 | 0x20;
      if ( (v82 & 0x20) == 0 )
        v61 = v80;
      v80 = v61;
      if ( (v82 & 0x42) != 0 )
        v80 = v61 | 0x42;
    }
  }
  v175 = v80;
  if ( (v80 & 1) != 0 || (v80 & 0x800) != 0 && (v80 & 0x400) == 0 || (v83 = (v80 >> 5) & 0x1F, v27 != (_DWORD)v83) )
  {
    MiUnlockProtoPoolPage(v54, v155);
LABEL_375:
    MiLockAndInsertPageInFreeList(v158);
    return 1LL;
  }
  v169 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v158 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v169, v83, v61, (__int64)v62);
      while ( *(__int64 *)(v158 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v158 + 24), 0x3FuLL) );
    v81 = 0xFFFFF6FB7DBED000uLL;
  }
  v84 = *(_QWORD *)v79;
  v85 = 0xFFFFF6FB7DBED7F8uLL;
  if ( v79 >= v81
    && v79 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow()
    && (v84 & 1) != 0
    && ((v84 & 0x20) == 0 || (v84 & 0x42) == 0) )
  {
    v86 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v86 )
    {
      v87 = *((_QWORD *)&v86->Flink + ((v79 >> 3) & 0x1FF));
      v88 = v84 | 0x20;
      if ( (v87 & 0x20) == 0 )
        v88 = v84;
      v84 = v88;
      if ( (v87 & 0x42) != 0 )
        v84 = v88 | 0x42;
    }
  }
  v89 = -9LL;
  if ( (v84 & 0x400) != 0 )
    v89 = -2049LL;
  *(_QWORD *)(v158 + 16) = v84 & v89;
  *(_QWORD *)(v158 + 40) |= 0x8000000000000000uLL;
  v90 = *(_QWORD *)(v158 + 40);
  if ( v27 )
  {
    if ( v27 == 31 )
    {
      v91 = 1;
    }
    else if ( v27 >> 3 == 3 && (v27 & 7) != 0 )
    {
      v91 = 2;
    }
    else
    {
      v91 = v27 >> 3 != 1;
    }
  }
  else
  {
    v91 = 3;
  }
  *(_WORD *)(v158 + 32) = 1;
  v92 = *v56;
  if ( (unsigned __int64)v56 >= v81
    && (unsigned __int64)v56 <= v85
    && (unsigned int)MiPteHasShadow()
    && (v92 & 1) != 0
    && ((v92 & 0x20) == 0 || (v92 & 0x42) == 0) )
  {
    v93 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v93 )
    {
      v94 = *((_QWORD *)&v93->Flink + (((unsigned __int64)v56 >> 3) & 0x1FF));
      v84 = v92 | 0x20;
      if ( (v94 & 0x20) == 0 )
        v84 = v92;
      v92 = v84;
      if ( (v94 & 0x42) != 0 )
        v92 = v84 | 0x42;
    }
  }
  v172 = v92;
  if ( (unsigned __int64)&v172 >= v81
    && (unsigned __int64)&v172 <= v85
    && (unsigned int)MiPteHasShadow()
    && (v92 & 1) != 0
    && ((v92 & 0x20) == 0 || (v92 & 0x42) == 0) )
  {
    v84 = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v84 )
    {
      v95 = *(_QWORD *)(v84 + 8 * (((unsigned __int64)&v172 >> 3) & 0x1FF));
      v84 = v92 | 0x20;
      if ( (v95 & 0x20) == 0 )
        v84 = v92;
      v92 = v84;
      if ( (v95 & 0x42) != 0 )
        v92 = v84 | 0x42;
    }
  }
  v96 = (v92 >> 12) & 0xFFFFFFFFFLL;
  *(_QWORD *)(v158 + 40) = v90 ^ (v90 ^ v96) & 0xFFFFFFFFFLL;
  v97 = 48 * v96;
  CurrentThread = KeGetCurrentThread();
  if ( ((__int64)CurrentThread[1].Queue & 0x100) != 0 )
  {
    v161 = (unsigned __int64)((__int64)CurrentThread[1].Queue & 0xE00) >> 9;
  }
  else
  {
    v84 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 12) & 7;
    if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
    {
      v99 = 2;
      if ( (unsigned int)v84 < 2 )
        v99 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 12) & 7;
      v84 = v99;
    }
    v161 = v84;
  }
  v170 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v97 - 0x57FFFFFFFE8LL), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v170, v84, v96, v90);
    while ( *(__int64 *)(v97 - 0x57FFFFFFFE8LL) < 0 );
  }
  *(_QWORD *)(v97 - 0x57FFFFFFFE8LL) ^= (*(_QWORD *)(v97 - 0x57FFFFFFFE8LL) ^ ((*(_QWORD *)(v97 - 0x57FFFFFFFE8LL) & 0x3FFFFFFFFFFFFFFFLL)
                                                                             + 1)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v97 - 0x57FFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
  v100 = *(_BYTE *)(v158 + 34);
  if ( v100 >> 6 != v91 )
  {
    MiChangePageAttribute(v158, v91, 1LL, (_DWORD *)v90);
    v100 = *(_BYTE *)(v158 + 34);
  }
  *(_QWORD *)(v158 + 24) = *(_QWORD *)(v158 + 24) & 0xC000000000000000uLL | 1;
  *(_BYTE *)(v158 + 35) = v161 | *(_BYTE *)(v158 + 35) & 0xF8;
  *(_QWORD *)(v158 + 8) = v165;
  v101 = v100 & 0xF8 | 6;
  *(_BYTE *)(v158 + 34) = v101;
  *(_BYTE *)(v158 + 34) = v101 | 0x10;
  if ( (a5 & 2) != 0 )
  {
    v102 = *(_BYTE *)(v158 + 35);
    if ( (v102 & 8) != 0 || (v102 & 7u) > 2 )
      *(_BYTE *)(v158 + 35) = v102 & 0xF8 | 2;
  }
  if ( (*(_DWORD *)(v173 + 56) & 0x20) != 0 || !*(_QWORD *)(v173 + 64) )
    v174 = 0LL;
  v103 = (volatile signed __int32 *)(v173 + 72);
  v104 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v104 <= 0xFu )
  {
    v90 = (__int64)KeGetCurrentPrcb()->SchedulerAssist;
    v96 = (-1 << (v104 + 1)) & 4u | *(_DWORD *)(v90 + 20);
    *(_DWORD *)(v90 + 20) = v96;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v103, v104);
  }
  else
  {
    v162 = 0;
    v105 = KeGetCurrentPrcb();
    v106 = v105->SchedulerAssist;
    if ( v106 )
    {
      if ( v105->NestingLevel <= 1u )
      {
        v107 = v106[6];
        v106[6] = v107 + 1;
        if ( v107 == -1 )
          KiRemoveSystemWorkPriorityKick(v105);
      }
    }
    if ( _interlockedbittestandset(v103, 0x1Fu) )
    {
      KiSetVpThreadSpinLockCount(v105, 0LL);
      v162 = ExpWaitForSpinLockExclusiveAndAcquire((unsigned __int64)v103, v104, v108, v109);
    }
    v110 = *(unsigned int *)v103;
    if ( (*v103 & 0xBFFFFFFF) != 0x80000000 )
    {
      do
      {
        if ( (v110 & 0x40000000) == 0 )
        {
          v111 = _InterlockedCompareExchange(v103, v110 | 0x40000000, v110);
          v78 = (_DWORD)v110 == v111;
          v110 = v111;
          if ( !v78 )
            continue;
        }
        KeYieldProcessorEx(&v162, v110, v96, v90);
        v110 = *(unsigned int *)v103;
      }
      while ( (v110 & 0xBFFFFFFF) != 0x80000000 );
    }
  }
  ++*(_QWORD *)(v173 + 32);
  if ( v174 )
    ++*(_DWORD *)(v174 + 104);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v103, retaddr);
  else
    *v103 = 0;
  v112 = KeGetCurrentPrcb();
  v113 = v112->SchedulerAssist;
  if ( v113 )
  {
    if ( v112->NestingLevel <= 1u )
    {
      v114 = v113[6] - 1;
      v113[6] = v114;
      if ( !v114 )
        KiRemoveSystemWorkPriorityKick(v112);
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v115 = KeGetCurrentIrql();
      if ( v115 <= 0xFu && v104 <= 0xFu && v115 >= 2u )
      {
        v116 = KeGetCurrentPrcb();
        v117 = v116->SchedulerAssist;
        v118 = ~(unsigned __int16)(-1LL << (v104 + 1));
        v78 = (v118 & v117[5]) == 0;
        v117[5] &= v118;
        if ( v78 )
          KiRemoveSystemWorkPriorityKick(v116);
      }
    }
  }
  __writecr8(v104);
  v119 = ((v166 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v163 & 0x1F] & 0xFFFF000000000E7FuLL | 0x121;
  if ( (v163 & 5) == 4 )
    v119 = ((v166 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v163 & 0x1F] & 0xFFFF000000000E7FuLL | 0x163;
  v120 = v119 & 0xF0FFFFFFFFFFFEFFuLL | 0xA00000000000000LL;
  v175 = v120;
  v121 = 0;
  v122 = (_QWORD *)v165;
  v123 = 0xFFFFF6FB7DBED7F8uLL;
  if ( v165 >= 0xFFFFF6FB7DBED000uLL && v165 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v121 = 1;
      if ( !HIBYTE(word_140C4E008) )
        v120 |= 0x8000000000000000uLL;
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v120 |= 0x8000000000000000uLL;
    }
  }
  *v122 = v120;
  if ( v121 )
    MiWritePteShadow((__int64)v122, v120, (__int64)v122);
  v124 = v175;
  v125 = 0LL;
  v126 = (_QWORD *)v176;
  if ( v176 >= 0xFFFFF6FB7DBED000uLL && v176 <= v123 )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v125 = 1LL;
      if ( HIBYTE(word_140C4E008) )
        goto LABEL_304;
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      goto LABEL_304;
    }
    if ( (v124 & 1) != 0 )
      v124 |= 0x8000000000000000uLL;
  }
LABEL_304:
  *v126 = v124;
  if ( (_DWORD)v125 )
    MiWritePteShadow((__int64)v126, v124, v125);
  if ( v157 )
  {
    v186 = 0LL;
    v187 = 0LL;
    MiIdentifyPfn(v158, &v186);
  }
  if ( (*(_BYTE *)(v158 + 34) & 7) != 6 )
    MiBadShareCount(v158);
  v127 = 0x3FFFFFFFFFFFFFFFLL;
  v128 = (*(_QWORD *)(v158 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
  *(_QWORD *)(v158 + 24) ^= (v128 ^ *(_QWORD *)(v158 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
  if ( !v128 )
    MiPfnShareCountIsZero(v158);
  _InterlockedAnd64((volatile signed __int64 *)(v158 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v171 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v54 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v171, v128, v127, (__int64)v126);
    while ( *(__int64 *)(v54 + 24) < 0 );
  }
  *(_BYTE *)(v54 + 34) &= ~0x20u;
  v129 = *(_WORD *)(v54 + 32);
  if ( !v129 )
    MiBadRefCount(v54);
  v130 = v129 - 1;
  *(_WORD *)(v54 + 32) = v130;
  if ( v130 || !MiIsPfnFileOnly(v54) )
  {
    v131 = *(_QWORD *)(v54 + 40);
    if ( (v131 & 0x1000000000LL) != 0 || (v131 & 0x2000000000000LL) != 0 )
      goto LABEL_355;
    v132 = *(_QWORD *)(v54 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( v130 )
    {
      if ( v130 == 1 )
      {
        if ( v132 )
          goto LABEL_326;
      }
      else if ( v130 != 2 || !v132 )
      {
        goto LABEL_355;
      }
      if ( (*(_BYTE *)(v54 + 34) & 8) == 0 )
        goto LABEL_355;
    }
LABEL_326:
    v133 = *(_QWORD *)(v54 + 8) | 0x8000000000000000uLL;
    if ( v133 > 0xFFFFF6BFFFFFFF78uLL || v133 < 0xFFFFF68000000000uLL )
    {
      v134 = *(_BYTE *)(v54 + 35);
      if ( (v134 & 0x20) != 0 )
      {
        *(_BYTE *)(v54 + 35) = v134 & 0xDF;
        goto LABEL_353;
      }
    }
    if ( (unsigned int)MI_PFN_IS_PROTO(v54) && (*(_DWORD *)(v54 + 16) & 0x400LL) != 0 )
    {
      v135 = 1;
    }
    else if ( v137 <= v139 && v137 >= 0xFFFFF68000000000uLL && (*(_BYTE *)(v54 + 35) & 0x20) != 0 )
    {
      v135 = 1;
    }
    else if ( !v130 && (v138 & 0x4000000000000000LL) != 0 )
    {
      v135 = 1;
    }
    v140 = (v136 >> 39) & 0x3FF;
    v141 = *(_QWORD *)(qword_140C4E648 + 8 * v140);
    if ( v135 == 1 )
      MiReturnCommit(*(_QWORD *)(qword_140C4E648 + 8 * v140), 1LL);
    v142 = 1LL;
    if ( (ULONG_PTR *)v141 == &MiSystemPartition )
    {
      v143 = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)v143->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable != -1 )
      {
        if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
        {
          while ( 1 )
          {
            v145 = _InterlockedCompareExchange(
                     (volatile signed __int32 *)&v143->CachedResidentAvailable,
                     CachedResidentAvailable + 1,
                     CachedResidentAvailable);
            v78 = (_DWORD)CachedResidentAvailable == v145;
            LODWORD(CachedResidentAvailable) = v145;
            if ( v78 )
              break;
            if ( v145 == -1 || (unsigned __int64)(v145 + 1LL) > 0x100 )
              goto LABEL_348;
          }
LABEL_353:
          if ( v130 )
            goto LABEL_355;
          goto LABEL_354;
        }
LABEL_348:
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&v143->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v142 = (int)CachedResidentAvailable - 192 + 1LL;
        }
        if ( !v142 )
          goto LABEL_353;
      }
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v141 + 7168), v142);
    goto LABEL_353;
  }
LABEL_354:
  MiPfnReferenceCountIsZero(v54, v178 / 48);
LABEL_355:
  _InterlockedAnd64((volatile signed __int64 *)(v54 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v146 = v155;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v147 = KeGetCurrentIrql();
      if ( v147 <= 0xFu && v155 <= 0xFu && v147 >= 2u )
      {
        v148 = KeGetCurrentPrcb();
        v149 = v148->SchedulerAssist;
        v146 = v155;
        v150 = ~(unsigned __int16)(-1LL << (v155 + 1));
        v78 = (v150 & v149[5]) == 0;
        v149[5] &= v150;
        if ( v78 )
          KiRemoveSystemWorkPriorityKick(v148);
      }
    }
  }
  __writecr8(v146);
  *v177 = 0;
  if ( v157 )
  {
    *((_QWORD *)&v187 + 1) |= 4uLL;
    v188[0] = &v186;
    v188[1] = 32LL;
    EtwTraceKernelEvent((int)v188, 1, 0x20000001u, 642, 289413890);
  }
  return v156 != 0 ? 4 : 0;
}
