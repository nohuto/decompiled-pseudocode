/*
 * XREFs of MiMakePageAvoidRead @ 0x14032EDC0
 * Callers:
 *     MmCopyToCachedPage @ 0x14033C250 (MmCopyToCachedPage.c)
 * Callees:
 *     MiUserPdeOrAbove @ 0x14022A014 (MiUserPdeOrAbove.c)
 *     MiChargePartitionResidentAvailable @ 0x14022F028 (MiChargePartitionResidentAvailable.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiZeroPhysicalPage @ 0x1402976D0 (MiZeroPhysicalPage.c)
 *     MiReleaseFreshPage @ 0x140297AC4 (MiReleaseFreshPage.c)
 *     EtwTraceKernelEvent @ 0x14029BFE0 (EtwTraceKernelEvent.c)
 *     MiGetPage @ 0x1402B7F10 (MiGetPage.c)
 *     MiIsPfnFileOnly @ 0x1402BD660 (MiIsPfnFileOnly.c)
 *     MiChargeCommit @ 0x1402BF3D0 (MiChargeCommit.c)
 *     MiReservePtes @ 0x1402CAEB0 (MiReservePtes.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402D5E10 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiPfnZeroingNeeded @ 0x1402DD3B0 (MiPfnZeroingNeeded.c)
 *     MiUnlockProtoPoolPage @ 0x1402DE040 (MiUnlockProtoPoolPage.c)
 *     MiWriteValidPteVolatile @ 0x1402E5BC0 (MiWriteValidPteVolatile.c)
 *     MiReleasePtes @ 0x1402EA050 (MiReleasePtes.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiChangePageAttribute @ 0x14030EF34 (MiChangePageAttribute.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     MiLockOwnedProtoPage @ 0x140325070 (MiLockOwnedProtoPage.c)
 *     MiIsAddressGlobal @ 0x140329860 (MiIsAddressGlobal.c)
 *     MiAreChargesNeededToLockPage @ 0x14032E180 (MiAreChargesNeededToLockPage.c)
 *     MiPfnReferenceCountIsZero @ 0x140330B40 (MiPfnReferenceCountIsZero.c)
 *     MiPfnShareCountIsZero @ 0x140330EE0 (MiPfnShareCountIsZero.c)
 *     MiIsPfnCommitNotCharged @ 0x140332020 (MiIsPfnCommitNotCharged.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiIdentifyPfn @ 0x140353FA0 (MiIdentifyPfn.c)
 *     KiSetVpThreadSpinLockCount @ 0x1403562E0 (KiSetVpThreadSpinLockCount.c)
 *     MiLockAndInsertPageInFreeList @ 0x1403B767C (MiLockAndInsertPageInFreeList.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     MiBadRefCount @ 0x1403F48DC (MiBadRefCount.c)
 *     MiBadShareCount @ 0x1403F4934 (MiBadShareCount.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiWaitForFreePage @ 0x14055C43C (MiWaitForFreePage.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B5DD8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B5FBC (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiMapCacheExceptionFilter @ 0x1408C854C (MiMapCacheExceptionFilter.c)
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
  ULONG_PTR v32; // r14
  unsigned __int64 v33; // r14
  unsigned __int64 v34; // rbx
  _DWORD *SchedulerAssist; // r8
  __int64 v36; // r9
  int v37; // r15d
  struct _LIST_ENTRY *v38; // rdx
  char v39; // dl
  int v40; // eax
  ULONG_PTR v41; // rbx
  unsigned __int64 v42; // rdi
  int v43; // eax
  unsigned __int64 v44; // rdi
  int v45; // ebx
  __int64 v46; // rcx
  char *v47; // rdi
  __int64 v48; // rax
  __int64 v49; // rbx
  __int64 v50; // rdx
  __int64 v51; // rdi
  unsigned __int8 CurrentIrql; // r12
  unsigned __int64 *v53; // r13
  unsigned __int64 v54; // rax
  struct _LIST_ENTRY *v55; // r8
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // r8
  ULONG_PTR *v59; // r9
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  char v63; // r14
  int IsPfnCommitNotCharged; // eax
  char v65; // r10
  __int64 v66; // rcx
  ULONG_PTR *v67; // r15
  signed __int32 v68; // eax
  signed __int32 v69; // ett
  int v70; // ebx
  volatile signed __int64 *v71; // rbx
  char v72; // al
  unsigned __int8 v73; // al
  int v74; // ecx
  bool v75; // zf
  unsigned __int64 v76; // rbx
  unsigned __int64 v77; // rdx
  unsigned __int64 v78; // r11
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rdx
  unsigned __int64 v82; // r10
  struct _LIST_ENTRY *v83; // r8
  __int64 v84; // rax
  __int64 v85; // r8
  __int64 v86; // rax
  __int64 v87; // r9
  unsigned int v88; // esi
  unsigned __int64 v89; // r8
  struct _LIST_ENTRY *v90; // rax
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // r8
  __int64 v94; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v96; // eax
  unsigned __int8 v97; // cl
  char v98; // cl
  char v99; // cl
  volatile signed __int32 *v100; // rbx
  unsigned __int8 v101; // r14
  struct _KPRCB *v102; // rsi
  _DWORD *v103; // rcx
  int v104; // eax
  __int64 v105; // r8
  _DWORD *v106; // r9
  __int64 v107; // rdx
  unsigned __int32 v108; // eax
  struct _KPRCB *v109; // rcx
  _DWORD *v110; // rdx
  int v111; // eax
  unsigned __int8 v112; // al
  struct _KPRCB *v113; // r10
  _DWORD *v114; // r9
  int v115; // eax
  ULONG_PTR v116; // rbx
  unsigned __int64 v117; // rbx
  int v118; // edx
  _QWORD *v119; // r8
  unsigned __int64 v120; // r11
  __int64 v121; // rdx
  int v122; // r8d
  _QWORD *v123; // r9
  __int64 v124; // r8
  __int64 v125; // rdx
  __int16 v126; // bx
  __int16 v127; // bx
  __int64 v128; // r8
  __int64 v129; // rax
  unsigned __int64 v130; // r9
  char v131; // al
  int v132; // edx
  unsigned __int64 v133; // r8
  unsigned __int64 v134; // r9
  __int64 v135; // r10
  unsigned __int64 v136; // r11
  __int64 v137; // r8
  __int64 v138; // rsi
  unsigned __int64 v139; // r8
  struct _KPRCB *v140; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v142; // eax
  unsigned __int8 v143; // bl
  unsigned __int8 v144; // al
  struct _KPRCB *v145; // r9
  _DWORD *v146; // r8
  int v147; // eax
  unsigned __int8 v148; // al
  struct _KPRCB *v149; // r9
  _DWORD *v150; // r8
  int v151; // eax
  unsigned __int8 v152; // [rsp+30h] [rbp-148h]
  int v153; // [rsp+34h] [rbp-144h]
  int v154; // [rsp+38h] [rbp-140h]
  __int64 v155; // [rsp+40h] [rbp-138h]
  unsigned __int64 v156; // [rsp+48h] [rbp-130h] BYREF
  int v157; // [rsp+50h] [rbp-128h] BYREF
  unsigned int v158; // [rsp+54h] [rbp-124h]
  int v159; // [rsp+58h] [rbp-120h] BYREF
  unsigned int v160; // [rsp+5Ch] [rbp-11Ch]
  unsigned __int64 *v161; // [rsp+60h] [rbp-118h]
  unsigned __int64 v162; // [rsp+68h] [rbp-110h]
  ULONG_PTR v163; // [rsp+70h] [rbp-108h]
  unsigned int v164; // [rsp+78h] [rbp-100h]
  int v165; // [rsp+7Ch] [rbp-FCh] BYREF
  int v166; // [rsp+80h] [rbp-F8h] BYREF
  int v167; // [rsp+84h] [rbp-F4h] BYREF
  int v168; // [rsp+88h] [rbp-F0h] BYREF
  unsigned __int64 v169; // [rsp+90h] [rbp-E8h] BYREF
  __int64 v170; // [rsp+98h] [rbp-E0h]
  __int64 v171; // [rsp+A0h] [rbp-D8h]
  __int64 v172; // [rsp+A8h] [rbp-D0h]
  unsigned __int64 v173; // [rsp+B0h] [rbp-C8h]
  _DWORD *v174; // [rsp+B8h] [rbp-C0h]
  __int64 v175; // [rsp+C0h] [rbp-B8h]
  volatile signed __int64 *v176; // [rsp+C8h] [rbp-B0h]
  void *Src; // [rsp+D0h] [rbp-A8h]
  __int64 v178; // [rsp+D8h] [rbp-A0h]
  ULONG_PTR v179; // [rsp+E0h] [rbp-98h]
  __int64 v180; // [rsp+E8h] [rbp-90h]
  __int64 v181; // [rsp+F0h] [rbp-88h]
  __int64 v182; // [rsp+F8h] [rbp-80h]
  __int128 v183; // [rsp+100h] [rbp-78h] BYREF
  __int128 v184; // [rsp+110h] [rbp-68h]
  _QWORD v185[2]; // [rsp+128h] [rbp-50h] BYREF
  void *retaddr; // [rsp+178h] [rbp+0h]

  v8 = a3;
  Src = a2;
  v162 = a1;
  v173 = a6;
  v175 = a1;
  v176 = (volatile signed __int64 *)a6;
  v174 = a7;
  v152 = 0;
  v183 = 0LL;
  v184 = 0LL;
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
  v172 = v9;
  if ( qword_140C4DF80 )
  {
    if ( (v9 & 0x10) != 0 )
      v9 &= ~0x10uLL;
    else
      v9 &= ~qword_140C4DF80;
  }
  v171 = v9 >> 16;
  v181 = v9 >> 16;
  v170 = *(_QWORD *)(v9 >> 16);
  v180 = v170;
  v13 = *(_QWORD *)(qword_140C4E688 + 8LL * (*(_WORD *)(v170 + 60) & 0x3FF));
  if ( ((*(_DWORD *)(v170 + 56) >> 20) & 0x3F) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    NodeShiftedColor = (((*(_DWORD *)(v170 + 56) >> 20) & 0x3F) - 1) << byte_140C4DECC;
  }
  else
  {
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    NodeShiftedColor = CurrentPrcb->NodeShiftedColor;
  }
  v16 = (1 << byte_140C4DECD) - 1;
  v17 = v16 & _InterlockedExchangeAdd((volatile signed __int32 *)&CurrentPrcb->PageColor, 1u);
  v18 = 0LL;
  if ( a4 != 4096 )
    v18 = 2LL;
  Page = MiGetPage(v13, NodeShiftedColor | (unsigned int)v17, v18);
  v163 = Page;
  v182 = Page;
  if ( Page == -1 )
  {
    MiWaitForFreePage(v13);
    return 1LL;
  }
  v22 = 48 * Page - 0x58000000000LL;
  v155 = v22;
  v178 = v22;
  v23 = *(_QWORD *)a6;
  if ( v173 >= 0xFFFFF6FB7DBED000uLL
    && v173 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v23 & 1) != 0
    && ((v23 & 0x20) == 0 || (v23 & 0x42) == 0) )
  {
    v24 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v24 )
    {
      v25 = *((_QWORD *)&v24->Flink + ((v173 >> 3) & 0x1FF));
      v26 = v23 | 0x20;
      if ( (v25 & 0x20) == 0 )
        v26 = *(_QWORD *)a6;
      v23 = v26;
      if ( (v25 & 0x42) != 0 )
        v23 = v26 | 0x42;
    }
  }
  v27 = (v23 >> 5) & 0x1F;
  v164 = v27;
  v160 = v27;
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
  v153 = 0;
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
  v32 = MiReservePtes((__int64)&qword_140C4EF80, 1u, 0xF0FFFFFFFFFFFFFFuLL, (unsigned __int64)v20);
  v179 = v32;
  if ( v32 )
  {
    v39 = 4;
    if ( v163 <= 0xFFFFFFFFFLL && (*(_QWORD *)(48 * v163 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0 )
    {
      v40 = *(unsigned __int8 *)(48 * v163 - 0x57FFFFFFFDELL) >> 6;
      if ( !v40 || v40 == 3 )
      {
        v39 = 12;
      }
      else if ( v40 == 2 )
      {
        v39 = 28;
      }
    }
    v41 = ((v163 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v39 & 0x1F] & 0xFFFF000000000E7FuLL | 0x21;
    if ( v32 >= 0xFFFFF68000000000uLL && v32 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      v42 = (__int64)(v32 << 25) >> 16;
      if ( v32 >= 0xFFFFF6FB40000000uLL && v32 <= 0xFFFFF6FB7FFFFFFFuLL )
      {
        v41 = v32 == 0xFFFFF6FB7DBEDF68uLL
            ? ((v163 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v39 & 0x1F] & 0xFFFF000000000E7FuLL | 0x8000000000000021uLL
            : ((v163 & 0xFFFFFFFFFLL) << 12) & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v39 & 0x1F] & 0x7FFF000000000E7FLL | 0x21;
        if ( (unsigned int)MiUserPdeOrAbove(v32) )
          v41 |= 4uLL;
      }
      if ( v32 <= 0xFFFFF6BFFFFFFF78uLL )
        v41 |= 4uLL;
      if ( v42 >= 0xFFFF800000000000uLL )
      {
        if ( byte_140C4FA08[((v42 >> 39) & 0x1FF) - 256] == 1
          || v42 >= 0xFFFFF68000000000uLL && v42 <= 0xFFFFF6FFFFFFFFFFuLL )
        {
LABEL_94:
          v44 = v41 & 0xFAFFFFFFFFFFFEFFuLL | ((unsigned __int64)(word_140C4E048 & 1) << 8) | 0xA00000000000042LL;
          v45 = 0;
          if ( (unsigned int)MiPteInShadowRange(v32) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v45 = 1;
              if ( !HIBYTE(word_140C4E048) )
                goto LABEL_99;
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
LABEL_99:
              v44 |= 0x8000000000000000uLL;
            }
          }
          *(_QWORD *)v32 = v44;
          if ( v45 )
            MiWritePteShadow(v32, v44);
          v46 = (__int64)(v32 << 25) >> 16;
          v47 = (char *)(v46 + v8);
          if ( v29 )
          {
            if ( (_DWORD)v8 )
              memset((void *)v46, 0, v8);
            if ( 4096 - v8 != a4 )
              memset(&v47[a4], 0, 4096 - v8 - a4);
          }
          memmove(v47, Src, a4);
          MiReleasePtes((__int64)&qword_140C4EF80, (_QWORD *)v32, 1u);
          goto LABEL_56;
        }
        if ( v42 < qword_140C4FB78 || (v43 = HIBYTE(word_140C4E048), v42 > qword_140C4E3A8) )
          v43 = (unsigned __int8)word_140C4E048;
      }
      else
      {
        v43 = HIBYTE(word_140C4E048);
      }
      if ( !v43 )
        goto LABEL_94;
    }
    v41 |= 0x100uLL;
    goto LABEL_94;
  }
  if ( (a5 & 1) == 0 )
  {
    MiReleaseFreshPage(v22);
    return 4LL;
  }
  if ( v29 )
    MiZeroPhysicalPage(v163, 1, v28);
  v153 = 1;
LABEL_56:
  v154 = BYTE4(PerfGlobalGroupMask) & 1;
  v161 = (unsigned __int64 *)(((v162 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v156 = *v161;
  v33 = v156 & 1;
  do
  {
    if ( !v33 )
      goto LABEL_375;
    v34 = v156;
    if ( (v156 & 0x200) != 0 )
      goto LABEL_375;
    v37 = MiPteInShadowRange(&v156);
    if ( v37
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && ((v34 & 0x20) == 0 || (v34 & 0x42) == 0) )
    {
      v38 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v38 )
      {
        v48 = *((_QWORD *)&v38->Flink + (((unsigned __int64)&v156 >> 3) & 0x1FF));
        if ( (v48 & 0x20) != 0 )
          v34 |= 0x20uLL;
        if ( (v48 & 0x42) != 0 )
          v34 |= 0x42uLL;
      }
      else
      {
        v34 = v156;
      }
    }
    v49 = (v34 >> 12) & 0xFFFFFFFFFLL;
    v50 = 48 * v49;
    v175 = 48 * v49;
  }
  while ( (*(_QWORD *)(48 * v49 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 );
  v51 = v50 - 0x58000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v50 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
    SchedulerAssist[5] = v50;
  }
  v165 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v51 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v165, v50, (__int64)SchedulerAssist, v36);
    while ( *(__int64 *)(v51 + 24) < 0 );
  }
  v53 = v161;
  v54 = *v161;
  v156 = v54;
  if ( (v54 & 1) == 0 || (v54 & 0x200) != 0 )
    goto LABEL_366;
  if ( v37
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && ((v54 & 0x20) == 0 || (v54 & 0x42) == 0) )
  {
    v55 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v55 )
    {
      v56 = *((_QWORD *)&v55->Flink + (((unsigned __int64)&v156 >> 3) & 0x1FF));
      if ( (v56 & 0x20) != 0 )
        v54 |= 0x20uLL;
      if ( (v56 & 0x42) != 0 )
        v54 |= 0x42uLL;
    }
    else
    {
      v54 = v156;
    }
  }
  if ( v49 != ((v54 >> 12) & 0xFFFFFFFFFLL) )
  {
LABEL_366:
    _InterlockedAnd64((volatile signed __int64 *)(v51 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( CurrentIrql != 17 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v148 = KeGetCurrentIrql();
          if ( v148 <= 0xFu && CurrentIrql <= 0xFu && v148 >= 2u )
          {
            v149 = KeGetCurrentPrcb();
            v150 = v149->SchedulerAssist;
            v151 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v75 = (v151 & v150[5]) == 0;
            v150[5] &= v151;
            if ( v75 )
              KiRemoveSystemWorkPriorityKick(v149);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
    goto LABEL_375;
  }
  if ( !(unsigned int)MiAreChargesNeededToLockPage(v51) )
    goto LABEL_152;
  if ( (unsigned int)MI_PFN_IS_PROTO(v51) && (*(_DWORD *)(v51 + 16) & 0x400LL) != 0 )
  {
    v63 = 1;
  }
  else
  {
    IsPfnCommitNotCharged = MiIsPfnCommitNotCharged(v61, v60, v62);
    v63 = v65;
    if ( IsPfnCommitNotCharged )
      v63 = 1;
  }
  v66 = (*(_QWORD *)(v51 + 40) >> 39) & 0x3FFLL;
  v67 = *(ULONG_PTR **)(qword_140C4E688 + 8 * v66);
  if ( !v63 || (unsigned int)MiChargeCommit(*(_QWORD *)(qword_140C4E688 + 8 * v66), 1uLL, 4u) )
  {
    v59 = &MiSystemPartition;
    if ( v67 == &MiSystemPartition )
    {
      v57 = (__int64)KeGetCurrentPrcb();
      v68 = *(_DWORD *)(v57 + 33564);
      if ( v68 )
      {
        v58 = 0xFFFFFFFFLL;
        do
        {
          if ( v68 == -1 )
            break;
          v69 = v68;
          v68 = _InterlockedCompareExchange((volatile signed __int32 *)(v57 + 33564), v68 - 1, v68);
          if ( v69 == v68 )
            goto LABEL_152;
        }
        while ( v68 );
      }
    }
    v70 = MiChargePartitionResidentAvailable((__int64)v67, 1uLL, 0xFFFFFFFFLL);
    if ( !v70 && v63 )
      MiReturnCommit((__int64)v67, 1LL);
    if ( v70 )
LABEL_152:
      ++*(_WORD *)(v51 + 32);
  }
  if ( CurrentIrql == 17 )
  {
    LOBYTE(v57) = 17;
    MiLockOwnedProtoPage(v51, v57, v58, v59);
  }
  else
  {
    v152 = CurrentIrql;
    v157 = 0;
    v71 = (volatile signed __int64 *)(*(_QWORD *)(v51 + 8) | 0x8000000000000000uLL);
    v176 = v71;
    v72 = *(_BYTE *)(v51 + 34);
    if ( (v72 & 0x20) != 0 )
    {
      do
      {
        _InterlockedAnd64((volatile signed __int64 *)(v51 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v73 = KeGetCurrentIrql();
            if ( v73 <= 0xFu && CurrentIrql <= 0xFu && v73 >= 2u )
            {
              v59 = (ULONG_PTR *)KeGetCurrentPrcb();
              v58 = v59[4247];
              v74 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v75 = (v74 & *(_DWORD *)(v58 + 20)) == 0;
              v57 = (unsigned int)v74 & *(_DWORD *)(v58 + 20);
              *(_DWORD *)(v58 + 20) = v57;
              if ( v75 )
                KiRemoveSystemWorkPriorityKick(v59);
            }
          }
        }
        __writecr8(CurrentIrql);
        v157 = 0;
        while ( (*(_BYTE *)(v51 + 34) & 0x20) != 0 )
          KeYieldProcessorEx(&v157, v57, v58, (__int64)v59);
        MiLockPageInline(v51, v57, v58, v59);
        v72 = *(_BYTE *)(v51 + 34);
      }
      while ( (v72 & 0x20) != 0 );
      v71 = v176;
      v53 = v161;
    }
    *(_BYTE *)(v51 + 34) = v72 | 0x20;
    if ( (*(_QWORD *)(v51 + 24) & 0x4000000000000000LL) == 0 && (*(_BYTE *)v71 & 0x20) == 0 )
      MiWriteValidPteVolatile(v71, 1, 0);
    _InterlockedAnd64((volatile signed __int64 *)(v51 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  v76 = v162;
  v77 = *(_QWORD *)v162;
  v78 = 0xFFFFF6FB7DBED000uLL;
  if ( v162 >= 0xFFFFF6FB7DBED000uLL
    && v162 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow()
    && (v77 & 1) != 0
    && ((v77 & 0x20) == 0 || (v77 & 0x42) == 0) )
  {
    v58 = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v58 )
    {
      v79 = *(_QWORD *)(v58 + 8 * ((v76 >> 3) & 0x1FF));
      v58 = v77 | 0x20;
      if ( (v79 & 0x20) == 0 )
        v58 = v77;
      v77 = v58;
      if ( (v79 & 0x42) != 0 )
        v77 = v58 | 0x42;
    }
  }
  v172 = v77;
  if ( (v77 & 1) != 0 || (v77 & 0x800) != 0 && (v77 & 0x400) == 0 || (v80 = (v77 >> 5) & 0x1F, v27 != (_DWORD)v80) )
  {
    MiUnlockProtoPoolPage(v51, v152);
LABEL_375:
    MiLockAndInsertPageInFreeList(v155);
    return 1LL;
  }
  v166 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v155 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v166, v80, v58, (__int64)v59);
      while ( *(__int64 *)(v155 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v155 + 24), 0x3FuLL) );
    v78 = 0xFFFFF6FB7DBED000uLL;
  }
  v81 = *(_QWORD *)v76;
  v82 = 0xFFFFF6FB7DBED7F8uLL;
  if ( v76 >= v78
    && v76 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow()
    && (v81 & 1) != 0
    && ((v81 & 0x20) == 0 || (v81 & 0x42) == 0) )
  {
    v83 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v83 )
    {
      v84 = *((_QWORD *)&v83->Flink + ((v76 >> 3) & 0x1FF));
      v85 = v81 | 0x20;
      if ( (v84 & 0x20) == 0 )
        v85 = v81;
      v81 = v85;
      if ( (v84 & 0x42) != 0 )
        v81 = v85 | 0x42;
    }
  }
  v86 = -9LL;
  if ( (v81 & 0x400) != 0 )
    v86 = -2049LL;
  *(_QWORD *)(v155 + 16) = v81 & v86;
  *(_QWORD *)(v155 + 40) |= 0x8000000000000000uLL;
  v87 = *(_QWORD *)(v155 + 40);
  if ( v27 )
  {
    if ( v27 == 31 )
    {
      v88 = 1;
    }
    else if ( v27 >> 3 == 3 && (v27 & 7) != 0 )
    {
      v88 = 2;
    }
    else
    {
      v88 = v27 >> 3 != 1;
    }
  }
  else
  {
    v88 = 3;
  }
  *(_WORD *)(v155 + 32) = 1;
  v89 = *v53;
  if ( (unsigned __int64)v53 >= v78
    && (unsigned __int64)v53 <= v82
    && (unsigned int)MiPteHasShadow()
    && (v89 & 1) != 0
    && ((v89 & 0x20) == 0 || (v89 & 0x42) == 0) )
  {
    v90 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v90 )
    {
      v91 = *((_QWORD *)&v90->Flink + (((unsigned __int64)v53 >> 3) & 0x1FF));
      v81 = v89 | 0x20;
      if ( (v91 & 0x20) == 0 )
        v81 = v89;
      v89 = v81;
      if ( (v91 & 0x42) != 0 )
        v89 = v81 | 0x42;
    }
  }
  v169 = v89;
  if ( (unsigned __int64)&v169 >= v78
    && (unsigned __int64)&v169 <= v82
    && (unsigned int)MiPteHasShadow()
    && (v89 & 1) != 0
    && ((v89 & 0x20) == 0 || (v89 & 0x42) == 0) )
  {
    v81 = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v81 )
    {
      v92 = *(_QWORD *)(v81 + 8 * (((unsigned __int64)&v169 >> 3) & 0x1FF));
      v81 = v89 | 0x20;
      if ( (v92 & 0x20) == 0 )
        v81 = v89;
      v89 = v81;
      if ( (v92 & 0x42) != 0 )
        v89 = v81 | 0x42;
    }
  }
  v93 = (v89 >> 12) & 0xFFFFFFFFFLL;
  *(_QWORD *)(v155 + 40) = v87 ^ (v87 ^ v93) & 0xFFFFFFFFFLL;
  v94 = 48 * v93;
  CurrentThread = KeGetCurrentThread();
  if ( ((__int64)CurrentThread[1].Queue & 0x100) != 0 )
  {
    v158 = (unsigned __int64)((__int64)CurrentThread[1].Queue & 0xE00) >> 9;
  }
  else
  {
    v81 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 12) & 7;
    if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
    {
      v96 = 2;
      if ( (unsigned int)v81 < 2 )
        v96 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 12) & 7;
      v81 = v96;
    }
    v158 = v81;
  }
  v167 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v94 - 0x57FFFFFFFE8LL), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v167, v81, v93, v87);
    while ( *(__int64 *)(v94 - 0x57FFFFFFFE8LL) < 0 );
  }
  *(_QWORD *)(v94 - 0x57FFFFFFFE8LL) ^= (*(_QWORD *)(v94 - 0x57FFFFFFFE8LL) ^ ((*(_QWORD *)(v94 - 0x57FFFFFFFE8LL) & 0x3FFFFFFFFFFFFFFFLL)
                                                                             + 1)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v94 - 0x57FFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
  v97 = *(_BYTE *)(v155 + 34);
  if ( v97 >> 6 != v88 )
  {
    MiChangePageAttribute(v155, v88, 1LL, (_DWORD *)v87);
    v97 = *(_BYTE *)(v155 + 34);
  }
  *(_QWORD *)(v155 + 24) = *(_QWORD *)(v155 + 24) & 0xC000000000000000uLL | 1;
  *(_BYTE *)(v155 + 35) = v158 | *(_BYTE *)(v155 + 35) & 0xF8;
  *(_QWORD *)(v155 + 8) = v162;
  v98 = v97 & 0xF8 | 6;
  *(_BYTE *)(v155 + 34) = v98;
  *(_BYTE *)(v155 + 34) = v98 | 0x10;
  if ( (a5 & 2) != 0 )
  {
    v99 = *(_BYTE *)(v155 + 35);
    if ( (v99 & 8) != 0 || (v99 & 7u) > 2 )
      *(_BYTE *)(v155 + 35) = v99 & 0xF8 | 2;
  }
  if ( (*(_DWORD *)(v170 + 56) & 0x20) != 0 || !*(_QWORD *)(v170 + 64) )
    v171 = 0LL;
  v100 = (volatile signed __int32 *)(v170 + 72);
  v101 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v101 <= 0xFu )
  {
    v87 = (__int64)KeGetCurrentPrcb()->SchedulerAssist;
    v93 = (-1 << (v101 + 1)) & 4u | *(_DWORD *)(v87 + 20);
    *(_DWORD *)(v87 + 20) = v93;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v100, v101);
  }
  else
  {
    v159 = 0;
    v102 = KeGetCurrentPrcb();
    v103 = v102->SchedulerAssist;
    if ( v103 )
    {
      if ( v102->NestingLevel <= 1u )
      {
        v104 = v103[6];
        v103[6] = v104 + 1;
        if ( v104 == -1 )
          KiRemoveSystemWorkPriorityKick(v102);
      }
    }
    if ( _interlockedbittestandset(v100, 0x1Fu) )
    {
      KiSetVpThreadSpinLockCount(v102, 0LL);
      v159 = ExpWaitForSpinLockExclusiveAndAcquire((unsigned __int64)v100, v101, v105, v106);
    }
    v107 = *(unsigned int *)v100;
    if ( (*v100 & 0xBFFFFFFF) != 0x80000000 )
    {
      do
      {
        if ( (v107 & 0x40000000) == 0 )
        {
          v108 = _InterlockedCompareExchange(v100, v107 | 0x40000000, v107);
          v75 = (_DWORD)v107 == v108;
          v107 = v108;
          if ( !v75 )
            continue;
        }
        KeYieldProcessorEx(&v159, v107, v93, v87);
        v107 = *(unsigned int *)v100;
      }
      while ( (v107 & 0xBFFFFFFF) != 0x80000000 );
    }
  }
  ++*(_QWORD *)(v170 + 32);
  if ( v171 )
    ++*(_DWORD *)(v171 + 104);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v100, retaddr);
  else
    *v100 = 0;
  v109 = KeGetCurrentPrcb();
  v110 = v109->SchedulerAssist;
  if ( v110 )
  {
    if ( v109->NestingLevel <= 1u )
    {
      v111 = v110[6] - 1;
      v110[6] = v111;
      if ( !v111 )
        KiRemoveSystemWorkPriorityKick(v109);
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v112 = KeGetCurrentIrql();
      if ( v112 <= 0xFu && v101 <= 0xFu && v112 >= 2u )
      {
        v113 = KeGetCurrentPrcb();
        v114 = v113->SchedulerAssist;
        v115 = ~(unsigned __int16)(-1LL << (v101 + 1));
        v75 = (v115 & v114[5]) == 0;
        v114[5] &= v115;
        if ( v75 )
          KiRemoveSystemWorkPriorityKick(v113);
      }
    }
  }
  __writecr8(v101);
  v116 = ((v163 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v160 & 0x1F] & 0xFFFF000000000E7FuLL | 0x121;
  if ( (v160 & 5) == 4 )
    v116 = ((v163 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v160 & 0x1F] & 0xFFFF000000000E7FuLL | 0x163;
  v117 = v116 & 0xF0FFFFFFFFFFFEFFuLL | 0xA00000000000000LL;
  v172 = v117;
  v118 = 0;
  v119 = (_QWORD *)v162;
  v120 = 0xFFFFF6FB7DBED7F8uLL;
  if ( v162 >= 0xFFFFF6FB7DBED000uLL && v162 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v118 = 1;
      if ( !HIBYTE(word_140C4E048) )
        v117 |= 0x8000000000000000uLL;
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v117 |= 0x8000000000000000uLL;
    }
  }
  *v119 = v117;
  if ( v118 )
    MiWritePteShadow((__int64)v119, v117);
  v121 = v172;
  v122 = 0;
  v123 = (_QWORD *)v173;
  if ( v173 >= 0xFFFFF6FB7DBED000uLL && v173 <= v120 )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v122 = 1;
      if ( HIBYTE(word_140C4E048) )
        goto LABEL_304;
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      goto LABEL_304;
    }
    if ( (v121 & 1) != 0 )
      v121 |= 0x8000000000000000uLL;
  }
LABEL_304:
  *v123 = v121;
  if ( v122 )
    MiWritePteShadow((__int64)v123, v121);
  if ( v154 )
  {
    v183 = 0LL;
    v184 = 0LL;
    MiIdentifyPfn(v155, &v183);
  }
  if ( (*(_BYTE *)(v155 + 34) & 7) != 6 )
    MiBadShareCount(v155);
  v124 = 0x3FFFFFFFFFFFFFFFLL;
  v125 = (*(_QWORD *)(v155 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
  *(_QWORD *)(v155 + 24) ^= (v125 ^ *(_QWORD *)(v155 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
  if ( !v125 )
    MiPfnShareCountIsZero(v155, 0LL);
  _InterlockedAnd64((volatile signed __int64 *)(v155 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v168 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v51 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v168, v125, v124, (__int64)v123);
    while ( *(__int64 *)(v51 + 24) < 0 );
  }
  *(_BYTE *)(v51 + 34) &= ~0x20u;
  v126 = *(_WORD *)(v51 + 32);
  if ( !v126 )
    MiBadRefCount(v51);
  v127 = v126 - 1;
  *(_WORD *)(v51 + 32) = v127;
  if ( v127 || !MiIsPfnFileOnly(v51) )
  {
    v128 = *(_QWORD *)(v51 + 40);
    if ( (v128 & 0x1000000000LL) != 0 || (v128 & 0x2000000000000LL) != 0 )
      goto LABEL_355;
    v129 = *(_QWORD *)(v51 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( v127 )
    {
      if ( v127 == 1 )
      {
        if ( v129 )
          goto LABEL_326;
      }
      else if ( v127 != 2 || !v129 )
      {
        goto LABEL_355;
      }
      if ( (*(_BYTE *)(v51 + 34) & 8) == 0 )
        goto LABEL_355;
    }
LABEL_326:
    v130 = *(_QWORD *)(v51 + 8) | 0x8000000000000000uLL;
    if ( v130 > 0xFFFFF6BFFFFFFF78uLL || v130 < 0xFFFFF68000000000uLL )
    {
      v131 = *(_BYTE *)(v51 + 35);
      if ( (v131 & 0x20) != 0 )
      {
        *(_BYTE *)(v51 + 35) = v131 & 0xDF;
        goto LABEL_353;
      }
    }
    if ( (unsigned int)MI_PFN_IS_PROTO(v51) && (*(_DWORD *)(v51 + 16) & 0x400LL) != 0 )
    {
      v132 = 1;
    }
    else if ( v134 <= v136 && v134 >= 0xFFFFF68000000000uLL && (*(_BYTE *)(v51 + 35) & 0x20) != 0 )
    {
      v132 = 1;
    }
    else if ( !v127 && (v135 & 0x4000000000000000LL) != 0 )
    {
      v132 = 1;
    }
    v137 = (v133 >> 39) & 0x3FF;
    v138 = *(_QWORD *)(qword_140C4E688 + 8 * v137);
    if ( v132 == 1 )
      MiReturnCommit(*(_QWORD *)(qword_140C4E688 + 8 * v137), 1LL);
    v139 = 1LL;
    if ( (ULONG_PTR *)v138 == &MiSystemPartition )
    {
      v140 = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)v140->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable != -1 )
      {
        if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
        {
          while ( 1 )
          {
            v142 = _InterlockedCompareExchange(
                     (volatile signed __int32 *)&v140->CachedResidentAvailable,
                     CachedResidentAvailable + 1,
                     CachedResidentAvailable);
            v75 = (_DWORD)CachedResidentAvailable == v142;
            LODWORD(CachedResidentAvailable) = v142;
            if ( v75 )
              break;
            if ( v142 == -1 || (unsigned __int64)(v142 + 1LL) > 0x100 )
              goto LABEL_348;
          }
LABEL_353:
          if ( v127 )
            goto LABEL_355;
          goto LABEL_354;
        }
LABEL_348:
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&v140->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v139 = (int)CachedResidentAvailable - 192 + 1LL;
        }
        if ( !v139 )
          goto LABEL_353;
      }
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v138 + 7168), v139);
    goto LABEL_353;
  }
LABEL_354:
  MiPfnReferenceCountIsZero(v51, v175 / 48);
LABEL_355:
  _InterlockedAnd64((volatile signed __int64 *)(v51 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v143 = v152;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v144 = KeGetCurrentIrql();
      if ( v144 <= 0xFu && v152 <= 0xFu && v144 >= 2u )
      {
        v145 = KeGetCurrentPrcb();
        v146 = v145->SchedulerAssist;
        v143 = v152;
        v147 = ~(unsigned __int16)(-1LL << (v152 + 1));
        v75 = (v147 & v146[5]) == 0;
        v146[5] &= v147;
        if ( v75 )
          KiRemoveSystemWorkPriorityKick(v145);
      }
    }
  }
  __writecr8(v143);
  *v174 = 0;
  if ( v154 )
  {
    *((_QWORD *)&v184 + 1) |= 4uLL;
    v185[0] = &v183;
    v185[1] = 32LL;
    EtwTraceKernelEvent((int)v185, 1, 0x20000001u, 642, 289413890);
  }
  return v153 != 0 ? 4 : 0;
}
