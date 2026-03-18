/*
 * XREFs of MmProtectPool @ 0x140367190
 * Callers:
 *     ExProtectPoolEx @ 0x140367008 (ExProtectPoolEx.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiLockNonPagedPoolPte @ 0x14022E210 (MiLockNonPagedPoolPte.c)
 *     MiGetAnyMultiplexedVm @ 0x14026DFC0 (MiGetAnyMultiplexedVm.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140274D10 (MI_WSLE_LOG_ACCESS.c)
 *     MiGetSystemRegionType @ 0x14027B080 (MiGetSystemRegionType.c)
 *     MiGetSessionVm @ 0x14027B520 (MiGetSessionVm.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiFreeWsleList @ 0x1402C1D70 (MiFreeWsleList.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     MiInsertTbFlushEntry @ 0x1402CF280 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MiReleasePageFileInfo @ 0x1402E20D0 (MiReleasePageFileInfo.c)
 *     MiMakeTransitionPte @ 0x1402E4D28 (MiMakeTransitionPte.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MiLockTransitionLeafPageEx @ 0x140315D60 (MiLockTransitionLeafPageEx.c)
 *     MiCopyOnWrite @ 0x140316400 (MiCopyOnWrite.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MmAccessFault @ 0x14031C860 (MmAccessFault.c)
 *     MiLockPageTableInternal @ 0x14031DE00 (MiLockPageTableInternal.c)
 *     MiMakeProtectionMask @ 0x14032BCC0 (MiMakeProtectionMask.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     MiTbFlushType @ 0x140333AA0 (MiTbFlushType.c)
 *     MiGetWsleContents @ 0x14033A410 (MiGetWsleContents.c)
 *     MiCaptureDirtyBitToPfn @ 0x14033C2A0 (MiCaptureDirtyBitToPfn.c)
 *     MiWriteValidPteNewProtection @ 0x14033DBC0 (MiWriteValidPteNewProtection.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x14033F3EC (MI_TIGHTER_PERMISSIONS.c)
 *     MiFindLargeMapping @ 0x140386FE4 (MiFindLargeMapping.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiCopyOnWriteCheckConditions @ 0x1405BCAF8 (MiCopyOnWriteCheckConditions.c)
 */

