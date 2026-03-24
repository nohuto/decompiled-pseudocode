/*
 * XREFs of MiTrimSharedPageFromViews @ 0x1402EFC44
 * Callers:
 *     MiTrimSection @ 0x1402EF6E0 (MiTrimSection.c)
 * Callees:
 *     MmGetSessionById @ 0x140206410 (MmGetSessionById.c)
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219CB0 (MiLockWorkingSetShared.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022EE10 (KeAcquireInStackQueuedSpinLock.c)
 *     MiLocateAddress @ 0x14025B810 (MiLocateAddress.c)
 *     KeForceAttachProcess @ 0x14025C278 (KeForceAttachProcess.c)
 *     MiGetWsleContents @ 0x140270D40 (MiGetWsleContents.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MmDetachSession @ 0x140298F40 (MmDetachSession.c)
 *     MmAttachSession @ 0x140298FE0 (MmAttachSession.c)
 *     KeForceDetachProcess @ 0x1402BA388 (KeForceDetachProcess.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     MiPrepareAttachThread @ 0x1402EF3D4 (MiPrepareAttachThread.c)
 *     MiAttachThreadDone @ 0x1402EF448 (MiAttachThreadDone.c)
 *     ExfReleasePushLockShared @ 0x1402F1470 (ExfReleasePushLockShared.c)
 *     MiGetAnyMultiplexedVm @ 0x1402FD0FC (MiGetAnyMultiplexedVm.c)
 *     MiLockPageInline @ 0x1402FFE30 (MiLockPageInline.c)
 *     MiLockLowestValidPageTable @ 0x1403055C0 (MiLockLowestValidPageTable.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140309080 (MI_WSLE_LOG_ACCESS.c)
 *     MiWriteValidPteNewProtection @ 0x14030FA00 (MiWriteValidPteNewProtection.c)
 *     MiSynchronizeSystemVa @ 0x140311C40 (MiSynchronizeSystemVa.c)
 *     MiGetSystemCacheReverseMap @ 0x140311FB0 (MiGetSystemCacheReverseMap.c)
 *     MiUnlockSystemVa @ 0x1403120FC (MiUnlockSystemVa.c)
 *     MiGetSessionVm @ 0x14031219C (MiGetSessionVm.c)
 *     MiStartingOffset @ 0x14031E410 (MiStartingOffset.c)
 *     MiFreeWsleList @ 0x140327320 (MiFreeWsleList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x140330B40 (MiGetProtoPteAddress.c)
 *     MiInsertTbFlushEntry @ 0x140335D70 (MiInsertTbFlushEntry.c)
 *     MiTbFlushType @ 0x140337208 (MiTbFlushType.c)
 *     MiFlushTbList @ 0x14033B520 (MiFlushTbList.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     memset @ 0x140414200 (memset.c)
 *     MiReplaceLockedPage @ 0x14053D76C (MiReplaceLockedPage.c)
 *     MmQuitNextSession @ 0x1406C3770 (MmQuitNextSession.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiTrimSharedPageFromViews(_QWORD *a1, int a2, char a3, __int64 a4, _BYTE *a5)
{
  struct _KTHREAD *CurrentThread; // r10
  __int64 **v8; // r11
  unsigned int v9; // r8d
  __int64 v10; // r13
  unsigned __int64 v11; // rdi
  unsigned __int64 i; // rdx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r9
  _KPROCESS *v15; // r12
  __int64 v16; // rsi
  unsigned __int64 v17; // r14
  int v18; // esi
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v23; // eax
  unsigned __int64 v24; // r14
  __int64 v25; // rax
  __int64 **v26; // r12
  unsigned __int64 v27; // rsi
  unsigned __int64 v28; // r14
  unsigned int v29; // eax
  __int64 v30; // rcx
  _KPROCESS *SessionById; // rax
  int v32; // eax
  volatile signed __int64 *v33; // rdi
  struct _KTHREAD *v34; // rsi
  __int64 v35; // rax
  int v36; // ecx
  unsigned __int64 v37; // r15
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 SessionVm; // rax
  int v43; // r8d
  __int64 v44; // rdx
  __int64 v45; // r8
  int SystemRegionType; // eax
  _QWORD *SystemCacheReverseMap; // rdi
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // rcx
  __int64 v50; // rdx
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rcx
  bool v53; // zf
  int v54; // eax
  __int64 **Address; // rax
  int v56; // edx
  __int64 v57; // r8
  unsigned __int64 v58; // r8
  __int64 ProtoPteAddress; // rax
  __int64 v60; // rdi
  __int64 v61; // r15
  char v62; // di
  unsigned __int64 v63; // rsi
  int v64; // eax
  __int64 v65; // rcx
  unsigned __int8 v66; // al
  char v67; // cl
  unsigned __int64 v68; // rdi
  unsigned __int8 v69; // al
  struct _KPRCB *v70; // r10
  _DWORD *v71; // r9
  int v72; // eax
  __int64 v73; // rax
  int v74; // ecx
  char v75; // al
  __int64 v76; // r11
  __int64 v77; // rax
  int locked; // eax
  volatile signed __int64 *v79; // rdi
  __int64 v80; // rdi
  _QWORD *v81; // rbx
  struct _DMA_ADAPTER *v82; // rcx
  struct _KTHREAD *v84; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v85; // [rsp+38h] [rbp-C8h]
  struct _DMA_ADAPTER *DmaAdapter; // [rsp+40h] [rbp-C0h]
  _QWORD *v87; // [rsp+48h] [rbp-B8h]
  __int64 v88; // [rsp+50h] [rbp-B0h]
  __int64 v89; // [rsp+50h] [rbp-B0h]
  unsigned int v90; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v91; // [rsp+60h] [rbp-A0h]
  unsigned __int64 valid; // [rsp+68h] [rbp-98h]
  __int64 *v93; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v94; // [rsp+78h] [rbp-88h]
  int v95; // [rsp+80h] [rbp-80h]
  int v96; // [rsp+84h] [rbp-7Ch]
  int v97; // [rsp+88h] [rbp-78h]
  int v98; // [rsp+8Ch] [rbp-74h]
  __int64 v99; // [rsp+90h] [rbp-70h]
  PVOID P; // [rsp+98h] [rbp-68h]
  __int64 v101; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v102; // [rsp+A8h] [rbp-58h]
  _KPROCESS *v103; // [rsp+B0h] [rbp-50h]
  _BYTE *v104; // [rsp+B8h] [rbp-48h]
  __int64 v105; // [rsp+C0h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v107[16]; // [rsp+E0h] [rbp-20h] BYREF
  _OWORD v108[3]; // [rsp+160h] [rbp+60h] BYREF
  _QWORD v109[24]; // [rsp+190h] [rbp+90h] BYREF
  _QWORD v110[24]; // [rsp+250h] [rbp+150h] BYREF

  v104 = a5;
  v98 = a2;
  v101 = 0LL;
  v105 = 0LL;
  v93 = 0LL;
  v99 = a4;
  memset(v108, 0, sizeof(v108));
  memset(v110, 0, 0xB8uLL);
  memset(v109, 0, 0xB8uLL);
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(v107, 0, sizeof(v107));
  CurrentThread = KeGetCurrentThread();
  v8 = 0LL;
  v85 = 17;
  v9 = 0;
  v84 = CurrentThread;
  v10 = 0LL;
  v90 = 0;
  v11 = 0LL;
  valid = 0LL;
  if ( !a1 )
    return v9;
  while ( 1 )
  {
    i = (unsigned __int64)a1;
    v103 = 0LL;
    a1 = (_QWORD *)*a1;
    v13 = -1LL;
    P = (PVOID)i;
    v14 = 0LL;
    v87 = a1;
    v15 = *(_KPROCESS **)(i + 8);
    v16 = *(_QWORD *)(i + 32);
    v17 = *(_QWORD *)(i + 16);
    DmaAdapter = (struct _DMA_ADAPTER *)v15;
    v94 = *(_QWORD *)(i + 24);
    v88 = v16;
    v102 = 0LL;
    v97 = 0;
    v96 = 0;
    if ( v15 && v15 != KeGetCurrentThread()->ApcState.Process )
    {
      KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
      v97 = MiPrepareAttachThread((__int64)v15, (__int64)&v15[1].ActiveProcessorsPadding[6]);
      v18 = v97;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v23 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v53 = (v23 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v23;
            if ( v53 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      if ( v18 )
      {
        KeForceAttachProcess((ULONG_PTR)v15, (__int64)v108);
        v11 = valid;
LABEL_13:
        v8 = 0LL;
LABEL_14:
        v24 = v17 - 4096;
        v25 = v88 - 4096;
        v26 = 0LL;
        v27 = v24 >> 12;
        v28 = v24 + 4096;
        if ( v28 < v94 )
        {
          while ( 1 )
          {
            v91 = ++v27;
            v89 = v25 + 4096;
            if ( !v10 || ((v28 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL == v11 )
            {
              v37 = valid;
            }
            else
            {
              if ( HIDWORD(v110[1]) != (_DWORD)v8 )
              {
                v35 = MiFreeWsleList(v10, v110, 0LL);
                v36 = v90;
                if ( v35 )
                  v36 = 277;
                v90 = v36;
              }
              MiFlushTbList(v109);
              if ( DmaAdapter )
              {
                if ( v11 )
                  MiUnlockPageTableInternal(v10, v11);
                MiUnlockWorkingSetShared(v10, v85);
              }
              else
              {
                MiUnlockSystemVa(v107);
              }
              v8 = 0LL;
              v37 = 0LL;
              valid = 0LL;
              v10 = 0LL;
            }
            if ( !DmaAdapter )
              break;
            v95 = (int)v8;
            if ( !v10 )
            {
              v10 = (__int64)&DmaAdapter[104];
              if ( (a3 & 1) != 0 )
              {
                v54 = MiTbFlushType(&DmaAdapter[104], i, v13);
                WORD2(v109[0]) = 0;
                LODWORD(v109[0]) = v54;
                v109[1] = 20LL;
                v109[2] = v8;
                v109[3] = v8;
              }
              v26 = v8;
              v85 = MiLockWorkingSetShared(v10, i, v13, (_DWORD *)v14);
              v8 = 0LL;
            }
            if ( v26
              && v27 >= (*((unsigned int *)v26 + 6) | ((unsigned __int64)*((unsigned __int8 *)v26 + 32) << 32))
              && v27 <= (*((unsigned int *)v26 + 7) | ((unsigned __int64)*((unsigned __int8 *)v26 + 33) << 32)) )
            {
              v57 = v99;
            }
            else
            {
              Address = MiLocateAddress(v28);
              v26 = Address;
              if ( !Address )
                goto LABEL_136;
              v56 = *((_DWORD *)Address + 12);
              if ( (v56 & 0x100000) != 0 )
                goto LABEL_136;
              v57 = v99;
              if ( (*(_DWORD *)(v99 + 56) & 0x20) == 0 && (v56 & 0x70) != 0 )
                goto LABEL_136;
              v93 = Address[9];
              if ( *v93 != v99 )
                goto LABEL_136;
            }
            if ( (*(_DWORD *)(v57 + 56) & 0x20) != 0 )
            {
              v58 = (unsigned __int64)v26[10];
              if ( (unsigned __int64)v104 < v58 )
                goto LABEL_136;
              v14 = *((unsigned int *)v26 + 6);
              if ( (unsigned __int64)v104 >= v58
                                           - 8 * (v14 | ((unsigned __int64)*((unsigned __int8 *)v26 + 32) << 32))
                                           + 8
                                           * ((*((unsigned int *)v26 + 7) | ((unsigned __int64)*((unsigned __int8 *)v26
                                                                                               + 33) << 32))
                                            + 1) )
                goto LABEL_136;
              v28 = ((__int64)&v104[-v58] >> 3 << 12)
                  + ((v14 | ((unsigned __int64)*((unsigned __int8 *)v26 + 32) << 32)) << 12);
            }
            else
            {
              ProtoPteAddress = MiGetProtoPteAddress(v26, v28 >> 12, 0LL, &v93);
              if ( !ProtoPteAddress || !v93 || v89 != MiStartingOffset(v93, ProtoPteAddress, 0xFFFFFFFFLL) )
                goto LABEL_136;
              v8 = 0LL;
            }
            v13 = 0x7FFFFFFFF8LL;
            i = ((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v60 = ((i >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            if ( v37 != v60 )
            {
              if ( v37 )
              {
                v28 -= 4096LL;
                --v27;
                v25 = v89 - 4096;
                goto LABEL_135;
              }
              valid = MiLockLowestValidPageTable(v10, i, &v105);
              v53 = valid == v60;
LABEL_113:
              if ( !v53 )
                goto LABEL_136;
            }
LABEL_114:
            v61 = ((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v101 = MI_READ_PTE_LOCK_FREE(v61);
            v62 = v101;
            if ( (v101 & 1) != 0 )
            {
              v63 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v101) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
              if ( (a3 & 8) == 0 || (v62 & 0x42) == 0 && (*(_BYTE *)(v63 + 34) & 0x10) == 0 )
              {
                v64 = MI_PFN_IS_PROTO(v63);
                v8 = 0LL;
                if ( !v64 )
                  goto LABEL_159;
                i &= 0x400u;
                if ( (a3 & 1) != 0 )
                {
                  if ( !i || (v62 & 0x42) == 0 )
                    goto LABEL_159;
                  v66 = MiLockPageInline(v65, i, v13);
                  v67 = *(_BYTE *)(v63 + 34);
                  v68 = v66;
                  if ( (v67 & 0x10) == 0 )
                    *(_BYTE *)(v63 + 34) = v67 | 0x10;
                  _InterlockedAnd64((volatile signed __int64 *)(v63 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  if ( KiIrqlFlags )
                  {
                    if ( (KiIrqlFlags & 1) != 0 )
                    {
                      v69 = KeGetCurrentIrql();
                      if ( v69 <= 0xFu && (unsigned __int8)v68 <= 0xFu && v69 >= 2u )
                      {
                        v70 = KeGetCurrentPrcb();
                        v71 = v70->SchedulerAssist;
                        v72 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v68 + 1));
                        v53 = (v72 & v71[5]) == 0;
                        v71[5] &= v72;
                        if ( v53 )
                          KiRemoveSystemWorkPriorityKick(v70);
                      }
                    }
                  }
                  __writecr8(v68);
                  v101 &= 0xFFFFFFFFFFFFFFBDuLL;
                  MiWriteValidPteNewProtection(v61, v101);
                  MiInsertTbFlushEntry(v109, v28, 1LL, 0LL);
                }
                else
                {
                  if ( !i && (*(_DWORD *)(v99 + 56) & 0x80u) != 0 )
                    goto LABEL_159;
                  v75 = MiGetWsleContents(v65, v28) & 0xF;
                  if ( *((_DWORD *)P + 11) == 3 && v75 == 9 )
                    goto LABEL_159;
                  if ( v75 == 8 || (a3 & 0x10) != 0 )
                  {
                    if ( (a3 & 8) == 0 && v98 != (_DWORD)v8 && (*(_BYTE *)(v10 + 184) & 7) != 2 )
                    {
                      locked = MiReplaceLockedPage(v10, v63, v28, (unsigned __int8)(a3 & 0x40) << 10, v95);
                      v8 = 0LL;
                      if ( locked )
                        goto LABEL_159;
                    }
LABEL_158:
                    v90 = 277;
LABEL_159:
                    v27 = v91;
                    goto LABEL_134;
                  }
                  if ( dword_140C4E828 != (_DWORD)v8 )
                  {
                    MI_WSLE_LOG_ACCESS(v10, v61);
                    LODWORD(v8) = 0;
                  }
                  if ( HIDWORD(v110[1]) == (_DWORD)v8 )
                  {
                    LODWORD(v110[0]) = MiTbFlushType(v10, i, v13);
                    v110[1] = 20LL;
                    WORD2(v110[0]) = 4;
                    v110[2] = v76;
                    v110[3] = v76;
                  }
                  MiInsertTbFlushEntry(v110, v28, 1LL, 0LL);
                  if ( HIDWORD(v110[1]) == LODWORD(v110[1]) )
                  {
                    v77 = MiFreeWsleList(v10, v110, 0LL);
                    v8 = 0LL;
                    if ( v77 )
                      goto LABEL_158;
                    goto LABEL_159;
                  }
                }
              }
              v27 = v91;
            }
            v8 = 0LL;
LABEL_134:
            v25 = v89;
LABEL_135:
            v28 += 4096LL;
            if ( v28 >= v94 )
              goto LABEL_136;
            v11 = valid;
          }
          v95 = 1;
          if ( v10 )
          {
LABEL_74:
            SystemRegionType = MiGetSystemRegionType(v28);
            if ( *((_DWORD *)P + 11) )
              goto LABEL_114;
            if ( SystemRegionType != 8 )
              goto LABEL_136;
            SystemCacheReverseMap = (_QWORD *)MiGetSystemCacheReverseMap(v28);
            if ( !SystemCacheReverseMap )
              goto LABEL_136;
            v48 = *(_QWORD *)(MiGetSystemCacheReverseMap(v28) + 24);
            v49 = v48 & 0xFFFFFFFFFFFFFFFEuLL;
            if ( (v48 & 1) == 0 )
              v49 = v48;
            if ( v10 != *(_QWORD *)(qword_140C4E648 + 8LL * (*(_WORD *)(*(_QWORD *)v49 + 60LL) & 0x3FF)) + 7232LL )
              goto LABEL_136;
            v50 = SystemCacheReverseMap[2];
            if ( !v50 )
              goto LABEL_136;
            v51 = SystemCacheReverseMap[3];
            v93 = (__int64 *)v51;
            if ( (v51 & 1) != 0 )
            {
              v51 &= ~1uLL;
              v93 = (__int64 *)v51;
            }
            if ( *(_QWORD *)v51 != v99 )
            {
LABEL_136:
              a1 = v87;
              goto LABEL_137;
            }
            v52 = SystemCacheReverseMap[4];
            if ( (v50 & 3) == 0 )
              v52 = 4 * (v52 & 0xFFFFFFFFFFFF0000uLL);
            v53 = v52 + (v28 & 0x3FFFF) == v89;
            goto LABEL_113;
          }
          v38 = MiGetSystemRegionType(v28);
          switch ( v38 )
          {
            case 8:
              v41 = 0LL;
              break;
            case 1:
              SessionVm = MiGetSessionVm(v40, v39, 1LL);
LABEL_69:
              v10 = SessionVm;
              if ( !SessionVm )
              {
LABEL_169:
                v34 = v84;
                a1 = v87;
                goto LABEL_170;
              }
              if ( !(unsigned int)MiSynchronizeSystemVa(SessionVm, v28, v43, 0, (__int64)v107) )
                goto LABEL_136;
              v10 = v107[3];
              if ( (a3 & 1) != 0 )
              {
                LODWORD(v109[0]) = MiTbFlushType(v107[3], v44, v45);
                v109[1] = 20LL;
                WORD2(v109[0]) = 0;
                v109[2] = 0LL;
                v109[3] = 0LL;
              }
              valid = ((v28 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
              goto LABEL_74;
            case 6:
              v41 = 2LL;
              break;
            case 12:
              v41 = 1LL;
              break;
            default:
              goto LABEL_169;
          }
          SessionVm = MiGetAnyMultiplexedVm(v41);
          goto LABEL_69;
        }
LABEL_137:
        v15 = (_KPROCESS *)DmaAdapter;
        goto LABEL_138;
      }
      goto LABEL_138;
    }
    v29 = *(_DWORD *)(i + 44);
    if ( v29 < 2 )
      goto LABEL_14;
    v30 = *(unsigned int *)(i + 40);
    if ( (_DWORD)v30 == -1 )
    {
      v14 = (unsigned __int64)&unk_140C4CD68;
    }
    else
    {
      if ( (_DWORD)v30 == -2 )
        goto LABEL_25;
      SessionById = (_KPROCESS *)MmGetSessionById(v30, i);
      v103 = SessionById;
      if ( !SessionById )
        goto LABEL_138;
      if ( (int)MmAttachSession(SessionById, (__int64)v108) < 0 )
      {
        MmQuitNextSession(v103);
        v103 = 0LL;
        goto LABEL_138;
      }
      CurrentThread = v84;
      v29 = *((_DWORD *)P + 11);
      v14 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5] + 192;
    }
    v102 = v14;
LABEL_25:
    if ( v29 == 3 )
    {
      v32 = MiGetSystemRegionType(v17);
      if ( *((_DWORD *)P + 10) == -2 )
      {
        if ( v32 != 1 )
          goto LABEL_13;
      }
      else if ( v32 == 1 )
      {
        goto LABEL_13;
      }
    }
    else if ( (a3 & 6) == 0 )
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockSharedEx(*(_QWORD *)(v14 + 8), 0LL);
      v14 = v102;
      v8 = 0LL;
      for ( i = *(_QWORD *)(v102 + 16); ; i = *(_QWORD *)i )
      {
        while ( 1 )
        {
          if ( !i )
            goto LABEL_41;
          v13 = *(_QWORD *)(i + 88) & 0xFFFFFFFFFFFFF000uLL;
          if ( v17 < v13 + *(_QWORD *)(i + 32) )
            break;
          i = *(_QWORD *)(i + 8);
        }
        if ( v17 >= v13 )
          break;
      }
      v93 = *(__int64 **)(i + 48);
      if ( *v93 != v99 || v17 + (*(_QWORD *)(i + 24) << 12) - v16 != v13 )
      {
LABEL_41:
        v33 = *(volatile signed __int64 **)(v102 + 8);
        if ( _InterlockedCompareExchange64(v33, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v33);
        KeAbPostRelease((ULONG_PTR)v33);
        v34 = v84;
        KiLeaveGuardedRegionUnsafe(v84);
        goto LABEL_139;
      }
      v96 = 1;
      goto LABEL_14;
    }
LABEL_138:
    v34 = v84;
LABEL_139:
    if ( v10 )
    {
      if ( HIDWORD(v110[1]) )
      {
        v73 = MiFreeWsleList(v10, v110, 0LL);
        v74 = v90;
        if ( v73 )
          v74 = 277;
        v90 = v74;
      }
      MiFlushTbList(v109);
      if ( v15 )
      {
        if ( valid )
          MiUnlockPageTableInternal(v10, valid);
        MiUnlockWorkingSetShared(v10, v85);
      }
      else
      {
        MiUnlockSystemVa(v107);
      }
      valid = 0LL;
      v10 = 0LL;
    }
LABEL_170:
    if ( v96 == 1 )
    {
      v79 = *(volatile signed __int64 **)(v102 + 8);
      if ( _InterlockedCompareExchange64(v79, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v79);
      KeAbPostRelease((ULONG_PTR)v79);
      KiLeaveGuardedRegionUnsafe(v34);
    }
    v80 = (__int64)v103;
    if ( v103 )
    {
      MmDetachSession((__int64)v103, (__int64)v108);
      MmQuitNextSession(v80);
    }
    else if ( v97 == 1 )
    {
      KeForceDetachProcess(v108, 0);
      MiAttachThreadDone((__int64)&DmaAdapter[104]);
    }
    if ( DmaAdapter )
      HalPutDmaAdapter(DmaAdapter);
    ExFreePoolWithTag(P, 0);
    if ( v98 == 1 && (*v104 & 1) == 0 )
      break;
    v8 = 0LL;
    if ( !a1 )
      return v90;
    v11 = valid;
    CurrentThread = v84;
  }
  while ( a1 )
  {
    v81 = a1;
    a1 = (_QWORD *)*a1;
    v82 = (struct _DMA_ADAPTER *)v81[1];
    if ( v82 )
      HalPutDmaAdapter(v82);
    ExFreePoolWithTag(v81, 0);
  }
  return 0LL;
}
