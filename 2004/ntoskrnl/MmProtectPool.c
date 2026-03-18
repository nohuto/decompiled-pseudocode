/*
 * XREFs of MmProtectPool @ 0x1402704BC
 * Callers:
 *     ExProtectPoolEx @ 0x14027033C (ExProtectPoolEx.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     MiMakeTransitionPte @ 0x140234290 (MiMakeTransitionPte.c)
 *     MiMakeValidPte @ 0x1402342E0 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiCopyOnWrite @ 0x140238700 (MiCopyOnWrite.c)
 *     MiFlushTbList @ 0x14023A3C0 (MiFlushTbList.c)
 *     MiTbFlushType @ 0x140245D64 (MiTbFlushType.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140247160 (MI_WSLE_LOG_ACCESS.c)
 *     MiGetAnyMultiplexedVm @ 0x140250128 (MiGetAnyMultiplexedVm.c)
 *     MiLockTransitionLeafPage @ 0x140253D18 (MiLockTransitionLeafPage.c)
 *     MiGetWsleContents @ 0x140256CF0 (MiGetWsleContents.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x140262E74 (MI_TIGHTER_PERMISSIONS.c)
 *     MiWriteValidPteNewProtection @ 0x140263340 (MiWriteValidPteNewProtection.c)
 *     MiFindLargeMapping @ 0x140270078 (MiFindLargeMapping.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MmAccessFault @ 0x14029F070 (MmAccessFault.c)
 *     MiLockPageTableInternal @ 0x1402A0AD0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     MiMakeProtectionMask @ 0x1402ACEC0 (MiMakeProtectionMask.c)
 *     MiInsertTbFlushEntry @ 0x1402B0EF0 (MiInsertTbFlushEntry.c)
 *     MiFreeWsleList @ 0x1402B2F00 (MiFreeWsleList.c)
 *     MiCaptureDirtyBitToPfn @ 0x1402B6870 (MiCaptureDirtyBitToPfn.c)
 *     MiGetSessionVm @ 0x1402BE22C (MiGetSessionVm.c)
 *     MiReleasePageFileInfo @ 0x1402D4690 (MiReleasePageFileInfo.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 *     memset @ 0x14040A280 (memset.c)
 *     MiLockNonPagedPoolPte @ 0x14053F59C (MiLockNonPagedPoolPte.c)
 *     MiCopyOnWriteCheckConditions @ 0x140556A58 (MiCopyOnWriteCheckConditions.c)
 */

