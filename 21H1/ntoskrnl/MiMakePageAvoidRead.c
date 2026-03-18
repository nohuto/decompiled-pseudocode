/*
 * XREFs of MiMakePageAvoidRead @ 0x14028B560
 * Callers:
 *     MmCopyToCachedPage @ 0x14027CC60 (MmCopyToCachedPage.c)
 * Callees:
 *     MiGetPage @ 0x140212FA0 (MiGetPage.c)
 *     MiIsPfnFileOnly @ 0x1402186F0 (MiIsPfnFileOnly.c)
 *     MiChargeCommit @ 0x14021A460 (MiChargeCommit.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14023C7F0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiReleasePtes @ 0x140247F40 (MiReleasePtes.c)
 *     MiIdentifyPfn @ 0x14025F2A0 (MiIdentifyPfn.c)
 *     KiSetVpThreadSpinLockCount @ 0x140261600 (KiSetVpThreadSpinLockCount.c)
 *     MiReservePtes @ 0x1402743A0 (MiReservePtes.c)
 *     MiReturnCommit @ 0x14027D3E0 (MiReturnCommit.c)
 *     MiLockOwnedProtoPage @ 0x140282FE0 (MiLockOwnedProtoPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402839B0 (MiUnlockProtoPoolPage.c)
 *     MiIsPfnCommitNotCharged @ 0x140285FB0 (MiIsPfnCommitNotCharged.c)
 *     MiIsAddressGlobal @ 0x140286000 (MiIsAddressGlobal.c)
 *     MiAreChargesNeededToLockPage @ 0x14028A920 (MiAreChargesNeededToLockPage.c)
 *     MiPfnReferenceCountIsZero @ 0x14028D5B0 (MiPfnReferenceCountIsZero.c)
 *     MiPfnShareCountIsZero @ 0x14028E490 (MiPfnShareCountIsZero.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiWriteValidPteVolatile @ 0x14029EE60 (MiWriteValidPteVolatile.c)
 *     MiChargePartitionResidentAvailable @ 0x1402A97C0 (MiChargePartitionResidentAvailable.c)
 *     EtwTraceKernelEvent @ 0x1402A9948 (EtwTraceKernelEvent.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiUserPdeOrAbove @ 0x1402FD5C0 (MiUserPdeOrAbove.c)
 *     MiReleaseFreshPage @ 0x140326768 (MiReleaseFreshPage.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiPfnZeroingNeeded @ 0x140349390 (MiPfnZeroingNeeded.c)
 *     MiChangePageAttribute @ 0x140350E98 (MiChangePageAttribute.c)
 *     MiZeroPhysicalPage @ 0x1403510C0 (MiZeroPhysicalPage.c)
 *     MiLockAndInsertPageInFreeList @ 0x1403B270C (MiLockAndInsertPageInFreeList.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 *     MiBadRefCount @ 0x1403ED8CC (MiBadRefCount.c)
 *     MiBadShareCount @ 0x1403ED924 (MiBadShareCount.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiWaitForFreePage @ 0x14055670C (MiWaitForFreePage.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405AFF18 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B00F4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiMapCacheExceptionFilter @ 0x1408C3A9C (MiMapCacheExceptionFilter.c)
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
  __int64 v21; // rdi
  unsigned __int64 v22; // rsi
  struct _LIST_ENTRY *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  unsigned int v26; // esi
  unsigned int v27; // ebx
  BOOL v28; // r15d
  signed __int64 i; // rdx
  signed __int64 v30; // rax
  __int64 v31; // rdx
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
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rcx
  char *v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rbx
  __int64 v52; // rdi
  unsigned __int8 CurrentIrql; // r12
  unsigned __int64 *v54; // r13
  unsigned __int64 v55; // rax
  struct _LIST_ENTRY *v56; // r8
  __int64 v57; // rcx
  __int64 v58; // rdx
  unsigned __int64 Process; // rcx
  __int64 v60; // r8
  ULONG_PTR *v61; // r9
  __int64 v62; // rcx
  char v63; // r14
  int IsPfnCommitNotCharged; // eax
  char v65; // r10
  __int64 v66; // rcx
  ULONG_PTR *v67; // r15
  signed __int32 v68; // eax
  signed __int32 v69; // ett
  int v70; // ebx
  _BYTE *v71; // rbx
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
  __int8 v98; // cl
  __int8 v99; // cl
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
  __int64 v116; // rcx
  ULONG_PTR v117; // rbx
  unsigned __int64 v118; // rbx
  int v119; // edx
  _QWORD *v120; // r8
  unsigned __int64 v121; // r11
  unsigned __int64 v122; // rdx
  int v123; // r8d
  _QWORD *v124; // r9
  __int64 v125; // r8
  __int64 v126; // rdx
  __int16 v127; // bx
  __int16 v128; // bx
  __int64 v129; // r8
  __int64 v130; // rax
  unsigned __int64 v131; // r9
  char v132; // al
  int v133; // edx
  unsigned __int64 v134; // r8
  unsigned __int64 v135; // r9
  __int64 v136; // r10
  unsigned __int64 v137; // r11
  __int64 v138; // r8
  __int64 v139; // rsi
  unsigned __int64 v140; // r8
  struct _KPRCB *v141; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v143; // eax
  unsigned __int8 v144; // bl
  unsigned __int8 v145; // al
  struct _KPRCB *v146; // r9
  _DWORD *v147; // r8
  int v148; // eax
  unsigned __int8 v149; // al
  struct _KPRCB *v150; // r9
  _DWORD *v151; // r8
  int v152; // eax
  unsigned __int8 v153; // [rsp+30h] [rbp-148h]
  int v154; // [rsp+34h] [rbp-144h]
  int v155; // [rsp+38h] [rbp-140h]
  __m128i *v156; // [rsp+40h] [rbp-138h]
  unsigned __int64 v157; // [rsp+48h] [rbp-130h] BYREF
  int v158; // [rsp+50h] [rbp-128h] BYREF
  unsigned int v159; // [rsp+54h] [rbp-124h]
  int v160; // [rsp+58h] [rbp-120h] BYREF
  unsigned int v161; // [rsp+5Ch] [rbp-11Ch]
  unsigned __int64 *v162; // [rsp+60h] [rbp-118h]
  unsigned __int64 v163; // [rsp+68h] [rbp-110h]
  ULONG_PTR v164; // [rsp+70h] [rbp-108h]
  unsigned int v165; // [rsp+78h] [rbp-100h]
  int v166; // [rsp+7Ch] [rbp-FCh] BYREF
  int v167; // [rsp+80h] [rbp-F8h] BYREF
  int v168; // [rsp+84h] [rbp-F4h] BYREF
  int v169; // [rsp+88h] [rbp-F0h] BYREF
  unsigned __int64 v170; // [rsp+90h] [rbp-E8h] BYREF
  __int64 v171; // [rsp+98h] [rbp-E0h]
  __int64 v172; // [rsp+A0h] [rbp-D8h]
  unsigned __int64 v173; // [rsp+A8h] [rbp-D0h]
  unsigned __int64 v174; // [rsp+B0h] [rbp-C8h]
  _DWORD *v175; // [rsp+B8h] [rbp-C0h]
  __int64 v176; // [rsp+C0h] [rbp-B8h]
  _BYTE *v177; // [rsp+C8h] [rbp-B0h]
  void *Src; // [rsp+D0h] [rbp-A8h]
  __int64 v179; // [rsp+D8h] [rbp-A0h]
  ULONG_PTR v180; // [rsp+E0h] [rbp-98h]
  __int64 v181; // [rsp+E8h] [rbp-90h]
  __int64 v182; // [rsp+F0h] [rbp-88h]
  __int64 v183; // [rsp+F8h] [rbp-80h]
  __int128 v184; // [rsp+100h] [rbp-78h] BYREF
  __int128 v185; // [rsp+110h] [rbp-68h]
  _QWORD v186[2]; // [rsp+128h] [rbp-50h] BYREF
  void *retaddr; // [rsp+178h] [rbp+0h]

  v8 = a3;
  Src = a2;
  v163 = a1;
  v174 = a6;
  v176 = a1;
  v177 = (_BYTE *)a6;
  v175 = a7;
  v153 = 0;
  v184 = 0LL;
  v185 = 0LL;
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
  v173 = v9;
  if ( qword_140C4DE80 )
  {
    if ( (v9 & 0x10) != 0 )
      v9 &= ~0x10uLL;
    else
      v9 &= ~qword_140C4DE80;
  }
  v172 = v9 >> 16;
  v182 = v9 >> 16;
  v171 = *(_QWORD *)(v9 >> 16);
  v181 = v171;
  v13 = *(_QWORD *)(qword_140C4E588 + 8LL * (*(_WORD *)(v171 + 60) & 0x3FF));
  if ( ((*(_DWORD *)(v171 + 56) >> 20) & 0x3F) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    NodeShiftedColor = (((*(_DWORD *)(v171 + 56) >> 20) & 0x3F) - 1) << byte_140C4DDCC;
  }
  else
  {
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    NodeShiftedColor = CurrentPrcb->NodeShiftedColor;
  }
  v16 = (1 << byte_140C4DDCD) - 1;
  v17 = v16 & _InterlockedExchangeAdd((volatile signed __int32 *)&CurrentPrcb->PageColor, 1u);
  v18 = 0LL;
  if ( a4 != 4096 )
    v18 = 2LL;
  Page = MiGetPage(v13, NodeShiftedColor | (unsigned int)v17, v18);
  v164 = Page;
  v183 = Page;
  if ( Page == -1 )
  {
    MiWaitForFreePage(v13);
    return 1LL;
  }
  v21 = 48 * Page - 0x58000000000LL;
  v156 = (__m128i *)v21;
  v179 = v21;
  v22 = *(_QWORD *)a6;
  if ( v174 >= 0xFFFFF6FB7DBED000uLL
    && v174 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v22 & 1) != 0
    && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0) )
  {
    v23 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v23 )
    {
      v24 = *((_QWORD *)&v23->Flink + ((v174 >> 3) & 0x1FF));
      v25 = v22 | 0x20;
      if ( (v24 & 0x20) == 0 )
        v25 = *(_QWORD *)a6;
      v22 = v25;
      if ( (v24 & 0x42) != 0 )
        v22 = v25 | 0x42;
    }
  }
  v26 = (v22 >> 5) & 0x1F;
  v165 = v26;
  v161 = v26;
  if ( v26 )
  {
    if ( v26 == 31 )
    {
      v27 = 1;
    }
    else if ( v26 >> 3 == 3 && (v26 & 7) != 0 )
    {
      v27 = 2;
    }
    else
    {
      v27 = v26 >> 3 != 1;
    }
  }
  else
  {
    v27 = 3;
  }
  v28 = 0;
  v154 = 0;
  if ( a4 != 4096 )
    v28 = MiPfnZeroingNeeded(v21, v27) != 0;
  if ( *(unsigned __int8 *)(v21 + 34) >> 6 != v27 )
    MiChangePageAttribute(v21, v27, 0LL);
  for ( i = *(_QWORD *)(v21 + 24); ; i = v30 )
  {
    v30 = _InterlockedCompareExchange64((volatile signed __int64 *)(v21 + 24), i & 0xF0FFFFFFFFFFFFFFuLL, i);
    if ( i == v30 )
      break;
  }
  v32 = MiReservePtes((__int64)&qword_140C4EE80, 1LL);
  v180 = v32;
  if ( v32 )
  {
    v39 = 4;
    if ( v164 <= 0xFFFFFFFFFLL && (*(_QWORD *)(48 * v164 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0 )
    {
      v40 = *(unsigned __int8 *)(48 * v164 - 0x57FFFFFFFDELL) >> 6;
      if ( !v40 || v40 == 3 )
      {
        v39 = 12;
      }
      else if ( v40 == 2 )
      {
        v39 = 28;
      }
    }
    v41 = ((v164 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v39 & 0x1F] & 0xFFFF000000000E7FuLL | 0x21;
    if ( v32 >= 0xFFFFF68000000000uLL && v32 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      v42 = (__int64)(v32 << 25) >> 16;
      if ( v32 >= 0xFFFFF6FB40000000uLL && v32 <= 0xFFFFF6FB7FFFFFFFuLL )
      {
        v41 = v32 == 0xFFFFF6FB7DBEDF68uLL
            ? ((v164 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v39 & 0x1F] & 0xFFFF000000000E7FuLL | 0x8000000000000021uLL
            : ((v164 & 0xFFFFFFFFFLL) << 12) & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v39 & 0x1F] & 0x7FFF000000000E7FLL | 0x21;
        if ( (unsigned int)MiUserPdeOrAbove(v32, 0xFFFFF68000000000uLL, 0x140000000uLL, 0xFFFFF6FFFFFFFFFFuLL) )
          v41 |= 4uLL;
      }
      if ( v32 <= 0xFFFFF6BFFFFFFF78uLL )
        v41 |= 4uLL;
      if ( v42 >= 0xFFFF800000000000uLL )
      {
        if ( byte_140C4F908[((v42 >> 39) & 0x1FF) - 256] == 1
          || v42 >= 0xFFFFF68000000000uLL && v42 <= 0xFFFFF6FFFFFFFFFFuLL )
        {
LABEL_94:
          v44 = v41 & 0xFAFFFFFFFFFFFEFFuLL | ((unsigned __int64)(word_140C4DF48 & 1) << 8) | 0xA00000000000042LL;
          v45 = 0;
          if ( (unsigned int)MiPteInShadowRange(v32, 0xFFFFF68000000000uLL) )
          {
            if ( (unsigned int)MiPteHasShadow(v47, v46) )
            {
              v45 = 1;
              if ( !HIBYTE(word_140C4DF48) )
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
          v48 = (__int64)(v32 << 25) >> 16;
          v49 = (char *)(v48 + v8);
          if ( v28 )
          {
            if ( (_DWORD)v8 )
              memset((void *)v48, 0, v8);
            if ( 4096 - v8 != a4 )
              memset(&v49[a4], 0, 4096 - v8 - a4);
          }
          memmove(v49, Src, a4);
          MiReleasePtes((__int64)&qword_140C4EE80, (_QWORD *)v32, 1u);
          goto LABEL_56;
        }
        if ( v42 < qword_140C4FA78 || (v43 = HIBYTE(word_140C4DF48), v42 > qword_140C4E2A8) )
          v43 = (unsigned __int8)word_140C4DF48;
      }
      else
      {
        v43 = HIBYTE(word_140C4DF48);
      }
      if ( !v43 )
        goto LABEL_94;
    }
    v41 |= 0x100uLL;
    goto LABEL_94;
  }
  if ( (a5 & 1) == 0 )
  {
    MiReleaseFreshPage(v21);
    return 4LL;
  }
  if ( v28 )
    MiZeroPhysicalPage(v164);
  v154 = 1;
LABEL_56:
  v155 = BYTE4(PerfGlobalGroupMask) & 1;
  v162 = (unsigned __int64 *)(((v163 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v157 = *v162;
  v33 = v157 & 1;
  do
  {
    if ( !v33 )
      goto LABEL_375;
    v34 = v157;
    if ( (v157 & 0x200) != 0 )
      goto LABEL_375;
    v37 = MiPteInShadowRange(&v157, v31);
    if ( v37
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && ((v34 & 0x20) == 0 || (v34 & 0x42) == 0) )
    {
      v38 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v38 )
      {
        v50 = *((_QWORD *)&v38->Flink + (((unsigned __int64)&v157 >> 3) & 0x1FF));
        if ( (v50 & 0x20) != 0 )
          v34 |= 0x20uLL;
        if ( (v50 & 0x42) != 0 )
          v34 |= 0x42uLL;
      }
      else
      {
        v34 = v157;
      }
    }
    v51 = (v34 >> 12) & 0xFFFFFFFFFLL;
    v31 = 48 * v51;
    v176 = 48 * v51;
  }
  while ( (*(_QWORD *)(48 * v51 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 );
  v52 = v31 - 0x58000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v31 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
    SchedulerAssist[5] = v31;
  }
  v166 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v52 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v166, v31, (__int64)SchedulerAssist, v36);
    while ( *(__int64 *)(v52 + 24) < 0 );
  }
  v54 = v162;
  v55 = *v162;
  v157 = v55;
  if ( (v55 & 1) == 0 || (v55 & 0x200) != 0 )
    goto LABEL_366;
  if ( v37
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && ((v55 & 0x20) == 0 || (v55 & 0x42) == 0) )
  {
    v56 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v56 )
    {
      v57 = *((_QWORD *)&v56->Flink + (((unsigned __int64)&v157 >> 3) & 0x1FF));
      if ( (v57 & 0x20) != 0 )
        v55 |= 0x20uLL;
      if ( (v57 & 0x42) != 0 )
        v55 |= 0x42uLL;
    }
    else
    {
      v55 = v157;
    }
  }
  if ( v51 != ((v55 >> 12) & 0xFFFFFFFFFLL) )
  {
LABEL_366:
    _InterlockedAnd64((volatile signed __int64 *)(v52 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( CurrentIrql != 17 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v149 = KeGetCurrentIrql();
          if ( v149 <= 0xFu && CurrentIrql <= 0xFu && v149 >= 2u )
          {
            v150 = KeGetCurrentPrcb();
            v151 = v150->SchedulerAssist;
            v152 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v75 = (v152 & v151[5]) == 0;
            v151[5] &= v152;
            if ( v75 )
              KiRemoveSystemWorkPriorityKick(v150);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
    goto LABEL_375;
  }
  if ( !(unsigned int)MiAreChargesNeededToLockPage(v52) )
    goto LABEL_152;
  if ( (unsigned int)MI_PFN_IS_PROTO(v52, v58, v60) && (*(_DWORD *)(v52 + 16) & 0x400LL) != 0 )
  {
    v63 = 1;
  }
  else
  {
    IsPfnCommitNotCharged = MiIsPfnCommitNotCharged(v62);
    v63 = v65;
    if ( IsPfnCommitNotCharged )
      v63 = 1;
  }
  v66 = (*(_QWORD *)(v52 + 40) >> 39) & 0x3FFLL;
  v67 = *(ULONG_PTR **)(qword_140C4E588 + 8 * v66);
  if ( !v63 || (unsigned int)MiChargeCommit(*(_QWORD *)(qword_140C4E588 + 8 * v66), 1uLL, 4u) )
  {
    v61 = &MiSystemPartition;
    if ( v67 == &MiSystemPartition )
    {
      v58 = (__int64)KeGetCurrentPrcb();
      v68 = *(_DWORD *)(v58 + 33564);
      if ( v68 )
      {
        v60 = 0xFFFFFFFFLL;
        do
        {
          if ( v68 == -1 )
            break;
          Process = (unsigned int)(v68 - 1);
          v69 = v68;
          v68 = _InterlockedCompareExchange((volatile signed __int32 *)(v58 + 33564), Process, v68);
          if ( v69 == v68 )
            goto LABEL_152;
        }
        while ( v68 );
      }
    }
    v70 = MiChargePartitionResidentAvailable(v67, 1LL, 0xFFFFFFFFLL);
    if ( !v70 && v63 )
      MiReturnCommit((__int64)v67, 1LL);
    if ( v70 )
LABEL_152:
      ++*(_WORD *)(v52 + 32);
  }
  if ( CurrentIrql == 17 )
  {
    LOBYTE(v58) = 17;
    MiLockOwnedProtoPage(v52, v58, v60, v61);
  }
  else
  {
    v153 = CurrentIrql;
    v158 = 0;
    v71 = (_BYTE *)(*(_QWORD *)(v52 + 8) | 0x8000000000000000uLL);
    v177 = v71;
    v72 = *(_BYTE *)(v52 + 34);
    if ( (v72 & 0x20) != 0 )
    {
      do
      {
        _InterlockedAnd64((volatile signed __int64 *)(v52 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v73 = KeGetCurrentIrql();
            if ( v73 <= 0xFu && CurrentIrql <= 0xFu && v73 >= 2u )
            {
              v61 = (ULONG_PTR *)KeGetCurrentPrcb();
              v60 = v61[4247];
              v74 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v75 = (v74 & *(_DWORD *)(v60 + 20)) == 0;
              v58 = (unsigned int)v74 & *(_DWORD *)(v60 + 20);
              *(_DWORD *)(v60 + 20) = v58;
              if ( v75 )
                KiRemoveSystemWorkPriorityKick(v61);
            }
          }
        }
        __writecr8(CurrentIrql);
        v158 = 0;
        while ( (*(_BYTE *)(v52 + 34) & 0x20) != 0 )
          KeYieldProcessorEx(&v158, v58, v60, (__int64)v61);
        MiLockPageInline(v52, v58, v60);
        v72 = *(_BYTE *)(v52 + 34);
      }
      while ( (v72 & 0x20) != 0 );
      v71 = v177;
      v54 = v162;
    }
    *(_BYTE *)(v52 + 34) = v72 | 0x20;
    if ( (*(_QWORD *)(v52 + 24) & 0x4000000000000000LL) == 0 && (*v71 & 0x20) == 0 )
      MiWriteValidPteVolatile(v71, 1LL, 0LL);
    _InterlockedAnd64((volatile signed __int64 *)(v52 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  v76 = v163;
  v77 = *(_QWORD *)v163;
  v78 = 0xFFFFF6FB7DBED000uLL;
  if ( v163 >= 0xFFFFF6FB7DBED000uLL
    && v163 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(Process, v77)
    && (v77 & 1) != 0
    && ((v77 & 0x20) == 0 || (v77 & 0x42) == 0) )
  {
    Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
    v60 = *(_QWORD *)(Process + 1928);
    if ( v60 )
    {
      v79 = *(_QWORD *)(v60 + 8 * ((v76 >> 3) & 0x1FF));
      Process = (unsigned __int8)v79;
      v60 = v77 | 0x20;
      LOBYTE(Process) = v79 & 0x20;
      if ( (v79 & 0x20) == 0 )
        v60 = v77;
      v77 = v60;
      if ( (v79 & 0x42) != 0 )
        v77 = v60 | 0x42;
    }
  }
  v173 = v77;
  if ( (v77 & 1) != 0 || (v77 & 0x800) != 0 && (v77 & 0x400) == 0 || (v80 = (v77 >> 5) & 0x1F, v26 != (_DWORD)v80) )
  {
    MiUnlockProtoPoolPage(v52, v153, v60, (__int64)v61);
LABEL_375:
    MiLockAndInsertPageInFreeList(v156);
    return 1LL;
  }
  v167 = 0;
  if ( _interlockedbittestandset64(&v156[1].m128i_i32[2], 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v167, v80, v60, (__int64)v61);
      while ( v156[1].m128i_i64[1] < 0 );
    }
    while ( _interlockedbittestandset64(&v156[1].m128i_i32[2], 0x3FuLL) );
    v78 = 0xFFFFF6FB7DBED000uLL;
  }
  v81 = *(_QWORD *)v76;
  v82 = 0xFFFFF6FB7DBED7F8uLL;
  if ( v76 >= v78
    && v76 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(Process, v81)
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
  v156[1].m128i_i64[0] = v81 & v86;
  v156[2].m128i_i64[1] |= 0x8000000000000000uLL;
  v87 = v156[2].m128i_i64[1];
  if ( v26 )
  {
    if ( v26 == 31 )
    {
      v88 = 1;
    }
    else if ( v26 >> 3 == 3 && (v26 & 7) != 0 )
    {
      v88 = 2;
    }
    else
    {
      v88 = v26 >> 3 != 1;
    }
  }
  else
  {
    v88 = 3;
  }
  v156[2].m128i_i16[0] = 1;
  v89 = *v54;
  if ( (unsigned __int64)v54 >= v78
    && (unsigned __int64)v54 <= v82
    && (unsigned int)MiPteHasShadow(1LL, v81)
    && (v89 & 1) != 0
    && ((v89 & 0x20) == 0 || (v89 & 0x42) == 0) )
  {
    v90 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v90 )
    {
      v91 = *((_QWORD *)&v90->Flink + (((unsigned __int64)v54 >> 3) & 0x1FF));
      v81 = v89 | 0x20;
      if ( (v91 & 0x20) == 0 )
        v81 = v89;
      v89 = v81;
      if ( (v91 & 0x42) != 0 )
        v89 = v81 | 0x42;
    }
  }
  v170 = v89;
  if ( (unsigned __int64)&v170 >= v78
    && (unsigned __int64)&v170 <= v82
    && (unsigned int)MiPteHasShadow(&v170, v81)
    && (v89 & 1) != 0
    && ((v89 & 0x20) == 0 || (v89 & 0x42) == 0) )
  {
    v81 = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v81 )
    {
      v92 = *(_QWORD *)(v81 + 8 * (((unsigned __int64)&v170 >> 3) & 0x1FF));
      v81 = v89 | 0x20;
      if ( (v92 & 0x20) == 0 )
        v81 = v89;
      v89 = v81;
      if ( (v92 & 0x42) != 0 )
        v89 = v81 | 0x42;
    }
  }
  v93 = (v89 >> 12) & 0xFFFFFFFFFLL;
  v156[2].m128i_i64[1] = v87 ^ (v87 ^ v93) & 0xFFFFFFFFFLL;
  v94 = 48 * v93;
  CurrentThread = KeGetCurrentThread();
  if ( ((__int64)CurrentThread[1].Queue & 0x100) != 0 )
  {
    v159 = (unsigned __int64)((__int64)CurrentThread[1].Queue & 0xE00) >> 9;
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
    v159 = v81;
  }
  v168 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v94 - 0x57FFFFFFFE8LL), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v168, v81, v93, v87);
    while ( *(__int64 *)(v94 - 0x57FFFFFFFE8LL) < 0 );
  }
  *(_QWORD *)(v94 - 0x57FFFFFFFE8LL) ^= (*(_QWORD *)(v94 - 0x57FFFFFFFE8LL) ^ ((*(_QWORD *)(v94 - 0x57FFFFFFFE8LL) & 0x3FFFFFFFFFFFFFFFLL)
                                                                             + 1)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v94 - 0x57FFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
  v97 = v156[2].m128i_u8[2];
  if ( v97 >> 6 != v88 )
  {
    MiChangePageAttribute(v156, v88, 1LL);
    v97 = v156[2].m128i_u8[2];
  }
  v156[1].m128i_i64[1] = v156[1].m128i_i64[1] & 0xC000000000000000uLL | 1;
  v156[2].m128i_i8[3] = v159 | v156[2].m128i_i8[3] & 0xF8;
  v156->m128i_i64[1] = v163;
  v98 = v97 & 0xF8 | 6;
  v156[2].m128i_i8[2] = v98;
  v156[2].m128i_i8[2] = v98 | 0x10;
  if ( (a5 & 2) != 0 )
  {
    v99 = v156[2].m128i_i8[3];
    if ( (v99 & 8) != 0 || (v99 & 7u) > 2 )
      v156[2].m128i_i8[3] = v99 & 0xF8 | 2;
  }
  if ( (*(_DWORD *)(v171 + 56) & 0x20) != 0 || !*(_QWORD *)(v171 + 64) )
    v172 = 0LL;
  v100 = (volatile signed __int32 *)(v171 + 72);
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
    v160 = 0;
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
      KiSetVpThreadSpinLockCount((__int64)v102, 0);
      v160 = ExpWaitForSpinLockExclusiveAndAcquire((unsigned __int64)v100, v101, v105, v106);
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
        KeYieldProcessorEx(&v160, v107, v93, v87);
        v107 = *(unsigned int *)v100;
      }
      while ( (v107 & 0xBFFFFFFF) != 0x80000000 );
    }
  }
  ++*(_QWORD *)(v171 + 32);
  if ( v172 )
    ++*(_DWORD *)(v172 + 104);
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
  v116 = 0xFFFFFFFFFLL;
  v117 = ((v164 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v161 & 0x1F] & 0xFFFF000000000E7FuLL | 0x121;
  if ( (v161 & 5) == 4 )
    v117 = ((v164 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v161 & 0x1F] & 0xFFFF000000000E7FuLL | 0x163;
  v118 = v117 & 0xF0FFFFFFFFFFFEFFuLL | 0xA00000000000000LL;
  v173 = v118;
  v119 = 0;
  v120 = (_QWORD *)v163;
  v121 = 0xFFFFF6FB7DBED7F8uLL;
  if ( v163 >= 0xFFFFF6FB7DBED000uLL && v163 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    if ( (unsigned int)MiPteHasShadow(0xFFFFFFFFFLL, 0LL) )
    {
      v119 = 1;
      if ( !HIBYTE(word_140C4DF48) )
        v118 |= 0x8000000000000000uLL;
    }
    else
    {
      v116 = (__int64)KeGetCurrentThread()->ApcState.Process;
      if ( (*(_DWORD *)(v116 + 2172) & 0x1000) != 0 )
        v118 |= 0x8000000000000000uLL;
    }
  }
  *v120 = v118;
  if ( v119 )
    MiWritePteShadow(v120, v118);
  v122 = v173;
  v123 = 0;
  v124 = (_QWORD *)v174;
  if ( v174 >= 0xFFFFF6FB7DBED000uLL && v174 <= v121 )
  {
    if ( (unsigned int)MiPteHasShadow(v116, v173) )
    {
      v123 = 1;
      if ( HIBYTE(word_140C4DF48) )
        goto LABEL_304;
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      goto LABEL_304;
    }
    if ( (v122 & 1) != 0 )
      v122 |= 0x8000000000000000uLL;
  }
LABEL_304:
  *v124 = v122;
  if ( v123 )
    MiWritePteShadow(v124, v122);
  if ( v155 )
  {
    v184 = 0LL;
    v185 = 0LL;
    MiIdentifyPfn(v156, (unsigned __int64 *)&v184);
  }
  if ( (v156[2].m128i_i8[2] & 7) != 6 )
    MiBadShareCount(v156);
  v125 = 0x3FFFFFFFFFFFFFFFLL;
  v126 = (v156[1].m128i_i64[1] & 0x3FFFFFFFFFFFFFFFLL) - 1;
  v156[1].m128i_i64[1] ^= (v126 ^ v156[1].m128i_i64[1]) & 0x3FFFFFFFFFFFFFFFLL;
  if ( !v126 )
    MiPfnShareCountIsZero(v156);
  _InterlockedAnd64(&v156[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  v169 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v52 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v169, v126, v125, (__int64)v124);
    while ( *(__int64 *)(v52 + 24) < 0 );
  }
  *(_BYTE *)(v52 + 34) &= ~0x20u;
  v127 = *(_WORD *)(v52 + 32);
  if ( !v127 )
    MiBadRefCount(v52);
  v128 = v127 - 1;
  *(_WORD *)(v52 + 32) = v128;
  if ( v128 || !MiIsPfnFileOnly(v52) )
  {
    v129 = *(_QWORD *)(v52 + 40);
    if ( (v129 & 0x1000000000LL) != 0 || (v129 & 0x2000000000000LL) != 0 )
      goto LABEL_355;
    v130 = *(_QWORD *)(v52 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( v128 )
    {
      if ( v128 == 1 )
      {
        if ( v130 )
          goto LABEL_326;
      }
      else if ( v128 != 2 || !v130 )
      {
        goto LABEL_355;
      }
      if ( (*(_BYTE *)(v52 + 34) & 8) == 0 )
        goto LABEL_355;
    }
LABEL_326:
    v131 = *(_QWORD *)(v52 + 8) | 0x8000000000000000uLL;
    if ( v131 > 0xFFFFF6BFFFFFFF78uLL || v131 < 0xFFFFF68000000000uLL )
    {
      v132 = *(_BYTE *)(v52 + 35);
      if ( (v132 & 0x20) != 0 )
      {
        *(_BYTE *)(v52 + 35) = v132 & 0xDF;
        goto LABEL_353;
      }
    }
    if ( (unsigned int)MI_PFN_IS_PROTO(v52, 0LL, v129) && (*(_DWORD *)(v52 + 16) & 0x400LL) != 0 )
    {
      v133 = 1;
    }
    else if ( v135 <= v137 && v135 >= 0xFFFFF68000000000uLL && (*(_BYTE *)(v52 + 35) & 0x20) != 0 )
    {
      v133 = 1;
    }
    else if ( !v128 && (v136 & 0x4000000000000000LL) != 0 )
    {
      v133 = 1;
    }
    v138 = (v134 >> 39) & 0x3FF;
    v139 = *(_QWORD *)(qword_140C4E588 + 8 * v138);
    if ( v133 == 1 )
      MiReturnCommit(*(_QWORD *)(qword_140C4E588 + 8 * v138), 1LL);
    v140 = 1LL;
    if ( (ULONG_PTR *)v139 == &MiSystemPartition )
    {
      v141 = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)v141->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable != -1 )
      {
        if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
        {
          while ( 1 )
          {
            v143 = _InterlockedCompareExchange(
                     (volatile signed __int32 *)&v141->CachedResidentAvailable,
                     CachedResidentAvailable + 1,
                     CachedResidentAvailable);
            v75 = (_DWORD)CachedResidentAvailable == v143;
            LODWORD(CachedResidentAvailable) = v143;
            if ( v75 )
              break;
            if ( v143 == -1 || (unsigned __int64)(v143 + 1LL) > 0x100 )
              goto LABEL_348;
          }
LABEL_353:
          if ( v128 )
            goto LABEL_355;
          goto LABEL_354;
        }
LABEL_348:
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&v141->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v140 = (int)CachedResidentAvailable - 192 + 1LL;
        }
        if ( !v140 )
          goto LABEL_353;
      }
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v139 + 7168), v140);
    goto LABEL_353;
  }
LABEL_354:
  MiPfnReferenceCountIsZero(v52, v176 / 48);
LABEL_355:
  _InterlockedAnd64((volatile signed __int64 *)(v52 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v144 = v153;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v145 = KeGetCurrentIrql();
      if ( v145 <= 0xFu && v153 <= 0xFu && v145 >= 2u )
      {
        v146 = KeGetCurrentPrcb();
        v147 = v146->SchedulerAssist;
        v144 = v153;
        v148 = ~(unsigned __int16)(-1LL << (v153 + 1));
        v75 = (v148 & v147[5]) == 0;
        v147[5] &= v148;
        if ( v75 )
          KiRemoveSystemWorkPriorityKick(v146);
      }
    }
  }
  __writecr8(v144);
  *v175 = 0;
  if ( v155 )
  {
    *((_QWORD *)&v185 + 1) |= 4uLL;
    v186[0] = &v184;
    v186[1] = 32LL;
    EtwTraceKernelEvent((unsigned int)v186, 1, 536870913, 642, 289413890);
  }
  return v154 != 0 ? 4 : 0;
}
