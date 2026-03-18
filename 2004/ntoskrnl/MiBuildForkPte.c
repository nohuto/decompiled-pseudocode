/*
 * XREFs of MiBuildForkPte @ 0x140552E1C
 * Callers:
 *     MiCloneVads @ 0x140553E88 (MiCloneVads.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x140213300 (MiUnlockWorkingSetExclusive.c)
 *     MiReturnCommit @ 0x140224390 (MiReturnCommit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x14023A3C0 (MiFlushTbList.c)
 *     MiPrefetchVirtualMemory @ 0x140248300 (MiPrefetchVirtualMemory.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x14024B47C (MiCaptureWriteWatchDirtyBit.c)
 *     MiLockPageTablePage @ 0x14024F390 (MiLockPageTablePage.c)
 *     MiMakeSystemAddressValid @ 0x1402556E0 (MiMakeSystemAddressValid.c)
 *     MiIncreaseUsedPtesCount @ 0x1402562E0 (MiIncreaseUsedPtesCount.c)
 *     MiGetWsleContents @ 0x140256CF0 (MiGetWsleContents.c)
 *     MiInitializePageColorBase @ 0x14025EA70 (MiInitializePageColorBase.c)
 *     MiWriteValidPteNewProtection @ 0x140263340 (MiWriteValidPteNewProtection.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiGetPage @ 0x1402A5AB0 (MiGetPage.c)
 *     MiChargeCommit @ 0x1402ACF70 (MiChargeCommit.c)
 *     MiGetSharedVm @ 0x1402AD3F0 (MiGetSharedVm.c)
 *     MiInsertTbFlushEntry @ 0x1402B0EF0 (MiInsertTbFlushEntry.c)
 *     MiSwizzleInvalidPte @ 0x1402B6040 (MiSwizzleInvalidPte.c)
 *     MiGetWsleProtection @ 0x1402B6070 (MiGetWsleProtection.c)
 *     MiCaptureDirtyBitToPfn @ 0x1402B6870 (MiCaptureDirtyBitToPfn.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1402BC1EC (IS_PTE_NOT_DEMAND_ZERO.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     MiReleasePageFileInfo @ 0x1402D4690 (MiReleasePageFileInfo.c)
 *     MiTransferSoftwarePte @ 0x1402F4DA8 (MiTransferSoftwarePte.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x140315C30 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiIsPrototypePteVadLookup @ 0x140315EC0 (MiIsPrototypePteVadLookup.c)
 *     MiFinalizePageAttribute @ 0x14031CC14 (MiFinalizePageAttribute.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiIsVadLargePrivate @ 0x14033B264 (MiIsVadLargePrivate.c)
 *     MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x140346A48 (MI_IS_SOFTWARE_PTE_SHADOW_STACK.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x140368C78 (MiUpdateWorkingSetPrivateSize.c)
 *     MI_MAKE_PROTECT_WRITE_COPY @ 0x140368D24 (MI_MAKE_PROTECT_WRITE_COPY.c)
 *     MiSetWsleProtection @ 0x140368F90 (MiSetWsleProtection.c)
 *     MiLockAndInsertPageInFreeList @ 0x1403B450C (MiLockAndInsertPageInFreeList.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 *     MiDuplicateCloneLeaf @ 0x140554D94 (MiDuplicateCloneLeaf.c)
 *     MiFindZeroCloneBlock @ 0x1405551C4 (MiFindZeroCloneBlock.c)
 *     MiGetCrossPartitionCloneCharges @ 0x1405554E4 (MiGetCrossPartitionCloneCharges.c)
 *     MiHandleForkTransitionPte @ 0x1405555C4 (MiHandleForkTransitionPte.c)
 *     MiMakePerSessionProtoPte @ 0x140556000 (MiMakePerSessionProtoPte.c)
 *     MiReferenceCloneProto @ 0x1405560F8 (MiReferenceCloneProto.c)
 *     MiReturnCrossPartitionCloneCharges @ 0x140556240 (MiReturnCrossPartitionCloneCharges.c)
 *     MiWriteSharedDemandZeroPte @ 0x140556698 (MiWriteSharedDemandZeroPte.c)
 *     MiWriteUselessChildPte @ 0x140556840 (MiWriteUselessChildPte.c)
 *     MiWaitForFreePage @ 0x140556D5C (MiWaitForFreePage.c)
 *     MiIncrementCombinedPte @ 0x140557BA4 (MiIncrementCombinedPte.c)
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
        unsigned int a12,
        unsigned __int8 a13,
        _QWORD *a14,
        _DWORD *a15)
{
  __int64 v16; // r13
  unsigned __int64 v17; // rbx
  __int64 ZeroCloneBlock; // rax
  int v19; // ebx
  int v20; // edx
  __int64 v22; // rdx
  _DWORD *v23; // r9
  __int64 v24; // r10
  __int64 v25; // rdi
  int v26; // ecx
  __int64 v27; // r8
  unsigned __int64 v28; // rsi
  KIRQL v29; // al
  _QWORD *v30; // r11
  __int64 v31; // rax
  __int64 v32; // r13
  __int64 v33; // rcx
  unsigned __int8 WsleContents; // di
  unsigned __int64 v35; // r9
  __int64 v36; // r10
  __int64 v37; // r8
  unsigned __int64 v38; // rax
  __int64 v39; // rsi
  __int64 v40; // rdi
  signed __int32 v41; // r9d
  __int64 v42; // rax
  _KPROCESS *v43; // rdx
  LONG *SharedVm; // rbx
  int v45; // eax
  __int64 v46; // r8
  BOOL v47; // edi
  _KPROCESS *v48; // rdx
  char v49; // r8
  __int64 v50; // r10
  __int64 v51; // rdi
  LONG *v52; // rdi
  __int64 v53; // rcx
  __int64 v54; // rbx
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // rax
  unsigned __int64 *v58; // rdi
  __int64 v59; // rbx
  __int64 v60; // rax
  __int64 v61; // rbx
  unsigned __int64 v62; // rbx
  int v63; // edi
  _KPROCESS *Process; // rcx
  __int64 v65; // r8
  unsigned __int64 v66; // rdx
  __int64 v67; // rdi
  bool v68; // zf
  unsigned __int64 v69; // rcx
  unsigned __int64 v70; // rbx
  int v71; // esi
  __int64 v72; // r8
  int WsleProtection; // eax
  __int64 v74; // r10
  __int64 v75; // rdx
  __int64 v76; // rbx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // r10
  __int64 v80; // rax
  __int64 v81; // rdi
  __int64 v82; // rcx
  __int64 PerSessionProtoPte; // rax
  int v84; // esi
  __int64 v85; // rbx
  int v86; // ebx
  int v87; // r9d
  __int64 v88; // rax
  int v89; // ebx
  __int64 v90; // r13
  __int64 v91; // rbx
  __int64 v92; // r8
  __int64 v93; // rax
  char v94; // di
  __int64 v95; // rbx
  __int64 v96; // r8
  int v97; // eax
  unsigned int v98; // edx
  __int64 v99; // rcx
  __int64 v100; // rbx
  int v101; // edi
  int v102; // esi
  __int64 v103; // rdx
  __int64 v104; // rax
  int v105; // edx
  __int64 v106; // r11
  int v107; // r8d
  __int64 v108; // r10
  int v109; // r11d
  __int64 v110; // rdi
  __int64 v111; // rcx
  __int64 v112; // rax
  int v113; // [rsp+50h] [rbp-A1h]
  unsigned __int64 v114; // [rsp+68h] [rbp-89h] BYREF
  unsigned int v115; // [rsp+70h] [rbp-81h]
  unsigned int i; // [rsp+74h] [rbp-7Dh]
  int v117; // [rsp+78h] [rbp-79h]
  int v118; // [rsp+7Ch] [rbp-75h]
  __int64 v119; // [rsp+80h] [rbp-71h]
  _DWORD *v120; // [rsp+88h] [rbp-69h]
  __int64 v121; // [rsp+90h] [rbp-61h]
  __int64 v122; // [rsp+98h] [rbp-59h] BYREF
  __int64 Page; // [rsp+A0h] [rbp-51h] BYREF
  __int64 v124; // [rsp+A8h] [rbp-49h]
  __int64 v125; // [rsp+B0h] [rbp-41h]
  int v126; // [rsp+B8h] [rbp-39h] BYREF
  int v127; // [rsp+BCh] [rbp-35h] BYREF
  int v128; // [rsp+C0h] [rbp-31h] BYREF
  __int64 v129; // [rsp+C8h] [rbp-29h] BYREF
  __int128 v130; // [rsp+D0h] [rbp-21h] BYREF
  _QWORD v131[9]; // [rsp+E0h] [rbp-11h] BYREF

  v129 = 0LL;
  v122 = 0LL;
  v130 = 0LL;
  v16 = a2;
  v114 = MI_READ_PTE_LOCK_FREE(a3);
  v17 = v114;
  if ( !v114 )
  {
    if ( a5 && *(int *)(a11 + 52) < 0 )
    {
      ZeroCloneBlock = MiFindZeroCloneBlock(a5, (*(_DWORD *)(a10 + 48) >> 7) & 0x1F);
      v19 = ZeroCloneBlock;
      if ( ZeroCloneBlock )
      {
        MiIncreaseUsedPtesCount(a8, 1LL);
        MiWriteSharedDemandZeroPte(v16, v20, v19, (_DWORD)a4, (__int64)a14);
      }
    }
    return 0LL;
  }
  MiIncreaseUsedPtesCount(a8, 1LL);
  v24 = a1;
  v25 = v16 + 1664;
  v115 = 0;
  v26 = 0;
  v27 = a12;
  Page = -1LL;
  v28 = (unsigned __int64)a6;
  v125 = a1 + 1664;
  v29 = a13;
  v121 = v16 + 1664;
  for ( i = a12; ; v27 = i )
  {
    v30 = a14;
    if ( v26 == 1 )
    {
      MiMakeSystemAddressValid(a3, 0LL, 0, v29, 1);
      v31 = MI_READ_PTE_LOCK_FREE(a3);
      v30 = a14;
      v17 = v31;
      v24 = a1;
      v27 = i;
      v114 = v31;
    }
    if ( (v17 & 1) != 0 )
    {
      v32 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v114) >> 12) & 0xFFFFFFFFFLL)
          - 0x58000000000LL;
      if ( v115
        || *(_WORD *)(v32 + 32) > 1u && !MI_PFN_IS_PROTO(v32)
        || (unsigned int)MI_IS_SOFTWARE_PTE_SHADOW_STACK((_QWORD *)(v32 + 16)) )
      {
        MiInitializePageColorBase(v125, 0, (__int64)&v130);
        v41 = _InterlockedExchangeAdd((volatile signed __int32 *)v130, 1u);
        v42 = *(_QWORD *)(qword_140C4E448 + 8LL * *(unsigned __int16 *)(v25 + 174));
        v119 = v42;
        if ( Page != -1 || (Page = MiGetPage(v42, HIDWORD(v130) | (unsigned int)v41 & DWORD2(v130), 0LL), Page != -1) )
        {
          v86 = Page;
          MiFinalizePageAttribute(48 * Page - 0x58000000000LL, *(unsigned __int8 *)(v32 + 34) >> 6, 0);
          LOBYTE(v87) = a13;
          MiDuplicateCloneLeaf(a3, (_DWORD)a4, v86, v87, 17);
          ++*a7;
          return 0LL;
        }
        MiFlushTbList(a9, v43);
        MiUnlockWorkingSetExclusive(v125, a13);
        MiWaitForFreePage(v119);
        SharedVm = MiGetSharedVm(v125);
        v29 = ExAcquireSpinLockExclusive(SharedVm);
        SharedVm[1] = 0;
        v17 = v114;
        a13 = v29;
LABEL_32:
        v16 = a2;
        goto LABEL_33;
      }
      v124 = (__int64)(a3 << 25) >> 16;
      WsleContents = MiGetWsleContents(v33, v124);
      if ( !MI_PFN_IS_PROTO(v32) )
      {
        v129 = MI_READ_PTE_LOCK_FREE(v36 + ((v28 >> 9) & 0x7FFFFFFFF8LL));
        v37 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v129) >> 12) & 0xFFFFFFFFFLL)
            - 0x58000000000LL;
        v38 = *(_QWORD *)(v32 + 40);
        v115 = 0;
        v117 = 0;
        v39 = ZeroPte;
        v119 = v37;
        v23 = *(_DWORD **)(qword_140C4E448 + 8 * ((v38 >> 39) & 0x3FF));
        v120 = v23;
        if ( *(_DWORD **)(qword_140C4E448 + 8LL * *(unsigned __int16 *)(v121 + 174)) != v23 )
        {
          if ( (i & 1) != 0 )
          {
            if ( !(unsigned int)MiChargeCommit((__int64)v23, 1uLL, 0) )
              goto LABEL_104;
            v23 = v120;
            v117 = 1;
          }
          if ( !(unsigned int)MiGetCrossPartitionCloneCharges(v23) )
          {
            MiWriteUselessChildPte(a4);
            v47 = 0;
            *a15 = 1;
            if ( !v117 )
              goto LABEL_213;
            v53 = (__int64)v120;
            goto LABEL_46;
          }
          v37 = v119;
          v115 = 1;
        }
        if ( (WsleContents & 0xF) != 8 || (unsigned int)MiLockPageTablePage(v37, 3uLL) )
        {
          v126 = 0;
          v54 = v119;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v54 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v126, v22, v37, (__int64)v23);
            while ( *(__int64 *)(v54 + 24) < 0 );
          }
          v55 = 0x3FFFFFFFFFFFFFFFLL;
          *(_QWORD *)(v54 + 24) ^= (*(_QWORD *)(v54 + 24) ^ (*(_QWORD *)(v54 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
          _InterlockedAnd64((volatile signed __int64 *)(v54 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (v114 & 0x42) != 0 )
          {
            v56 = a10;
            if ( (*(_DWORD *)(a10 + 48) & 0x300000) == 0x300000 && !MI_PFN_IS_PROTO(v32) )
              MiCaptureWriteWatchDirtyBit(a1, v124, v56);
            v127 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v127, v55, v56, (__int64)v23);
              while ( *(__int64 *)(v32 + 24) < 0 );
            }
            v57 = MiCaptureDirtyBitToPfn(v32);
            v114 &= 0xFFFFFFFFFFFFFFBDuLL;
            v39 = v57;
          }
          else
          {
            v128 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v128, v55, v37, (__int64)v23);
              while ( *(__int64 *)(v32 + 24) < 0 );
            }
          }
          v58 = (unsigned __int64 *)(v32 + 16);
          v59 = *(_QWORD *)(v32 + 16);
          if ( (v59 & 2) != 0 )
          {
            v60 = *(_QWORD *)(v32 + 16);
            if ( qword_140C4DD40 && (v59 & 0x10) == 0 )
              v60 = ~qword_140C4DD40 & v59;
            v39 = MiTransferSoftwarePte(
                    *(_QWORD *)(v32 + 16),
                    *(_QWORD *)&v120[2 * ((unsigned __int16)v59 >> 12) + 1736],
                    HIDWORD(v60));
            *v58 = v59 & 0xFFFFFFFFFFFFFFFDuLL;
          }
          *(_QWORD *)(v32 + 8) = a6;
          *(_QWORD *)(v32 + 40) |= 0x8000000000000000uLL;
          v61 = *(_QWORD *)(v32 + 40);
          *(_QWORD *)(v32 + 40) = v61 ^ (v61 ^ ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v129) >> 12)) & 0xFFFFFFFFFLL;
          MI_MAKE_PROTECT_WRITE_COPY((__int64 *)(v32 + 16));
          v119 = *v58 >> 5;
          _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v39 )
            MiReleasePageFileInfo((__int64)v120, v39, 1);
          v62 = v114;
          if ( (v114 & 0x800) != 0 )
          {
            v62 = v114 & 0xFFFFFFFFFFFFF5FFuLL | 0x200;
            v114 = v62;
          }
          MiWriteValidPteNewProtection(a3, v62);
          MiInsertTbFlushEntry(a9, v124, 1LL, 0);
          v63 = 0;
          *a6 = 0LL;
          if ( MiPteInShadowRange((unsigned __int64)a6) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v63 = 1;
              if ( !HIBYTE(word_140C4DE08) )
                goto LABEL_75;
            }
            else
            {
              Process = KeGetCurrentThread()->ApcState.Process;
              if ( (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
              {
LABEL_75:
                if ( (v62 & 1) != 0 )
                  v62 |= 0x8000000000000000uLL;
              }
            }
          }
          *a6 = v62;
          if ( v63 )
            MiWritePteShadow((__int64)a6, v62, v65);
          v66 = v124;
          a6[1] = v115;
          a6[3] = 2LL;
          MiSetWsleProtection((__int64)Process, v66);
          v67 = MiSwizzleInvalidPte((*(_QWORD *)(v32 + 8) << 16) | 0x400LL);
          v114 = v67;
          if ( (i & 1) != 0 )
          {
            v67 |= 8uLL;
            v68 = v117 == 0;
            a6[2] = 1LL;
            v114 = v67;
            if ( v68 )
              ++a14[1];
            else
              ++*a14;
            _InterlockedExchangeAdd64((volatile signed __int64 *)v120 + 953, 1uLL);
            v69 = a6[2];
          }
          else
          {
            v69 = 0LL;
          }
          v70 = v67;
          a6[2] = v69 & 0x7FFFFFFFFFFFFFFLL | ((unsigned __int64)(unsigned int)v119 << 59);
          v71 = 0;
          if ( MiPteInShadowRange((unsigned __int64)a4) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v71 = 1;
              if ( !HIBYTE(word_140C4DE08) )
                goto LABEL_90;
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
LABEL_90:
              if ( (v67 & 1) != 0 )
                v70 = v67 | 0x8000000000000000uLL;
            }
          }
          *a4 = v70;
          if ( v71 )
            MiWritePteShadow((__int64)a4, v70, v72);
          _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
          MiUpdateWorkingSetPrivateSize(v125, v124, -1LL, 0);
LABEL_95:
          v47 = 1;
          goto LABEL_213;
        }
        v40 = (__int64)v120;
        if ( v115 == 1 )
          MiReturnCrossPartitionCloneCharges(v120);
        if ( v117 )
          MiReturnCommit(v40, 1LL);
        v28 = (unsigned __int64)a6;
        v25 = v121;
        v29 = a13;
        v115 = 1;
        goto LABEL_32;
      }
      WsleProtection = MiGetWsleProtection(v35, WsleContents);
      if ( WsleProtection )
      {
        v76 = MiSwizzleInvalidPte(32 * (WsleProtection & 0x1F | 0xFFFFFFFFF8000020uLL));
        v114 = v76;
      }
      else
      {
        v80 = MiSwizzleInvalidPte((v74 << 16) | 0x400);
        v114 = v80;
        v76 = v80;
        if ( (v75 & v78) != 0 )
          goto LABEL_106;
        if ( v77 > 0 )
        {
          v76 = v80 | 0x800;
          v114 = v80 | 0x800;
        }
      }
      if ( (v75 & v78) == 0 && v77 > 0 )
      {
        if ( !(unsigned int)MiIncrementCombinedPte(v121, v79) )
        {
LABEL_104:
          MiWriteUselessChildPte(a4);
          *a15 = 1;
LABEL_212:
          v47 = 0;
          goto LABEL_213;
        }
        v81 = v76;
LABEL_114:
        v84 = 0;
        v85 = v81;
        if ( !MiPteInShadowRange((unsigned __int64)a4) )
          goto LABEL_210;
        if ( (unsigned int)MiPteHasShadow() )
        {
          v84 = 1;
          if ( HIBYTE(word_140C4DE08) )
            goto LABEL_210;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        {
          goto LABEL_210;
        }
        if ( (v81 & 1) != 0 )
LABEL_209:
          v85 |= 0x8000000000000000uLL;
LABEL_210:
        *a4 = v85;
        if ( v84 )
          MiWritePteShadow((__int64)a4, v85, v46);
        goto LABEL_212;
      }
LABEL_106:
      if ( !(unsigned int)MiReferenceCloneProto(v121, v79, i, (_DWORD)a14, (__int64)&v122) )
        goto LABEL_104;
      v81 = v76;
      if ( v122 )
      {
        v81 = v76 | 8;
        v114 = v76 | 8;
      }
      else if ( !MiIsPrototypePteVadLookup(*(_QWORD *)(v32 + 16))
             && (*(_BYTE *)(a10 + 48) & 0x70) == 0x20
             && !MiIsVadLargePrivate(a10) )
      {
        PerSessionProtoPte = MiMakePerSessionProtoPte(a1, a2, a3, v82);
        if ( PerSessionProtoPte )
        {
          v114 = PerSessionProtoPte;
          v81 = PerSessionProtoPte;
        }
      }
      goto LABEL_114;
    }
    if ( (v17 & 0x400) != 0 )
    {
      if ( MI_PROTO_FORMAT_COMBINED(v17, v22, v27, (__int64)v23) )
      {
        if ( !(unsigned int)MiIncrementCombinedPte(v25, v108) )
          goto LABEL_104;
        v110 = v17;
      }
      else
      {
        if ( !(unsigned int)MiReferenceCloneProto(v25, v108, v107, v109, (__int64)&v122) )
          goto LABEL_104;
        v110 = v17;
        if ( v122 )
        {
          if ( *(_QWORD *)(v122 + 16) >> 59 != 24 )
          {
            v110 = v17 | 8;
            v114 = v17 | 8;
          }
        }
        else if ( !MiIsPrototypePteVadLookup(v17) && (*(_BYTE *)(a10 + 48) & 0x70) == 0x20 && !MiIsVadLargePrivate(a10) )
        {
          v112 = MiMakePerSessionProtoPte(a1, v16, a3, v111);
          if ( v112 )
          {
            v114 = v112;
            v110 = v112;
          }
        }
      }
      v84 = 0;
      v85 = v110;
      if ( MiPteInShadowRange((unsigned __int64)a4) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v84 = 1;
          if ( HIBYTE(word_140C4DE08) )
            goto LABEL_210;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        {
          goto LABEL_210;
        }
        if ( (v110 & 1) != 0 )
          goto LABEL_209;
      }
      goto LABEL_210;
    }
    if ( (v17 & 0x800) == 0 )
      break;
    LOBYTE(v113) = a13;
    v45 = MiHandleForkTransitionPte(v24, v16, a3, a4, v28, a7, a9, &Page, v27, v113, v30, a15);
    if ( v45 )
    {
      v47 = v45 != 1;
      goto LABEL_213;
    }
    v29 = a13;
LABEL_33:
    v24 = a1;
    v26 = 1;
  }
  v47 = 0;
  v119 = (v17 >> 5) & 0x1F;
  if ( !IS_PTE_NOT_DEMAND_ZERO(v17) )
  {
    if ( (v17 & 2) != 0 )
    {
      v17 &= ~2uLL;
      v114 = v17;
    }
    if ( !(unsigned int)MI_IS_SOFTWARE_PTE_SHADOW_STACK(&v114) )
    {
      if ( a5 )
      {
        v104 = MiFindZeroCloneBlock(a5, v103);
        v122 = v104;
        if ( v104 )
        {
          MiWriteSharedDemandZeroPte(v16, v105, v104, (_DWORD)a4, v106);
          goto LABEL_213;
        }
      }
    }
LABEL_176:
    v102 = 0;
    if ( MiPteInShadowRange((unsigned __int64)a4) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v102 = 1;
        if ( !HIBYTE(word_140C4DE08) )
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
    if ( v102 )
      MiWritePteShadow((__int64)a4, v17, v46);
    goto LABEL_213;
  }
  if ( (_DWORD)v48 == 16 )
  {
    if ( (v17 & 2) != 0 )
    {
      v17 &= ~2uLL;
      v114 = v17;
    }
    goto LABEL_176;
  }
  if ( ((unsigned int)v48 & 0xFFFFFFF8) == 0x10 || (unsigned int)MI_IS_SOFTWARE_PTE_SHADOW_STACK(&v114) )
  {
    MiFlushTbList(a9, v48);
    v51 = v125;
    MiUnlockWorkingSetExclusive(v125, a13);
    v131[1] = 4096LL;
    v131[0] = (__int64)(a3 << 25) >> 16;
    MiPrefetchVirtualMemory(1uLL, (unsigned __int64)v131, v51, 45);
    v52 = MiGetSharedVm(v51);
    v29 = ExAcquireSpinLockExclusive(v52);
    v52[1] = 0;
    v25 = v121;
    a13 = v29;
    goto LABEL_33;
  }
  v88 = *(unsigned __int16 *)(v50 + 1838);
  v89 = 0;
  v115 = 0;
  v118 = 0;
  v90 = *(_QWORD *)(qword_140C4E448 + 8 * v88);
  if ( *(_QWORD *)(qword_140C4E448 + 8LL * *(unsigned __int16 *)(v121 + 174)) == v90 )
  {
LABEL_132:
    MI_MAKE_PROTECT_WRITE_COPY((__int64 *)&v114);
    v91 = v114;
    if ( (v114 & 2) != 0 )
    {
      MiReleasePageFileInfo(v90, v114 & 0xFFFFFFFFFFFFFFFBuLL, 1);
      v91 &= ~2uLL;
      v114 = v91;
    }
    *(_QWORD *)v28 = 0LL;
    if ( MiPteInShadowRange(v28) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v47 = 1;
        if ( HIBYTE(word_140C4DE08) )
          goto LABEL_141;
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
      {
        goto LABEL_141;
      }
      if ( (v91 & 1) != 0 )
        v91 |= 0x8000000000000000uLL;
    }
LABEL_141:
    *(_QWORD *)v28 = v91;
    if ( v47 )
      MiWritePteShadow(v28, v91, v92);
    *(_QWORD *)(v28 + 8) = v115;
    *(_QWORD *)(v28 + 24) = 2LL;
    v93 = MiSwizzleInvalidPte((v28 << 16) | 0x400);
    v94 = v93;
    v117 = 0;
    v95 = v93;
    v114 = v93;
    if ( MiPteInShadowRange(a3) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v97 = 1;
        if ( !HIBYTE(word_140C4DE08) && (v94 & 1) != 0 )
          v95 |= 0x8000000000000000uLL;
LABEL_152:
        *(_QWORD *)a3 = v95;
        if ( v97 )
          MiWritePteShadow(a3, v95, v96);
        if ( (i & 1) != 0 )
        {
          v98 = v119;
          if ( (_DWORD)v119 != 24 )
            v114 |= 8uLL;
          v68 = v118 == 0;
          *(_QWORD *)(v28 + 16) = 1LL;
          if ( v68 )
            ++a14[1];
          else
            ++*a14;
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v90 + 7624), 1uLL);
          v99 = *(_QWORD *)(v28 + 16);
        }
        else
        {
          if ( v115 == 1 )
            *(_QWORD *)(v28 + 8) = 1LL;
          *(_QWORD *)(v28 + 16) = 0LL;
          v98 = v119;
          v99 = 0LL;
        }
        v100 = v114;
        v101 = 0;
        *(_QWORD *)(v28 + 16) = v99 & 0x7FFFFFFFFFFFFFFLL | ((unsigned __int64)v98 << 59);
        if ( !MiPteInShadowRange((unsigned __int64)a4) )
          goto LABEL_171;
        if ( (unsigned int)MiPteHasShadow() )
        {
          v101 = 1;
          if ( !HIBYTE(word_140C4DE08) )
          {
LABEL_169:
            if ( (v100 & 1) != 0 )
              v100 |= 0x8000000000000000uLL;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          goto LABEL_169;
        }
LABEL_171:
        *a4 = v100;
        if ( v101 )
          MiWritePteShadow((__int64)a4, v100, v46);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
        goto LABEL_95;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v94 & 1) != 0 )
      {
        v95 |= 0x8000000000000000uLL;
      }
    }
    v97 = v117;
    goto LABEL_152;
  }
  if ( (v49 & 1) != 0 )
  {
    if ( !(unsigned int)MiChargeCommit(v90, 1uLL, 0) )
    {
      MiWriteUselessChildPte(a4);
      *a15 = 1;
      goto LABEL_213;
    }
    v89 = 1;
    v118 = 1;
  }
  if ( (unsigned int)MiGetCrossPartitionCloneCharges(v90) )
  {
    v115 = 1;
    goto LABEL_132;
  }
  MiWriteUselessChildPte(a4);
  *a15 = 1;
  if ( v89 )
  {
    v53 = v90;
LABEL_46:
    MiReturnCommit(v53, 1LL);
  }
LABEL_213:
  if ( Page != -1 )
    MiLockAndInsertPageInFreeList(48 * Page - 0x58000000000LL, 0xFFFFFA8000000000uLL, v46, v23);
  return v47;
}
