/*
 * XREFs of CmpCreateHive @ 0x1405DDED8
 * Callers:
 *     CmpInitHiveFromFile @ 0x14064EC08 (CmpInitHiveFromFile.c)
 *     CmpCreateTemporaryHive @ 0x1407268B0 (CmpCreateTemporaryHive.c)
 *     CmRestoreKey @ 0x14087E5A8 (CmRestoreKey.c)
 *     CmpLoadHiveVolatile @ 0x14087F5C8 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x14087FA64 (CmpRefreshHive.c)
 *     CmInitSystem1 @ 0x140A58954 (CmInitSystem1.c)
 *     CmpInitializeSystemHive @ 0x140A593E4 (CmpInitializeSystemHive.c)
 *     CmpInitializePreloadedHive @ 0x140A5957C (CmpInitializePreloadedHive.c)
 * Callees:
 *     CmpRecheckHiveVolumePolicy @ 0x140204810 (CmpRecheckHiveVolumePolicy.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140244AF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140244C78 (_tlgKeywordOn.c)
 *     SetFailureLocation @ 0x1403238E8 (SetFailureLocation.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwSetInformationObject @ 0x1403F8CF0 (ZwSetInformationObject.c)
 *     CmpLockHiveListExclusive @ 0x1405DAD8C (CmpLockHiveListExclusive.c)
 *     CmpUnlockHiveList @ 0x1405DADAC (CmpUnlockHiveList.c)
 *     CmpGetVolumeClusterSize @ 0x1405DCF4C (CmpGetVolumeClusterSize.c)
 *     CmpVolumeManagerGetContextForFile @ 0x1405DD2FC (CmpVolumeManagerGetContextForFile.c)
 *     CmpVolumeContextMustHiveFilePagesBeKeptLocal @ 0x1405DDB58 (CmpVolumeContextMustHiveFilePagesBeKeptLocal.c)
 *     HvHiveStartFileBacked @ 0x1405DDBAC (HvHiveStartFileBacked.c)
 *     HvUnlockHiveWriter @ 0x1405DE540 (HvUnlockHiveWriter.c)
 *     HvLockHiveWriter @ 0x1405DE570 (HvLockHiveWriter.c)
 *     CmpReorganizeHive @ 0x1405DE58C (CmpReorganizeHive.c)
 *     CmpHiveInitialize @ 0x1405DE758 (CmpHiveInitialize.c)
 *     CmpAllocate @ 0x1405DE8B0 (CmpAllocate.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x1405DE998 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     CmCheckRegistry @ 0x1405DF080 (CmCheckRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x14060C670 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x14060D8D0 (CmpAcquireShutdownRundown.c)
 *     CmpUnlockRegistry @ 0x140616950 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140616990 (CmpLockRegistry.c)
 *     HvUnlockHiveFlusherShared @ 0x14067010C (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x140670144 (HvLockHiveFlusherShared.c)
 *     ObDuplicateObject @ 0x140677E70 (ObDuplicateObject.c)
 *     CmpDetachFromRegistryProcess @ 0x140678E90 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1406790E0 (CmpAttachToRegistryProcess.c)
 *     HvMarkBaseBlockDirty @ 0x1406DD19C (HvMarkBaseBlockDirty.c)
 *     CmpDestroyHive @ 0x1407254A8 (CmpDestroyHive.c)
 *     HvHiveStartMemoryBacked @ 0x14076BAF8 (HvHiveStartMemoryBacked.c)
 *     CmpLogHiveInitializeEvent @ 0x14086CC40 (CmpLogHiveInitializeEvent.c)
 */

