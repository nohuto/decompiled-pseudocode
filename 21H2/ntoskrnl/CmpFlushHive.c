/*
 * XREFs of CmpFlushHive @ 0x1406A48D8
 * Callers:
 *     CmpLoadKeyCommon @ 0x14026D10C (CmpLoadKeyCommon.c)
 *     CmpDoFlushAll @ 0x14037D9EC (CmpDoFlushAll.c)
 *     CmpCompleteUnloadKey @ 0x1405E0268 (CmpCompleteUnloadKey.c)
 *     NtFlushKey @ 0x140612E10 (NtFlushKey.c)
 *     CmpDoReconcileNextHive @ 0x140664660 (CmpDoReconcileNextHive.c)
 *     CmpDoFlushNextHive @ 0x140667540 (CmpDoFlushNextHive.c)
 *     CmpInitHiveFromFile @ 0x1406A3018 (CmpInitHiveFromFile.c)
 *     CmpTransMgrPrepare @ 0x140768EC4 (CmpTransMgrPrepare.c)
 *     CmpTransMgrSyncHive @ 0x1407691DC (CmpTransMgrSyncHive.c)
 *     CmpLoadHiveThread @ 0x14079EF50 (CmpLoadHiveThread.c)
 *     CmpFinishSystemHivesLoad @ 0x1407A74B0 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1407AADF4 (CmpMountPreloadedHives.c)
 *     CmShutdownSystem @ 0x14086BA58 (CmShutdownSystem.c)
 *     CmReplaceKey @ 0x14086DB28 (CmReplaceKey.c)
 *     CmFreezeRegistry @ 0x140872250 (CmFreezeRegistry.c)
 * Callees:
 *     PoIsInitializedStopWatch @ 0x1402713C8 (PoIsInitializedStopWatch.c)
 *     RtlNumberOfSetBits @ 0x140274DA0 (RtlNumberOfSetBits.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWrite @ 0x14027F7C0 (EtwWrite.c)
 *     KeQueryUnbiasedInterruptTime @ 0x14029ABD0 (KeQueryUnbiasedInterruptTime.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     HvUnCOWReconciledPages @ 0x1402F7750 (HvUnCOWReconciledPages.c)
 *     RtlMergeBitMaps @ 0x1402F7B98 (RtlMergeBitMaps.c)
 *     CmpArmLazyWriter @ 0x140362D90 (CmpArmLazyWriter.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     HvFreeDirtyData @ 0x1405E01BC (HvFreeDirtyData.c)
 *     CmpLogFlushPhaseEnd @ 0x1406107B8 (CmpLogFlushPhaseEnd.c)
 *     CmpLogFlushPhaseStart @ 0x140611C40 (CmpLogFlushPhaseStart.c)
 *     HvFreeUnreconciledData @ 0x1406132FC (HvFreeUnreconciledData.c)
 *     HvWriteHivePrimaryFile @ 0x140613AFC (HvWriteHivePrimaryFile.c)
 *     CmpAcquireReconcilerQueue @ 0x1406162DC (CmpAcquireReconcilerQueue.c)
 *     CmpAcquireFlusherQueue @ 0x1406162F8 (CmpAcquireFlusherQueue.c)
 *     HvSwapLogFiles @ 0x140617C10 (HvSwapLogFiles.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x14061A9CC (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     CmpWakeWriteQueueWaiters @ 0x14061ACF8 (CmpWakeWriteQueueWaiters.c)
 *     HvIsCurrentLogSwappable @ 0x14061D984 (HvIsCurrentLogSwappable.c)
 *     HvTruncateAllLogFilesIfRequired @ 0x1406202D4 (HvTruncateAllLogFilesIfRequired.c)
 *     HvResetLogFileStatusAll @ 0x1406206D0 (HvResetLogFileStatusAll.c)
 *     CmpLockRegistryFreezeAware @ 0x140667920 (CmpLockRegistryFreezeAware.c)
 *     CmpTraceHiveFlushStop @ 0x1406A515C (CmpTraceHiveFlushStop.c)
 *     HvUnlockHiveWriter @ 0x1406F7EE0 (HvUnlockHiveWriter.c)
 *     HvLockHiveWriter @ 0x1406F7F10 (HvLockHiveWriter.c)
 *     HvStoreModifiedData @ 0x1406F88B8 (HvStoreModifiedData.c)
 *     HvUnlockHiveFlusherExclusive @ 0x1406F97EC (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x1406F9824 (HvLockHiveFlusherExclusive.c)
 *     HvWriteLogFile @ 0x1406F9FEC (HvWriteLogFile.c)
 *     CmpFileFlushAndPurge @ 0x1406FA1C8 (CmpFileFlushAndPurge.c)
 *     CmpGenerateFlushControlData @ 0x1406FC160 (CmpGenerateFlushControlData.c)
 *     HvTruncateCurrentLogFileIfRequired @ 0x1406FC414 (HvTruncateCurrentLogFileIfRequired.c)
 *     HvpLogTypeToLogArrayIndex @ 0x1406FC688 (HvpLogTypeToLogArrayIndex.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x14070D2F0 (CmpLockRegistry.c)
 *     CmpWaitOnHiveWriteQueue @ 0x14087279C (CmpWaitOnHiveWriteQueue.c)
 *     HvExtendHivePrimaryFileValidDataLength @ 0x140876A44 (HvExtendHivePrimaryFileValidDataLength.c)
 *     HvFoldBackDirtyData @ 0x140876AC4 (HvFoldBackDirtyData.c)
 *     HvFoldBackUnreconciledData @ 0x140876B84 (HvFoldBackUnreconciledData.c)
 *     HvMarkDirty @ 0x14087BE60 (HvMarkDirty.c)
 */

