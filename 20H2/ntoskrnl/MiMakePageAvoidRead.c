/*
 * XREFs of MiMakePageAvoidRead @ 0x1402A77C0
 * Callers:
 *     MmCopyToCachedPage @ 0x1402B4910 (MmCopyToCachedPage.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiIdentifyPfn @ 0x14021F300 (MiIdentifyPfn.c)
 *     KiSetVpThreadSpinLockCount @ 0x140221660 (KiSetVpThreadSpinLockCount.c)
 *     MiReturnCommit @ 0x140230300 (MiReturnCommit.c)
 *     MiChangePageAttribute @ 0x14023DCD0 (MiChangePageAttribute.c)
 *     MiGetPage @ 0x140274DF0 (MiGetPage.c)
 *     MiIsPfnFileOnly @ 0x14027A540 (MiIsPfnFileOnly.c)
 *     MiChargeCommit @ 0x14027C2B0 (MiChargeCommit.c)
 *     MiReservePtes @ 0x140285DC0 (MiReservePtes.c)
 *     MiWriteValidPteVolatile @ 0x14028F7D0 (MiWriteValidPteVolatile.c)
 *     MiReleasePtes @ 0x140294430 (MiReleasePtes.c)
 *     MiIsAddressGlobal @ 0x1402A2260 (MiIsAddressGlobal.c)
 *     MiAreChargesNeededToLockPage @ 0x1402A6B80 (MiAreChargesNeededToLockPage.c)
 *     MiPfnReferenceCountIsZero @ 0x1402A9540 (MiPfnReferenceCountIsZero.c)
 *     MiPfnShareCountIsZero @ 0x1402A98E0 (MiPfnShareCountIsZero.c)
 *     MiIsPfnCommitNotCharged @ 0x1402AAA20 (MiIsPfnCommitNotCharged.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402BF7C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiPfnZeroingNeeded @ 0x1402C7380 (MiPfnZeroingNeeded.c)
 *     MiUnlockProtoPoolPage @ 0x1402C8010 (MiUnlockProtoPoolPage.c)
 *     MiLockOwnedProtoPage @ 0x1402CABD0 (MiLockOwnedProtoPage.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiUserPdeOrAbove @ 0x14030CD44 (MiUserPdeOrAbove.c)
 *     MiChargePartitionResidentAvailable @ 0x14031056C (MiChargePartitionResidentAvailable.c)
 *     EtwTraceKernelEvent @ 0x140313A28 (EtwTraceKernelEvent.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiZeroPhysicalPage @ 0x1403332D4 (MiZeroPhysicalPage.c)
 *     MiReleaseFreshPage @ 0x140333A30 (MiReleaseFreshPage.c)
 *     MiLockPageInline @ 0x14034E290 (MiLockPageInline.c)
 *     MiLockAndInsertPageInFreeList @ 0x1403B5ECC (MiLockAndInsertPageInFreeList.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
 *     MiBadRefCount @ 0x1403F3094 (MiBadRefCount.c)
 *     MiBadShareCount @ 0x1403F30EC (MiBadShareCount.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     memset @ 0x140411300 (memset.c)
 *     MiWaitForFreePage @ 0x14055A72C (MiWaitForFreePage.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B4198 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B4374 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiMapCacheExceptionFilter @ 0x1408CAC2C (MiMapCacheExceptionFilter.c)
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
  __int64 v26; // rsi
  unsigned int v27; // ebx
  BOOL v28; // r15d
  signed __int64 i; // rdx
  signed __int64 v30; // rax
  __int64 v31; // rdx
  ULONG_PTR v32; // r14
  unsigned __int64 v33; // r14
  unsigned __int64 v34; // rbx
  BOOL v35; // r15d
  struct _LIST_ENTRY *v36; // rdx
  char v37; // dl
  int v38; // eax
  ULONG_PTR v39; // rbx
  unsigned __int64 v40; // rdi
  int v41; // eax
  unsigned __int64 v42; // rdi
  int v43; // ebx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rcx
  char *v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rbx
  __int64 v52; // rdi
  unsigned __int8 CurrentIrql; // r12
  _DWORD *SchedulerAssist; // r8
  unsigned __int64 *v55; // r13
  unsigned __int64 v56; // rax
  struct _LIST_ENTRY *v57; // r8
  __int64 v58; // rcx
  struct _KPRCB *v59; // rdx
  unsigned __int64 Process; // rcx
  __int64 v61; // r8
  ULONG_PTR *v62; // r9
  char v63; // r14
  int IsPfnCommitNotCharged; // eax
  char v65; // r10
  __int64 v66; // rcx
  ULONG_PTR *v67; // r15
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v69; // ett
  int v70; // ebx
  volatile signed __int64 *v71; // rbx
  char v72; // al
  unsigned __int8 v73; // al
  struct _KPRCB *v74; // r9
  _DWORD *v75; // r8
  int v76; // ecx
  bool v77; // zf
  unsigned __int64 v78; // rbx
  unsigned __int64 v79; // rdx
  unsigned __int64 v80; // r11
  __int64 v81; // rax
  __int64 v82; // rdx
  unsigned __int64 v83; // r10
  struct _LIST_ENTRY *v84; // r8
  __int64 v85; // rax
  __int64 v86; // r8
  __int64 v87; // rax
  unsigned __int64 v88; // r9
  unsigned int v89; // esi
  unsigned __int64 v90; // r8
  struct _LIST_ENTRY *v91; // rax
  __int64 v92; // rax
  struct _LIST_ENTRY *v93; // rdx
  __int64 v94; // rax
  __int64 v95; // rdx
  __int64 v96; // r8
  __int64 v97; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v99; // edx
  int v100; // eax
  unsigned __int8 v101; // cl
  __int8 v102; // cl
  __int8 v103; // cl
  volatile signed __int32 *v104; // rbx
  unsigned __int8 v105; // r14
  struct _KPRCB *v106; // rsi
  _DWORD *v107; // rcx
  int v108; // eax
  signed __int32 v109; // edx
  signed __int32 v110; // eax
  struct _KPRCB *v111; // rcx
  _DWORD *v112; // rdx
  int v113; // eax
  unsigned __int8 v114; // al
  struct _KPRCB *v115; // r10
  int v116; // eax
  __int64 v117; // rcx
  ULONG_PTR v118; // rbx
  unsigned __int64 v119; // rbx
  int v120; // edx
  _QWORD *v121; // r8
  unsigned __int64 v122; // r11
  unsigned __int64 v123; // rdx
  int v124; // r8d
  _QWORD *v125; // r9
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
  __int64 v142; // rdx
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
  int v161; // [rsp+5Ch] [rbp-11Ch]
  unsigned __int64 *v162; // [rsp+60h] [rbp-118h]
  unsigned __int64 v163; // [rsp+68h] [rbp-110h]
  ULONG_PTR v164; // [rsp+70h] [rbp-108h]
  int v165; // [rsp+78h] [rbp-100h]
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
  volatile signed __int64 *v177; // [rsp+C8h] [rbp-B0h]
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
  v177 = (volatile signed __int64 *)a6;
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
  if ( qword_140C4DDC0 )
  {
    if ( (v9 & 0x10) != 0 )
      v9 &= ~0x10uLL;
    else
      v9 &= ~qword_140C4DDC0;
  }
  v172 = v9 >> 16;
  v182 = v9 >> 16;
  v171 = *(_QWORD *)(v9 >> 16);
  v181 = v171;
  v13 = *(_QWORD *)(qword_140C4E4C8 + 8LL * (*(_WORD *)(v171 + 60) & 0x3FF));
  if ( ((*(_DWORD *)(v171 + 56) >> 20) & 0x3F) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    NodeShiftedColor = (((*(_DWORD *)(v171 + 56) >> 20) & 0x3F) - 1) << byte_140C4DD0C;
  }
  else
  {
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    NodeShiftedColor = CurrentPrcb->NodeShiftedColor;
  }
  v16 = (1 << byte_140C4DD0D) - 1;
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
  if ( (_DWORD)v26 )
  {
    if ( (_DWORD)v26 == 31 )
    {
      v27 = 1;
    }
    else if ( (unsigned int)v26 >> 3 == 3 && (v26 & 7) != 0 )
    {
      v27 = 2;
    }
    else
    {
      v27 = (unsigned int)v26 >> 3 != 1;
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
    MiChangePageAttribute(v21, v27, 0);
  for ( i = *(_QWORD *)(v21 + 24); ; i = v30 )
  {
    v30 = _InterlockedCompareExchange64((volatile signed __int64 *)(v21 + 24), i & 0xF0FFFFFFFFFFFFFFuLL, i);
    if ( i == v30 )
      break;
  }
  v32 = MiReservePtes((__int64)&qword_140C4EDC0, 1u);
  v180 = v32;
  if ( v32 )
  {
    v37 = 4;
    if ( v164 <= 0xFFFFFFFFFLL && (*(_QWORD *)(48 * v164 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0 )
    {
      v38 = *(unsigned __int8 *)(48 * v164 - 0x57FFFFFFFDELL) >> 6;
      if ( !v38 || v38 == 3 )
      {
        v37 = 12;
      }
      else if ( v38 == 2 )
      {
        v37 = 28;
      }
    }
    v39 = ((v164 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v37 & 0x1F] & 0xFFFF000000000E7FuLL | 0x21;
    if ( v32 >= 0xFFFFF68000000000uLL && v32 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      v40 = (__int64)(v32 << 25) >> 16;
      if ( v32 >= 0xFFFFF6FB40000000uLL && v32 <= 0xFFFFF6FB7FFFFFFFuLL )
      {
        v39 = v32 == 0xFFFFF6FB7DBEDF68uLL
            ? ((v164 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v37 & 0x1F] & 0xFFFF000000000E7FuLL | 0x8000000000000021uLL
            : ((v164 & 0xFFFFFFFFFLL) << 12) & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v37 & 0x1F] & 0x7FFF000000000E7FLL | 0x21;
        if ( (unsigned int)MiUserPdeOrAbove(v32, 0xFFFFF68000000000uLL, 0x140000000uLL, 0xFFFFF6FFFFFFFFFFuLL) )
          v39 |= 4uLL;
      }
      if ( v32 <= 0xFFFFF6BFFFFFFF78uLL )
        v39 |= 4uLL;
      if ( v40 >= 0xFFFF800000000000uLL )
      {
        if ( byte_140C4F848[((v40 >> 39) & 0x1FF) - 256] == 1
          || v40 >= 0xFFFFF68000000000uLL && v40 <= 0xFFFFF6FFFFFFFFFFuLL )
        {
LABEL_94:
          v42 = v39 & 0xFAFFFFFFFFFFFEFFuLL | ((unsigned __int64)(word_140C4DE88 & 1) << 8) | 0xA00000000000042LL;
          v43 = 0;
          if ( MiPteInShadowRange(v32) )
          {
            if ( (unsigned int)MiPteHasShadow(v45, v44, v46, v47) )
            {
              v43 = 1;
              if ( !HIBYTE(word_140C4DE88) )
                goto LABEL_99;
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
LABEL_99:
              v42 |= 0x8000000000000000uLL;
            }
          }
          *(_QWORD *)v32 = v42;
          if ( v43 )
            MiWritePteShadow(v32, v42);
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
          MiReleasePtes((__int64)&qword_140C4EDC0, (_QWORD *)v32, 1u);
          goto LABEL_56;
        }
        if ( v40 < qword_140C4F9B8 || (v41 = HIBYTE(word_140C4DE88), v40 > qword_140C4E1E8) )
          v41 = (unsigned __int8)word_140C4DE88;
      }
      else
      {
        v41 = HIBYTE(word_140C4DE88);
      }
      if ( !v41 )
        goto LABEL_94;
    }
    v39 |= 0x100uLL;
    goto LABEL_94;
  }
  if ( (a5 & 1) == 0 )
  {
    MiReleaseFreshPage(v21, v31);
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
    v35 = MiPteInShadowRange((unsigned __int64)&v157);
    if ( v35
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && ((v34 & 0x20) == 0 || (v34 & 0x42) == 0) )
    {
      v36 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v36 )
      {
        v50 = *((_QWORD *)&v36->Flink + (((unsigned __int64)&v157 >> 3) & 0x1FF));
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
    v176 = 48 * v51;
  }
  while ( (*(_QWORD *)(48 * v51 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 );
  v52 = 48 * v51 - 0x58000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v166 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v52 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v166);
    while ( *(__int64 *)(v52 + 24) < 0 );
  }
  v55 = v162;
  v56 = *v162;
  v157 = v56;
  if ( (v56 & 1) == 0 || (v56 & 0x200) != 0 )
    goto LABEL_366;
  if ( v35
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && ((v56 & 0x20) == 0 || (v56 & 0x42) == 0) )
  {
    v57 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v57 )
    {
      v58 = *((_QWORD *)&v57->Flink + (((unsigned __int64)&v157 >> 3) & 0x1FF));
      if ( (v58 & 0x20) != 0 )
        v56 |= 0x20uLL;
      if ( (v58 & 0x42) != 0 )
        v56 |= 0x42uLL;
    }
    else
    {
      v56 = v157;
    }
  }
  if ( v51 != ((v56 >> 12) & 0xFFFFFFFFFLL) )
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
            v77 = (v152 & v151[5]) == 0;
            v151[5] &= v152;
            if ( v77 )
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
  if ( (unsigned int)MI_PFN_IS_PROTO(v52) && (*(_DWORD *)(v52 + 16) & 0x400LL) != 0 )
  {
    v63 = 1;
  }
  else
  {
    IsPfnCommitNotCharged = MiIsPfnCommitNotCharged();
    v63 = v65;
    if ( IsPfnCommitNotCharged )
      v63 = 1;
  }
  v66 = (*(_QWORD *)(v52 + 40) >> 39) & 0x3FFLL;
  v67 = *(ULONG_PTR **)(qword_140C4E4C8 + 8 * v66);
  if ( !v63 || (unsigned int)MiChargeCommit(*(_QWORD *)(qword_140C4E4C8 + 8 * v66), 1uLL, 4u) )
  {
    v62 = &MiSystemPartition;
    if ( v67 == &MiSystemPartition )
    {
      v59 = KeGetCurrentPrcb();
      CachedResidentAvailable = v59->CachedResidentAvailable;
      if ( CachedResidentAvailable )
      {
        v61 = 0xFFFFFFFFLL;
        do
        {
          if ( CachedResidentAvailable == -1 )
            break;
          Process = (unsigned int)(CachedResidentAvailable - 1);
          v69 = CachedResidentAvailable;
          CachedResidentAvailable = _InterlockedCompareExchange(
                                      (volatile signed __int32 *)&v59->CachedResidentAvailable,
                                      Process,
                                      CachedResidentAvailable);
          if ( v69 == CachedResidentAvailable )
            goto LABEL_152;
        }
        while ( CachedResidentAvailable );
      }
    }
    v70 = MiChargePartitionResidentAvailable(v67, 1LL, 0xFFFFFFFFLL, &MiSystemPartition);
    if ( !v70 && v63 )
      MiReturnCommit((__int64)v67, 1LL);
    if ( v70 )
LABEL_152:
      ++*(_WORD *)(v52 + 32);
  }
  if ( CurrentIrql == 17 )
  {
    LOBYTE(v59) = 17;
    MiLockOwnedProtoPage(v52, v59);
  }
  else
  {
    v153 = CurrentIrql;
    v158 = 0;
    v71 = (volatile signed __int64 *)(*(_QWORD *)(v52 + 8) | 0x8000000000000000uLL);
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
              v74 = KeGetCurrentPrcb();
              v75 = v74->SchedulerAssist;
              v76 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v77 = (v76 & v75[5]) == 0;
              v75[5] &= v76;
              if ( v77 )
                KiRemoveSystemWorkPriorityKick(v74);
            }
          }
        }
        __writecr8(CurrentIrql);
        v158 = 0;
        while ( (*(_BYTE *)(v52 + 34) & 0x20) != 0 )
          KeYieldProcessorEx(&v158);
        MiLockPageInline(v52);
        v72 = *(_BYTE *)(v52 + 34);
      }
      while ( (v72 & 0x20) != 0 );
      v71 = v177;
      v55 = v162;
    }
    *(_BYTE *)(v52 + 34) = v72 | 0x20;
    if ( (*(_QWORD *)(v52 + 24) & 0x4000000000000000LL) == 0 && (*(_BYTE *)v71 & 0x20) == 0 )
      MiWriteValidPteVolatile(v71, 1, 0);
    _InterlockedAnd64((volatile signed __int64 *)(v52 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  v78 = v163;
  v79 = *(_QWORD *)v163;
  v80 = 0xFFFFF6FB7DBED000uLL;
  if ( v163 >= 0xFFFFF6FB7DBED000uLL
    && v163 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(Process, v79, v61, v62)
    && (v79 & 1) != 0
    && ((v79 & 0x20) == 0 || (v79 & 0x42) == 0) )
  {
    Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
    v61 = *(_QWORD *)(Process + 1928);
    if ( v61 )
    {
      v81 = *(_QWORD *)(v61 + 8 * ((v78 >> 3) & 0x1FF));
      Process = (unsigned __int8)v81;
      v61 = v79 | 0x20;
      LOBYTE(Process) = v81 & 0x20;
      if ( (v81 & 0x20) == 0 )
        v61 = v79;
      v79 = v61;
      if ( (v81 & 0x42) != 0 )
        v79 = v61 | 0x42;
    }
  }
  v173 = v79;
  if ( (v79 & 1) != 0 || (v79 & 0x800) != 0 && (v79 & 0x400) == 0 || (_DWORD)v26 != ((v79 >> 5) & 0x1F) )
  {
    MiUnlockProtoPoolPage(v52, v153);
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
        KeYieldProcessorEx(&v167);
      while ( v156[1].m128i_i64[1] < 0 );
    }
    while ( _interlockedbittestandset64(&v156[1].m128i_i32[2], 0x3FuLL) );
    v80 = 0xFFFFF6FB7DBED000uLL;
  }
  v82 = *(_QWORD *)v78;
  v83 = 0xFFFFF6FB7DBED7F8uLL;
  if ( v78 >= v80
    && v78 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(Process, v82, v61, v62)
    && (v82 & 1) != 0
    && ((v82 & 0x20) == 0 || (v82 & 0x42) == 0) )
  {
    v84 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v84 )
    {
      v85 = *((_QWORD *)&v84->Flink + ((v78 >> 3) & 0x1FF));
      v86 = v82 | 0x20;
      if ( (v85 & 0x20) == 0 )
        v86 = v82;
      v82 = v86;
      if ( (v85 & 0x42) != 0 )
        v82 = v86 | 0x42;
    }
  }
  v87 = -9LL;
  if ( (v82 & 0x400) != 0 )
    v87 = -2049LL;
  v156[1].m128i_i64[0] = v82 & v87;
  v156[2].m128i_i64[1] |= 0x8000000000000000uLL;
  v88 = v156[2].m128i_u64[1];
  if ( (_DWORD)v26 )
  {
    if ( (_DWORD)v26 == 31 )
    {
      v89 = 1;
    }
    else if ( (unsigned int)v26 >> 3 == 3 && (v26 & 7) != 0 )
    {
      v89 = 2;
    }
    else
    {
      v89 = (unsigned int)v26 >> 3 != 1;
    }
  }
  else
  {
    v89 = 3;
  }
  v156[2].m128i_i16[0] = 1;
  v90 = *v55;
  if ( (unsigned __int64)v55 >= v80
    && (unsigned __int64)v55 <= v83
    && (unsigned int)MiPteHasShadow(1LL, v82, v90, v88)
    && (v90 & 1) != 0
    && ((v90 & 0x20) == 0 || (v90 & 0x42) == 0) )
  {
    v91 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v91 )
    {
      v92 = *((_QWORD *)&v91->Flink + (((unsigned __int64)v55 >> 3) & 0x1FF));
      v82 = v90 | 0x20;
      if ( (v92 & 0x20) == 0 )
        v82 = v90;
      v90 = v82;
      if ( (v92 & 0x42) != 0 )
        v90 = v82 | 0x42;
    }
  }
  v170 = v90;
  if ( (unsigned __int64)&v170 >= v80
    && (unsigned __int64)&v170 <= v83
    && (unsigned int)MiPteHasShadow(&v170, v82, v90, v88)
    && (v90 & 1) != 0
    && ((v90 & 0x20) == 0 || (v90 & 0x42) == 0) )
  {
    v93 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v93 )
    {
      v94 = *((_QWORD *)&v93->Flink + (((unsigned __int64)&v170 >> 3) & 0x1FF));
      v95 = v90 | 0x20;
      if ( (v94 & 0x20) == 0 )
        v95 = v90;
      v90 = v95;
      if ( (v94 & 0x42) != 0 )
        v90 = v95 | 0x42;
    }
  }
  v96 = (v90 >> 12) & 0xFFFFFFFFFLL;
  v156[2].m128i_i64[1] = v88 ^ (v88 ^ v96) & 0xFFFFFFFFFLL;
  v97 = 48 * v96;
  CurrentThread = KeGetCurrentThread();
  if ( ((__int64)CurrentThread[1].Queue & 0x100) != 0 )
  {
    v159 = (unsigned __int64)((__int64)CurrentThread[1].Queue & 0xE00) >> 9;
  }
  else
  {
    v99 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 12) & 7;
    if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
    {
      v100 = 2;
      if ( v99 < 2 )
        v100 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 12) & 7;
      v99 = v100;
    }
    v159 = v99;
  }
  v168 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v97 - 0x57FFFFFFFE8LL), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v168);
    while ( *(__int64 *)(v97 - 0x57FFFFFFFE8LL) < 0 );
  }
  *(_QWORD *)(v97 - 0x57FFFFFFFE8LL) ^= (*(_QWORD *)(v97 - 0x57FFFFFFFE8LL) ^ ((*(_QWORD *)(v97 - 0x57FFFFFFFE8LL) & 0x3FFFFFFFFFFFFFFFLL)
                                                                             + 1)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v97 - 0x57FFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
  v101 = v156[2].m128i_u8[2];
  if ( v101 >> 6 != v89 )
  {
    MiChangePageAttribute((__int64)v156, v89, 1);
    v101 = v156[2].m128i_u8[2];
  }
  v156[1].m128i_i64[1] = v156[1].m128i_i64[1] & 0xC000000000000000uLL | 1;
  v156[2].m128i_i8[3] = v159 | v156[2].m128i_i8[3] & 0xF8;
  v156->m128i_i64[1] = v163;
  v102 = v101 & 0xF8 | 6;
  v156[2].m128i_i8[2] = v102;
  v156[2].m128i_i8[2] = v102 | 0x10;
  if ( (a5 & 2) != 0 )
  {
    v103 = v156[2].m128i_i8[3];
    if ( (v103 & 8) != 0 || (v103 & 7u) > 2 )
      v156[2].m128i_i8[3] = v103 & 0xF8 | 2;
  }
  if ( (*(_DWORD *)(v171 + 56) & 0x20) != 0 || !*(_QWORD *)(v171 + 64) )
    v172 = 0LL;
  v104 = (volatile signed __int32 *)(v171 + 72);
  v105 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v105 <= 0xFu )
  {
    v88 = (unsigned __int64)KeGetCurrentPrcb()->SchedulerAssist;
    *(_DWORD *)(v88 + 20) |= (-1 << (v105 + 1)) & 4;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v104, v105);
  }
  else
  {
    v160 = 0;
    v106 = KeGetCurrentPrcb();
    v107 = v106->SchedulerAssist;
    if ( v107 )
    {
      if ( v106->NestingLevel <= 1u )
      {
        v108 = v107[6];
        v107[6] = v108 + 1;
        if ( v108 == -1 )
          KiRemoveSystemWorkPriorityKick(v106);
      }
    }
    if ( _interlockedbittestandset(v104, 0x1Fu) )
    {
      KiSetVpThreadSpinLockCount((__int64)v106, 0);
      v160 = ExpWaitForSpinLockExclusiveAndAcquire(v104, v105);
    }
    v109 = *v104;
    while ( (v109 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v109 & 0x40000000) == 0 )
      {
        v110 = _InterlockedCompareExchange(v104, v109 | 0x40000000, v109);
        v77 = v109 == v110;
        v109 = v110;
        if ( !v77 )
          continue;
      }
      KeYieldProcessorEx(&v160);
      v109 = *v104;
    }
  }
  ++*(_QWORD *)(v171 + 32);
  if ( v172 )
    ++*(_DWORD *)(v172 + 104);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v104, retaddr);
  else
    *v104 = 0;
  v111 = KeGetCurrentPrcb();
  v112 = v111->SchedulerAssist;
  if ( v112 )
  {
    if ( v111->NestingLevel <= 1u )
    {
      v113 = v112[6] - 1;
      v112[6] = v113;
      if ( !v113 )
        KiRemoveSystemWorkPriorityKick(v111);
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v114 = KeGetCurrentIrql();
      if ( v114 <= 0xFu && v105 <= 0xFu && v114 >= 2u )
      {
        v115 = KeGetCurrentPrcb();
        v88 = (unsigned __int64)v115->SchedulerAssist;
        v116 = ~(unsigned __int16)(-1LL << (v105 + 1));
        v77 = (v116 & *(_DWORD *)(v88 + 20)) == 0;
        *(_DWORD *)(v88 + 20) &= v116;
        if ( v77 )
          KiRemoveSystemWorkPriorityKick(v115);
      }
    }
  }
  __writecr8(v105);
  v117 = 0xFFFFFFFFFLL;
  v118 = ((v164 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v161 & 0x1F] & 0xFFFF000000000E7FuLL | 0x121;
  if ( (v161 & 5) == 4 )
    v118 = ((v164 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v161 & 0x1F] & 0xFFFF000000000E7FuLL | 0x163;
  v119 = v118 & 0xF0FFFFFFFFFFFEFFuLL | 0xA00000000000000LL;
  v173 = v119;
  v120 = 0;
  v121 = (_QWORD *)v163;
  v122 = 0xFFFFF6FB7DBED7F8uLL;
  if ( v163 >= 0xFFFFF6FB7DBED000uLL && v163 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    if ( (unsigned int)MiPteHasShadow(0xFFFFFFFFFLL, 0LL, v163, v88) )
    {
      v120 = 1;
      if ( !HIBYTE(word_140C4DE88) )
        v119 |= 0x8000000000000000uLL;
    }
    else
    {
      v117 = (__int64)KeGetCurrentThread()->ApcState.Process;
      if ( (*(_DWORD *)(v117 + 2172) & 0x1000) != 0 )
        v119 |= 0x8000000000000000uLL;
    }
  }
  *v121 = v119;
  if ( v120 )
    MiWritePteShadow(v121, v119);
  v123 = v173;
  v124 = 0;
  v125 = (_QWORD *)v174;
  if ( v174 >= 0xFFFFF6FB7DBED000uLL && v174 <= v122 )
  {
    if ( (unsigned int)MiPteHasShadow(v117, v173, 0LL, v174) )
    {
      v124 = 1;
      if ( HIBYTE(word_140C4DE88) )
        goto LABEL_304;
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      goto LABEL_304;
    }
    if ( (v123 & 1) != 0 )
      v123 |= 0x8000000000000000uLL;
  }
LABEL_304:
  *v125 = v123;
  if ( v124 )
    MiWritePteShadow(v125, v123);
  if ( v155 )
  {
    v184 = 0LL;
    v185 = 0LL;
    MiIdentifyPfn(v156, (unsigned __int64 *)&v184);
  }
  if ( (v156[2].m128i_i8[2] & 7) != 6 )
    MiBadShareCount(v156);
  v126 = (v156[1].m128i_i64[1] & 0x3FFFFFFFFFFFFFFFLL) - 1;
  v156[1].m128i_i64[1] ^= (v126 ^ v156[1].m128i_i64[1]) & 0x3FFFFFFFFFFFFFFFLL;
  if ( !v126 )
    MiPfnShareCountIsZero(v156);
  _InterlockedAnd64(&v156[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  v169 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v52 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v169);
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
    if ( (unsigned int)MI_PFN_IS_PROTO(v52) && (*(_DWORD *)(v52 + 16) & 0x400LL) != 0 )
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
    v139 = *(_QWORD *)(qword_140C4E4C8 + 8 * v138);
    if ( v133 == 1 )
      MiReturnCommit(*(_QWORD *)(qword_140C4E4C8 + 8 * v138), 1LL);
    v140 = 1LL;
    if ( (ULONG_PTR *)v139 == &MiSystemPartition )
    {
      v141 = KeGetCurrentPrcb();
      v142 = (int)v141->CachedResidentAvailable;
      if ( (_DWORD)v142 != -1 )
      {
        if ( (unsigned __int64)(v142 + 1) <= 0x100 )
        {
          while ( 1 )
          {
            v143 = _InterlockedCompareExchange(
                     (volatile signed __int32 *)&v141->CachedResidentAvailable,
                     v142 + 1,
                     v142);
            v77 = (_DWORD)v142 == v143;
            LODWORD(v142) = v143;
            if ( v77 )
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
        if ( (int)v142 > 192
          && (_DWORD)v142 == _InterlockedCompareExchange(
                               (volatile signed __int32 *)&v141->CachedResidentAvailable,
                               192,
                               v142) )
        {
          v140 = (int)v142 - 192 + 1LL;
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
        v77 = (v148 & v147[5]) == 0;
        v147[5] &= v148;
        if ( v77 )
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
