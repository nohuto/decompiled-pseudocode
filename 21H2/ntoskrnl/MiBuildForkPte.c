/*
 * XREFs of MiBuildForkPte @ 0x1405582BC
 * Callers:
 *     MiCloneVads @ 0x140559328 (MiCloneVads.c)
 * Callees:
 *     MiLockPageTablePage @ 0x140209DF0 (MiLockPageTablePage.c)
 *     MiGetPage @ 0x140213610 (MiGetPage.c)
 *     MiChargeCommit @ 0x14021AAD0 (MiChargeCommit.c)
 *     MiGetSharedVm @ 0x14021AF50 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14021CAE0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14021D060 (ExAcquireSpinLockExclusive.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x14023C0AC (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiInitializePageColorBase @ 0x14023F280 (MiInitializePageColorBase.c)
 *     MiGetWsleProtection @ 0x140241400 (MiGetWsleProtection.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x14025B15C (MiCaptureWriteWatchDirtyBit.c)
 *     MiReleasePageFileInfo @ 0x140267CB0 (MiReleasePageFileInfo.c)
 *     MiTransferSoftwarePte @ 0x14026A0D8 (MiTransferSoftwarePte.c)
 *     MiFinalizePageAttribute @ 0x14026E434 (MiFinalizePageAttribute.c)
 *     MiGetWsleContents @ 0x140270D40 (MiGetWsleContents.c)
 *     MiPrefetchVirtualMemory @ 0x140274EA0 (MiPrefetchVirtualMemory.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x14028D248 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiIsPrototypePteVadLookup @ 0x14028D4D0 (MiIsPrototypePteVadLookup.c)
 *     MiIsVadLargePrivate @ 0x1402AD514 (MiIsVadLargePrivate.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x1402BA73C (MI_IS_SOFTWARE_PTE_SHADOW_STACK.c)
 *     MiIncreaseUsedPtesCount @ 0x1403097D4 (MiIncreaseUsedPtesCount.c)
 *     MiMakeSystemAddressValid @ 0x14030E390 (MiMakeSystemAddressValid.c)
 *     MiWriteValidPteNewProtection @ 0x14030FA00 (MiWriteValidPteNewProtection.c)
 *     MiCaptureDirtyBitToPfn @ 0x14030FB10 (MiCaptureDirtyBitToPfn.c)
 *     MiReturnCommit @ 0x1403182A0 (MiReturnCommit.c)
 *     MiSwizzleInvalidPte @ 0x140329F90 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x140335D70 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x14033B520 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x14036AF08 (MiUpdateWorkingSetPrivateSize.c)
 *     MI_MAKE_PROTECT_WRITE_COPY @ 0x14036AFB4 (MI_MAKE_PROTECT_WRITE_COPY.c)
 *     MiSetWsleProtection @ 0x14036B220 (MiSetWsleProtection.c)
 *     MiLockAndInsertPageInFreeList @ 0x1403B750C (MiLockAndInsertPageInFreeList.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     MiDuplicateCloneLeaf @ 0x14055A234 (MiDuplicateCloneLeaf.c)
 *     MiFindZeroCloneBlock @ 0x14055A664 (MiFindZeroCloneBlock.c)
 *     MiGetCrossPartitionCloneCharges @ 0x14055A984 (MiGetCrossPartitionCloneCharges.c)
 *     MiHandleForkTransitionPte @ 0x14055AA64 (MiHandleForkTransitionPte.c)
 *     MiMakePerSessionProtoPte @ 0x14055B4A0 (MiMakePerSessionProtoPte.c)
 *     MiReferenceCloneProto @ 0x14055B598 (MiReferenceCloneProto.c)
 *     MiReturnCrossPartitionCloneCharges @ 0x14055B6E0 (MiReturnCrossPartitionCloneCharges.c)
 *     MiWriteSharedDemandZeroPte @ 0x14055BB38 (MiWriteSharedDemandZeroPte.c)
 *     MiWriteUselessChildPte @ 0x14055BCE0 (MiWriteUselessChildPte.c)
 *     MiWaitForFreePage @ 0x14055C1FC (MiWaitForFreePage.c)
 *     MiIncrementCombinedPte @ 0x14055D044 (MiIncrementCombinedPte.c)
 */

