/*
 * XREFs of MiBuildForkPte @ 0x1405584FC
 * Callers:
 *     MiCloneVads @ 0x140559568 (MiCloneVads.c)
 * Callees:
 *     MI_PROTO_FORMAT_COMBINED @ 0x14020A3E8 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiIsPrototypePteVadLookup @ 0x14020A670 (MiIsPrototypePteVadLookup.c)
 *     MiIsVadLargePrivate @ 0x14022B870 (MiIsVadLargePrivate.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x14023894C (MI_IS_SOFTWARE_PTE_SHADOW_STACK.c)
 *     MiReleasePageFileInfo @ 0x140255C50 (MiReleasePageFileInfo.c)
 *     MiTransferSoftwarePte @ 0x140258078 (MiTransferSoftwarePte.c)
 *     MiFinalizePageAttribute @ 0x14025C3D4 (MiFinalizePageAttribute.c)
 *     MiGetWsleContents @ 0x14025ECE0 (MiGetWsleContents.c)
 *     MiPrefetchVirtualMemory @ 0x140262E40 (MiPrefetchVirtualMemory.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x14027C6CC (MiCaptureWriteWatchDirtyBit.c)
 *     MiLockPageTablePage @ 0x1402AE6F0 (MiLockPageTablePage.c)
 *     MiGetPage @ 0x1402B7F10 (MiGetPage.c)
 *     MiChargeCommit @ 0x1402BF3D0 (MiChargeCommit.c)
 *     MiGetSharedVm @ 0x1402BF850 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402C13E0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1402E08FC (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiInitializePageColorBase @ 0x1402E3AD0 (MiInitializePageColorBase.c)
 *     MiGetWsleProtection @ 0x1402E5C50 (MiGetWsleProtection.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiIncreaseUsedPtesCount @ 0x140314524 (MiIncreaseUsedPtesCount.c)
 *     MiMakeSystemAddressValid @ 0x1403190E0 (MiMakeSystemAddressValid.c)
 *     MiWriteValidPteNewProtection @ 0x14031A750 (MiWriteValidPteNewProtection.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031A860 (MiCaptureDirtyBitToPfn.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x14036B0B8 (MiUpdateWorkingSetPrivateSize.c)
 *     MI_MAKE_PROTECT_WRITE_COPY @ 0x14036B164 (MI_MAKE_PROTECT_WRITE_COPY.c)
 *     MiSetWsleProtection @ 0x14036B3D0 (MiSetWsleProtection.c)
 *     MiLockAndInsertPageInFreeList @ 0x1403B767C (MiLockAndInsertPageInFreeList.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     MiDuplicateCloneLeaf @ 0x14055A474 (MiDuplicateCloneLeaf.c)
 *     MiFindZeroCloneBlock @ 0x14055A8A4 (MiFindZeroCloneBlock.c)
 *     MiGetCrossPartitionCloneCharges @ 0x14055ABC4 (MiGetCrossPartitionCloneCharges.c)
 *     MiHandleForkTransitionPte @ 0x14055ACA4 (MiHandleForkTransitionPte.c)
 *     MiMakePerSessionProtoPte @ 0x14055B6E0 (MiMakePerSessionProtoPte.c)
 *     MiReferenceCloneProto @ 0x14055B7D8 (MiReferenceCloneProto.c)
 *     MiReturnCrossPartitionCloneCharges @ 0x14055B920 (MiReturnCrossPartitionCloneCharges.c)
 *     MiWriteSharedDemandZeroPte @ 0x14055BD78 (MiWriteSharedDemandZeroPte.c)
 *     MiWriteUselessChildPte @ 0x14055BF20 (MiWriteUselessChildPte.c)
 *     MiWaitForFreePage @ 0x14055C43C (MiWaitForFreePage.c)
 *     MiIncrementCombinedPte @ 0x14055D284 (MiIncrementCombinedPte.c)
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
  unsigned __int64 v70; // rdx
  __int64 v71; // rdi
  bool v72; // zf
  unsigned __int64 v73; // rcx
  unsigned __int64 v74; // rbx
  int v75; // esi
  int WsleProtection; // eax
  __int64 v77; // r10
  __int64 v78; // rdx
  __int64 v79; // rbx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // r10
  __int64 v83; // rax
  __int64 v84; // rdi
  __int64 v85; // rcx
  __int64 PerSessionProtoPte; // rax
  int v87; // esi
  __int64 v88; // rbx
  int v89; // ebx
  int v90; // r9d
  __int64 v91; // rax
  int v92; // ebx
  __int64 v93; // r13
  __int64 v94; // rbx
  __int64 v95; // rax
  char v96; // di
  __int64 v97; // rbx
  int v98; // eax
  unsigned int v99; // edx
  __int64 v100; // rcx
  __int64 v101; // rbx
  int v102; // edi
  int v103; // esi
  __int64 v104; // rdx
  __int64 v105; // rax
  int v106; // edx
  __int64 v107; // r11
  int v108; // r8d
  __int64 v109; // r10
  int v110; // r11d
  __int64 v111; // rdi
  __int64 v112; // rcx
  __int64 v113; // rax
  int v114; // [rsp+50h] [rbp-A1h]
  unsigned __int64 v115; // [rsp+68h] [rbp-89h] BYREF
  unsigned int v116; // [rsp+70h] [rbp-81h]
  int i; // [rsp+74h] [rbp-7Dh]
  int v118; // [rsp+78h] [rbp-79h]
  int v119; // [rsp+7Ch] [rbp-75h]
  __int64 v120; // [rsp+80h] [rbp-71h]
  __int64 v121; // [rsp+88h] [rbp-69h]
  __int64 v122; // [rsp+90h] [rbp-61h]
  __int64 v123; // [rsp+98h] [rbp-59h] BYREF
  __int64 Page; // [rsp+A0h] [rbp-51h] BYREF
  __int64 v125; // [rsp+A8h] [rbp-49h]
  __int64 v126; // [rsp+B0h] [rbp-41h]
  int v127; // [rsp+B8h] [rbp-39h] BYREF
  int v128; // [rsp+BCh] [rbp-35h] BYREF
  int v129; // [rsp+C0h] [rbp-31h] BYREF
  __int64 v130; // [rsp+C8h] [rbp-29h] BYREF
  __int128 v131; // [rsp+D0h] [rbp-21h] BYREF
  _QWORD v132[9]; // [rsp+E0h] [rbp-11h] BYREF

  v130 = 0LL;
  v123 = 0LL;
  v131 = 0LL;
  v16 = a2;
  v115 = MI_READ_PTE_LOCK_FREE(a3);
  v19 = v115;
  if ( !v115 )
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
  v116 = 0;
  v28 = 0;
  v29 = a12;
  Page = -1LL;
  v30 = (unsigned __int64)a6;
  v126 = a1 + 1664;
  v31 = a13;
  v122 = v16 + 1664;
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
      v115 = v33;
    }
    if ( (v19 & 1) != 0 )
    {
      v34 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v115) >> 12) & 0xFFFFFFFFFLL)
          - 0x58000000000LL;
      if ( v116
        || *(_WORD *)(v34 + 32) > 1u && !MI_PFN_IS_PROTO(v34)
        || (unsigned int)MI_IS_SOFTWARE_PTE_SHADOW_STACK((_QWORD *)(v34 + 16)) )
      {
        MiInitializePageColorBase(v126, 0, (__int64)&v131);
        v45 = _InterlockedExchangeAdd((volatile signed __int32 *)v131, 1u);
        v46 = *(_QWORD *)(qword_140C4E688 + 8LL * *(unsigned __int16 *)(v27 + 174));
        v120 = v46;
        if ( Page != -1 || (Page = MiGetPage(v46, HIDWORD(v131) | (unsigned int)v45 & DWORD2(v131), 0LL), Page != -1) )
        {
          v89 = Page;
          MiFinalizePageAttribute(48 * Page - 0x58000000000LL, *(unsigned __int8 *)(v34 + 34) >> 6, 0);
          LOBYTE(v90) = a13;
          MiDuplicateCloneLeaf(a3, (_DWORD)a4, v89, v90, 17);
          ++*a7;
          return 0LL;
        }
        MiFlushTbList(a9, v47);
        MiUnlockWorkingSetExclusive(v126, a13);
        MiWaitForFreePage(v120);
        SharedVm = MiGetSharedVm(v126);
        v31 = ExAcquireSpinLockExclusive(SharedVm);
        SharedVm[1] = 0;
        v19 = v115;
        a13 = v31;
LABEL_32:
        v16 = a2;
        goto LABEL_33;
      }
      v125 = (__int64)(a3 << 25) >> 16;
      WsleContents = MiGetWsleContents(v35, v125);
      if ( !MI_PFN_IS_PROTO(v34) )
      {
        v130 = MI_READ_PTE_LOCK_FREE(v38 + ((v30 >> 9) & 0x7FFFFFFFF8LL));
        v40 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v130) >> 12) & 0xFFFFFFFFFLL)
            - 0x58000000000LL;
        v41 = *(_QWORD *)(v34 + 40);
        v116 = 0;
        v118 = 0;
        v42 = ZeroPte;
        v120 = v40;
        v43 = *(_QWORD *)(qword_140C4E688 + 8 * ((v41 >> 39) & 0x3FF));
        v121 = v43;
        if ( *(_QWORD *)(qword_140C4E688 + 8LL * *(unsigned __int16 *)(v122 + 174)) != v43 )
        {
          if ( (i & 1) != 0 )
          {
            if ( !(unsigned int)MiChargeCommit(v43, 1uLL, 0) )
              goto LABEL_104;
            v43 = v121;
            v118 = 1;
          }
          if ( !(unsigned int)MiGetCrossPartitionCloneCharges(v43) )
          {
            MiWriteUselessChildPte(a4);
            v52 = 0;
            *a15 = 1;
            if ( !v118 )
              goto LABEL_213;
            v58 = v121;
            goto LABEL_46;
          }
          v40 = v120;
          v116 = 1;
        }
        if ( (WsleContents & 0xF) != 8 || (unsigned int)MiLockPageTablePage(v40, 3) )
        {
          v127 = 0;
          v59 = v120;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v59 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v127, v39, v40, v43);
            while ( *(__int64 *)(v59 + 24) < 0 );
          }
          v60 = 0x3FFFFFFFFFFFFFFFLL;
          *(_QWORD *)(v59 + 24) ^= (*(_QWORD *)(v59 + 24) ^ (*(_QWORD *)(v59 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
          _InterlockedAnd64((volatile signed __int64 *)(v59 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (v115 & 0x42) != 0 )
          {
            v61 = a10;
            if ( (*(_DWORD *)(a10 + 48) & 0x300000) == 0x300000 && !MI_PFN_IS_PROTO(v34) )
              MiCaptureWriteWatchDirtyBit(a1, v125, v61);
            v128 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v34 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v128, v60, v61, v43);
              while ( *(__int64 *)(v34 + 24) < 0 );
            }
            v62 = MiCaptureDirtyBitToPfn(v34);
            v115 &= 0xFFFFFFFFFFFFFFBDuLL;
            v42 = v62;
          }
          else
          {
            v129 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v34 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v129, v60, v40, v43);
              while ( *(__int64 *)(v34 + 24) < 0 );
            }
          }
          v63 = (unsigned __int64 *)(v34 + 16);
          v64 = *(_QWORD *)(v34 + 16);
          if ( (v64 & 2) != 0 )
          {
            v65 = *(_QWORD *)(v34 + 16);
            if ( qword_140C4DF80 && (v64 & 0x10) == 0 )
              v65 = ~qword_140C4DF80 & v64;
            v42 = MiTransferSoftwarePte(
                    *(_QWORD *)(v34 + 16),
                    *(_QWORD *)(v121 + 8LL * ((unsigned __int16)v64 >> 12) + 6944),
                    HIDWORD(v65));
            *v63 = v64 & 0xFFFFFFFFFFFFFFFDuLL;
          }
          *(_QWORD *)(v34 + 8) = a6;
          *(_QWORD *)(v34 + 40) |= 0x8000000000000000uLL;
          v66 = *(_QWORD *)(v34 + 40);
          *(_QWORD *)(v34 + 40) = v66 ^ (v66 ^ ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v130) >> 12)) & 0xFFFFFFFFFLL;
          MI_MAKE_PROTECT_WRITE_COPY((__int64 *)(v34 + 16));
          v120 = *v63 >> 5;
          _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v42 )
            MiReleasePageFileInfo(v121, v42, 1);
          v67 = v115;
          if ( (v115 & 0x800) != 0 )
          {
            v67 = v115 & 0xFFFFFFFFFFFFF5FFuLL | 0x200;
            v115 = v67;
          }
          MiWriteValidPteNewProtection(a3, v67);
          MiInsertTbFlushEntry(a9, v125, 1LL, 0);
          v68 = 0;
          *a6 = 0LL;
          if ( MiPteInShadowRange((unsigned __int64)a6) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v68 = 1;
              if ( !HIBYTE(word_140C4E048) )
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
            MiWritePteShadow((__int64)a6, v67);
          v70 = v125;
          a6[1] = v116;
          a6[3] = 2LL;
          MiSetWsleProtection((__int64)Process, v70);
          v71 = MiSwizzleInvalidPte((*(_QWORD *)(v34 + 8) << 16) | 0x400LL);
          v115 = v71;
          if ( (i & 1) != 0 )
          {
            v71 |= 8uLL;
            v72 = v118 == 0;
            a6[2] = 1LL;
            v115 = v71;
            if ( v72 )
              ++a14[1];
            else
              ++*a14;
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v121 + 7624), 1uLL);
            v73 = a6[2];
          }
          else
          {
            v73 = 0LL;
          }
          v74 = v71;
          a6[2] = v73 & 0x7FFFFFFFFFFFFFFLL | ((unsigned __int64)(unsigned int)v120 << 59);
          v75 = 0;
          if ( MiPteInShadowRange((unsigned __int64)a4) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v75 = 1;
              if ( !HIBYTE(word_140C4E048) )
                goto LABEL_90;
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
LABEL_90:
              if ( (v71 & 1) != 0 )
                v74 = v71 | 0x8000000000000000uLL;
            }
          }
          *a4 = v74;
          if ( v75 )
            MiWritePteShadow((__int64)a4, v74);
          _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
          MiUpdateWorkingSetPrivateSize(v126, v125, -1LL, 0);
LABEL_95:
          v52 = 1;
          goto LABEL_213;
        }
        v44 = v121;
        if ( v116 == 1 )
          MiReturnCrossPartitionCloneCharges(v121);
        if ( v118 )
          MiReturnCommit(v44, 1LL);
        v30 = (unsigned __int64)a6;
        v27 = v122;
        v31 = a13;
        v116 = 1;
        goto LABEL_32;
      }
      WsleProtection = MiGetWsleProtection(v37, WsleContents);
      if ( WsleProtection )
      {
        v79 = MiSwizzleInvalidPte(32 * (WsleProtection & 0x1F | 0xFFFFFFFFF8000020uLL));
        v115 = v79;
      }
      else
      {
        v83 = MiSwizzleInvalidPte((v77 << 16) | 0x400);
        v115 = v83;
        v79 = v83;
        if ( (v78 & v81) != 0 )
          goto LABEL_106;
        if ( v80 > 0 )
        {
          v79 = v83 | 0x800;
          v115 = v83 | 0x800;
        }
      }
      if ( (v78 & v81) == 0 && v80 > 0 )
      {
        if ( !(unsigned int)MiIncrementCombinedPte(v122, v82) )
        {
LABEL_104:
          MiWriteUselessChildPte(a4);
          *a15 = 1;
LABEL_212:
          v52 = 0;
          goto LABEL_213;
        }
        v84 = v79;
LABEL_114:
        v87 = 0;
        v88 = v84;
        if ( !MiPteInShadowRange((unsigned __int64)a4) )
          goto LABEL_210;
        if ( (unsigned int)MiPteHasShadow() )
        {
          v87 = 1;
          if ( HIBYTE(word_140C4E048) )
            goto LABEL_210;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        {
          goto LABEL_210;
        }
        if ( (v84 & 1) != 0 )
LABEL_209:
          v88 |= 0x8000000000000000uLL;
LABEL_210:
        *a4 = v88;
        if ( v87 )
          MiWritePteShadow((__int64)a4, v88);
        goto LABEL_212;
      }
LABEL_106:
      if ( !(unsigned int)MiReferenceCloneProto(v122, v82, i, (_DWORD)a14, (__int64)&v123) )
        goto LABEL_104;
      v84 = v79;
      if ( v123 )
      {
        v84 = v79 | 8;
        v115 = v79 | 8;
      }
      else if ( !MiIsPrototypePteVadLookup(*(_QWORD *)(v34 + 16))
             && (*(_BYTE *)(a10 + 48) & 0x70) == 0x20
             && !(unsigned int)MiIsVadLargePrivate(a10) )
      {
        PerSessionProtoPte = MiMakePerSessionProtoPte(a1, a2, a3, v85);
        if ( PerSessionProtoPte )
        {
          v115 = PerSessionProtoPte;
          v84 = PerSessionProtoPte;
        }
      }
      goto LABEL_114;
    }
    if ( (v19 & 0x400) != 0 )
    {
      if ( MI_PROTO_FORMAT_COMBINED(v19) )
      {
        if ( !(unsigned int)MiIncrementCombinedPte(v27, v109) )
          goto LABEL_104;
        v111 = v19;
      }
      else
      {
        if ( !(unsigned int)MiReferenceCloneProto(v27, v109, v108, v110, (__int64)&v123) )
          goto LABEL_104;
        v111 = v19;
        if ( v123 )
        {
          if ( *(_QWORD *)(v123 + 16) >> 59 != 24 )
          {
            v111 = v19 | 8;
            v115 = v19 | 8;
          }
        }
        else if ( !MiIsPrototypePteVadLookup(v19)
               && (*(_BYTE *)(a10 + 48) & 0x70) == 0x20
               && !(unsigned int)MiIsVadLargePrivate(a10) )
        {
          v113 = MiMakePerSessionProtoPte(a1, v16, a3, v112);
          if ( v113 )
          {
            v115 = v113;
            v111 = v113;
          }
        }
      }
      v87 = 0;
      v88 = v111;
      if ( MiPteInShadowRange((unsigned __int64)a4) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v87 = 1;
          if ( HIBYTE(word_140C4E048) )
            goto LABEL_210;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        {
          goto LABEL_210;
        }
        if ( (v111 & 1) != 0 )
          goto LABEL_209;
      }
      goto LABEL_210;
    }
    if ( (v19 & 0x800) == 0 )
      break;
    LOBYTE(v114) = a13;
    v49 = MiHandleForkTransitionPte(v26, v16, a3, a4, v30, a7, a9, &Page, v29, v114, v32, a15);
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
  v120 = (v19 >> 5) & 0x1F;
  if ( !IS_PTE_NOT_DEMAND_ZERO(v19) )
  {
    if ( (v19 & 2) != 0 )
    {
      v19 &= ~2uLL;
      v115 = v19;
    }
    if ( !(unsigned int)MI_IS_SOFTWARE_PTE_SHADOW_STACK(&v115) )
    {
      if ( a5 )
      {
        v105 = MiFindZeroCloneBlock(a5, v104);
        v123 = v105;
        if ( v105 )
        {
          MiWriteSharedDemandZeroPte(v16, v106, v105, (_DWORD)a4, v107);
          goto LABEL_213;
        }
      }
    }
LABEL_176:
    v103 = 0;
    if ( MiPteInShadowRange((unsigned __int64)a4) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v103 = 1;
        if ( !HIBYTE(word_140C4E048) )
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
    if ( v103 )
      MiWritePteShadow((__int64)a4, v19);
    goto LABEL_213;
  }
  if ( (_DWORD)v53 == 16 )
  {
    if ( (v19 & 2) != 0 )
    {
      v19 &= ~2uLL;
      v115 = v19;
    }
    goto LABEL_176;
  }
  if ( ((unsigned int)v53 & 0xFFFFFFF8) == 0x10 || (unsigned int)MI_IS_SOFTWARE_PTE_SHADOW_STACK(&v115) )
  {
    MiFlushTbList(a9, v53);
    v56 = v126;
    MiUnlockWorkingSetExclusive(v126, a13);
    v132[1] = 4096LL;
    v132[0] = (__int64)(a3 << 25) >> 16;
    MiPrefetchVirtualMemory(1uLL, (__int64)v132, v56, 45);
    v57 = MiGetSharedVm(v56);
    v31 = ExAcquireSpinLockExclusive(v57);
    v57[1] = 0;
    v27 = v122;
    a13 = v31;
    goto LABEL_33;
  }
  v91 = *(unsigned __int16 *)(v55 + 1838);
  v92 = 0;
  v116 = 0;
  v119 = 0;
  v93 = *(_QWORD *)(qword_140C4E688 + 8 * v91);
  if ( *(_QWORD *)(qword_140C4E688 + 8LL * *(unsigned __int16 *)(v122 + 174)) == v93 )
  {
LABEL_132:
    MI_MAKE_PROTECT_WRITE_COPY((__int64 *)&v115);
    v94 = v115;
    if ( (v115 & 2) != 0 )
    {
      MiReleasePageFileInfo(v93, v115 & 0xFFFFFFFFFFFFFFFBuLL, 1);
      v94 &= ~2uLL;
      v115 = v94;
    }
    *(_QWORD *)v30 = 0LL;
    if ( MiPteInShadowRange(v30) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v52 = 1;
        if ( HIBYTE(word_140C4E048) )
          goto LABEL_141;
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
      {
        goto LABEL_141;
      }
      if ( (v94 & 1) != 0 )
        v94 |= 0x8000000000000000uLL;
    }
LABEL_141:
    *(_QWORD *)v30 = v94;
    if ( v52 )
      MiWritePteShadow(v30, v94);
    *(_QWORD *)(v30 + 8) = v116;
    *(_QWORD *)(v30 + 24) = 2LL;
    v95 = MiSwizzleInvalidPte((v30 << 16) | 0x400);
    v96 = v95;
    v118 = 0;
    v97 = v95;
    v115 = v95;
    if ( MiPteInShadowRange(a3) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v98 = 1;
        if ( !HIBYTE(word_140C4E048) && (v96 & 1) != 0 )
          v97 |= 0x8000000000000000uLL;
LABEL_152:
        *(_QWORD *)a3 = v97;
        if ( v98 )
          MiWritePteShadow(a3, v97);
        if ( (i & 1) != 0 )
        {
          v99 = v120;
          if ( (_DWORD)v120 != 24 )
            v115 |= 8uLL;
          v72 = v119 == 0;
          *(_QWORD *)(v30 + 16) = 1LL;
          if ( v72 )
            ++a14[1];
          else
            ++*a14;
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v93 + 7624), 1uLL);
          v100 = *(_QWORD *)(v30 + 16);
        }
        else
        {
          if ( v116 == 1 )
            *(_QWORD *)(v30 + 8) = 1LL;
          *(_QWORD *)(v30 + 16) = 0LL;
          v99 = v120;
          v100 = 0LL;
        }
        v101 = v115;
        v102 = 0;
        *(_QWORD *)(v30 + 16) = v100 & 0x7FFFFFFFFFFFFFFLL | ((unsigned __int64)v99 << 59);
        if ( !MiPteInShadowRange((unsigned __int64)a4) )
          goto LABEL_171;
        if ( (unsigned int)MiPteHasShadow() )
        {
          v102 = 1;
          if ( !HIBYTE(word_140C4E048) )
          {
LABEL_169:
            if ( (v101 & 1) != 0 )
              v101 |= 0x8000000000000000uLL;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          goto LABEL_169;
        }
LABEL_171:
        *a4 = v101;
        if ( v102 )
          MiWritePteShadow((__int64)a4, v101);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
        goto LABEL_95;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v96 & 1) != 0 )
      {
        v97 |= 0x8000000000000000uLL;
      }
    }
    v98 = v118;
    goto LABEL_152;
  }
  if ( (v54 & 1) != 0 )
  {
    if ( !(unsigned int)MiChargeCommit(v93, 1uLL, 0) )
    {
      MiWriteUselessChildPte(a4);
      *a15 = 1;
      goto LABEL_213;
    }
    v92 = 1;
    v119 = 1;
  }
  if ( (unsigned int)MiGetCrossPartitionCloneCharges(v93) )
  {
    v116 = 1;
    goto LABEL_132;
  }
  MiWriteUselessChildPte(a4);
  *a15 = 1;
  if ( v92 )
  {
    v58 = v93;
LABEL_46:
    MiReturnCommit(v58, 1LL);
  }
LABEL_213:
  if ( Page != -1 )
    MiLockAndInsertPageInFreeList(48 * Page - 0x58000000000LL, 0xFFFFFA8000000000uLL, v50, v51);
  return v52;
}
