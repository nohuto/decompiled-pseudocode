/*
 * XREFs of CmpFlushHive @ 0x1406885A4
 * Callers:
 *     CmpLoadKeyCommon @ 0x14020AABC (CmpLoadKeyCommon.c)
 *     CmpDoFlushAll @ 0x14022EA80 (CmpDoFlushAll.c)
 *     CmShutdownSystem1 @ 0x14053EBD8 (CmShutdownSystem1.c)
 *     CmpCompleteUnloadKey @ 0x14067BE48 (CmpCompleteUnloadKey.c)
 *     NtFlushKey @ 0x1406A5C00 (NtFlushKey.c)
 *     CmpDoReconcileNextHive @ 0x1406D6E10 (CmpDoReconcileNextHive.c)
 *     CmpInitHiveFromFile @ 0x1407122B0 (CmpInitHiveFromFile.c)
 *     CmpDoFlushNextHive @ 0x1407174E0 (CmpDoFlushNextHive.c)
 *     CmpTransMgrPrepare @ 0x1407424F0 (CmpTransMgrPrepare.c)
 *     CmpTransMgrSyncHive @ 0x140742834 (CmpTransMgrSyncHive.c)
 *     CmpMountPreloadedHives @ 0x14083200C (CmpMountPreloadedHives.c)
 *     CmpFinishSystemHivesLoad @ 0x140833B80 (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveThread @ 0x14083C870 (CmpLoadHiveThread.c)
 *     CmReplaceKey @ 0x1409136B4 (CmReplaceKey.c)
 *     CmFreezeRegistry @ 0x140918C40 (CmFreezeRegistry.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140209960 (RtlNumberOfSetBits.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14020A9C4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     CmpIsWriteQueueActive @ 0x14020AA74 (CmpIsWriteQueueActive.c)
 *     CmpAcquireWriteQueue @ 0x14020AA84 (CmpAcquireWriteQueue.c)
 *     HvMarkDirtyForFlush @ 0x14020AEB4 (HvMarkDirtyForFlush.c)
 *     RtlMergeBitMaps @ 0x14020AF90 (RtlMergeBitMaps.c)
 *     HvUnCOWReconciledPages @ 0x14020B270 (HvUnCOWReconciledPages.c)
 *     CmpArmLazyWriter @ 0x1402A4320 (CmpArmLazyWriter.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402F5718 (KiQueryUnbiasedInterruptTime.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     CmpTraceHiveFlushStop @ 0x140688EC0 (CmpTraceHiveFlushStop.c)
 *     CmpLogFlushPhaseEnd @ 0x140688F1C (CmpLogFlushPhaseEnd.c)
 *     CmpLogFlushPhaseStart @ 0x140688FB8 (CmpLogFlushPhaseStart.c)
 *     CmpWakeWriteQueueWaiters @ 0x140689034 (CmpWakeWriteQueueWaiters.c)
 *     CmpReleaseWriteQueue @ 0x140689074 (CmpReleaseWriteQueue.c)
 *     CmpGenerateFlushControlData @ 0x1406890A0 (CmpGenerateFlushControlData.c)
 *     CmpLockRegistryFreezeAware @ 0x140689388 (CmpLockRegistryFreezeAware.c)
 *     HvStoreModifiedData @ 0x140689424 (HvStoreModifiedData.c)
 *     HvFreeDirtyData @ 0x140689A8C (HvFreeDirtyData.c)
 *     HvTruncateCurrentLogFileIfRequired @ 0x140689B38 (HvTruncateCurrentLogFileIfRequired.c)
 *     HvpLogTypeToLogArrayIndex @ 0x140689DAC (HvpLogTypeToLogArrayIndex.c)
 *     HvWriteLogFile @ 0x14068A060 (HvWriteLogFile.c)
 *     CmpFileFlushAndPurge @ 0x14068A23C (CmpFileFlushAndPurge.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x14068EE60 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvWriteHivePrimaryFile @ 0x14068F1F8 (HvWriteHivePrimaryFile.c)
 *     HvFreeUnreconciledData @ 0x1406D92CC (HvFreeUnreconciledData.c)
 *     HvSwapLogFiles @ 0x1406DFF64 (HvSwapLogFiles.c)
 *     HvIsCurrentLogSwappable @ 0x1406E72CC (HvIsCurrentLogSwappable.c)
 *     HvTruncateAllLogFilesIfRequired @ 0x1406E9C5C (HvTruncateAllLogFilesIfRequired.c)
 *     HvResetLogFileStatusAll @ 0x1406E9D84 (HvResetLogFileStatusAll.c)
 *     HvExtendHivePrimaryFileValidDataLength @ 0x140808680 (HvExtendHivePrimaryFileValidDataLength.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140919170 (CmpWaitOnHiveWriteQueue.c)
 *     HvFoldBackDirtyData @ 0x14091D3F0 (HvFoldBackDirtyData.c)
 *     HvFoldBackUnreconciledData @ 0x14091D4B0 (HvFoldBackUnreconciledData.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140AB41E0 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140AB41FC (HvLockHiveFlusherExclusive.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140AB4370 (CmpLockRegistry.c)
 */