_BOOL8 __fastcall MiBuildForkPte(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        _QWORD *a4,
        __int64 a5,
        unsigned __int64 *a6,
        _QWORD *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        int a12,
        unsigned __int8 a13,
        _QWORD *a14,
        _DWORD *a15)
{
  __int64 v16; // r13
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // rbx
  __int64 ZeroCloneBlock; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // ebx
  int v24; // edx
  __int64 v26; // r10
  __int64 v27; // rdi
  int v28; // ecx
  int v29; // r8d
  unsigned __int64 v30; // rsi
  KIRQL v31; // al
  _QWORD *v32; // r11
  __int64 v33; // rax
  __int64 v34; // r13
  __int64 v35; // rcx
  unsigned __int8 WsleContents; // di
  unsigned __int64 v37; // r9
  __int64 v38; // r10
  __int64 v39; // rdx
  __int64 v40; // r8
  unsigned __int64 v41; // rax
  __int64 v42; // rsi
  __int64 v43; // r9
  __int64 v44; // rdi
  signed __int32 v45; // r9d
  __int64 v46; // rax
  _KPROCESS *v47; // rdx
  LONG *SharedVm; // rbx
  int v49; // eax
  __int64 v50; // r8
  _DWORD *v51; // r9
  BOOL v52; // edi
  _KPROCESS *v53; // rdx
  char v54; // r8
  __int64 v55; // r10
  __int64 v56; // rdi
  LONG *v57; // rdi
  __int64 v58; // rcx
  __int64 v59; // rbx
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // rax
  unsigned __int64 *v63; // rdi
  __int64 v64; // rbx
  __int64 v65; // rax
  __int64 v66; // rbx
  unsigned __int64 v67; // rbx
  int v68; // edi
  _KPROCESS *Process; // rcx
  __int64 v70; // r8
  unsigned __int64 v71; // rdx
  __int64 v72; // rdi
  bool v73; // zf
  unsigned __int64 v74; // rcx
  unsigned __int64 v75; // rbx
  int v76; // esi
  __int64 v77; // r8
  int WsleProtection; // eax
  __int64 v79; // r10
  __int64 v80; // rdx
  __int64 v81; // rbx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // r10
  __int64 v85; // rax
  __int64 v86; // rdi
  __int64 v87; // rcx
  __int64 PerSessionProtoPte; // rax
  int v89; // esi
  __int64 v90; // rbx
  int v91; // ebx
  int v92; // r9d
  __int64 v93; // rax
  int v94; // ebx
  __int64 v95; // r13
  __int64 v96; // rbx
  __int64 v97; // r8
  __int64 v98; // rax
  char v99; // di
  __int64 v100; // rbx
  __int64 v101; // r8
  int v102; // eax
  unsigned int v103; // edx
  __int64 v104; // rcx
  __int64 v105; // rbx
  int v106; // edi
  int v107; // esi
  __int64 v108; // rdx
  __int64 v109; // rax
  int v110; // edx
  __int64 v111; // r11
  int v112; // r8d
  __int64 v113; // r10
  int v114; // r11d
  __int64 v115; // rdi
  __int64 v116; // rcx
  __int64 v117; // rax
  int v118; // [rsp+50h] [rbp-A1h]
  unsigned __int64 v119; // [rsp+68h] [rbp-89h] BYREF
  unsigned int v120; // [rsp+70h] [rbp-81h]
  int i; // [rsp+74h] [rbp-7Dh]
  int v122; // [rsp+78h] [rbp-79h]
  int v123; // [rsp+7Ch] [rbp-75h]
  __int64 v124; // [rsp+80h] [rbp-71h]
  __int64 v125; // [rsp+88h] [rbp-69h]
  __int64 v126; // [rsp+90h] [rbp-61h]
  __int64 v127; // [rsp+98h] [rbp-59h] BYREF
  __int64 Page; // [rsp+A0h] [rbp-51h] BYREF
  __int64 v129; // [rsp+A8h] [rbp-49h]
  __int64 v130; // [rsp+B0h] [rbp-41h]
  int v131; // [rsp+B8h] [rbp-39h] BYREF
  int v132; // [rsp+BCh] [rbp-35h] BYREF
  int v133; // [rsp+C0h] [rbp-31h] BYREF
  __int64 v134; // [rsp+C8h] [rbp-29h] BYREF
  __int128 v135; // [rsp+D0h] [rbp-21h] BYREF
  _QWORD v136[9]; // [rsp+E0h] [rbp-11h] BYREF

  v134 = 0LL;
  v127 = 0LL;
  v135 = 0LL;
  v16 = a2;
  v119 = MI_READ_PTE_LOCK_FREE(a3);
  v19 = v119;
  if ( !v119 )
  {
    if ( a5 && *(int *)(a11 + 52) < 0 )
    {
      ZeroCloneBlock = MiFindZeroCloneBlock(a5, (*(_DWORD *)(a10 + 48) >> 7) & 0x1F);
      v23 = ZeroCloneBlock;
      if ( ZeroCloneBlock )
      {
        MiIncreaseUsedPtesCount(a8, 1LL, v21, v22);
        MiWriteSharedDemandZeroPte(v16, v24, v23, (_DWORD)a4, (__int64)a14);
      }
    }
    return 0LL;
  }
  MiIncreaseUsedPtesCount(a8, 1LL, v17, v18);
  v26 = a1;
  v27 = v16 + 1664;
  v120 = 0;
  v28 = 0;
  v29 = a12;
  Page = -1LL;
  v30 = (unsigned __int64)a6;
  v130 = a1 + 1664;
  v31 = a13;
  v126 = v16 + 1664;
  for ( i = a12; ; v29 = i )
  {
    v32 = a14;
    if ( v28 == 1 )
    {
      MiMakeSystemAddressValid(a3, 0LL, 0, v31, 1);
      v33 = MI_READ_PTE_LOCK_FREE(a3);
      v32 = a14;
      v19 = v33;
      v26 = a1;
      v29 = i;
      v119 = v33;
    }
    if ( (v19 & 1) != 0 )
    {
      v34 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v119) >> 12) & 0xFFFFFFFFFLL)
          - 0x58000000000LL;
      if ( v120
        || *(_WORD *)(v34 + 32) > 1u && !MI_PFN_IS_PROTO(v34)
        || (unsigned int)MI_IS_SOFTWARE_PTE_SHADOW_STACK((_QWORD *)(v34 + 16)) )
      {
        MiInitializePageColorBase(v130, 0, (__int64)&v135);
        v45 = _InterlockedExchangeAdd((volatile signed __int32 *)v135, 1u);
        v46 = *(_QWORD *)(qword_140C4E648 + 8LL * *(unsigned __int16 *)(v27 + 174));
        v124 = v46;
        if ( Page != -1 || (Page = MiGetPage(v46, HIDWORD(v135) | (unsigned int)v45 & DWORD2(v135), 0LL), Page != -1) )
        {
          v91 = Page;
          MiFinalizePageAttribute(48 * Page - 0x58000000000LL, *(unsigned __int8 *)(v34 + 34) >> 6, 0);
          LOBYTE(v92) = a13;
          MiDuplicateCloneLeaf(a3, (_DWORD)a4, v91, v92, 17);
          ++*a7;
          return 0LL;
        }
        MiFlushTbList(a9, v47);
        MiUnlockWorkingSetExclusive(v130, a13);
        MiWaitForFreePage(v124);
        SharedVm = MiGetSharedVm(v130);
        v31 = ExAcquireSpinLockExclusive(SharedVm);
        SharedVm[1] = 0;
        v19 = v119;
        a13 = v31;
LABEL_32:
        v16 = a2;
        goto LABEL_33;
      }
      v129 = (__int64)(a3 << 25) >> 16;
      WsleContents = MiGetWsleContents(v35, v129);
      if ( !MI_PFN_IS_PROTO(v34) )
      {
        v134 = MI_READ_PTE_LOCK_FREE(v38 + ((v30 >> 9) & 0x7FFFFFFFF8LL));
        v40 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v134) >> 12) & 0xFFFFFFFFFLL)
            - 0x58000000000LL;
        v41 = *(_QWORD *)(v34 + 40);
        v120 = 0;
        v122 = 0;
        v42 = ZeroPte;
        v124 = v40;
        v43 = *(_QWORD *)(qword_140C4E648 + 8 * ((v41 >> 39) & 0x3FF));
        v125 = v43;
        if ( *(_QWORD *)(qword_140C4E648 + 8LL * *(unsigned __int16 *)(v126 + 174)) != v43 )
        {
          if ( (i & 1) != 0 )
          {
            if ( !(unsigned int)MiChargeCommit(v43, 1uLL, 0) )
              goto LABEL_104;
            v43 = v125;
            v122 = 1;
          }
          if ( !(unsigned int)MiGetCrossPartitionCloneCharges(v43) )
          {
            MiWriteUselessChildPte(a4);
            v52 = 0;
            *a15 = 1;
            if ( !v122 )
              goto LABEL_213;
            v58 = v125;
            goto LABEL_46;
          }
          v40 = v124;
          v120 = 1;
        }
        if ( (WsleContents & 0xF) != 8 || (unsigned int)MiLockPageTablePage(v40, 3) )
        {
          v131 = 0;
          v59 = v124;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v59 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v131, v39, v40, v43);
            while ( *(__int64 *)(v59 + 24) < 0 );
          }
          v60 = 0x3FFFFFFFFFFFFFFFLL;
          *(_QWORD *)(v59 + 24) ^= (*(_QWORD *)(v59 + 24) ^ (*(_QWORD *)(v59 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
          _InterlockedAnd64((volatile signed __int64 *)(v59 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (v119 & 0x42) != 0 )
          {
            v61 = a10;
            if ( (*(_DWORD *)(a10 + 48) & 0x300000) == 0x300000 && !MI_PFN_IS_PROTO(v34) )
              MiCaptureWriteWatchDirtyBit(a1, v129, v61);
            v132 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v34 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v132, v60, v61, v43);
              while ( *(__int64 *)(v34 + 24) < 0 );
            }
            v62 = MiCaptureDirtyBitToPfn(v34);
            v119 &= 0xFFFFFFFFFFFFFFBDuLL;
            v42 = v62;
          }
          else
          {
            v133 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v34 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v133, v60, v40, v43);
              while ( *(__int64 *)(v34 + 24) < 0 );
            }
          }
          v63 = (unsigned __int64 *)(v34 + 16);
          v64 = *(_QWORD *)(v34 + 16);
          if ( (v64 & 2) != 0 )
          {
            v65 = *(_QWORD *)(v34 + 16);
            if ( qword_140C4DF40 && (v64 & 0x10) == 0 )
              v65 = ~qword_140C4DF40 & v64;
            v42 = MiTransferSoftwarePte(
                    *(_QWORD *)(v34 + 16),
                    *(_QWORD *)(v125 + 8LL * ((unsigned __int16)v64 >> 12) + 6944),
                    HIDWORD(v65));
            *v63 = v64 & 0xFFFFFFFFFFFFFFFDuLL;
          }
          *(_QWORD *)(v34 + 8) = a6;
          *(_QWORD *)(v34 + 40) |= 0x8000000000000000uLL;
          v66 = *(_QWORD *)(v34 + 40);
          *(_QWORD *)(v34 + 40) = v66 ^ (v66 ^ ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v134) >> 12)) & 0xFFFFFFFFFLL;
          MI_MAKE_PROTECT_WRITE_COPY((__int64 *)(v34 + 16));
          v124 = *v63 >> 5;
          _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v42 )
            MiReleasePageFileInfo(v125, v42, 1);
          v67 = v119;
          if ( (v119 & 0x800) != 0 )
          {
            v67 = v119 & 0xFFFFFFFFFFFFF5FFuLL | 0x200;
            v119 = v67;
          }
          MiWriteValidPteNewProtection(a3, v67);
          MiInsertTbFlushEntry(a9, v129, 1LL, 0);
          v68 = 0;
          *a6 = 0LL;
          if ( MiPteInShadowRange((unsigned __int64)a6) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v68 = 1;
              if ( !HIBYTE(word_140C4E008) )
                goto LABEL_75;
            }
            else
            {
              Process = KeGetCurrentThread()->ApcState.Process;
              if ( (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
              {
LABEL_75:
                if ( (v67 & 1) != 0 )
                  v67 |= 0x8000000000000000uLL;
              }
            }
          }
          *a6 = v67;
          if ( v68 )
            MiWritePteShadow((__int64)a6, v67, v70);
          v71 = v129;
          a6[1] = v120;
          a6[3] = 2LL;
          MiSetWsleProtection((__int64)Process, v71);
          v72 = MiSwizzleInvalidPte((*(_QWORD *)(v34 + 8) << 16) | 0x400LL);
          v119 = v72;
          if ( (i & 1) != 0 )
          {
            v72 |= 8uLL;
            v73 = v122 == 0;
            a6[2] = 1LL;
            v119 = v72;
            if ( v73 )
              ++a14[1];
            else
              ++*a14;
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v125 + 7624), 1uLL);
            v74 = a6[2];
          }
          else
          {
            v74 = 0LL;
          }
          v75 = v72;
          a6[2] = v74 & 0x7FFFFFFFFFFFFFFLL | ((unsigned __int64)(unsigned int)v124 << 59);
          v76 = 0;
          if ( MiPteInShadowRange((unsigned __int64)a4) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v76 = 1;
              if ( !HIBYTE(word_140C4E008) )
                goto LABEL_90;
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
LABEL_90:
              if ( (v72 & 1) != 0 )
                v75 = v72 | 0x8000000000000000uLL;
            }
          }
          *a4 = v75;
          if ( v76 )
            MiWritePteShadow((__int64)a4, v75, v77);
          _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
          MiUpdateWorkingSetPrivateSize(v130, v129, -1LL, 0);
