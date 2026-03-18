/*
 * XREFs of MiTrimSharedPageFromViews @ 0x140354B14
 * Callers:
 *     MiTrimSection @ 0x1403545B0 (MiTrimSection.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiLocateAddress @ 0x14022ED30 (MiLocateAddress.c)
 *     MiLockLowestValidPageTable @ 0x140236270 (MiLockLowestValidPageTable.c)
 *     MmDetachSession @ 0x14023C8A0 (MmDetachSession.c)
 *     MmAttachSession @ 0x14023C940 (MmAttachSession.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     MiGetAnyMultiplexedVm @ 0x14024EF1C (MiGetAnyMultiplexedVm.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     MmGetSessionById @ 0x140297320 (MmGetSessionById.c)
 *     MiSynchronizeSystemVa @ 0x140299220 (MiSynchronizeSystemVa.c)
 *     MiGetSystemCacheReverseMap @ 0x140299590 (MiGetSystemCacheReverseMap.c)
 *     MiUnlockSystemVa @ 0x1402996DC (MiUnlockSystemVa.c)
 *     MiGetSessionVm @ 0x14029977C (MiGetSessionVm.c)
 *     MiWriteValidPteNewProtection @ 0x14029F0A0 (MiWriteValidPteNewProtection.c)
 *     MiStartingOffset @ 0x1402A1B60 (MiStartingOffset.c)
 *     MiFreeWsleList @ 0x1402AAA70 (MiFreeWsleList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x1402B3F50 (MiGetProtoPteAddress.c)
 *     MiInsertTbFlushEntry @ 0x1402B8FC0 (MiInsertTbFlushEntry.c)
 *     MiTbFlushType @ 0x1402BA458 (MiTbFlushType.c)
 *     MiFlushTbList @ 0x1402BFA90 (MiFlushTbList.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1402CFBA0 (MI_WSLE_LOG_ACCESS.c)
 *     MiGetWsleContents @ 0x1402D3CE0 (MiGetWsleContents.c)
 *     KeForceAttachProcess @ 0x1402D6F38 (KeForceAttachProcess.c)
 *     KeForceDetachProcess @ 0x140317684 (KeForceDetachProcess.c)
 *     MiPrepareAttachThread @ 0x140341258 (MiPrepareAttachThread.c)
 *     MiLockPageInline @ 0x14034E290 (MiLockPageInline.c)
 *     MiAttachThreadDone @ 0x140353D64 (MiAttachThreadDone.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
 *     memset @ 0x140411300 (memset.c)
 *     MiReplaceLockedPage @ 0x14053BC6C (MiReplaceLockedPage.c)
 *     MmQuitNextSession @ 0x1406E3830 (MmQuitNextSession.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
  __int64 v29; // rcx
  ULONG_PTR SessionById; // rax
  int v31; // eax
  unsigned __int64 v32; // r8
  signed __int64 *v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rax
  int v36; // ecx
  unsigned __int64 v37; // r15
  int v38; // r8d
  int v39; // ecx
  __int64 SessionVm; // rax
  int v41; // r8d
  int SystemRegionType; // eax
  _QWORD *SystemCacheReverseMap; // rdi
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rcx
  bool v47; // zf
  int v48; // eax
  __int64 **Address; // rax
  __int64 v50; // r8
  unsigned __int64 v51; // r8
  __int64 v52; // r9
  unsigned __int64 ProtoPteAddress; // rax
  __int64 v54; // rdi
  __int64 v55; // r15
  char v56; // di
  unsigned __int64 v57; // rsi
  int v58; // eax
  __int64 v59; // rcx
  __int64 v60; // r8
  _DWORD *v61; // r9
  unsigned __int8 v62; // al
  char v63; // cl
  unsigned __int64 v64; // rdi
  unsigned __int8 v65; // al
  struct _KPRCB *v66; // r10
  _DWORD *v67; // r9
  int v68; // eax
  __int64 v69; // rax
  int v70; // ecx
  char v71; // al
  __int64 v72; // r11
  __int64 v73; // rax
  int locked; // eax
  signed __int64 *v75; // rdi
  __int64 v76; // rdi
  _QWORD *v77; // rbx
  struct _DMA_ADAPTER *v78; // rcx
  __int64 v80; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v81; // [rsp+38h] [rbp-C8h]
  struct _DMA_ADAPTER *DmaAdapter; // [rsp+40h] [rbp-C0h]
  _QWORD *v83; // [rsp+48h] [rbp-B8h]
  __int64 v84; // [rsp+50h] [rbp-B0h]
  __int64 v85; // [rsp+50h] [rbp-B0h]
  unsigned int v86; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v87; // [rsp+60h] [rbp-A0h]
  unsigned __int64 valid; // [rsp+68h] [rbp-98h]
  __int64 *v89; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v90; // [rsp+78h] [rbp-88h]
  int v91; // [rsp+80h] [rbp-80h]
  int v92; // [rsp+84h] [rbp-7Ch]
  int v93; // [rsp+88h] [rbp-78h]
  int v94; // [rsp+8Ch] [rbp-74h]
  __int64 v95; // [rsp+90h] [rbp-70h]
  PVOID P; // [rsp+98h] [rbp-68h]
  __int64 v97; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD *v98; // [rsp+A8h] [rbp-58h]
  ULONG_PTR v99; // [rsp+B0h] [rbp-50h]
  _BYTE *v100; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v101; // [rsp+C0h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v103[16]; // [rsp+E0h] [rbp-20h] BYREF
  _OWORD v104[3]; // [rsp+160h] [rbp+60h] BYREF
  _QWORD v105[24]; // [rsp+190h] [rbp+90h] BYREF
  _QWORD v106[24]; // [rsp+250h] [rbp+150h] BYREF

  v100 = a5;
  v94 = a2;
  v97 = 0LL;
  v101 = 0LL;
  v89 = 0LL;
  v95 = a4;
  memset(v104, 0, sizeof(v104));
  memset(v106, 0, 0xB8uLL);
  memset(v105, 0, 0xB8uLL);
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(v103, 0, sizeof(v103));
  CurrentThread = KeGetCurrentThread();
  v8 = 0LL;
  v81 = 17;
  v9 = 0;
  v80 = (__int64)CurrentThread;
  v10 = 0LL;
  v86 = 0;
  v11 = 0LL;
  valid = 0LL;
  if ( !a1 )
    return v9;
  while ( 1 )
  {
    i = (unsigned __int64)a1;
    v99 = 0LL;
    a1 = (_QWORD *)*a1;
    P = (PVOID)i;
    v13 = 0LL;
    v83 = a1;
    v14 = *(_KPROCESS **)(i + 8);
    v15 = *(_QWORD *)(i + 32);
    v16 = *(_QWORD *)(i + 16);
    DmaAdapter = (struct _DMA_ADAPTER *)v14;
    v90 = *(_QWORD *)(i + 24);
    v84 = v15;
    v98 = 0LL;
    v93 = 0;
    v92 = 0;
    if ( v14 && v14 != KeGetCurrentThread()->ApcState.Process )
    {
      KeAcquireInStackQueuedSpinLock(&qword_140C4ECC0, &LockHandle);
      v93 = MiPrepareAttachThread((__int64)v14, (__int64)&v14[1].ActiveProcessorsPadding[6]);
      v17 = v93;
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
            v47 = (v22 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v22;
            if ( v47 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      if ( v17 )
      {
        KeForceAttachProcess((ULONG_PTR)v14, (__int64)v104);
        v11 = valid;
LABEL_13:
        v8 = 0LL;
LABEL_14:
        v23 = v16 - 4096;
        v24 = v84 - 4096;
        v25 = 0LL;
        v26 = v23 >> 12;
        v27 = v23 + 4096;
        if ( v27 < v90 )
        {
          while ( 1 )
          {
            v87 = ++v26;
            v85 = v24 + 4096;
            if ( !v10 || ((v27 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL == v11 )
            {
              v37 = valid;
            }
            else
            {
              if ( HIDWORD(v106[1]) != (_DWORD)v8 )
              {
                v35 = MiFreeWsleList(v10, (__int64)v106, 0);
                v36 = v86;
                if ( v35 )
                  v36 = 277;
                v86 = v36;
              }
              MiFlushTbList((unsigned int *)v105, (_KPROCESS *)i);
              if ( DmaAdapter )
              {
                if ( v11 )
                  MiUnlockPageTableInternal(v10);
                MiUnlockWorkingSetShared(v10, v81);
              }
              else
              {
                MiUnlockSystemVa((__int64)v103);
              }
              v8 = 0LL;
              v37 = 0LL;
              valid = 0LL;
              v10 = 0LL;
            }
            if ( !DmaAdapter )
              break;
            v91 = v8;
            if ( !v10 )
            {
              v10 = (__int64)&DmaAdapter[104];
              if ( (a3 & 1) != 0 )
              {
                v48 = MiTbFlushType((__int64)&DmaAdapter[104]);
                WORD2(v105[0]) = 0;
                LODWORD(v105[0]) = v48;
                v105[1] = 20LL;
                v105[2] = v8;
                v105[3] = v8;
              }
              v25 = v8;
              v81 = MiLockWorkingSetShared(v10);
              v8 = 0LL;
            }
            if ( v25
              && (i = *(unsigned int *)(v25 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v25 + 32) << 32), v26 >= i)
              && v26 <= (*(unsigned int *)(v25 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v25 + 33) << 32)) )
            {
              v50 = v95;
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
              v50 = v95;
              if ( (*(_DWORD *)(v95 + 56) & 0x20) == 0 && (i & 0x70) != 0 )
                goto LABEL_136;
              v89 = Address[9];
              if ( *v89 != v95 )
                goto LABEL_136;
            }
            if ( (*(_DWORD *)(v50 + 56) & 0x20) != 0 )
            {
              v51 = *(_QWORD *)(v25 + 80);
              if ( (unsigned __int64)v100 < v51 )
                goto LABEL_136;
              v52 = *(unsigned int *)(v25 + 24);
              i = *(unsigned int *)(v25 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v25 + 33) << 32);
              if ( (unsigned __int64)v100 >= v51
                                           - 8 * (v52 | ((unsigned __int64)*(unsigned __int8 *)(v25 + 32) << 32))
                                           + 8 * (i + 1) )
                goto LABEL_136;
              v27 = ((__int64)&v100[-v51] >> 3 << 12)
                  + ((v52 | ((unsigned __int64)*(unsigned __int8 *)(v25 + 32) << 32)) << 12);
            }
            else
            {
              ProtoPteAddress = MiGetProtoPteAddress(v25, v27 >> 12, 0, &v89);
              if ( !ProtoPteAddress || !v89 || v85 != MiStartingOffset(v89, ProtoPteAddress, 0xFFFFFFFF) )
                goto LABEL_136;
              v8 = 0LL;
            }
            i = ((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v54 = ((i >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            if ( v37 != v54 )
            {
              if ( v37 )
              {
                v27 -= 4096LL;
                --v26;
                v24 = v85 - 4096;
                goto LABEL_135;
              }
              valid = MiLockLowestValidPageTable(v10, i, &v101);
              v47 = valid == v54;
LABEL_113:
              if ( !v47 )
                goto LABEL_136;
            }
LABEL_114:
            v55 = ((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v97 = MI_READ_PTE_LOCK_FREE(v55);
            v56 = v97;
            if ( (v97 & 1) != 0 )
            {
              v57 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v97) >> 12) & 0xFFFFFFFFFLL)
                  - 0x58000000000LL;
              if ( (a3 & 8) == 0 || (v56 & 0x42) == 0 && (*(_BYTE *)(v57 + 34) & 0x10) == 0 )
              {
                v58 = MI_PFN_IS_PROTO(v57);
                v8 = 0LL;
                if ( !v58 )
                  goto LABEL_159;
                i &= 0x400u;
                if ( (a3 & 1) != 0 )
                {
                  if ( !i || (v56 & 0x42) == 0 )
                    goto LABEL_159;
                  v62 = MiLockPageInline(v59, i, v60, v61);
                  v63 = *(_BYTE *)(v57 + 34);
                  v64 = v62;
                  if ( (v63 & 0x10) == 0 )
                    *(_BYTE *)(v57 + 34) = v63 | 0x10;
                  _InterlockedAnd64((volatile signed __int64 *)(v57 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  if ( KiIrqlFlags )
                  {
                    if ( (KiIrqlFlags & 1) != 0 )
                    {
                      v65 = KeGetCurrentIrql();
                      if ( v65 <= 0xFu && (unsigned __int8)v64 <= 0xFu && v65 >= 2u )
                      {
                        v66 = KeGetCurrentPrcb();
                        v67 = v66->SchedulerAssist;
                        v68 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v64 + 1));
                        v47 = (v68 & v67[5]) == 0;
                        v67[5] &= v68;
                        if ( v47 )
                          KiRemoveSystemWorkPriorityKick(v66);
                      }
                    }
                  }
                  __writecr8(v64);
                  v97 &= 0xFFFFFFFFFFFFFFBDuLL;
                  MiWriteValidPteNewProtection(v55, v97);
                  MiInsertTbFlushEntry((__int64)v105, v27, 1LL, 0);
                }
                else
                {
                  if ( !i && (*(_DWORD *)(v95 + 56) & 0x80u) != 0 )
                    goto LABEL_159;
                  v71 = MiGetWsleContents(v59, v27) & 0xF;
                  if ( *((_DWORD *)P + 11) == 3 && v71 == 9 )
                    goto LABEL_159;
                  if ( v71 == 8 || (a3 & 0x10) != 0 )
                  {
                    if ( (a3 & 8) == 0 && v94 != (_DWORD)v8 && (*(_BYTE *)(v10 + 184) & 7) != 2 )
                    {
                      locked = MiReplaceLockedPage(v10, v57, v27, (unsigned __int8)(a3 & 0x40) << 10, v91);
                      v8 = 0LL;
                      if ( locked )
                        goto LABEL_159;
                    }
LABEL_158:
                    v86 = 277;
LABEL_159:
                    v26 = v87;
                    goto LABEL_134;
                  }
                  if ( dword_140C4E6A8 != (_DWORD)v8 )
                  {
                    MI_WSLE_LOG_ACCESS(v10, v55);
                    LODWORD(v8) = 0;
                  }
                  if ( HIDWORD(v106[1]) == (_DWORD)v8 )
                  {
                    LODWORD(v106[0]) = MiTbFlushType(v10);
                    v106[1] = 20LL;
                    WORD2(v106[0]) = 4;
                    v106[2] = v72;
                    v106[3] = v72;
                  }
                  MiInsertTbFlushEntry((__int64)v106, v27, 1LL, 0);
                  if ( HIDWORD(v106[1]) == LODWORD(v106[1]) )
                  {
                    v73 = MiFreeWsleList(v10, (__int64)v106, 0);
                    v8 = 0LL;
                    if ( v73 )
                      goto LABEL_158;
                    goto LABEL_159;
                  }
                }
              }
              v26 = v87;
            }
            v8 = 0LL;
LABEL_134:
            v24 = v85;
LABEL_135:
            v27 += 4096LL;
            if ( v27 >= v90 )
              goto LABEL_136;
            v11 = valid;
          }
          v91 = 1;
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
            v44 = i & 0xFFFFFFFFFFFFFFFEuLL;
            if ( (i & 1) == 0 )
              v44 = i;
            if ( v10 != *(_QWORD *)(qword_140C4E4C8 + 8LL * (*(_WORD *)(*(_QWORD *)v44 + 60LL) & 0x3FF)) + 7232LL )
              goto LABEL_136;
            i = SystemCacheReverseMap[2];
            if ( !i )
              goto LABEL_136;
            v45 = SystemCacheReverseMap[3];
            v89 = (__int64 *)v45;
            if ( (v45 & 1) != 0 )
            {
              v45 &= ~1uLL;
              v89 = (__int64 *)v45;
            }
            if ( *(_QWORD *)v45 != v95 )
            {
LABEL_136:
              a1 = v83;
              goto LABEL_137;
            }
            v46 = SystemCacheReverseMap[4];
            if ( (i & 3) == 0 )
              v46 = 4 * (v46 & 0xFFFFFFFFFFFF0000uLL);
            v47 = v46 + (v27 & 0x3FFFF) == v85;
            goto LABEL_113;
          }
          v38 = MiGetSystemRegionType(v27);
          switch ( v38 )
          {
            case 8:
              v39 = 0;
              break;
            case 1:
              SessionVm = MiGetSessionVm();
LABEL_69:
              v10 = SessionVm;
              if ( !SessionVm )
              {
LABEL_169:
                v34 = v80;
                a1 = v83;
                goto LABEL_170;
              }
              if ( !(unsigned int)MiSynchronizeSystemVa(SessionVm, v27, v41, 0, (__int64)v103) )
                goto LABEL_136;
              v10 = v103[3];
              if ( (a3 & 1) != 0 )
              {
                LODWORD(v105[0]) = MiTbFlushType(v103[3]);
                v105[1] = 20LL;
                WORD2(v105[0]) = 0;
                v105[2] = 0LL;
                v105[3] = 0LL;
              }
              valid = ((v27 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
              goto LABEL_74;
            case 6:
              v39 = 2;
              break;
            case 12:
              v39 = 1;
              break;
            default:
              goto LABEL_169;
          }
          SessionVm = (__int64)MiGetAnyMultiplexedVm(v39);
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
    v29 = *(unsigned int *)(i + 40);
    if ( (_DWORD)v29 == -1 )
    {
      v13 = &unk_140C4CBE8;
    }
    else
    {
      if ( (_DWORD)v29 == -2 )
        goto LABEL_25;
      SessionById = MmGetSessionById(v29, i);
      v99 = SessionById;
      if ( !SessionById )
        goto LABEL_138;
      if ( (int)MmAttachSession(SessionById) < 0 )
      {
        MmQuitNextSession(v99);
        v99 = 0LL;
        goto LABEL_138;
      }
      CurrentThread = (struct _KTHREAD *)v80;
      v28 = *((_DWORD *)P + 11);
      v13 = (_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5] + 192);
    }
    v98 = v13;
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
      for ( i = v98[2]; ; i = *(_QWORD *)i )
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
      v89 = *(__int64 **)(i + 48);
      if ( *v89 != v95 || v16 + (*(_QWORD *)(i + 24) << 12) - v15 != v32 )
      {
LABEL_41:
        v33 = (signed __int64 *)v98[1];
        if ( _InterlockedCompareExchange64(v33, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v33);
        KeAbPostRelease((ULONG_PTR)v33);
        v34 = v80;
        KiLeaveGuardedRegionUnsafe(v80);
        goto LABEL_139;
      }
      v92 = 1;
      goto LABEL_14;
    }
LABEL_138:
    v34 = v80;
LABEL_139:
    if ( v10 )
    {
      if ( HIDWORD(v106[1]) )
      {
        v69 = MiFreeWsleList(v10, (__int64)v106, 0);
        v70 = v86;
        if ( v69 )
          v70 = 277;
        v86 = v70;
      }
      MiFlushTbList((unsigned int *)v105, (_KPROCESS *)i);
      if ( v14 )
      {
        if ( valid )
          MiUnlockPageTableInternal(v10);
        MiUnlockWorkingSetShared(v10, v81);
      }
      else
      {
        MiUnlockSystemVa((__int64)v103);
      }
      valid = 0LL;
      v10 = 0LL;
    }
LABEL_170:
    if ( v92 == 1 )
    {
      v75 = (signed __int64 *)v98[1];
      if ( _InterlockedCompareExchange64(v75, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v75);
      KeAbPostRelease((ULONG_PTR)v75);
      KiLeaveGuardedRegionUnsafe(v34);
    }
    v76 = v99;
    if ( v99 )
    {
      MmDetachSession(v99, (__int64)v104);
      MmQuitNextSession(v76);
    }
    else if ( v93 == 1 )
    {
      KeForceDetachProcess(v104, 0);
      MiAttachThreadDone((__int64)&DmaAdapter[104]);
    }
    if ( DmaAdapter )
      HalPutDmaAdapter(DmaAdapter);
    ExFreePoolWithTag(P, 0);
    if ( v94 == 1 && (*v100 & 1) == 0 )
      break;
    v8 = 0LL;
    if ( !a1 )
      return v86;
    v11 = valid;
    CurrentThread = (struct _KTHREAD *)v80;
  }
  while ( a1 )
  {
    v77 = a1;
    a1 = (_QWORD *)*a1;
    v78 = (struct _DMA_ADAPTER *)v77[1];
    if ( v78 )
      HalPutDmaAdapter(v78);
    ExFreePoolWithTag(v77, 0);
  }
  return 0LL;
}