__int64 __fastcall CmpFlushHive(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  __int64 valid; // r15
  REGHANDLE v5; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  unsigned int v8; // r13d
  int v9; // eax
  _QWORD *v10; // rdx
  int v11; // r8d
  unsigned int v12; // r14d
  volatile signed __int64 *v13; // rbx
  char v14; // r13
  int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // r12d
  unsigned int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  int v24; // esi
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rcx
  struct _KEVENT *v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned int v37; // ebx
  int v38; // r12d
  bool v39; // al
  bool v40; // r14
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  _QWORD *v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // rdx
  __int64 v53; // rcx
  unsigned int v54; // ebx
  __int64 v55; // rcx
  ULONGLONG v56; // rax
  unsigned int v57; // r9d
  __int64 v58; // rax
  unsigned int v59; // r9d
  ULONGLONG v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rax
  unsigned int v63; // r9d
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  int v73; // esi
  int v74; // eax
  PEVENT_DATA_DESCRIPTOR UserData; // [rsp+28h] [rbp-E0h]
  __int64 v76; // [rsp+30h] [rbp-D8h]
  _WORD v77[2]; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v78; // [rsp+3Ch] [rbp-CCh]
  PRKEVENT Event; // [rsp+40h] [rbp-C8h] BYREF
  PRKEVENT Event_8[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v81; // [rsp+58h] [rbp-B0h]
  int v82; // [rsp+60h] [rbp-A8h]
  __int64 v83; // [rsp+68h] [rbp-A0h] BYREF
  PRKEVENT v84; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v85; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v86; // [rsp+80h] [rbp-88h] BYREF
  int v87; // [rsp+88h] [rbp-80h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+90h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v89[5]; // [rsp+A8h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v90[2]; // [rsp+F8h] [rbp-10h] BYREF
  PRKEVENT *p_Event; // [rsp+118h] [rbp+10h]
  int v92; // [rsp+120h] [rbp+18h]
  int v93; // [rsp+124h] [rbp+1Ch]
  PRKEVENT *v94; // [rsp+128h] [rbp+20h]
  int v95; // [rsp+130h] [rbp+28h]
  int v96; // [rsp+134h] [rbp+2Ch]
  struct _EVENT_DATA_DESCRIPTOR v97; // [rsp+138h] [rbp+30h] BYREF
  _DWORD *v98; // [rsp+158h] [rbp+50h]
  __int64 v99; // [rsp+160h] [rbp+58h]
  __int64 v100; // [rsp+168h] [rbp+60h]
  _DWORD v101[2]; // [rsp+170h] [rbp+68h] BYREF
  _DWORD *v102; // [rsp+178h] [rbp+70h]
  __int64 v103; // [rsp+180h] [rbp+78h]
  __int64 v104; // [rsp+188h] [rbp+80h]
  _DWORD v105[2]; // [rsp+190h] [rbp+88h] BYREF
  unsigned int *v106; // [rsp+198h] [rbp+90h]
  __int64 v107; // [rsp+1A0h] [rbp+98h]

  v81 = 0LL;
  v82 = 0;
  LODWORD(v83) = 0;
  *(_OWORD *)Event_8 = 0LL;
  LODWORD(valid) = 0;
  if ( (unsigned int)dword_140C03868 > 4 )
  {
    v85 = a2;
    v98 = v101;
    v100 = *(_QWORD *)(BugCheckParameter2 + 1864);
    v101[0] = *(unsigned __int16 *)(BugCheckParameter2 + 1856);
    v102 = v105;
    v104 = *(_QWORD *)(BugCheckParameter2 + 1848);
    v105[0] = *(unsigned __int16 *)(BugCheckParameter2 + 1840);
    v106 = &v85;
    v99 = 2LL;
    v101[1] = 0;
    v103 = 2LL;
    v105[1] = 0;
    v107 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C03868, (unsigned __int8 *)&word_140029676, 0LL, 0LL, 7u, &v97);
  }
  v5 = EtwpRegTraceHandle;
  v86 = a2;
  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_FLUSH_START;
  if ( EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor) )
  {
    v56 = *(_QWORD *)(BugCheckParameter2 + 1848);
    v57 = 0;
    v77[0] = 0;
    if ( v56 )
    {
      v89[0].Ptr = v56;
      v57 = 1;
      v89[0].Size = *(unsigned __int16 *)(BugCheckParameter2 + 1840);
      v89[0].Reserved = 0;
    }
    v58 = v57;
    v59 = v57 + 1;
    v89[v58].Ptr = (ULONGLONG)v77;
    *(_QWORD *)&v89[v58].Size = 2LL;
    v60 = *(_QWORD *)(BugCheckParameter2 + 1864);
    if ( v60 )
    {
      v61 = v59++;
      v89[v61].Ptr = v60;
      v89[v61].Size = *(unsigned __int16 *)(BugCheckParameter2 + 1856);
      *(&v89[0].Reserved + 1 * v61) = 0;
    }
    v62 = v59;
    v63 = v59 + 1;
    v89[v62].Ptr = (ULONGLONG)v77;
    *(_QWORD *)&v89[v62].Size = 2LL;
    v64 = v63;
    v89[v64].Ptr = (ULONGLONG)&v86;
    *(_QWORD *)&v89[v64].Size = 4LL;
    EtwWrite(v5, &EventDescriptor, 0LL, v63 + 1, v89);
  }
  v6 = *(_DWORD *)(BugCheckParameter2 + 160);
  if ( (v6 & 0x8001) != 0 )
    goto LABEL_74;
  if ( !*(_QWORD *)(BugCheckParameter2 + 1544) )
  {
    LODWORD(valid) = -1073741811;
    goto LABEL_74;
  }
  v7 = a2 | 0xC;
  v8 = 0;
  if ( (v6 & 2) == 0 )
    v7 = a2;
  v78 = (v7 >> 4) & 1;
  v9 = v7 & 1;
  LODWORD(Event) = v9;
  while ( 1 )
  {
    if ( v9 )
      CmpLockRegistry();
    else
      CmpLockRegistryFreezeAware(0LL);
    HvLockHiveFlusherExclusive(BugCheckParameter2);
    if ( (*(_DWORD *)(BugCheckParameter2 + 164) & 4) != 0 && (v7 & 0x40) == 0 )
    {
      HvUnlockHiveFlusherExclusive(BugCheckParameter2);
      CmpUnlockRegistry(v66, v65, v67, v68, UserData, v76);
      LODWORD(valid) = -1073741431;
      goto LABEL_74;
    }
    if ( (v7 & 2) != 0 )
    {
      if ( CmpIsWriteQueueActive((_QWORD *)(BugCheckParameter2 + 4208))
        || CmpIsWriteQueueActive((_QWORD *)(BugCheckParameter2 + 4192)) && (v7 & 4) == 0 )
      {
        goto LABEL_120;
      }
    }
    else
    {
      v10 = (_QWORD *)(BugCheckParameter2 + 4208);
    }
    if ( (v7 & 4) != 0 && CmpIsWriteQueueActive(v10) )
      goto LABEL_128;
    if ( !CmpIsWriteQueueActive((_QWORD *)(BugCheckParameter2 + 4192)) )
      break;
    if ( v11 )
    {
      v73 = 0;
    }
    else if ( *(_DWORD *)(BugCheckParameter2 + 104) || (v73 = 2, *(_BYTE *)(BugCheckParameter2 + 195)) )
    {
      v73 = 1;
    }
    LODWORD(valid) = CmpWaitOnHiveWriteQueue(BugCheckParameter2);
    if ( (int)valid >= 0 )
      v8 += v73;
LABEL_129:
    if ( v8 >= 2 )
      goto LABEL_74;
    v9 = (int)Event;
  }
  CmpGenerateFlushControlData(BugCheckParameter2, v7, Event_8);
  v12 = (unsigned int)Event_8[0];
  if ( (unsigned int)dword_140C03868 > 4 )
  {
    v93 = 0;
    v96 = 0;
    LODWORD(v84) = Event_8[1];
    p_Event = (PRKEVENT *)&v87;
    v94 = &v84;
    v92 = 4;
    v95 = 4;
    v87 = (int)Event_8[0];
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C03868, (unsigned __int8 *)byte_1400296AD, 0LL, 0LL, 4u, v90);
  }
  if ( (v12 & 0x358) == 0 )
  {
LABEL_120:
    HvUnlockHiveFlusherExclusive(BugCheckParameter2);
    CmpUnlockRegistry(v70, v69, v71, v72, UserData, v76);
    LODWORD(valid) = 0;
    goto LABEL_74;
  }
  if ( (v12 & 2) == 0 )
    goto LABEL_20;
  if ( CmpIsWriteQueueActive((_QWORD *)(BugCheckParameter2 + 4208)) )
  {
LABEL_128:
    CmpWaitOnHiveWriteQueue(BugCheckParameter2);
    goto LABEL_129;
  }
  CmpAcquireWriteQueue(v46);