LABEL_95:
          v52 = 1;
          goto LABEL_213;
        }
        v44 = v125;
        if ( v120 == 1 )
          MiReturnCrossPartitionCloneCharges(v125);
        if ( v122 )
          MiReturnCommit(v44, 1LL);
        v30 = (unsigned __int64)a6;
        v27 = v126;
        v31 = a13;
        v120 = 1;
        goto LABEL_32;
      }
      WsleProtection = MiGetWsleProtection(v37, WsleContents);
      if ( WsleProtection )
      {
        v81 = MiSwizzleInvalidPte(32 * (WsleProtection & 0x1F | 0xFFFFFFFFF8000020uLL));
        v119 = v81;
      }
      else
      {
        v85 = MiSwizzleInvalidPte((v79 << 16) | 0x400);
        v119 = v85;
        v81 = v85;
        if ( (v80 & v83) != 0 )
          goto LABEL_106;
        if ( v82 > 0 )
        {
          v81 = v85 | 0x800;
          v119 = v85 | 0x800;
        }
      }
      if ( (v80 & v83) == 0 && v82 > 0 )
      {
        if ( !(unsigned int)MiIncrementCombinedPte(v126, v84) )
        {
LABEL_104:
          MiWriteUselessChildPte(a4);
          *a15 = 1;
LABEL_212:
          v52 = 0;
          goto LABEL_213;
        }
        v86 = v81;
LABEL_114:
        v89 = 0;
        v90 = v86;
        if ( !MiPteInShadowRange((unsigned __int64)a4) )
          goto LABEL_210;
        if ( (unsigned int)MiPteHasShadow() )
        {
          v89 = 1;
          if ( HIBYTE(word_140C4E008) )
            goto LABEL_210;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        {
          goto LABEL_210;
        }
        if ( (v86 & 1) != 0 )
LABEL_209:
          v90 |= 0x8000000000000000uLL;
LABEL_210:
        *a4 = v90;
        if ( v89 )
          MiWritePteShadow((__int64)a4, v90, v50);
        goto LABEL_212;
      }
LABEL_106:
      if ( !(unsigned int)MiReferenceCloneProto(v126, v84, i, (_DWORD)a14, (__int64)&v127) )
        goto LABEL_104;
      v86 = v81;
      if ( v127 )
      {
        v86 = v81 | 8;
        v119 = v81 | 8;
      }
      else if ( !MiIsPrototypePteVadLookup(*(_QWORD *)(v34 + 16))
             && (*(_BYTE *)(a10 + 48) & 0x70) == 0x20
             && !MiIsVadLargePrivate(a10) )
      {
        PerSessionProtoPte = MiMakePerSessionProtoPte(a1, a2, a3, v87);
        if ( PerSessionProtoPte )
        {
          v119 = PerSessionProtoPte;
          v86 = PerSessionProtoPte;
        }
      }
      goto LABEL_114;
    }
    if ( (v19 & 0x400) != 0 )
    {
      if ( MI_PROTO_FORMAT_COMBINED(v19) )
      {
        if ( !(unsigned int)MiIncrementCombinedPte(v27, v113) )
          goto LABEL_104;
        v115 = v19;
      }
      else
      {
        if ( !(unsigned int)MiReferenceCloneProto(v27, v113, v112, v114, (__int64)&v127) )
          goto LABEL_104;
        v115 = v19;
        if ( v127 )
        {
          if ( *(_QWORD *)(v127 + 16) >> 59 != 24 )
          {
            v115 = v19 | 8;
            v119 = v19 | 8;
          }
        }
        else if ( !MiIsPrototypePteVadLookup(v19) && (*(_BYTE *)(a10 + 48) & 0x70) == 0x20 && !MiIsVadLargePrivate(a10) )
        {
          v117 = MiMakePerSessionProtoPte(a1, v16, a3, v116);
          if ( v117 )
          {
            v119 = v117;
            v115 = v117;
          }
        }
      }
      v89 = 0;
      v90 = v115;
      if ( MiPteInShadowRange((unsigned __int64)a4) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v89 = 1;
          if ( HIBYTE(word_140C4E008) )
            goto LABEL_210;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        {
          goto LABEL_210;
        }
        if ( (v115 & 1) != 0 )
          goto LABEL_209;
      }
      goto LABEL_210;
    }
    if ( (v19 & 0x800) == 0 )
      break;
    LOBYTE(v118) = a13;
    v49 = MiHandleForkTransitionPte(v26, v16, a3, a4, v30, a7, a9, &Page, v29, v118, v32, a15);
    if ( v49 )
    {
      v52 = v49 != 1;
      goto LABEL_213;
    }
    v31 = a13;
