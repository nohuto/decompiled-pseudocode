/*
 * XREFs of CmpLoadHiveThread @ 0x140781490
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     RtlSetAllBits @ 0x1402CAD50 (RtlSetAllBits.c)
 *     RtlAreBitsClear @ 0x1402E0BC0 (RtlAreBitsClear.c)
 *     RtlNumberOfSetBits @ 0x1402E13C0 (RtlNumberOfSetBits.c)
 *     RtlSetBits @ 0x1402E30C0 (RtlSetBits.c)
 *     SetFailureLocation @ 0x140315198 (SetFailureLocation.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     memset @ 0x140408F80 (memset.c)
 *     HvLockHiveFlusherShared @ 0x140618340 (HvLockHiveFlusherShared.c)
 *     HvUnlockHiveFlusherShared @ 0x14061835C (HvUnlockHiveFlusherShared.c)
 *     CmpUnlockRegistry @ 0x140629290 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1406292D0 (CmpLockRegistry.c)
 *     CmpInitHiveFromFile @ 0x1406636E8 (CmpInitHiveFromFile.c)
 *     CmpOpenHiveFile @ 0x140664008 (CmpOpenHiveFile.c)
 *     CmpFlushHive @ 0x140664FA8 (CmpFlushHive.c)
 *     CmpDoFileSetSizeEx @ 0x14068560C (CmpDoFileSetSizeEx.c)
 *     CmpGetFileSize @ 0x140687240 (CmpGetFileSize.c)
 *     HvUnlockHiveFlusherExclusive @ 0x14068847C (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x1406884B4 (HvLockHiveFlusherExclusive.c)
 *     CmpLockRegistryExclusive @ 0x14069120C (CmpLockRegistryExclusive.c)
 *     PsTerminateSystemThread @ 0x1406EA510 (PsTerminateSystemThread.c)
 *     RtlAppendStringToString @ 0x140759410 (RtlAppendStringToString.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x140781318 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpMarkCurrentValueDirty @ 0x1407813C0 (CmpMarkCurrentValueDirty.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x140781A00 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     HvpDropPagedBins @ 0x140781B74 (HvpDropPagedBins.c)
 *     CmpInitBackupHive @ 0x14086FFEC (CmpInitBackupHive.c)
 *     CmpLogFailureToGetFileSize @ 0x140872054 (CmpLogFailureToGetFileSize.c)
 *     CmpDiskFullWarning @ 0x1408723E8 (CmpDiskFullWarning.c)
 *     ExRaiseHardError @ 0x1409517E0 (ExRaiseHardError.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall CmpLoadHiveThread(ULONG_PTR BugCheckParameter3)
{
  int v1; // edi
  unsigned int v2; // r13d
  __int64 v3; // r14
  ULONG_PTR inited; // rbx
  wchar_t *v5; // rsi
  ULONG_PTR v6; // rsi
  wchar_t *v7; // rcx
  int v9; // eax
  STRING *v10; // r12
  unsigned int v11; // r15d
  HANDLE v12; // r12
  NTSTATUS FileSize; // eax
  __int64 v14; // rcx
  int v15; // ebx
  HANDLE v16; // r15
  NTSTATUS v17; // eax
  __int64 v18; // rcx
  int v19; // ebx
  __int128 v20; // xmm0
  __int64 v21; // rax
  ULONG v22; // ebx
  __int64 v23; // rax
  __int64 v24; // rax
  struct _KEVENT *v25; // r15
  __int64 v26; // r12
  ULONG i; // r15d
  int v28; // eax
  __int64 v29; // [rsp+38h] [rbp-D0h]
  __int64 v30; // [rsp+40h] [rbp-C8h]
  int v31; // [rsp+58h] [rbp-B0h] BYREF
  int v32; // [rsp+5Ch] [rbp-ACh] BYREF
  int v33; // [rsp+60h] [rbp-A8h] BYREF
  int v34; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v35; // [rsp+68h] [rbp-A0h] BYREF
  ULONG_PTR v36; // [rsp+70h] [rbp-98h] BYREF
  HANDLE v37; // [rsp+78h] [rbp-90h] BYREF
  ULONG Length[2]; // [rsp+80h] [rbp-88h] BYREF
  HANDLE v39; // [rsp+88h] [rbp-80h] BYREF
  HANDLE v40; // [rsp+90h] [rbp-78h] BYREF
  __int64 v41; // [rsp+98h] [rbp-70h] BYREF
  STRING *Source; // [rsp+A0h] [rbp-68h]
  __int128 v43; // [rsp+A8h] [rbp-60h] BYREF
  STRING *v44; // [rsp+B8h] [rbp-50h] BYREF
  ULONG_PTR BugCheckParameter3a; // [rsp+C0h] [rbp-48h]
  ULONG_PTR BugCheckParameter2[54]; // [rsp+C8h] [rbp-40h] BYREF

  v1 = 0;
  v2 = BugCheckParameter3;
  v36 = 0LL;
  LODWORD(v35) = 0;
  v41 = 0LL;
  v33 = 0;
  v39 = 0LL;
  v34 = 0;
  v40 = 0LL;
  LOBYTE(v31) = 0;
  v32 = 0;
  v37 = 0LL;
  memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  v3 = 25LL * v2;
  *(_QWORD *)Length = 0LL;
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
  if ( !v5 )
  {
    inited = (int)CmpInitHiveFromFile(
                    (PCUNICODE_STRING)&CmpMachineHiveList[v3 + 23],
                    (int)CmpMachineHiveList[v3 + 4],
                    &v36,
                    (char *)&CmpMachineHiveList[v3 + 7] + 3,
                    0x1490001u,
                    0LL,
                    v29,
                    v30,
                    (__int64)&v31,
                    BugCheckParameter2);
    if ( v2 == 6
      && !BYTE4(CmpMachineHiveList[v3 + 7])
      && ((_DWORD)inited == -1073741772 || (_DWORD)inited == -1073741765)
      || ((__int64)CmpMachineHiveList[v3 + 4] & 0x8000) != 0
      && !BYTE4(CmpMachineHiveList[v3 + 7])
      && (_DWORD)inited == -1073741772 )
    {
      LODWORD(inited) = 0;
    }
    else if ( (_DWORD)inited != -1073741431 || (CmpShutdownRundown & 1) == 0 )
    {
      if ( (inited & 0x80000000) != 0LL
        || (v6 = v36, ((__int64)CmpMachineHiveList[v3 + 4] & 0x8000) == 0)
        && (!*(_QWORD *)(v36 + 1568) || !*(_QWORD *)(v36 + 1576)) )
      {
        BYTE6(NlsMbCodePageTag) = 1;
        KeBugCheckEx(0x74u, 2uLL, (ULONG_PTR)BugCheckParameter2, v2, inited);
      }
      *(_DWORD *)(v36 + 4152) = HIDWORD(CmpMachineHiveList[v3 + 4]) | 4;
      CmpMachineHiveList[v3 + 6] = (wchar_t *)v6;
      if ( (_BYTE)v31 )
      {
        CmpInitRmLogOnLoad = 1;
        v25 = &stru_140C00F40;
        v26 = 7LL;
        do
        {
          KeSetEvent(v25, 0, 0);
          v25 = (struct _KEVENT *)((char *)v25 + 200);
          --v26;
        }
        while ( v26 );
      }
      if ( (*(_DWORD *)(v6 + 160) & 0x8001) == 0
        && CmpDoIdleProcessing
        && (int)CmpInitBackupHive(v6, CmpMachineHiveList[v3]) < 0 )
      {
        CmpDoIdleProcessing = 0;
      }
    }
    goto LABEL_13;
  }
  v9 = *((_DWORD *)v5 + 40);
  v36 = (ULONG_PTR)v5;
  if ( (v9 & 0x8001) == 0 )
  {
    v10 = (STRING *)&CmpMachineHiveList[v3 + 23];
    Source = v10;
    LODWORD(inited) = CmpOpenHiveFile((UNICODE_STRING *)v10, 0, &v37, &v32, 7u, 0LL, (__int64)Length, 0LL, 0LL);
    if ( (inited & 0x80000000) == 0LL )
    {
      v11 = (16 * (v32 == 2)) | 2;
      LODWORD(inited) = CmpOpenHiveFile((UNICODE_STRING *)v10, 4u, &v39, &v33, v11, 0LL, 0LL, 0LL, 0LL);
      if ( (inited & 0x80000000) != 0LL )
      {
        v1 = 16;
      }
      else
      {
        LODWORD(inited) = CmpOpenHiveFile((UNICODE_STRING *)v10, 5u, &v40, &v34, v11, 0LL, 0LL, 0LL, 0LL);
        if ( (inited & 0x80000000) != 0LL )
        {
          v1 = 32;
        }
        else
        {
          LODWORD(inited) = CmpGetFileSize(v37, &v41);
          if ( (inited & 0x80000000) != 0LL )
          {
            v1 = 40;
          }
          else
          {
            v12 = v39;
            FileSize = CmpGetFileSize(v39, &v43);
            v15 = FileSize;
            if ( FileSize < 0 )
            {
              CmpLogFailureToGetFileSize(v14, 4LL, (unsigned int)FileSize);
              *((_QWORD *)v5 + 7) = BugCheckParameter2;
              BugCheckParameter2[0] = (ULONG_PTR)v5;
              SetFailureLocation((__int64)BugCheckParameter2, 1, 22, v15, 43);
              *(_QWORD *)&v43 = 0LL;
            }
            v16 = v40;
            v17 = CmpGetFileSize(v40, (_QWORD *)&v43 + 1);
            v19 = v17;
            if ( v17 < 0 )
            {
              CmpLogFailureToGetFileSize(v18, 5LL, (unsigned int)v17);
              *((_QWORD *)v5 + 7) = BugCheckParameter2;
              BugCheckParameter2[0] = (ULONG_PTR)v5;
              SetFailureLocation((__int64)BugCheckParameter2, 1, 22, v19, 45);
              *((_QWORD *)&v43 + 1) = 0LL;
            }
            CmpBecomeActiveFlusherAndReconciler((__int64)v5);
            CmpLockRegistry();
            HvLockHiveFlusherExclusive((__int64)v5);
            v20 = v43;
            *((_QWORD *)v5 + 192) = v37;
            v21 = v41;
            *((_QWORD *)v5 + 196) = v12;
            *((_QWORD *)v5 + 197) = v16;
            *((_QWORD *)v5 + 224) = v21;
            *(_OWORD *)(v5 + 900) = v20;
            *((_DWORD *)v5 + 40) &= ~2u;
            *((_DWORD *)v5 + 1038) = HIDWORD(CmpMachineHiveList[v3 + 4]);
            *((_DWORD *)v5 + 46) = Length[1];
            if ( (int)CmpDoFileSetSizeEx((__int64)v5, 0, (unsigned int)(*((_DWORD *)v5 + 68) + 4096), 1) < 0 )
              CmpCannotWriteConfiguration = 1;
            v22 = Length[0];
            if ( *((_DWORD *)v5 + 34) != Length[0] )
            {
              for ( i = 0; i < *((_DWORD *)v5 + 22); i += v22 )
              {
                if ( !RtlAreBitsClear((PRTL_BITMAP)(v5 + 44), i, v22) )
                  RtlSetBits((PRTL_BITMAP)(v5 + 44), i, v22);
              }
              *((_DWORD *)v5 + 26) = RtlNumberOfSetBits((PRTL_BITMAP)(v5 + 44));
              *((_DWORD *)v5 + 34) = v22;
            }
            v23 = *((_QWORD *)v5 + 8);
            if ( *(_DWORD *)(v23 + 4092) || (*(_DWORD *)(v23 + 4088) & 4) != 0 )
            {
              RtlSetAllBits((PRTL_BITMAP)(v5 + 44));
              *((_DWORD *)v5 + 26) = *((_DWORD *)v5 + 22);
            }
            HvUnlockHiveFlusherExclusive((__int64)v5);
            CmpUnlockRegistry();
            CmpLockRegistryExclusive();
            if ( v2 == 3 )
            {
              HvLockHiveFlusherShared((__int64)v5);
              CmpMarkCurrentValueDirty((ULONG_PTR)v5, *(unsigned int *)(*((_QWORD *)v5 + 8) + 36LL));
              HvUnlockHiveFlusherShared((__int64)v5);
            }
            CmpMachineHiveList[v3 + 6] = v5;
            LODWORD(inited) = HvpDropPagedBins((ULONG_PTR)v5);
            if ( (inited & 0x80000000) == 0LL )
            {
              CmpUnlockRegistry();
              CmpFinishBeingActiveFlusherAndReconciler(v5);
              v24 = *((_QWORD *)v5 + 8);
              if ( *(_DWORD *)(v24 + 4092) || (*(_DWORD *)(v24 + 4088) & 4) != 0 )
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
              if ( CmpDoIdleProcessing )
              {
                v28 = CmpInitBackupHive((ULONG_PTR)v5, CmpMachineHiveList[v3]);
                if ( v28 < 0 )
                  CmpDoIdleProcessing = 0;
              }
              goto LABEL_20;
            }
            v10 = Source;
            v1 = 80;
          }
        }
      }
    }
    *((_QWORD *)v5 + 7) = BugCheckParameter2;
    BugCheckParameter2[0] = (ULONG_PTR)v5;
    SetFailureLocation((__int64)BugCheckParameter2, 0, 22, inited, v1);
    v44 = v10;
    BYTE6(NlsMbCodePageTag) = 1;
    ExRaiseHardError(-1073741288, 1, 1, (unsigned int)&v44, 1, (__int64)&v35);
    KeBugCheckEx(0x74u, 2uLL, 1uLL, BugCheckParameter3a, (int)inited);
  }
  if ( CmpMiniNTBoot || CmpVolatileBoot )
  {
    if ( (v9 & 2) != 0 )
    {
      CmpLockRegistry();
      HvLockHiveFlusherExclusive((__int64)v5);
      *((_DWORD *)v5 + 40) &= ~2u;
      HvUnlockHiveFlusherExclusive((__int64)v5);
      CmpUnlockRegistry();
    }
    *(_DWORD *)&SystemHiveFullPathName.Length = 0x800000;
    SystemHiveFullPathName.Buffer = (char *)&SystemHiveFullPathBuffer;
    RtlAppendStringToString(&SystemHiveFullPathName, (const STRING *)&CmpMachineHiveList[v3 + 23]);
  }
LABEL_20:
  *((_DWORD *)v5 + 1038) |= 4u;
  if ( v2 == 3 )
  {
    CmpLockRegistry();
    HvLockHiveFlusherShared((__int64)v5);
    *((_DWORD *)v5 + 40) |= 0x200u;
    HvUnlockHiveFlusherShared((__int64)v5);
    CmpUnlockRegistry();
  }
LABEL_13:
  BYTE1(CmpMachineHiveList[v3 + 7]) = 1;
  KeSetEvent((PRKEVENT)&CmpMachineHiveList[v3 + 11], 0, 0);
  if ( _InterlockedIncrement(&CmpLoadWorkerIncrement) == 6 && (unsigned int)CmpCheckHiveIndex < 7 )
    KeSetEvent(&CmpLoadWorkerDebugEvent, 0, 0);
  v7 = CmpMachineHiveList[v3 + 24];
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0);
    *(_OWORD *)&CmpMachineHiveList[v3 + 23] = 0LL;
  }
  return PsTerminateSystemThread(inited);
}
