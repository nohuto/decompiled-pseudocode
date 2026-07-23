/*
 * XREFs of CmpLoadHiveThread @ 0x14079EF50
 * Callers:
 *     <none>
 * Callees:
 *     SetFailureLocation @ 0x140242D88 (SetFailureLocation.c)
 *     RtlNumberOfSetBits @ 0x140274DA0 (RtlNumberOfSetBits.c)
 *     RtlSetAllBits @ 0x1402934B0 (RtlSetAllBits.c)
 *     RtlAreBitsClear @ 0x1402F7CC0 (RtlAreBitsClear.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     RtlSetBits @ 0x140363CC0 (RtlSetBits.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     CmpApplyAdminSdOnHiveFiles @ 0x1403F05F8 (CmpApplyAdminSdOnHiveFiles.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     RtlUnicodeStringInit @ 0x1404ECA10 (RtlUnicodeStringInit.c)
 *     PsTerminateSystemThread @ 0x14061F840 (PsTerminateSystemThread.c)
 *     CmpReleaseShutdownRundown @ 0x14064A4A0 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x14064B8D0 (CmpAcquireShutdownRundown.c)
 *     HvUnlockHiveFlusherShared @ 0x14065B0AC (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x14065B0E4 (HvLockHiveFlusherShared.c)
 *     CmpLockRegistryExclusive @ 0x1406679BC (CmpLockRegistryExclusive.c)
 *     CmpInitHiveFromFile @ 0x1406A3018 (CmpInitHiveFromFile.c)
 *     CmpOpenHiveFile @ 0x1406A3938 (CmpOpenHiveFile.c)
 *     CmpFlushHive @ 0x1406A48D8 (CmpFlushHive.c)
 *     HvUnlockHiveFlusherExclusive @ 0x1406F97EC (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x1406F9824 (HvLockHiveFlusherExclusive.c)
 *     CmpGetFileSize @ 0x1406FC5AC (CmpGetFileSize.c)
 *     CmpDoFileSetSizeEx @ 0x1406FC9FC (CmpDoFileSetSizeEx.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x14070D2F0 (CmpLockRegistry.c)
 *     RtlAppendStringToString @ 0x14076DD80 (RtlAppendStringToString.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x14079EDD8 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpMarkCurrentValueDirty @ 0x14079EE80 (CmpMarkCurrentValueDirty.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x14079F7B4 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     HvpDropPagedBins @ 0x14079F928 (HvpDropPagedBins.c)
 *     CmpInitBackupHive @ 0x14087148C (CmpInitBackupHive.c)
 *     CmpIsShutdownRundownActive @ 0x140875D08 (CmpIsShutdownRundownActive.c)
 *     CmpLogFailureToGetFileSize @ 0x140876974 (CmpLogFailureToGetFileSize.c)
 *     CmpDiskFullWarning @ 0x140876D08 (CmpDiskFullWarning.c)
 *     ExRaiseHardError @ 0x1409562E0 (ExRaiseHardError.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall CmpLoadHiveThread(ULONG_PTR BugCheckParameter3)
{
  unsigned int v1; // edi
  unsigned int v2; // r15d
  __int64 v3; // r14
  ULONG_PTR inited; // rbx
  wchar_t *v5; // rsi
  int v6; // ecx
  struct _KEVENT *v7; // r15
  __int64 v8; // r12
  _DWORD *v9; // r15
  int v10; // eax
  STRING *v11; // r13
  unsigned int v12; // r12d
  HANDLE v13; // r13
  NTSTATUS FileSize; // eax
  __int64 v15; // rcx
  unsigned int v16; // ebx
  HANDLE v17; // r12
  NTSTATUS v18; // eax
  __int64 v19; // rcx
  unsigned int v20; // ebx
  __int128 v21; // xmm0
  __int64 v22; // rax
  ULONG v23; // ebx
  ULONG i; // r12d
  __int64 v25; // rax
  int v26; // r12d
  __int64 v27; // rax
  int v28; // eax
  wchar_t *v29; // rcx
  int v31; // [rsp+38h] [rbp-D0h]
  int v32; // [rsp+40h] [rbp-C8h]
  int v33; // [rsp+58h] [rbp-B0h] BYREF
  int v34; // [rsp+5Ch] [rbp-ACh] BYREF
  int v35; // [rsp+60h] [rbp-A8h] BYREF
  int v36; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v37; // [rsp+68h] [rbp-A0h] BYREF
  ULONG_PTR v38; // [rsp+70h] [rbp-98h] BYREF
  HANDLE v39; // [rsp+78h] [rbp-90h] BYREF
  ULONG Length[2]; // [rsp+80h] [rbp-88h] BYREF
  ULONG_PTR v41; // [rsp+88h] [rbp-80h]
  HANDLE v42; // [rsp+90h] [rbp-78h] BYREF
  HANDLE v43; // [rsp+98h] [rbp-70h] BYREF
  __int64 v44; // [rsp+A0h] [rbp-68h] BYREF
  STRING *Source; // [rsp+A8h] [rbp-60h]
  __int128 v46; // [rsp+B0h] [rbp-58h] BYREF
  int v47; // [rsp+C0h] [rbp-48h]
  STRING *v48; // [rsp+C8h] [rbp-40h] BYREF
  ULONG_PTR BugCheckParameter3a; // [rsp+D0h] [rbp-38h]
  ULONG_PTR BugCheckParameter2[54]; // [rsp+D8h] [rbp-30h] BYREF

  v1 = 0;
  v41 = BugCheckParameter3;
  v2 = BugCheckParameter3;
  v38 = 0LL;
  LODWORD(v37) = 0;
  v44 = 0LL;
  v35 = 0;
  v42 = 0LL;
  v36 = 0;
  v43 = 0LL;
  LOBYTE(v33) = 0;
  v34 = 0;
  v39 = 0LL;
  memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  v3 = 25LL * v2;
  *(_QWORD *)Length = 0LL;
  v47 = 0;
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
  v5 = CmpMachineHiveList[v3 + 3];
  BYTE2(CmpMachineHiveList[v3 + 7]) = 1;
  if ( v5 )
  {
    v9 = v5 + 80;
    v38 = (ULONG_PTR)v5;
    v10 = *((_DWORD *)v5 + 40);
    if ( (v10 & 0x8001) != 0 )
    {
      if ( BYTE6(NlsMbCodePageTag) || CmpVolatileBoot )
      {
        if ( (v10 & 2) != 0 )
        {
          CmpLockRegistry();
          HvLockHiveFlusherExclusive((__int64)v5);
          *v9 &= ~2u;
          HvUnlockHiveFlusherExclusive((__int64)v5);
          CmpUnlockRegistry();
        }
        *(_DWORD *)&SystemHiveFullPathName.Length = 0x800000;
        SystemHiveFullPathName.Buffer = (char *)&SystemHiveFullPathBuffer;
        RtlAppendStringToString(&SystemHiveFullPathName, (const STRING *)&CmpMachineHiveList[v3 + 23]);
      }
      v26 = v41;
    }
    else
    {
      v11 = (STRING *)&CmpMachineHiveList[v3 + 23];
      Source = v11;
      LODWORD(inited) = CmpOpenHiveFile((UNICODE_STRING *)v11, 0, &v39, &v34, 7u, 0LL, (__int64)Length, 0LL, 0LL);
      if ( (inited & 0x80000000) != 0LL )
        goto LABEL_83;
      v12 = (16 * (v34 == 2)) | 2;
      LODWORD(inited) = CmpOpenHiveFile((UNICODE_STRING *)v11, 4u, &v42, &v35, v12, 0LL, 0LL, 0LL, 0LL);
      if ( (inited & 0x80000000) != 0LL )
      {
        v1 = 16;
        goto LABEL_83;
      }
      LODWORD(inited) = CmpOpenHiveFile((UNICODE_STRING *)v11, 5u, &v43, &v36, v12, 0LL, 0LL, 0LL, 0LL);
      if ( (inited & 0x80000000) != 0LL )
      {
        v1 = 32;
        goto LABEL_83;
      }
      LODWORD(inited) = CmpGetFileSize(v39, &v44);
      if ( (inited & 0x80000000) != 0LL )
      {
        v1 = 40;
        goto LABEL_83;
      }
      v13 = v42;
      FileSize = CmpGetFileSize(v42, &v46);
      v16 = FileSize;
      if ( FileSize < 0 )
      {
        CmpLogFailureToGetFileSize(v15, 4LL, (unsigned int)FileSize);
        *((_QWORD *)v5 + 7) = BugCheckParameter2;
        BugCheckParameter2[0] = (ULONG_PTR)v5;
        SetFailureLocation((__int64)BugCheckParameter2, 1, 22, v16, 0x2Bu);
        *(_QWORD *)&v46 = 0LL;
      }
      v17 = v43;
      v18 = CmpGetFileSize(v43, (_QWORD *)&v46 + 1);
      v20 = v18;
      if ( v18 < 0 )
      {
        CmpLogFailureToGetFileSize(v19, 5LL, (unsigned int)v18);
        *((_QWORD *)v5 + 7) = BugCheckParameter2;
        BugCheckParameter2[0] = (ULONG_PTR)v5;
        SetFailureLocation((__int64)BugCheckParameter2, 1, 22, v20, 0x2Du);
        *((_QWORD *)&v46 + 1) = 0LL;
      }
      CmpBecomeActiveFlusherAndReconciler((__int64)v5);
      CmpLockRegistry();
      HvLockHiveFlusherExclusive((__int64)v5);
      v21 = v46;
      *((_QWORD *)v5 + 192) = v39;
      v22 = v44;
      *((_QWORD *)v5 + 196) = v13;
      *((_QWORD *)v5 + 197) = v17;
      *((_QWORD *)v5 + 224) = v22;
      *(_OWORD *)(v5 + 900) = v21;
      *v9 &= ~2u;
      *((_DWORD *)v5 + 1038) = HIDWORD(CmpMachineHiveList[v3 + 4]);
      *((_DWORD *)v5 + 46) = Length[1];
      if ( (int)CmpDoFileSetSizeEx((__int64)v5, 0, (unsigned int)(*((_DWORD *)v5 + 68) + 4096), 1) < 0 )
        CmpCannotWriteConfiguration = 1;
      v23 = Length[0];
      if ( *((_DWORD *)v5 + 34) != Length[0] )
      {
        for ( i = 0; i < *((_DWORD *)v5 + 22); i += v23 )
        {
          if ( !RtlAreBitsClear((PRTL_BITMAP)(v5 + 44), i, v23) )
            RtlSetBits((PRTL_BITMAP)(v5 + 44), i, v23);
        }
        *((_DWORD *)v5 + 26) = RtlNumberOfSetBits((PRTL_BITMAP)(v5 + 44));
        *((_DWORD *)v5 + 34) = v23;
      }
      v25 = *((_QWORD *)v5 + 8);
      if ( *(_DWORD *)(v25 + 4092) || (*(_DWORD *)(v25 + 4088) & 4) != 0 )
      {
        RtlSetAllBits((PRTL_BITMAP)(v5 + 44));
        *((_DWORD *)v5 + 26) = *((_DWORD *)v5 + 22);
      }
      HvUnlockHiveFlusherExclusive((__int64)v5);
      CmpUnlockRegistry();
      CmpLockRegistryExclusive();
      v26 = v41;
      if ( (_DWORD)v41 == 3 )
      {
        HvLockHiveFlusherShared((__int64)v5);
        CmpMarkCurrentValueDirty((ULONG_PTR)v5, *(unsigned int *)(*((_QWORD *)v5 + 8) + 36LL));
        HvUnlockHiveFlusherShared((__int64)v5);
      }
      CmpMachineHiveList[v3 + 6] = v5;
      LODWORD(inited) = HvpDropPagedBins((ULONG_PTR)v5);
      if ( (inited & 0x80000000) != 0LL )
      {
        v11 = Source;
        v1 = 80;
LABEL_83:
        *((_QWORD *)v5 + 7) = BugCheckParameter2;
        BugCheckParameter2[0] = (ULONG_PTR)v5;
        SetFailureLocation((__int64)BugCheckParameter2, 0, 22, inited, v1);
        v48 = v11;
        CmpPuntBoot = 1;
        ExRaiseHardError(3221226008LL, 1LL, 1LL, &v48, 1, &v37);
        KeBugCheckEx(0x74u, 2uLL, 1uLL, BugCheckParameter3a, (int)inited);
      }
      CmpUnlockRegistry();
      CmpFinishBeingActiveFlusherAndReconciler(v5);
      v27 = *((_QWORD *)v5 + 8);
      if ( *(_DWORD *)(v27 + 4092) || (*(_DWORD *)(v27 + 4088) & 4) != 0 )
      {
        CmpFlushHive((ULONG_PTR)v5, 0xCu);
        CmpLockRegistry();
        HvLockHiveFlusherExclusive((__int64)v5);
        *(_DWORD *)(*((_QWORD *)v5 + 8) + 4092LL) = 0;
        *(_DWORD *)(*((_QWORD *)v5 + 8) + 4088LL) &= ~4u;
        HvUnlockHiveFlusherExclusive((__int64)v5);
        CmpUnlockRegistry();
      }
      if ( CmpCannotWriteConfiguration )
        CmpDiskFullWarning();
      SystemHiveFullPathName.Buffer = (char *)&SystemHiveFullPathBuffer;
      *(_DWORD *)&SystemHiveFullPathName.Length = 0x800000;
      RtlAppendStringToString(&SystemHiveFullPathName, Source);
      if ( CmpDoIdleProcessing && (int)CmpInitBackupHive(v5, CmpMachineHiveList[v3]) < 0 )
        CmpDoIdleProcessing = 0;
    }
    *((_DWORD *)v5 + 1038) |= 4u;
    if ( v26 == 3 )
    {
      CmpLockRegistry();
      HvLockHiveFlusherShared((__int64)v5);
      *v9 |= 0x200u;
      HvUnlockHiveFlusherShared((__int64)v5);
      CmpUnlockRegistry();
    }
    goto LABEL_69;
  }
  inited = (int)CmpInitHiveFromFile(
                  (PCUNICODE_STRING)&CmpMachineHiveList[v3 + 23],
                  (int)CmpMachineHiveList[v3 + 4],
                  &v38,
                  (char *)&CmpMachineHiveList[v3 + 7] + 3,
                  0x1590001u,
                  0LL,
                  v31,
                  v32,
                  (__int64)&v33,
                  BugCheckParameter2);
  if ( v2 == 6 && !BYTE4(CmpMachineHiveList[v3 + 7]) && ((_DWORD)inited == -1073741772 || (_DWORD)inited == -1073741765)
    || (v6 = 0x8000, ((__int64)CmpMachineHiveList[v3 + 4] & 0x8000) != 0)
    && !BYTE4(CmpMachineHiveList[v3 + 7])
    && (_DWORD)inited == -1073741772 )
  {
    LODWORD(inited) = 0;
    goto LABEL_75;
  }
  if ( (_DWORD)inited != -1073741431 || !(unsigned __int8)CmpIsShutdownRundownActive(0x8000LL, 3221225524LL) )
  {
    if ( (inited & 0x80000000) != 0LL
      || (v5 = (wchar_t *)v38, (v6 & (__int64)CmpMachineHiveList[v3 + 4]) == 0)
      && (!*(_QWORD *)(v38 + 1568) || !*(_QWORD *)(v38 + 1576)) )
    {
      CmpPuntBoot = 1;
      KeBugCheckEx(0x74u, 2uLL, (ULONG_PTR)BugCheckParameter2, v2, inited);
    }
    *(_DWORD *)(v38 + 4152) = HIDWORD(CmpMachineHiveList[v3 + 4]) | 4;
    CmpMachineHiveList[v3 + 6] = v5;
    if ( (_BYTE)v33 )
    {
      v7 = &stru_140C00F40;
      CmpInitRmLogOnLoad = 1;
      v8 = 7LL;
      do
      {
        KeSetEvent(v7, 0, 0);
        v7 = (struct _KEVENT *)((char *)v7 + 200);
        --v8;
      }
      while ( v8 );
    }
    v9 = v5 + 80;
    if ( (*((_DWORD *)v5 + 40) & 0x8001) == 0
      && CmpDoIdleProcessing
      && (int)CmpInitBackupHive(v5, CmpMachineHiveList[v3]) < 0 )
    {
      CmpDoIdleProcessing = 0;
    }
LABEL_69:
    if ( CmpAcquireShutdownRundown() )
    {
      if ( (*v9 & 0x8001) == 0 )
      {
        if ( *((_QWORD *)v5 + 192) )
        {
          v28 = CmpApplyAdminSdOnHiveFiles((ULONG_PTR)v5, (ULONG_PTR)CmpMachineHiveList[v3]);
          LODWORD(inited) = v28;
          if ( v28 < 0 )
            KeBugCheckEx(0x51u, 0x13uLL, (ULONG_PTR)v5, (ULONG_PTR)CmpMachineHiveList[v3], v28);
        }
      }
      CmpReleaseShutdownRundown();
    }
    else
    {
      LODWORD(inited) = -1073741431;
    }
  }
LABEL_75:
  BYTE1(CmpMachineHiveList[v3 + 7]) = 1;
  KeSetEvent((PRKEVENT)&CmpMachineHiveList[v3 + 11], 0, 0);
  if ( _InterlockedIncrement(&CmpLoadWorkerIncrement) == 6 && (unsigned int)CmpCheckHiveIndex < 7 )
    KeSetEvent(&CmpLoadWorkerDebugEvent, 0, 0);
  v29 = CmpMachineHiveList[v3 + 24];
  if ( v29 )
  {
    ExFreePoolWithTag(v29, 0);
    RtlUnicodeStringInit((PUNICODE_STRING)&CmpMachineHiveList[v3 + 23], 0LL);
  }
  return PsTerminateSystemThread(inited);
}
