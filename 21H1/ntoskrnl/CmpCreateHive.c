/*
 * XREFs of CmpCreateHive @ 0x140688850
 * Callers:
 *     CmpInitHiveFromFile @ 0x1406636E8 (CmpInitHiveFromFile.c)
 *     CmpCreateTemporaryHive @ 0x140716560 (CmpCreateTemporaryHive.c)
 *     CmRestoreKey @ 0x140877748 (CmRestoreKey.c)
 *     CmpLoadHiveVolatile @ 0x140878768 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x140878C04 (CmpRefreshHive.c)
 *     CmInitSystem1 @ 0x140A525D4 (CmInitSystem1.c)
 *     CmpInitializeSystemHive @ 0x140A52DF8 (CmpInitializeSystemHive.c)
 *     CmpInitializePreloadedHive @ 0x140A52F90 (CmpInitializePreloadedHive.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402D5DD4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402D5F54 (_tlgKeywordOn.c)
 *     CmpRecheckHiveVolumePolicy @ 0x1402E0F40 (CmpRecheckHiveVolumePolicy.c)
 *     SetFailureLocation @ 0x140315198 (SetFailureLocation.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwSetInformationObject @ 0x1403F2EB0 (ZwSetInformationObject.c)
 *     CmpReleaseShutdownRundown @ 0x1405EACA0 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x1405EBEF0 (CmpAcquireShutdownRundown.c)
 *     HvLockHiveFlusherShared @ 0x140618340 (HvLockHiveFlusherShared.c)
 *     HvUnlockHiveFlusherShared @ 0x14061835C (HvUnlockHiveFlusherShared.c)
 *     ObDuplicateObject @ 0x14061ECE0 (ObDuplicateObject.c)
 *     CmpAttachToRegistryProcess @ 0x14061FF00 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140621720 (CmpDetachFromRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140629290 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1406292D0 (CmpLockRegistry.c)
 *     CmpGetVolumeClusterSize @ 0x140687970 (CmpGetVolumeClusterSize.c)
 *     CmpVolumeManagerGetContextForFile @ 0x140687D20 (CmpVolumeManagerGetContextForFile.c)
 *     CmpVolumeContextMustHiveFilePagesBeKeptLocal @ 0x1406884D0 (CmpVolumeContextMustHiveFilePagesBeKeptLocal.c)
 *     HvHiveStartFileBacked @ 0x140688524 (HvHiveStartFileBacked.c)
 *     HvUnlockHiveWriter @ 0x140688EB8 (HvUnlockHiveWriter.c)
 *     HvLockHiveWriter @ 0x140688EE8 (HvLockHiveWriter.c)
 *     CmpReorganizeHive @ 0x140688F04 (CmpReorganizeHive.c)
 *     CmpHiveInitialize @ 0x1406890D0 (CmpHiveInitialize.c)
 *     CmpAllocate @ 0x140689230 (CmpAllocate.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x140689318 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     CmCheckRegistry @ 0x140689A00 (CmCheckRegistry.c)
 *     CmpLockHiveListExclusive @ 0x14068DF60 (CmpLockHiveListExclusive.c)
 *     CmpUnlockHiveList @ 0x14068DF80 (CmpUnlockHiveList.c)
 *     HvMarkBaseBlockDirty @ 0x1406E6EEC (HvMarkBaseBlockDirty.c)
 *     CmpDestroyHive @ 0x140715158 (CmpDestroyHive.c)
 *     HvHiveStartMemoryBacked @ 0x14075AEB0 (HvHiveStartMemoryBacked.c)
 *     CmpLogHiveInitializeEvent @ 0x140865F00 (CmpLogHiveInitializeEvent.c)
 */

