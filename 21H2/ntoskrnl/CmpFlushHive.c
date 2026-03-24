/*
 * XREFs of CmpFlushHive @ 0x14062A0D8
 * Callers:
 *     CmpLoadKeyCommon @ 0x14036195C (CmpLoadKeyCommon.c)
 *     CmpDoFlushAll @ 0x14037DE9C (CmpDoFlushAll.c)
 *     CmpInitHiveFromFile @ 0x140670FA8 (CmpInitHiveFromFile.c)
 *     CmpDoFlushNextHive @ 0x140672310 (CmpDoFlushNextHive.c)
 *     NtFlushKey @ 0x1406B3C40 (NtFlushKey.c)
 *     CmpCompleteUnloadKey @ 0x14071CB34 (CmpCompleteUnloadKey.c)
 *     CmpDoReconcileNextHive @ 0x140725080 (CmpDoReconcileNextHive.c)
 *     CmpTransMgrPrepare @ 0x140768D04 (CmpTransMgrPrepare.c)
 *     CmpTransMgrSyncHive @ 0x14076901C (CmpTransMgrSyncHive.c)
 *     CmpLoadHiveThread @ 0x14079ED50 (CmpLoadHiveThread.c)
 *     CmpFinishSystemHivesLoad @ 0x1407A72B0 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1407AABF4 (CmpMountPreloadedHives.c)
 *     CmShutdownSystem @ 0x14086B8F8 (CmShutdownSystem.c)
 *     CmReplaceKey @ 0x14086D9C8 (CmReplaceKey.c)
 *     CmFreezeRegistry @ 0x1408720F0 (CmFreezeRegistry.c)
 * Callees:
 *     EtwEventEnabled @ 0x14021BF30 (EtwEventEnabled.c)
 *     RtlNumberOfSetBits @ 0x140253830 (RtlNumberOfSetBits.c)
 *     EtwWrite @ 0x14025DC90 (EtwWrite.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14025FAE0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PoIsInitializedStopWatch @ 0x140263FA8 (PoIsInitializedStopWatch.c)
 *     KeQueryUnbiasedInterruptTime @ 0x1402E9880 (KeQueryUnbiasedInterruptTime.c)
 *     CmpArmLazyWriter @ 0x140358040 (CmpArmLazyWriter.c)
 *     HvUnCOWReconciledPages @ 0x140362560 (HvUnCOWReconciledPages.c)
 *     RtlMergeBitMaps @ 0x1403629A8 (RtlMergeBitMaps.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     CmpLockRegistryFreezeAware @ 0x1406726F0 (CmpLockRegistryFreezeAware.c)
 *     CmpLogFlushPhaseEnd @ 0x1406B1808 (CmpLogFlushPhaseEnd.c)
 *     CmpLogFlushPhaseStart @ 0x1406B2B80 (CmpLogFlushPhaseStart.c)
 *     HvFreeUnreconciledData @ 0x1406B412C (HvFreeUnreconciledData.c)
 *     CmpTraceHiveFlushStop @ 0x1406B5860 (CmpTraceHiveFlushStop.c)
 *     CmpAcquireReconcilerQueue @ 0x1406B6E7C (CmpAcquireReconcilerQueue.c)
 *     CmpAcquireFlusherQueue @ 0x1406B6E98 (CmpAcquireFlusherQueue.c)
 *     CmpWakeWriteQueueWaiters @ 0x1406BBC78 (CmpWakeWriteQueueWaiters.c)
 *     HvResetLogFileStatusAll @ 0x1406C19C8 (HvResetLogFileStatusAll.c)
 *     CmpUnlockRegistry @ 0x1406F5ED0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1406F5F10 (CmpLockRegistry.c)
 *     HvFreeDirtyData @ 0x14071C81C (HvFreeDirtyData.c)
 *     HvWriteLogFile @ 0x14071DA5C (HvWriteLogFile.c)
 *     CmpFileFlushAndPurge @ 0x14071DC38 (CmpFileFlushAndPurge.c)
 *     HvUnlockHiveFlusherExclusive @ 0x14071E188 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x14071E1C0 (HvLockHiveFlusherExclusive.c)
 *     HvUnlockHiveWriter @ 0x140720A6C (HvUnlockHiveWriter.c)
 *     HvLockHiveWriter @ 0x140720A9C (HvLockHiveWriter.c)
 *     HvStoreModifiedData @ 0x140721060 (HvStoreModifiedData.c)
 *     CmpGenerateFlushControlData @ 0x140724134 (CmpGenerateFlushControlData.c)
 *     HvTruncateCurrentLogFileIfRequired @ 0x1407243E8 (HvTruncateCurrentLogFileIfRequired.c)
 *     HvpLogTypeToLogArrayIndex @ 0x14072465C (HvpLogTypeToLogArrayIndex.c)
 *     HvWriteHivePrimaryFile @ 0x140725240 (HvWriteHivePrimaryFile.c)
 *     HvIsCurrentLogSwappable @ 0x1407254F4 (HvIsCurrentLogSwappable.c)
 *     HvSwapLogFiles @ 0x140725538 (HvSwapLogFiles.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x14072570C (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvTruncateAllLogFilesIfRequired @ 0x140725808 (HvTruncateAllLogFilesIfRequired.c)
 *     CmpWaitOnHiveWriteQueue @ 0x14087263C (CmpWaitOnHiveWriteQueue.c)
 *     HvExtendHivePrimaryFileValidDataLength @ 0x1408768E4 (HvExtendHivePrimaryFileValidDataLength.c)
 *     HvFoldBackDirtyData @ 0x140876964 (HvFoldBackDirtyData.c)
 *     HvFoldBackUnreconciledData @ 0x140876A24 (HvFoldBackUnreconciledData.c)
 *     HvMarkDirty @ 0x14087BD00 (HvMarkDirty.c)
 */

