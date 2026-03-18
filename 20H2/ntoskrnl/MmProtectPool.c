/*
 * XREFs of MmProtectPool @ 0x1402385B4
 * Callers:
 *     ExProtectPoolEx @ 0x140238434 (ExProtectPoolEx.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     MiLockTransitionLeafPage @ 0x14023681C (MiLockTransitionLeafPage.c)
 *     MiGetAnyMultiplexedVm @ 0x14024EF1C (MiGetAnyMultiplexedVm.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x1402528DC (MI_TIGHTER_PERMISSIONS.c)
 *     MmAccessFault @ 0x14026E3B0 (MmAccessFault.c)
 *     MiLockPageTableInternal @ 0x14026FE10 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MiMakeProtectionMask @ 0x14027C200 (MiMakeProtectionMask.c)
 *     MiCopyOnWrite @ 0x14028F8B0 (MiCopyOnWrite.c)
 *     MiGetSessionVm @ 0x14029977C (MiGetSessionVm.c)
 *     MiWriteValidPteNewProtection @ 0x14029F0A0 (MiWriteValidPteNewProtection.c)
 *     MiCaptureDirtyBitToPfn @ 0x14029F1B0 (MiCaptureDirtyBitToPfn.c)
 *     MiFreeWsleList @ 0x1402AAA70 (MiFreeWsleList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x1402B1B40 (MiMakeValidPte.c)
 *     MiMakeTransitionPte @ 0x1402B1DC0 (MiMakeTransitionPte.c)
 *     MiInsertTbFlushEntry @ 0x1402B8FC0 (MiInsertTbFlushEntry.c)
 *     MiTbFlushType @ 0x1402BA458 (MiTbFlushType.c)
 *     MiFlushTbList @ 0x1402BFA90 (MiFlushTbList.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1402CFBA0 (MI_WSLE_LOG_ACCESS.c)
 *     MiGetWsleContents @ 0x1402D3CE0 (MiGetWsleContents.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiFindLargeMapping @ 0x140326C2C (MiFindLargeMapping.c)
 *     MiReleasePageFileInfo @ 0x140344F70 (MiReleasePageFileInfo.c)
 *     MiLockPageInline @ 0x14034E290 (MiLockPageInline.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
 *     memset @ 0x140411300 (memset.c)
 *     MiLockNonPagedPoolPte @ 0x140542F6C (MiLockNonPagedPoolPte.c)
 *     MiCopyOnWriteCheckConditions @ 0x14055A428 (MiCopyOnWriteCheckConditions.c)
 */

__int64 __fastcall MmProtectPool(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int ProtectionMask; // eax
  unsigned int v7; // r12d
  unsigned __int64 v8; // r14
  int v9; // ebx
  ULONG_PTR v10; // rdi
  int v11; // edx
  int v12; // r8d
  __int64 AnyMultiplexedVm; // r13
  int v14; // r14d
  __int64 v15; // r15
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  char v18; // bl
  __int64 v19; // rax
  signed __int64 v20; // rsi
  char v21; // cl
  __int64 v22; // rax
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // rax
  __int64 TransitionPte; // rax
  int v26; // edx
  __int64 v27; // r15
  signed __int64 v28; // rbx
  signed __int64 v29; // rcx
  signed __int64 v30; // rax
  unsigned __int64 v31; // rax
  int v32; // esi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // r8
  unsigned __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  int v42; // eax
  unsigned int v43; // ebx
  __int64 v44; // rdx
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // r14
  __int64 v48; // rsi
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rsi
  int v51; // r15d
  unsigned __int64 v52; // rbx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  bool v56; // zf
  int v57; // r14d
  unsigned __int64 v58; // rsi
  unsigned __int64 v59; // rbx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  bool v63; // zf
  bool v64; // zf
  unsigned int v65; // r12d
  signed __int64 v66; // r15
  int v67; // esi
  unsigned __int64 v68; // rdx
  __int64 v69; // rdx
  __int64 v70; // r14
  __int64 ValidPte; // rax
  unsigned __int8 v72; // al
  unsigned __int8 v73; // bl
  struct _KPRCB *v74; // r10
  _DWORD *v75; // r9
  int v76; // eax
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v78; // si
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v81; // eax
  int v82; // esi
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  bool v86; // zf
  unsigned __int64 v87; // r14
  __int64 v88; // rdx
  int v89; // ebx
  __int64 v90; // rdx
  __int64 v91; // r8
  __int64 v92; // rbx
  __int64 v93; // rsi
  __int64 v94; // rcx
  char v95; // r14
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // rdx
  char v101; // [rsp+20h] [rbp-E0h]
  char v102; // [rsp+21h] [rbp-DFh]
  unsigned __int64 v103; // [rsp+28h] [rbp-D8h] BYREF
  int v104; // [rsp+30h] [rbp-D0h]
  unsigned int v105; // [rsp+34h] [rbp-CCh]
  int v106; // [rsp+38h] [rbp-C8h] BYREF
  int v107; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned __int64 v108; // [rsp+40h] [rbp-C0h]
  __int64 v109; // [rsp+48h] [rbp-B8h]
  __int64 v110; // [rsp+50h] [rbp-B0h]
  _QWORD v111[24]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v112[24]; // [rsp+120h] [rbp+20h] BYREF

  v102 = 0;
  memset(v111, 0, 0xB8uLL);
  memset(v112, 0, 0xB8uLL);
  if ( (a3 & 0x10) != 0 && (MiFlags & 0x10000) != 0 )
    a3 &= ~0x10u;
  ProtectionMask = MiMakeProtectionMask(a3);
  v105 = ProtectionMask;
  v7 = ProtectionMask;
  if ( ProtectionMask >= 8 && ProtectionMask != 24 || (ProtectionMask & 5) == 5 )
    return 0LL;
  v104 = 0;
  v8 = a1 + a2 - 1;
  v108 = v8;
  v9 = 0;
  v10 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  MiGetSystemRegionType(a1);
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2LL);
  if ( v11 == 6 )
    goto LABEL_13;
  if ( v11 != 5 )
  {
    if ( v11 != 1 )
      return 0LL;
    v9 = v12;
    AnyMultiplexedVm = MiGetSessionVm();
LABEL_13:
    v14 = v104;
    goto LABEL_14;
  }
  if ( (unsigned int)MiFindLargeMapping(a1, v8) )
    return 0LL;
  v14 = 1;
  v104 = 1;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(5LL);
