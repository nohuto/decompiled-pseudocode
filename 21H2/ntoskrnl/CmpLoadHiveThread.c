/*
 * XREFs of CmpLoadHiveThread @ 0x14083C870
 * Callers:
 *     <none>
 * Callees:
 *     RtlNumberOfSetBits @ 0x140209960 (RtlNumberOfSetBits.c)
 *     SetFailureLocation @ 0x14020A890 (SetFailureLocation.c)
 *     RtlAreBitsClear @ 0x14020AED0 (RtlAreBitsClear.c)
 *     CmCleanupThreadInfo @ 0x14022EA30 (CmCleanupThreadInfo.c)
 *     RtlSetAllBits @ 0x140262CA0 (RtlSetAllBits.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     RtlSetBits @ 0x1402E4C80 (RtlSetBits.c)
 *     CmpInitializeThreadInfo @ 0x140347770 (CmpInitializeThreadInfo.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExIsSoftBoot @ 0x1403B72A0 (ExIsSoftBoot.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     CmpApplyAdminSdOnHiveFiles @ 0x1404172B8 (CmpApplyAdminSdOnHiveFiles.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmpFlushHive @ 0x1406885A4 (CmpFlushHive.c)
 *     CmpGetFileSize @ 0x140689D3C (CmpGetFileSize.c)
 *     CmpDoFileSetSizeEx @ 0x14068EC28 (CmpDoFileSetSizeEx.c)
 *     RtlAppendStringToString @ 0x1406E24E0 (RtlAppendStringToString.c)
 *     PsTerminateSystemThread @ 0x1406E5A70 (PsTerminateSystemThread.c)
 *     CmpInitHiveFromFile @ 0x1407122B0 (CmpInitHiveFromFile.c)
 *     CmpOpenHiveFile @ 0x140713F8C (CmpOpenHiveFile.c)
 *     CmpLockRegistryExclusive @ 0x14071B6EC (CmpLockRegistryExclusive.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x14083D1A4 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     HvpDropPagedBins @ 0x14083D244 (HvpDropPagedBins.c)
 *     CmpMarkCurrentValueDirty @ 0x14083D474 (CmpMarkCurrentValueDirty.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x14083D56C (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpInitBackupHive @ 0x140917E18 (CmpInitBackupHive.c)
 *     CmpRecoverFlushProtocolStateFromFiles @ 0x140919A88 (CmpRecoverFlushProtocolStateFromFiles.c)
 *     CmpLogFailureToGetFileSize @ 0x14091D320 (CmpLogFailureToGetFileSize.c)
 *     CmpDiskFullWarning @ 0x14091D63C (CmpDiskFullWarning.c)
 *     ExRaiseHardError @ 0x140A02230 (ExRaiseHardError.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     CmpIsHiveLoadUnloadRundownActive @ 0x140AB419C (CmpIsHiveLoadUnloadRundownActive.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140AB41E0 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140AB41FC (HvLockHiveFlusherExclusive.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x140AB42A0 (CmpReleaseShutdownRundown.c)
 *     CmpLockRegistry @ 0x140AB4370 (CmpLockRegistry.c)
 *     CmpAcquireShutdownRundown @ 0x140AB46D0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall CmpLoadHiveThread(ULONG_PTR BugCheckParameter3)
{
  unsigned int v1; // edi
  unsigned int v2; // r15d
  __int64 v3; // r14
  ULONG_PTR inited; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  wchar_t *v8; // rsi
  struct _KEVENT *v9; // r15
  __int64 v10; // r12
  _DWORD *v11; // r15
  int v12; // eax
  STRING *v13; // r13
  unsigned int v14; // r12d
  void *v15; // r13
  NTSTATUS FileSize; // eax
  __int64 v17; // rcx
  unsigned int v18; // ebx
  void *v19; // r12
  NTSTATUS v20; // eax
  __int64 v21; // rcx
  unsigned int v22; // ebx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int128 v26; // xmm0
  __int64 v27; // rax
  int v28; // r13d
  unsigned __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  ULONG v37; // ebx
  ULONG i; // r12d
  ULONG v39; // eax
  wchar_t *v40; // r12
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  int v46; // r13d
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  signed __int64 *v62; // rsi
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  int v70; // eax
  wchar_t *v71; // rcx
  int v73; // [rsp+38h] [rbp-D0h]
  int v74; // [rsp+40h] [rbp-C8h]
  char v75; // [rsp+58h] [rbp-B0h] BYREF
  int v76; // [rsp+5Ch] [rbp-ACh] BYREF
  ULONG_PTR v77; // [rsp+60h] [rbp-A8h] BYREF
  ULONG_PTR v78; // [rsp+68h] [rbp-A0h]
  int v79; // [rsp+70h] [rbp-98h] BYREF
  int v80; // [rsp+74h] [rbp-94h] BYREF
  int v81; // [rsp+78h] [rbp-90h]
  int v82; // [rsp+7Ch] [rbp-8Ch]
  void *v83; // [rsp+80h] [rbp-88h] BYREF
  ULONG Length[2]; // [rsp+88h] [rbp-80h] BYREF
  STRING *Source; // [rsp+90h] [rbp-78h]
  void *v86; // [rsp+98h] [rbp-70h] BYREF
  void *v87; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v88; // [rsp+A8h] [rbp-60h] BYREF
  ULONG_PTR BugCheckParameter3a; // [rsp+B0h] [rbp-58h]
  __int128 v90; // [rsp+B8h] [rbp-50h] BYREF
  STRING *v91; // [rsp+C8h] [rbp-40h]
  __int64 v92[3]; // [rsp+D0h] [rbp-38h] BYREF
  ULONG_PTR BugCheckParameter2[54]; // [rsp+E8h] [rbp-20h] BYREF

  v1 = 0;
  v78 = BugCheckParameter3;
  v2 = BugCheckParameter3;
  v77 = 0LL;
  v82 = 0;
  v88 = 0LL;
  v79 = 0;
  v86 = 0LL;
  *(_OWORD *)v92 = 0LL;
  v80 = 0;
  v87 = 0LL;
  v75 = 0;
  v76 = 0;
  v83 = 0LL;
  memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  *(_QWORD *)Length = 0LL;
  CmpInitializeThreadInfo((__int64)v92);
  v3 = 23LL * v2;
  BugCheckParameter3a = v2;
  LODWORD(inited) = 0;
  KeWaitForSingleObject(&CmpMachineHiveList[v3 + 8], Executive, 0, 0, 0LL);
  if ( v2 == CmpCheckHiveIndex )
  {
    KeWaitForSingleObject(&CmpLoadWorkerDebugEvent, Executive, 0, 0, 0LL);
    if ( (_BYTE)KdDebuggerEnabled )
    {
      if ( !(_BYTE)KdDebuggerNotPresent )
        __debugbreak();
    }
  }
  v8 = CmpMachineHiveList[v3 + 3];
  BYTE2(CmpMachineHiveList[v3 + 7]) = 1;
  if ( v8 )
  {
    v11 = v8 + 80;
    v77 = (ULONG_PTR)v8;
    v12 = *((_DWORD *)v8 + 40);
    if ( (v12 & 0x8001) != 0 )
    {
      if ( CmpMiniNTBoot || CmpVolatileBoot )
      {
        if ( (v12 & 2) != 0 )
        {
          CmpLockRegistry(v6, v5, v7);
          HvLockHiveFlusherExclusive(v8);
          *v11 &= ~2u;
          HvUnlockHiveFlusherExclusive(v8);
          CmpUnlockRegistry(v59, v58, v60, v61);
        }
        *(_DWORD *)&SystemHiveFullPathName.Length = 0x800000;
        SystemHiveFullPathName.Buffer = (char *)&SystemHiveFullPathBuffer;
        RtlAppendStringToString(&SystemHiveFullPathName, (const STRING *)&CmpMachineHiveList[v3 + 21]);
      }
      v46 = v78;
    }
    else
    {
      v13 = (STRING *)&CmpMachineHiveList[v3 + 21];
      Source = v13;
      LODWORD(inited) = CmpOpenHiveFile(
                          (PCUNICODE_STRING)v13,
                          0,
                          &v83,
                          &v76,
                          7u,
                          0LL,
                          (int *)Length,
                          0LL,
                          0LL,
                          (__int64)BugCheckParameter2);
      if ( (inited & 0x80000000) != 0LL )
        goto LABEL_94;
      v14 = (16 * (v76 == 2)) | 2;
      LODWORD(inited) = CmpOpenHiveFile(
                          (PCUNICODE_STRING)v13,
                          4u,
                          &v86,
                          &v79,
                          v14,
                          0LL,
                          0LL,
                          0LL,
                          0LL,
                          (__int64)BugCheckParameter2);
      if ( (inited & 0x80000000) != 0LL )
      {
        v1 = 16;
        goto LABEL_94;
      }
      LODWORD(inited) = CmpOpenHiveFile(
                          (PCUNICODE_STRING)v13,
                          5u,
                          &v87,
                          &v80,
                          v14,
                          0LL,
                          0LL,
                          0LL,
                          0LL,
                          (__int64)BugCheckParameter2);
      if ( (inited & 0x80000000) != 0LL )
      {
        v1 = 32;
        goto LABEL_94;
      }
      LODWORD(inited) = CmpGetFileSize(v83, &v88);
      if ( (inited & 0x80000000) != 0LL )
      {
        v1 = 40;
        goto LABEL_94;
      }
      v15 = v86;
      FileSize = CmpGetFileSize(v86, &v90);
      v18 = FileSize;
      if ( FileSize < 0 )
      {
        CmpLogFailureToGetFileSize(v17, 4LL, (unsigned int)FileSize);
        *((_QWORD *)v8 + 7) = BugCheckParameter2;
        BugCheckParameter2[0] = (ULONG_PTR)v8;
        SetFailureLocation((__int64)BugCheckParameter2, 1, 22, v18, 0x2Bu);
        *(_QWORD *)&v90 = 0LL;
      }
      v19 = v87;
      v20 = CmpGetFileSize(v87, (_QWORD *)&v90 + 1);
      v22 = v20;
      if ( v20 < 0 )
      {
        CmpLogFailureToGetFileSize(v21, 5LL, (unsigned int)v20);
        *((_QWORD *)v8 + 7) = BugCheckParameter2;
        BugCheckParameter2[0] = (ULONG_PTR)v8;
        SetFailureLocation((__int64)BugCheckParameter2, 1, 22, v22, 0x2Du);
        *((_QWORD *)&v90 + 1) = 0LL;
      }
      CmpBecomeActiveFlusherAndReconciler(v8);
      CmpLockRegistry(v24, v23, v25);
      HvLockHiveFlusherExclusive(v8);
      v26 = v90;
      *((_QWORD *)v8 + 193) = v83;
      v27 = v88;
      *((_QWORD *)v8 + 197) = v15;
      *((_QWORD *)v8 + 198) = v19;
      *((_QWORD *)v8 + 225) = v27;
      *((_OWORD *)v8 + 113) = v26;
      *v11 &= ~2u;
      v28 = *((_DWORD *)v8 + 1028) & 0x8000;
      *((_DWORD *)v8 + 1028) = HIDWORD(CmpMachineHiveList[v3 + 4]);
      *((_DWORD *)v8 + 47) = Length[1];
      v29 = (unsigned int)(*((_DWORD *)v8 + 70) + 4096);
      v81 = v28;
      if ( (int)CmpDoFileSetSizeEx((__int64)v8, 0, v29, 1) < 0 )
        CmpCannotWriteConfiguration = 1;
      HvUnlockHiveFlusherExclusive(v8);
      CmpUnlockRegistry(v31, v30, v32, v33);
      if ( v28 )
      {
        LODWORD(inited) = CmpRecoverFlushProtocolStateFromFiles((ULONG_PTR)v8);
        if ( (inited & 0x80000000) != 0LL )
        {
          v1 = 72;
LABEL_93:
          v13 = Source;
LABEL_94:
          *((_QWORD *)v8 + 7) = BugCheckParameter2;
          BugCheckParameter2[0] = (ULONG_PTR)v8;
          SetFailureLocation((__int64)BugCheckParameter2, 0, 22, inited, v1);
          v91 = v13;
          CmpPuntBoot = 1;
          ExRaiseHardError(3221226008LL, 1LL);
          KeBugCheckEx(0x74u, 2uLL, 1uLL, BugCheckParameter3a, (int)inited);
        }
      }
      CmpLockRegistry(v35, v34, v36);
      HvLockHiveFlusherExclusive(v8);
      v37 = Length[0];
      if ( *((_DWORD *)v8 + 34) != Length[0] )
      {
        for ( i = 0; i < *((_DWORD *)v8 + 22); i += v37 )
        {
          if ( !RtlAreBitsClear((PRTL_BITMAP)(v8 + 44), i, v37) )
            RtlSetBits((PRTL_BITMAP)(v8 + 44), i, v37);
        }
        v39 = RtlNumberOfSetBits((PRTL_BITMAP)(v8 + 44));
        v28 = v81;
        *((_DWORD *)v8 + 26) = v39;
        *((_DWORD *)v8 + 34) = v37;
      }
      v40 = v8 + 32;
      v41 = *((_QWORD *)v8 + 8);
      if ( *(_DWORD *)(v41 + 4092) || (*(_DWORD *)(v41 + 4088) & 4) != 0 || v28 )
      {
        RtlSetAllBits((PRTL_BITMAP)(v8 + 44));
        *((_DWORD *)v8 + 26) = *((_DWORD *)v8 + 22);
      }
      HvUnlockHiveFlusherExclusive(v8);
      CmpUnlockRegistry(v43, v42, v44, v45);
      CmpLockRegistryExclusive();
      v46 = v78;
      if ( (_DWORD)v78 == 3 )
      {
        ExAcquirePushLockSharedEx((ULONG_PTR)(v8 + 36), 0LL);
        CmpMarkCurrentValueDirty((ULONG_PTR)v8);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v8 + 9, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)v8 + 9);
        KeAbPostRelease((ULONG_PTR)(v8 + 36));
        v8 = (wchar_t *)v77;
      }
      CmpMachineHiveList[v3 + 6] = v8;
      LODWORD(inited) = HvpDropPagedBins((ULONG_PTR)v8);
      if ( (inited & 0x80000000) != 0LL )
      {
        v1 = 80;
        goto LABEL_93;
      }
      CmpUnlockRegistry(v48, v47, v49, v50);
      CmpFinishBeingActiveFlusherAndReconciler(v8);
      if ( *(_DWORD *)(*(_QWORD *)v40 + 4092LL) || (*(_DWORD *)(*(_QWORD *)v40 + 4088LL) & 4) != 0 )
      {
        if ( !ExIsSoftBoot() )
          CmpFlushHive((ULONG_PTR)v8, 0xCu);
        CmpLockRegistry(v52, v51, v53);
        HvLockHiveFlusherExclusive(v8);
        *(_DWORD *)(*(_QWORD *)v40 + 4092LL) = 0;
        *(_DWORD *)(*(_QWORD *)v40 + 4088LL) &= ~4u;
        HvUnlockHiveFlusherExclusive(v8);
        CmpUnlockRegistry(v55, v54, v56, v57);
      }
      if ( CmpCannotWriteConfiguration )
        CmpDiskFullWarning();
      SystemHiveFullPathName.Buffer = (char *)&SystemHiveFullPathBuffer;
      *(_DWORD *)&SystemHiveFullPathName.Length = 0x800000;
      RtlAppendStringToString(&SystemHiveFullPathName, Source);
      if ( CmpDoIdleProcessing && (int)CmpInitBackupHive(v8, CmpMachineHiveList[v3]) < 0 )
        CmpDoIdleProcessing = 0;
    }
    *((_DWORD *)v8 + 1028) |= 4u;
    if ( v46 == 3 )
    {
      CmpLockRegistry(v6, v5, v7);
      v62 = (signed __int64 *)(v8 + 36);
      ExAcquirePushLockSharedEx((ULONG_PTR)v62, 0LL);
      *v11 |= 0x200u;
      if ( _InterlockedCompareExchange64(v62, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v62);
      KeAbPostRelease((ULONG_PTR)v62);
      CmpUnlockRegistry(v64, v63, v65, v66);
      v8 = (wchar_t *)v77;
    }
    goto LABEL_79;
  }
  inited = (int)CmpInitHiveFromFile(
                  (const UNICODE_STRING *)&CmpMachineHiveList[v3 + 21],
                  (int)CmpMachineHiveList[v3 + 4],
                  &v77,
                  (char *)&CmpMachineHiveList[v3 + 7] + 3,
                  0x1490001u,
                  0LL,
                  v73,
                  v74,
                  (__int64)&v75,
                  BugCheckParameter2);
  v5 = 3221225524LL;
  if ( v2 == 6 && !BYTE4(CmpMachineHiveList[v3 + 7]) && ((_DWORD)inited == -1073741772 || (_DWORD)inited == -1073741765)
    || _bittest((const signed __int32 *)&CmpMachineHiveList[v3 + 4], 0xFu)
    && !BYTE4(CmpMachineHiveList[v3 + 7])
    && (_DWORD)inited == -1073741772 )
  {
    LODWORD(inited) = 0;
    goto LABEL_85;
  }
  if ( (_DWORD)inited != -1073741431 || !(unsigned __int8)CmpIsHiveLoadUnloadRundownActive(v6) )
  {
    if ( (inited & 0x80000000) != 0LL
      || (v8 = (wchar_t *)v77, !_bittest((const signed __int32 *)&CmpMachineHiveList[v3 + 4], 0xFu))
      && (!*(_QWORD *)(v77 + 1576) || !*(_QWORD *)(v77 + 1584)) )
    {
      CmpPuntBoot = 1;
      KeBugCheckEx(0x74u, 2uLL, (ULONG_PTR)BugCheckParameter2, v2, inited);
    }
    *(_DWORD *)(v77 + 4112) = HIDWORD(CmpMachineHiveList[v3 + 4]) | 4;
    CmpMachineHiveList[v3 + 6] = v8;
    if ( v75 )
    {
      v9 = &stru_140C02570;
      CmpInitRmLogOnLoad = 1;
      v10 = 7LL;
      do
      {
        KeSetEvent(v9, 0, 0);
        v9 = (struct _KEVENT *)((char *)v9 + 184);
        --v10;
      }
      while ( v10 );
    }
    v11 = v8 + 80;
    if ( (*((_DWORD *)v8 + 40) & 0x8001) == 0
      && CmpDoIdleProcessing
      && (int)CmpInitBackupHive(v8, CmpMachineHiveList[v3]) < 0 )
    {
      CmpDoIdleProcessing = 0;
    }
LABEL_79:
    if ( (unsigned __int8)CmpAcquireShutdownRundown(v6, v5, v7) )
    {
      if ( (*v11 & 0x8001) == 0 )
      {
        if ( *((_QWORD *)v8 + 193) )
        {
          v70 = CmpApplyAdminSdOnHiveFiles((ULONG_PTR)v8, (ULONG_PTR)CmpMachineHiveList[v3]);
          LODWORD(inited) = v70;
          if ( v70 < 0 )
            KeBugCheckEx(0x51u, 0x13uLL, (ULONG_PTR)v8, (ULONG_PTR)CmpMachineHiveList[v3], v70);
        }
      }
      CmpReleaseShutdownRundown(v68, v67, v69);
    }
    else
    {
      LODWORD(inited) = -1073741431;
    }
  }
LABEL_85:
  BYTE1(CmpMachineHiveList[v3 + 7]) = 1;
  KeSetEvent((PRKEVENT)&CmpMachineHiveList[v3 + 11], 0, 0);
  if ( _InterlockedIncrement(&CmpLoadWorkerIncrement) == 6 && (unsigned int)CmpCheckHiveIndex < 7 )
    KeSetEvent(&CmpLoadWorkerDebugEvent, 0, 0);
  v71 = CmpMachineHiveList[v3 + 22];
  if ( v71 )
  {
    ExFreePoolWithTag(v71, 0);
    *(_OWORD *)&CmpMachineHiveList[v3 + 21] = 0LL;
  }
  PsTerminateSystemThread(inited);
  return CmCleanupThreadInfo(v92);
}
