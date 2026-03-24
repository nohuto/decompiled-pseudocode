/*
 * XREFs of MmProtectPool @ 0x140362D68
 * Callers:
 *     ExProtectPoolEx @ 0x140362BE8 (ExProtectPoolEx.c)
 * Callees:
 *     MmAccessFault @ 0x14020D090 (MmAccessFault.c)
 *     MiLockPageTableInternal @ 0x14020EAF0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219CB0 (MiLockWorkingSetShared.c)
 *     MiMakeProtectionMask @ 0x14021AA20 (MiMakeProtectionMask.c)
 *     MiCopyOnWrite @ 0x14023F300 (MiCopyOnWrite.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiReleasePageFileInfo @ 0x140267CB0 (MiReleasePageFileInfo.c)
 *     MiGetWsleContents @ 0x140270D40 (MiGetWsleContents.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x1402E6EC4 (MI_TIGHTER_PERMISSIONS.c)
 *     MiGetAnyMultiplexedVm @ 0x1402FD0FC (MiGetAnyMultiplexedVm.c)
 *     MiLockPageInline @ 0x1402FFE30 (MiLockPageInline.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140309080 (MI_WSLE_LOG_ACCESS.c)
 *     MiWriteValidPteNewProtection @ 0x14030FA00 (MiWriteValidPteNewProtection.c)
 *     MiCaptureDirtyBitToPfn @ 0x14030FB10 (MiCaptureDirtyBitToPfn.c)
 *     MiGetSessionVm @ 0x14031219C (MiGetSessionVm.c)
 *     MiFreeWsleList @ 0x140327320 (MiFreeWsleList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x14032E730 (MiMakeValidPte.c)
 *     MiMakeTransitionPte @ 0x14032E9B0 (MiMakeTransitionPte.c)
 *     MiInsertTbFlushEntry @ 0x140335D70 (MiInsertTbFlushEntry.c)
 *     MiTbFlushType @ 0x140337208 (MiTbFlushType.c)
 *     MiFlushTbList @ 0x14033B520 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     MiFindLargeMapping @ 0x140363CA0 (MiFindLargeMapping.c)
 *     MiLockTransitionLeafPage @ 0x140364704 (MiLockTransitionLeafPage.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     memset @ 0x140414200 (memset.c)
 *     MiLockNonPagedPoolPte @ 0x140544A70 (MiLockNonPagedPoolPte.c)
 *     MiCopyOnWriteCheckConditions @ 0x14055BEF8 (MiCopyOnWriteCheckConditions.c)
 */