LABEL_33:
    v26 = a1;
    v28 = 1;
  }
  v52 = 0;
  v124 = (v19 >> 5) & 0x1F;
  if ( !IS_PTE_NOT_DEMAND_ZERO(v19) )
  {
    if ( (v19 & 2) != 0 )
    {
      v19 &= ~2uLL;
      v119 = v19;
    }
    if ( !(unsigned int)MI_IS_SOFTWARE_PTE_SHADOW_STACK(&v119) )
    {
      if ( a5 )
      {
        v109 = MiFindZeroCloneBlock(a5, v108);
        v127 = v109;
        if ( v109 )
        {
          MiWriteSharedDemandZeroPte(v16, v110, v109, (_DWORD)a4, v111);
          goto LABEL_213;
        }
      }
    }
LABEL_176:
    v107 = 0;
    if ( MiPteInShadowRange((unsigned __int64)a4) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v107 = 1;
        if ( !HIBYTE(word_140C4E008) )
        {
LABEL_181:
          if ( (v19 & 1) != 0 )
            v19 |= 0x8000000000000000uLL;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        goto LABEL_181;
      }
    }
    *a4 = v19;
    if ( v107 )
      MiWritePteShadow((__int64)a4, v19, v50);
    goto LABEL_213;
  }
  if ( (_DWORD)v53 == 16 )
  {
    if ( (v19 & 2) != 0 )
    {
      v19 &= ~2uLL;
      v119 = v19;
    }
    goto LABEL_176;
  }
  if ( ((unsigned int)v53 & 0xFFFFFFF8) == 0x10 || (unsigned int)MI_IS_SOFTWARE_PTE_SHADOW_STACK(&v119) )
  {
    MiFlushTbList(a9, v53);
    v56 = v130;
    MiUnlockWorkingSetExclusive(v130, a13);
    v136[1] = 4096LL;
    v136[0] = (__int64)(a3 << 25) >> 16;
    MiPrefetchVirtualMemory(1uLL, (__int64)v136, v56, 45);
    v57 = MiGetSharedVm(v56);
    v31 = ExAcquireSpinLockExclusive(v57);
    v57[1] = 0;
    v27 = v126;
    a13 = v31;
    goto LABEL_33;
  }
  v93 = *(unsigned __int16 *)(v55 + 1838);
  v94 = 0;
  v120 = 0;
  v123 = 0;
  v95 = *(_QWORD *)(qword_140C4E648 + 8 * v93);
  if ( *(_QWORD *)(qword_140C4E648 + 8LL * *(unsigned __int16 *)(v126 + 174)) == v95 )
  {
LABEL_132:
    MI_MAKE_PROTECT_WRITE_COPY((__int64 *)&v119);
    v96 = v119;
    if ( (v119 & 2) != 0 )
    {
      MiReleasePageFileInfo(v95, v119 & 0xFFFFFFFFFFFFFFFBuLL, 1);
      v96 &= ~2uLL;
      v119 = v96;
    }
    *(_QWORD *)v30 = 0LL;
    if ( MiPteInShadowRange(v30) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v52 = 1;
        if ( HIBYTE(word_140C4E008) )
          goto LABEL_141;
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
      {
        goto LABEL_141;
      }
      if ( (v96 & 1) != 0 )
        v96 |= 0x8000000000000000uLL;
    }
LABEL_141:
    *(_QWORD *)v30 = v96;
    if ( v52 )
      MiWritePteShadow(v30, v96, v97);
    *(_QWORD *)(v30 + 8) = v120;
    *(_QWORD *)(v30 + 24) = 2LL;
    v98 = MiSwizzleInvalidPte((v30 << 16) | 0x400);
    v99 = v98;
    v122 = 0;
    v100 = v98;
    v119 = v98;
    if ( MiPteInShadowRange(a3) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v102 = 1;
        if ( !HIBYTE(word_140C4E008) && (v99 & 1) != 0 )
          v100 |= 0x8000000000000000uLL;
LABEL_152:
        *(_QWORD *)a3 = v100;
        if ( v102 )
          MiWritePteShadow(a3, v100, v101);
        if ( (i & 1) != 0 )
        {
          v103 = v124;
          if ( (_DWORD)v124 != 24 )
            v119 |= 8uLL;
          v73 = v123 == 0;
          *(_QWORD *)(v30 + 16) = 1LL;
          if ( v73 )
            ++a14[1];
          else
            ++*a14;
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v95 + 7624), 1uLL);
          v104 = *(_QWORD *)(v30 + 16);
        }
        else
        {
          if ( v120 == 1 )
            *(_QWORD *)(v30 + 8) = 1LL;
          *(_QWORD *)(v30 + 16) = 0LL;
          v103 = v124;
          v104 = 0LL;
        }
        v105 = v119;
        v106 = 0;
        *(_QWORD *)(v30 + 16) = v104 & 0x7FFFFFFFFFFFFFFLL | ((unsigned __int64)v103 << 59);
        if ( !MiPteInShadowRange((unsigned __int64)a4) )
          goto LABEL_171;
        if ( (unsigned int)MiPteHasShadow() )
        {
          v106 = 1;
          if ( !HIBYTE(word_140C4E008) )
          {
LABEL_169:
            if ( (v105 & 1) != 0 )
              v105 |= 0x8000000000000000uLL;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          goto LABEL_169;
        }
LABEL_171:
        *a4 = v105;
        if ( v106 )
          MiWritePteShadow((__int64)a4, v105, v50);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
        goto LABEL_95;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v99 & 1) != 0 )
      {
        v100 |= 0x8000000000000000uLL;
      }
    }
    v102 = v122;
    goto LABEL_152;
  }
  if ( (v54 & 1) != 0 )
  {
    if ( !(unsigned int)MiChargeCommit(v95, 1uLL, 0) )
    {
      MiWriteUselessChildPte(a4);
      *a15 = 1;
      goto LABEL_213;
    }
    v94 = 1;
    v123 = 1;
  }
  if ( (unsigned int)MiGetCrossPartitionCloneCharges(v95) )
  {
    v120 = 1;
    goto LABEL_132;
  }
  MiWriteUselessChildPte(a4);
  *a15 = 1;
  if ( v94 )
  {
    v58 = v95;
LABEL_46:
    MiReturnCommit(v58, 1LL);
  }
LABEL_213:
  if ( Page != -1 )
    MiLockAndInsertPageInFreeList(48 * Page - 0x58000000000LL, 0xFFFFFA8000000000uLL, v50, v51);
  return v52;
}
