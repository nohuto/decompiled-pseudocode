/*
 * XREFs of MmProtectPool @ 0x1402DFB44
 * Callers:
 *     ExProtectPoolEx @ 0x1402DF9C4 (ExProtectPoolEx.c)
 * Callees:
 *     MmAccessFault @ 0x14020C560 (MmAccessFault.c)
 *     MiLockPageTableInternal @ 0x14020DFC0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiMakeProtectionMask @ 0x14021A3B0 (MiMakeProtectionMask.c)
 *     MiInsertTbFlushEntry @ 0x14021E270 (MiInsertTbFlushEntry.c)
 *     MiFreeWsleList @ 0x140220280 (MiFreeWsleList.c)
 *     MiCaptureDirtyBitToPfn @ 0x140223BF0 (MiCaptureDirtyBitToPfn.c)
 *     MiGetSessionVm @ 0x14022B5AC (MiGetSessionVm.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     MiMakeTransitionPte @ 0x14028D2E0 (MiMakeTransitionPte.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiCopyOnWrite @ 0x140291750 (MiCopyOnWrite.c)
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     MiTbFlushType @ 0x14029ED94 (MiTbFlushType.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1402A0190 (MI_WSLE_LOG_ACCESS.c)
 *     MiGetAnyMultiplexedVm @ 0x1402A9158 (MiGetAnyMultiplexedVm.c)
 *     MiLockTransitionLeafPage @ 0x1402ACD48 (MiLockTransitionLeafPage.c)
 *     MiGetWsleContents @ 0x1402AFD20 (MiGetWsleContents.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x1402BBEA4 (MI_TIGHTER_PERMISSIONS.c)
 *     MiWriteValidPteNewProtection @ 0x1402BC370 (MiWriteValidPteNewProtection.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     MiFindLargeMapping @ 0x1402DF700 (MiFindLargeMapping.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiReleasePageFileInfo @ 0x14034EFC0 (MiReleasePageFileInfo.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiLockNonPagedPoolPte @ 0x14053EF4C (MiLockNonPagedPoolPte.c)
 *     MiCopyOnWriteCheckConditions @ 0x140556408 (MiCopyOnWriteCheckConditions.c)
 */

