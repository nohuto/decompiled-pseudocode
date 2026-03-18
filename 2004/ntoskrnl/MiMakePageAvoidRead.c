/*
 * XREFs of MiMakePageAvoidRead @ 0x140232510
 * Callers:
 *     MmCopyToCachedPage @ 0x140223C10 (MmCopyToCachedPage.c)
 * Callees:
 *     MiIdentifyPfn @ 0x140206380 (MiIdentifyPfn.c)
 *     KiSetVpThreadSpinLockCount @ 0x1402086E0 (KiSetVpThreadSpinLockCount.c)
 *     MiReservePtes @ 0x14021B350 (MiReservePtes.c)
 *     MiReturnCommit @ 0x140224390 (MiReturnCommit.c)
 *     MiLockOwnedProtoPage @ 0x140229F90 (MiLockOwnedProtoPage.c)
 *     MiUnlockProtoPoolPage @ 0x14022A960 (MiUnlockProtoPoolPage.c)
 *     MiIsPfnCommitNotCharged @ 0x14022CF60 (MiIsPfnCommitNotCharged.c)
 *     MiIsAddressGlobal @ 0x14022CFB0 (MiIsAddressGlobal.c)
 *     MiAreChargesNeededToLockPage @ 0x1402318D0 (MiAreChargesNeededToLockPage.c)
 *     MiPfnReferenceCountIsZero @ 0x140234560 (MiPfnReferenceCountIsZero.c)
 *     MiPfnShareCountIsZero @ 0x140235440 (MiPfnShareCountIsZero.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiWriteValidPteVolatile @ 0x140245E30 (MiWriteValidPteVolatile.c)
 *     MiChargePartitionResidentAvailable @ 0x140250790 (MiChargePartitionResidentAvailable.c)
 *     EtwTraceKernelEvent @ 0x140250918 (EtwTraceKernelEvent.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiReleasePtes @ 0x140284720 (MiReleasePtes.c)
 *     MiGetPage @ 0x1402A5AB0 (MiGetPage.c)
 *     MiIsPfnFileOnly @ 0x1402AB200 (MiIsPfnFileOnly.c)
 *     MiChargeCommit @ 0x1402ACF70 (MiChargeCommit.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402CF620 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiReleaseFreshPage @ 0x1402E1668 (MiReleaseFreshPage.c)
 *     MiChangePageAttribute @ 0x1402F4EBC (MiChangePageAttribute.c)
 *     MiZeroPhysicalPage @ 0x1402F50E4 (MiZeroPhysicalPage.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     MiPfnZeroingNeeded @ 0x14031A050 (MiPfnZeroingNeeded.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiUserPdeOrAbove @ 0x14033A900 (MiUserPdeOrAbove.c)
 *     MiLockAndInsertPageInFreeList @ 0x1403B450C (MiLockAndInsertPageInFreeList.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 *     MiBadRefCount @ 0x1403EEC2C (MiBadRefCount.c)
 *     MiBadShareCount @ 0x1403EEC84 (MiBadShareCount.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     MiWaitForFreePage @ 0x140556D5C (MiWaitForFreePage.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B0638 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B0814 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiMapCacheExceptionFilter @ 0x1408C4DEC (MiMapCacheExceptionFilter.c)
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
  unsigned __int64 v20; // r9
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
  int v35; // r15d
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
  __int64 v52; // rdx
  __int64 v53; // rdi
  unsigned __int8 CurrentIrql; // r12
  _DWORD *SchedulerAssist; // r8
  unsigned __int64 *v56; // r13
  unsigned __int64 v57; // rax
  struct _LIST_ENTRY *v58; // r8
  __int64 v59; // rcx
  __int64 v60; // rdx
  unsigned __int64 Process; // rcx
  __int64 v62; // r8
  ULONG_PTR *v63; // r9
  __int64 v64; // rcx
  char v65; // r14
  int IsPfnCommitNotCharged; // eax
  char v67; // r10
  __int64 v68; // rcx
  ULONG_PTR *v69; // r15
  signed __int32 v70; // eax
  signed __int32 v71; // ett
  int v72; // ebx
  _BYTE *v73; // rbx
  char v74; // al
  unsigned __int8 v75; // al
  struct _KPRCB *v76; // r9
  _DWORD *v77; // r8
  int v78; // ecx
  bool v79; // zf
  unsigned __int64 v80; // rbx
  unsigned __int64 v81; // rdx
  unsigned __int64 v82; // r11
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rdx
  unsigned __int64 v86; // r10
  struct _LIST_ENTRY *v87; // r8
  __int64 v88; // rax
  __int64 v89; // r8
  __int64 v90; // rax
  unsigned __int64 v91; // r9
  unsigned int v92; // esi
  unsigned __int64 v93; // r8
  struct _LIST_ENTRY *v94; // rax
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // r8
  __int64 v98; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v100; // eax
  unsigned __int8 v101; // cl
  __int8 v102; // cl
  __int8 v103; // cl
  volatile signed __int32 *v104; // rbx
  unsigned __int8 v105; // r14
  struct _KPRCB *v106; // rsi
  _DWORD *v107; // rcx
  int v108; // eax
  __int64 v109; // rdx
  unsigned __int32 v110; // eax
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
  __int64 v126; // r8
  __int64 v127; // rdx
  __int16 v128; // bx
  __int16 v129; // bx
  __int64 v130; // r8
  __int64 v131; // rax
  unsigned __int64 v132; // r9
  char v133; // al
  int v134; // edx
  unsigned __int64 v135; // r8
  unsigned __int64 v136; // r9
  __int64 v137; // r10
  unsigned __int64 v138; // r11
  __int64 v139; // r8
  __int64 v140; // rsi
  unsigned __int64 v141; // r8
  struct _KPRCB *v142; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v144; // eax
  unsigned __int8 v145; // bl
  unsigned __int8 v146; // al
  struct _KPRCB *v147; // r9
  _DWORD *v148; // r8
  int v149; // eax
  unsigned __int8 v150; // al
  struct _KPRCB *v151; // r9
  _DWORD *v152; // r8
  int v153; // eax
  unsigned __int8 v154; // [rsp+30h] [rbp-148h]
  int v155; // [rsp+34h] [rbp-144h]
  int v156; // [rsp+38h] [rbp-140h]
  __m128i *v157; // [rsp+40h] [rbp-138h]
  unsigned __int64 v158; // [rsp+48h] [rbp-130h] BYREF
  int v159; // [rsp+50h] [rbp-128h] BYREF
  unsigned int v160; // [rsp+54h] [rbp-124h]
  int v161; // [rsp+58h] [rbp-120h] BYREF
  unsigned int v162; // [rsp+5Ch] [rbp-11Ch]
  unsigned __int64 *v163; // [rsp+60h] [rbp-118h]
  unsigned __int64 v164; // [rsp+68h] [rbp-110h]
  ULONG_PTR v165; // [rsp+70h] [rbp-108h]
  unsigned int v166; // [rsp+78h] [rbp-100h]
  int v167; // [rsp+7Ch] [rbp-FCh] BYREF
  int v168; // [rsp+80h] [rbp-F8h] BYREF
  int v169; // [rsp+84h] [rbp-F4h] BYREF
  int v170; // [rsp+88h] [rbp-F0h] BYREF
  unsigned __int64 v171; // [rsp+90h] [rbp-E8h] BYREF
  __int64 v172; // [rsp+98h] [rbp-E0h]
  __int64 v173; // [rsp+A0h] [rbp-D8h]
  unsigned __int64 v174; // [rsp+A8h] [rbp-D0h]
  unsigned __int64 v175; // [rsp+B0h] [rbp-C8h]
  _DWORD *v176; // [rsp+B8h] [rbp-C0h]
  __int64 v177; // [rsp+C0h] [rbp-B8h]
  _BYTE *v178; // [rsp+C8h] [rbp-B0h]
  void *Src; // [rsp+D0h] [rbp-A8h]
  __int64 v180; // [rsp+D8h] [rbp-A0h]
  ULONG_PTR v181; // [rsp+E0h] [rbp-98h]
  __int64 v182; // [rsp+E8h] [rbp-90h]
  __int64 v183; // [rsp+F0h] [rbp-88h]
  __int64 v184; // [rsp+F8h] [rbp-80h]
  __int128 v185; // [rsp+100h] [rbp-78h] BYREF
  __int128 v186; // [rsp+110h] [rbp-68h]
  _QWORD v187[2]; // [rsp+128h] [rbp-50h] BYREF
  void *retaddr; // [rsp+178h] [rbp+0h]

  v8 = a3;
  Src = a2;
  v164 = a1;
  v175 = a6;
  v177 = a1;
  v178 = (_BYTE *)a6;
  v176 = a7;
  v154 = 0;
  v185 = 0LL;
  v186 = 0LL;
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
  v174 = v9;
  if ( qword_140C4DD40 )
  {
    if ( (v9 & 0x10) != 0 )
      v9 &= ~0x10uLL;
    else
      v9 &= ~qword_140C4DD40;
  }
  v173 = v9 >> 16;
  v183 = v9 >> 16;
  v172 = *(_QWORD *)(v9 >> 16);
  v182 = v172;
  v13 = *(_QWORD *)(qword_140C4E448 + 8LL * (*(_WORD *)(v172 + 60) & 0x3FF));
  if ( ((*(_DWORD *)(v172 + 56) >> 20) & 0x3F) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    NodeShiftedColor = (((*(_DWORD *)(v172 + 56) >> 20) & 0x3F) - 1) << byte_140C4DC8C;
  }
  else
  {
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    NodeShiftedColor = CurrentPrcb->NodeShiftedColor;
  }
  v16 = (1 << byte_140C4DC8D) - 1;
  v17 = v16 & _InterlockedExchangeAdd((volatile signed __int32 *)&CurrentPrcb->PageColor, 1u);
  v18 = 0LL;
  if ( a4 != 4096 )
    v18 = 2LL;
  Page = MiGetPage(v13, NodeShiftedColor | (unsigned int)v17, v18);
  v165 = Page;
  v184 = Page;
  if ( Page == -1 )
  {
    MiWaitForFreePage(v13);
    return 1LL;
  }
  v22 = 48 * Page - 0x58000000000LL;
  v157 = (__m128i *)v22;
  v180 = v22;
  v23 = *(_QWORD *)a6;
  if ( v175 >= 0xFFFFF6FB7DBED000uLL
    && v175 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v23 & 1) != 0
    && ((v23 & 0x20) == 0 || (v23 & 0x42) == 0) )
  {
    v24 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v24 )
    {
      v25 = *((_QWORD *)&v24->Flink + ((v175 >> 3) & 0x1FF));
      v26 = v23 | 0x20;
      if ( (v25 & 0x20) == 0 )
        v26 = *(_QWORD *)a6;
      v23 = v26;
      if ( (v25 & 0x42) != 0 )
        v23 = v26 | 0x42;
    }
  }
  v27 = (v23 >> 5) & 0x1F;
  v166 = v27;
  v162 = v27;
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
  v155 = 0;
  if ( a4 != 4096 )
    v29 = MiPfnZeroingNeeded(v22, v28) != 0;
  if ( *(unsigned __int8 *)(v22 + 34) >> 6 != v28 )
    MiChangePageAttribute(v22, v28, 0LL);
  for ( i = *(_QWORD *)(v22 + 24); ; i = v31 )
  {
    v31 = _InterlockedCompareExchange64((volatile signed __int64 *)(v22 + 24), i & 0xF0FFFFFFFFFFFFFFuLL, i);
    if ( i == v31 )
      break;
  }
  v32 = MiReservePtes((__int64)&qword_140C4ED40, 1u, 0xF0FFFFFFFFFFFFFFuLL, v20);
  v181 = v32;
  if ( v32 )
  {
    v37 = 4;
    if ( v165 <= 0xFFFFFFFFFLL && (*(_QWORD *)(48 * v165 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0 )
    {
      v38 = *(unsigned __int8 *)(48 * v165 - 0x57FFFFFFFDELL) >> 6;
      if ( !v38 || v38 == 3 )
      {
        v37 = 12;
      }
      else if ( v38 == 2 )
      {
        v37 = 28;
      }
    }
    v39 = ((v165 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v37 & 0x1F] & 0xFFFF000000000E7FuLL | 0x21;
    if ( v32 >= 0xFFFFF68000000000uLL && v32 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      v40 = (__int64)(v32 << 25) >> 16;
      if ( v32 >= 0xFFFFF6FB40000000uLL && v32 <= 0xFFFFF6FB7FFFFFFFuLL )
      {
        v39 = v32 == 0xFFFFF6FB7DBEDF68uLL
            ? ((v165 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v37 & 0x1F] & 0xFFFF000000000E7FuLL | 0x8000000000000021uLL
            : ((v165 & 0xFFFFFFFFFLL) << 12) & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v37 & 0x1F] & 0x7FFF000000000E7FLL | 0x21;
        if ( (unsigned int)MiUserPdeOrAbove(v32) )
          v39 |= 4uLL;
      }
      if ( v32 <= 0xFFFFF6BFFFFFFF78uLL )
        v39 |= 4uLL;
      if ( v40 >= 0xFFFF800000000000uLL )
      {
        if ( byte_140C4F7C8[((v40 >> 39) & 0x1FF) - 256] == 1
          || v40 >= 0xFFFFF68000000000uLL && v40 <= 0xFFFFF6FFFFFFFFFFuLL )
        {
LABEL_94:
          v42 = v39 & 0xFAFFFFFFFFFFFEFFuLL | ((unsigned __int64)(word_140C4DE08 & 1) << 8) | 0xA00000000000042LL;
          v43 = 0;
          if ( (unsigned int)MiPteInShadowRange(v32) )
          {
            if ( (unsigned int)MiPteHasShadow(v45, v44, v46, v47) )
            {
              v43 = 1;
              if ( !HIBYTE(word_140C4DE08) )
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
          if ( v29 )
          {
            if ( (_DWORD)v8 )
              memset((void *)v48, 0, v8);
            if ( 4096 - v8 != a4 )
              memset(&v49[a4], 0, 4096 - v8 - a4);
          }
          memmove(v49, Src, a4);
          MiReleasePtes(&qword_140C4ED40, v32, 1LL);
          goto LABEL_56;
        }
        if ( v40 < qword_140C4F938 || (v41 = HIBYTE(word_140C4DE08), v40 > qword_140C4E168) )
          v41 = (unsigned __int8)word_140C4DE08;
      }
      else
      {
        v41 = HIBYTE(word_140C4DE08);
      }
      if ( !v41 )
        goto LABEL_94;
    }
    v39 |= 0x100uLL;
    goto LABEL_94;
  }
  if ( (a5 & 1) == 0 )
  {
    MiReleaseFreshPage(v22);
    return 4LL;
  }
  if ( v29 )
    MiZeroPhysicalPage(v165);
  v155 = 1;
LABEL_56:
  v156 = BYTE4(PerfGlobalGroupMask) & 1;
  v163 = (unsigned __int64 *)(((v164 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v158 = *v163;
  v33 = v158 & 1;
  do
  {
    if ( !v33 )
      goto LABEL_375;
    v34 = v158;
    if ( (v158 & 0x200) != 0 )
      goto LABEL_375;
    v35 = MiPteInShadowRange(&v158);
    if ( v35
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && ((v34 & 0x20) == 0 || (v34 & 0x42) == 0) )
    {
      v36 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v36 )
      {
        v50 = *((_QWORD *)&v36->Flink + (((unsigned __int64)&v158 >> 3) & 0x1FF));
        if ( (v50 & 0x20) != 0 )
          v34 |= 0x20uLL;
        if ( (v50 & 0x42) != 0 )
          v34 |= 0x42uLL;
      }
      else
      {
        v34 = v158;
      }
    }
    v51 = (v34 >> 12) & 0xFFFFFFFFFLL;
    v52 = 48 * v51;
    v177 = 48 * v51;
  }
  while ( (*(_QWORD *)(48 * v51 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 );
  v53 = v52 - 0x58000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v52 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
    SchedulerAssist[5] = v52;
  }
  v167 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v53 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v167, v52);
    while ( *(__int64 *)(v53 + 24) < 0 );
  }
  v56 = v163;
  v57 = *v163;
  v158 = v57;
  if ( (v57 & 1) == 0 || (v57 & 0x200) != 0 )
    goto LABEL_366;
  if ( v35
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && ((v57 & 0x20) == 0 || (v57 & 0x42) == 0) )
  {
    v58 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v58 )
    {
      v59 = *((_QWORD *)&v58->Flink + (((unsigned __int64)&v158 >> 3) & 0x1FF));
      if ( (v59 & 0x20) != 0 )
        v57 |= 0x20uLL;
      if ( (v59 & 0x42) != 0 )
        v57 |= 0x42uLL;
    }
    else
    {
      v57 = v158;
    }
  }
  if ( v51 != ((v57 >> 12) & 0xFFFFFFFFFLL) )
  {
LABEL_366:
    _InterlockedAnd64((volatile signed __int64 *)(v53 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( CurrentIrql != 17 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v150 = KeGetCurrentIrql();
          if ( v150 <= 0xFu && CurrentIrql <= 0xFu && v150 >= 2u )
          {
            v151 = KeGetCurrentPrcb();
            v152 = v151->SchedulerAssist;
            v153 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v79 = (v153 & v152[5]) == 0;
            v152[5] &= v153;
            if ( v79 )
              KiRemoveSystemWorkPriorityKick(v151);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
    goto LABEL_375;
  }
  if ( !(unsigned int)MiAreChargesNeededToLockPage(v53) )
    goto LABEL_152;
  if ( (unsigned int)MI_PFN_IS_PROTO(v53) && (*(_DWORD *)(v53 + 16) & 0x400LL) != 0 )
  {
    v65 = 1;
  }
  else
  {
    IsPfnCommitNotCharged = MiIsPfnCommitNotCharged(v64);
    v65 = v67;
    if ( IsPfnCommitNotCharged )
      v65 = 1;
  }
  v68 = (*(_QWORD *)(v53 + 40) >> 39) & 0x3FFLL;
  v69 = *(ULONG_PTR **)(qword_140C4E448 + 8 * v68);
  if ( !v65 || (unsigned int)MiChargeCommit(*(_QWORD *)(qword_140C4E448 + 8 * v68), 1LL, 4LL) )
  {
    v63 = &MiSystemPartition;
    if ( v69 == &MiSystemPartition )
    {
      v60 = (__int64)KeGetCurrentPrcb();
      v70 = *(_DWORD *)(v60 + 33564);
      if ( v70 )
      {
        v62 = 0xFFFFFFFFLL;
        do
        {
          if ( v70 == -1 )
            break;
          Process = (unsigned int)(v70 - 1);
          v71 = v70;
          v70 = _InterlockedCompareExchange((volatile signed __int32 *)(v60 + 33564), Process, v70);
          if ( v71 == v70 )
            goto LABEL_152;
        }
        while ( v70 );
      }
    }
    v72 = MiChargePartitionResidentAvailable(v69, 1LL, 0xFFFFFFFFLL);
    if ( !v72 && v65 )
      MiReturnCommit((__int64)v69, 1LL);
    if ( v72 )
LABEL_152:
      ++*(_WORD *)(v53 + 32);
  }
  if ( CurrentIrql == 17 )
  {
    LOBYTE(v60) = 17;
    MiLockOwnedProtoPage(v53, v60, v62, v63);
  }
  else
  {
    v154 = CurrentIrql;
    v159 = 0;
    v73 = (_BYTE *)(*(_QWORD *)(v53 + 8) | 0x8000000000000000uLL);
    v178 = v73;
    v74 = *(_BYTE *)(v53 + 34);
    if ( (v74 & 0x20) != 0 )
    {
      do
      {
        _InterlockedAnd64((volatile signed __int64 *)(v53 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v75 = KeGetCurrentIrql();
            if ( v75 <= 0xFu && CurrentIrql <= 0xFu && v75 >= 2u )
            {
              v76 = KeGetCurrentPrcb();
              v77 = v76->SchedulerAssist;
              v78 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v79 = (v78 & v77[5]) == 0;
              v60 = (unsigned int)v78 & v77[5];
              v77[5] = v60;
              if ( v79 )
                KiRemoveSystemWorkPriorityKick(v76);
            }
          }
        }
        __writecr8(CurrentIrql);
        v159 = 0;
        while ( (*(_BYTE *)(v53 + 34) & 0x20) != 0 )
          KeYieldProcessorEx(&v159, v60);
        MiLockPageInline(v53);
        v74 = *(_BYTE *)(v53 + 34);
      }
      while ( (v74 & 0x20) != 0 );
      v73 = v178;
      v56 = v163;
    }
    *(_BYTE *)(v53 + 34) = v74 | 0x20;
    if ( (*(_QWORD *)(v53 + 24) & 0x4000000000000000LL) == 0 && (*v73 & 0x20) == 0 )
      MiWriteValidPteVolatile(v73, 1LL);
    _InterlockedAnd64((volatile signed __int64 *)(v53 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  v80 = v164;
  v81 = *(_QWORD *)v164;
  v82 = 0xFFFFF6FB7DBED000uLL;
  if ( v164 >= 0xFFFFF6FB7DBED000uLL
    && v164 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(Process, v81, v62, v63)
    && (v81 & 1) != 0
    && ((v81 & 0x20) == 0 || (v81 & 0x42) == 0) )
  {
    Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
    v62 = *(_QWORD *)(Process + 1928);
    if ( v62 )
    {
      v83 = *(_QWORD *)(v62 + 8 * ((v80 >> 3) & 0x1FF));
      Process = (unsigned __int8)v83;
      v62 = v81 | 0x20;
      LOBYTE(Process) = v83 & 0x20;
      if ( (v83 & 0x20) == 0 )
        v62 = v81;
      v81 = v62;
      if ( (v83 & 0x42) != 0 )
        v81 = v62 | 0x42;
    }
  }
  v174 = v81;
  if ( (v81 & 1) != 0 || (v81 & 0x800) != 0 && (v81 & 0x400) == 0 || (v84 = (v81 >> 5) & 0x1F, v27 != (_DWORD)v84) )
  {
    MiUnlockProtoPoolPage(v53, v154);
LABEL_375:
    MiLockAndInsertPageInFreeList(v157);
    return 1LL;
  }
  v168 = 0;
  if ( _interlockedbittestandset64(&v157[1].m128i_i32[2], 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v168, v84);
      while ( v157[1].m128i_i64[1] < 0 );
    }
    while ( _interlockedbittestandset64(&v157[1].m128i_i32[2], 0x3FuLL) );
    v82 = 0xFFFFF6FB7DBED000uLL;
  }
  v85 = *(_QWORD *)v80;
  v86 = 0xFFFFF6FB7DBED7F8uLL;
  if ( v80 >= v82
    && v80 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(Process, v85, v62, v63)
    && (v85 & 1) != 0
    && ((v85 & 0x20) == 0 || (v85 & 0x42) == 0) )
  {
    v87 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v87 )
    {
      v88 = *((_QWORD *)&v87->Flink + ((v80 >> 3) & 0x1FF));
      v89 = v85 | 0x20;
      if ( (v88 & 0x20) == 0 )
        v89 = v85;
      v85 = v89;
      if ( (v88 & 0x42) != 0 )
        v85 = v89 | 0x42;
    }
  }
  v90 = -9LL;
  if ( (v85 & 0x400) != 0 )
    v90 = -2049LL;
  v157[1].m128i_i64[0] = v85 & v90;
  v157[2].m128i_i64[1] |= 0x8000000000000000uLL;
  v91 = v157[2].m128i_u64[1];
  if ( v27 )
  {
    if ( v27 == 31 )
    {
      v92 = 1;
    }
    else if ( v27 >> 3 == 3 && (v27 & 7) != 0 )
    {
      v92 = 2;
    }
    else
    {
      v92 = v27 >> 3 != 1;
    }
  }
  else
  {
    v92 = 3;
  }
  v157[2].m128i_i16[0] = 1;
  v93 = *v56;
  if ( (unsigned __int64)v56 >= v82
    && (unsigned __int64)v56 <= v86
    && (unsigned int)MiPteHasShadow(1LL, v85, v93, v91)
    && (v93 & 1) != 0
    && ((v93 & 0x20) == 0 || (v93 & 0x42) == 0) )
  {
    v94 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v94 )
    {
      v95 = *((_QWORD *)&v94->Flink + (((unsigned __int64)v56 >> 3) & 0x1FF));
      v85 = v93 | 0x20;
      if ( (v95 & 0x20) == 0 )
        v85 = v93;
      v93 = v85;
      if ( (v95 & 0x42) != 0 )
        v93 = v85 | 0x42;
    }
  }
  v171 = v93;
  if ( (unsigned __int64)&v171 >= v82
    && (unsigned __int64)&v171 <= v86
    && (unsigned int)MiPteHasShadow(&v171, v85, v93, v91)
    && (v93 & 1) != 0
    && ((v93 & 0x20) == 0 || (v93 & 0x42) == 0) )
  {
    v85 = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v85 )
    {
      v96 = *(_QWORD *)(v85 + 8 * (((unsigned __int64)&v171 >> 3) & 0x1FF));
      v85 = v93 | 0x20;
      if ( (v96 & 0x20) == 0 )
        v85 = v93;
      v93 = v85;
      if ( (v96 & 0x42) != 0 )
        v93 = v85 | 0x42;
    }
  }
  v97 = (v93 >> 12) & 0xFFFFFFFFFLL;
  v157[2].m128i_i64[1] = v91 ^ (v91 ^ v97) & 0xFFFFFFFFFLL;
  v98 = 48 * v97;
  CurrentThread = KeGetCurrentThread();
  if ( ((__int64)CurrentThread[1].Queue & 0x100) != 0 )
  {
    v160 = (unsigned __int64)((__int64)CurrentThread[1].Queue & 0xE00) >> 9;
  }
  else
  {
    v85 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 12) & 7;
    if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
    {
      v100 = 2;
      if ( (unsigned int)v85 < 2 )
        v100 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 12) & 7;
      v85 = v100;
    }
    v160 = v85;
  }
  v169 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v98 - 0x57FFFFFFFE8LL), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v169, v85);
    while ( *(__int64 *)(v98 - 0x57FFFFFFFE8LL) < 0 );
  }
  *(_QWORD *)(v98 - 0x57FFFFFFFE8LL) ^= (*(_QWORD *)(v98 - 0x57FFFFFFFE8LL) ^ ((*(_QWORD *)(v98 - 0x57FFFFFFFE8LL) & 0x3FFFFFFFFFFFFFFFLL)
                                                                             + 1)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v98 - 0x57FFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
  v101 = v157[2].m128i_u8[2];
  if ( v101 >> 6 != v92 )
  {
    MiChangePageAttribute(v157, v92, 1LL);
    v101 = v157[2].m128i_u8[2];
  }
  v157[1].m128i_i64[1] = v157[1].m128i_i64[1] & 0xC000000000000000uLL | 1;
  v157[2].m128i_i8[3] = v160 | v157[2].m128i_i8[3] & 0xF8;
  v157->m128i_i64[1] = v164;
  v102 = v101 & 0xF8 | 6;
  v157[2].m128i_i8[2] = v102;
  v157[2].m128i_i8[2] = v102 | 0x10;
  if ( (a5 & 2) != 0 )
  {
    v103 = v157[2].m128i_i8[3];
    if ( (v103 & 8) != 0 || (v103 & 7u) > 2 )
      v157[2].m128i_i8[3] = v103 & 0xF8 | 2;
  }
  if ( (*(_DWORD *)(v172 + 56) & 0x20) != 0 || !*(_QWORD *)(v172 + 64) )
    v173 = 0LL;
  v104 = (volatile signed __int32 *)(v172 + 72);
  v105 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v105 <= 0xFu )
  {
    v91 = (unsigned __int64)KeGetCurrentPrcb()->SchedulerAssist;
    *(_DWORD *)(v91 + 20) |= (-1 << (v105 + 1)) & 4;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v104, v105);
  }
  else
  {
    v161 = 0;
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
      v161 = ExpWaitForSpinLockExclusiveAndAcquire(v104, v105);
    }
    v109 = *(unsigned int *)v104;
    if ( (*v104 & 0xBFFFFFFF) != 0x80000000 )
    {
      do
      {
        if ( (v109 & 0x40000000) == 0 )
        {
          v110 = _InterlockedCompareExchange(v104, v109 | 0x40000000, v109);
          v79 = (_DWORD)v109 == v110;
          v109 = v110;
          if ( !v79 )
            continue;
        }
        KeYieldProcessorEx(&v161, v109);
        v109 = *(unsigned int *)v104;
      }
      while ( (v109 & 0xBFFFFFFF) != 0x80000000 );
    }
  }
  ++*(_QWORD *)(v172 + 32);
  if ( v173 )
    ++*(_DWORD *)(v173 + 104);
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
        v91 = (unsigned __int64)v115->SchedulerAssist;
        v116 = ~(unsigned __int16)(-1LL << (v105 + 1));
        v79 = (v116 & *(_DWORD *)(v91 + 20)) == 0;
        *(_DWORD *)(v91 + 20) &= v116;
        if ( v79 )
          KiRemoveSystemWorkPriorityKick(v115);
      }
    }
  }
  __writecr8(v105);
  v117 = 0xFFFFFFFFFLL;
  v118 = ((v165 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v162 & 0x1F] & 0xFFFF000000000E7FuLL | 0x121;
  if ( (v162 & 5) == 4 )
    v118 = ((v165 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v162 & 0x1F] & 0xFFFF000000000E7FuLL | 0x163;
  v119 = v118 & 0xF0FFFFFFFFFFFEFFuLL | 0xA00000000000000LL;
  v174 = v119;
  v120 = 0;
  v121 = (_QWORD *)v164;
  v122 = 0xFFFFF6FB7DBED7F8uLL;
  if ( v164 >= 0xFFFFF6FB7DBED000uLL && v164 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    if ( (unsigned int)MiPteHasShadow(0xFFFFFFFFFLL, 0LL, v164, v91) )
    {
      v120 = 1;
      if ( !HIBYTE(word_140C4DE08) )
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
  v123 = v174;
  v124 = 0;
  v125 = (_QWORD *)v175;
  if ( v175 >= 0xFFFFF6FB7DBED000uLL && v175 <= v122 )
  {
    if ( (unsigned int)MiPteHasShadow(v117, v174, 0LL, v175) )
    {
      v124 = 1;
      if ( HIBYTE(word_140C4DE08) )
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
  if ( v156 )
  {
    v185 = 0LL;
    v186 = 0LL;
    MiIdentifyPfn(v157, (unsigned __int64 *)&v185);
  }
  if ( (v157[2].m128i_i8[2] & 7) != 6 )
    MiBadShareCount(v157);
  v126 = 0x3FFFFFFFFFFFFFFFLL;
  v127 = (v157[1].m128i_i64[1] & 0x3FFFFFFFFFFFFFFFLL) - 1;
  v157[1].m128i_i64[1] ^= (v127 ^ v157[1].m128i_i64[1]) & 0x3FFFFFFFFFFFFFFFLL;
  if ( !v127 )
    MiPfnShareCountIsZero(v157);
  _InterlockedAnd64(&v157[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  v170 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v53 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v170, v127);
    while ( *(__int64 *)(v53 + 24) < 0 );
  }
  *(_BYTE *)(v53 + 34) &= ~0x20u;
  v128 = *(_WORD *)(v53 + 32);
  if ( !v128 )
    MiBadRefCount(v53);
  v129 = v128 - 1;
  *(_WORD *)(v53 + 32) = v129;
  if ( v129 || !(unsigned int)MiIsPfnFileOnly(v53, v127, v126, v125) )
  {
    v130 = *(_QWORD *)(v53 + 40);
    if ( (v130 & 0x1000000000LL) != 0 || (v130 & 0x2000000000000LL) != 0 )
      goto LABEL_355;
    v131 = *(_QWORD *)(v53 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( v129 )
    {
      if ( v129 == 1 )
      {
        if ( v131 )
          goto LABEL_326;
      }
      else if ( v129 != 2 || !v131 )
      {
        goto LABEL_355;
      }
      if ( (*(_BYTE *)(v53 + 34) & 8) == 0 )
        goto LABEL_355;
    }
LABEL_326:
    v132 = *(_QWORD *)(v53 + 8) | 0x8000000000000000uLL;
    if ( v132 > 0xFFFFF6BFFFFFFF78uLL || v132 < 0xFFFFF68000000000uLL )
    {
      v133 = *(_BYTE *)(v53 + 35);
      if ( (v133 & 0x20) != 0 )
      {
        *(_BYTE *)(v53 + 35) = v133 & 0xDF;
        goto LABEL_353;
      }
    }
    if ( (unsigned int)MI_PFN_IS_PROTO(v53) && (*(_DWORD *)(v53 + 16) & 0x400LL) != 0 )
    {
      v134 = 1;
    }
    else if ( v136 <= v138 && v136 >= 0xFFFFF68000000000uLL && (*(_BYTE *)(v53 + 35) & 0x20) != 0 )
    {
      v134 = 1;
    }
    else if ( !v129 && (v137 & 0x4000000000000000LL) != 0 )
    {
      v134 = 1;
    }
    v139 = (v135 >> 39) & 0x3FF;
    v140 = *(_QWORD *)(qword_140C4E448 + 8 * v139);
    if ( v134 == 1 )
      MiReturnCommit(*(_QWORD *)(qword_140C4E448 + 8 * v139), 1LL);
    v141 = 1LL;
    if ( (ULONG_PTR *)v140 == &MiSystemPartition )
    {
      v142 = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)v142->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable != -1 )
      {
        if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
        {
          while ( 1 )
          {
            v144 = _InterlockedCompareExchange(
                     (volatile signed __int32 *)&v142->CachedResidentAvailable,
                     CachedResidentAvailable + 1,
                     CachedResidentAvailable);
            v79 = (_DWORD)CachedResidentAvailable == v144;
            LODWORD(CachedResidentAvailable) = v144;
            if ( v79 )
              break;
            if ( v144 == -1 || (unsigned __int64)(v144 + 1LL) > 0x100 )
              goto LABEL_348;
          }
LABEL_353:
          if ( v129 )
            goto LABEL_355;
          goto LABEL_354;
        }
LABEL_348:
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&v142->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v141 = (int)CachedResidentAvailable - 192 + 1LL;
        }
        if ( !v141 )
          goto LABEL_353;
      }
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v140 + 7168), v141);
    goto LABEL_353;
  }
LABEL_354:
  MiPfnReferenceCountIsZero(v53, v177 / 48);
LABEL_355:
  _InterlockedAnd64((volatile signed __int64 *)(v53 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v145 = v154;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v146 = KeGetCurrentIrql();
      if ( v146 <= 0xFu && v154 <= 0xFu && v146 >= 2u )
      {
        v147 = KeGetCurrentPrcb();
        v148 = v147->SchedulerAssist;
        v145 = v154;
        v149 = ~(unsigned __int16)(-1LL << (v154 + 1));
        v79 = (v149 & v148[5]) == 0;
        v148[5] &= v149;
        if ( v79 )
          KiRemoveSystemWorkPriorityKick(v147);
      }
    }
  }
  __writecr8(v145);
  *v176 = 0;
  if ( v156 )
  {
    *((_QWORD *)&v186 + 1) |= 4uLL;
    v187[0] = &v185;
    v187[1] = 32LL;
    EtwTraceKernelEvent((unsigned int)v187, 1, 536870913, 642, 289413890);
  }
  return v155 != 0 ? 4 : 0;
}
