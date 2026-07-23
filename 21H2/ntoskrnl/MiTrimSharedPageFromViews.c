/*
 * XREFs of MiTrimSharedPageFromViews @ 0x1402FA994
 * Callers:
 *     MiTrimSection @ 0x1402FA430 (MiTrimSection.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MmDetachSession @ 0x140215920 (MmDetachSession.c)
 *     MmAttachSession @ 0x1402159C0 (MmAttachSession.c)
 *     KeForceDetachProcess @ 0x140238598 (KeForceDetachProcess.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     MiGetWsleContents @ 0x14025ECE0 (MiGetWsleContents.c)
 *     MiLocateAddress @ 0x14027CD80 (MiLocateAddress.c)
 *     KeForceAttachProcess @ 0x14027D7E8 (KeForceAttachProcess.c)
 *     MmGetSessionById @ 0x1402AAD40 (MmGetSessionById.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     MiPrepareAttachThread @ 0x1402FA124 (MiPrepareAttachThread.c)
 *     MiAttachThreadDone @ 0x1402FA198 (MiAttachThreadDone.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     MiGetAnyMultiplexedVm @ 0x140307E4C (MiGetAnyMultiplexedVm.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiLockLowestValidPageTable @ 0x140310310 (MiLockLowestValidPageTable.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140313DD0 (MI_WSLE_LOG_ACCESS.c)
 *     MiWriteValidPteNewProtection @ 0x14031A750 (MiWriteValidPteNewProtection.c)
 *     MiSynchronizeSystemVa @ 0x14031C990 (MiSynchronizeSystemVa.c)
 *     MiGetSystemCacheReverseMap @ 0x14031CD00 (MiGetSystemCacheReverseMap.c)
 *     MiUnlockSystemVa @ 0x14031CE4C (MiUnlockSystemVa.c)
 *     MiGetSessionVm @ 0x14031CEEC (MiGetSessionVm.c)
 *     MiStartingOffset @ 0x140329160 (MiStartingOffset.c)
 *     MiFreeWsleList @ 0x140332070 (MiFreeWsleList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x14033B890 (MiGetProtoPteAddress.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MiTbFlushType @ 0x140341F58 (MiTbFlushType.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiReplaceLockedPage @ 0x14053D9AC (MiReplaceLockedPage.c)
 *     MmQuitNextSession @ 0x140622350 (MmQuitNextSession.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
  ULONG_PTR SessionById; // rax
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
  int SystemRegionType; // eax
  _QWORD *SystemCacheReverseMap; // rdi
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // rcx
  __int64 v48; // rdx
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rcx
  bool v51; // zf
  int v52; // eax
  __int64 **Address; // rax
  int v54; // edx
  __int64 v55; // r8
  unsigned __int64 v56; // r8
  __int64 ProtoPteAddress; // rax
  __int64 v58; // rdi
  __int64 v59; // r15
  char v60; // di
  unsigned __int64 v61; // rsi
  int v62; // eax
  __int64 v63; // rcx
  unsigned __int8 v64; // al
  char v65; // cl
  unsigned __int64 v66; // rdi
  unsigned __int8 v67; // al
  struct _KPRCB *v68; // r10
  _DWORD *v69; // r9
  int v70; // eax
  __int64 v71; // rax
  int v72; // ecx
  char v73; // al
  __int64 v74; // r11
  __int64 v75; // rax
  int locked; // eax
  volatile signed __int64 *v77; // rdi
  __int64 v78; // rdi
  _QWORD *v79; // rbx
  struct _DMA_ADAPTER *v80; // rcx
  struct _KTHREAD *v82; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v83; // [rsp+38h] [rbp-C8h]
  struct _DMA_ADAPTER *DmaAdapter; // [rsp+40h] [rbp-C0h]
  _QWORD *v85; // [rsp+48h] [rbp-B8h]
  __int64 v86; // [rsp+50h] [rbp-B0h]
  __int64 v87; // [rsp+50h] [rbp-B0h]
  unsigned int v88; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v89; // [rsp+60h] [rbp-A0h]
  unsigned __int64 valid; // [rsp+68h] [rbp-98h]
  __int64 *v91; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v92; // [rsp+78h] [rbp-88h]
  int v93; // [rsp+80h] [rbp-80h]
  int v94; // [rsp+84h] [rbp-7Ch]
  int v95; // [rsp+88h] [rbp-78h]
  int v96; // [rsp+8Ch] [rbp-74h]
  __int64 v97; // [rsp+90h] [rbp-70h]
  PVOID P; // [rsp+98h] [rbp-68h]
  __int64 v99; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v100; // [rsp+A8h] [rbp-58h]
  ULONG_PTR v101; // [rsp+B0h] [rbp-50h]
  _BYTE *v102; // [rsp+B8h] [rbp-48h]
  __int64 v103; // [rsp+C0h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v105[16]; // [rsp+E0h] [rbp-20h] BYREF
  _OWORD v106[3]; // [rsp+160h] [rbp+60h] BYREF
  _QWORD v107[24]; // [rsp+190h] [rbp+90h] BYREF
  _QWORD v108[24]; // [rsp+250h] [rbp+150h] BYREF

  v102 = a5;
  v96 = a2;
  v99 = 0LL;
  v103 = 0LL;
  v91 = 0LL;
  v97 = a4;
  memset(v106, 0, sizeof(v106));
  memset(v108, 0, 0xB8uLL);
  memset(v107, 0, 0xB8uLL);
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(v105, 0, sizeof(v105));
  CurrentThread = KeGetCurrentThread();
  v8 = 0LL;
  v83 = 17;
  v9 = 0;
  v82 = CurrentThread;
  v10 = 0LL;
  v88 = 0;
  v11 = 0LL;
  valid = 0LL;
  if ( !a1 )
    return v9;
  while ( 1 )
  {
    i = (unsigned __int64)a1;
    v101 = 0LL;
    a1 = (_QWORD *)*a1;
    v13 = -1LL;
    P = (PVOID)i;
    v14 = 0LL;
    v85 = a1;
    v15 = *(_KPROCESS **)(i + 8);
    v16 = *(_QWORD *)(i + 32);
    v17 = *(_QWORD *)(i + 16);
    DmaAdapter = (struct _DMA_ADAPTER *)v15;
    v92 = *(_QWORD *)(i + 24);
    v86 = v16;
    v100 = 0LL;
    v95 = 0;
    v94 = 0;
    if ( v15 && v15 != KeGetCurrentThread()->ApcState.Process )
    {
      KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
      v95 = MiPrepareAttachThread((__int64)v15, (__int64)&v15[1].ActiveProcessorsPadding[6]);
      v18 = v95;
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
            v51 = (v23 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v23;
            if ( v51 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      if ( v18 )
      {
        KeForceAttachProcess((ULONG_PTR)v15, (__int64)v106);
        v11 = valid;
LABEL_13:
        v8 = 0LL;
LABEL_14:
        v24 = v17 - 4096;
        v25 = v86 - 4096;
        v26 = 0LL;
        v27 = v24 >> 12;
        v28 = v24 + 4096;
        if ( v28 < v92 )
        {
          while ( 1 )
          {
            v89 = ++v27;
            v87 = v25 + 4096;
            if ( !v10 || ((v28 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL == v11 )
            {
              v37 = valid;
            }
            else
            {
              if ( HIDWORD(v108[1]) != (_DWORD)v8 )
              {
                v35 = MiFreeWsleList(v10, v108, 0LL);
                v36 = v88;
                if ( v35 )
                  v36 = 277;
                v88 = v36;
              }
              MiFlushTbList(v107);
              if ( DmaAdapter )
              {
                if ( v11 )
                  MiUnlockPageTableInternal(v10, v11);
                MiUnlockWorkingSetShared(v10, v83);
              }
              else
              {
                MiUnlockSystemVa(v105);
              }
              v8 = 0LL;
              v37 = 0LL;
              valid = 0LL;
              v10 = 0LL;
            }
            if ( !DmaAdapter )
              break;
            v93 = (int)v8;
            if ( !v10 )
            {
              v10 = (__int64)&DmaAdapter[104];
              if ( (a3 & 1) != 0 )
              {
                v52 = MiTbFlushType(&DmaAdapter[104]);
                WORD2(v107[0]) = 0;
                LODWORD(v107[0]) = v52;
                v107[1] = 20LL;
                v107[2] = v8;
                v107[3] = v8;
              }
              v26 = v8;
              v83 = MiLockWorkingSetShared(v10, i, v13, (_DWORD *)v14);
              v8 = 0LL;
            }
            if ( v26
              && v27 >= (*((unsigned int *)v26 + 6) | ((unsigned __int64)*((unsigned __int8 *)v26 + 32) << 32))
              && v27 <= (*((unsigned int *)v26 + 7) | ((unsigned __int64)*((unsigned __int8 *)v26 + 33) << 32)) )
            {
              v55 = v97;
            }
            else
            {
              Address = MiLocateAddress(v28);
              v26 = Address;
              if ( !Address )
                goto LABEL_136;
              v54 = *((_DWORD *)Address + 12);
              if ( (v54 & 0x100000) != 0 )
                goto LABEL_136;
              v55 = v97;
              if ( (*(_DWORD *)(v97 + 56) & 0x20) == 0 && (v54 & 0x70) != 0 )
                goto LABEL_136;
              v91 = Address[9];
              if ( *v91 != v97 )
                goto LABEL_136;
            }
            if ( (*(_DWORD *)(v55 + 56) & 0x20) != 0 )
            {
              v56 = (unsigned __int64)v26[10];
              if ( (unsigned __int64)v102 < v56 )
                goto LABEL_136;
              v14 = *((unsigned int *)v26 + 6);
              if ( (unsigned __int64)v102 >= v56
                                           - 8 * (v14 | ((unsigned __int64)*((unsigned __int8 *)v26 + 32) << 32))
                                           + 8
                                           * ((*((unsigned int *)v26 + 7) | ((unsigned __int64)*((unsigned __int8 *)v26
                                                                                               + 33) << 32))
                                            + 1) )
                goto LABEL_136;
              v28 = ((__int64)&v102[-v56] >> 3 << 12)
                  + ((v14 | ((unsigned __int64)*((unsigned __int8 *)v26 + 32) << 32)) << 12);
            }
            else
            {
              ProtoPteAddress = MiGetProtoPteAddress(v26, v28 >> 12, 0LL, &v91);
              if ( !ProtoPteAddress || !v91 || v87 != MiStartingOffset(v91, ProtoPteAddress, 0xFFFFFFFFLL) )
                goto LABEL_136;
              v8 = 0LL;
            }
            v13 = 0x7FFFFFFFF8LL;
            i = ((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v58 = ((i >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            if ( v37 != v58 )
            {
              if ( v37 )
              {
                v28 -= 4096LL;
                --v27;
                v25 = v87 - 4096;
                goto LABEL_135;
              }
              valid = MiLockLowestValidPageTable(v10, i, &v103);
              v51 = valid == v58;
LABEL_113:
              if ( !v51 )
                goto LABEL_136;
            }
LABEL_114:
            v59 = ((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v99 = MI_READ_PTE_LOCK_FREE(v59);
            v60 = v99;
            if ( (v99 & 1) != 0 )
            {
              v61 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v99) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
              if ( (a3 & 8) == 0 || (v60 & 0x42) == 0 && (*(_BYTE *)(v61 + 34) & 0x10) == 0 )
              {
                v62 = MI_PFN_IS_PROTO(v61);
                v8 = 0LL;
                if ( !v62 )
                  goto LABEL_159;
                i &= 0x400u;
                if ( (a3 & 1) != 0 )
                {
                  if ( !i || (v60 & 0x42) == 0 )
                    goto LABEL_159;
                  v64 = MiLockPageInline(v63);
                  v65 = *(_BYTE *)(v61 + 34);
                  v66 = v64;
                  if ( (v65 & 0x10) == 0 )
                    *(_BYTE *)(v61 + 34) = v65 | 0x10;
                  _InterlockedAnd64((volatile signed __int64 *)(v61 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  if ( KiIrqlFlags )
                  {
                    if ( (KiIrqlFlags & 1) != 0 )
                    {
                      v67 = KeGetCurrentIrql();
                      if ( v67 <= 0xFu && (unsigned __int8)v66 <= 0xFu && v67 >= 2u )
                      {
                        v68 = KeGetCurrentPrcb();
                        v69 = v68->SchedulerAssist;
                        v70 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v66 + 1));
                        v51 = (v70 & v69[5]) == 0;
                        v69[5] &= v70;
                        if ( v51 )
                          KiRemoveSystemWorkPriorityKick(v68);
                      }
                    }
                  }
                  __writecr8(v66);
                  v99 &= 0xFFFFFFFFFFFFFFBDuLL;
                  MiWriteValidPteNewProtection(v59, v99);
                  MiInsertTbFlushEntry(v107, v28, 1LL, 0LL);
                }
                else
                {
                  if ( !i && (*(_DWORD *)(v97 + 56) & 0x80u) != 0 )
                    goto LABEL_159;
                  v73 = MiGetWsleContents(v63, v28) & 0xF;
                  if ( *((_DWORD *)P + 11) == 3 && v73 == 9 )
                    goto LABEL_159;
                  if ( v73 == 8 || (a3 & 0x10) != 0 )
                  {
                    if ( (a3 & 8) == 0 && v96 != (_DWORD)v8 && (*(_BYTE *)(v10 + 184) & 7) != 2 )
                    {
                      locked = MiReplaceLockedPage(v10, v61, v28, (unsigned __int8)(a3 & 0x40) << 10, v93);
                      v8 = 0LL;
                      if ( locked )
                        goto LABEL_159;
                    }
LABEL_158:
                    v88 = 277;
LABEL_159:
                    v27 = v89;
                    goto LABEL_134;
                  }
                  if ( dword_140C4E868 != (_DWORD)v8 )
                  {
                    MI_WSLE_LOG_ACCESS(v10, v59);
                    LODWORD(v8) = 0;
                  }
                  if ( HIDWORD(v108[1]) == (_DWORD)v8 )
                  {
                    LODWORD(v108[0]) = MiTbFlushType(v10);
                    v108[1] = 20LL;
                    WORD2(v108[0]) = 4;
                    v108[2] = v74;
                    v108[3] = v74;
                  }
                  MiInsertTbFlushEntry(v108, v28, 1LL, 0LL);
                  if ( HIDWORD(v108[1]) == LODWORD(v108[1]) )
                  {
                    v75 = MiFreeWsleList(v10, v108, 0LL);
                    v8 = 0LL;
                    if ( v75 )
                      goto LABEL_158;
                    goto LABEL_159;
                  }
                }
              }
              v27 = v89;
            }
            v8 = 0LL;
LABEL_134:
            v25 = v87;
LABEL_135:
            v28 += 4096LL;
            if ( v28 >= v92 )
              goto LABEL_136;
            v11 = valid;
          }
          v93 = 1;
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
            v46 = *(_QWORD *)(MiGetSystemCacheReverseMap(v28) + 24);
            v47 = v46 & 0xFFFFFFFFFFFFFFFEuLL;
            if ( (v46 & 1) == 0 )
              v47 = v46;
            if ( v10 != *(_QWORD *)(qword_140C4E688 + 8LL * (*(_WORD *)(*(_QWORD *)v47 + 60LL) & 0x3FF)) + 7232LL )
              goto LABEL_136;
            v48 = SystemCacheReverseMap[2];
            if ( !v48 )
              goto LABEL_136;
            v49 = SystemCacheReverseMap[3];
            v91 = (__int64 *)v49;
            if ( (v49 & 1) != 0 )
            {
              v49 &= ~1uLL;
              v91 = (__int64 *)v49;
            }
            if ( *(_QWORD *)v49 != v97 )
            {
LABEL_136:
              a1 = v85;
              goto LABEL_137;
            }
            v50 = SystemCacheReverseMap[4];
            if ( (v48 & 3) == 0 )
              v50 = 4 * (v50 & 0xFFFFFFFFFFFF0000uLL);
            v51 = v50 + (v28 & 0x3FFFF) == v87;
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
                v34 = v82;
                a1 = v85;
                goto LABEL_170;
              }
              if ( !(unsigned int)MiSynchronizeSystemVa(SessionVm, v28, v43, 0, (__int64)v105) )
                goto LABEL_136;
              v10 = v105[3];
              if ( (a3 & 1) != 0 )
              {
                LODWORD(v107[0]) = MiTbFlushType(v105[3]);
                v107[1] = 20LL;
                WORD2(v107[0]) = 0;
                v107[2] = 0LL;
                v107[3] = 0LL;
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
      v14 = (unsigned __int64)&unk_140C4CDA8;
    }
    else
    {
      if ( (_DWORD)v30 == -2 )
        goto LABEL_25;
      SessionById = MmGetSessionById(v30, i);
      v101 = SessionById;
      if ( !SessionById )
        goto LABEL_138;
      if ( (int)MmAttachSession(SessionById) < 0 )
      {
        MmQuitNextSession(v101);
        v101 = 0LL;
        goto LABEL_138;
      }
      CurrentThread = v82;
      v29 = *((_DWORD *)P + 11);
      v14 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5] + 192;
    }
    v100 = v14;
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
      v14 = v100;
      v8 = 0LL;
      for ( i = *(_QWORD *)(v100 + 16); ; i = *(_QWORD *)i )
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
      v91 = *(__int64 **)(i + 48);
      if ( *v91 != v97 || v17 + (*(_QWORD *)(i + 24) << 12) - v16 != v13 )
      {
LABEL_41:
        v33 = *(volatile signed __int64 **)(v100 + 8);
        if ( _InterlockedCompareExchange64(v33, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v33);
        KeAbPostRelease((ULONG_PTR)v33);
        v34 = v82;
        KiLeaveGuardedRegionUnsafe(v82);
        goto LABEL_139;
      }
      v94 = 1;
      goto LABEL_14;
    }
LABEL_138:
    v34 = v82;
LABEL_139:
    if ( v10 )
    {
      if ( HIDWORD(v108[1]) )
      {
        v71 = MiFreeWsleList(v10, v108, 0LL);
        v72 = v88;
        if ( v71 )
          v72 = 277;
        v88 = v72;
      }
      MiFlushTbList(v107);
      if ( v15 )
      {
        if ( valid )
          MiUnlockPageTableInternal(v10, valid);
        MiUnlockWorkingSetShared(v10, v83);
      }
      else
      {
        MiUnlockSystemVa(v105);
      }
      valid = 0LL;
      v10 = 0LL;
    }
LABEL_170:
    if ( v94 == 1 )
    {
      v77 = *(volatile signed __int64 **)(v100 + 8);
      if ( _InterlockedCompareExchange64(v77, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v77);
      KeAbPostRelease((ULONG_PTR)v77);
      KiLeaveGuardedRegionUnsafe(v34);
    }
    v78 = v101;
    if ( v101 )
    {
      MmDetachSession(v101, (__int64)v106);
      MmQuitNextSession(v78);
    }
    else if ( v95 == 1 )
    {
      KeForceDetachProcess(v106, 0);
      MiAttachThreadDone((__int64)&DmaAdapter[104]);
    }
    if ( DmaAdapter )
      HalPutDmaAdapter(DmaAdapter);
    ExFreePoolWithTag(P, 0);
    if ( v96 == 1 && (*v102 & 1) == 0 )
      break;
    v8 = 0LL;
    if ( !a1 )
      return v88;
    v11 = valid;
    CurrentThread = v82;
  }
  while ( a1 )
  {
    v79 = a1;
    a1 = (_QWORD *)*a1;
    v80 = (struct _DMA_ADAPTER *)v79[1];
    if ( v80 )
      HalPutDmaAdapter(v80);
    ExFreePoolWithTag(v79, 0);
  }
  return 0LL;
}