__int64 __fastcall MmProtectPool(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int ProtectionMask; // eax
  unsigned int v7; // r12d
  unsigned __int64 v8; // r14
  int v9; // ebx
  unsigned __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  char *AnyMultiplexedVm; // r13
  int v15; // r14d
  __int64 v16; // r15
  __int64 v17; // rcx
  _KPROCESS *v18; // rdx
  char v19; // bl
  __int64 v20; // rax
  __int64 v21; // r9
  signed __int64 v22; // rsi
  char v23; // cl
  __int64 v24; // rax
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // rax
  __int64 TransitionPte; // rax
  int v28; // edx
  __int64 v29; // r15
  signed __int64 v30; // rbx
  signed __int64 v31; // rcx
  signed __int64 v32; // rax
  unsigned __int64 v33; // rax
  int v34; // esi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // r8
  unsigned __int64 v41; // rax
  _KPROCESS *v42; // rdx
  __int64 v43; // rcx
  int v44; // eax
  unsigned int v45; // ebx
  __int64 v46; // rdx
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // r14
  __int64 v50; // rsi
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rsi
  int v53; // r15d
  unsigned __int64 v54; // rbx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  bool v58; // zf
  int v59; // r14d
  unsigned __int64 v60; // rsi
  unsigned __int64 v61; // rbx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  bool v65; // zf
  bool v66; // zf
  unsigned int v67; // r12d
  signed __int64 v68; // r15
  int v69; // esi
  unsigned __int64 v70; // rdx
  __int64 v71; // rdx
  __int64 v72; // r14
  unsigned __int64 ValidPte; // rax
  __int64 v74; // rdx
  unsigned __int8 v75; // al
  unsigned __int8 v76; // bl
  struct _KPRCB *v77; // r10
  int v78; // eax
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v80; // si
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v83; // eax
  int v84; // esi
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  bool v88; // zf
  unsigned __int64 v89; // r14
  _KPROCESS *v90; // rdx
  __int64 v91; // r9
  int v92; // ebx
  __int64 v93; // rdx
  __int64 v94; // r8
  __int64 v95; // rbx
  __int64 v96; // rsi
  __int64 v97; // rcx
  char v98; // r14
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // r9
  __int64 v102; // rdx
  char v104; // [rsp+20h] [rbp-E0h]
  char v105; // [rsp+21h] [rbp-DFh]
  unsigned __int64 v106; // [rsp+28h] [rbp-D8h] BYREF
  int v107; // [rsp+30h] [rbp-D0h]
  unsigned int v108; // [rsp+34h] [rbp-CCh]
  int v109; // [rsp+38h] [rbp-C8h] BYREF
  int v110; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned __int64 v111; // [rsp+40h] [rbp-C0h]
  __int64 v112; // [rsp+48h] [rbp-B8h]
  __int64 v113; // [rsp+50h] [rbp-B0h]
  _QWORD v114[24]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v115[24]; // [rsp+120h] [rbp+20h] BYREF

  v105 = 0;
  memset(v114, 0, 0xB8uLL);
  memset(v115, 0, 0xB8uLL);
  if ( (a3 & 0x10) != 0 && (MiFlags & 0x10000) != 0 )
    a3 &= ~0x10u;
  ProtectionMask = MiMakeProtectionMask(a3);
  v108 = ProtectionMask;
  v7 = ProtectionMask;
  if ( ProtectionMask >= 8 && ProtectionMask != 24 || (ProtectionMask & 5) == 5 )
    return 0LL;
  v107 = 0;
  v8 = a1 + a2 - 1;
  v111 = v8;
  v9 = 0;
  v10 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  MiGetSystemRegionType(a1);
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  if ( (_DWORD)v11 == 6 )
    goto LABEL_13;
  if ( (_DWORD)v11 != 5 )
  {
    if ( (_DWORD)v11 != 1 )
      return 0LL;
    v9 = v13;
    AnyMultiplexedVm = (char *)MiGetSessionVm(v12, v11, v13);
LABEL_13:
    v15 = v107;
    goto LABEL_14;
  }
  if ( (unsigned int)MiFindLargeMapping(a1, v8) )
    return 0LL;
  v15 = 1;
  v107 = 1;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(5);
LABEL_14:
  v16 = 0LL;
  v112 = 0LL;
  LODWORD(v114[0]) = v9;
  LODWORD(v114[1]) = 20;
  WORD2(v114[0]) = 0;
  v114[2] = 0LL;
  v114[3] = 0LL;
  v17 = *((unsigned __int16 *)AnyMultiplexedVm + 87);
  v111 = ((v111 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v113 = *(_QWORD *)(qword_140C4E448 + 8 * v17);
  v104 = MiLockWorkingSetShared(AnyMultiplexedVm);
  v19 = v104;
  while ( v10 <= v111 )
  {
    if ( v16 )
    {
      if ( (v10 & 0xFFF) != 0 )
        goto LABEL_19;
      MiFlushTbList((__int64)v114, v18);
      MiUnlockPageTableInternal(AnyMultiplexedVm, v16);
    }
    v16 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v112 = v16;
    MiLockPageTableInternal(AnyMultiplexedVm, v16, 0LL);
LABEL_19:
    v20 = MI_READ_PTE_LOCK_FREE(v10);
    v22 = v20;
    v23 = AnyMultiplexedVm[184] & 7;
    v106 = v20;
    if ( v7 != 24 )
    {
      if ( v23 == 7 )
      {
        v67 = v7 | 0x80000000;
        while ( 1 )
        {
          v68 = v22;
          v69 = v22 & 1;
          if ( v69 )
          {
            v70 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v106);
          }
          else
          {
            v70 = v68;
            if ( qword_140C4DD40 && (v68 & 0x10) == 0 )
              v70 = ~qword_140C4DD40 & v68;
          }
          v71 = (v70 >> 12) & 0xFFFFFFFFFLL;
          v72 = 48 * v71 - 0x58000000000LL;
          ValidPte = MiMakeValidPte(v10, v71, v67, v21);
          v61 = ValidPte;
          if ( !v69 )
            break;
          if ( v107 != 1 )
          {
            v105 = 17;
            MiWriteValidPteNewProtection(v10, ValidPte);
LABEL_100:
            v7 = v108;
            *(_QWORD *)(v72 + 16) ^= (*(_DWORD *)(v72 + 16) ^ (32 * v108)) & 0x3E0;
            if ( v107 == 1 )
            {
              _InterlockedAnd64((volatile signed __int64 *)(v72 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
              {
                v80 = v105;
                if ( (unsigned __int8)v105 <= 0xFu && CurrentIrql >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  SchedulerAssist = CurrentPrcb->SchedulerAssist;
                  v80 = v105;
                  v83 = ~(unsigned __int16)(-1LL << (v105 + 1));
                  v58 = (v83 & SchedulerAssist[5]) == 0;
                  SchedulerAssist[5] &= v83;
                  if ( v58 )
                    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                }
              }
              else
              {
                v80 = v105;
              }
              __writecr8(v80);
            }
            if ( (MiFlags & 0x100) == 0 || MI_TIGHTER_PERMISSIONS(v106, v61) )
            {
              v39 = v10 << 25;
              v40 = 1LL;
              goto LABEL_41;
            }
            goto LABEL_155;
          }
          v72 = MiLockNonPagedPoolPte(v10);
          v22 = MI_READ_PTE_LOCK_FREE(v10);
          if ( v22 == v68 )
          {
            if ( (v68 & 0x200) != 0 )
              v61 |= 0x200uLL;
            v22 = _InterlockedCompareExchange64((volatile signed __int64 *)v10, v61, v68);
            if ( v22 == v68 )
              goto LABEL_100;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v72 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v75 = KeGetCurrentIrql(), v75 <= 0xFu) )
          {
            v76 = v105;
            if ( (unsigned __int8)v105 <= 0xFu && v75 >= 2u )
            {
              v77 = KeGetCurrentPrcb();
              v21 = (__int64)v77->SchedulerAssist;
              v76 = v105;
              v78 = ~(unsigned __int16)(-1LL << (v105 + 1));
              v58 = (v78 & *(_DWORD *)(v21 + 20)) == 0;
              *(_DWORD *)(v21 + 20) &= v78;
              if ( v58 )
                KiRemoveSystemWorkPriorityKick(v77);
            }
          }
          else
          {
            v76 = v105;
          }
          __writecr8(v76);
          v106 = v22;
        }
        if ( (*(_QWORD *)(v72 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
        {
          v109 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v72 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v109, v74);
            while ( *(__int64 *)(v72 + 24) < 0 );
          }
          *(_QWORD *)(v72 + 24) = *(_QWORD *)(v72 + 24) & 0xC000000000000000uLL | 1;
          _InterlockedAnd64((volatile signed __int64 *)(v72 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v61 |= 0x200uLL;
        }
        v7 = v108;
        v84 = 0;
        *(_QWORD *)(v72 + 16) ^= (*(_DWORD *)(v72 + 16) ^ (32 * v108)) & 0x3E0;
        if ( !MiPteInShadowRange(v10) )
          goto LABEL_152;
        if ( (unsigned int)MiPteHasShadow(v85, v18, v86, v87) )
        {
          v84 = 1;
          if ( HIBYTE(word_140C4DE08) )
            goto LABEL_152;
          v88 = (v61 & 1) == 0;
        }
        else
        {
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
            goto LABEL_152;
          v88 = (v61 & 1) == 0;
        }
LABEL_150:
        if ( !v88 )
          v61 |= 0x8000000000000000uLL;
        goto LABEL_152;
      }
      if ( (v20 & 1) != 0 )
      {
        v89 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v106) >> 12) & 0xFFFFFFFFFLL)
            - 0x58000000000LL;
        if ( (unsigned int)MI_PFN_IS_PROTO(v89) )
        {
          MiFlushTbList((__int64)v114, v90);
          v92 = MiCopyOnWrite((__int64)(v10 << 25) >> 16, (ULONG_PTR *)v10, -1LL, 0);
          if ( v92 < 0 )
          {
            MiUnlockPageTableInternal(AnyMultiplexedVm, v16);
            LOBYTE(v93) = v104;
            MiUnlockWorkingSetShared(AnyMultiplexedVm, v93);
            MiCopyOnWriteCheckConditions(AnyMultiplexedVm, (unsigned int)v92);
            MiLockWorkingSetShared(AnyMultiplexedVm);
            MiLockPageTableInternal(AnyMultiplexedVm, v16, 0LL);
          }
          v10 -= 8LL;
          goto LABEL_155;
        }
        v94 = v7;
        LODWORD(v94) = v7 | 0x80000000;
        v18 = (_KPROCESS *)(v22 & 0xF00000000000000LL | v22 & 0x7000000000000000LL | MiMakeValidPte(
                                                                                       v10,
                                                                                       (__int64)v90,
                                                                                       v94,
                                                                                       v91) & 0x80FFFFFFFFFFFFFFuLL);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v10, (signed __int64)v18, v22) == v22 )
        {
          if ( (MiFlags & 0x100) == 0 || MI_TIGHTER_PERMISSIONS(v106, (__int64)v18) )
            MiInsertTbFlushEntry(v114, (__int64)(v10 << 25) >> 16, 1LL, 0LL);
          v95 = 0LL;
          v110 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v89 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v110, v18);
            while ( *(__int64 *)(v89 + 24) < 0 );
          }
          *(_QWORD *)(v89 + 16) ^= (*(_DWORD *)(v89 + 16) ^ (32 * v7)) & 0x3E0;
          if ( (v106 & 0x42) != 0 )
            v95 = MiCaptureDirtyBitToPfn(v89);
          _InterlockedAnd64((volatile signed __int64 *)(v89 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v95 )
            MiReleasePageFileInfo(v113, v95, 1LL);
          goto LABEL_155;
        }
      }
      else if ( (v20 & 0x400) != 0 )
      {
LABEL_52:
        MiFlushTbList((__int64)v114, v18);
        MiUnlockPageTableInternal(AnyMultiplexedVm, v16);
        LOBYTE(v48) = v19;
        MiUnlockWorkingSetShared(AnyMultiplexedVm, v48);
        MmAccessFault(0LL, (__int64)(v10 << 25) >> 16);
        MiLockWorkingSetShared(AnyMultiplexedVm);
        MiLockPageTableInternal(AnyMultiplexedVm, v16, 0LL);
      }
      else
      {
        if ( (v20 & 0x800) == 0 )
        {
          v98 = v20 ^ (v20 ^ (32 * v7)) & 0xE0;
          v84 = 0;
          v106 = v20 ^ ((unsigned __int16)v20 ^ (unsigned __int16)(32 * v7)) & 0x3E0;
          v61 = v106;
          if ( MiPteInShadowRange(v10) )
          {
            if ( (unsigned int)MiPteHasShadow(v99, v18, v100, v101) )
            {
              v84 = 1;
              if ( !HIBYTE(word_140C4DE08) )
              {
                v88 = (v98 & 1) == 0;
                goto LABEL_150;
              }
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
              v88 = (v98 & 1) == 0;
              goto LABEL_150;
            }
          }
LABEL_152:
          v66 = v84 == 0;
LABEL_153:
          *(_QWORD *)v10 = v61;
          if ( !v66 )
            MiWritePteShadow(v10, v61);
          goto LABEL_155;
        }
        v49 = MiLockTransitionLeafPage(v10, 0LL);
        if ( v49 )
        {
          v96 = MI_READ_PTE_LOCK_FREE(v10);
          v97 = 32LL * (v7 & 0x1F);
          v51 = v97 | *(_QWORD *)(v49 + 16) & 0xFFFFFFFFFFFFFC1FuLL;
          v52 = v97 | v96 & 0xFFFFFFFFFFFFFC1FuLL;
LABEL_56:
          *(_QWORD *)(v49 + 16) = v51;
          v106 = v52;
          v53 = 0;
          v54 = v52;
          if ( MiPteInShadowRange(v10) )
          {
            if ( (unsigned int)MiPteHasShadow(v55, v18, v56, v57) )
            {
              v53 = 1;
              if ( !HIBYTE(word_140C4DE08) )
              {
                v58 = (v52 & 1) == 0;
LABEL_62:
                if ( !v58 )
                  v54 = v52 | 0x8000000000000000uLL;
              }
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
              v58 = (v52 & 1) == 0;
              goto LABEL_62;
            }
          }
          *(_QWORD *)v10 = v54;
          if ( v53 )
            MiWritePteShadow(v10, v54);
          _InterlockedAnd64((volatile signed __int64 *)(v49 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_155:
          v19 = v104;
          goto LABEL_156;
        }
      }
LABEL_50:
      v10 -= 8LL;
      goto LABEL_156;
    }
    v24 = v20 & 1;
    if ( v23 == 7 )
    {
      if ( v15 == 1 )
      {
        if ( v24 )
        {
          v25 = MiLockNonPagedPoolPte(v10);
          v22 = MI_READ_PTE_LOCK_FREE(v10);
          v106 = v22;
          goto LABEL_26;
        }
      }
      else if ( v24 )
      {
        v25 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v106) >> 12) & 0xFFFFFFFFFLL)
            - 0x58000000000LL;
        v105 = MiLockPageInline(v25);
LABEL_26:
        *(_QWORD *)(v25 + 16) = *(_QWORD *)(v25 + 16) & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
        v26 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v106);
        TransitionPte = MiMakeTransitionPte((v26 >> 12) & 0xFFFFFFFFFLL, 24);
        v29 = (unsigned int)(v28 - 23);
        v30 = TransitionPte;
        if ( v107 == (_DWORD)v29 )
        {
          while ( 1 )
          {
            v31 = v22;
            v32 = _InterlockedCompareExchange64((volatile signed __int64 *)v10, v30, v22);
            v22 = v32;
            if ( v32 == v31 )
              break;
            v106 = v32;
            v33 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v106);
            v30 = MiMakeTransitionPte((v33 >> 12) & 0xFFFFFFFFFLL, 24);
          }
          v7 = v108;
          if ( (v31 & 0x200) != 0 )
            *(_QWORD *)(v25 + 24) = *(_QWORD *)(v25 + 24) & 0xC000000000000000uLL | 0x10000;
          goto LABEL_40;
        }
        v34 = 0;
        if ( MiPteInShadowRange(v10) )
        {
          if ( (unsigned int)MiPteHasShadow(v36, v35, v37, v38) )
          {
            v34 = v29;
            if ( !HIBYTE(word_140C4DE08) )
              goto LABEL_36;
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
LABEL_36:
            if ( ((unsigned __int8)v30 & (unsigned __int8)v29) != 0 )
              v30 |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v10 = v30;
        if ( v34 )
          MiWritePteShadow(v10, v30);
LABEL_40:
        _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v39 = v10 << 25;
        v40 = v29;
LABEL_41:
        MiInsertTbFlushEntry(v114, v39 >> 16, v40, 0LL);
        goto LABEL_155;
      }
    }
    else
    {
      if ( !v24 )
      {
        if ( (v22 & 0x400) != 0 )
          goto LABEL_52;
        if ( (v22 & 0x800) == 0 )
        {
          v59 = 0;
          v60 = v22 & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
          v106 = v60;
          v61 = v60;
          if ( MiPteInShadowRange(v10) )
          {
            if ( (unsigned int)MiPteHasShadow(v62, v18, v63, v64) )
            {
              v59 = 1;
              if ( !HIBYTE(word_140C4DE08) )
              {
                v65 = (v60 & 1) == 0;
LABEL_73:
                if ( !v65 )
                  v61 = v60 | 0x8000000000000000uLL;
              }
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
              v65 = (v60 & 1) == 0;
              goto LABEL_73;
            }
          }
          v66 = v59 == 0;
          goto LABEL_153;
        }
        v49 = MiLockTransitionLeafPage(v10, 0LL);
        if ( v49 )
        {
          v50 = MI_READ_PTE_LOCK_FREE(v10);
          v51 = *(_QWORD *)(v49 + 16) & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
          v52 = v50 & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
          goto LABEL_56;
        }
        goto LABEL_50;
      }
      v41 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v106);
      if ( (unsigned int)MI_PFN_IS_PROTO(48 * ((v41 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL) )
      {
        MiFlushTbList((__int64)v114, v42);
        v44 = MiCopyOnWrite((__int64)(v10 << 25) >> 16, (ULONG_PTR *)v10, -1LL, 0);
        v10 -= 8LL;
        v45 = v44;
        if ( v44 < 0 )
        {
          MiUnlockPageTableInternal(AnyMultiplexedVm, v16);
          LOBYTE(v46) = v104;
          MiUnlockWorkingSetShared(AnyMultiplexedVm, v46);
          MiCopyOnWriteCheckConditions(AnyMultiplexedVm, v45);
          MiLockWorkingSetShared(AnyMultiplexedVm);
          MiLockPageTableInternal(AnyMultiplexedVm, v16, 0LL);
        }
        goto LABEL_155;
      }
      if ( dword_140C4E628 )
        MI_WSLE_LOG_ACCESS((__int64)AnyMultiplexedVm, v10);
      if ( (MiGetWsleContents(v43, (__int64)(v10 << 25) >> 16) & 0xF) == 8 )
        goto LABEL_155;
      v47 = MiTbFlushType((__int64)AnyMultiplexedVm);
      v115[2] = 0LL;
      v115[3] = 0LL;
      LODWORD(v115[0]) = v47;
      WORD2(v115[0]) = 4;
      v115[1] = 20LL;
      MiInsertTbFlushEntry(v115, (__int64)(v10 << 25) >> 16, 1LL, 0LL);
      v19 = v104;
      if ( !MiFreeWsleList(AnyMultiplexedVm, v115, 0LL) )
        goto LABEL_50;
    }
LABEL_156:
    v16 = v112;
    v10 += 8LL;
    v15 = v107;
  }
  MiFlushTbList((__int64)v114, v18);
  if ( v16 )
    MiUnlockPageTableInternal(AnyMultiplexedVm, v16);
  LOBYTE(v102) = v19;
  MiUnlockWorkingSetShared(AnyMultiplexedVm, v102);
  return 1LL;
}
