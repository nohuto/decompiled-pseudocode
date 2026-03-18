/*
 * XREFs of MiBuildForkPte @ 0x1405567EC
 * Callers:
 *     MiCloneVads @ 0x140557858 (MiCloneVads.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiPrefetchVirtualMemory @ 0x14022D6A0 (MiPrefetchVirtualMemory.c)
 *     MiReturnCommit @ 0x140230300 (MiReturnCommit.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1402309EC (MiCaptureWriteWatchDirtyBit.c)
 *     MiInitializePageColorBase @ 0x140231F50 (MiInitializePageColorBase.c)
 *     MiMakeSystemAddressValid @ 0x140235350 (MiMakeSystemAddressValid.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x140236AC8 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiIsPrototypePteVadLookup @ 0x140236D50 (MiIsPrototypePteVadLookup.c)
 *     MiLockPageTablePage @ 0x14026B110 (MiLockPageTablePage.c)
 *     MiGetPage @ 0x140274DF0 (MiGetPage.c)
 *     MiChargeCommit @ 0x14027C2B0 (MiChargeCommit.c)
 *     MiGetSharedVm @ 0x14027C730 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027F090 (MiUnlockWorkingSetExclusive.c)
 *     MiGetWsleProtection @ 0x14028F860 (MiGetWsleProtection.c)
 *     MiWriteValidPteNewProtection @ 0x14029F0A0 (MiWriteValidPteNewProtection.c)
 *     MiCaptureDirtyBitToPfn @ 0x14029F1B0 (MiCaptureDirtyBitToPfn.c)
 *     MiSwizzleInvalidPte @ 0x1402AD3A0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x1402B8FC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1402BFA90 (MiFlushTbList.c)
 *     MiIncreaseUsedPtesCount @ 0x1402CEA34 (MiIncreaseUsedPtesCount.c)
 *     MiGetWsleContents @ 0x1402D3CE0 (MiGetWsleContents.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiIsVadLargePrivate @ 0x14030DCC4 (MiIsVadLargePrivate.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x140317FF8 (MI_IS_SOFTWARE_PTE_SHADOW_STACK.c)
 *     MiReleasePageFileInfo @ 0x140344F70 (MiReleasePageFileInfo.c)
 *     MiTransferSoftwarePte @ 0x140347114 (MiTransferSoftwarePte.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x140349584 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiFinalizePageAttribute @ 0x140350B14 (MiFinalizePageAttribute.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x14036AC58 (MiUpdateWorkingSetPrivateSize.c)
 *     MI_MAKE_PROTECT_WRITE_COPY @ 0x14036AD04 (MI_MAKE_PROTECT_WRITE_COPY.c)
 *     MiSetWsleProtection @ 0x14036AF70 (MiSetWsleProtection.c)
 *     MiLockAndInsertPageInFreeList @ 0x1403B5ECC (MiLockAndInsertPageInFreeList.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
 *     MiDuplicateCloneLeaf @ 0x140558764 (MiDuplicateCloneLeaf.c)
 *     MiFindZeroCloneBlock @ 0x140558B94 (MiFindZeroCloneBlock.c)
 *     MiGetCrossPartitionCloneCharges @ 0x140558EB4 (MiGetCrossPartitionCloneCharges.c)
 *     MiHandleForkTransitionPte @ 0x140558F94 (MiHandleForkTransitionPte.c)
 *     MiMakePerSessionProtoPte @ 0x1405599D0 (MiMakePerSessionProtoPte.c)
 *     MiReferenceCloneProto @ 0x140559AC8 (MiReferenceCloneProto.c)
 *     MiReturnCrossPartitionCloneCharges @ 0x140559C10 (MiReturnCrossPartitionCloneCharges.c)
 *     MiWriteSharedDemandZeroPte @ 0x14055A068 (MiWriteSharedDemandZeroPte.c)
 *     MiWriteUselessChildPte @ 0x14055A210 (MiWriteUselessChildPte.c)
 *     MiWaitForFreePage @ 0x14055A72C (MiWaitForFreePage.c)
 *     MiIncrementCombinedPte @ 0x14055B574 (MiIncrementCombinedPte.c)
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
        unsigned int *a9,
        __int64 a10,
        __int64 a11,
        int a12,
        unsigned __int8 a13,
        _QWORD *a14,
        _DWORD *a15)
{
  __int64 v16; // r13
  unsigned __int64 v17; // rbx
  __int64 ZeroCloneBlock; // rax
  int v19; // ebx
  int v20; // edx
  __int64 v22; // r10
  __int64 v23; // rdi
  int v24; // ecx
  int v25; // r8d
  unsigned __int64 v26; // rsi
  KIRQL v27; // al
  _QWORD *v28; // r11
  __int64 v29; // rax
  __int64 v30; // r13
  __int64 v31; // rcx
  unsigned __int8 WsleContents; // di
  unsigned __int64 v33; // r9
  __int64 v34; // r10
  __int64 v35; // rdx
  __int64 v36; // r8
  unsigned __int64 v37; // rax
  __int64 v38; // rsi
  __int64 v39; // r9
  __int64 v40; // rdi
  signed __int32 v41; // r9d
  __int64 v42; // rax
  _KPROCESS *v43; // rdx
  LONG *SharedVm; // rbx
  int v45; // eax
  __int64 v46; // r8
  _DWORD *v47; // r9
  BOOL v48; // edi
  _KPROCESS *v49; // rdx
  char v50; // r8
  __int64 v51; // r10
  __int64 v52; // rdi
  LONG *v53; // rdi
  __int64 v54; // rcx
  __int64 v55; // rbx
  __int64 v56; // rdx
  __int64 **v57; // r8
  __int64 v58; // rax
  unsigned __int64 *v59; // rdi
  __int64 v60; // rbx
  __int64 v61; // rax
  __int64 v62; // rbx
  unsigned __int64 v63; // rbx
  int v64; // edi
  _KPROCESS *Process; // rcx
  __int64 v66; // r8
  unsigned __int64 v67; // rdx
  __int64 v68; // rdi
  bool v69; // zf
  unsigned __int64 v70; // rcx
  unsigned __int64 v71; // rbx
  int v72; // esi
  __int64 v73; // r8
  int WsleProtection; // eax
  __int64 v75; // r10
  __int64 v76; // rdx
  __int64 v77; // rbx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // r10
  __int64 v81; // rax
  __int64 v82; // rdi
  __int64 v83; // rcx
  __int64 PerSessionProtoPte; // rax
  int v85; // esi
  __int64 v86; // rbx
  int v87; // ebx
  int v88; // r9d
  __int64 v89; // rax
  int v90; // ebx
  unsigned __int64 v91; // r13
  __int64 v92; // rbx
  __int64 v93; // r8
  __int64 v94; // rax
  char v95; // di
  __int64 v96; // rbx
  __int64 v97; // r8
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
  unsigned __int64 v125; // [rsp+A8h] [rbp-49h]
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
  v17 = v115;
  if ( !v115 )
  {
    if ( a5 && *(int *)(a11 + 52) < 0 )
    {
      ZeroCloneBlock = MiFindZeroCloneBlock(a5, (*(_DWORD *)(a10 + 48) >> 7) & 0x1F);
      v19 = ZeroCloneBlock;
      if ( ZeroCloneBlock )
      {
        MiIncreaseUsedPtesCount(a8, 1u);
        MiWriteSharedDemandZeroPte(v16, v20, v19, (_DWORD)a4, (__int64)a14);
      }
    }
    return 0LL;
  }
  MiIncreaseUsedPtesCount(a8, 1u);
  v22 = a1;
  v23 = v16 + 1664;
  v116 = 0;
  v24 = 0;
  v25 = a12;
  Page = -1LL;
  v26 = (unsigned __int64)a6;
  v126 = a1 + 1664;
  v27 = a13;
  v122 = v16 + 1664;
  for ( i = a12; ; v25 = i )
  {
    v28 = a14;
    if ( v24 == 1 )
    {
      MiMakeSystemAddressValid(a3, 0LL, 0, v27, 1);
      v29 = MI_READ_PTE_LOCK_FREE(a3);
      v28 = a14;
      v17 = v29;
      v22 = a1;
      v25 = i;
      v115 = v29;
    }
    if ( (v17 & 1) != 0 )
    {
      v30 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v115) >> 12) & 0xFFFFFFFFFLL)
          - 0x58000000000LL;
      if ( v116
        || *(_WORD *)(v30 + 32) > 1u && !MI_PFN_IS_PROTO(v30)
        || (unsigned int)MI_IS_SOFTWARE_PTE_SHADOW_STACK((_QWORD *)(v30 + 16)) )
      {
        MiInitializePageColorBase(v126, 0, (__int64)&v131);
        v41 = _InterlockedExchangeAdd((volatile signed __int32 *)v131, 1u);
        v42 = *(_QWORD *)(qword_140C4E4C8 + 8LL * *(unsigned __int16 *)(v23 + 174));
        v120 = v42;
        if ( Page != -1 || (Page = MiGetPage(v42, HIDWORD(v131) | (unsigned int)v41 & DWORD2(v131), 0LL), Page != -1) )
        {
          v87 = Page;
          MiFinalizePageAttribute(48 * Page - 0x58000000000LL, *(unsigned __int8 *)(v30 + 34) >> 6, 0);
          LOBYTE(v88) = a13;
          MiDuplicateCloneLeaf(a3, (_DWORD)a4, v87, v88, 17);
          ++*a7;
          return 0LL;
        }
        MiFlushTbList(a9, v43);
        MiUnlockWorkingSetExclusive(v126, a13);
        MiWaitForFreePage(v120);
        SharedVm = MiGetSharedVm(v126);
        v27 = ExAcquireSpinLockExclusive(SharedVm);
        SharedVm[1] = 0;
        v17 = v115;
        a13 = v27;
LABEL_32:
        v16 = a2;
        goto LABEL_33;
      }
      v125 = (__int64)(a3 << 25) >> 16;
      WsleContents = MiGetWsleContents(v31, v125);
      if ( !MI_PFN_IS_PROTO(v30) )
      {
        v130 = MI_READ_PTE_LOCK_FREE(v34 + ((v26 >> 9) & 0x7FFFFFFFF8LL));
        v36 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v130) >> 12) & 0xFFFFFFFFFLL)
            - 0x58000000000LL;
        v37 = *(_QWORD *)(v30 + 40);
        v116 = 0;
        v118 = 0;
        v38 = ZeroPte;
        v120 = v36;
        v39 = *(_QWORD *)(qword_140C4E4C8 + 8 * ((v37 >> 39) & 0x3FF));
        v121 = v39;
        if ( *(_QWORD *)(qword_140C4E4C8 + 8LL * *(unsigned __int16 *)(v122 + 174)) != v39 )
        {
          if ( (i & 1) != 0 )
          {
            if ( !(unsigned int)MiChargeCommit(v39, 1uLL, 0) )
              goto LABEL_104;
            v39 = v121;
            v118 = 1;
          }
          if ( !(unsigned int)MiGetCrossPartitionCloneCharges(v39) )
          {
            MiWriteUselessChildPte(a4);
            v48 = 0;
            *a15 = 1;
            if ( !v118 )
              goto LABEL_213;
            v54 = v121;
            goto LABEL_46;
          }
          v36 = v120;
          v116 = 1;
        }
        if ( (WsleContents & 0xF) != 8 || (unsigned int)MiLockPageTablePage(v36, 3) )
        {
          v127 = 0;
          v55 = v120;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v55 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v127, v35, v36, v39);
            while ( *(__int64 *)(v55 + 24) < 0 );
          }
          v56 = 0x3FFFFFFFFFFFFFFFLL;
          *(_QWORD *)(v55 + 24) ^= (*(_QWORD *)(v55 + 24) ^ (*(_QWORD *)(v55 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
          _InterlockedAnd64((volatile signed __int64 *)(v55 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (v115 & 0x42) != 0 )
          {
            v57 = (__int64 **)a10;
            if ( (*(_DWORD *)(a10 + 48) & 0x300000) == 0x300000 && !MI_PFN_IS_PROTO(v30) )
              MiCaptureWriteWatchDirtyBit(a1, v125, v57);
            v128 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v128, v56, (__int64)v57, v39);
              while ( *(__int64 *)(v30 + 24) < 0 );
            }
            v58 = MiCaptureDirtyBitToPfn(v30);
            v115 &= 0xFFFFFFFFFFFFFFBDuLL;
            v38 = v58;
          }
          else
          {
            v129 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v129, v56, v36, v39);
              while ( *(__int64 *)(v30 + 24) < 0 );
            }
          }
          v59 = (unsigned __int64 *)(v30 + 16);
          v60 = *(_QWORD *)(v30 + 16);
          if ( (v60 & 2) != 0 )
          {
            v61 = *(_QWORD *)(v30 + 16);
            if ( qword_140C4DDC0 && (v60 & 0x10) == 0 )
              v61 = ~qword_140C4DDC0 & v60;
            v38 = MiTransferSoftwarePte(
                    *(_QWORD *)(v30 + 16),
                    *(_QWORD *)(v121 + 8LL * ((unsigned __int16)v60 >> 12) + 6944),
                    HIDWORD(v61));
            *v59 = v60 & 0xFFFFFFFFFFFFFFFDuLL;
          }
          *(_QWORD *)(v30 + 8) = a6;
          *(_QWORD *)(v30 + 40) |= 0x8000000000000000uLL;
          v62 = *(_QWORD *)(v30 + 40);
          *(_QWORD *)(v30 + 40) = v62 ^ (v62 ^ ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v130) >> 12)) & 0xFFFFFFFFFLL;
          MI_MAKE_PROTECT_WRITE_COPY((__int64 *)(v30 + 16));
          v120 = *v59 >> 5;
          _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v38 )
            MiReleasePageFileInfo(v121, v38, 1);
          v63 = v115;
          if ( (v115 & 0x800) != 0 )
          {
            v63 = v115 & 0xFFFFFFFFFFFFF5FFuLL | 0x200;
            v115 = v63;
          }
          MiWriteValidPteNewProtection(a3, v63);
          MiInsertTbFlushEntry((__int64)a9, v125, 1LL, 0);
          v64 = 0;
          *a6 = 0LL;
          if ( MiPteInShadowRange((unsigned __int64)a6) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v64 = 1;
              if ( !HIBYTE(word_140C4DE88) )
                goto LABEL_75;
            }
            else
            {
              Process = KeGetCurrentThread()->ApcState.Process;
              if ( (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
              {
LABEL_75:
                if ( (v63 & 1) != 0 )
                  v63 |= 0x8000000000000000uLL;
              }
            }
          }
          *a6 = v63;
          if ( v64 )
            MiWritePteShadow((__int64)a6, v63, v66);
          v67 = v125;
          a6[1] = v116;
          a6[3] = 2LL;
          MiSetWsleProtection((__int64)Process, v67);
          v68 = MiSwizzleInvalidPte((*(_QWORD *)(v30 + 8) << 16) | 0x400LL);
          v115 = v68;
          if ( (i & 1) != 0 )
          {
            v68 |= 8uLL;
            v69 = v118 == 0;
            a6[2] = 1LL;
            v115 = v68;
            if ( v69 )
              ++a14[1];
            else
              ++*a14;
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v121 + 7624), 1uLL);
            v70 = a6[2];
          }
          else
          {
            v70 = 0LL;
          }
          v71 = v68;
          a6[2] = v70 & 0x7FFFFFFFFFFFFFFLL | ((unsigned __int64)(unsigned int)v120 << 59);
          v72 = 0;
          if ( MiPteInShadowRange((unsigned __int64)a4) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v72 = 1;
              if ( !HIBYTE(word_140C4DE88) )
                goto LABEL_90;
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
LABEL_90:
              if ( (v68 & 1) != 0 )
                v71 = v68 | 0x8000000000000000uLL;
            }
          }
          *a4 = v71;
          if ( v72 )
            MiWritePteShadow((__int64)a4, v71, v73);
          _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
          MiUpdateWorkingSetPrivateSize(v126, v125, -1LL, 0);
LABEL_95:
          v48 = 1;
          goto LABEL_213;
        }
        v40 = v121;
        if ( v116 == 1 )
          MiReturnCrossPartitionCloneCharges(v121);
        if ( v118 )
          MiReturnCommit(v40, 1LL);
        v26 = (unsigned __int64)a6;
        v23 = v122;
        v27 = a13;
        v116 = 1;
        goto LABEL_32;
      }
      WsleProtection = MiGetWsleProtection(v33, WsleContents);
      if ( WsleProtection )
      {
        v77 = MiSwizzleInvalidPte(32 * (WsleProtection & 0x1F | 0xFFFFFFFFF8000020uLL));
        v115 = v77;
      }
      else
      {
        v81 = MiSwizzleInvalidPte((v75 << 16) | 0x400);
        v115 = v81;
        v77 = v81;
        if ( (v76 & v79) != 0 )
          goto LABEL_106;
        if ( v78 > 0 )
        {
          v77 = v81 | 0x800;
          v115 = v81 | 0x800;
        }
      }
      if ( (v76 & v79) == 0 && v78 > 0 )
      {
        if ( !(unsigned int)MiIncrementCombinedPte(v122, v80) )
        {
LABEL_104:
          MiWriteUselessChildPte(a4);
          *a15 = 1;
LABEL_212:
          v48 = 0;
          goto LABEL_213;
        }
        v82 = v77;
LABEL_114:
        v85 = 0;
        v86 = v82;
        if ( !MiPteInShadowRange((unsigned __int64)a4) )
          goto LABEL_210;
        if ( (unsigned int)MiPteHasShadow() )
        {
          v85 = 1;
          if ( HIBYTE(word_140C4DE88) )
            goto LABEL_210;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        {
          goto LABEL_210;
        }
        if ( (v82 & 1) != 0 )
LABEL_209:
          v86 |= 0x8000000000000000uLL;
LABEL_210:
        *a4 = v86;
        if ( v85 )
          MiWritePteShadow((__int64)a4, v86, v46);
        goto LABEL_212;
      }
LABEL_106:
      if ( !(unsigned int)MiReferenceCloneProto(v122, v80, i, (_DWORD)a14, (__int64)&v123) )
        goto LABEL_104;
      v82 = v77;
      if ( v123 )
      {
        v82 = v77 | 8;
        v115 = v77 | 8;
      }
      else if ( !MiIsPrototypePteVadLookup(*(_QWORD *)(v30 + 16))
             && (*(_BYTE *)(a10 + 48) & 0x70) == 0x20
             && !MiIsVadLargePrivate(a10) )
      {
        PerSessionProtoPte = MiMakePerSessionProtoPte(a1, a2, a3, v83);
        if ( PerSessionProtoPte )
        {
          v115 = PerSessionProtoPte;
          v82 = PerSessionProtoPte;
        }
      }
      goto LABEL_114;
    }
    if ( (v17 & 0x400) != 0 )
    {
      if ( MI_PROTO_FORMAT_COMBINED(v17) )
      {
        if ( !(unsigned int)MiIncrementCombinedPte(v23, v109) )
          goto LABEL_104;
        v111 = v17;
      }
      else
      {
        if ( !(unsigned int)MiReferenceCloneProto(v23, v109, v108, v110, (__int64)&v123) )
          goto LABEL_104;
        v111 = v17;
        if ( v123 )
        {
          if ( *(_QWORD *)(v123 + 16) >> 59 != 24 )
          {
            v111 = v17 | 8;
            v115 = v17 | 8;
          }
        }
        else if ( !MiIsPrototypePteVadLookup(v17) && (*(_BYTE *)(a10 + 48) & 0x70) == 0x20 && !MiIsVadLargePrivate(a10) )
        {
          v113 = MiMakePerSessionProtoPte(a1, v16, a3, v112);
          if ( v113 )
          {
            v115 = v113;
            v111 = v113;
          }
        }
      }
      v85 = 0;
      v86 = v111;
      if ( MiPteInShadowRange((unsigned __int64)a4) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v85 = 1;
          if ( HIBYTE(word_140C4DE88) )
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
    if ( (v17 & 0x800) == 0 )
      break;
    LOBYTE(v114) = a13;
    v45 = MiHandleForkTransitionPte(v22, v16, a3, a4, v26, a7, a9, &Page, v25, v114, v28, a15);
    if ( v45 )
    {
      v48 = v45 != 1;
      goto LABEL_213;
    }
    v27 = a13;
LABEL_33:
    v22 = a1;
    v24 = 1;
  }
  v48 = 0;
  v120 = (v17 >> 5) & 0x1F;
  if ( !IS_PTE_NOT_DEMAND_ZERO(v17) )
  {
    if ( (v17 & 2) != 0 )
    {
      v17 &= ~2uLL;
      v115 = v17;
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
        if ( !HIBYTE(word_140C4DE88) )
        {
LABEL_181:
          if ( (v17 & 1) != 0 )
            v17 |= 0x8000000000000000uLL;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        goto LABEL_181;
      }
    }
    *a4 = v17;
    if ( v103 )
      MiWritePteShadow((__int64)a4, v17, v46);
    goto LABEL_213;
  }
  if ( (_DWORD)v49 == 16 )
  {
    if ( (v17 & 2) != 0 )
    {
      v17 &= ~2uLL;
      v115 = v17;
    }
    goto LABEL_176;
  }
  if ( ((unsigned int)v49 & 0xFFFFFFF8) == 0x10 || (unsigned int)MI_IS_SOFTWARE_PTE_SHADOW_STACK(&v115) )
  {
    MiFlushTbList(a9, v49);
    v52 = v126;
    MiUnlockWorkingSetExclusive(v126, a13);
    v132[1] = 4096LL;
    v132[0] = (__int64)(a3 << 25) >> 16;
    MiPrefetchVirtualMemory(1uLL, (unsigned __int64)v132, v52, 45);
    v53 = MiGetSharedVm(v52);
    v27 = ExAcquireSpinLockExclusive(v53);
    v53[1] = 0;
    v23 = v122;
    a13 = v27;
    goto LABEL_33;
  }
  v89 = *(unsigned __int16 *)(v51 + 1838);
  v90 = 0;
  v116 = 0;
  v119 = 0;
  v91 = *(_QWORD *)(qword_140C4E4C8 + 8 * v89);
  if ( *(_QWORD *)(qword_140C4E4C8 + 8LL * *(unsigned __int16 *)(v122 + 174)) == v91 )
  {
LABEL_132:
    MI_MAKE_PROTECT_WRITE_COPY((__int64 *)&v115);
    v92 = v115;
    if ( (v115 & 2) != 0 )
    {
      MiReleasePageFileInfo(v91, v115 & 0xFFFFFFFFFFFFFFFBuLL, 1);
      v92 &= ~2uLL;
      v115 = v92;
    }
    *(_QWORD *)v26 = 0LL;
    if ( MiPteInShadowRange(v26) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v48 = 1;
        if ( HIBYTE(word_140C4DE88) )
          goto LABEL_141;
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
      {
        goto LABEL_141;
      }
      if ( (v92 & 1) != 0 )
        v92 |= 0x8000000000000000uLL;
    }
LABEL_141:
    *(_QWORD *)v26 = v92;
    if ( v48 )
      MiWritePteShadow(v26, v92, v93);
    *(_QWORD *)(v26 + 8) = v116;
    *(_QWORD *)(v26 + 24) = 2LL;
    v94 = MiSwizzleInvalidPte((v26 << 16) | 0x400);
    v95 = v94;
    v118 = 0;
    v96 = v94;
    v115 = v94;
    if ( MiPteInShadowRange(a3) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v98 = 1;
        if ( !HIBYTE(word_140C4DE88) && (v95 & 1) != 0 )
          v96 |= 0x8000000000000000uLL;
LABEL_152:
        *(_QWORD *)a3 = v96;
        if ( v98 )
          MiWritePteShadow(a3, v96, v97);
        if ( (i & 1) != 0 )
        {
          v99 = v120;
          if ( (_DWORD)v120 != 24 )
            v115 |= 8uLL;
          v69 = v119 == 0;
          *(_QWORD *)(v26 + 16) = 1LL;
          if ( v69 )
            ++a14[1];
          else
            ++*a14;
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v91 + 7624), 1uLL);
          v100 = *(_QWORD *)(v26 + 16);
        }
        else
        {
          if ( v116 == 1 )
            *(_QWORD *)(v26 + 8) = 1LL;
          *(_QWORD *)(v26 + 16) = 0LL;
          v99 = v120;
          v100 = 0LL;
        }
        v101 = v115;
        v102 = 0;
        *(_QWORD *)(v26 + 16) = v100 & 0x7FFFFFFFFFFFFFFLL | ((unsigned __int64)v99 << 59);
        if ( !MiPteInShadowRange((unsigned __int64)a4) )
          goto LABEL_171;
        if ( (unsigned int)MiPteHasShadow() )
        {
          v102 = 1;
          if ( !HIBYTE(word_140C4DE88) )
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
          MiWritePteShadow((__int64)a4, v101, v46);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
        goto LABEL_95;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v95 & 1) != 0 )
      {
        v96 |= 0x8000000000000000uLL;
      }
    }
    v98 = v118;
    goto LABEL_152;
  }
  if ( (v50 & 1) != 0 )
  {
    if ( !(unsigned int)MiChargeCommit(v91, 1uLL, 0) )
    {
      MiWriteUselessChildPte(a4);
      *a15 = 1;
      goto LABEL_213;
    }
    v90 = 1;
    v119 = 1;
  }
  if ( (unsigned int)MiGetCrossPartitionCloneCharges(v91) )
  {
    v116 = 1;
    goto LABEL_132;
  }
  MiWriteUselessChildPte(a4);
  *a15 = 1;
  if ( v90 )
  {
    v54 = v91;
LABEL_46:
    MiReturnCommit(v54, 1LL);
  }
LABEL_213:
  if ( Page != -1 )
    MiLockAndInsertPageInFreeList(48 * Page - 0x58000000000LL, 0xFFFFFA8000000000uLL, v46, v47);
  return v48;
}