__int64 __fastcall MmProtectPool(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int ProtectionMask; // eax
  unsigned int v7; // r12d
  unsigned __int64 v8; // r14
  int v9; // ebx
  unsigned __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  _DWORD *v13; // r9
  __int64 AnyMultiplexedVm; // r13
  int v15; // r14d
  unsigned __int64 v16; // r15
  __int64 v17; // rcx
  _KPROCESS *v18; // rdx
  unsigned __int8 v19; // bl
  __int64 v20; // rax
  signed __int64 v21; // rsi
  char v22; // cl
  __int64 v23; // rax
  __int64 v24; // r14
  __int64 v25; // rdx
  __int64 v26; // r8
  _DWORD *v27; // r9
  unsigned __int64 v28; // rax
  __int64 TransitionPte; // rax
  int v30; // edx
  __int64 v31; // r15
  signed __int64 v32; // rbx
  signed __int64 v33; // rcx
  signed __int64 v34; // rax
  unsigned __int64 v35; // rax
  int v36; // esi
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // r8
  unsigned __int64 v40; // rax
  _KPROCESS *v41; // rdx
  __int64 v42; // rcx
  int v43; // eax
  unsigned int v44; // ebx
  __int64 v45; // rdx
  __int64 v46; // r8
  _DWORD *v47; // r9
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // r8
  _DWORD *v51; // r9
  __int64 v52; // r14
  __int64 v53; // rsi
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rsi
  int v56; // r15d
  unsigned __int64 v57; // rbx
  __int64 v58; // r8
  bool v59; // zf
  int v60; // r14d
  unsigned __int64 v61; // rsi
  unsigned __int64 v62; // rbx
  __int64 v63; // r8
  bool v64; // zf
  bool v65; // zf
  unsigned int v66; // r12d
  signed __int64 v67; // r15
  int v68; // esi
  unsigned __int64 v69; // rdx
  __int64 v70; // rdx
  __int64 v71; // r14
  unsigned __int64 ValidPte; // rax
  __int64 v73; // rdx
  __int64 v74; // r8
  __int64 v75; // r9
  unsigned __int8 v76; // al
  unsigned __int8 v77; // bl
  struct _KPRCB *v78; // r10
  _DWORD *v79; // r9
  int v80; // eax
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v82; // si
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v85; // eax
  int v86; // esi
  bool v87; // zf
  __int64 v88; // r14
  _KPROCESS *v89; // rdx
  int v90; // ebx
  __int64 v91; // rdx
  __int64 v92; // r8
  _DWORD *v93; // r9
  __int64 v94; // r8
  __int64 v95; // r9
  unsigned __int64 v96; // rbx
  __int64 v97; // rsi
  __int64 v98; // rcx
  char v99; // r14
  unsigned __int8 v101; // [rsp+20h] [rbp-E0h]
  char v102; // [rsp+21h] [rbp-DFh]
  unsigned __int64 v103; // [rsp+28h] [rbp-D8h] BYREF
  int v104; // [rsp+30h] [rbp-D0h]
  unsigned int v105; // [rsp+34h] [rbp-CCh]
  int v106; // [rsp+38h] [rbp-C8h] BYREF
  int v107; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned __int64 v108; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v109; // [rsp+48h] [rbp-B8h]
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
  AnyMultiplexedVm = (__int64)MiGetAnyMultiplexedVm(2);
  if ( (_DWORD)v11 == 6 )
    goto LABEL_13;
  if ( (_DWORD)v11 != 5 )
  {
    if ( (_DWORD)v11 != 1 )
      return 0LL;
    v9 = v12;
    AnyMultiplexedVm = MiGetSessionVm();
LABEL_13:
    v15 = v104;
    goto LABEL_14;
  }
  if ( (unsigned int)MiFindLargeMapping(a1, v8) )
    return 0LL;
  v15 = 1;
  v104 = 1;
  AnyMultiplexedVm = (__int64)MiGetAnyMultiplexedVm(5);
LABEL_14:
  v16 = 0LL;
  v109 = 0LL;
  LODWORD(v111[0]) = v9;
  LODWORD(v111[1]) = 20;
  WORD2(v111[0]) = 0;
  v111[2] = 0LL;
  v111[3] = 0LL;
  v17 = *(unsigned __int16 *)(AnyMultiplexedVm + 174);
  v108 = ((v108 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v110 = *(_QWORD *)(qword_140C4E648 + 8 * v17);
  v101 = MiLockWorkingSetShared(AnyMultiplexedVm, v11, v12, v13);
  v19 = v101;
  while ( v10 <= v108 )
  {
    if ( v16 )
    {
      if ( (v10 & 0xFFF) != 0 )
        goto LABEL_19;
      MiFlushTbList((__int64)v111, v18);
      MiUnlockPageTableInternal(AnyMultiplexedVm, v16);
    }
    v16 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v109 = v16;
    MiLockPageTableInternal(AnyMultiplexedVm, v16, 0LL);
LABEL_19:
    v20 = MI_READ_PTE_LOCK_FREE(v10);
    v21 = v20;
    v22 = *(_BYTE *)(AnyMultiplexedVm + 184) & 7;
    v103 = v20;
    if ( v7 != 24 )
    {
      if ( v22 == 7 )
      {
        v66 = v7 | 0x80000000;
        while ( 1 )
        {
          v67 = v21;
          v68 = v21 & 1;
          if ( v68 )
          {
            v69 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v103);
          }
          else
          {
            v69 = v67;
            if ( qword_140C4DF40 && (v67 & 0x10) == 0 )
              v69 = ~qword_140C4DF40 & v67;
          }
          v70 = (v69 >> 12) & 0xFFFFFFFFFLL;
          v71 = 48 * v70 - 0x58000000000LL;
          ValidPte = MiMakeValidPte(v10, v70, v66);
          v62 = ValidPte;
          if ( !v68 )
            break;
          if ( v104 != 1 )
          {
            v102 = 17;
            MiWriteValidPteNewProtection(v10, ValidPte);
LABEL_100:
            v7 = v105;
            *(_QWORD *)(v71 + 16) ^= (*(_DWORD *)(v71 + 16) ^ (32 * v105)) & 0x3E0;
            if ( v104 == 1 )
            {
              _InterlockedAnd64((volatile signed __int64 *)(v71 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
              {
                v82 = v102;
                if ( (unsigned __int8)v102 <= 0xFu && CurrentIrql >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  SchedulerAssist = CurrentPrcb->SchedulerAssist;
                  v82 = v102;
                  v85 = ~(unsigned __int16)(-1LL << (v102 + 1));
                  v59 = (v85 & SchedulerAssist[5]) == 0;
                  SchedulerAssist[5] &= v85;
                  if ( v59 )
                    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                }
              }
              else
              {
                v82 = v102;
              }
              __writecr8(v82);
            }
            if ( (MiFlags & 0x100) == 0 || MI_TIGHTER_PERMISSIONS(v103, v62) )
            {
              v38 = v10 << 25;
              v39 = 1LL;
              goto LABEL_41;
            }
            goto LABEL_155;
          }
          v71 = MiLockNonPagedPoolPte(v10);
          v21 = MI_READ_PTE_LOCK_FREE(v10);
          if ( v21 == v67 )
          {
            if ( (v67 & 0x200) != 0 )
              v62 |= 0x200uLL;
            v21 = _InterlockedCompareExchange64((volatile signed __int64 *)v10, v62, v67);
            if ( v21 == v67 )
              goto LABEL_100;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v71 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v76 = KeGetCurrentIrql(), v76 <= 0xFu) )
          {
            v77 = v102;
            if ( (unsigned __int8)v102 <= 0xFu && v76 >= 2u )
            {
              v78 = KeGetCurrentPrcb();
              v79 = v78->SchedulerAssist;
              v77 = v102;
              v80 = ~(unsigned __int16)(-1LL << (v102 + 1));
              v59 = (v80 & v79[5]) == 0;
              v79[5] &= v80;
              if ( v59 )
                KiRemoveSystemWorkPriorityKick(v78);
            }
          }
          else
          {
            v77 = v102;
          }
          __writecr8(v77);
          v103 = v21;
        }
        if ( (*(_QWORD *)(v71 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
        {
          v106 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v71 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v106, v73, v74, v75);
            while ( *(__int64 *)(v71 + 24) < 0 );
          }
          *(_QWORD *)(v71 + 24) = *(_QWORD *)(v71 + 24) & 0xC000000000000000uLL | 1;
          _InterlockedAnd64((volatile signed __int64 *)(v71 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v62 |= 0x200uLL;
        }
        v7 = v105;
        v86 = 0;
        *(_QWORD *)(v71 + 16) ^= (*(_DWORD *)(v71 + 16) ^ (32 * v105)) & 0x3E0;
        if ( !MiPteInShadowRange(v10) )
          goto LABEL_152;
        if ( (unsigned int)MiPteHasShadow() )
        {
          v86 = 1;
          if ( HIBYTE(word_140C4E008) )
            goto LABEL_152;
          v87 = (v62 & 1) == 0;
        }
        else
        {
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
            goto LABEL_152;
          v87 = (v62 & 1) == 0;
        }
LABEL_150:
        if ( !v87 )
          v62 |= 0x8000000000000000uLL;
        goto LABEL_152;
      }
      if ( (v20 & 1) != 0 )
      {
        v88 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v103) >> 12) & 0xFFFFFFFFFLL)
            - 0x58000000000LL;
        if ( (unsigned int)MI_PFN_IS_PROTO(v88) )
        {
          MiFlushTbList((__int64)v111, v89);
          v90 = MiCopyOnWrite((__int64)(v10 << 25) >> 16, (ULONG_PTR *)v10, -1LL, 0);
          if ( v90 < 0 )
          {
            MiUnlockPageTableInternal(AnyMultiplexedVm, v16);
            MiUnlockWorkingSetShared(AnyMultiplexedVm, v101);
            MiCopyOnWriteCheckConditions(AnyMultiplexedVm, (unsigned int)v90);
            MiLockWorkingSetShared(AnyMultiplexedVm, v91, v92, v93);
            MiLockPageTableInternal(AnyMultiplexedVm, v16, 0LL);
          }
          v10 -= 8LL;
          goto LABEL_155;
        }
        v18 = (_KPROCESS *)(v21 & 0xF00000000000000LL | v21 & 0x7000000000000000LL | MiMakeValidPte(
                                                                                       v10,
                                                                                       (__int64)v89,
                                                                                       v7 | 0x80000000) & 0x80FFFFFFFFFFFFFFuLL);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v10, (signed __int64)v18, v21) == v21 )
        {
          if ( (MiFlags & 0x100) == 0 || MI_TIGHTER_PERMISSIONS(v103, (__int64)v18) )
            MiInsertTbFlushEntry((__int64)v111, (__int64)(v10 << 25) >> 16, 1LL, 0);
          v96 = 0LL;
          v107 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v88 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v107, (__int64)v18, v94, v95);
            while ( *(__int64 *)(v88 + 24) < 0 );
          }
          *(_QWORD *)(v88 + 16) ^= (*(_DWORD *)(v88 + 16) ^ (32 * v7)) & 0x3E0;
          if ( (v103 & 0x42) != 0 )
            v96 = MiCaptureDirtyBitToPfn(v88);
          _InterlockedAnd64((volatile signed __int64 *)(v88 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v96 )
            MiReleasePageFileInfo(v110, v96, 1);
          goto LABEL_155;
        }
      }
      else if ( (v20 & 0x400) != 0 )
      {
LABEL_52:
        MiFlushTbList((__int64)v111, v18);
        MiUnlockPageTableInternal(AnyMultiplexedVm, v16);
        MiUnlockWorkingSetShared(AnyMultiplexedVm, v19);
        MmAccessFault(0LL, (__int64)(v10 << 25) >> 16, 0, 0LL);
        MiLockWorkingSetShared(AnyMultiplexedVm, v49, v50, v51);
        MiLockPageTableInternal(AnyMultiplexedVm, v16, 0LL);
      }
      else
      {
        if ( (v20 & 0x800) == 0 )
        {
          v99 = v20 ^ (v20 ^ (32 * v7)) & 0xE0;
          v86 = 0;
          v103 = v20 ^ ((unsigned __int16)v20 ^ (unsigned __int16)(32 * v7)) & 0x3E0;
          v62 = v103;
          if ( MiPteInShadowRange(v10) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v86 = 1;
              if ( !HIBYTE(word_140C4E008) )
              {
                v87 = (v99 & 1) == 0;
                goto LABEL_150;
              }
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
              v87 = (v99 & 1) == 0;
              goto LABEL_150;
            }
          }
LABEL_152:
          v65 = v86 == 0;
LABEL_153:
          *(_QWORD *)v10 = v62;
          if ( !v65 )
            MiWritePteShadow(v10, v62, v63);
          goto LABEL_155;
        }
        v52 = MiLockTransitionLeafPage(v10);
        if ( v52 )
        {
          v97 = MI_READ_PTE_LOCK_FREE(v10);
          v98 = 32LL * (v7 & 0x1F);
          v54 = v98 | *(_QWORD *)(v52 + 16) & 0xFFFFFFFFFFFFFC1FuLL;
          v55 = v98 | v97 & 0xFFFFFFFFFFFFFC1FuLL;
LABEL_56:
          *(_QWORD *)(v52 + 16) = v54;
          v103 = v55;
          v56 = 0;
          v57 = v55;
          if ( MiPteInShadowRange(v10) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v56 = 1;
              if ( !HIBYTE(word_140C4E008) )
              {
                v59 = (v55 & 1) == 0;
LABEL_62:
                if ( !v59 )
                  v57 = v55 | 0x8000000000000000uLL;
              }
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
              v59 = (v55 & 1) == 0;
              goto LABEL_62;
            }
          }
          *(_QWORD *)v10 = v57;
          if ( v56 )
            MiWritePteShadow(v10, v57, v58);
          _InterlockedAnd64((volatile signed __int64 *)(v52 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_155:
          v19 = v101;
          goto LABEL_156;
        }
      }
LABEL_50:
      v10 -= 8LL;
      goto LABEL_156;
    }
    v23 = v20 & 1;
    if ( v22 == 7 )
    {
      if ( v15 == 1 )
      {
        if ( v23 )
        {
          v24 = MiLockNonPagedPoolPte(v10);
          v21 = MI_READ_PTE_LOCK_FREE(v10);
          v103 = v21;
          goto LABEL_26;
        }
      }
      else if ( v23 )
      {
        v24 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v103) >> 12) & 0xFFFFFFFFFLL)
            - 0x58000000000LL;
        v102 = MiLockPageInline(v24, v25, v26, v27);