__int64 __fastcall CmpFlushHive(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  __int64 valid; // r14
  REGHANDLE v5; // rdi
  int v6; // eax
  unsigned int v7; // r13d
  unsigned int v8; // edi
  int v9; // eax
  int v10; // edx
  __int64 v11; // rcx
  unsigned int Ptr; // esi
  int v13; // eax
  unsigned int v14; // r15d
  unsigned int Ptr_high; // edi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  unsigned int v19; // r12d
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  struct _KEVENT *v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // r15d
  char v29; // al
  bool v30; // si
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v34; // rcx
  int v35; // ecx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rcx
  ULONGLONG v45; // rax
  unsigned int v46; // r9d
  __int64 v47; // rax
  unsigned int v48; // r9d
  ULONGLONG v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rax
  unsigned int v52; // r9d
  __int64 v53; // rax
  int v54; // esi
  int v55; // eax
  unsigned int v56; // edi
  __int64 v57; // rcx
  unsigned int v58; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v59; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v60; // [rsp+48h] [rbp-C0h] BYREF
  PRKEVENT EventDescriptor; // [rsp+50h] [rbp-B8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor_8; // [rsp+58h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v64; // [rsp+78h] [rbp-90h]
  int v65; // [rsp+80h] [rbp-88h]
  EVENT_DESCRIPTOR *p_EventDescriptor_8; // [rsp+88h] [rbp-80h]
  __int64 v67; // [rsp+90h] [rbp-78h]
  struct _EVENT_DATA_DESCRIPTOR UserData[2]; // [rsp+98h] [rbp-70h] BYREF
  int *v69; // [rsp+B8h] [rbp-50h]
  __int64 v70; // [rsp+C0h] [rbp-48h]
  PRKEVENT *p_EventDescriptor; // [rsp+C8h] [rbp-40h]
  int v72; // [rsp+D0h] [rbp-38h] BYREF
  int v73; // [rsp+D4h] [rbp-34h]
  _DWORD *v74; // [rsp+D8h] [rbp-30h]
  __int64 v75; // [rsp+E0h] [rbp-28h]
  __int64 v76; // [rsp+E8h] [rbp-20h]
  _DWORD v77[2]; // [rsp+F0h] [rbp-18h] BYREF
  unsigned int *v78; // [rsp+F8h] [rbp-10h]
  __int64 v79; // [rsp+100h] [rbp-8h]

  v64 = 0LL;
  v65 = 0;
  LODWORD(v60) = 0;
  v63 = 0LL;
  LODWORD(valid) = 0;
  if ( (unsigned int)dword_140C02130 > 4 )
  {
    v58 = a2;
    v69 = &v72;
    p_EventDescriptor = *(PRKEVENT **)(BugCheckParameter2 + 1856);
    v72 = *(unsigned __int16 *)(BugCheckParameter2 + 1848);
    v74 = v77;
    v76 = *(_QWORD *)(BugCheckParameter2 + 1840);
    v77[0] = *(unsigned __int16 *)(BugCheckParameter2 + 1832);
    v78 = &v58;
    v70 = 2LL;
    v73 = 0;
    v75 = 2LL;
    v77[1] = 0;
    v79 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C02130,
      (unsigned __int8 *)&byte_140023207,
      0LL,
      0LL,
      7u,
      UserData);
  }
  v5 = EtwpRegTraceHandle;
  v59 = a2;
  EventDescriptor_8 = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_FLUSH_START;
  if ( EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor_8) )
  {
    v45 = *(_QWORD *)(BugCheckParameter2 + 1840);
    v46 = 0;
    LOWORD(v58) = 0;
    if ( v45 )
    {
      UserData[0].Ptr = v45;
      v46 = 1;
      UserData[0].Size = *(unsigned __int16 *)(BugCheckParameter2 + 1832);
      UserData[0].Reserved = 0;
    }
    v47 = v46;
    v48 = v46 + 1;
    UserData[v47].Ptr = (ULONGLONG)&v58;
    *(_QWORD *)&UserData[v47].Size = 2LL;
    v49 = *(_QWORD *)(BugCheckParameter2 + 1856);
    if ( v49 )
    {
      v50 = v48++;
      UserData[v50].Ptr = v49;
      UserData[v50].Size = *(unsigned __int16 *)(BugCheckParameter2 + 1848);
      *(&UserData[0].Reserved + 1 * v50) = 0;
    }
    v51 = v48;
    v52 = v48 + 1;
    UserData[v51].Ptr = (ULONGLONG)&v58;
    *(_QWORD *)&UserData[v51].Size = 2LL;
    v53 = v52;
    UserData[v53].Ptr = (ULONGLONG)&v59;
    *(_QWORD *)&UserData[v53].Size = 4LL;
    EtwWrite(v5, &EventDescriptor_8, 0LL, v52 + 1, UserData);
  }
  v6 = *(_DWORD *)(BugCheckParameter2 + 160);
  if ( (v6 & 0x8001) != 0 )
    goto LABEL_71;
  if ( !*(_QWORD *)(BugCheckParameter2 + 1536) )
  {
    LODWORD(valid) = -1073741811;
    goto LABEL_71;
  }
  v7 = 0;
  v8 = a2 | 0xC;
  if ( (v6 & 2) == 0 )
    v8 = a2;
  v58 = (v8 >> 4) & 1;
  v9 = v8 & 1;
  for ( *(_DWORD *)&EventDescriptor_8.Id = v9; ; v9 = *(_DWORD *)&EventDescriptor_8.Id )
  {
    if ( v9 )
      CmpLockRegistry();
    else
      CmpLockRegistryFreezeAware(0LL);
    HvLockHiveFlusherExclusive(BugCheckParameter2);
    if ( (v8 & 2) != 0
      && (PoIsInitializedStopWatch((_QWORD *)(BugCheckParameter2 + 4248))
       || PoIsInitializedStopWatch((_QWORD *)(BugCheckParameter2 + 4232)) && (v8 & 4) == 0) )
    {
LABEL_88:
      HvUnlockHiveFlusherExclusive(BugCheckParameter2);
      CmpUnlockRegistry(v37, v36);
      LODWORD(valid) = 0;
      goto LABEL_71;
    }
    if ( (v8 & 4) != 0 && PoIsInitializedStopWatch((_QWORD *)(BugCheckParameter2 + 4248)) )
      goto LABEL_118;
    if ( !PoIsInitializedStopWatch((_QWORD *)(BugCheckParameter2 + 4232)) )
      break;
    if ( v10 )
    {
      v54 = 0;
    }
    else if ( *(_DWORD *)(BugCheckParameter2 + 104) || (v54 = 2, *(_BYTE *)(BugCheckParameter2 + 191)) )
    {
      v54 = 1;
    }
    LODWORD(valid) = CmpWaitOnHiveWriteQueue(BugCheckParameter2, v11);
    if ( (int)valid >= 0 )
      v7 += v54;
LABEL_119:
    if ( v7 >= 2 )
      goto LABEL_71;
  }
  CmpGenerateFlushControlData(BugCheckParameter2, v8, &v63);
  Ptr = v63.Ptr;
  if ( (unsigned int)dword_140C02130 > 4 )
  {
    v73 = 0;
    LODWORD(EventDescriptor) = v63.Size;
    v69 = (int *)&v59;
    p_EventDescriptor = &EventDescriptor;
    v70 = 4LL;
    v72 = 4;
    v59 = v63.Ptr;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C02130,
      (unsigned __int8 *)&word_14002323E,
      0LL,
      0LL,
      4u,
      UserData);
  }
  if ( (Ptr & 0x358) == 0 )
    goto LABEL_88;
  if ( (Ptr & 2) == 0 )
    goto LABEL_20;
  if ( PoIsInitializedStopWatch((_QWORD *)(BugCheckParameter2 + 4248)) )
  {
LABEL_118:
    CmpWaitOnHiveWriteQueue(BugCheckParameter2, BugCheckParameter2 + 4248);
    goto LABEL_119;
  }
  CmpAcquireReconcilerQueue(BugCheckParameter2);