__int64 __fastcall MmProtectPool(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int ProtectionMask; // eax
  unsigned int v7; // r12d
  unsigned __int64 v8; // r14
  int v9; // ebx
  unsigned __int64 v10; // rdi
  int v11; // edx
  int v12; // r8d
  __int64 AnyMultiplexedVm; // r13
  int v14; // r14d
  unsigned __int64 v15; // r15
  __int64 v16; // rcx
  _KPROCESS *v17; // rdx
  unsigned __int8 v18; // bl
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // r9
  signed __int64 v22; // rsi
  char v23; // cl
  __int64 v24; // rax
  unsigned __int64 v25; // r14
  __int64 v26; // rdx
  __int64 v27; // r8
  unsigned __int64 v28; // rax
  __int64 TransitionPte; // rax
  int v30; // edx
  __int64 v31; // r15
  signed __int64 v32; // rbx
  signed __int64 v33; // rcx
  signed __int64 v34; // rax
  unsigned __int64 v35; // rax
  int v36; // esi
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // r8
  unsigned __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // r8
  _KPROCESS *v44; // rdx
  __int64 v45; // rcx
  int v46; // eax
  __int64 v47; // r8
  unsigned int v48; // ebx
  int v49; // eax
  __int64 v50; // r8
  __int64 v51; // r14
  __int64 v52; // rsi
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rsi
  int v55; // r15d
  unsigned __int64 v56; // rbx
  __int64 v57; // rcx
  bool v58; // zf
  int v59; // r14d
  unsigned __int64 v60; // rsi
  unsigned __int64 v61; // rbx
  __int64 v62; // rcx
  bool v63; // zf
  bool v64; // zf
  unsigned int v65; // r12d
  signed __int64 v66; // r15
  int v67; // esi
  unsigned __int64 v68; // rdx
  __int64 v69; // rdx
  __int64 v70; // r14
  unsigned __int64 ValidPte; // rax
  __int64 v72; // rdx
  __int64 v73; // r8
  __int64 v74; // r9
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
  bool v86; // zf
  unsigned __int64 v87; // rdx
  __int64 v88; // r14
  __int64 v89; // r8
  _KPROCESS *v90; // rdx
  __int64 v91; // r9
  int v92; // ebx
  __int64 v93; // r8
  __int64 v94; // r8
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // rbx
  __int64 v98; // rsi
  __int64 v99; // rcx
  char v100; // r14
  __int64 v101; // rcx
  __int64 v102; // r8
  unsigned __int8 v104; // [rsp+20h] [rbp-E0h]
  char v105; // [rsp+21h] [rbp-DFh]
  unsigned __int64 v106; // [rsp+28h] [rbp-D8h] BYREF
  int v107; // [rsp+30h] [rbp-D0h]
  unsigned int v108; // [rsp+34h] [rbp-CCh]
  int v109; // [rsp+38h] [rbp-C8h] BYREF
  int v110; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned __int64 v111; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v112; // [rsp+48h] [rbp-B8h]
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
  AnyMultiplexedVm = (__int64)MiGetAnyMultiplexedVm(2);
  if ( v11 == 6 )
    goto LABEL_13;
  if ( v11 != 5 )
  {
    if ( v11 != 1 )
      return 0LL;
    v9 = v12;
    AnyMultiplexedVm = MiGetSessionVm();
LABEL_13:
    v14 = v107;
    goto LABEL_14;
  }
  if ( (unsigned int)MiFindLargeMapping(a1, v8) )
    return 0LL;
  v14 = 1;
  v107 = 1;
  AnyMultiplexedVm = (__int64)MiGetAnyMultiplexedVm(5);
LABEL_14:
  v15 = 0LL;
  v112 = 0LL;
  LODWORD(v114[0]) = v9;
  LODWORD(v114[1]) = 20;
  WORD2(v114[0]) = 0;
  v114[2] = 0LL;
  v114[3] = 0LL;
  v16 = *(unsigned __int16 *)(AnyMultiplexedVm + 174);
  v111 = ((v111 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v113 = *(_QWORD *)(qword_140C4E588 + 8 * v16);
  v104 = MiLockWorkingSetShared(AnyMultiplexedVm);
  v18 = v104;
  while ( v10 <= v111 )
  {
    if ( v15 )
    {
      if ( (v10 & 0xFFF) != 0 )
        goto LABEL_19;
      MiFlushTbList((__int64)v114, v17);
      MiUnlockPageTableInternal(AnyMultiplexedVm, v15, v19);
    }
    v15 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v112 = v15;
    MiLockPageTableInternal(AnyMultiplexedVm, v15, 0LL);
LABEL_19:
    v20 = MI_READ_PTE_LOCK_FREE(v10);
    v22 = v20;
    v23 = *(_BYTE *)(AnyMultiplexedVm + 184) & 7;
    v106 = v20;
    if ( v7 != 24 )
    {
      if ( v23 == 7 )
      {
        v65 = v7 | 0x80000000;
        while ( 1 )
        {
          v66 = v22;
          v67 = v22 & 1;
          if ( v67 )
          {
            v68 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v106);
          }
          else
          {
            v68 = v66;
            if ( qword_140C4DE80 && (v66 & 0x10) == 0 )
              v68 = ~qword_140C4DE80 & v66;
          }
          v69 = (v68 >> 12) & 0xFFFFFFFFFLL;
          v70 = 48 * v69 - 0x58000000000LL;
          ValidPte = MiMakeValidPte(v10, v69, v65, v21);
          v61 = ValidPte;
          if ( !v67 )
            break;
          if ( v107 != 1 )
          {
            v105 = 17;
            MiWriteValidPteNewProtection(v10, ValidPte);
LABEL_100:
            v7 = v108;
            *(_QWORD *)(v70 + 16) ^= (*(_DWORD *)(v70 + 16) ^ (32 * v108)) & 0x3E0;
            if ( v107 == 1 )
            {
              _InterlockedAnd64((volatile signed __int64 *)(v70 + 24), 0x7FFFFFFFFFFFFFFFuLL);
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
          v70 = MiLockNonPagedPoolPte(v10);
          v22 = MI_READ_PTE_LOCK_FREE(v10);
          if ( v22 == v66 )
          {
            if ( (v66 & 0x200) != 0 )
              v61 |= 0x200uLL;
            v22 = _InterlockedCompareExchange64((volatile signed __int64 *)v10, v61, v66);
            if ( v22 == v66 )
              goto LABEL_100;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v70 + 24), 0x7FFFFFFFFFFFFFFFuLL);
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
        if ( (*(_QWORD *)(v70 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
        {
          v109 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v70 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v109, v72, v73, v74);
            while ( *(__int64 *)(v70 + 24) < 0 );
          }
          *(_QWORD *)(v70 + 24) = *(_QWORD *)(v70 + 24) & 0xC000000000000000uLL | 1;
          _InterlockedAnd64((volatile signed __int64 *)(v70 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v61 |= 0x200uLL;
        }
        v7 = v108;
        v84 = 0;
        *(_QWORD *)(v70 + 16) ^= (*(_DWORD *)(v70 + 16) ^ (32 * v108)) & 0x3E0;
        if ( !MiPteInShadowRange(v10) )
          goto LABEL_152;
        if ( (unsigned int)MiPteHasShadow(v85, v17) )
        {
          v84 = 1;
          if ( HIBYTE(word_140C4DF48) )
            goto LABEL_152;
          v86 = (v61 & 1) == 0;
        }
        else
        {
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
            goto LABEL_152;
          v86 = (v61 & 1) == 0;
        }
LABEL_150:
        if ( !v86 )
          v61 |= 0x8000000000000000uLL;
        goto LABEL_152;
      }
      if ( (v20 & 1) != 0 )
      {
        v87 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v106) >> 12) & 0xFFFFFFFFFLL;
        v88 = 48 * v87 - 0x58000000000LL;
        if ( (unsigned int)MI_PFN_IS_PROTO(v88, v87, v89) )
        {
          MiFlushTbList((__int64)v114, v90);
          v92 = MiCopyOnWrite((__int64)(v10 << 25) >> 16, (ULONG_PTR *)v10, 0xFFFFFFFFFFFFFFFFuLL, 0);
          if ( v92 < 0 )
          {
            MiUnlockPageTableInternal(AnyMultiplexedVm, v15, v93);
            MiUnlockWorkingSetShared(AnyMultiplexedVm, v104);
            MiCopyOnWriteCheckConditions(AnyMultiplexedVm, (unsigned int)v92);
            MiLockWorkingSetShared(AnyMultiplexedVm);
            MiLockPageTableInternal(AnyMultiplexedVm, v15, 0LL);
          }
          v10 -= 8LL;
          goto LABEL_155;
        }
        v94 = v7;
        LODWORD(v94) = v7 | 0x80000000;
        v17 = (_KPROCESS *)(v22 & 0xF00000000000000LL | v22 & 0x7000000000000000LL | MiMakeValidPte(
                                                                                       v10,
                                                                                       (__int64)v90,
                                                                                       v94,
                                                                                       v91) & 0x80FFFFFFFFFFFFFFuLL);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v10, (signed __int64)v17, v22) == v22 )
        {
          if ( (MiFlags & 0x100) == 0 || MI_TIGHTER_PERMISSIONS(v106, (__int64)v17) )
            MiInsertTbFlushEntry((__int64)v114, (__int64)(v10 << 25) >> 16, 1LL, 0);
          v97 = 0LL;
          v110 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v88 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v110, (__int64)v17, v95, v96);
            while ( *(__int64 *)(v88 + 24) < 0 );
          }
          *(_QWORD *)(v88 + 16) ^= (*(_DWORD *)(v88 + 16) ^ (32 * v7)) & 0x3E0;
          if ( (v106 & 0x42) != 0 )
            v97 = MiCaptureDirtyBitToPfn(v88);
          _InterlockedAnd64((volatile signed __int64 *)(v88 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v97 )
            MiReleasePageFileInfo(v113, v97, 1LL);
          goto LABEL_155;
        }
      }
      else if ( (v20 & 0x400) != 0 )
      {
LABEL_52:
        MiFlushTbList((__int64)v114, v17);
        MiUnlockPageTableInternal(AnyMultiplexedVm, v15, v50);
        MiUnlockWorkingSetShared(AnyMultiplexedVm, v18);
        MmAccessFault(0LL, (__int64)(v10 << 25) >> 16, 0, 0LL);
        MiLockWorkingSetShared(AnyMultiplexedVm);
        MiLockPageTableInternal(AnyMultiplexedVm, v15, 0LL);
      }
      else
      {
        if ( (v20 & 0x800) == 0 )
        {
          v100 = v20 ^ (v20 ^ (32 * v7)) & 0xE0;
          v84 = 0;
          v106 = v20 ^ ((unsigned __int16)v20 ^ (unsigned __int16)(32 * v7)) & 0x3E0;
          v61 = v106;
          if ( MiPteInShadowRange(v10) )
          {
            if ( (unsigned int)MiPteHasShadow(v101, v17) )
            {
              v84 = 1;
              if ( !HIBYTE(word_140C4DF48) )
              {
                v86 = (v100 & 1) == 0;
                goto LABEL_150;
              }
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
              v86 = (v100 & 1) == 0;
              goto LABEL_150;
            }
          }
LABEL_152:
          v64 = v84 == 0;
LABEL_153:
          *(_QWORD *)v10 = v61;
          if ( !v64 )
            MiWritePteShadow(v10, v61);
          goto LABEL_155;
        }
        v51 = MiLockTransitionLeafPage(v10, 0LL);
        if ( v51 )
        {
          v98 = MI_READ_PTE_LOCK_FREE(v10);
          v99 = 32LL * (v7 & 0x1F);
          v53 = v99 | *(_QWORD *)(v51 + 16) & 0xFFFFFFFFFFFFFC1FuLL;
          v54 = v99 | v98 & 0xFFFFFFFFFFFFFC1FuLL;
LABEL_56:
          *(_QWORD *)(v51 + 16) = v53;
          v106 = v54;
          v55 = 0;
          v56 = v54;
          if ( MiPteInShadowRange(v10) )
          {
            if ( (unsigned int)MiPteHasShadow(v57, v17) )
            {
              v55 = 1;
              if ( !HIBYTE(word_140C4DF48) )
              {
                v58 = (v54 & 1) == 0;
LABEL_62:
                if ( !v58 )
                  v56 = v54 | 0x8000000000000000uLL;
              }
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
              v58 = (v54 & 1) == 0;
              goto LABEL_62;
            }
          }
          *(_QWORD *)v10 = v56;
          if ( v55 )
            MiWritePteShadow(v10, v56);
          _InterlockedAnd64((volatile signed __int64 *)(v51 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_155:
          v18 = v104;
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
      if ( v14 == 1 )
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
        v105 = MiLockPageInline(v25, v26, v27);
LABEL_26:
        *(_QWORD *)(v25 + 16) = *(_QWORD *)(v25 + 16) & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
        v28 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v106);
        TransitionPte = MiMakeTransitionPte((v28 >> 12) & 0xFFFFFFFFFLL, 24);
        v31 = (unsigned int)(v30 - 23);
        v32 = TransitionPte;
        if ( v107 == (_DWORD)v31 )
        {
          while ( 1 )
          {
            v33 = v22;
            v34 = _InterlockedCompareExchange64((volatile signed __int64 *)v10, v32, v22);
            v22 = v34;
            if ( v34 == v33 )
              break;
            v106 = v34;
            v35 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v106);
            v32 = MiMakeTransitionPte((v35 >> 12) & 0xFFFFFFFFFLL, 24);
          }
          v7 = v108;
          if ( (v33 & 0x200) != 0 )
            *(_QWORD *)(v25 + 24) = *(_QWORD *)(v25 + 24) & 0xC000000000000000uLL | 0x10000;
          goto LABEL_40;
        }
        v36 = 0;
        if ( MiPteInShadowRange(v10) )
        {
          if ( (unsigned int)MiPteHasShadow(v38, v37) )
          {
            v36 = v31;
            if ( !HIBYTE(word_140C4DF48) )
              goto LABEL_36;
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
LABEL_36:
            if ( ((unsigned __int8)v32 & (unsigned __int8)v31) != 0 )
              v32 |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v10 = v32;
        if ( v36 )
          MiWritePteShadow(v10, v32);
LABEL_40:
        _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v39 = v10 << 25;
        v40 = v31;
LABEL_41:
        MiInsertTbFlushEntry((__int64)v114, v39 >> 16, v40, 0);
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
            if ( (unsigned int)MiPteHasShadow(v62, v17) )
            {
              v59 = 1;
              if ( !HIBYTE(word_140C4DF48) )
              {
                v63 = (v60 & 1) == 0;
LABEL_73:
                if ( !v63 )
                  v61 = v60 | 0x8000000000000000uLL;
              }
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
              v63 = (v60 & 1) == 0;
              goto LABEL_73;
            }
          }
          v64 = v59 == 0;
          goto LABEL_153;
        }
        v51 = MiLockTransitionLeafPage(v10, 0LL);
        if ( v51 )
        {
          v52 = MI_READ_PTE_LOCK_FREE(v10);
          v53 = *(_QWORD *)(v51 + 16) & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
          v54 = v52 & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
          goto LABEL_56;
        }
        goto LABEL_50;
      }
      v41 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v106);
      if ( (unsigned int)MI_PFN_IS_PROTO(48 * ((v41 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL, v42, v43) )
      {
        MiFlushTbList((__int64)v114, v44);
        v46 = MiCopyOnWrite((__int64)(v10 << 25) >> 16, (ULONG_PTR *)v10, 0xFFFFFFFFFFFFFFFFuLL, 0);
        v10 -= 8LL;
        v48 = v46;
        if ( v46 < 0 )
        {
          MiUnlockPageTableInternal(AnyMultiplexedVm, v15, v47);
          MiUnlockWorkingSetShared(AnyMultiplexedVm, v104);
          MiCopyOnWriteCheckConditions(AnyMultiplexedVm, v48);
          MiLockWorkingSetShared(AnyMultiplexedVm);
          MiLockPageTableInternal(AnyMultiplexedVm, v15, 0LL);
        }
        goto LABEL_155;
      }
      if ( dword_140C4E768 )
        MI_WSLE_LOG_ACCESS(AnyMultiplexedVm, v10);
      if ( (MiGetWsleContents(v45, (__int64)(v10 << 25) >> 16) & 0xF) == 8 )
        goto LABEL_155;
      v49 = MiTbFlushType(AnyMultiplexedVm);
      v115[2] = 0LL;
      v115[3] = 0LL;
      LODWORD(v115[0]) = v49;
      WORD2(v115[0]) = 4;
      v115[1] = 20LL;
      MiInsertTbFlushEntry((__int64)v115, (__int64)(v10 << 25) >> 16, 1LL, 0);
      v18 = v104;
      if ( !MiFreeWsleList(AnyMultiplexedVm, (__int64)v115, 0) )
        goto LABEL_50;
    }
LABEL_156:
    v15 = v112;
    v10 += 8LL;
    v14 = v107;
  }
  MiFlushTbList((__int64)v114, v17);
  if ( v15 )
    MiUnlockPageTableInternal(AnyMultiplexedVm, v15, v102);
  MiUnlockWorkingSetShared(AnyMultiplexedVm, v18);
  return 1LL;
}