LABEL_26:
        *(_QWORD *)(v24 + 16) = *(_QWORD *)(v24 + 16) & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
        v28 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v103);
        TransitionPte = MiMakeTransitionPte((v28 >> 12) & 0xFFFFFFFFFLL, 24);
        v31 = (unsigned int)(v30 - 23);
        v32 = TransitionPte;
        if ( v104 == (_DWORD)v31 )
        {
          while ( 1 )
          {
            v33 = v21;
            v34 = _InterlockedCompareExchange64((volatile signed __int64 *)v10, v32, v21);
            v21 = v34;
            if ( v34 == v33 )
              break;
            v103 = v34;
            v35 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v103);
            v32 = MiMakeTransitionPte((v35 >> 12) & 0xFFFFFFFFFLL, 24);
          }
          v7 = v105;
          if ( (v33 & 0x200) != 0 )
            *(_QWORD *)(v24 + 24) = *(_QWORD *)(v24 + 24) & 0xC000000000000000uLL | 0x10000;
          goto LABEL_40;
        }
        v36 = 0;
        if ( MiPteInShadowRange(v10) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v36 = v31;
            if ( !HIBYTE(word_140C4E008) )
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
          MiWritePteShadow(v10, v32, v37);
LABEL_40:
        _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v38 = v10 << 25;
        v39 = v31;
LABEL_41:
        MiInsertTbFlushEntry((__int64)v111, v38 >> 16, v39, 0);
        goto LABEL_155;
      }
    }
    else
    {
      if ( !v23 )
      {
        if ( (v21 & 0x400) != 0 )
          goto LABEL_52;
        if ( (v21 & 0x800) == 0 )
        {
          v60 = 0;
          v61 = v21 & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
          v103 = v61;
          v62 = v61;
          if ( MiPteInShadowRange(v10) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v60 = 1;
              if ( !HIBYTE(word_140C4E008) )
              {
                v64 = (v61 & 1) == 0;
LABEL_73:
                if ( !v64 )
                  v62 = v61 | 0x8000000000000000uLL;
              }
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
              v64 = (v61 & 1) == 0;
              goto LABEL_73;
            }
          }
          v65 = v60 == 0;
          goto LABEL_153;
        }
        v52 = MiLockTransitionLeafPage(v10);
        if ( v52 )
        {
          v53 = MI_READ_PTE_LOCK_FREE(v10);
          v54 = *(_QWORD *)(v52 + 16) & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
          v55 = v53 & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
          goto LABEL_56;
        }
        goto LABEL_50;
      }
      v40 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v103);
      if ( (unsigned int)MI_PFN_IS_PROTO(48 * ((v40 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL) )
      {
        MiFlushTbList((__int64)v111, v41);
        v43 = MiCopyOnWrite((__int64)(v10 << 25) >> 16, (ULONG_PTR *)v10, -1LL, 0);
        v10 -= 8LL;
        v44 = v43;
        if ( v43 < 0 )
        {
          MiUnlockPageTableInternal(AnyMultiplexedVm, v16);
          MiUnlockWorkingSetShared(AnyMultiplexedVm, v101);
          MiCopyOnWriteCheckConditions(AnyMultiplexedVm, v44);
          MiLockWorkingSetShared(AnyMultiplexedVm, v45, v46, v47);
          MiLockPageTableInternal(AnyMultiplexedVm, v16, 0LL);
        }
        goto LABEL_155;
      }
      if ( dword_140C4E828 )
        MI_WSLE_LOG_ACCESS(AnyMultiplexedVm, (_BYTE *)v10);
      if ( (MiGetWsleContents(v42, (__int64)(v10 << 25) >> 16) & 0xF) == 8 )
        goto LABEL_155;
      v48 = MiTbFlushType(AnyMultiplexedVm);
      v112[2] = 0LL;
      v112[3] = 0LL;
      LODWORD(v112[0]) = v48;
      WORD2(v112[0]) = 4;
      v112[1] = 20LL;
      MiInsertTbFlushEntry((__int64)v112, (__int64)(v10 << 25) >> 16, 1LL, 0);
      v19 = v101;
      if ( !MiFreeWsleList(AnyMultiplexedVm, (__int64)v112, 0) )
        goto LABEL_50;
    }
LABEL_156:
    v16 = v109;
    v10 += 8LL;
    v15 = v104;
  }
  MiFlushTbList((__int64)v111, v18);
  if ( v16 )
    MiUnlockPageTableInternal(AnyMultiplexedVm, v16);
  MiUnlockWorkingSetShared(AnyMultiplexedVm, v19);
  return 1LL;
}
