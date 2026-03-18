/*
 * XREFs of MiTrimSharedPageFromViews @ 0x14027B820
 * Callers:
 *     MiTrimSection @ 0x14027E174 (MiTrimSection.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MmDetachSession @ 0x140231240 (MmDetachSession.c)
 *     MmAttachSession @ 0x1402312E0 (MmAttachSession.c)
 *     KeForceAttachProcess @ 0x1402393FC (KeForceAttachProcess.c)
 *     KeForceDetachProcess @ 0x140241980 (KeForceDetachProcess.c)
 *     MiGetAnyMultiplexedVm @ 0x14026DFC0 (MiGetAnyMultiplexedVm.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140274D10 (MI_WSLE_LOG_ACCESS.c)
 *     MiSynchronizeSystemVa @ 0x140279DB0 (MiSynchronizeSystemVa.c)
 *     MiUnlockSystemVa @ 0x14027A168 (MiUnlockSystemVa.c)
 *     MiGetSystemRegionType @ 0x14027B080 (MiGetSystemRegionType.c)
 *     MiGetSessionVm @ 0x14027B520 (MiGetSessionVm.c)
 *     MiLockLowestValidPageTable @ 0x14027D6E0 (MiLockLowestValidPageTable.c)
 *     MiAttachThreadDone @ 0x14027D8DC (MiAttachThreadDone.c)
 *     MiPrepareAttachThread @ 0x14027D9E8 (MiPrepareAttachThread.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiFreeWsleList @ 0x1402C1D70 (MiFreeWsleList.c)
 *     MiInsertTbFlushEntry @ 0x1402CF280 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MmGetSessionById @ 0x1402DF880 (MmGetSessionById.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     MiLocateAddress @ 0x1403126F0 (MiLocateAddress.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x140319600 (MiGetProtoPteAddress.c)
 *     MiGetSystemCacheReverseMap @ 0x1403295C0 (MiGetSystemCacheReverseMap.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     MiTbFlushType @ 0x140333AA0 (MiTbFlushType.c)
 *     MiStartingOffset @ 0x1403342D0 (MiStartingOffset.c)
 *     MiGetWsleContents @ 0x14033A410 (MiGetWsleContents.c)
 *     MiWriteValidPteNewProtection @ 0x14033DBC0 (MiWriteValidPteNewProtection.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     MiReplaceLockedPage @ 0x1403D0BD4 (MiReplaceLockedPage.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiDeleteTrimViewInfoList @ 0x1406CAD9C (MiDeleteTrimViewInfoList.c)
 *     MmQuitNextSession @ 0x1407FCA70 (MmQuitNextSession.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiTrimSharedPageFromViews(_QWORD *a1, int a2, char a3, __int64 a4, _BYTE *a5)
{
  struct _KTHREAD *CurrentThread; // rdx
  __int64 result; // rax
  __int64 v9; // r9
  unsigned __int64 v10; // r10
  _QWORD *v11; // r15
  ULONG_PTR *v12; // r11
  _KPROCESS *v13; // rsi
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // r14
  __int64 v16; // r13
  int v17; // r15d
  unsigned __int64 OldIrql; // rsi
  unsigned __int64 v19; // r12
  __int64 v20; // r13
  __int64 v21; // r14
  unsigned __int64 v22; // r15
  __int64 v23; // rsi
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rdx
  unsigned __int64 v27; // rdx
  __int64 v28; // r8
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rax
  char v32; // r14
  unsigned __int64 *v33; // rcx
  __int64 Address; // rsi
  int v35; // ecx
  __int64 v36; // rdx
  unsigned __int64 v37; // r8
  __int64 v38; // r9
  unsigned __int64 v39; // rsi
  unsigned __int64 v40; // r14
  __int64 v41; // r15
  struct _KTHREAD *v42; // r13
  __int64 v43; // rdi
  unsigned __int64 v44; // r15
  __int64 v45; // rax
  char v46; // al
  int v47; // eax
  __int64 ProtoPteAddress; // rax
  __int64 v49; // rcx
  ULONG_PTR v50; // r11
  _QWORD *v51; // rdx
  unsigned __int64 v52; // r8
  int v53; // r8d
  int v54; // ecx
  __int64 SessionVm; // rax
  int v56; // r8d
  bool v57; // zf
  int v58; // r9d
  ULONG_PTR SessionById; // rax
  int SystemRegionType; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v64; // eax
  int v65; // eax
  __int64 v66; // rdx
  unsigned __int8 v67; // al
  char v68; // cl
  unsigned __int64 v69; // r14
  unsigned __int8 v70; // al
  struct _KPRCB *v71; // r10
  _DWORD *v72; // r9
  int v73; // eax
  unsigned __int64 valid; // [rsp+30h] [rbp-D0h]
  ULONG_PTR v75; // [rsp+38h] [rbp-C8h]
  struct _KTHREAD *v76; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v77; // [rsp+48h] [rbp-B8h]
  __int64 v78; // [rsp+50h] [rbp-B0h]
  unsigned int v79; // [rsp+58h] [rbp-A8h]
  ULONG_PTR *BugCheckParameter2; // [rsp+60h] [rbp-A0h]
  _QWORD *v81; // [rsp+68h] [rbp-98h] BYREF
  int v82; // [rsp+70h] [rbp-90h]
  int v83; // [rsp+74h] [rbp-8Ch]
  int v84; // [rsp+78h] [rbp-88h]
  int v85; // [rsp+7Ch] [rbp-84h]
  __int64 v86; // [rsp+80h] [rbp-80h]
  unsigned __int64 v87; // [rsp+88h] [rbp-78h]
  __int64 v88; // [rsp+90h] [rbp-70h] BYREF
  PVOID Object; // [rsp+98h] [rbp-68h]
  PVOID P; // [rsp+A0h] [rbp-60h]
  __int64 v91; // [rsp+A8h] [rbp-58h]
  _BYTE *v92; // [rsp+B0h] [rbp-50h]
  PVOID v93; // [rsp+B8h] [rbp-48h]
  __int64 v94; // [rsp+C0h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v96[16]; // [rsp+E0h] [rbp-20h] BYREF
  _OWORD v97[3]; // [rsp+160h] [rbp+60h] BYREF
  _QWORD v98[24]; // [rsp+190h] [rbp+90h] BYREF
  _QWORD v99[24]; // [rsp+250h] [rbp+150h] BYREF

  v85 = a2;
  v92 = a5;
  v88 = 0LL;
  v94 = 0LL;
  v81 = 0LL;
  v86 = a4;
  memset(v97, 0, sizeof(v97));
  memset(v99, 0, 0xB8uLL);
  memset(v98, 0, 0xB8uLL);
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(v96, 0, sizeof(v96));
  CurrentThread = KeGetCurrentThread();
  result = 0LL;
  v76 = CurrentThread;
  v9 = 0LL;
  v79 = 0;
  v10 = 0LL;
  v77 = 17;
  v78 = 0LL;
  valid = 0LL;
  if ( !a1 )
    return result;
  while ( 2 )
  {
    v11 = a1;
    P = a1;
    v93 = (PVOID)*a1;
    v12 = 0LL;
    v75 = 0LL;
    v13 = (_KPROCESS *)a1[1];
    v14 = a1[2];
    v15 = v11[3];
    v16 = v11[4];
    Object = v13;
    v87 = v15;
    BugCheckParameter2 = 0LL;
    v84 = 0;
    v83 = 0;
    if ( v13 && v13 != KeGetCurrentThread()->ApcState.Process )
    {
      KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
      v84 = MiPrepareAttachThread(v13, &v13[1].ActiveProcessors.StaticBitmap[26]);
      v17 = v84;
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
            v64 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v57 = (v64 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v64;
            if ( v57 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      if ( v17 )
      {
        v13 = (_KPROCESS *)Object;
        KeForceAttachProcess((ULONG_PTR)Object, (__int64)v97);
        goto LABEL_7;
      }
      goto LABEL_48;
    }
    if ( *((_DWORD *)v11 + 11) < 2u )
      goto LABEL_8;
    v49 = *((unsigned int *)v11 + 10);
    if ( (_DWORD)v49 == -1 )
    {
      v12 = &qword_140C4F5E8;
      BugCheckParameter2 = &qword_140C4F5E8;
    }
    else if ( (_DWORD)v49 != -2 )
    {
      SessionById = MmGetSessionById(v49, CurrentThread, 0xFFFFF6FB40000000uLL, v9);
      v75 = SessionById;
      if ( !SessionById )
      {
        v40 = valid;
        v41 = 0LL;
        goto LABEL_50;
      }
      if ( (int)MmAttachSession(SessionById) < 0 )
      {
        MmQuitNextSession(v75);
        v40 = valid;
        v41 = 0LL;
        goto LABEL_50;
      }
      v12 = 0LL;
      CurrentThread = v76;
    }
    if ( *((_DWORD *)v11 + 11) == 3 )
    {
      SystemRegionType = MiGetSystemRegionType(v14);
      if ( *((_DWORD *)v11 + 10) == -2 )
      {
        if ( SystemRegionType != 1 )
          goto LABEL_7;
      }
      else if ( SystemRegionType == 1 )
      {
        goto LABEL_7;
      }
      goto LABEL_48;
    }
    if ( (a3 & 6) != 0 )
      goto LABEL_48;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)v12, 0LL);
    v50 = (ULONG_PTR)BugCheckParameter2;
    v51 = (_QWORD *)BugCheckParameter2[1];
    if ( !v51 )
    {
LABEL_178:
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
      {
        ExfReleasePushLockShared(BugCheckParameter2);
        v50 = (ULONG_PTR)BugCheckParameter2;
      }
      KeAbPostRelease(v50);
      v42 = v76;
      v57 = v76->SpecialApcDisable++ == -1;
      if ( v57 && ($CEA84C04E3712D858E5667A507841A2A *)v76->ApcState.ApcListHead[0].Flink != &v76->152 )
        KiCheckForKernelApcDelivery();
      goto LABEL_183;
    }
    while ( 1 )
    {
      v52 = v51[11] & 0xFFFFFFFFFFFFF000uLL;
      if ( v14 >= v52 + v51[4] )
      {
        v51 = (_QWORD *)v51[1];
        goto LABEL_156;
      }
      if ( v14 >= v52 )
        break;
      v51 = (_QWORD *)*v51;
LABEL_156:
      if ( !v51 )
        goto LABEL_178;
    }
    v81 = (_QWORD *)v51[6];
    if ( *v81 != v86 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
      {
        ExfReleasePushLockShared(BugCheckParameter2);
        v50 = (ULONG_PTR)BugCheckParameter2;
      }
      KeAbPostRelease(v50);
      v42 = v76;
      v57 = v76->SpecialApcDisable++ == -1;
      if ( v57 && ($CEA84C04E3712D858E5667A507841A2A *)v76->ApcState.ApcListHead[0].Flink != &v76->152 )
        goto LABEL_172;
      goto LABEL_183;
    }
    if ( v14 + (v51[3] << 12) - v16 != v52 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
      {
        ExfReleasePushLockShared(BugCheckParameter2);
        v50 = (ULONG_PTR)BugCheckParameter2;
      }
      KeAbPostRelease(v50);
      v42 = v76;
      v57 = v76->SpecialApcDisable++ == -1;
      if ( v57 && ($CEA84C04E3712D858E5667A507841A2A *)v76->ApcState.ApcListHead[0].Flink != &v76->152 )
      {
LABEL_172:
        KiCheckForKernelApcDelivery();
        v40 = valid;
        v41 = v75;
        goto LABEL_51;
      }
LABEL_183:
      v40 = valid;
      v41 = v75;
      goto LABEL_51;
    }
    v83 = 1;
LABEL_7:
    v9 = v78;
    v10 = valid;
LABEL_8:
    v19 = (v14 - 4096) >> 12;
    v20 = v16 - 4096;
    v91 = 0LL;
    if ( v14 < v15 )
    {
      while ( 2 )
      {
        v21 = v20;
        v22 = v19++;
        v20 += 4096LL;
        if ( v9 && ((v14 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL != v10 )
        {
          if ( HIDWORD(v99[1]) && MiFreeWsleList(v9, v99, 0LL) )
            v79 = 277;
          MiFlushTbList(v98);
          if ( v13 )
          {
            if ( valid )
              MiUnlockPageTableInternal(v78, valid);
            MiUnlockWorkingSetShared(v78, v77);
          }
          else
          {
            MiUnlockSystemVa((__int64)v96);
          }
          v10 = 0LL;
          valid = 0LL;
          v9 = 0LL;
          v78 = 0LL;
        }
        if ( !v13 )
        {
          v82 = 1;
          if ( v9 )
          {
            v23 = v78;
            goto LABEL_14;
          }
          v53 = MiGetSystemRegionType(v14);
          if ( v53 == 8 )
          {
            v54 = 0;
            goto LABEL_108;
          }
          if ( v53 == 1 )
          {
            SessionVm = MiGetSessionVm();
          }
          else
          {
            if ( v53 == 6 )
            {
              v54 = 2;
            }
            else
            {
              if ( v53 != 12 )
              {
LABEL_205:
                v42 = v76;
                v41 = v75;
                goto LABEL_60;
              }
              v54 = 1;
            }
LABEL_108:
            SessionVm = (__int64)MiGetAnyMultiplexedVm(v54);
          }
          v78 = SessionVm;
          if ( !SessionVm )
            goto LABEL_205;
          if ( !(unsigned int)MiSynchronizeSystemVa(SessionVm, v14, v56, 0, (__int64)v96) )
          {
            v43 = v78;
            v40 = valid;
            v41 = v75;
            v42 = v76;
            goto LABEL_52;
          }
          v23 = v96[3];
          v78 = v96[3];
          if ( (a3 & 1) != 0 )
          {
            v65 = MiTbFlushType(v96[3]);
            v98[1] = 20LL;
            WORD2(v98[0]) = 0;
            v98[2] = 0LL;
            v98[3] = 0LL;
            LODWORD(v98[0]) = v65;
          }
          valid = ((v14 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
LABEL_14:
          v24 = MiGetSystemRegionType(v14);
          if ( !*((_DWORD *)P + 11) )
          {
            if ( v24 != 8 || !MiGetSystemCacheReverseMap(v14, v25) )
              goto LABEL_48;
            v27 = *(_QWORD *)(MiGetSystemCacheReverseMap(v14, v26) + 24);
            v29 = v27 & 0xFFFFFFFFFFFFFFFEuLL;
            if ( (v27 & 1) == 0 )
              v29 = v27;
            if ( v23 != *(_QWORD *)(qword_140C51F48 + 8LL * (*(_WORD *)(*(_QWORD *)v29 + 60LL) & 0x3FF)) + 17024LL )
              goto LABEL_48;
            v30 = *(_QWORD *)(v28 + 32);
            if ( v30 >> 62 != 3 )
              goto LABEL_48;
            v31 = *(_QWORD *)(v28 + 24);
            v81 = (_QWORD *)v31;
            if ( (v31 & 1) != 0 )
            {
              v31 &= ~1uLL;
              v81 = (_QWORD *)v31;
            }
            if ( *(_QWORD *)v31 != v86 )
              goto LABEL_48;
            if ( (*(_BYTE *)(v28 + 16) & 3) == 0 )
              v30 = 4 * (v30 & 0xFFFFFFFFFFFF0000uLL);
            if ( v30 + (v14 & 0x3FFFF) != v20 )
              goto LABEL_48;
          }
LABEL_27:
          v88 = MI_READ_PTE_LOCK_FREE(((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          v32 = v88;
          if ( (v88 & 1) != 0 )
          {
            v44 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v88) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
            if ( ((a3 & 8) == 0 || (v32 & 0x42) == 0 && (*(_BYTE *)(v44 + 34) & 0x10) == 0)
              && *(__int64 *)(v44 + 40) < 0 )
            {
              v45 = *(_QWORD *)(v44 + 16) & 0x400LL;
              if ( (a3 & 1) != 0 )
              {
                if ( v45 && (v32 & 0x42) != 0 )
                {
                  v67 = MiLockPageInline(v44);
                  v68 = *(_BYTE *)(v44 + 34);
                  v69 = v67;
                  if ( (v68 & 0x10) == 0 )
                    *(_BYTE *)(v44 + 34) = v68 | 0x10;
                  _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  if ( KiIrqlFlags )
                  {
                    if ( (KiIrqlFlags & 1) != 0 )
                    {
                      v70 = KeGetCurrentIrql();
                      if ( v70 <= 0xFu && (unsigned __int8)v69 <= 0xFu && v70 >= 2u )
                      {
                        v71 = KeGetCurrentPrcb();
                        v72 = v71->SchedulerAssist;
                        v73 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v69 + 1));
                        v57 = (v73 & v72[5]) == 0;
                        v72[5] &= v73;
                        if ( v57 )
                          KiRemoveSystemWorkPriorityKick(v71);
                      }
                    }
                  }
                  __writecr8(v69);
                  v88 &= 0xFFFFFFFFFFFFFFBDuLL;
                  MiWriteValidPteNewProtection(((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v88);
                  MiInsertTbFlushEntry(v98, v14, 1LL, 0LL);
                }
              }
              else
              {
                if ( !v45 && (*(_DWORD *)(v86 + 56) & 0x80u) != 0 )
                  goto LABEL_28;
                v46 = MiGetWsleContents(0xFFFFFFFFFFLL, v14) & 0xF;
                if ( *((_DWORD *)P + 11) == 3 && v46 == 9 )
                  goto LABEL_28;
                if ( v46 == 8 || (a3 & 0x10) != 0 )
                {
                  v58 = 0;
                  if ( (a3 & 0x40) != 0 )
                    v58 = 0x10000;
                  if ( a3 < 0 )
                    v58 |= 0x20000u;
                  if ( (a3 & 8) != 0
                    || !v85
                    || (*(_BYTE *)(v78 + 184) & 7) == 2
                    || !(unsigned int)MiReplaceLockedPage(v78, v44, v14, v58, v82) )
                  {
                    goto LABEL_202;
                  }
                }
                else
                {
                  if ( dword_140C52B68 )
                    MI_WSLE_LOG_ACCESS(v78, (_BYTE *)(((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL));
                  if ( !HIDWORD(v99[1]) )
                  {
                    v47 = MiTbFlushType(v78);
                    v99[1] = 20LL;
                    v99[2] = 0LL;
                    v99[3] = 0LL;
                    LODWORD(v99[0]) = v47;
                    WORD2(v99[0]) = 4;
                  }
                  MiInsertTbFlushEntry(v99, v14, 1LL, 0LL);
                  if ( HIDWORD(v99[1]) == LODWORD(v99[1]) && MiFreeWsleList(v78, v99, 0LL) )
LABEL_202:
                    v79 = 277;
                }
              }
            }
          }
LABEL_28:
          v10 = valid;
LABEL_29:
          v14 += 4096LL;
          if ( v14 >= v87 )
            goto LABEL_48;
          v13 = (_KPROCESS *)Object;
          v9 = v78;
          continue;
        }
        break;
      }
      v82 = 0;
      if ( v9 )
      {
        Address = v91;
        if ( !v91
          || v19 < (*(unsigned int *)(v91 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v91 + 32) << 32))
          || v19 > (*(unsigned int *)(v91 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v91 + 33) << 32)) )
        {
          goto LABEL_35;
        }
        v36 = v86;
      }
      else
      {
        v33 = &v13[1].ActiveProcessors.StaticBitmap[26];
        v78 = (__int64)&v13[1].ActiveProcessors.StaticBitmap[26];
        if ( (a3 & 1) != 0 )
        {
          LODWORD(v98[0]) = MiTbFlushType(v33);
          v98[1] = 20LL;
          WORD2(v98[0]) = 0;
          v98[2] = v66;
          v98[3] = v66;
        }
        v77 = MiLockWorkingSetShared(v33);
LABEL_35:
        ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28]
                                                        + 284));
        Address = MiLocateAddress(v14);
        v91 = Address;
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28]
                                                          + 284));
        if ( !Address )
          goto LABEL_48;
        v35 = *(_DWORD *)(Address + 48);
        if ( (v35 & 0x200000) != 0 )
          goto LABEL_48;
        v36 = v86;
        if ( (*(_DWORD *)(v86 + 56) & 0x20) == 0 && (v35 & 0x70) != 0 )
          goto LABEL_48;
        v81 = *(_QWORD **)(Address + 72);
        if ( *v81 != v86 )
          goto LABEL_48;
        v10 = valid;
      }
      if ( (*(_DWORD *)(v36 + 56) & 0x20) != 0 )
      {
        v37 = *(_QWORD *)(Address + 80);
        if ( (unsigned __int64)v92 < v37 )
          goto LABEL_48;
        v38 = *(unsigned int *)(Address + 24);
        if ( (unsigned __int64)v92 >= v37
                                    - 8 * (v38 | ((unsigned __int64)*(unsigned __int8 *)(Address + 32) << 32))
                                    + 8
                                    * ((*(unsigned int *)(Address + 28) | ((unsigned __int64)*(unsigned __int8 *)(Address + 33) << 32))
                                     + 1) )
          goto LABEL_48;
        v14 = ((__int64)&v92[-v37] >> 3 << 12)
            + ((v38 | ((unsigned __int64)*(unsigned __int8 *)(Address + 32) << 32)) << 12);
      }
      else
      {
        ProtoPteAddress = MiGetProtoPteAddress(Address, v14 >> 12, 0LL, &v81);
        if ( !ProtoPteAddress || !v81 || v20 != MiStartingOffset(v81, ProtoPteAddress, 0xFFFFFFFFLL) )
          goto LABEL_48;
        v10 = valid;
      }
      v39 = (((((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v10 == v39 )
        goto LABEL_27;
      if ( !v10 )
      {
        valid = MiLockLowestValidPageTable(v78, ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, &v94);
        v40 = valid;
        if ( valid != v39 )
          goto LABEL_49;
        goto LABEL_27;
      }
      v14 -= 4096LL;
      v19 = v22;
      v20 = v21;
      goto LABEL_29;
    }
LABEL_48:
    v40 = valid;
LABEL_49:
    v41 = v75;
LABEL_50:
    v42 = v76;
LABEL_51:
    v43 = v78;
    v13 = (_KPROCESS *)Object;
    if ( v78 )
    {
LABEL_52:
      if ( HIDWORD(v99[1]) && MiFreeWsleList(v43, v99, 0LL) )
        v79 = 277;
      MiFlushTbList(v98);
      if ( v13 )
      {
        if ( v40 )
          MiUnlockPageTableInternal(v43, v40);
        MiUnlockWorkingSetShared(v43, v77);
      }
      else
      {
        MiUnlockSystemVa((__int64)v96);
      }
      valid = 0LL;
      v78 = 0LL;
    }
LABEL_60:
    if ( v83 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(BugCheckParameter2);
      KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
      v57 = v42->SpecialApcDisable++ == -1;
      if ( v57 && ($CEA84C04E3712D858E5667A507841A2A *)v42->ApcState.ApcListHead[0].Flink != &v42->152 )
        KiCheckForKernelApcDelivery();
    }
    if ( v41 )
    {
      MmDetachSession(v41, (__int64)v97);
      MmQuitNextSession(v41);
    }
    else if ( v84 )
    {
      KeForceDetachProcess(v97, 0);
      MiAttachThreadDone(&v13[1].ActiveProcessors.StaticBitmap[26]);
    }
    if ( v13 )
      ObfDereferenceObject(v13);
    ExFreePoolWithTag(P, 0);
    if ( v85 && (*v92 & 1) == 0 )
    {
      MiDeleteTrimViewInfoList(v93);
      return 0LL;
    }
    else
    {
      a1 = v93;
      if ( v93 )
      {
        v9 = v78;
        v10 = valid;
        CurrentThread = v76;
        continue;
      }
      return v79;
    }
  }
}
