/*
 * XREFs of MiTrimSharedPageFromViews @ 0x1402CE864
 * Callers:
 *     MiTrimSection @ 0x1402CE300 (MiTrimSection.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x140207D20 (MiGetProtoPteAddress.c)
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x14021E270 (MiInsertTbFlushEntry.c)
 *     MiFreeWsleList @ 0x140220280 (MiFreeWsleList.c)
 *     MiSynchronizeSystemVa @ 0x14022B050 (MiSynchronizeSystemVa.c)
 *     MiGetSystemCacheReverseMap @ 0x14022B3C0 (MiGetSystemCacheReverseMap.c)
 *     MiUnlockSystemVa @ 0x14022B50C (MiUnlockSystemVa.c)
 *     MiGetSessionVm @ 0x14022B5AC (MiGetSessionVm.c)
 *     MmGetSessionById @ 0x14022BBB0 (MmGetSessionById.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     MiTbFlushType @ 0x14029ED94 (MiTbFlushType.c)
 *     MiStartingOffset @ 0x14029EDC0 (MiStartingOffset.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1402A0190 (MI_WSLE_LOG_ACCESS.c)
 *     MiLocateAddress @ 0x1402A4B60 (MiLocateAddress.c)
 *     KeForceAttachProcess @ 0x1402A680C (KeForceAttachProcess.c)
 *     MiGetAnyMultiplexedVm @ 0x1402A9158 (MiGetAnyMultiplexedVm.c)
 *     MiLockLowestValidPageTable @ 0x1402ACFF0 (MiLockLowestValidPageTable.c)
 *     MiGetWsleContents @ 0x1402AFD20 (MiGetWsleContents.c)
 *     MiWriteValidPteNewProtection @ 0x1402BC370 (MiWriteValidPteNewProtection.c)
 *     MiAttachThreadDone @ 0x1402CFF94 (MiAttachThreadDone.c)
 *     MiPrepareAttachThread @ 0x1402D0024 (MiPrepareAttachThread.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     KeForceDetachProcess @ 0x140308594 (KeForceDetachProcess.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     MmDetachSession @ 0x14035DA40 (MmDetachSession.c)
 *     MmAttachSession @ 0x14035DAE0 (MmAttachSession.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiReplaceLockedPage @ 0x140537C4C (MiReplaceLockedPage.c)
 *     MmQuitNextSession @ 0x140656300 (MmQuitNextSession.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiTrimSharedPageFromViews(_QWORD *a1, int a2, char a3, __int64 a4, _BYTE *a5)
{
  struct _KTHREAD *CurrentThread; // r10
  __int64 v8; // r11
  unsigned int v9; // r8d
  __int64 v10; // r13
  unsigned __int64 v11; // rdi
  unsigned __int64 i; // rdx
  _QWORD *v13; // r9
  _KPROCESS *v14; // r12
  __int64 v15; // rsi
  unsigned __int64 v16; // r14
  int v17; // esi
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v22; // eax
  unsigned __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // r12
  unsigned __int64 v26; // rsi
  unsigned __int64 v27; // r14
  unsigned int v28; // eax
  unsigned int v29; // ecx
  ULONG_PTR SessionById; // rax
  int v31; // eax
  unsigned __int64 v32; // r8
  volatile signed __int64 *v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  int v39; // ecx
  unsigned __int64 v40; // r15
  int v41; // r8d
  int v42; // ecx
  __int64 SessionVm; // rax
  int v44; // r8d
  int SystemRegionType; // eax
  _QWORD *SystemCacheReverseMap; // rdi
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rcx
  bool v50; // zf
  int v51; // eax
  __int64 **Address; // rax
  __int64 v53; // r8
  unsigned __int64 v54; // r8
  __int64 v55; // r9
  unsigned __int64 ProtoPteAddress; // rax
  __int64 v57; // rdi
  __int64 v58; // r15
  char v59; // di
  unsigned __int64 v60; // rsi
  __int64 v61; // r8
  int v62; // eax
  __int64 v63; // rcx
  __int64 v64; // r8
  unsigned __int8 v65; // al
  char v66; // cl
  unsigned __int64 v67; // rdi
  unsigned __int8 v68; // al
  struct _KPRCB *v69; // r10
  _DWORD *v70; // r9
  int v71; // eax
  __int64 v72; // rax
  int v73; // ecx
  char v74; // al
  __int64 v75; // r11
  __int64 v76; // rax
  int locked; // eax
  volatile signed __int64 *v78; // rdi
  __int64 v79; // rdx
  __int64 v80; // r8
  __int64 v81; // r9
  ULONG_PTR v82; // rdi
  _QWORD *v83; // rbx
  struct _DMA_ADAPTER *v84; // rcx
  __int64 v86; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v87; // [rsp+38h] [rbp-C8h]
  struct _DMA_ADAPTER *DmaAdapter; // [rsp+40h] [rbp-C0h]
  _QWORD *v89; // [rsp+48h] [rbp-B8h]
  __int64 v90; // [rsp+50h] [rbp-B0h]
  __int64 v91; // [rsp+50h] [rbp-B0h]
  unsigned int v92; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v93; // [rsp+60h] [rbp-A0h]
  unsigned __int64 valid; // [rsp+68h] [rbp-98h]
  __int64 *v95; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v96; // [rsp+78h] [rbp-88h]
  int v97; // [rsp+80h] [rbp-80h]
  int v98; // [rsp+84h] [rbp-7Ch]
  int v99; // [rsp+88h] [rbp-78h]
  int v100; // [rsp+8Ch] [rbp-74h]
  __int64 v101; // [rsp+90h] [rbp-70h]
  PVOID P; // [rsp+98h] [rbp-68h]
  __int64 v103; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD *v104; // [rsp+A8h] [rbp-58h]
  ULONG_PTR v105; // [rsp+B0h] [rbp-50h]
  _BYTE *v106; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v107; // [rsp+C0h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v109[16]; // [rsp+E0h] [rbp-20h] BYREF
  _OWORD v110[3]; // [rsp+160h] [rbp+60h] BYREF
  _QWORD v111[24]; // [rsp+190h] [rbp+90h] BYREF
  _QWORD v112[24]; // [rsp+250h] [rbp+150h] BYREF

  v106 = a5;
  v100 = a2;
  v103 = 0LL;
  v107 = 0LL;
  v95 = 0LL;
  v101 = a4;
  memset(v110, 0, sizeof(v110));
  memset(v112, 0, 0xB8uLL);
  memset(v111, 0, 0xB8uLL);
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(v109, 0, sizeof(v109));
  CurrentThread = KeGetCurrentThread();
  v8 = 0LL;
  v87 = 17;
  v9 = 0;
  v86 = (__int64)CurrentThread;
  v10 = 0LL;
  v92 = 0;
  v11 = 0LL;
  valid = 0LL;
  if ( !a1 )
    return v9;
  while ( 1 )
  {
    i = (unsigned __int64)a1;
    v105 = 0LL;
    a1 = (_QWORD *)*a1;
    P = (PVOID)i;
    v13 = 0LL;
    v89 = a1;
    v14 = *(_KPROCESS **)(i + 8);
    v15 = *(_QWORD *)(i + 32);
    v16 = *(_QWORD *)(i + 16);
    DmaAdapter = (struct _DMA_ADAPTER *)v14;
    v96 = *(_QWORD *)(i + 24);
    v90 = v15;
    v104 = 0LL;
    v99 = 0;
    v98 = 0;
    if ( v14 && v14 != KeGetCurrentThread()->ApcState.Process )
    {
      KeAcquireInStackQueuedSpinLock(&qword_140C4ED80, &LockHandle);
      v99 = MiPrepareAttachThread(v14, &v14[1].ActiveProcessorsPadding[6]);
      v17 = v99;
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
            i = -1LL << (LockHandle.OldIrql + 1);
            v22 = ~(unsigned __int16)i;
            v50 = (v22 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v22;
            if ( v50 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      if ( v17 )
      {
        KeForceAttachProcess((ULONG_PTR)v14, (__int64)v110);
        v11 = valid;
LABEL_13:
        v8 = 0LL;
LABEL_14:
        v23 = v16 - 4096;
        v24 = v90 - 4096;
        v25 = 0LL;
        v26 = v23 >> 12;
        v27 = v23 + 4096;
        if ( v27 < v96 )
        {
          while ( 1 )
          {
            v93 = ++v26;
            v91 = v24 + 4096;
            if ( !v10 || ((v27 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL == v11 )
            {
              v40 = valid;
            }
            else
            {
              if ( HIDWORD(v112[1]) != (_DWORD)v8 )
              {
                v38 = MiFreeWsleList(v10, (__int64)v112, 0);
                v39 = v92;
                if ( v38 )
                  v39 = 277;
                v92 = v39;
              }
              MiFlushTbList((__int64)v111, (_KPROCESS *)i);
              if ( DmaAdapter )
              {
                if ( v11 )
                  MiUnlockPageTableInternal(v10, v11);
                MiUnlockWorkingSetShared(v10, v87);
              }
              else
              {
                MiUnlockSystemVa((__int64)v109);
              }
              v8 = 0LL;
              v40 = 0LL;
              valid = 0LL;
              v10 = 0LL;
            }
            if ( !DmaAdapter )
              break;
            v97 = v8;
            if ( !v10 )
            {
              v10 = (__int64)&DmaAdapter[104];
              if ( (a3 & 1) != 0 )
              {
                v51 = MiTbFlushType((__int64)&DmaAdapter[104]);
                WORD2(v111[0]) = 0;
                LODWORD(v111[0]) = v51;
                v111[1] = 20LL;
                v111[2] = v8;
                v111[3] = v8;
              }
              v25 = v8;
              v87 = MiLockWorkingSetShared(v10);
              v8 = 0LL;
            }
            if ( v25
              && (i = *(unsigned int *)(v25 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v25 + 32) << 32), v26 >= i)
              && v26 <= (*(unsigned int *)(v25 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v25 + 33) << 32)) )
            {
              v53 = v101;
            }
            else
            {
              Address = MiLocateAddress(v27);
              v25 = (__int64)Address;
              if ( !Address )
                goto LABEL_136;
              i = *((unsigned int *)Address + 12);
              if ( (i & 0x100000) != 0 )
                goto LABEL_136;
              v53 = v101;
              if ( (*(_DWORD *)(v101 + 56) & 0x20) == 0 && (i & 0x70) != 0 )
                goto LABEL_136;
              v95 = Address[9];
              if ( *v95 != v101 )
                goto LABEL_136;
            }
            if ( (*(_DWORD *)(v53 + 56) & 0x20) != 0 )
            {
              v54 = *(_QWORD *)(v25 + 80);
              if ( (unsigned __int64)v106 < v54 )
                goto LABEL_136;
              v55 = *(unsigned int *)(v25 + 24);
              i = *(unsigned int *)(v25 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v25 + 33) << 32);
              if ( (unsigned __int64)v106 >= v54
                                           - 8 * (v55 | ((unsigned __int64)*(unsigned __int8 *)(v25 + 32) << 32))
                                           + 8 * (i + 1) )
                goto LABEL_136;
              v27 = ((__int64)&v106[-v54] >> 3 << 12)
                  + ((v55 | ((unsigned __int64)*(unsigned __int8 *)(v25 + 32) << 32)) << 12);
            }
            else
            {
              ProtoPteAddress = MiGetProtoPteAddress(v25, v27 >> 12, 0, &v95);
              if ( !ProtoPteAddress || !v95 || v91 != MiStartingOffset(v95, ProtoPteAddress, 0xFFFFFFFFLL) )
                goto LABEL_136;
              v8 = 0LL;
            }
            i = ((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v57 = ((i >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            if ( v40 != v57 )
            {
              if ( v40 )
              {
                v27 -= 4096LL;
                --v26;
                v24 = v91 - 4096;
                goto LABEL_135;
              }
              valid = MiLockLowestValidPageTable(v10, i, &v107);
              v50 = valid == v57;
LABEL_113:
              if ( !v50 )
                goto LABEL_136;
            }
LABEL_114:
            v58 = ((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v103 = MI_READ_PTE_LOCK_FREE(v58);
            v59 = v103;
            if ( (v103 & 1) != 0 )
            {
              v60 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v103) >> 12) & 0xFFFFFFFFFLL)
                  - 0x58000000000LL;
              if ( (a3 & 8) == 0 || (v59 & 0x42) == 0 && (*(_BYTE *)(v60 + 34) & 0x10) == 0 )
              {
                v62 = MI_PFN_IS_PROTO(v60, *(_QWORD *)(v60 + 16), v61);
                v8 = 0LL;
                if ( !v62 )
                  goto LABEL_159;
                i &= 0x400u;
                if ( (a3 & 1) != 0 )
                {
                  if ( !i || (v59 & 0x42) == 0 )
                    goto LABEL_159;
                  v65 = MiLockPageInline(v63, i, v64);
                  v66 = *(_BYTE *)(v60 + 34);
                  v67 = v65;
                  if ( (v66 & 0x10) == 0 )
                    *(_BYTE *)(v60 + 34) = v66 | 0x10;
                  _InterlockedAnd64((volatile signed __int64 *)(v60 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  if ( KiIrqlFlags )
                  {
                    if ( (KiIrqlFlags & 1) != 0 )
                    {
                      v68 = KeGetCurrentIrql();
                      if ( v68 <= 0xFu && (unsigned __int8)v67 <= 0xFu && v68 >= 2u )
                      {
                        v69 = KeGetCurrentPrcb();
                        v70 = v69->SchedulerAssist;
                        v71 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v67 + 1));
                        v50 = (v71 & v70[5]) == 0;
                        v70[5] &= v71;
                        if ( v50 )
                          KiRemoveSystemWorkPriorityKick(v69);
                      }
                    }
                  }
                  __writecr8(v67);
                  v103 &= 0xFFFFFFFFFFFFFFBDuLL;
                  MiWriteValidPteNewProtection(v58, v103);
                  MiInsertTbFlushEntry((__int64)v111, v27, 1LL, 0);
                }
                else
                {
                  if ( !i && (*(_DWORD *)(v101 + 56) & 0x80u) != 0 )
                    goto LABEL_159;
                  v74 = MiGetWsleContents(v63, v27) & 0xF;
                  if ( *((_DWORD *)P + 11) == 3 && v74 == 9 )
                    goto LABEL_159;
                  if ( v74 == 8 || (a3 & 0x10) != 0 )
                  {
                    if ( (a3 & 8) == 0 && v100 != (_DWORD)v8 && (*(_BYTE *)(v10 + 184) & 7) != 2 )
                    {
                      locked = MiReplaceLockedPage(v10, v60, v27, (unsigned __int8)(a3 & 0x40) << 10, v97);
                      v8 = 0LL;
                      if ( locked )
                        goto LABEL_159;
                    }
LABEL_158:
                    v92 = 277;
LABEL_159:
                    v26 = v93;
                    goto LABEL_134;
                  }
                  if ( dword_140C4E768 != (_DWORD)v8 )
                  {
                    MI_WSLE_LOG_ACCESS(v10, v58);
                    LODWORD(v8) = 0;
                  }
                  if ( HIDWORD(v112[1]) == (_DWORD)v8 )
                  {
                    LODWORD(v112[0]) = MiTbFlushType(v10);
                    v112[1] = 20LL;
                    WORD2(v112[0]) = 4;
                    v112[2] = v75;
                    v112[3] = v75;
                  }
                  MiInsertTbFlushEntry((__int64)v112, v27, 1LL, 0);
                  if ( HIDWORD(v112[1]) == LODWORD(v112[1]) )
                  {
                    v76 = MiFreeWsleList(v10, (__int64)v112, 0);
                    v8 = 0LL;
                    if ( v76 )
                      goto LABEL_158;
                    goto LABEL_159;
                  }
                }
              }
              v26 = v93;
            }
            v8 = 0LL;
LABEL_134:
            v24 = v91;
LABEL_135:
            v27 += 4096LL;
            if ( v27 >= v96 )
              goto LABEL_136;
            v11 = valid;
          }
          v97 = 1;
          if ( v10 )
          {
LABEL_74:
            SystemRegionType = MiGetSystemRegionType(v27);
            if ( *((_DWORD *)P + 11) )
              goto LABEL_114;
            if ( SystemRegionType != 8 )
              goto LABEL_136;
            SystemCacheReverseMap = (_QWORD *)MiGetSystemCacheReverseMap(v27);
            if ( !SystemCacheReverseMap )
              goto LABEL_136;
            i = *(_QWORD *)(MiGetSystemCacheReverseMap(v27) + 24);
            v47 = i & 0xFFFFFFFFFFFFFFFEuLL;
            if ( (i & 1) == 0 )
              v47 = i;
            if ( v10 != *(_QWORD *)(qword_140C4E588 + 8LL * (*(_WORD *)(*(_QWORD *)v47 + 60LL) & 0x3FF)) + 7232LL )
              goto LABEL_136;
            i = SystemCacheReverseMap[2];
            if ( !i )
              goto LABEL_136;
            v48 = SystemCacheReverseMap[3];
            v95 = (__int64 *)v48;
            if ( (v48 & 1) != 0 )
            {
              v48 &= ~1uLL;
              v95 = (__int64 *)v48;
            }
            if ( *(_QWORD *)v48 != v101 )
            {
LABEL_136:
              a1 = v89;
              goto LABEL_137;
            }
            v49 = SystemCacheReverseMap[4];
            if ( (i & 3) == 0 )
              v49 = 4 * (v49 & 0xFFFFFFFFFFFF0000uLL);
            v50 = v49 + (v27 & 0x3FFFF) == v91;
            goto LABEL_113;
          }
          v41 = MiGetSystemRegionType(v27);
          switch ( v41 )
          {
            case 8:
              v42 = 0;
              break;
            case 1:
              SessionVm = MiGetSessionVm();
LABEL_69:
              v10 = SessionVm;
              if ( !SessionVm )
              {
LABEL_169:
                v34 = v86;
                a1 = v89;
                goto LABEL_170;
              }
              if ( !(unsigned int)MiSynchronizeSystemVa(SessionVm, v27, v44, 0, (__int64)v109) )
                goto LABEL_136;
              v10 = v109[3];
              if ( (a3 & 1) != 0 )
              {
                LODWORD(v111[0]) = MiTbFlushType(v109[3]);
                v111[1] = 20LL;
                WORD2(v111[0]) = 0;
                v111[2] = 0LL;
                v111[3] = 0LL;
              }
              valid = ((v27 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
              goto LABEL_74;
            case 6:
              v42 = 2;
              break;
            case 12:
              v42 = 1;
              break;
            default:
              goto LABEL_169;
          }
          SessionVm = (__int64)MiGetAnyMultiplexedVm(v42);
          goto LABEL_69;
        }
LABEL_137:
        v14 = (_KPROCESS *)DmaAdapter;
        goto LABEL_138;
      }
      goto LABEL_138;
    }
    v28 = *(_DWORD *)(i + 44);
    if ( v28 < 2 )
      goto LABEL_14;
    v29 = *(_DWORD *)(i + 40);
    if ( v29 == -1 )
    {
      v13 = &unk_140C4CCA8;
    }
    else
    {
      if ( v29 == -2 )
        goto LABEL_25;
      SessionById = MmGetSessionById(v29);
      v105 = SessionById;
      if ( !SessionById )
        goto LABEL_138;
      if ( (int)MmAttachSession(SessionById) < 0 )
      {
        MmQuitNextSession(v105);
        v105 = 0LL;
        goto LABEL_138;
      }
      CurrentThread = (struct _KTHREAD *)v86;
      v28 = *((_DWORD *)P + 11);
      v13 = (_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5] + 192);
    }
    v104 = v13;
LABEL_25:
    if ( v28 == 3 )
    {
      v31 = MiGetSystemRegionType(v16);
      if ( *((_DWORD *)P + 10) == -2 )
      {
        if ( v31 != 1 )
          goto LABEL_13;
      }
      else if ( v31 == 1 )
      {
        goto LABEL_13;
      }
    }
    else if ( (a3 & 6) == 0 )
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockSharedEx(v13[1], 0LL);
      v8 = 0LL;
      for ( i = v104[2]; ; i = *(_QWORD *)i )
      {
        while ( 1 )
        {
          if ( !i )
            goto LABEL_41;
          v32 = *(_QWORD *)(i + 88) & 0xFFFFFFFFFFFFF000uLL;
          if ( v16 < v32 + *(_QWORD *)(i + 32) )
            break;
          i = *(_QWORD *)(i + 8);
        }
        if ( v16 >= v32 )
          break;
      }
      v95 = *(__int64 **)(i + 48);
      if ( *v95 != v101 || v16 + (*(_QWORD *)(i + 24) << 12) - v15 != v32 )
      {
LABEL_41:
        v33 = (volatile signed __int64 *)v104[1];
        if ( _InterlockedCompareExchange64(v33, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v33);
        KeAbPostRelease((ULONG_PTR)v33);
        v34 = v86;
        KiLeaveGuardedRegionUnsafe(v86, v35, v36, v37);
        goto LABEL_139;
      }
      v98 = 1;
      goto LABEL_14;
    }
LABEL_138:
    v34 = v86;
LABEL_139:
    if ( v10 )
    {
      if ( HIDWORD(v112[1]) )
      {
        v72 = MiFreeWsleList(v10, (__int64)v112, 0);
        v73 = v92;
        if ( v72 )
          v73 = 277;
        v92 = v73;
      }
      MiFlushTbList((__int64)v111, (_KPROCESS *)i);
      if ( v14 )
      {
        if ( valid )
          MiUnlockPageTableInternal(v10, valid);
        MiUnlockWorkingSetShared(v10, v87);
      }
      else
      {
        MiUnlockSystemVa((__int64)v109);
      }
      valid = 0LL;
      v10 = 0LL;
    }
LABEL_170:
    if ( v98 == 1 )
    {
      v78 = (volatile signed __int64 *)v104[1];
      if ( _InterlockedCompareExchange64(v78, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v78);
      KeAbPostRelease((ULONG_PTR)v78);
      KiLeaveGuardedRegionUnsafe(v34, v79, v80, v81);
    }
    v82 = v105;
    if ( v105 )
    {
      MmDetachSession(v105, v110);
      MmQuitNextSession(v82);
    }
    else if ( v99 == 1 )
    {
      KeForceDetachProcess(v110, 0LL);
      MiAttachThreadDone(&DmaAdapter[104]);
    }
    if ( DmaAdapter )
      HalPutDmaAdapter(DmaAdapter);
    ExFreePoolWithTag(P, 0);
    if ( v100 == 1 && (*v106 & 1) == 0 )
      break;
    v8 = 0LL;
    if ( !a1 )
      return v92;
    v11 = valid;
    CurrentThread = (struct _KTHREAD *)v86;
  }
  while ( a1 )
  {
    v83 = a1;
    a1 = (_QWORD *)*a1;
    v84 = (struct _DMA_ADAPTER *)v83[1];
    if ( v84 )
      HalPutDmaAdapter(v84);
    ExFreePoolWithTag(v83, 0);
  }
  return 0LL;
}