LABEL_20:
  if ( (v12 & 1) != 0 )
    CmpAcquireWriteQueue((_QWORD *)(BugCheckParameter2 + 4192));
  if ( (v12 & 8) == 0 )
  {
LABEL_27:
    v14 = (char)Event_8[1];
    if ( (v12 & 0x158) != 0 )
    {
      v15 = HvStoreModifiedData(BugCheckParameter2);
      if ( v15 )
      {
        v74 = v15 - 1;
        if ( !v74 )
        {
          LODWORD(valid) = 0;
          LOBYTE(v24) = BYTE4(Event_8[0]) | 2;
          goto LABEL_63;
        }
        LODWORD(valid) = -1073741823;
        if ( v74 == 1 )
        {
          LOBYTE(v24) = BYTE4(Event_8[0]);
          goto LABEL_63;
        }
      }
    }
    if ( (v12 & 0x80u) != 0 )
    {
      v54 = *(_DWORD *)(BugCheckParameter2 + 280);
      v17 = *(_DWORD *)(BugCheckParameter2 + 4228);
      if ( v54 > v17 )
      {
        v18 = v54 + 4096;
        *(_DWORD *)(BugCheckParameter2 + 4228) = 0;
LABEL_31:
        HvUnlockHiveFlusherExclusive(BugCheckParameter2);
        CmpUnlockRegistry(v20, v19, v21, v22, UserData, v76);
        if ( (v12 & 0x80u) != 0 )
        {
          CmpLogFlushPhaseStart(v23, 1LL);
          valid = (unsigned int)HvExtendHivePrimaryFileValidDataLength(BugCheckParameter2, v18, v78);
          CmpLogFlushPhaseEnd(v55, 1LL, valid);
          LOBYTE(v24) = BYTE4(Event_8[0]);
          if ( (int)valid < 0 )
            goto LABEL_48;
          v24 = HIDWORD(Event_8[0]) | 0x21;
          HIDWORD(Event_8[0]) |= 0x21u;
        }
        else
        {
          v24 = HIDWORD(Event_8[0]);
        }
        if ( (v12 & 8) != 0 )
        {
          CmpLogFlushPhaseStart(v23, 2LL);
          valid = (unsigned int)HvWriteLogFile(BugCheckParameter2, v25, v26, &v83);
          CmpLogFlushPhaseEnd(v27, 2LL, valid);
          if ( (int)valid < 0 )
            goto LABEL_48;
          HvTruncateCurrentLogFileIfRequired(BugCheckParameter2);
          v24 |= 2u;
          HIDWORD(Event_8[0]) = v24;
        }
        if ( (v12 & 0x10) != 0 )
        {
          CmpLogFlushPhaseStart(v23, 3LL);
          LOBYTE(v49) = 1;
          valid = (unsigned int)HvValidateOrInvalidatePrimaryFileHeader(BugCheckParameter2, 0LL, v49, v78);
          CmpLogFlushPhaseEnd(v50, 3LL, valid);
          if ( (int)valid < 0 )
          {
            v12 |= 0x400u;
            goto LABEL_48;
          }
          v24 |= 0x20u;
          HIDWORD(Event_8[0]) = v24;
        }
        CmpLogFlushPhaseStart(v23, 4LL);
        if ( (v12 & 0x448) == 0x48 )
        {
          RtlMergeBitMaps(BugCheckParameter2 + 1736, (unsigned int *)(BugCheckParameter2 + 1688));
          HvFreeDirtyData(BugCheckParameter2);
          v24 |= 4u;
          HIDWORD(Event_8[0]) = v24;
        }
        CmpLogFlushPhaseEnd(v28, 4LL, (unsigned int)valid);
        if ( (v12 & 0x20) != 0 )
        {
          LOBYTE(v29) = (v14 & 4) != 0;
          HvSwapLogFiles(BugCheckParameter2, v29);
          v24 |= 8u;
          HIDWORD(Event_8[0]) = v24;
        }
        if ( (v12 & 0x45) == 0x41 )
        {
          CmpLockRegistry();
          HvLockHiveFlusherExclusive(BugCheckParameter2);
          v32 = (struct _KEVENT *)CmpReleaseWriteQueue(v31, BugCheckParameter2 + 4192);
          CmpWakeWriteQueueWaiters(BugCheckParameter2 + 4192, v32);
          LOBYTE(v24) = v24 | 0x10;
          HvUnlockHiveFlusherExclusive(BugCheckParameter2);
          CmpUnlockRegistry(v34, v33, v35, v36, UserData, v76);
        }
        if ( (v12 & 0x40) != 0 )
        {
          CmpLogFlushPhaseStart(v30, 5LL);
          v37 = v78;
          valid = (unsigned int)HvWriteHivePrimaryFile(BugCheckParameter2);
          CmpLogFlushPhaseEnd(v47, 5LL, valid);
          if ( (int)valid < 0 )
            goto LABEL_48;
          LOBYTE(v24) = v24 | 0x20;
        }
        else
        {
          v37 = v78;
        }
        if ( (v12 & 0x100) != 0 )
        {
          CmpLogFlushPhaseStart(v30, 6LL);
          LOBYTE(v51) = 1;
          LOBYTE(v52) = 1;
          valid = (unsigned int)HvValidateOrInvalidatePrimaryFileHeader(BugCheckParameter2, v52, v51, v37);
          CmpLogFlushPhaseEnd(v53, 6LL, valid);
          if ( (int)valid < 0 )
            goto LABEL_48;
          LOBYTE(v24) = v24 | 0x20;
          HvTruncateAllLogFilesIfRequired(BugCheckParameter2);
        }
        if ( (v12 & 0x200) != 0 && (v24 & 0x20) == 0 )
        {
          CmpLogFlushPhaseStart(v30, 7LL);
          if ( (int)CmpFileFlushAndPurge(BugCheckParameter2, 0LL) >= 0 )
            LOBYTE(v24) = v24 | 0x20;
          CmpLogFlushPhaseEnd(v48, 7LL, (v24 & 0x20) == 0 ? 0xC0000001 : 0);
        }
        LODWORD(valid) = 0;
LABEL_48:
        CmpLockRegistry();
        HvLockHiveFlusherExclusive(BugCheckParameter2);
        if ( (int)valid < 0 && (v12 & 0x80u) != 0 && (v24 & 1) == 0 )
          *(_DWORD *)(BugCheckParameter2 + 4228) = v17;
        if ( (v24 & 0x20) != 0 )
        {
          *(_DWORD *)(BugCheckParameter2 + 4228) = 0;
          *(_DWORD *)(BugCheckParameter2 + 4224) |= 1u;
        }
        if ( (int)valid < 0 )
        {
          if ( (v24 & 2) != 0 && (v12 & 0x400) != 0 )
          {
            *(_DWORD *)(BugCheckParameter2 + 180) -= v83;
            --*(_DWORD *)(BugCheckParameter2 + 172);
            LOBYTE(v24) = v24 & 0xFD;
          }
          goto LABEL_54;
        }
        if ( (v12 & 0x800) != 0 )
        {
          *(_QWORD *)(BugCheckParameter2 + 4144) = KiQueryUnbiasedInterruptTime();
          if ( (v12 & 0x1000) != 0 )
            goto LABEL_105;
          CmpArmLazyWriter(1, 0LL, 0);
        }
        if ( (v12 & 0x1000) == 0 )
        {
LABEL_54:
          v38 = (v12 >> 6) & 1;
          if ( v38 )
          {
            if ( (int)valid < 0 )
            {
              HvFoldBackUnreconciledData(BugCheckParameter2);
            }
            else
            {
              HvUnCOWReconciledPages(BugCheckParameter2);
              HvFreeUnreconciledData(BugCheckParameter2);
              if ( (v12 & 1) != 0 && (v24 & 0x10) == 0 )
              {
                HvResetLogFileStatusAll(BugCheckParameter2);
                *(_DWORD *)(BugCheckParameter2 + 180) = 0;
                if ( (unsigned __int8)HvIsCurrentLogSwappable(BugCheckParameter2) )
                  HvSwapLogFiles(BugCheckParameter2, 0LL);
              }
              else
              {
                v16 = *(unsigned int *)(BugCheckParameter2 + 168);
                if ( (unsigned int)(v16 - 4) <= 1 )
                {
                  v16 = (unsigned int)HvpLogTypeToLogArrayIndex(5 - (unsigned int)((_DWORD)v16 != 4));
                  *(_BYTE *)(v16 + BugCheckParameter2 + 192) = 0;
                }
              }
            }
          }
          if ( (v12 & 0x110) != 0 )
            HvFreeUnreconciledData(BugCheckParameter2);
          if ( (v12 & 8) != 0 && (v24 & 4) == 0 )
          {
            if ( (v24 & 2) != 0 )
            {
              if ( !v38 )
              {
                RtlMergeBitMaps(BugCheckParameter2 + 112, (unsigned int *)(BugCheckParameter2 + 1688));
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
LABEL_105:
        CmpArmLazyWriter(1, 0LL, 1);
        goto LABEL_54;
      }
      v12 &= ~0x80u;
    }
    v17 = v81;
    v18 = HIDWORD(v81);
    goto LABEL_31;
  }
  v13 = (volatile signed __int64 *)(BugCheckParameter2 + 80);
  ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 80, 0LL);
  LODWORD(valid) = HvMarkDirtyForFlush(BugCheckParameter2);
  if ( (int)valid >= 0 )
  {
    if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(BugCheckParameter2 + 80);
    KeAbPostRelease(BugCheckParameter2 + 80);
    v12 = (unsigned int)Event_8[0];
    goto LABEL_27;
  }
  if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2 + 80);
  KeAbPostRelease(BugCheckParameter2 + 80);
  LOBYTE(v24) = BYTE4(Event_8[0]);
  LODWORD(valid) = -1073741823;
  LOBYTE(v12) = Event_8[0];
LABEL_63:
  Event = 0LL;
  v84 = 0LL;
  v39 = (v12 & 1) != 0 && (v24 & 0x10) == 0;
  v40 = (v12 & 2) != 0;
  LOBYTE(v77[0]) = v39;
  if ( v39 )
    Event = (PRKEVENT)CmpReleaseWriteQueue(v16, BugCheckParameter2 + 4192);
  if ( v40 )
    v84 = (PRKEVENT)CmpReleaseWriteQueue(v16, BugCheckParameter2 + 4208);
  HvUnlockHiveFlusherExclusive(BugCheckParameter2);
  CmpUnlockRegistry(v42, v41, v43, v44, UserData, v76);
  if ( LOBYTE(v77[0]) )
    CmpWakeWriteQueueWaiters(BugCheckParameter2 + 4192, Event);
  if ( v40 )
    CmpWakeWriteQueueWaiters(BugCheckParameter2 + 4208, v84);
LABEL_74:
  CmpTraceHiveFlushStop((unsigned int)valid);
  if ( (unsigned int)dword_140C03868 > 4 )
  {
    v93 = 0;
    p_Event = &Event;
    LODWORD(Event) = valid;
    v92 = 4;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C03868, (unsigned __int8 *)byte_140029653, 0LL, 0LL, 3u, v90);
  }
  return (unsigned int)valid;
}
