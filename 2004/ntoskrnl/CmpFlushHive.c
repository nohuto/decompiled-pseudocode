/*
 * XREFs of CmpFlushHive @ 0x14061F888
 * Callers:
 *     CmpLoadKeyCommon @ 0x140271C20 (CmpLoadKeyCommon.c)
 *     CmpDoFlushAll @ 0x14037BDDC (CmpDoFlushAll.c)
 *     CmpInitHiveFromFile @ 0x14061DFC8 (CmpInitHiveFromFile.c)
 *     CmpDoReconcileNextHive @ 0x14063C860 (CmpDoReconcileNextHive.c)
 *     CmpDoFlushNextHive @ 0x14063FC80 (CmpDoFlushNextHive.c)
 *     CmpCompleteUnloadKey @ 0x14064364C (CmpCompleteUnloadKey.c)
 *     NtFlushKey @ 0x140702800 (NtFlushKey.c)
 *     CmpTransMgrPrepare @ 0x14075174C (CmpTransMgrPrepare.c)
 *     CmpTransMgrSyncHive @ 0x1407527A0 (CmpTransMgrSyncHive.c)
 *     CmpLoadHiveThread @ 0x140786B20 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x140790834 (CmpMountPreloadedHives.c)
 *     CmpFinishSystemHivesLoad @ 0x140790950 (CmpFinishSystemHivesLoad.c)
 *     CmShutdownSystem @ 0x1408682A8 (CmShutdownSystem.c)
 *     CmReplaceKey @ 0x14086A778 (CmReplaceKey.c)
 *     CmFreezeRegistry @ 0x14086ED48 (CmFreezeRegistry.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212640 (EtwEventEnabled.c)
 *     KeQueryUnbiasedInterruptTime @ 0x140268150 (KeQueryUnbiasedInterruptTime.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14026C434 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PoIsInitializedStopWatch @ 0x14026C5E4 (PoIsInitializedStopWatch.c)
 *     EtwWrite @ 0x140293470 (EtwWrite.c)
 *     CmpArmLazyWriter @ 0x1402D7800 (CmpArmLazyWriter.c)
 *     RtlNumberOfSetBits @ 0x1402F24B0 (RtlNumberOfSetBits.c)
 *     HvUnCOWReconciledPages @ 0x140333C14 (HvUnCOWReconciledPages.c)
 *     RtlMergeBitMaps @ 0x140333F20 (RtlMergeBitMaps.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     CmpUnlockRegistry @ 0x1405F3D20 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F3D60 (CmpLockRegistry.c)
 *     CmpTraceHiveFlushStop @ 0x14062010C (CmpTraceHiveFlushStop.c)
 *     CmpGenerateFlushControlData @ 0x140639278 (CmpGenerateFlushControlData.c)
 *     HvTruncateCurrentLogFileIfRequired @ 0x14063952C (HvTruncateCurrentLogFileIfRequired.c)
 *     HvpLogTypeToLogArrayIndex @ 0x1406397A0 (HvpLogTypeToLogArrayIndex.c)
 *     HvWriteLogFile @ 0x140639A78 (HvWriteLogFile.c)
 *     CmpFileFlushAndPurge @ 0x140639C54 (CmpFileFlushAndPurge.c)
 *     HvUnlockHiveFlusherExclusive @ 0x14063A8FC (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x14063A934 (HvLockHiveFlusherExclusive.c)
 *     HvUnlockHiveWriter @ 0x14063B338 (HvUnlockHiveWriter.c)
 *     HvLockHiveWriter @ 0x14063B368 (HvLockHiveWriter.c)
 *     HvStoreModifiedData @ 0x14063B818 (HvStoreModifiedData.c)
 *     CmpLockRegistryFreezeAware @ 0x140640060 (CmpLockRegistryFreezeAware.c)
 *     HvFreeDirtyData @ 0x140644C74 (HvFreeDirtyData.c)
 *     CmpLogFlushPhaseEnd @ 0x140700708 (CmpLogFlushPhaseEnd.c)
 *     CmpLogFlushPhaseStart @ 0x140701950 (CmpLogFlushPhaseStart.c)
 *     HvFreeUnreconciledData @ 0x140702C28 (HvFreeUnreconciledData.c)
 *     HvWriteHivePrimaryFile @ 0x1407035FC (HvWriteHivePrimaryFile.c)
 *     CmpAcquireReconcilerQueue @ 0x140705584 (CmpAcquireReconcilerQueue.c)
 *     CmpAcquireFlusherQueue @ 0x1407055A0 (CmpAcquireFlusherQueue.c)
 *     HvSwapLogFiles @ 0x140707388 (HvSwapLogFiles.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x14070978C (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     CmpWakeWriteQueueWaiters @ 0x140709AC8 (CmpWakeWriteQueueWaiters.c)
 *     HvIsCurrentLogSwappable @ 0x14070C5A4 (HvIsCurrentLogSwappable.c)
 *     HvTruncateAllLogFilesIfRequired @ 0x14070EC68 (HvTruncateAllLogFilesIfRequired.c)
 *     HvResetLogFileStatusAll @ 0x14070F060 (HvResetLogFileStatusAll.c)
 *     CmpWaitOnHiveWriteQueue @ 0x14086F29C (CmpWaitOnHiveWriteQueue.c)
 *     HvExtendHivePrimaryFileValidDataLength @ 0x140873414 (HvExtendHivePrimaryFileValidDataLength.c)
 *     HvFoldBackDirtyData @ 0x140873494 (HvFoldBackDirtyData.c)
 *     HvFoldBackUnreconciledData @ 0x140873554 (HvFoldBackUnreconciledData.c)
 *     HvMarkDirty @ 0x140878808 (HvMarkDirty.c)
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
  __int64 v16; // rcx
  unsigned int v17; // r12d
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  struct _KEVENT *v23; // rdx
  int v24; // r15d
  char v25; // al
  bool v26; // si
  __int64 v28; // rcx
  int v29; // ecx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rcx
  ULONGLONG v37; // rax
  unsigned int v38; // r9d
  __int64 v39; // rax
  unsigned int v40; // r9d
  ULONGLONG v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  unsigned int v44; // r9d
  __int64 v45; // rax
  int v46; // esi
  int v47; // eax
  unsigned int v48; // edi
  __int64 v49; // rcx
  unsigned int v50; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v51; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v52; // [rsp+48h] [rbp-C0h] BYREF
  PRKEVENT EventDescriptor; // [rsp+50h] [rbp-B8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor_8; // [rsp+58h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v56; // [rsp+78h] [rbp-90h]
  int v57; // [rsp+80h] [rbp-88h]
  EVENT_DESCRIPTOR *p_EventDescriptor_8; // [rsp+88h] [rbp-80h]
  __int64 v59; // [rsp+90h] [rbp-78h]
  struct _EVENT_DATA_DESCRIPTOR UserData[2]; // [rsp+98h] [rbp-70h] BYREF
  int *v61; // [rsp+B8h] [rbp-50h]
  __int64 v62; // [rsp+C0h] [rbp-48h]
  PRKEVENT *p_EventDescriptor; // [rsp+C8h] [rbp-40h]
  int v64; // [rsp+D0h] [rbp-38h] BYREF
  int v65; // [rsp+D4h] [rbp-34h]
  _DWORD *v66; // [rsp+D8h] [rbp-30h]
  __int64 v67; // [rsp+E0h] [rbp-28h]
  __int64 v68; // [rsp+E8h] [rbp-20h]
  _DWORD v69[2]; // [rsp+F0h] [rbp-18h] BYREF
  unsigned int *v70; // [rsp+F8h] [rbp-10h]
  __int64 v71; // [rsp+100h] [rbp-8h]

  v56 = 0LL;
  v57 = 0;
  LODWORD(v52) = 0;
  v55 = 0LL;
  LODWORD(valid) = 0;
  if ( (unsigned int)dword_140C02130 > 4 )
  {
    v50 = a2;
    v61 = &v64;
    p_EventDescriptor = *(PRKEVENT **)(BugCheckParameter2 + 1856);
    v64 = *(unsigned __int16 *)(BugCheckParameter2 + 1848);
    v66 = v69;
    v68 = *(_QWORD *)(BugCheckParameter2 + 1840);
    v69[0] = *(unsigned __int16 *)(BugCheckParameter2 + 1832);
    v70 = &v50;
    v62 = 2LL;
    v65 = 0;
    v67 = 2LL;
    v69[1] = 0;
    v71 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C02130,
      (unsigned __int8 *)byte_140022275,
      0LL,
      0LL,
      7u,
      UserData);
  }
  v5 = EtwpRegTraceHandle;
  v51 = a2;
  EventDescriptor_8 = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_FLUSH_START;
  if ( EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor_8) )
  {
    v37 = *(_QWORD *)(BugCheckParameter2 + 1840);
    v38 = 0;
    LOWORD(v50) = 0;
    if ( v37 )
    {
      UserData[0].Ptr = v37;
      v38 = 1;
      UserData[0].Size = *(unsigned __int16 *)(BugCheckParameter2 + 1832);
      UserData[0].Reserved = 0;
    }
    v39 = v38;
    v40 = v38 + 1;
    UserData[v39].Ptr = (ULONGLONG)&v50;
    *(_QWORD *)&UserData[v39].Size = 2LL;
    v41 = *(_QWORD *)(BugCheckParameter2 + 1856);
    if ( v41 )
    {
      v42 = v40++;
      UserData[v42].Ptr = v41;
      UserData[v42].Size = *(unsigned __int16 *)(BugCheckParameter2 + 1848);
      *(&UserData[0].Reserved + 1 * v42) = 0;
    }
    v43 = v40;
    v44 = v40 + 1;
    UserData[v43].Ptr = (ULONGLONG)&v50;
    *(_QWORD *)&UserData[v43].Size = 2LL;
    v45 = v44;
    UserData[v45].Ptr = (ULONGLONG)&v51;
    *(_QWORD *)&UserData[v45].Size = 4LL;
    EtwWrite(v5, &EventDescriptor_8, 0LL, v44 + 1, UserData);
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
  v50 = (v8 >> 4) & 1;
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
      CmpUnlockRegistry();
      LODWORD(valid) = 0;
      goto LABEL_71;
    }
    if ( (v8 & 4) != 0 && PoIsInitializedStopWatch((_QWORD *)(BugCheckParameter2 + 4248)) )
      goto LABEL_118;
    if ( !PoIsInitializedStopWatch((_QWORD *)(BugCheckParameter2 + 4232)) )
      break;
    if ( v10 )
    {
      v46 = 0;
    }
    else if ( *(_DWORD *)(BugCheckParameter2 + 104) || (v46 = 2, *(_BYTE *)(BugCheckParameter2 + 191)) )
    {
      v46 = 1;
    }
    LODWORD(valid) = CmpWaitOnHiveWriteQueue(BugCheckParameter2, v11);
    if ( (int)valid >= 0 )
      v7 += v46;
LABEL_119:
    if ( v7 >= 2 )
      goto LABEL_71;
  }
  CmpGenerateFlushControlData(BugCheckParameter2, v8, &v55);
  Ptr = v55.Ptr;
  if ( (unsigned int)dword_140C02130 > 4 )
  {
    v65 = 0;
    LODWORD(EventDescriptor) = v55.Size;
    v61 = (int *)&v51;
    p_EventDescriptor = &EventDescriptor;
    v62 = 4LL;
    v64 = 4;
    v51 = v55.Ptr;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C02130,
      (unsigned __int8 *)&dword_1400222AC,
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
      v47 = v13 - 1;
      if ( !v47 )
      {
        LODWORD(valid) = 0;
        LOBYTE(Ptr_high) = BYTE4(v55.Ptr) | 2;
        goto LABEL_61;
      }
      LODWORD(valid) = -1073741823;
      if ( v47 == 1 )
        goto LABEL_122;
    }
    if ( (Ptr & 0x80u) != 0 )
    {
      v48 = *(_DWORD *)(BugCheckParameter2 + 272);
      v14 = *(_DWORD *)(BugCheckParameter2 + 4268);
      if ( v48 > v14 )
      {
        Ptr_high = v48 + 4096;
        *(_DWORD *)(BugCheckParameter2 + 4268) = 0;
LABEL_30:
        HvUnlockHiveFlusherExclusive(BugCheckParameter2);
        CmpUnlockRegistry();
        if ( (Ptr & 0x80u) != 0 )
        {
          CmpLogFlushPhaseStart(v16, 1LL);
          v17 = v50;
          valid = (unsigned int)HvExtendHivePrimaryFileValidDataLength(BugCheckParameter2, Ptr_high, v50);
          CmpLogFlushPhaseEnd(v49, 1LL, valid);
          LOBYTE(Ptr_high) = BYTE4(v55.Ptr);
          if ( (int)valid < 0 )
            goto LABEL_46;
          Ptr_high = HIDWORD(v55.Ptr) | 0x21;
          HIDWORD(v55.Ptr) |= 0x21u;
        }
        else
        {
          Ptr_high = HIDWORD(v55.Ptr);
          v17 = v50;
        }
        if ( (Ptr & 8) != 0 )
        {
          CmpLogFlushPhaseStart(v16, 2LL);
          valid = (unsigned int)HvWriteLogFile(BugCheckParameter2, v18, v19, &v52);
          CmpLogFlushPhaseEnd(v20, 2LL, valid);
          if ( (int)valid < 0 )
            goto LABEL_46;
          HvTruncateCurrentLogFileIfRequired(BugCheckParameter2);
          Ptr_high |= 2u;
          HIDWORD(v55.Ptr) = Ptr_high;
        }
        if ( (Ptr & 0x10) != 0 )
        {
          CmpLogFlushPhaseStart(v16, 3LL);
          LOBYTE(v31) = 1;
          valid = (unsigned int)HvValidateOrInvalidatePrimaryFileHeader(BugCheckParameter2, 0LL, v31, v17);
          CmpLogFlushPhaseEnd(v32, 3LL, valid);
          if ( (int)valid < 0 )
          {
            Ptr |= 0x400u;
            goto LABEL_46;
          }
          Ptr_high |= 0x20u;
          HIDWORD(v55.Ptr) = Ptr_high;
        }
        CmpLogFlushPhaseStart(v16, 4LL);
        if ( (Ptr & 0x448) == 0x48 )
        {
          RtlMergeBitMaps(BugCheckParameter2 + 1728, (unsigned int *)(BugCheckParameter2 + 1680));
          HvFreeDirtyData(BugCheckParameter2);
          Ptr_high |= 4u;
          HIDWORD(v55.Ptr) = Ptr_high;
        }
        CmpLogFlushPhaseEnd(v21, 4LL, (unsigned int)valid);
        if ( (Ptr & 0x20) != 0 )
        {
          v30 = v55.Size >> 2;
          LOBYTE(v30) = (v55.Size & 4) != 0;
          HvSwapLogFiles(BugCheckParameter2, v30);
          Ptr_high |= 8u;
          HIDWORD(v55.Ptr) = Ptr_high;
        }
        if ( (Ptr & 0x45) == 0x41 )
        {
          CmpLockRegistry();
          HvLockHiveFlusherExclusive(BugCheckParameter2);
          v23 = *(struct _KEVENT **)(BugCheckParameter2 + 4240);
          *(_QWORD *)(BugCheckParameter2 + 4240) = 0LL;
          *(_QWORD *)(BugCheckParameter2 + 4232) = 0LL;
          CmpWakeWriteQueueWaiters(BugCheckParameter2 + 4232, v23);
          LOBYTE(Ptr_high) = Ptr_high | 0x10;
          HvUnlockHiveFlusherExclusive(BugCheckParameter2);
          CmpUnlockRegistry();
        }
        if ( (Ptr & 0x40) != 0 )
        {
          CmpLogFlushPhaseStart(v22, 5LL);
          valid = (unsigned int)HvWriteHivePrimaryFile(BugCheckParameter2);
          CmpLogFlushPhaseEnd(v28, 5LL, valid);
          if ( (int)valid < 0 )
            goto LABEL_46;
          LOBYTE(Ptr_high) = Ptr_high | 0x20;
        }
        if ( (Ptr & 0x100) != 0 )
        {
          CmpLogFlushPhaseStart(v22, 6LL);
          LOBYTE(v33) = 1;
          LOBYTE(v34) = 1;
          valid = (unsigned int)HvValidateOrInvalidatePrimaryFileHeader(BugCheckParameter2, v34, v33, v17);
          CmpLogFlushPhaseEnd(v35, 6LL, valid);
          if ( (int)valid < 0 )
            goto LABEL_46;
          LOBYTE(Ptr_high) = Ptr_high | 0x20;
          HvTruncateAllLogFilesIfRequired(BugCheckParameter2);
        }
        if ( (Ptr & 0x200) != 0 && (Ptr_high & 0x20) == 0 )
        {
          CmpLogFlushPhaseStart(v22, 7LL);
          if ( (int)CmpFileFlushAndPurge(BugCheckParameter2, 0LL) >= 0 )
            LOBYTE(Ptr_high) = Ptr_high | 0x20;
          CmpLogFlushPhaseEnd(v36, 7LL, (Ptr_high & 0x20) == 0 ? 0xC0000001 : 0);
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
            *(_DWORD *)(BugCheckParameter2 + 176) -= v52;
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
          v24 = (Ptr >> 6) & 1;
          if ( v24 )
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
                v29 = *(_DWORD *)(BugCheckParameter2 + 164);
                if ( (unsigned int)(v29 - 4) <= 1 )
                  *(_BYTE *)((unsigned int)HvpLogTypeToLogArrayIndex(5 - (unsigned int)(v29 != 4))
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
              if ( !v24 )
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
    v14 = v56;
    Ptr_high = HIDWORD(v56);
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
  LOBYTE(Ptr_high) = BYTE4(v55.Ptr);
LABEL_61:
  *(_QWORD *)&EventDescriptor_8.Id = 0LL;
  EventDescriptor = 0LL;
  if ( (Ptr & 1) == 0 || (v25 = 1, (Ptr_high & 0x10) != 0) )
    v25 = 0;
  v26 = (Ptr & 2) != 0;
  LOBYTE(v50) = v25;
  if ( v25 )
  {
    *(_QWORD *)&EventDescriptor_8.Id = *(_QWORD *)(BugCheckParameter2 + 4240);
    *(_QWORD *)(BugCheckParameter2 + 4240) = 0LL;
    *(_QWORD *)(BugCheckParameter2 + 4232) = 0LL;
  }
  if ( v26 )
  {
    EventDescriptor = *(PRKEVENT *)(BugCheckParameter2 + 4256);
    *(_QWORD *)(BugCheckParameter2 + 4256) = 0LL;
    *(_QWORD *)(BugCheckParameter2 + 4248) = 0LL;
  }
  HvUnlockHiveFlusherExclusive(BugCheckParameter2);
  CmpUnlockRegistry();
  if ( (_BYTE)v50 )
    CmpWakeWriteQueueWaiters(BugCheckParameter2 + 4232, *(PRKEVENT *)&EventDescriptor_8.Id);
  if ( v26 )
    CmpWakeWriteQueueWaiters(BugCheckParameter2 + 4248, EventDescriptor);
LABEL_71:
  CmpTraceHiveFlushStop((unsigned int)valid);
  if ( (unsigned int)dword_140C02130 > 4 )
  {
    *(_DWORD *)&EventDescriptor_8.Id = valid;
    p_EventDescriptor_8 = &EventDescriptor_8;
    v59 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C02130, (unsigned __int8 *)word_140022252, 0LL, 0LL, 3u, &v55);
  }
  return (unsigned int)valid;
}
