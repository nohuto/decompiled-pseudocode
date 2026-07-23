/*
 * XREFs of MmProtectPool @ 0x1402F8098
 * Callers:
 *     ExProtectPoolEx @ 0x1402F7F18 (ExProtectPoolEx.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiLockTransitionLeafPage @ 0x140224B74 (MiLockTransitionLeafPage.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiReleasePageFileInfo @ 0x140255C50 (MiReleasePageFileInfo.c)
 *     MiGetWsleContents @ 0x14025ECE0 (MiGetWsleContents.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x140298214 (MI_TIGHTER_PERMISSIONS.c)
 *     MmAccessFault @ 0x1402B1990 (MmAccessFault.c)
 *     MiLockPageTableInternal @ 0x1402B33F0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiMakeProtectionMask @ 0x1402BF320 (MiMakeProtectionMask.c)
 *     MiCopyOnWrite @ 0x1402E3B50 (MiCopyOnWrite.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiFindLargeMapping @ 0x1402F8FD0 (MiFindLargeMapping.c)
 *     MiGetAnyMultiplexedVm @ 0x140307E4C (MiGetAnyMultiplexedVm.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140313DD0 (MI_WSLE_LOG_ACCESS.c)
 *     MiWriteValidPteNewProtection @ 0x14031A750 (MiWriteValidPteNewProtection.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031A860 (MiCaptureDirtyBitToPfn.c)
 *     MiGetSessionVm @ 0x14031CEEC (MiGetSessionVm.c)
 *     MiFreeWsleList @ 0x140332070 (MiFreeWsleList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiMakeTransitionPte @ 0x140339700 (MiMakeTransitionPte.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MiTbFlushType @ 0x140341F58 (MiTbFlushType.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiLockNonPagedPoolPte @ 0x140544CB0 (MiLockNonPagedPoolPte.c)
 *     MiCopyOnWriteCheckConditions @ 0x14055C138 (MiCopyOnWriteCheckConditions.c)
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
  _DWORD *v14; // r9
  __int64 AnyMultiplexedVm; // r13
  int v16; // r14d
  unsigned __int64 v17; // r15
  __int64 v18; // rcx
  unsigned __int8 v19; // bl
  __int64 v20; // rax
  signed __int64 v21; // rsi
  char v22; // cl
  __int64 v23; // rax
  unsigned __int64 v24; // r14
  unsigned __int64 v25; // rax
  __int64 TransitionPte; // rax
  int v27; // edx
  __int64 v28; // r15
  signed __int64 v29; // rbx
  signed __int64 v30; // rcx
  signed __int64 v31; // rax
  unsigned __int64 v32; // rax
  int v33; // esi
  __int64 v34; // rdx
  __int64 v35; // r8
  unsigned __int64 v36; // rax
  __int64 v37; // rcx
  int v38; // eax
  unsigned int v39; // ebx
  __int64 v40; // rdx
  __int64 v41; // r8
  _DWORD *v42; // r9
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // r8
  _DWORD *v46; // r9
  __int64 v47; // r14
  __int64 v48; // rsi
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rsi
  int v51; // r15d
  unsigned __int64 v52; // rbx
  bool v53; // zf
  int v54; // r14d
  unsigned __int64 v55; // rsi
  unsigned __int64 v56; // rbx
  bool v57; // zf
  bool v58; // zf
  unsigned int v59; // r12d
  signed __int64 v60; // r15
  int v61; // esi
  unsigned __int64 v62; // rdx
  __int64 v63; // rdx
  __int64 v64; // r14
  __int64 ValidPte; // rax
  __int64 v66; // rdx
  __int64 v67; // r8
  __int64 v68; // r9
  unsigned __int8 v69; // al
  unsigned __int8 v70; // bl
  struct _KPRCB *v71; // r10
  _DWORD *v72; // r9
  int v73; // eax
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v75; // si
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v78; // eax
  int v79; // esi
  bool v80; // zf
  unsigned __int64 v81; // r14
  __int64 v82; // rdx
  int v83; // ebx
  __int64 v84; // rdx
  __int64 v85; // r8
  _DWORD *v86; // r9
  __int64 v87; // r8
  unsigned __int64 v88; // rdx
  __int64 v89; // rdx
  __int64 v90; // r8
  __int64 v91; // r9
  unsigned __int64 v92; // rbx
  __int64 v93; // rsi
  __int64 v94; // rcx
  char v95; // r14
  unsigned __int8 v97; // [rsp+20h] [rbp-E0h]
  char v98; // [rsp+21h] [rbp-DFh]
  unsigned __int64 v99; // [rsp+28h] [rbp-D8h] BYREF
  int v100; // [rsp+30h] [rbp-D0h]
  unsigned int v101; // [rsp+34h] [rbp-CCh]
  int v102; // [rsp+38h] [rbp-C8h] BYREF
  int v103; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned __int64 v104; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v105; // [rsp+48h] [rbp-B8h]
  __int64 v106; // [rsp+50h] [rbp-B0h]
  _QWORD v107[24]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v108[24]; // [rsp+120h] [rbp+20h] BYREF

  v98 = 0;
  memset(v107, 0, 0xB8uLL);
  memset(v108, 0, 0xB8uLL);
  if ( (a3 & 0x10) != 0 && (MiFlags & 0x10000) != 0 )
    a3 &= ~0x10u;
  ProtectionMask = MiMakeProtectionMask(a3);
  v101 = ProtectionMask;
  v7 = ProtectionMask;
  if ( ProtectionMask >= 8 && ProtectionMask != 24 || (ProtectionMask & 5) == 5 )
    return 0LL;
  v100 = 0;
  v8 = a1 + a2 - 1;
  v104 = v8;
  v9 = 0;
  v10 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  MiGetSystemRegionType(a1);
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2LL);
  if ( (_DWORD)v11 == 6 )
    goto LABEL_13;
  if ( (_DWORD)v11 != 5 )
  {
    if ( (_DWORD)v11 != 1 )
      return 0LL;
    v9 = v13;
    AnyMultiplexedVm = MiGetSessionVm(v12, v11, v13);
LABEL_13:
    v16 = v100;
    goto LABEL_14;
  }
  if ( (unsigned int)MiFindLargeMapping(a1, v8) )
    return 0LL;
  v16 = 1;
  v100 = 1;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(5LL);
LABEL_14:
  v17 = 0LL;
  v105 = 0LL;
  LODWORD(v107[0]) = v9;
  LODWORD(v107[1]) = 20;
  WORD2(v107[0]) = 0;
  v107[2] = 0LL;
  v107[3] = 0LL;
  v18 = *(unsigned __int16 *)(AnyMultiplexedVm + 174);
  v104 = ((v104 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v106 = *(_QWORD *)(qword_140C4E688 + 8 * v18);
  v97 = MiLockWorkingSetShared(AnyMultiplexedVm, v11, v13, v14);
  v19 = v97;
  while ( v10 <= v104 )
  {
    if ( v17 )
    {
      if ( (v10 & 0xFFF) != 0 )
        goto LABEL_19;
      MiFlushTbList(v107);
      MiUnlockPageTableInternal(AnyMultiplexedVm, v17);
    }
    v17 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v105 = v17;
    MiLockPageTableInternal(AnyMultiplexedVm, v17, 0);
LABEL_19:
    v20 = MI_READ_PTE_LOCK_FREE(v10);
    v21 = v20;
    v22 = *(_BYTE *)(AnyMultiplexedVm + 184) & 7;
    v99 = v20;
    if ( v7 != 24 )
    {
      if ( v22 == 7 )
      {
        v59 = v7 | 0x80000000;
        while ( 1 )
        {
          v60 = v21;
          v61 = v21 & 1;
          if ( v61 )
          {
            v62 = MI_READ_PTE_LOCK_FREE(&v99);
          }
          else
          {
            v62 = v60;
            if ( qword_140C4DF80 && (v60 & 0x10) == 0 )
              v62 = ~qword_140C4DF80 & v60;
          }
          v63 = (v62 >> 12) & 0xFFFFFFFFFLL;
          v64 = 48 * v63 - 0x58000000000LL;
          ValidPte = MiMakeValidPte(v10, v63, v59);
          v56 = ValidPte;
          if ( !v61 )
            break;
          if ( v100 != 1 )
          {
            v98 = 17;
            MiWriteValidPteNewProtection(v10, ValidPte);
LABEL_100:
            v7 = v101;
            *(_QWORD *)(v64 + 16) ^= (*(_DWORD *)(v64 + 16) ^ (32 * v101)) & 0x3E0;
            if ( v100 == 1 )
            {
              _InterlockedAnd64((volatile signed __int64 *)(v64 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
              {
                v75 = v98;
                if ( (unsigned __int8)v98 <= 0xFu && CurrentIrql >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  SchedulerAssist = CurrentPrcb->SchedulerAssist;
                  v75 = v98;
                  v78 = ~(unsigned __int16)(-1LL << (v98 + 1));
                  v53 = (v78 & SchedulerAssist[5]) == 0;
                  SchedulerAssist[5] &= v78;
                  if ( v53 )
                    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                }
              }
              else
              {
                v75 = v98;
              }
              __writecr8(v75);
            }
            if ( (MiFlags & 0x100) == 0 || MI_TIGHTER_PERMISSIONS(v99, v56) )
            {
              v34 = v10 << 25;
              v35 = 1LL;
              goto LABEL_41;
            }
            goto LABEL_155;
          }
          v64 = MiLockNonPagedPoolPte(v10);
          v21 = MI_READ_PTE_LOCK_FREE(v10);
          if ( v21 == v60 )
          {
            if ( (v60 & 0x200) != 0 )
              v56 |= 0x200uLL;
            v21 = _InterlockedCompareExchange64((volatile signed __int64 *)v10, v56, v60);
            if ( v21 == v60 )
              goto LABEL_100;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v64 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v69 = KeGetCurrentIrql(), v69 <= 0xFu) )
          {
            v70 = v98;
            if ( (unsigned __int8)v98 <= 0xFu && v69 >= 2u )
            {
              v71 = KeGetCurrentPrcb();
              v72 = v71->SchedulerAssist;
              v70 = v98;
              v73 = ~(unsigned __int16)(-1LL << (v98 + 1));
              v53 = (v73 & v72[5]) == 0;
              v72[5] &= v73;
              if ( v53 )
                KiRemoveSystemWorkPriorityKick(v71);
            }
          }
          else
          {
            v70 = v98;
          }
          __writecr8(v70);
          v99 = v21;
        }
        if ( (*(_QWORD *)(v64 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
        {
          v102 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v64 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v102, v66, v67, v68);
            while ( *(__int64 *)(v64 + 24) < 0 );
          }
          *(_QWORD *)(v64 + 24) = *(_QWORD *)(v64 + 24) & 0xC000000000000000uLL | 1;
          _InterlockedAnd64((volatile signed __int64 *)(v64 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v56 |= 0x200uLL;
        }
        v7 = v101;
        v79 = 0;
        *(_QWORD *)(v64 + 16) ^= (*(_DWORD *)(v64 + 16) ^ (32 * v101)) & 0x3E0;
        if ( !(unsigned int)MiPteInShadowRange(v10) )
          goto LABEL_152;
        if ( (unsigned int)MiPteHasShadow() )
        {
          v79 = 1;
          if ( HIBYTE(word_140C4E048) )
            goto LABEL_152;
          v80 = (v56 & 1) == 0;
        }
        else
        {
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
            goto LABEL_152;
          v80 = (v56 & 1) == 0;
        }
LABEL_150:
        if ( !v80 )
          v56 |= 0x8000000000000000uLL;
        goto LABEL_152;
      }
      if ( (v20 & 1) != 0 )
      {
        v81 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v99) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        if ( (unsigned int)MI_PFN_IS_PROTO(v81) )
        {
          MiFlushTbList(v107);
          v83 = MiCopyOnWrite((__int64)(v10 << 25) >> 16, (ULONG_PTR *)v10, -1LL, 0);
          if ( v83 < 0 )
          {
            MiUnlockPageTableInternal(AnyMultiplexedVm, v17);
            MiUnlockWorkingSetShared(AnyMultiplexedVm, v97);
            MiCopyOnWriteCheckConditions(AnyMultiplexedVm, (unsigned int)v83);
            MiLockWorkingSetShared(AnyMultiplexedVm, v84, v85, v86);
            MiLockPageTableInternal(AnyMultiplexedVm, v17, 0);
          }
          v10 -= 8LL;
          goto LABEL_155;
        }
        v87 = v7;
        LODWORD(v87) = v7 | 0x80000000;
        v88 = v21 & 0xF00000000000000LL | v21 & 0x7000000000000000LL | MiMakeValidPte(v10, v82, v87) & 0x80FFFFFFFFFFFFFFuLL;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v10, v88, v21) == v21 )
        {
          if ( (MiFlags & 0x100) == 0 || MI_TIGHTER_PERMISSIONS(v99, v88) )
            MiInsertTbFlushEntry(v107, (__int64)(v10 << 25) >> 16, 1LL, 0LL);
          v92 = 0LL;
          v103 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v81 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v103, v89, v90, v91);
            while ( *(__int64 *)(v81 + 24) < 0 );
          }
          *(_QWORD *)(v81 + 16) ^= (*(_DWORD *)(v81 + 16) ^ (32 * v7)) & 0x3E0;
          if ( (v99 & 0x42) != 0 )
            v92 = MiCaptureDirtyBitToPfn(v81);
          _InterlockedAnd64((volatile signed __int64 *)(v81 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v92 )
            MiReleasePageFileInfo(v106, v92, 1);
          goto LABEL_155;
        }
      }
      else if ( (v20 & 0x400) != 0 )
      {
LABEL_52:
        MiFlushTbList(v107);
        MiUnlockPageTableInternal(AnyMultiplexedVm, v17);
        MiUnlockWorkingSetShared(AnyMultiplexedVm, v19);
        MmAccessFault(0LL, (__int64)(v10 << 25) >> 16, 0, 0LL);
        MiLockWorkingSetShared(AnyMultiplexedVm, v44, v45, v46);
        MiLockPageTableInternal(AnyMultiplexedVm, v17, 0);
      }
      else
      {
        if ( (v20 & 0x800) == 0 )
        {
          v95 = v20 ^ (v20 ^ (32 * v7)) & 0xE0;
          v79 = 0;
          v99 = v20 ^ ((unsigned __int16)v20 ^ (unsigned __int16)(32 * v7)) & 0x3E0;
          v56 = v99;
          if ( (unsigned int)MiPteInShadowRange(v10) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v79 = 1;
              if ( !HIBYTE(word_140C4E048) )
              {
                v80 = (v95 & 1) == 0;
                goto LABEL_150;
              }
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
              v80 = (v95 & 1) == 0;
              goto LABEL_150;
            }
          }
LABEL_152:
          v58 = v79 == 0;
LABEL_153:
          *(_QWORD *)v10 = v56;
          if ( !v58 )
            MiWritePteShadow(v10, v56);
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
          v99 = v50;
          v51 = 0;
          v52 = v50;
          if ( (unsigned int)MiPteInShadowRange(v10) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v51 = 1;
              if ( !HIBYTE(word_140C4E048) )
              {
                v53 = (v50 & 1) == 0;
LABEL_62:
                if ( !v53 )
                  v52 = v50 | 0x8000000000000000uLL;
              }
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
              v53 = (v50 & 1) == 0;
              goto LABEL_62;
            }
          }
          *(_QWORD *)v10 = v52;
          if ( v51 )
            MiWritePteShadow(v10, v52);
          _InterlockedAnd64((volatile signed __int64 *)(v47 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_155:
          v19 = v97;
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
      if ( v16 == 1 )
      {
        if ( v23 )
        {
          v24 = MiLockNonPagedPoolPte(v10);
          v21 = MI_READ_PTE_LOCK_FREE(v10);
          v99 = v21;
          goto LABEL_26;
        }
      }
      else if ( v23 )
      {
        v24 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v99) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        v98 = MiLockPageInline(v24);
LABEL_26:
        *(_QWORD *)(v24 + 16) = *(_QWORD *)(v24 + 16) & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
        v25 = MI_READ_PTE_LOCK_FREE(&v99);
        TransitionPte = MiMakeTransitionPte((v25 >> 12) & 0xFFFFFFFFFLL, 24LL);
        v28 = (unsigned int)(v27 - 23);
        v29 = TransitionPte;
        if ( v100 == (_DWORD)v28 )
        {
          while ( 1 )
          {
            v30 = v21;
            v31 = _InterlockedCompareExchange64((volatile signed __int64 *)v10, v29, v21);
            v21 = v31;
            if ( v31 == v30 )
              break;
            v99 = v31;
            v32 = MI_READ_PTE_LOCK_FREE(&v99);
            v29 = MiMakeTransitionPte((v32 >> 12) & 0xFFFFFFFFFLL, 24LL);
          }
          v7 = v101;
          if ( (v30 & 0x200) != 0 )
            *(_QWORD *)(v24 + 24) = *(_QWORD *)(v24 + 24) & 0xC000000000000000uLL | 0x10000;
          goto LABEL_40;
        }
        v33 = 0;
        if ( (unsigned int)MiPteInShadowRange(v10) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v33 = v28;
            if ( !HIBYTE(word_140C4E048) )
              goto LABEL_36;
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
LABEL_36:
            if ( ((unsigned __int8)v29 & (unsigned __int8)v28) != 0 )
              v29 |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v10 = v29;
        if ( v33 )
          MiWritePteShadow(v10, v29);
LABEL_40:
        _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v34 = v10 << 25;
        v35 = v28;
LABEL_41:
        MiInsertTbFlushEntry(v107, v34 >> 16, v35, 0LL);
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
          v54 = 0;
          v55 = v21 & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
          v99 = v55;
          v56 = v55;
          if ( (unsigned int)MiPteInShadowRange(v10) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v54 = 1;
              if ( !HIBYTE(word_140C4E048) )
              {
                v57 = (v55 & 1) == 0;
LABEL_73:
                if ( !v57 )
                  v56 = v55 | 0x8000000000000000uLL;
              }
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
              v57 = (v55 & 1) == 0;
              goto LABEL_73;
            }
          }
          v58 = v54 == 0;
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
      v36 = MI_READ_PTE_LOCK_FREE(&v99);
      if ( (unsigned int)MI_PFN_IS_PROTO(48 * ((v36 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL) )
      {
        MiFlushTbList(v107);
        v38 = MiCopyOnWrite((__int64)(v10 << 25) >> 16, (ULONG_PTR *)v10, -1LL, 0);
        v10 -= 8LL;
        v39 = v38;
        if ( v38 < 0 )
        {
          MiUnlockPageTableInternal(AnyMultiplexedVm, v17);
          MiUnlockWorkingSetShared(AnyMultiplexedVm, v97);
          MiCopyOnWriteCheckConditions(AnyMultiplexedVm, v39);
          MiLockWorkingSetShared(AnyMultiplexedVm, v40, v41, v42);
          MiLockPageTableInternal(AnyMultiplexedVm, v17, 0);
        }
        goto LABEL_155;
      }
      if ( dword_140C4E868 )
        MI_WSLE_LOG_ACCESS(AnyMultiplexedVm, v10);
      if ( (MiGetWsleContents(v37, (__int64)(v10 << 25) >> 16) & 0xF) == 8 )
        goto LABEL_155;
      v43 = MiTbFlushType(AnyMultiplexedVm);
      v108[2] = 0LL;
      v108[3] = 0LL;
      LODWORD(v108[0]) = v43;
      WORD2(v108[0]) = 4;
      v108[1] = 20LL;
      MiInsertTbFlushEntry(v108, (__int64)(v10 << 25) >> 16, 1LL, 0LL);
      v19 = v97;
      if ( !MiFreeWsleList(AnyMultiplexedVm, v108, 0LL) )
        goto LABEL_50;
    }
LABEL_156:
    v17 = v105;
    v10 += 8LL;
    v16 = v100;
  }
  MiFlushTbList(v107);
  if ( v17 )
    MiUnlockPageTableInternal(AnyMultiplexedVm, v17);
  MiUnlockWorkingSetShared(AnyMultiplexedVm, v19);
  return 1LL;
}