__int64 __fastcall MmProtectPool(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int ProtectionMask; // eax
  unsigned int v7; // r13d
  unsigned __int64 v8; // r14
  int v9; // ebx
  unsigned __int64 v10; // rdi
  int v11; // edx
  int v12; // r8d
  __int64 SessionVm; // r15
  int v14; // r14d
  unsigned __int64 v15; // r12
  __int64 v16; // rcx
  __int64 v17; // r9
  unsigned __int8 v18; // bl
  signed __int64 v19; // rsi
  char v20; // al
  unsigned __int64 v21; // rdx
  __int64 v22; // r14
  unsigned __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // r8
  unsigned __int64 v26; // rbx
  int v28; // ebx
  unsigned int v29; // r13d
  unsigned __int64 v30; // rdx
  __int64 v31; // rdx
  signed __int64 v32; // r15
  unsigned __int64 v33; // r14
  unsigned __int64 ValidPte; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rbx
  int v39; // r12d
  unsigned __int8 v40; // si
  unsigned __int64 v41; // r14
  int v42; // r12d
  signed __int64 v43; // r15
  unsigned __int64 v44; // rax
  signed __int64 TransitionPte; // rax
  __int64 v46; // rbx
  signed __int64 v47; // rax
  int v48; // esi
  bool v49; // zf
  unsigned __int64 v50; // rax
  __int64 v51; // rcx
  int v52; // eax
  __int64 v53; // r9
  int v54; // eax
  unsigned int v55; // ebx
  __int64 v56; // r9
  __int64 v57; // r14
  __int64 v58; // rsi
  __int64 v59; // rdx
  __int64 v60; // rax
  unsigned __int64 v61; // rsi
  __int64 v62; // rcx
  unsigned __int64 v63; // rbx
  int v64; // r15d
  bool v65; // zf
  unsigned __int8 v66; // al
  unsigned __int8 v67; // bl
  struct _KPRCB *v68; // r10
  _DWORD *v69; // r9
  int v70; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v74; // eax
  int v75; // esi
  bool v76; // zf
  __int64 v77; // r9
  unsigned __int8 v78; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v79[7]; // [rsp+21h] [rbp-DFh] BYREF
  unsigned __int64 v80; // [rsp+28h] [rbp-D8h] BYREF
  int v81; // [rsp+30h] [rbp-D0h]
  char *AnyMultiplexedVm; // [rsp+38h] [rbp-C8h]
  unsigned int v83; // [rsp+40h] [rbp-C0h]
  int v84; // [rsp+44h] [rbp-BCh] BYREF
  int v85; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v86; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v87; // [rsp+58h] [rbp-A8h]
  __int64 v88; // [rsp+60h] [rbp-A0h]
  _QWORD v89[24]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v90[24]; // [rsp+130h] [rbp+30h] BYREF

  v79[0] = 0;
  memset(v89, 0, 0xB8uLL);
  memset(v90, 0, 0xB8uLL);
  if ( (a3 & 0x10) != 0 && (MiFlags & 0x8000) != 0 )
    a3 &= ~0x10u;
  ProtectionMask = MiMakeProtectionMask(a3);
  v83 = ProtectionMask;
  v7 = ProtectionMask;
  if ( ProtectionMask >= 8 && ProtectionMask != 24 || (ProtectionMask & 5) == 5 )
    return 0LL;
  v81 = 0;
  v8 = a1 + a2 - 1;
  v86 = v8;
  v9 = 0;
  v10 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  MiGetSystemRegionType(a1);
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  SessionVm = (__int64)AnyMultiplexedVm;
  if ( v11 != 6 )
  {
    if ( v11 == 5 )
    {
      if ( !(unsigned int)MiFindLargeMapping(a1, v8) )
      {
        v14 = 1;
        v81 = 1;
        SessionVm = (__int64)MiGetAnyMultiplexedVm(5);
        AnyMultiplexedVm = (char *)SessionVm;
        goto LABEL_6;
      }
    }
    else if ( v11 == 1 )
    {
      v9 = v12;
      SessionVm = MiGetSessionVm();
      AnyMultiplexedVm = (char *)SessionVm;
      goto LABEL_5;
    }
    return 0LL;
  }
LABEL_5:
  v14 = v81;
LABEL_6:
  v15 = 0LL;
  v87 = 0LL;
  LODWORD(v89[0]) = v9;
  LODWORD(v89[1]) = 20;
  WORD2(v89[0]) = 0;
  v89[2] = 0LL;
  v89[3] = 0LL;
  v16 = *(unsigned __int16 *)(SessionVm + 174);
  v86 = ((v86 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v88 = *(_QWORD *)(qword_140C51F48 + 8 * v16);
  v78 = MiLockWorkingSetShared(SessionVm);
  v18 = v78;
  if ( v10 <= v86 )
  {
    while ( 1 )
    {
      if ( !v15 )
        goto LABEL_8;
      if ( (v10 & 0xFFF) == 0 )
        break;
LABEL_9:
      v19 = MI_READ_PTE_LOCK_FREE(v10);
      v80 = v19;
      v20 = *(_BYTE *)(SessionVm + 184) & 7;
      if ( v7 != 24 )
      {
        if ( v20 != 7 )
        {
          if ( (v19 & 1) != 0 )
          {
            v21 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v80) >> 12) & 0xFFFFFFFFFFLL;
            v22 = 48 * v21 - 0x220000000000LL;
            if ( *(__int64 *)(v22 + 40) < 0 )
            {
              MiFlushTbList((__int64)v89);
              v28 = MiCopyOnWrite((__int64)(v10 << 25) >> 16, v10, 0xFFFFFFFFFFFFFFFFuLL, 0);
              if ( v28 < 0 )
              {
                MiUnlockPageTableInternal(SessionVm, v15);
                MiUnlockWorkingSetShared(SessionVm, v78);
                MiCopyOnWriteCheckConditions(SessionVm, (unsigned int)v28);
                MiLockWorkingSetShared(SessionVm);
                MiLockPageTableInternal(SessionVm, v15, 0LL, v77);
              }
              v10 -= 8LL;
              goto LABEL_24;
            }
            v23 = v19 & 0x7000000000000000LL | v19 & 0xF00000000000000LL | MiMakeValidPte(v10, v21, v7 | 0x80000000) & 0x80FFFFFFFFFFFFFFuLL;
            if ( (MiFlags & 0x4000000) != 0 )
              _mm_lfence();
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)v10, v23, v19) == v19 )
            {
              if ( (MiFlags & 0x100) == 0 || MI_TIGHTER_PERMISSIONS(v80, v23) )
                MiInsertTbFlushEntry((__int64)v89, (__int64)(v10 << 25) >> 16, 1LL, 0);
              v26 = 0LL;
              v85 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v85, v24, v25, v17);
                while ( *(__int64 *)(v22 + 24) < 0 );
              }
              *(_QWORD *)(v22 + 16) ^= (*(_DWORD *)(v22 + 16) ^ (32 * v7)) & 0x3E0;
              if ( (v80 & 0x42) != 0 )
                v26 = MiCaptureDirtyBitToPfn(v22);
              _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( v26 )
                MiReleasePageFileInfo(v88, v26, 1);
              goto LABEL_24;
            }
            goto LABEL_98;
          }
          if ( (v19 & 0x400) != 0 )
            goto LABEL_97;
          if ( (v19 & 0x800) == 0 )
          {
            v80 = v19 ^ ((unsigned __int16)v19 ^ (unsigned __int16)(32 * v7)) & 0x3E0;
            *(_QWORD *)v10 = v80;
            goto LABEL_25;
          }
          v57 = MiLockTransitionLeafPageEx(v10, 0LL, 0);
          if ( !v57 )
            goto LABEL_98;
          v58 = MI_READ_PTE_LOCK_FREE(v10);
          v60 = -993LL;
          v59 = 32LL * (v7 & 0x1F);
