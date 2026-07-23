/*
 * XREFs of CmpCreateHive @ 0x1406F756C
 * Callers:
 *     CmpInitHiveFromFile @ 0x1406A3018 (CmpInitHiveFromFile.c)
 *     CmpCreateTemporaryHive @ 0x14072A8AC (CmpCreateTemporaryHive.c)
 *     CmRestoreKey @ 0x14087C090 (CmRestoreKey.c)
 *     CmpLoadHiveVolatile @ 0x14087D0BC (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x14087D558 (CmpRefreshHive.c)
 *     CmInitSystem1 @ 0x140A5AF78 (CmInitSystem1.c)
 *     CmpInitializeSystemHive @ 0x140A5BA10 (CmpInitializeSystemHive.c)
 *     CmpInitializePreloadedHive @ 0x140A5BBA8 (CmpInitializePreloadedHive.c)
 * Callees:
 *     SetFailureLocation @ 0x140242D88 (SetFailureLocation.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     CmpRecheckHiveVolumePolicy @ 0x1402F73C0 (CmpRecheckHiveVolumePolicy.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     CmpAdjustFileCFSafety @ 0x1403F06EC (CmpAdjustFileCFSafety.c)
 *     ZwSetInformationObject @ 0x1403FB100 (ZwSetInformationObject.c)
 *     CmpUnlockHiveList @ 0x1405E2A98 (CmpUnlockHiveList.c)
 *     CmpLockHiveListExclusive @ 0x1405E2AB8 (CmpLockHiveListExclusive.c)
 *     HvMarkBaseBlockDirty @ 0x14061C16C (HvMarkBaseBlockDirty.c)
 *     CmpReleaseShutdownRundown @ 0x14064A4A0 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x14064B8D0 (CmpAcquireShutdownRundown.c)
 *     HvUnlockHiveFlusherShared @ 0x14065B0AC (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x14065B0E4 (HvLockHiveFlusherShared.c)
 *     ObDuplicateObject @ 0x1406E4910 (ObDuplicateObject.c)
 *     CmpDetachFromRegistryProcess @ 0x1406E589C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1406E5AF0 (CmpAttachToRegistryProcess.c)
 *     HvUnlockHiveWriter @ 0x1406F7EE0 (HvUnlockHiveWriter.c)
 *     HvLockHiveWriter @ 0x1406F7F10 (HvLockHiveWriter.c)
 *     CmpReorganizeHive @ 0x1406F7F2C (CmpReorganizeHive.c)
 *     CmpHiveInitialize @ 0x1406F80F8 (CmpHiveInitialize.c)
 *     CmpAllocate @ 0x1406F8250 (CmpAllocate.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x1406F8838 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     CmCheckRegistry @ 0x1406F8F20 (CmCheckRegistry.c)
 *     HvHiveStartFileBacked @ 0x1406F94C0 (HvHiveStartFileBacked.c)
 *     CmpVolumeContextMustHiveFilePagesBeKeptLocal @ 0x1406F9840 (CmpVolumeContextMustHiveFilePagesBeKeptLocal.c)
 *     CmpVolumeManagerGetContextForFile @ 0x1406F9894 (CmpVolumeManagerGetContextForFile.c)
 *     CmpGetVolumeClusterSize @ 0x1406FA368 (CmpGetVolumeClusterSize.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x14070D2F0 (CmpLockRegistry.c)
 *     CmpDestroyHive @ 0x1407293E8 (CmpDestroyHive.c)
 *     HvHiveStartMemoryBacked @ 0x14076FFD4 (HvHiveStartMemoryBacked.c)
 *     CmpLogHiveInitializeEvent @ 0x14086A9D0 (CmpLogHiveInitializeEvent.c)
 */