__int64 __fastcall CmpFlushHive(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  int valid; // r14d
  REGHANDLE v5; // rdi
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // r13d
  unsigned int v9; // edi
  int v10; // eax
  int v11; // edx
  __int64 v12; // rcx
  unsigned int Ptr; // esi
  int v14; // r15d
  int v15; // eax
  unsigned int v16; // r15d
  unsigned int Ptr_high; // edi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  unsigned int v21; // r12d
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rcx
  _QWORD *v26; // rcx
  struct _KEVENT *v27; // rdx
  LONG v28; // r8d
  __int64 v29; // rdx
  __int64 v30; // rcx
  char v31; // al
  bool v32; // si
  __int64 v33; // rdx
  __int64 v34; // rcx
  LONG v35; // r8d
  LONG v37; // r8d
  __int64 v38; // rdx
  __int64 v39; // r9
  __int64 v40; // rcx
  int v41; // ecx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rcx
  ULONGLONG v50; // rax
  unsigned int v51; // r9d
  __int64 v52; // rax
  unsigned int v53; // r9d
  ULONGLONG v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rax
  unsigned int v57; // r9d
  __int64 v58; // rax
  int v59; // esi
  int v60; // eax
  unsigned int v61; // edi
  __int64 v62; // rcx
  unsigned int v63; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v64; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v65; // [rsp+48h] [rbp-C0h] BYREF
  PRKEVENT EventDescriptor; // [rsp+50h] [rbp-B8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor_8; // [rsp+58h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v69; // [rsp+78h] [rbp-90h]
  int v70; // [rsp+80h] [rbp-88h]
  EVENT_DESCRIPTOR *p_EventDescriptor_8; // [rsp+88h] [rbp-80h]
  __int64 v72; // [rsp+90h] [rbp-78h]
  struct _EVENT_DATA_DESCRIPTOR UserData[2]; // [rsp+98h] [rbp-70h] BYREF
  int *v74; // [rsp+B8h] [rbp-50h]
  __int64 v75; // [rsp+C0h] [rbp-48h]
  PRKEVENT *p_EventDescriptor; // [rsp+C8h] [rbp-40h]
  int v77; // [rsp+D0h] [rbp-38h] BYREF
  int v78; // [rsp+D4h] [rbp-34h]
  _DWORD *v79; // [rsp+D8h] [rbp-30h]
  __int64 v80; // [rsp+E0h] [rbp-28h]
  __int64 v81; // [rsp+E8h] [rbp-20h]
  _DWORD v82[2]; // [rsp+F0h] [rbp-18h] BYREF
  unsigned int *v83; // [rsp+F8h] [rbp-10h]
  __int64 v84; // [rsp+100h] [rbp-8h]

  v69 = 0LL;
  v70 = 0;
  LODWORD(v65) = 0;
  v68 = 0LL;
  valid = 0;
  if ( (unsigned int)dword_140C02130 > 4 )
  {
    v63 = a2;
    v74 = &v77;
    p_EventDescriptor = *(PRKEVENT **)(BugCheckParameter2 + 1856);
    v77 = *(unsigned __int16 *)(BugCheckParameter2 + 1848);
    v79 = v82;
    v81 = *(_QWORD *)(BugCheckParameter2 + 1840);
    v82[0] = *(unsigned __int16 *)(BugCheckParameter2 + 1832);
    v83 = &v63;
    v75 = 2LL;
    v78 = 0;
    v80 = 2LL;
    v82[1] = 0;
    v84 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C02130,
      (unsigned __int8 *)byte_140023295,
      0LL,
      0LL,
      7u,
      UserData);
  }
  v5 = EtwpRegTraceHandle;
  v64 = a2;
  EventDescriptor_8 = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_FLUSH_START;
  if ( EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor_8) )
  {
    v50 = *(_QWORD *)(BugCheckParameter2 + 1840);
    v51 = 0;
    LOWORD(v63) = 0;
    if ( v50 )
    {
      UserData[0].Ptr = v50;
      v51 = 1;
      UserData[0].Size = *(unsigned __int16 *)(BugCheckParameter2 + 1832);
      UserData[0].Reserved = 0;
    }
    v52 = v51;
    v53 = v51 + 1;
    UserData[v52].Ptr = (ULONGLONG)&v63;
    *(_QWORD *)&UserData[v52].Size = 2LL;
    v54 = *(_QWORD *)(BugCheckParameter2 + 1856);
    if ( v54 )
    {
      v55 = v53++;
      UserData[v55].Ptr = v54;
      UserData[v55].Size = *(unsigned __int16 *)(BugCheckParameter2 + 1848);
      *(&UserData[0].Reserved + 1 * v55) = 0;
    }
    v56 = v53;
    v57 = v53 + 1;
    UserData[v56].Ptr = (ULONGLONG)&v63;
    *(_QWORD *)&UserData[v56].Size = 2LL;
    v58 = v57;
    UserData[v58].Ptr = (ULONGLONG)&v64;
    *(_QWORD *)&UserData[v58].Size = 4LL;
    EtwWrite(v5, &EventDescriptor_8, 0LL, v57 + 1, UserData);
  }
  v7 = *(_DWORD *)(BugCheckParameter2 + 160);
  if ( (v7 & 0x8001) != 0 )
    goto LABEL_74;
  if ( !*(_QWORD *)(BugCheckParameter2 + 1536) )
  {
    valid = -1073741811;
    goto LABEL_74;
  }
  v8 = 0;
  v9 = a2 | 0xC;
  if ( (v7 & 2) == 0 )
    v9 = a2;
  v63 = (v9 >> 4) & 1;
  v10 = v9 & 1;
  for ( *(_DWORD *)&EventDescriptor_8.Id = v10; ; v10 = *(_DWORD *)&EventDescriptor_8.Id )
  {
    if ( v10 )
      CmpLockRegistry(v6);
    else
      CmpLockRegistryFreezeAware(0);
    HvLockHiveFlusherExclusive(BugCheckParameter2);
    if ( (v9 & 2) != 0
      && (PoIsInitializedStopWatch((_QWORD *)(BugCheckParameter2 + 4248))
       || PoIsInitializedStopWatch((_QWORD *)(BugCheckParameter2 + 4232)) && (v9 & 4) == 0) )
    {
LABEL_94:
      HvUnlockHiveFlusherExclusive(BugCheckParameter2);
      CmpUnlockRegistry(v43, v42);
      valid = 0;
      goto LABEL_74;
    }
    if ( (v9 & 4) != 0 && PoIsInitializedStopWatch((_QWORD *)(BugCheckParameter2 + 4248)) )
      goto LABEL_125;
    if ( !PoIsInitializedStopWatch((_QWORD *)(BugCheckParameter2 + 4232)) )
      break;
    if ( v11 )
    {
      v59 = 0;
    }
    else if ( *(_DWORD *)(BugCheckParameter2 + 104) || (v59 = 2, *(_BYTE *)(BugCheckParameter2 + 191)) )
    {
      v59 = 1;
    }
    valid = CmpWaitOnHiveWriteQueue(BugCheckParameter2, v12);
    if ( valid >= 0 )
      v8 += v59;
LABEL_126:
    if ( v8 >= 2 )
      goto LABEL_74;
  }
  CmpGenerateFlushControlData(BugCheckParameter2, v9, &v68);
  Ptr = v68.Ptr;
  if ( (unsigned int)dword_140C02130 > 4 )
  {
    v78 = 0;
    LODWORD(EventDescriptor) = v68.Size;
    v74 = (int *)&v64;
    p_EventDescriptor = &EventDescriptor;
    v75 = 4LL;
    v77 = 4;
    v64 = v68.Ptr;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C02130,
      (unsigned __int8 *)&dword_1400232CC,
      0LL,
      0LL,
      4u,
      UserData);
  }
  if ( (Ptr & 0x358) == 0 )
    goto LABEL_94;
  if ( (Ptr & 2) == 0 )
    goto LABEL_20;
  if ( PoIsInitializedStopWatch((_QWORD *)(BugCheckParameter2 + 4248)) )
  {
LABEL_125:
    CmpWaitOnHiveWriteQueue(BugCheckParameter2, BugCheckParameter2 + 4248);
    goto LABEL_126;
  }
  CmpAcquireReconcilerQueue(BugCheckParameter2);