__int64 __fastcall CmpCreateHive(
        ULONG_PTR *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        _OWORD *a9,
        _OWORD *a10,
        _BYTE *a11,
        __int64 a12)
{
  unsigned int v12; // r13d
  ULONG_PTR v13; // rdi
  BOOLEAN v14; // r12
  __int64 v15; // rcx
  __int64 v16; // rax
  NTSTATUS VolumeClusterSize; // eax
  int ContextForFile; // ebx
  __int64 v19; // rax
  void *v20; // rdx
  __int64 v21; // r8
  _DWORD *v22; // r9
  __int64 v23; // rdx
  __int64 v24; // r8
  _DWORD *v25; // r9
  void *v26; // rcx
  void *v27; // rdx
  void *v28; // rcx
  __int64 *v29; // r12
  void *v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // r8
  unsigned int v33; // eax
  __int64 v34; // rdx
  unsigned int v35; // r15d
  int started; // eax
  __int64 v37; // r13
  _QWORD *v38; // rbx
  ULONG_PTR *v39; // rax
  __int64 v41; // rax
  _QWORD *v42; // rax
  void *v43; // rcx
  int v44; // r9d
  unsigned int v45; // r9d
  int v46; // edx
  int v47; // r9d
  int v48; // r10d
  __int64 v49; // rax
  int v50; // [rsp+20h] [rbp-E0h]
  int v51; // [rsp+20h] [rbp-E0h]
  int v52; // [rsp+30h] [rbp-D0h]
  BOOLEAN v53; // [rsp+70h] [rbp-90h]
  _WORD ObjectInformation[2]; // [rsp+74h] [rbp-8Ch] BYREF
  char v55; // [rsp+78h] [rbp-88h]
  int v56; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned int v57; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v58; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v59; // [rsp+88h] [rbp-78h] BYREF
  __int64 v60; // [rsp+90h] [rbp-70h]
  __int64 v61; // [rsp+98h] [rbp-68h] BYREF
  _BYTE *v62; // [rsp+A0h] [rbp-60h]
  _OWORD *v63; // [rsp+A8h] [rbp-58h]
  _OWORD *v64; // [rsp+B0h] [rbp-50h]
  ULONG_PTR *v65; // [rsp+B8h] [rbp-48h]
  __int128 v66; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v67; // [rsp+D0h] [rbp-30h]
  __int64 (__fastcall *v68)(int, int, int, int, ULONG); // [rsp+E0h] [rbp-20h]
  _OWORD v69[3]; // [rsp+E8h] [rbp-18h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+120h] [rbp+20h] BYREF
  unsigned int *v71; // [rsp+140h] [rbp+40h]
  __int64 v72; // [rsp+148h] [rbp+48h]
  _WORD *v73; // [rsp+150h] [rbp+50h]
  __int64 v74; // [rsp+158h] [rbp+58h]
  int *v75; // [rsp+160h] [rbp+60h]
  __int64 v76; // [rsp+168h] [rbp+68h]
  unsigned int *v77; // [rsp+170h] [rbp+70h]
  __int64 v78; // [rsp+178h] [rbp+78h]
  __int64 v79; // [rsp+180h] [rbp+80h]
  __int64 v80; // [rsp+188h] [rbp+88h]
  __int64 v81; // [rsp+190h] [rbp+90h]
  int v82; // [rsp+198h] [rbp+98h]
  int v83; // [rsp+19Ch] [rbp+9Ch]
  __int64 v84; // [rsp+1A0h] [rbp+A0h]
  __int64 v85; // [rsp+1A8h] [rbp+A8h]
  __int64 v86; // [rsp+1B0h] [rbp+B0h]
  int v87; // [rsp+1B8h] [rbp+B8h]
  int v88; // [rsp+1BCh] [rbp+BCh]
  __int64 v89; // [rsp+1C0h] [rbp+C0h]
  __int64 v90; // [rsp+1C8h] [rbp+C8h]
  __int64 v91; // [rsp+1D0h] [rbp+D0h]
  int v92; // [rsp+1D8h] [rbp+D8h]
  int v93; // [rsp+1DCh] [rbp+DCh]
  __int64 *v94; // [rsp+1E0h] [rbp+E0h]
  __int64 v95; // [rsp+1E8h] [rbp+E8h]

  v57 = a2;
  v12 = a3;
  v60 = a7;
  v13 = 0LL;
  v14 = 0;
  v64 = a9;
  v63 = a10;
  v62 = a11;
  v65 = a1;
  v58 = a4;
  v61 = a5;
  v68 = 0LL;
  v59 = 0;
  v55 = 0;
  v66 = 0LL;
  v67 = 0LL;
  memset(v69, 0, sizeof(v69));
  if ( a2 > 2 && a2 != 5 )
  {
    ContextForFile = -1073741811;
    SetFailureLocation(a12, 0, 1, -1073741811, 0);
    goto LABEL_105;
  }
  if ( (a3 & 0xFF617CEC) != 0 )
  {
    v50 = 16;
LABEL_81:
    ContextForFile = -1073741811;
    SetFailureLocation(a12, 0, 1, -1073741811, v50);
    return (unsigned int)ContextForFile;
  }
  if ( a4 > 2 )
  {
    v50 = 32;
    goto LABEL_81;
  }
  if ( !a5 && a2 == 1 )
  {
    v50 = 48;
    goto LABEL_81;
  }
  if ( a6 )
  {
    if ( (a3 & 1) != 0 && (a3 & 0x8000) == 0 )
    {
      v50 = 64;
      goto LABEL_81;
    }
    if ( !*(_QWORD *)a6 && (*(_QWORD *)(a6 + 8) || *(_QWORD *)(a6 + 16)) )
    {
      v50 = 80;
      goto LABEL_81;
    }
    v15 = *(_QWORD *)(a6 + 8);
    if ( v15 && !a4 )
    {
      v50 = 96;
      goto LABEL_81;
    }
    v16 = *(_QWORD *)(a6 + 16);
    if ( v16 && a4 != 2 )
    {
      v50 = 112;
      goto LABEL_81;
    }
    if ( *(_QWORD *)(a6 + 24) && (*(_QWORD *)a6 || v15 || v16) )
    {
      v50 = 128;
      goto LABEL_81;
    }
  }
  v53 = CmpAcquireShutdownRundown();
  v14 = v53;
  if ( !v53 )
    return (unsigned int)-1073741431;
  v56 = 1;
  if ( a6
    && *(_QWORD *)a6
    && (VolumeClusterSize = CmpGetVolumeClusterSize(*(HANDLE *)a6, &v56),
        ContextForFile = VolumeClusterSize,
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
        if ( *(_QWORD *)a6 )
        {
          ContextForFile = ObDuplicateObject(
                             PsInitialSystemProcess,
                             *(void **)a6,
                             0LL,
                             (__int64 *)(v13 + 1536),
                             0,
                             512,
                             2,
                             0);
          if ( ContextForFile < 0 )
            goto LABEL_104;
          v26 = *(void **)(v13 + 1536);
          ObjectInformation[0] = 256;
          ZwSetInformationObject(v26, ObjectHandleFlagInformation, ObjectInformation, 2u);
        }
        v20 = *(void **)(a6 + 24);
        if ( v20 )
        {
          ContextForFile = ObDuplicateObject(PsInitialSystemProcess, v20, 0LL, (__int64 *)(v13 + 1552), 0, 512, 2, 0);
          if ( ContextForFile < 0 )
            goto LABEL_104;
          v43 = *(void **)(v13 + 1552);
          ObjectInformation[0] = 256;
          ZwSetInformationObject(v43, ObjectHandleFlagInformation, ObjectInformation, 2u);
        }
        if ( v58 != 1 )
        {
          if ( v58 != 2 )
            goto LABEL_33;
          v27 = *(void **)(a6 + 8);
          if ( v27 )
          {
            ContextForFile = ObDuplicateObject(
                               PsInitialSystemProcess,
                               v27,
                               0LL,
                               (__int64 *)(v13 + 1568),
                               0,
                               512,
                               v58,
                               0);
            if ( ContextForFile < 0 )
              goto LABEL_104;
            v28 = *(void **)(v13 + 1568);
            ObjectInformation[0] = 256;
            ZwSetInformationObject(v28, ObjectHandleFlagInformation, ObjectInformation, 2u);
          }
          v20 = *(void **)(a6 + 16);
          if ( !v20 )
            goto LABEL_33;
          v29 = (__int64 *)(v13 + 1576);
          goto LABEL_31;
        }
        v20 = *(void **)(a6 + 8);
        if ( v20 )
        {
          v29 = (__int64 *)(v13 + 1544);
LABEL_31:
          ContextForFile = ObDuplicateObject(PsInitialSystemProcess, v20, 0LL, v29, 0, 512, 2, 0);
          if ( ContextForFile < 0 )
            goto LABEL_104;
          v30 = (void *)*v29;
          ObjectInformation[0] = 256;
          ZwSetInformationObject(v30, ObjectHandleFlagInformation, ObjectInformation, 2u);
        }
      }
LABEL_33:
      if ( (a8 & 0x8000000) != 0 )
        *(_DWORD *)(v13 + 4152) |= 0x80u;
      if ( a8 < 0 )
        *(_DWORD *)(v13 + 4152) |= 0x800u;
      CmpAttachToRegistryProcess((__int64)v69, (__int64)v20, v21, v22);
      v55 = 1;
      *(_QWORD *)&v66 = CmpAllocate;
      *((_QWORD *)&v66 + 1) = CmpFree;
      *((_QWORD *)&v67 + 1) = CmpFileWrite;
      v68 = CmpFileRead;
      v33 = v57;
      *(_QWORD *)(v13 + 56) = a12;
      *(_QWORD *)a12 = v13;
      if ( v33 != 5 && v33 != 2 && (v33 || !a6 || !*(_QWORD *)a6) )
      {
        v35 = v57;
        started = HvHiveStartMemoryBacked(
                    v13,
                    v61,
                    (__int64)&v66,
                    v56,
                    v60,
                    (__int64)v64,
                    (__int64)v63,
                    (__int64)v62,
                    (__int64)&v59,
                    a12);
        ContextForFile = started;
        if ( started < 0 )
        {
          v51 = 232;
LABEL_100:
          v44 = started;
LABEL_103:
          SetFailureLocation(a12, 0, 1, v44, v51);
          goto LABEL_104;
        }
        goto LABEL_43;
      }
      v12 |= 0x20000u;
      ContextForFile = CmpVolumeManagerGetContextForFile(v31, *(void **)a6, v32, (PPRIVILEGE_SET *)(v13 + 4832));
      if ( ContextForFile >= 0 )
      {
        if ( CmpVolumeContextMustHiveFilePagesBeKeptLocal(*(_QWORD *)(v13 + 4832)) || (a8 & 0x2000000) != 0 )
          v12 |= 0x800000u;
        v35 = v57;
        LOBYTE(v34) = v57 == 0;
        started = HvHiveStartFileBacked(v13, v34, v12, v58, &v66, v56, v52, v60, v64, v63, v62, &v59, a12);
        ContextForFile = started;
        if ( started < 0 )
        {
          v51 = 228;
          goto LABEL_100;
        }
LABEL_43:
        if ( (v12 & 0x180000) == 0x80000 && (a8 & 0x800000) == 0 )
        {
          v41 = *(_QWORD *)(v13 + 64);
          if ( *(_DWORD *)(v41 + 24) < 6u || (*(_DWORD *)(v41 + 144) & 2) == 0 )
          {
            ContextForFile = -1073741811;
            goto LABEL_104;
          }
        }
        if ( ((v35 - 1) & 0xFFFFFFFA) != 0 || v35 == 6 )
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
              v58 = v45;
              v71 = &v58;
              v73 = ObjectInformation;
              v46 = *(unsigned __int16 *)(a12 + 8);
              v47 = *(unsigned __int16 *)(a12 + 10);
              v79 = a12 + 8;
              v75 = &v56;
              v81 = a12 + 12;
              v48 = *(unsigned __int8 *)(a12 + 394);
              v82 = 12 * v46;
              v86 = a12 + 108;
              v87 = 12 * v47;
              v91 = a12 + 396;
              v94 = &v61;
              LOWORD(v57) = v48;
              ObjectInformation[0] = v46;
              LOWORD(v56) = v47;
              v84 = a12 + 10;
              v89 = a12 + 394;
              v72 = 4LL;
              v74 = 2LL;
              v76 = 2LL;
              v77 = &v57;
              v78 = 2LL;
              v80 = 2LL;
              v83 = 0;
              v85 = 2LL;
              v88 = 0;
              v90 = 2LL;
              v92 = 8 * v48;
              v93 = 0;
              v61 = 0x1000000LL;
              v95 = 8LL;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_140C02130,
                (unsigned __int8 *)&word_1400223CE,
                0LL,
                0LL,
                0xDu,
                &v70);
            }
          }
        }
        if ( ContextForFile >= 0 )
        {
LABEL_115:
          if ( (a8 & 0x800000) != 0 )
          {
            v49 = *(_QWORD *)(v13 + 64);
            if ( *(_DWORD *)(v49 + 24) < 6u || (*(_DWORD *)(v49 + 144) & 2) == 0 )
            {
              HvMarkBaseBlockDirty(v13);
              *(_DWORD *)(*(_QWORD *)(v13 + 64) + 24LL) = 6;
              *(_DWORD *)(*(_QWORD *)(v13 + 64) + 144LL) |= 2u;
            }
          }
          v37 = v60;
          CmpReorganizeHive(v13);
          CmpLockRegistry();
          HvLockHiveFlusherShared(v13);
          HvLockHiveWriter(v13);
          if ( v35 )
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
          CmpUnlockRegistry();
          if ( ContextForFile >= 0 )
          {
            v38 = (_QWORD *)(v13 + 1600);
            if ( (a8 & 0x1000000) != 0 )
            {
              *(_QWORD *)(v13 + 1608) = v13 + 1600;
              *v38 = v38;
            }
            else
            {
              CmpLockHiveListExclusive();
              v42 = (_QWORD *)qword_140D2D920;
              if ( *(__int64 **)qword_140D2D920 != &CmpHiveListHead )
                __fastfail(3u);
              *v38 = &CmpHiveListHead;
              *(_QWORD *)(v13 + 1608) = v42;
              *v42 = v38;
              qword_140D2D920 = v13 + 1600;
              CmpUnlockHiveList();
              CmpRecheckHiveVolumePolicy(v13);
            }
            v39 = v65;
            *(_QWORD *)(v13 + 56) = 0LL;
            *v39 = v13;
            CmpReleaseShutdownRundown();
            v14 = 0;
            if ( (DWORD2(PerfGlobalGroupMask) & 0x1000000) != 0 )
              CmpLogHiveInitializeEvent(v13, v35, v37, v59);
            ContextForFile = 0;
LABEL_57:
            CmpDetachFromRegistryProcess((__int64)v69, v23, v24, v25);
            goto LABEL_58;
          }
          v51 = 256;
        }
        else
        {
          v51 = 240;
        }
        v44 = ContextForFile;
        goto LABEL_103;
      }
LABEL_104:
      v14 = v53;
LABEL_105:
      if ( v13 )
        CmpDestroyHive((PVOID)v13);
      if ( !v55 )
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