LABEL_14:
  v15 = 0LL;
  v109 = 0LL;
  LODWORD(v111[0]) = v9;
  LODWORD(v111[1]) = 20;
  WORD2(v111[0]) = 0;
  v111[2] = 0LL;
  v111[3] = 0LL;
  v16 = *(unsigned __int16 *)(AnyMultiplexedVm + 174);
  v108 = ((v108 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v110 = *(_QWORD *)(qword_140C4E4C8 + 8 * v16);
  v101 = MiLockWorkingSetShared(AnyMultiplexedVm);
  v18 = v101;
  while ( v10 <= v108 )
  {
    if ( v15 )
    {
      if ( (v10 & 0xFFF) != 0 )
        goto LABEL_19;
      MiFlushTbList(v111, v17);
      MiUnlockPageTableInternal(AnyMultiplexedVm);
    }
    v15 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v109 = v15;
    MiLockPageTableInternal(AnyMultiplexedVm, v15, 0LL);
LABEL_19:
    v19 = MI_READ_PTE_LOCK_FREE(v10);
    v20 = v19;
    v21 = *(_BYTE *)(AnyMultiplexedVm + 184) & 7;
    v103 = v19;
    if ( v7 != 24 )
    {
      if ( v21 == 7 )
      {
        v65 = v7 | 0x80000000;
        while ( 1 )
        {
          v66 = v20;
          v67 = v20 & 1;
          if ( v67 )
          {
            v68 = MI_READ_PTE_LOCK_FREE(&v103);
          }
          else
          {
            v68 = v66;
            if ( qword_140C4DDC0 && (v66 & 0x10) == 0 )
              v68 = ~qword_140C4DDC0 & v66;
          }
          v69 = (v68 >> 12) & 0xFFFFFFFFFLL;
          v70 = 48 * v69 - 0x58000000000LL;
          ValidPte = MiMakeValidPte(v10, v69, v65);
          v59 = ValidPte;
          if ( !v67 )
            break;
          if ( v104 != 1 )
          {
            v102 = 17;
            MiWriteValidPteNewProtection(v10, ValidPte);
LABEL_100:
            v7 = v105;
            *(_QWORD *)(v70 + 16) ^= (*(_DWORD *)(v70 + 16) ^ (32 * v105)) & 0x3E0;
            if ( v104 == 1 )
            {
              _InterlockedAnd64((volatile signed __int64 *)(v70 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
              {
                v78 = v102;
                if ( (unsigned __int8)v102 <= 0xFu && CurrentIrql >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  SchedulerAssist = CurrentPrcb->SchedulerAssist;
                  v78 = v102;
                  v81 = ~(unsigned __int16)(-1LL << (v102 + 1));
                  v56 = (v81 & SchedulerAssist[5]) == 0;
                  SchedulerAssist[5] &= v81;
                  if ( v56 )
                    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                }
              }
              else
              {
                v78 = v102;
              }
              __writecr8(v78);
            }
            if ( (MiFlags & 0x100) == 0 || (unsigned int)MI_TIGHTER_PERMISSIONS(v103) )
            {
              v37 = v10 << 25;
              v38 = 1LL;
              goto LABEL_41;
            }
            goto LABEL_155;
          }
          v70 = MiLockNonPagedPoolPte(v10);
          v20 = MI_READ_PTE_LOCK_FREE(v10);
          if ( v20 == v66 )
          {
            if ( (v66 & 0x200) != 0 )
              v59 |= 0x200uLL;
            v20 = _InterlockedCompareExchange64((volatile signed __int64 *)v10, v59, v66);
            if ( v20 == v66 )
              goto LABEL_100;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v70 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v72 = KeGetCurrentIrql(), v72 <= 0xFu) )
          {
            v73 = v102;
            if ( (unsigned __int8)v102 <= 0xFu && v72 >= 2u )
            {
              v74 = KeGetCurrentPrcb();
              v75 = v74->SchedulerAssist;
              v73 = v102;
              v76 = ~(unsigned __int16)(-1LL << (v102 + 1));
              v56 = (v76 & v75[5]) == 0;
              v75[5] &= v76;
              if ( v56 )
                KiRemoveSystemWorkPriorityKick(v74);
            }
          }
          else
          {
            v73 = v102;
          }
          __writecr8(v73);
          v103 = v20;
        }
        if ( (*(_QWORD *)(v70 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
        {
          v106 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v70 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v106);
            while ( *(__int64 *)(v70 + 24) < 0 );
          }
          *(_QWORD *)(v70 + 24) = *(_QWORD *)(v70 + 24) & 0xC000000000000000uLL | 1;
          _InterlockedAnd64((volatile signed __int64 *)(v70 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v59 |= 0x200uLL;
        }
        v7 = v105;
        v82 = 0;
        *(_QWORD *)(v70 + 16) ^= (*(_DWORD *)(v70 + 16) ^ (32 * v105)) & 0x3E0;
        if ( !MiPteInShadowRange(v10) )
          goto LABEL_152;
        if ( (unsigned int)MiPteHasShadow(v83, v17, v84, v85) )
        {
          v82 = 1;
          if ( HIBYTE(word_140C4DE88) )
            goto LABEL_152;
          v86 = (v59 & 1) == 0;
        }
        else
        {
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
            goto LABEL_152;
          v86 = (v59 & 1) == 0;
        }
LABEL_150:
        if ( !v86 )
          v59 |= 0x8000000000000000uLL;
        goto LABEL_152;
      }
      if ( (v19 & 1) != 0 )
      {
        v87 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v103) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        if ( (unsigned int)MI_PFN_IS_PROTO(v87) )
        {
          MiFlushTbList(v111, v88);
          v89 = MiCopyOnWrite((__int64)(v10 << 25) >> 16, v10, -1LL, 0LL);
          if ( v89 < 0 )
          {
            MiUnlockPageTableInternal(AnyMultiplexedVm);
            LOBYTE(v90) = v101;
            MiUnlockWorkingSetShared(AnyMultiplexedVm, v90);
            MiCopyOnWriteCheckConditions(AnyMultiplexedVm, (unsigned int)v89);
            MiLockWorkingSetShared(AnyMultiplexedVm);
            MiLockPageTableInternal(AnyMultiplexedVm, v15, 0LL);
          }
          v10 -= 8LL;
          goto LABEL_155;
        }
        v91 = v7;
        LODWORD(v91) = v7 | 0x80000000;
        v17 = v20 & 0xF00000000000000LL | v20 & 0x7000000000000000LL | MiMakeValidPte(v10, v88, v91) & 0x80FFFFFFFFFFFFFFuLL;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v10, v17, v20) == v20 )
        {
          if ( (MiFlags & 0x100) == 0 || (unsigned int)MI_TIGHTER_PERMISSIONS(v103) )
            MiInsertTbFlushEntry(v111, (__int64)(v10 << 25) >> 16, 1LL, 0LL);
          v92 = 0LL;
          v107 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v87 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v107);
            while ( *(__int64 *)(v87 + 24) < 0 );
          }
          *(_QWORD *)(v87 + 16) ^= (*(_DWORD *)(v87 + 16) ^ (32 * v7)) & 0x3E0;
          if ( (v103 & 0x42) != 0 )
            v92 = MiCaptureDirtyBitToPfn(v87);
          _InterlockedAnd64((volatile signed __int64 *)(v87 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v92 )
            MiReleasePageFileInfo(v110, v92, 1LL);
          goto LABEL_155;
        }
      }
      else if ( (v19 & 0x400) != 0 )
      {
LABEL_52:
        MiFlushTbList(v111, v17);
        MiUnlockPageTableInternal(AnyMultiplexedVm);
        LOBYTE(v46) = v18;
        MiUnlockWorkingSetShared(AnyMultiplexedVm, v46);
        MmAccessFault(0LL, (__int64)(v10 << 25) >> 16);
        MiLockWorkingSetShared(AnyMultiplexedVm);
        MiLockPageTableInternal(AnyMultiplexedVm, v15, 0LL);
      }
      else
      {
        if ( (v19 & 0x800) == 0 )
        {
          v95 = v19 ^ (v19 ^ (32 * v7)) & 0xE0;
          v82 = 0;
          v103 = v19 ^ ((unsigned __int16)v19 ^ (unsigned __int16)(32 * v7)) & 0x3E0;
          v59 = v103;
          if ( MiPteInShadowRange(v10) )
          {
            if ( (unsigned int)MiPteHasShadow(v96, v17, v97, v98) )
            {
              v82 = 1;
              if ( !HIBYTE(word_140C4DE88) )
              {
                v86 = (v95 & 1) == 0;
                goto LABEL_150;
              }
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
              v86 = (v95 & 1) == 0;
              goto LABEL_150;
            }
          }
LABEL_152:
          v64 = v82 == 0;
LABEL_153:
          *(_QWORD *)v10 = v59;
          if ( !v64 )
            MiWritePteShadow(v10, v59);
          goto LABEL_155;
        }
        v47 = MiLockTransitionLeafPage(v10, 0LL);
        if ( v47 )
        {
          v93 = MI_READ_PTE_LOCK_FREE(v10);
          v94 = 32LL * (v7 & 0x1F);
          v49 = v94 | *(_QWORD *)(v47 + 16) & 0xFFFFFFFFFFFFFC1FuLL;
          v50 = v94 | v93 & 0xFFFFFFFFFFFFFC1FuLL;
LABEL_56:
          *(_QWORD *)(v47 + 16) = v49;
          v103 = v50;
          v51 = 0;
          v52 = v50;
          if ( MiPteInShadowRange(v10) )
          {
            if ( (unsigned int)MiPteHasShadow(v53, v17, v54, v55) )
            {
              v51 = 1;
              if ( !HIBYTE(word_140C4DE88) )
              {
                v56 = (v50 & 1) == 0;
LABEL_62:
                if ( !v56 )
                  v52 = v50 | 0x8000000000000000uLL;
              }
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
              v56 = (v50 & 1) == 0;
              goto LABEL_62;
            }
          }
          *(_QWORD *)v10 = v52;
          if ( v51 )
            MiWritePteShadow(v10, v52);
          _InterlockedAnd64((volatile signed __int64 *)(v47 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_155:
          v18 = v101;
          goto LABEL_156;
        }
      }
LABEL_50:
      v10 -= 8LL;
      goto LABEL_156;
    }
    v22 = v19 & 1;
    if ( v21 == 7 )
    {
      if ( v14 == 1 )
      {
        if ( v22 )
        {
          v23 = MiLockNonPagedPoolPte(v10);
          v20 = MI_READ_PTE_LOCK_FREE(v10);
          v103 = v20;
          goto LABEL_26;
        }
      }
      else if ( v22 )
      {
        v23 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v103) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        v102 = MiLockPageInline(v23);
LABEL_26:
        *(_QWORD *)(v23 + 16) = *(_QWORD *)(v23 + 16) & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
        v24 = MI_READ_PTE_LOCK_FREE(&v103);
        TransitionPte = MiMakeTransitionPte((v24 >> 12) & 0xFFFFFFFFFLL, 24LL);
        v27 = (unsigned int)(v26 - 23);
        v28 = TransitionPte;
        if ( v104 == (_DWORD)v27 )
        {
          while ( 1 )
          {
            v29 = v20;
            v30 = _InterlockedCompareExchange64((volatile signed __int64 *)v10, v28, v20);
            v20 = v30;
            if ( v30 == v29 )
              break;
            v103 = v30;
            v31 = MI_READ_PTE_LOCK_FREE(&v103);
            v28 = MiMakeTransitionPte((v31 >> 12) & 0xFFFFFFFFFLL, 24LL);
          }
          v7 = v105;
          if ( (v29 & 0x200) != 0 )
            *(_QWORD *)(v23 + 24) = *(_QWORD *)(v23 + 24) & 0xC000000000000000uLL | 0x10000;
          goto LABEL_40;
        }
        v32 = 0;
        if ( MiPteInShadowRange(v10) )
        {
          if ( (unsigned int)MiPteHasShadow(v34, v33, v35, v36) )
          {
            v32 = v27;
            if ( !HIBYTE(word_140C4DE88) )
              goto LABEL_36;
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
LABEL_36:
            if ( ((unsigned __int8)v28 & (unsigned __int8)v27) != 0 )
              v28 |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v10 = v28;
        if ( v32 )
          MiWritePteShadow(v10, v28);
LABEL_40:
        _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v37 = v10 << 25;
        v38 = v27;
LABEL_41:
        MiInsertTbFlushEntry(v111, v37 >> 16, v38, 0LL);
        goto LABEL_155;
      }
    }
    else
    {
      if ( !v22 )
      {
        if ( (v20 & 0x400) != 0 )
          goto LABEL_52;
        if ( (v20 & 0x800) == 0 )
        {
          v57 = 0;
          v58 = v20 & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
          v103 = v58;
          v59 = v58;
          if ( MiPteInShadowRange(v10) )
          {
            if ( (unsigned int)MiPteHasShadow(v60, v17, v61, v62) )
            {
              v57 = 1;
              if ( !HIBYTE(word_140C4DE88) )
              {
                v63 = (v58 & 1) == 0;
LABEL_73:
                if ( !v63 )
                  v59 = v58 | 0x8000000000000000uLL;
              }
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
              v63 = (v58 & 1) == 0;
              goto LABEL_73;
            }
          }
          v64 = v57 == 0;
          goto LABEL_153;
        }
        v47 = MiLockTransitionLeafPage(v10, 0LL);
        if ( v47 )
        {
          v48 = MI_READ_PTE_LOCK_FREE(v10);
          v49 = *(_QWORD *)(v47 + 16) & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
          v50 = v48 & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
          goto LABEL_56;
        }
        goto LABEL_50;
      }
      v39 = MI_READ_PTE_LOCK_FREE(&v103);
      if ( (unsigned int)MI_PFN_IS_PROTO(48 * ((v39 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL) )
      {
        MiFlushTbList(v111, v40);
        v42 = MiCopyOnWrite((__int64)(v10 << 25) >> 16, v10, -1LL, 0LL);
        v10 -= 8LL;
        v43 = v42;
        if ( v42 < 0 )
        {
          MiUnlockPageTableInternal(AnyMultiplexedVm);
          LOBYTE(v44) = v101;
          MiUnlockWorkingSetShared(AnyMultiplexedVm, v44);
          MiCopyOnWriteCheckConditions(AnyMultiplexedVm, v43);
          MiLockWorkingSetShared(AnyMultiplexedVm);
          MiLockPageTableInternal(AnyMultiplexedVm, v15, 0LL);
        }
        goto LABEL_155;
      }
      if ( dword_140C4E6A8 )
        MI_WSLE_LOG_ACCESS(AnyMultiplexedVm, v10);
      if ( (MiGetWsleContents(v41, (__int64)(v10 << 25) >> 16) & 0xF) == 8 )
        goto LABEL_155;
      v45 = MiTbFlushType(AnyMultiplexedVm);
      v112[2] = 0LL;
      v112[3] = 0LL;
      LODWORD(v112[0]) = v45;
      WORD2(v112[0]) = 4;
      v112[1] = 20LL;
      MiInsertTbFlushEntry(v112, (__int64)(v10 << 25) >> 16, 1LL, 0LL);
      v18 = v101;
      if ( !MiFreeWsleList(AnyMultiplexedVm, v112, 0LL) )
        goto LABEL_50;
    }
LABEL_156:
    v15 = v109;
    v10 += 8LL;
    v14 = v104;
  }
  MiFlushTbList(v111, v17);
  if ( v15 )
    MiUnlockPageTableInternal(AnyMultiplexedVm);
  LOBYTE(v99) = v18;
  MiUnlockWorkingSetShared(AnyMultiplexedVm, v99);
  return 1LL;
}