__int64 __fastcall CmpCreateHive(
        ULONG_PTR *a1,
        unsigned int a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        _QWORD *a6,
        __int64 a7,
        int a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  int v12; // r12d
  ULONG_PTR v13; // rdi
  BOOLEAN v14; // r13
  int ContextForFile; // ebx
  __int64 v16; // rcx
  __int64 v17; // rax
  signed int VolumeClusterSize; // eax
  __int64 v19; // rax
  void *v20; // rcx
  void *v21; // rdx
  void *v22; // rcx
  void *v23; // rdx
  __int64 *v24; // r13
  void *v25; // rdx
  void *v26; // rcx
  void *v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // r8
  unsigned int v30; // eax
  unsigned int v31; // r15d
  int started; // eax
  unsigned int v33; // r9d
  int v35; // edx
  __int64 v36; // rax
  unsigned int v37; // r9d
  int v38; // edx
  int v39; // r9d
  int v40; // r10d
  __int64 v41; // rax
  __int64 v42; // r12
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  _QWORD *v46; // rbx
  _QWORD *v47; // rax
  ULONG_PTR *v48; // rax
  unsigned int v49; // [rsp+20h] [rbp-E0h]
  unsigned int v50; // [rsp+20h] [rbp-E0h]
  int v51; // [rsp+30h] [rbp-D0h]
  BOOLEAN v52; // [rsp+70h] [rbp-90h]
  _WORD ObjectInformation[2]; // [rsp+74h] [rbp-8Ch] BYREF
  char v54; // [rsp+78h] [rbp-88h]
  int v55; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned int v56; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v57; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v58; // [rsp+88h] [rbp-78h] BYREF
  __int64 v59; // [rsp+90h] [rbp-70h]
  __int64 v60; // [rsp+98h] [rbp-68h] BYREF
  __int64 v61; // [rsp+A0h] [rbp-60h]
  __int64 v62; // [rsp+A8h] [rbp-58h]
  __int64 v63; // [rsp+B0h] [rbp-50h]
  ULONG_PTR *v64; // [rsp+B8h] [rbp-48h]
  __int128 v65; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v66; // [rsp+D0h] [rbp-30h]
  __int64 (__fastcall *v67)(__int64, unsigned int, ULONG, char *, ULONG); // [rsp+E0h] [rbp-20h]
  _OWORD v68[3]; // [rsp+E8h] [rbp-18h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+120h] [rbp+20h] BYREF
  unsigned int *v70; // [rsp+140h] [rbp+40h]
  __int64 v71; // [rsp+148h] [rbp+48h]
  _WORD *v72; // [rsp+150h] [rbp+50h]
  __int64 v73; // [rsp+158h] [rbp+58h]
  int *v74; // [rsp+160h] [rbp+60h]
  __int64 v75; // [rsp+168h] [rbp+68h]
  unsigned int *v76; // [rsp+170h] [rbp+70h]
  __int64 v77; // [rsp+178h] [rbp+78h]
  __int64 v78; // [rsp+180h] [rbp+80h]
  __int64 v79; // [rsp+188h] [rbp+88h]
  __int64 v80; // [rsp+190h] [rbp+90h]
  int v81; // [rsp+198h] [rbp+98h]
  int v82; // [rsp+19Ch] [rbp+9Ch]
  __int64 v83; // [rsp+1A0h] [rbp+A0h]
  __int64 v84; // [rsp+1A8h] [rbp+A8h]
  __int64 v85; // [rsp+1B0h] [rbp+B0h]
  int v86; // [rsp+1B8h] [rbp+B8h]
  int v87; // [rsp+1BCh] [rbp+BCh]
  __int64 v88; // [rsp+1C0h] [rbp+C0h]
  __int64 v89; // [rsp+1C8h] [rbp+C8h]
  __int64 v90; // [rsp+1D0h] [rbp+D0h]
  int v91; // [rsp+1D8h] [rbp+D8h]
  int v92; // [rsp+1DCh] [rbp+DCh]
  __int64 *v93; // [rsp+1E0h] [rbp+E0h]
  __int64 v94; // [rsp+1E8h] [rbp+E8h]

  v56 = a2;
  v12 = a3;
  v59 = a7;
  v13 = 0LL;
  v14 = 0;
  v63 = a9;
  v62 = a10;
  v61 = a11;
  v64 = a1;
  v57 = a4;
  v60 = a5;
  v67 = 0LL;
  v58 = 0;
  v54 = 0;
  v65 = 0LL;
  v66 = 0LL;
  memset(v68, 0, sizeof(v68));
  if ( a2 > 2 && a2 != 5 )
  {
    ContextForFile = -1073741811;
    SetFailureLocation(a12, 0, 1, 0xC000000D, 0);
    goto LABEL_70;
  }
  if ( (a3 & 0xFF617CEC) != 0 )
  {
    v49 = 16;
LABEL_6:
    ContextForFile = -1073741811;
    SetFailureLocation(a12, 0, 1, 0xC000000D, v49);
    return (unsigned int)ContextForFile;
  }
  if ( a4 > 2 )
  {
    v49 = 32;
    goto LABEL_6;
  }
  if ( !a5 && a2 == 1 )
  {
    v49 = 48;
    goto LABEL_6;
  }
  if ( a6 )
  {
    if ( (a3 & 0x8001) == 1 )
    {
      v49 = 64;
      goto LABEL_6;
    }
    if ( !*a6 && (a6[1] || a6[2]) )
    {
      v49 = 80;
      goto LABEL_6;
    }
    v16 = a6[1];
    if ( v16 && !a4 )
    {
      v49 = 96;
      goto LABEL_6;
    }
    v17 = a6[2];
    if ( v17 && a4 != 2 )
    {
      v49 = 112;
      goto LABEL_6;
    }
    if ( a6[3] && (*a6 || v16 || v17) )
    {
      v49 = 128;
      goto LABEL_6;
    }
  }
  v52 = CmpAcquireShutdownRundown();
  v14 = v52;
  if ( !v52 )
    return (unsigned int)-1073741431;
  v55 = 1;
  if ( a6 )
  {
    if ( *a6 )
    {
      VolumeClusterSize = CmpGetVolumeClusterSize((HANDLE)*a6);
      ContextForFile = VolumeClusterSize;
      if ( VolumeClusterSize < 0 )
      {
        SetFailureLocation(a12, 0, 1, VolumeClusterSize, 0xA0u);
        goto LABEL_74;
      }
    }
  }
  v19 = CmpAllocate(0x12E8uLL);
  v13 = v19;
  if ( !v19 )
  {
    ContextForFile = -1073741670;
    SetFailureLocation(a12, 0, 1, 0xC000009A, 0xB0u);
    goto LABEL_74;
  }
  CmpHiveInitialize(v19);
  if ( !a6 )
    goto LABEL_56;
  if ( *a6 )
  {
    ContextForFile = ObDuplicateObject(PsInitialSystemProcess, (void *)*a6, 0LL, (__int64 *)(v13 + 1536), 0, 512, 2, 0);
    if ( ContextForFile < 0 )
      goto LABEL_69;
    v20 = *(void **)(v13 + 1536);
    ObjectInformation[0] = 256;
    ZwSetInformationObject(v20, ObjectHandleFlagInformation, ObjectInformation, 2u);
  }
  v21 = (void *)a6[3];
  if ( v21 )
  {
    ContextForFile = ObDuplicateObject(PsInitialSystemProcess, v21, 0LL, (__int64 *)(v13 + 1552), 0, 512, 2, 0);
    if ( ContextForFile < 0 )
      goto LABEL_69;
    v22 = *(void **)(v13 + 1552);
    ObjectInformation[0] = 256;
    ZwSetInformationObject(v22, ObjectHandleFlagInformation, ObjectInformation, 2u);
  }
  if ( v57 == 1 )
  {
    v23 = (void *)a6[1];
    if ( v23 )
    {
      v24 = (__int64 *)(v13 + 1544);
      goto LABEL_54;
    }
  }
  else if ( v57 == 2 )
  {
    v25 = (void *)a6[1];
    if ( v25 )
    {
      ContextForFile = ObDuplicateObject(PsInitialSystemProcess, v25, 0LL, (__int64 *)(v13 + 1568), 0, 512, v57, 0);
      if ( ContextForFile < 0 )
        goto LABEL_69;
      v26 = *(void **)(v13 + 1568);
      ObjectInformation[0] = 256;
      ZwSetInformationObject(v26, ObjectHandleFlagInformation, ObjectInformation, 2u);
    }
    v23 = (void *)a6[2];
    if ( v23 )
    {
      v24 = (__int64 *)(v13 + 1576);
LABEL_54:
      ContextForFile = ObDuplicateObject(PsInitialSystemProcess, v23, 0LL, v24, 0, 512, 2, 0);
      if ( ContextForFile >= 0 )
      {
        v27 = (void *)*v24;
        ObjectInformation[0] = 256;
        ZwSetInformationObject(v27, ObjectHandleFlagInformation, ObjectInformation, 2u);
        goto LABEL_56;
      }
LABEL_69:
      v14 = v52;
LABEL_70:
      if ( v13 )
        CmpDestroyHive((PVOID)v13);
      if ( !v54 )
        goto LABEL_74;
      goto LABEL_73;
    }
  }
LABEL_56:
  if ( (a8 & 0x8000000) != 0 )
    *(_DWORD *)(v13 + 4152) |= 0x80u;
  if ( a8 < 0 )
    *(_DWORD *)(v13 + 4152) |= 0x800u;
  CmpAttachToRegistryProcess((__int64)v68);
  v54 = 1;
  *(_QWORD *)&v65 = CmpAllocate;
  *((_QWORD *)&v65 + 1) = CmpFree;
  *((_QWORD *)&v66 + 1) = CmpFileWrite;
  v67 = CmpFileRead;
  v30 = v56;
  *(_QWORD *)(v13 + 56) = a12;
  *(_QWORD *)a12 = v13;
  if ( v30 != 2 && v30 != 5 && (v30 || !a6 || !*a6) )
  {
    v31 = v56;
    started = HvHiveStartMemoryBacked(v13, v60, (__int64)&v65, v55, v59, v63, v62, v61, (__int64)&v58, a12);
    ContextForFile = started;
    if ( started < 0 )
    {
      v50 = 232;
LABEL_67:
      v33 = started;
LABEL_68:
      SetFailureLocation(a12, 0, 1, v33, v50);
      goto LABEL_69;
    }
    goto LABEL_88;
  }
  v12 |= 0x20000u;
  ContextForFile = CmpVolumeManagerGetContextForFile(v28, *a6, v29, v13 + 4832);
  if ( ContextForFile < 0 )
    goto LABEL_69;
  if ( (unsigned __int8)CmpVolumeContextMustHiveFilePagesBeKeptLocal(*(_QWORD *)(v13 + 4832))
    || (a8 & 0x2000000) != 0
    || (v12 & 0x8000) != 0
    || (a8 & 0x40) != 0 )
  {
    goto LABEL_85;
  }
  if ( (a8 & 0x20) != 0 )
    goto LABEL_86;
  if ( (int)CmpAdjustFileCFSafety((HANDLE)*a6, 1) < 0 )
LABEL_85:
    v12 |= 0x800000u;
  else
    *(_DWORD *)(v13 + 4152) |= 0x10000u;
LABEL_86:
  v31 = v56;
  LOBYTE(v35) = v56 == 0;
  started = HvHiveStartFileBacked(v13, v35, v12, v57, (__int64)&v65, v55, v51, v59, v63, v62, v61, (__int64)&v58, a12);
  ContextForFile = started;
  if ( started < 0 )
  {
    v50 = 228;
    goto LABEL_67;
  }
LABEL_88:
  if ( (v12 & 0x180000) == 0x80000 && (a8 & 0x800000) == 0 )
  {
    v36 = *(_QWORD *)(v13 + 64);
    if ( *(_DWORD *)(v36 + 24) < 6u || (*(_DWORD *)(v36 + 144) & 2) == 0 )
    {
      ContextForFile = -1073741811;
      goto LABEL_69;
    }
  }
  if ( ((v31 - 1) & 0xFFFFFFFA) == 0 && v31 != 6 )
  {
    ContextForFile = CmCheckRegistry(v13, (unsigned int)a8, a12);
    if ( ContextForFile == -2147483606 )
    {
      if ( (unsigned int)dword_140C02130 <= 5 )
      {
        ContextForFile = 0;
      }
      else
      {
        ContextForFile = 0;
        if ( tlgKeywordOn((__int64)&dword_140C02130, 0x400000000000LL) )
        {
          v57 = v37;
          v70 = &v57;
          v72 = ObjectInformation;
          v38 = *(unsigned __int16 *)(a12 + 8);
          v39 = *(unsigned __int16 *)(a12 + 10);
          v78 = a12 + 8;
          v74 = &v55;
          v80 = a12 + 12;
          v40 = *(unsigned __int8 *)(a12 + 394);
          v81 = 12 * v38;
          v85 = a12 + 108;
          v86 = 12 * v39;
          v90 = a12 + 396;
          v93 = &v60;
          LOWORD(v56) = v40;
          ObjectInformation[0] = v38;
          LOWORD(v55) = v39;
          v83 = a12 + 10;
          v88 = a12 + 394;
          v71 = 4LL;
          v73 = 2LL;
          v75 = 2LL;
          v76 = &v56;
          v77 = 2LL;
          v79 = 2LL;
          v82 = 0;
          v84 = 2LL;
          v87 = 0;
          v89 = 2LL;
          v91 = 8 * v40;
          v92 = 0;
          v60 = 0x1000000LL;
          v94 = 8LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140C02130,
            (unsigned __int8 *)byte_14002375B,
            0LL,
            0LL,
            0xDu,
            &v69);
        }
      }
    }
    if ( ContextForFile < 0 )
    {
      v50 = 240;
LABEL_102:
      v33 = ContextForFile;
      goto LABEL_68;
    }
  }
  if ( (a8 & 0x800000) != 0 )
  {
    v41 = *(_QWORD *)(v13 + 64);
    if ( *(_DWORD *)(v41 + 24) < 6u || (*(_DWORD *)(v41 + 144) & 2) == 0 )
    {
      HvMarkBaseBlockDirty(v13);
      *(_DWORD *)(*(_QWORD *)(v13 + 64) + 24LL) = 6;
      *(_DWORD *)(*(_QWORD *)(v13 + 64) + 144LL) |= 2u;
    }
  }
  v42 = v59;
  CmpReorganizeHive(v13, v59, (unsigned int)a8);
  CmpLockRegistry(v43);
  HvLockHiveFlusherShared(v13);
  HvLockHiveWriter(v13);
  if ( v31 )
  {
    ContextForFile = HvCheckAndUpdateHiveBackupTimeStamp(v13);
  }
  else
  {
    *(_BYTE *)(v13 + 191) = 1;
    ContextForFile = 0;
  }
  HvUnlockHiveWriter(v13);
  HvUnlockHiveFlusherShared(v13);
  CmpUnlockRegistry(v45, v44);
  if ( ContextForFile < 0 )
  {
    v50 = 256;
    goto LABEL_102;
  }
  v46 = (_QWORD *)(v13 + 1600);
  if ( (a8 & 0x1000000) != 0 )
  {
    *(_QWORD *)(v13 + 1608) = v13 + 1600;
    *v46 = v46;
  }
  else
  {
    CmpLockHiveListExclusive();
    v47 = (_QWORD *)qword_140D2E918;
    if ( *(__int64 **)qword_140D2E918 != &CmpHiveListHead )
      __fastfail(3u);
    *v46 = &CmpHiveListHead;
    *(_QWORD *)(v13 + 1608) = v47;
    *v47 = v46;
    qword_140D2E918 = v13 + 1600;
    CmpUnlockHiveList();
    CmpRecheckHiveVolumePolicy(v13);
  }
  v48 = v64;
  *(_QWORD *)(v13 + 56) = 0LL;
  *v48 = v13;
  CmpReleaseShutdownRundown();
  v14 = 0;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x1000000) != 0 )
    CmpLogHiveInitializeEvent(v13, v31, v42, v58);
  ContextForFile = 0;
LABEL_73:
  CmpDetachFromRegistryProcess((__int64)v68);
LABEL_74:
  if ( v14 )
    CmpReleaseShutdownRundown();
  return (unsigned int)ContextForFile;
}