LABEL_105:
          v61 = v59 | v60 & v58;
          v62 = v59 | v60 & *(_QWORD *)(v57 + 16);
          v80 = v61;
          *(_QWORD *)(v57 + 16) = v62;
          v63 = v61;
          v64 = 0;
          if ( MiPteInShadowRange(v10) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v64 = 1;
              if ( !HIBYTE(word_140C51864) )
              {
                v65 = (v61 & 1) == 0;
LABEL_111:
                if ( !v65 )
                  v63 = v61 | 0x8000000000000000uLL;
              }
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
              v65 = (v61 & 1) == 0;
              goto LABEL_111;
            }
          }
          *(_QWORD *)v10 = v63;
          if ( v64 )
            MiWritePteShadow(v10, v63);
          _InterlockedAnd64((volatile signed __int64 *)(v57 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          goto LABEL_57;
        }
        v29 = v7 | 0x80000000;
        while ( 1 )
        {
          if ( (v19 & 1) != 0 )
          {
            v30 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v80);
          }
          else
          {
            v30 = v19;
            if ( qword_140C50780 && (v19 & 0x10) == 0 )
              v30 = ~qword_140C50780 & v19;
          }
          v31 = (v30 >> 12) & 0xFFFFFFFFFFLL;
          v32 = v19;
          v33 = 48 * v31 - 0x220000000000LL;
          ValidPte = MiMakeValidPte(v10, v31, v29);
          v38 = ValidPte;
          if ( (v19 & 1) == 0 )
            break;
          v39 = v81;
          if ( !v81 )
          {
            v79[0] = 17;
            MiWriteValidPteNewProtection(v10, ValidPte);
LABEL_51:
            v7 = v83;
            *(_QWORD *)(v33 + 16) ^= (*(_DWORD *)(v33 + 16) ^ (32 * v83)) & 0x3E0;
            if ( v39 )
            {
              _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
              {
                v40 = v79[0];
                if ( v79[0] <= 0xFu && CurrentIrql >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  SchedulerAssist = CurrentPrcb->SchedulerAssist;
                  v40 = v79[0];
                  v74 = ~(unsigned __int16)(-1LL << (v79[0] + 1));
                  v49 = (v74 & SchedulerAssist[5]) == 0;
                  SchedulerAssist[5] &= v74;
                  if ( v49 )
                    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                }
              }
              else
              {
                v40 = v79[0];
              }
              __writecr8(v40);
            }
            if ( (MiFlags & 0x100) != 0 && !MI_TIGHTER_PERMISSIONS(v80, v38) )
              goto LABEL_57;
LABEL_56:
            MiInsertTbFlushEntry((__int64)v89, (__int64)(v10 << 25) >> 16, 1LL, 0);
LABEL_57:
            SessionVm = (__int64)AnyMultiplexedVm;
LABEL_24:
            v18 = v78;
            goto LABEL_25;
          }
          v33 = MiLockNonPagedPoolPte(v10, v79);
          v19 = MI_READ_PTE_LOCK_FREE(v10);
          if ( v19 == v32 )
          {
            if ( (v32 & 0x200) != 0 )
              v38 |= 0x200uLL;
            if ( (MiFlags & 0x4000000) != 0 )
              _mm_lfence();
            v19 = _InterlockedCompareExchange64((volatile signed __int64 *)v10, v38, v32);
            if ( v19 == v32 )
              goto LABEL_51;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v66 = KeGetCurrentIrql(), v66 <= 0xFu) )
          {
            v67 = v79[0];
            if ( v79[0] <= 0xFu && v66 >= 2u )
            {
              v68 = KeGetCurrentPrcb();
              v69 = v68->SchedulerAssist;
              v67 = v79[0];
              v70 = ~(unsigned __int16)(-1LL << (v79[0] + 1));
              v49 = (v70 & v69[5]) == 0;
              v69[5] &= v70;
              if ( v49 )
                KiRemoveSystemWorkPriorityKick(v68);
            }
          }
          else
          {
            v67 = v79[0];
          }
          __writecr8(v67);
          v80 = v19;
        }
        if ( (*(_QWORD *)(v33 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
        {
          v84 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v33 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v84, v35, v36, v37);
            while ( *(__int64 *)(v33 + 24) < 0 );
          }
          *(_QWORD *)(v33 + 24) = *(_QWORD *)(v33 + 24) & 0xC000000000000000uLL | 1;
          _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v38 |= 0x200uLL;
        }
        v7 = v83;
        v75 = 0;
        *(_QWORD *)(v33 + 16) ^= (*(_DWORD *)(v33 + 16) ^ (32 * v83)) & 0x3E0;
        if ( MiPteInShadowRange(v10) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v75 = 1;
            if ( !HIBYTE(word_140C51864) )
            {
              v76 = (v38 & 1) == 0;
LABEL_149:
              if ( !v76 )
                v38 |= 0x8000000000000000uLL;
            }
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
            v76 = (v38 & 1) == 0;
            goto LABEL_149;
          }
        }
        *(_QWORD *)v10 = v38;
        if ( v75 )
          MiWritePteShadow(v10, v38);
        goto LABEL_57;
      }
      if ( v20 == 7 )
      {
        if ( v14 )
        {
          if ( (v19 & 1) == 0 )
            goto LABEL_25;
          v41 = MiLockNonPagedPoolPte(v10, v79);
          v19 = MI_READ_PTE_LOCK_FREE(v10);
          v80 = v19;
        }
        else
        {
          if ( (v19 & 1) == 0 )
            goto LABEL_25;
          v41 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v80) >> 12) & 0xFFFFFFFFFFLL)
              - 0x220000000000LL;
          v79[0] = MiLockPageInline(v41);
        }
        v42 = v81;
        *(_QWORD *)(v41 + 16) = *(_QWORD *)(v41 + 16) & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
        while ( 1 )
        {
          v43 = v19;
          v44 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v80);
          TransitionPte = MiMakeTransitionPte((v44 >> 12) & 0xFFFFFFFFFFLL, 24);
          v46 = TransitionPte;
          if ( !v42 )
            break;
          if ( (MiFlags & 0x4000000) != 0 )
            _mm_lfence();
          v47 = _InterlockedCompareExchange64((volatile signed __int64 *)v10, TransitionPte, v19);
          v19 = v47;
          if ( v47 == v43 )
          {
            if ( (v43 & 0x200) != 0 )
              *(_QWORD *)(v41 + 24) = *(_QWORD *)(v41 + 24) & 0xC000000000000000uLL | 0x10000;
LABEL_89:
            _InterlockedAnd64((volatile signed __int64 *)(v41 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            goto LABEL_56;
          }
          v80 = v47;
        }
        v48 = 0;
        if ( MiPteInShadowRange(v10) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v48 = 1;
            if ( !HIBYTE(word_140C51864) )
            {
              v49 = (v46 & 1) == 0;
LABEL_85:
              if ( !v49 )
                v46 |= 0x8000000000000000uLL;
            }
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
            v49 = (v46 & 1) == 0;
            goto LABEL_85;
          }
        }
        *(_QWORD *)v10 = v46;
        if ( v48 )
          MiWritePteShadow(v10, v46);
        goto LABEL_89;
      }
      if ( (v19 & 1) == 0 )
      {
        if ( (v19 & 0x400) == 0 )
        {
          if ( (v19 & 0x800) == 0 )
          {
            v80 = v19 & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
            *(_QWORD *)v10 = v80;
            goto LABEL_25;
          }
          v57 = MiLockTransitionLeafPageEx(v10, 0LL, 0);
          if ( v57 )
          {
            v58 = MI_READ_PTE_LOCK_FREE(v10);
            v59 = 768LL;
            v60 = -225LL;
            goto LABEL_105;
          }
LABEL_98:
          v10 -= 8LL;
          goto LABEL_25;
        }
LABEL_97:
        MiFlushTbList((__int64)v89);
        MiUnlockPageTableInternal(SessionVm, v15);
        MiUnlockWorkingSetShared(SessionVm, v18);
        MmAccessFault(0LL, (__int64)(v10 << 25) >> 16, 0, 0LL);
        MiLockWorkingSetShared(SessionVm);
        MiLockPageTableInternal(SessionVm, v15, 0LL, v53);
        goto LABEL_98;
      }
      v50 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v80);
      v51 = 0xFFFFDE0000000028uLL;
      if ( *(__int64 *)(48 * ((v50 >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFD8LL) < 0 )
      {
        MiFlushTbList((__int64)v89);
        v54 = MiCopyOnWrite((__int64)(v10 << 25) >> 16, v10, 0xFFFFFFFFFFFFFFFFuLL, 0);
        v10 -= 8LL;
        v55 = v54;
        if ( v54 < 0 )
        {
          MiUnlockPageTableInternal(SessionVm, v15);
          MiUnlockWorkingSetShared(SessionVm, v78);
          MiCopyOnWriteCheckConditions(SessionVm, v55);
          MiLockWorkingSetShared(SessionVm);
          MiLockPageTableInternal(SessionVm, v15, 0LL, v56);
        }
        goto LABEL_24;
      }
      if ( dword_140C52B68 )
        MI_WSLE_LOG_ACCESS(SessionVm, (_BYTE *)v10);
      if ( (MiGetWsleContents(v51, (__int64)(v10 << 25) >> 16) & 0xF) == 8 )
        goto LABEL_24;
      v52 = MiTbFlushType(SessionVm);
      v90[2] = 0LL;
      v90[3] = 0LL;
      LODWORD(v90[0]) = v52;
      WORD2(v90[0]) = 4;
      v90[1] = 20LL;
      MiInsertTbFlushEntry((__int64)v90, (__int64)(v10 << 25) >> 16, 1LL, 0);
      v18 = v78;
      if ( !MiFreeWsleList(SessionVm, (__int64)v90, 0) )
        goto LABEL_98;
LABEL_25:
      v15 = v87;
      v10 += 8LL;
      v14 = v81;
      if ( v10 > v86 )
        goto LABEL_26;
    }
    MiFlushTbList((__int64)v89);
    MiUnlockPageTableInternal(SessionVm, v15);
LABEL_8:
    v15 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v87 = v15;
    MiLockPageTableInternal(SessionVm, v15, 0LL, v17);
    goto LABEL_9;
  }
LABEL_26:
  MiFlushTbList((__int64)v89);
  if ( v15 )
    MiUnlockPageTableInternal(SessionVm, v15);
  MiUnlockWorkingSetShared(SessionVm, v18);
  return 1LL;
}