__int64 __fastcall CmpCreateHive(
        ULONG_PTR *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        void **a6,
        __int64 a7,
        int a8,
        _OWORD *a9,
        _OWORD *a10,
        _BYTE *a11,
        __int64 a12)
{
  unsigned int v12; // r13d
  ULONG_PTR v13; // rdi
  char v14; // r12
  void *v15; // rcx
  void *v16; // rax
  NTSTATUS VolumeClusterSize; // eax
  int ContextForFile; // ebx
  __int64 v19; // rax
  void *v20; // rcx
  void *v21; // rdx
  void *v22; // rdx
  void *v23; // rcx
  void *v24; // rdx
  void **v25; // r12
  void *v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // r8
  unsigned int v29; // eax
  __int64 v30; // rdx
  unsigned int v31; // r15d
  int started; // eax
  __int64 v33; // r13
  __int64 v34; // rdx
  __int64 v35; // rcx
  _QWORD *v36; // rbx
  ULONG_PTR *v37; // rax
  __int64 v39; // rax
  _QWORD *v40; // rax
  void *v41; // rcx
  int v42; // r9d
  unsigned int v43; // r9d
  int v44; // edx
  int v45; // r9d
  int v46; // r10d
  __int64 v47; // rax
  int v48; // [rsp+20h] [rbp-E0h]
  int v49; // [rsp+20h] [rbp-E0h]
  int v50; // [rsp+30h] [rbp-D0h]
  char v51; // [rsp+70h] [rbp-90h]
  _WORD ObjectInformation[2]; // [rsp+74h] [rbp-8Ch] BYREF
  char v53; // [rsp+78h] [rbp-88h]
  int v54; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned int v55; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v56; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v57; // [rsp+88h] [rbp-78h] BYREF
  __int64 v58; // [rsp+90h] [rbp-70h]
  __int64 v59; // [rsp+98h] [rbp-68h] BYREF
  _BYTE *v60; // [rsp+A0h] [rbp-60h]
  _OWORD *v61; // [rsp+A8h] [rbp-58h]
  _OWORD *v62; // [rsp+B0h] [rbp-50h]
  ULONG_PTR *v63; // [rsp+B8h] [rbp-48h]
  __int128 v64; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v65; // [rsp+D0h] [rbp-30h]
  __int64 (__fastcall *v66)(int, int, int, int, ULONG); // [rsp+E0h] [rbp-20h]
  _OWORD v67[3]; // [rsp+E8h] [rbp-18h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+120h] [rbp+20h] BYREF
  unsigned int *v69; // [rsp+140h] [rbp+40h]
  __int64 v70; // [rsp+148h] [rbp+48h]
  _WORD *v71; // [rsp+150h] [rbp+50h]
  __int64 v72; // [rsp+158h] [rbp+58h]
  int *v73; // [rsp+160h] [rbp+60h]
  __int64 v74; // [rsp+168h] [rbp+68h]
  unsigned int *v75; // [rsp+170h] [rbp+70h]
  __int64 v76; // [rsp+178h] [rbp+78h]
  __int64 v77; // [rsp+180h] [rbp+80h]
  __int64 v78; // [rsp+188h] [rbp+88h]
  __int64 v79; // [rsp+190h] [rbp+90h]
  int v80; // [rsp+198h] [rbp+98h]
  int v81; // [rsp+19Ch] [rbp+9Ch]
  __int64 v82; // [rsp+1A0h] [rbp+A0h]
  __int64 v83; // [rsp+1A8h] [rbp+A8h]
  __int64 v84; // [rsp+1B0h] [rbp+B0h]
  int v85; // [rsp+1B8h] [rbp+B8h]
  int v86; // [rsp+1BCh] [rbp+BCh]
  __int64 v87; // [rsp+1C0h] [rbp+C0h]
  __int64 v88; // [rsp+1C8h] [rbp+C8h]
  __int64 v89; // [rsp+1D0h] [rbp+D0h]
  int v90; // [rsp+1D8h] [rbp+D8h]
  int v91; // [rsp+1DCh] [rbp+DCh]
  __int64 *v92; // [rsp+1E0h] [rbp+E0h]
  __int64 v93; // [rsp+1E8h] [rbp+E8h]

  v55 = a2;
  v12 = a3;
  v58 = a7;
  v13 = 0LL;
  v14 = 0;
  v62 = a9;
  v61 = a10;
  v60 = a11;
  v63 = a1;
  v56 = a4;
  v59 = a5;
  v66 = 0LL;
  v57 = 0;
  v53 = 0;
  v64 = 0LL;
  v65 = 0LL;
  memset(v67, 0, sizeof(v67));
  if ( a2 > 2 && a2 != 5 )
  {
    ContextForFile = -1073741811;
    SetFailureLocation(a12, 0, 1, -1073741811, 0);
    goto LABEL_105;
  }
  if ( (a3 & 0xFF617CEC) != 0 )
  {
    v48 = 16;
LABEL_81:
    ContextForFile = -1073741811;
    SetFailureLocation(a12, 0, 1, -1073741811, v48);
    return (unsigned int)ContextForFile;
  }
  if ( a4 > 2 )
  {
    v48 = 32;
    goto LABEL_81;
  }
  if ( !a5 && a2 == 1 )
  {
    v48 = 48;
    goto LABEL_81;
  }
  if ( a6 )
  {
    if ( (a3 & 1) != 0 && (a3 & 0x8000) == 0 )
    {
      v48 = 64;
      goto LABEL_81;
    }
    if ( !*a6 && (a6[1] || a6[2]) )
    {
      v48 = 80;
      goto LABEL_81;
    }
    v15 = a6[1];
    if ( v15 && !a4 )
    {
      v48 = 96;
      goto LABEL_81;
    }
    v16 = a6[2];
    if ( v16 && a4 != 2 )
    {
      v48 = 112;
      goto LABEL_81;
    }
    if ( a6[3] && (*a6 || v15 || v16) )
    {
      v48 = 128;
      goto LABEL_81;
    }
  }
  v51 = CmpAcquireShutdownRundown();
  v14 = v51;
  if ( !v51 )
    return (unsigned int)-1073741431;
  v54 = 1;
  if ( a6
    && *a6
    && (VolumeClusterSize = CmpGetVolumeClusterSize(*a6, &v54), ContextForFile = VolumeClusterSize,
                                                                VolumeClusterSize < 0) )
  {
    SetFailureLocation(a12, 0, 1, VolumeClusterSize, 160);
  }
  else
  {
    v19 = CmpAllocate(0x12E8uLL);
    v13 = v19;
    if ( v19 )
    {
      CmpHiveInitialize(v19);
      if ( a6 )
      {
        if ( *a6 )
        {
          v50 = 2;
          ContextForFile = ObDuplicateObject(PsInitialSystemProcess, *a6, 0LL, v13 + 1536, 0, 512);
          if ( ContextForFile < 0 )
            goto LABEL_104;
          v20 = *(void **)(v13 + 1536);
          ObjectInformation[0] = 256;
          ZwSetInformationObject(v20, ObjectHandleFlagInformation, ObjectInformation, 2u);
        }
        v21 = a6[3];
        if ( v21 )
        {
          v50 = 2;
          ContextForFile = ObDuplicateObject(PsInitialSystemProcess, v21, 0LL, v13 + 1552, 0, 512);
          if ( ContextForFile < 0 )
            goto LABEL_104;
          v41 = *(void **)(v13 + 1552);
          ObjectInformation[0] = 256;
          ZwSetInformationObject(v41, ObjectHandleFlagInformation, ObjectInformation, 2u);
        }
        if ( v56 != 1 )
        {
          if ( v56 != 2 )
            goto LABEL_33;
          v22 = a6[1];
          if ( v22 )
          {
            v50 = v56;
            ContextForFile = ObDuplicateObject(PsInitialSystemProcess, v22, 0LL, v13 + 1568, 0, 512);
            if ( ContextForFile < 0 )
              goto LABEL_104;
            v23 = *(void **)(v13 + 1568);
            ObjectInformation[0] = 256;
            ZwSetInformationObject(v23, ObjectHandleFlagInformation, ObjectInformation, 2u);
          }
          v24 = a6[2];
          if ( !v24 )
            goto LABEL_33;
          v25 = (void **)(v13 + 1576);
          goto LABEL_31;
        }
        v24 = a6[1];
        if ( v24 )
        {
          v25 = (void **)(v13 + 1544);
LABEL_31:
          v50 = 2;
          ContextForFile = ObDuplicateObject(PsInitialSystemProcess, v24, 0LL, v25, 0, 512);
          if ( ContextForFile < 0 )
            goto LABEL_104;
          v26 = *v25;
          ObjectInformation[0] = 256;
          ZwSetInformationObject(v26, ObjectHandleFlagInformation, ObjectInformation, 2u);
        }
      }
LABEL_33:
      if ( (a8 & 0x8000000) != 0 )
        *(_DWORD *)(v13 + 4152) |= 0x80u;
      if ( a8 < 0 )
        *(_DWORD *)(v13 + 4152) |= 0x800u;
      CmpAttachToRegistryProcess(v67);
      v53 = 1;
      *(_QWORD *)&v64 = CmpAllocate;
      *((_QWORD *)&v64 + 1) = CmpFree;
      *((_QWORD *)&v65 + 1) = CmpFileWrite;
      v66 = CmpFileRead;
      v29 = v55;
      *(_QWORD *)(v13 + 56) = a12;
      *(_QWORD *)a12 = v13;
      if ( v29 != 5 && v29 != 2 && (v29 || !a6 || !*a6) )
      {
        v31 = v55;
        started = HvHiveStartMemoryBacked(
                    v13,
                    v59,
                    (__int64)&v64,
                    v54,
                    v58,
                    (__int64)v62,
                    (__int64)v61,
                    (__int64)v60,
                    (__int64)&v57,
                    a12);
        ContextForFile = started;
        if ( started < 0 )
        {
          v49 = 232;
LABEL_100:
          v42 = started;
LABEL_103:
          SetFailureLocation(a12, 0, 1, v42, v49);
          goto LABEL_104;
        }
        goto LABEL_43;
      }
      v12 |= 0x20000u;
      ContextForFile = CmpVolumeManagerGetContextForFile(v27, *a6, v28, (PPRIVILEGE_SET *)(v13 + 4832));
      if ( ContextForFile >= 0 )
      {
        if ( CmpVolumeContextMustHiveFilePagesBeKeptLocal(*(_QWORD *)(v13 + 4832)) || (a8 & 0x2000000) != 0 )
          v12 |= 0x800000u;
        v31 = v55;
        LOBYTE(v30) = v55 == 0;
        started = HvHiveStartFileBacked(v13, v30, v12, v56, &v64, v54, v50, v58, v62, v61, v60, &v57, a12);
        ContextForFile = started;
        if ( started < 0 )
        {
          v49 = 228;
          goto LABEL_100;
        }
LABEL_43:
        if ( (v12 & 0x180000) == 0x80000 && (a8 & 0x800000) == 0 )
        {
          v39 = *(_QWORD *)(v13 + 64);
          if ( *(_DWORD *)(v39 + 24) < 6u || (*(_DWORD *)(v39 + 144) & 2) == 0 )
          {
            ContextForFile = -1073741811;
            goto LABEL_104;
          }
        }
        if ( ((v31 - 1) & 0xFFFFFFFA) != 0 || v31 == 6 )
          goto LABEL_115;
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
              v56 = v43;
              v69 = &v56;
              v71 = ObjectInformation;
              v44 = *(unsigned __int16 *)(a12 + 8);
              v45 = *(unsigned __int16 *)(a12 + 10);
              v77 = a12 + 8;
              v73 = &v54;
              v79 = a12 + 12;
              v46 = *(unsigned __int8 *)(a12 + 394);
              v80 = 12 * v44;
              v84 = a12 + 108;
              v85 = 12 * v45;
              v89 = a12 + 396;
              v92 = &v59;
              LOWORD(v55) = v46;
              ObjectInformation[0] = v44;
              LOWORD(v54) = v45;
              v82 = a12 + 10;
              v87 = a12 + 394;
              v70 = 4LL;
              v72 = 2LL;
              v74 = 2LL;
              v75 = &v55;
              v76 = 2LL;
              v78 = 2LL;
              v81 = 0;
              v83 = 2LL;
              v86 = 0;
              v88 = 2LL;
              v90 = 8 * v46;
              v91 = 0;
              v59 = 0x1000000LL;
              v93 = 8LL;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_140C02130,
                (unsigned __int8 *)&word_14002262E,
                0LL,
                0LL,
                0xDu,
                &v68);
            }
          }
        }
        if ( ContextForFile >= 0 )
        {
LABEL_115:
          if ( (a8 & 0x800000) != 0 )
          {
            v47 = *(_QWORD *)(v13 + 64);
            if ( *(_DWORD *)(v47 + 24) < 6u || (*(_DWORD *)(v47 + 144) & 2) == 0 )
            {
              HvMarkBaseBlockDirty(v13);
              *(_DWORD *)(*(_QWORD *)(v13 + 64) + 24LL) = 6;
              *(_DWORD *)(*(_QWORD *)(v13 + 64) + 144LL) |= 2u;
            }
          }
          v33 = v58;
          CmpReorganizeHive(v13, v58, (unsigned int)a8);
          CmpLockRegistry();
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
          CmpUnlockRegistry(v35, v34);
          if ( ContextForFile >= 0 )
          {
            v36 = (_QWORD *)(v13 + 1600);
            if ( (a8 & 0x1000000) != 0 )
            {
              *(_QWORD *)(v13 + 1608) = v13 + 1600;
              *v36 = v36;
            }
            else
            {
              CmpLockHiveListExclusive();
              v40 = (_QWORD *)qword_140D2E918;
              if ( *(__int64 **)qword_140D2E918 != &CmpHiveListHead )
                __fastfail(3u);
              *v36 = &CmpHiveListHead;
              *(_QWORD *)(v13 + 1608) = v40;
              *v40 = v36;
              qword_140D2E918 = v13 + 1600;
              CmpUnlockHiveList();
              CmpRecheckHiveVolumePolicy(v13);
            }
            v37 = v63;
            *(_QWORD *)(v13 + 56) = 0LL;
            *v37 = v13;
            CmpReleaseShutdownRundown();
            v14 = 0;
            if ( (DWORD2(PerfGlobalGroupMask) & 0x1000000) != 0 )
              CmpLogHiveInitializeEvent(v13, v31, v33, v57);
            ContextForFile = 0;
LABEL_57:
            CmpDetachFromRegistryProcess(v67);
            goto LABEL_58;
          }
          v49 = 256;
        }
        else
        {
          v49 = 240;
        }
        v42 = ContextForFile;
        goto LABEL_103;
      }
LABEL_104:
      v14 = v51;
LABEL_105:
      if ( v13 )
        CmpDestroyHive((PVOID)v13);
      if ( !v53 )
        goto LABEL_58;
      goto LABEL_57;
    }
    ContextForFile = -1073741670;
    SetFailureLocation(a12, 0, 1, -1073741670, 176);
  }
LABEL_58:
  if ( v14 )
    CmpReleaseShutdownRundown();
  return (unsigned int)ContextForFile;
}