LABEL_20:
  if ( (Ptr & 1) != 0 )
    CmpAcquireFlusherQueue(BugCheckParameter2);
  v14 = (Ptr >> 6) & 1;
  if ( (Ptr & 8) == 0 )
  {
LABEL_25:
    if ( (Ptr & 0x158) != 0 )
      v15 = HvStoreModifiedData(BugCheckParameter2);
    else
      v15 = 0;
    if ( v15 )
    {
      v60 = v15 - 1;
      if ( !v60 )
      {
        valid = 0;
        LOBYTE(Ptr_high) = BYTE4(v68.Ptr) | 2;
        goto LABEL_63;
      }
      valid = -1073741823;
      if ( v60 == 1 )
        goto LABEL_129;
    }
    if ( (Ptr & 0x80u) != 0 )
    {
      v61 = *(_DWORD *)(BugCheckParameter2 + 272);
      v16 = *(_DWORD *)(BugCheckParameter2 + 4268);
      if ( v61 > v16 )
      {
        Ptr_high = v61 + 4096;
        *(_DWORD *)(BugCheckParameter2 + 4268) = 0;
LABEL_30:
        HvUnlockHiveFlusherExclusive(BugCheckParameter2);
        CmpUnlockRegistry(v19, v18);
        if ( (Ptr & 0x80u) != 0 )
        {
          CmpLogFlushPhaseStart(v20, 1);
          v21 = v63;
          valid = HvExtendHivePrimaryFileValidDataLength(BugCheckParameter2, Ptr_high, v63);
          CmpLogFlushPhaseEnd(v62, 1, valid);
          LOBYTE(Ptr_high) = BYTE4(v68.Ptr);
          if ( valid < 0 )
            goto LABEL_48;
          Ptr_high = HIDWORD(v68.Ptr) | 0x21;
          HIDWORD(v68.Ptr) |= 0x21u;
        }
        else
        {
          Ptr_high = HIDWORD(v68.Ptr);
          v21 = v63;
        }
        if ( (Ptr & 8) != 0 )
        {
          CmpLogFlushPhaseStart(v20, 2);
          valid = HvWriteLogFile(BugCheckParameter2, v22, v23, &v65);
          CmpLogFlushPhaseEnd(v24, 2, valid);
          if ( valid < 0 )
            goto LABEL_48;
          HvTruncateCurrentLogFileIfRequired(BugCheckParameter2);
          Ptr_high |= 2u;
          HIDWORD(v68.Ptr) = Ptr_high;
        }
        if ( (Ptr & 0x10) != 0 )
        {
          CmpLogFlushPhaseStart(v20, 3);
          LOBYTE(v44) = 1;
          valid = HvValidateOrInvalidatePrimaryFileHeader(BugCheckParameter2, 0LL, v44, v21);
          CmpLogFlushPhaseEnd(v45, 3, valid);
          if ( valid < 0 )
          {
            Ptr |= 0x400u;
            goto LABEL_48;
          }
          Ptr_high |= 0x20u;
          HIDWORD(v68.Ptr) = Ptr_high;
        }
        CmpLogFlushPhaseStart(v20, 4);
        if ( (Ptr & 0x448) == 0x48 )
        {
          RtlMergeBitMaps(BugCheckParameter2 + 1728, (unsigned int *)(BugCheckParameter2 + 1680));
          HvFreeDirtyData(BugCheckParameter2);
          Ptr_high |= 4u;
          HIDWORD(v68.Ptr) = Ptr_high;
        }
        CmpLogFlushPhaseEnd(v25, 4, valid);
        if ( (Ptr & 0x20) != 0 )
        {
          HvSwapLogFiles(BugCheckParameter2);
          Ptr_high |= 8u;
          HIDWORD(v68.Ptr) = Ptr_high;
        }
        if ( (Ptr & 0x45) == 0x41 )
        {
          CmpLockRegistry(v20);
          HvLockHiveFlusherExclusive(BugCheckParameter2);
          v26 = (_QWORD *)(BugCheckParameter2 + 4232);
          v27 = *(struct _KEVENT **)(BugCheckParameter2 + 4240);
          v28 = -1073741823;
          if ( (v68.Ptr & 0x200000000LL) != 0 )
            v28 = valid;
          *(_QWORD *)(BugCheckParameter2 + 4240) = 0LL;
          *v26 = 0LL;
          CmpWakeWriteQueueWaiters((ULONG_PTR)v26, v27, v28);
          LOBYTE(Ptr_high) = Ptr_high | 0x10;
          HvUnlockHiveFlusherExclusive(BugCheckParameter2);
          CmpUnlockRegistry(v30, v29);
        }
        if ( (Ptr & 0x40) != 0 )
        {
          CmpLogFlushPhaseStart(v20, 5);
          LOBYTE(v38) = 1;
          valid = HvWriteHivePrimaryFile(BugCheckParameter2, v38, v21, v39);
          CmpLogFlushPhaseEnd(v40, 5, valid);
          if ( valid < 0 )
            goto LABEL_48;
          LOBYTE(Ptr_high) = Ptr_high | 0x20;
        }
        if ( (Ptr & 0x100) != 0 )
        {
          CmpLogFlushPhaseStart(v20, 6);
          LOBYTE(v46) = 1;
          LOBYTE(v47) = 1;
          valid = HvValidateOrInvalidatePrimaryFileHeader(BugCheckParameter2, v47, v46, v21);
          CmpLogFlushPhaseEnd(v48, 6, valid);
          if ( valid < 0 )
            goto LABEL_48;
          LOBYTE(Ptr_high) = Ptr_high | 0x20;
          HvTruncateAllLogFilesIfRequired(BugCheckParameter2);
        }
        if ( (Ptr & 0x200) != 0 && (Ptr_high & 0x20) == 0 )
        {
          CmpLogFlushPhaseStart(v20, 7);
          if ( (int)CmpFileFlushAndPurge(BugCheckParameter2, 0LL) >= 0 )
            LOBYTE(Ptr_high) = Ptr_high | 0x20;
          CmpLogFlushPhaseEnd(v49, 7, (Ptr_high & 0x20) == 0 ? 0xC0000001 : 0);
        }
        valid = 0;
LABEL_48:
        CmpLockRegistry(v20);
        HvLockHiveFlusherExclusive(BugCheckParameter2);
        if ( valid < 0 && (Ptr & 0x80u) != 0 && (Ptr_high & 1) == 0 )
          *(_DWORD *)(BugCheckParameter2 + 4268) = v16;
        if ( (Ptr_high & 0x20) != 0 )
        {
          *(_DWORD *)(BugCheckParameter2 + 4264) |= 1u;
          *(_DWORD *)(BugCheckParameter2 + 4268) = 0;
        }
        if ( valid < 0 )
        {
          if ( (Ptr_high & 2) != 0 && (Ptr & 0x400) != 0 )
          {
            *(_DWORD *)(BugCheckParameter2 + 176) -= v65;
            --*(_DWORD *)(BugCheckParameter2 + 168);
            LOBYTE(Ptr_high) = Ptr_high & 0xFD;
          }
          goto LABEL_54;
        }
        if ( (Ptr & 0x800) != 0 )
        {
          *(_QWORD *)(BugCheckParameter2 + 4184) = KeQueryUnbiasedInterruptTime();
          if ( (Ptr & 0x1000) != 0 )
            goto LABEL_107;
          CmpArmLazyWriter(1, 0LL, 0);
        }
        if ( (Ptr & 0x1000) == 0 )
        {
LABEL_54:
          v14 = (Ptr >> 6) & 1;
          if ( v14 )
          {
            if ( valid < 0 )
            {
              HvFoldBackUnreconciledData(BugCheckParameter2);
            }
            else
            {
              HvUnCOWReconciledPages(BugCheckParameter2);
              HvFreeUnreconciledData(BugCheckParameter2);
              if ( (Ptr & 1) != 0 && (Ptr_high & 0x10) == 0 )
              {
                HvResetLogFileStatusAll(BugCheckParameter2);
                *(_DWORD *)(BugCheckParameter2 + 176) = 0;
                if ( HvIsCurrentLogSwappable(BugCheckParameter2) )
                  HvSwapLogFiles(BugCheckParameter2);
              }
              else
              {
                v41 = *(_DWORD *)(BugCheckParameter2 + 164);
                if ( (unsigned int)(v41 - 4) <= 1 )
                  *(_BYTE *)((unsigned int)HvpLogTypeToLogArrayIndex(5 - (unsigned int)(v41 != 4))
                           + BugCheckParameter2
                           + 188) = 0;
              }
            }
          }
          if ( (Ptr & 0x110) != 0 )
            HvFreeUnreconciledData(BugCheckParameter2);
          if ( (Ptr & 8) != 0 && (Ptr_high & 4) == 0 )
          {
            if ( (Ptr_high & 2) != 0 )
            {
              if ( !v14 )
              {
                RtlMergeBitMaps(BugCheckParameter2 + 112, (unsigned int *)(BugCheckParameter2 + 1680));
                *(_DWORD *)(BugCheckParameter2 + 128) = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 112));
              }
              HvFreeDirtyData(BugCheckParameter2);
            }
            else
            {
              HvFoldBackDirtyData(BugCheckParameter2);
            }
          }
          goto LABEL_63;
        }
LABEL_107:
        CmpArmLazyWriter(1, 0LL, 1);
        goto LABEL_54;
      }
      Ptr &= ~0x80u;
    }
    v16 = v69;
    Ptr_high = HIDWORD(v69);
    goto LABEL_30;
  }
  HvLockHiveWriter(BugCheckParameter2);
  if ( (unsigned __int8)HvMarkDirty(BugCheckParameter2, 0LL, 4096LL) )
  {
    HvUnlockHiveWriter(BugCheckParameter2);
    goto LABEL_25;
  }
  HvUnlockHiveWriter(BugCheckParameter2);
  valid = -1073741823;