LABEL_20:
  if ( (Ptr & 1) != 0 )
    CmpAcquireFlusherQueue(BugCheckParameter2);
  if ( (Ptr & 8) == 0 )
  {
LABEL_25:
    if ( (Ptr & 0x158) != 0 )
      v13 = HvStoreModifiedData(BugCheckParameter2);
    else
      v13 = 0;
    if ( v13 )
    {
      v55 = v13 - 1;
      if ( !v55 )
      {
        LODWORD(valid) = 0;
        LOBYTE(Ptr_high) = BYTE4(v63.Ptr) | 2;
        goto LABEL_61;
      }
      LODWORD(valid) = -1073741823;
      if ( v55 == 1 )
        goto LABEL_122;
    }
    if ( (Ptr & 0x80u) != 0 )
    {
      v56 = *(_DWORD *)(BugCheckParameter2 + 272);
      v14 = *(_DWORD *)(BugCheckParameter2 + 4268);
      if ( v56 > v14 )
      {
        Ptr_high = v56 + 4096;
        *(_DWORD *)(BugCheckParameter2 + 4268) = 0;
LABEL_30:
        HvUnlockHiveFlusherExclusive(BugCheckParameter2);
        CmpUnlockRegistry(v17, v16);
        if ( (Ptr & 0x80u) != 0 )
        {
          CmpLogFlushPhaseStart(v18, 1LL);
          v19 = v58;
          valid = (unsigned int)HvExtendHivePrimaryFileValidDataLength(BugCheckParameter2, Ptr_high, v58);
          CmpLogFlushPhaseEnd(v57, 1LL, valid);
          LOBYTE(Ptr_high) = BYTE4(v63.Ptr);
          if ( (int)valid < 0 )
            goto LABEL_46;
          Ptr_high = HIDWORD(v63.Ptr) | 0x21;
          HIDWORD(v63.Ptr) |= 0x21u;
        }
        else
        {
          Ptr_high = HIDWORD(v63.Ptr);
          v19 = v58;
        }
        if ( (Ptr & 8) != 0 )
        {
          CmpLogFlushPhaseStart(v18, 2LL);
          valid = (unsigned int)HvWriteLogFile(BugCheckParameter2, v20, v21, &v60);
          CmpLogFlushPhaseEnd(v22, 2LL, valid);
          if ( (int)valid < 0 )
            goto LABEL_46;
          HvTruncateCurrentLogFileIfRequired(BugCheckParameter2);
          Ptr_high |= 2u;
          HIDWORD(v63.Ptr) = Ptr_high;
        }
        if ( (Ptr & 0x10) != 0 )
        {
          CmpLogFlushPhaseStart(v18, 3LL);
          LOBYTE(v39) = 1;
          valid = (unsigned int)HvValidateOrInvalidatePrimaryFileHeader(BugCheckParameter2, 0LL, v39, v19);
          CmpLogFlushPhaseEnd(v40, 3LL, valid);
          if ( (int)valid < 0 )
          {
            Ptr |= 0x400u;
            goto LABEL_46;
          }
          Ptr_high |= 0x20u;
          HIDWORD(v63.Ptr) = Ptr_high;
        }
        CmpLogFlushPhaseStart(v18, 4LL);
        if ( (Ptr & 0x448) == 0x48 )
        {
          RtlMergeBitMaps(BugCheckParameter2 + 1728, (unsigned int *)(BugCheckParameter2 + 1680));
          HvFreeDirtyData(BugCheckParameter2);
          Ptr_high |= 4u;
          HIDWORD(v63.Ptr) = Ptr_high;
        }
        CmpLogFlushPhaseEnd(v23, 4LL, (unsigned int)valid);
        if ( (Ptr & 0x20) != 0 )
        {
          v38 = v63.Size >> 2;
          LOBYTE(v38) = (v63.Size & 4) != 0;
          HvSwapLogFiles(BugCheckParameter2, v38);
          Ptr_high |= 8u;
          HIDWORD(v63.Ptr) = Ptr_high;
        }
        if ( (Ptr & 0x45) == 0x41 )
        {
          CmpLockRegistry();
          HvLockHiveFlusherExclusive(BugCheckParameter2);
          v25 = *(struct _KEVENT **)(BugCheckParameter2 + 4240);
          *(_QWORD *)(BugCheckParameter2 + 4240) = 0LL;
          *(_QWORD *)(BugCheckParameter2 + 4232) = 0LL;
          CmpWakeWriteQueueWaiters(BugCheckParameter2 + 4232, v25);
          LOBYTE(Ptr_high) = Ptr_high | 0x10;
          HvUnlockHiveFlusherExclusive(BugCheckParameter2);
          CmpUnlockRegistry(v27, v26);
        }
        if ( (Ptr & 0x40) != 0 )
        {
          CmpLogFlushPhaseStart(v24, 5LL);
          valid = (unsigned int)HvWriteHivePrimaryFile(BugCheckParameter2);
          CmpLogFlushPhaseEnd(v34, 5LL, valid);
          if ( (int)valid < 0 )
            goto LABEL_46;
          LOBYTE(Ptr_high) = Ptr_high | 0x20;
        }
        if ( (Ptr & 0x100) != 0 )
        {
          CmpLogFlushPhaseStart(v24, 6LL);
          LOBYTE(v41) = 1;
          LOBYTE(v42) = 1;
          valid = (unsigned int)HvValidateOrInvalidatePrimaryFileHeader(BugCheckParameter2, v42, v41, v19);
          CmpLogFlushPhaseEnd(v43, 6LL, valid);
          if ( (int)valid < 0 )
            goto LABEL_46;
          LOBYTE(Ptr_high) = Ptr_high | 0x20;
          HvTruncateAllLogFilesIfRequired(BugCheckParameter2);
        }
        if ( (Ptr & 0x200) != 0 && (Ptr_high & 0x20) == 0 )
        {
          CmpLogFlushPhaseStart(v24, 7LL);
          if ( (int)CmpFileFlushAndPurge(BugCheckParameter2, 0LL) >= 0 )
            LOBYTE(Ptr_high) = Ptr_high | 0x20;
          CmpLogFlushPhaseEnd(v44, 7LL, (Ptr_high & 0x20) == 0 ? 0xC0000001 : 0);
        }
        LODWORD(valid) = 0;
LABEL_46:
        CmpLockRegistry();
        HvLockHiveFlusherExclusive(BugCheckParameter2);
        if ( (int)valid < 0 && (Ptr & 0x80u) != 0 && (Ptr_high & 1) == 0 )
          *(_DWORD *)(BugCheckParameter2 + 4268) = v14;
        if ( (Ptr_high & 0x20) != 0 )
        {
          *(_DWORD *)(BugCheckParameter2 + 4264) |= 1u;
          *(_DWORD *)(BugCheckParameter2 + 4268) = 0;
        }
        if ( (int)valid < 0 )
        {
          if ( (Ptr_high & 2) != 0 && (Ptr & 0x400) != 0 )
          {
            *(_DWORD *)(BugCheckParameter2 + 176) -= v60;
            --*(_DWORD *)(BugCheckParameter2 + 168);
            LOBYTE(Ptr_high) = Ptr_high & 0xFD;
          }
          goto LABEL_52;
        }
        if ( (Ptr & 0x800) != 0 )
        {
          *(_QWORD *)(BugCheckParameter2 + 4184) = KeQueryUnbiasedInterruptTime();
          if ( (Ptr & 0x1000) != 0 )
            goto LABEL_101;
          CmpArmLazyWriter(1, 0LL, 0);
        }
        if ( (Ptr & 0x1000) == 0 )
        {
LABEL_52:
          v28 = (Ptr >> 6) & 1;
          if ( v28 )
          {
            if ( (int)valid < 0 )
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
                if ( (unsigned __int8)HvIsCurrentLogSwappable(BugCheckParameter2) )
                  HvSwapLogFiles(BugCheckParameter2, 0LL);
              }
              else
              {
                v35 = *(_DWORD *)(BugCheckParameter2 + 164);
                if ( (unsigned int)(v35 - 4) <= 1 )
                  *(_BYTE *)((unsigned int)HvpLogTypeToLogArrayIndex(5 - (unsigned int)(v35 != 4))
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
              if ( !v28 )
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
          goto LABEL_61;
        }
LABEL_101:
        CmpArmLazyWriter(1, 0LL, 1);
        goto LABEL_52;
      }
      Ptr &= ~0x80u;
    }
    v14 = v64;
    Ptr_high = HIDWORD(v64);
    goto LABEL_30;
  }
  HvLockHiveWriter(BugCheckParameter2);
  if ( (unsigned __int8)HvMarkDirty(BugCheckParameter2, 0LL, 4096LL) )
  {
    HvUnlockHiveWriter(BugCheckParameter2);
    goto LABEL_25;
  }
  HvUnlockHiveWriter(BugCheckParameter2);
  LODWORD(valid) = -1073741823;
LABEL_122:
  LOBYTE(Ptr_high) = BYTE4(v63.Ptr);
LABEL_61:
  *(_QWORD *)&EventDescriptor_8.Id = 0LL;
  EventDescriptor = 0LL;
  if ( (Ptr & 1) == 0 || (v29 = 1, (Ptr_high & 0x10) != 0) )
    v29 = 0;
  v30 = (Ptr & 2) != 0;
  LOBYTE(v58) = v29;
  if ( v29 )
  {
    *(_QWORD *)&EventDescriptor_8.Id = *(_QWORD *)(BugCheckParameter2 + 4240);
    *(_QWORD *)(BugCheckParameter2 + 4240) = 0LL;
    *(_QWORD *)(BugCheckParameter2 + 4232) = 0LL;
  }
  if ( v30 )
  {
    EventDescriptor = *(PRKEVENT *)(BugCheckParameter2 + 4256);
    *(_QWORD *)(BugCheckParameter2 + 4256) = 0LL;
    *(_QWORD *)(BugCheckParameter2 + 4248) = 0LL;
  }
  HvUnlockHiveFlusherExclusive(BugCheckParameter2);
  CmpUnlockRegistry(v32, v31);
  if ( (_BYTE)v58 )
    CmpWakeWriteQueueWaiters(BugCheckParameter2 + 4232, *(PRKEVENT *)&EventDescriptor_8.Id);
  if ( v30 )
    CmpWakeWriteQueueWaiters(BugCheckParameter2 + 4248, EventDescriptor);
LABEL_71:
  CmpTraceHiveFlushStop((unsigned int)valid);
  if ( (unsigned int)dword_140C02130 > 4 )
  {
    *(_DWORD *)&EventDescriptor_8.Id = valid;
    p_EventDescriptor_8 = &EventDescriptor_8;
    v67 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C02130, (unsigned __int8 *)byte_140023289, 0LL, 0LL, 3u, &v63);
  }
  return (unsigned int)valid;
}