LABEL_129:
  LOBYTE(Ptr_high) = BYTE4(v68.Ptr);
LABEL_63:
  *(_QWORD *)&EventDescriptor_8.Id = 0LL;
  EventDescriptor = 0LL;
  if ( (Ptr & 1) == 0 || (v31 = 1, (Ptr_high & 0x10) != 0) )
    v31 = 0;
  v32 = (Ptr & 2) != 0;
  LOBYTE(v63) = v31;
  if ( v31 )
  {
    *(_QWORD *)&EventDescriptor_8.Id = *(_QWORD *)(BugCheckParameter2 + 4240);
    *(_QWORD *)(BugCheckParameter2 + 4240) = 0LL;
    *(_QWORD *)(BugCheckParameter2 + 4232) = 0LL;
  }
  if ( v32 )
  {
    EventDescriptor = *(PRKEVENT *)(BugCheckParameter2 + 4256);
    *(_QWORD *)(BugCheckParameter2 + 4256) = 0LL;
    *(_QWORD *)(BugCheckParameter2 + 4248) = 0LL;
  }
  HvUnlockHiveFlusherExclusive(BugCheckParameter2);
  CmpUnlockRegistry(v34, v33);
  if ( (_BYTE)v63 )
  {
    if ( (Ptr_high & 2) != 0 )
      v35 = 0;
    else
      v35 = -1073741823;
    CmpWakeWriteQueueWaiters(BugCheckParameter2 + 4232, *(PRKEVENT *)&EventDescriptor_8.Id, v35);
  }
  if ( v32 )
  {
    v37 = valid;
    if ( !v14 )
      v37 = -1073741823;
    CmpWakeWriteQueueWaiters(BugCheckParameter2 + 4248, EventDescriptor, v37);
  }
LABEL_74:
  CmpTraceHiveFlushStop((unsigned int)valid);
  if ( (unsigned int)dword_140C02130 > 4 )
  {
    *(_DWORD *)&EventDescriptor_8.Id = valid;
    p_EventDescriptor_8 = &EventDescriptor_8;
    v72 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C02130, (unsigned __int8 *)word_140023272, 0LL, 0LL, 3u, &v68);
  }
  return (unsigned int)valid;
}
