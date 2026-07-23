/*
 * XREFs of CmpCreateHive @ 0x14063ACD0
 * Callers:
 *     CmpInitHiveFromFile @ 0x14061DFC8 (CmpInitHiveFromFile.c)
 *     CmpCreateTemporaryHive @ 0x1407188F0 (CmpCreateTemporaryHive.c)
 *     CmRestoreKey @ 0x140878A38 (CmRestoreKey.c)
 *     CmpLoadHiveVolatile @ 0x140879A58 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x140879EF4 (CmpRefreshHive.c)
 *     CmInitSystem1 @ 0x140A582D4 (CmInitSystem1.c)
 *     CmpInitializeSystemHive @ 0x140A58D64 (CmpInitializeSystemHive.c)
 *     CmpInitializePreloadedHive @ 0x140A58EFC (CmpInitializePreloadedHive.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14026C434 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14026C5B4 (_tlgKeywordOn.c)
 *     CmpRecheckHiveVolumePolicy @ 0x1402718B0 (CmpRecheckHiveVolumePolicy.c)
 *     SetFailureLocation @ 0x140352EE8 (SetFailureLocation.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwSetInformationObject @ 0x1403F4140 (ZwSetInformationObject.c)
 *     HvLockHiveFlusherShared @ 0x1405E2D14 (HvLockHiveFlusherShared.c)
 *     HvUnlockHiveFlusherShared @ 0x1405E2D30 (HvUnlockHiveFlusherShared.c)
 *     ObDuplicateObject @ 0x1405E96C0 (ObDuplicateObject.c)
 *     CmpAttachToRegistryProcess @ 0x1405EA8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x1405EC100 (CmpDetachFromRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x1405F3D20 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F3D60 (CmpLockRegistry.c)
 *     CmpGetVolumeClusterSize @ 0x140639DF4 (CmpGetVolumeClusterSize.c)
 *     CmpVolumeManagerGetContextForFile @ 0x14063A1A4 (CmpVolumeManagerGetContextForFile.c)
 *     CmpVolumeContextMustHiveFilePagesBeKeptLocal @ 0x14063A950 (CmpVolumeContextMustHiveFilePagesBeKeptLocal.c)
 *     HvHiveStartFileBacked @ 0x14063A9A4 (HvHiveStartFileBacked.c)
 *     HvUnlockHiveWriter @ 0x14063B338 (HvUnlockHiveWriter.c)
 *     HvLockHiveWriter @ 0x14063B368 (HvLockHiveWriter.c)
 *     CmpReorganizeHive @ 0x14063B384 (CmpReorganizeHive.c)
 *     CmpHiveInitialize @ 0x14063B550 (CmpHiveInitialize.c)
 *     CmpAllocate @ 0x14063B6B0 (CmpAllocate.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x14063B798 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     CmCheckRegistry @ 0x14063BE80 (CmCheckRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x1406941E0 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x140695430 (CmpAcquireShutdownRundown.c)
 *     HvMarkBaseBlockDirty @ 0x14070ADAC (HvMarkBaseBlockDirty.c)
 *     CmpUnlockHiveList @ 0x14070BD9C (CmpUnlockHiveList.c)
 *     CmpLockHiveListExclusive @ 0x14070BDBC (CmpLockHiveListExclusive.c)
 *     CmpDestroyHive @ 0x1407174E8 (CmpDestroyHive.c)
 *     HvHiveStartMemoryBacked @ 0x14075D398 (HvHiveStartMemoryBacked.c)
 *     CmpLogHiveInitializeEvent @ 0x140867220 (CmpLogHiveInitializeEvent.c)
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
  char v14; // r12
  __int64 v15; // rcx
  __int64 v16; // rax
  NTSTATUS VolumeClusterSize; // eax
  int ContextForFile; // ebx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  void *v23; // rcx
  void *v24; // rdx
  void *v25; // rdx
  void *v26; // rcx
  void *v27; // rdx
  __int64 *v28; // r12
  void *v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // r8
  unsigned int v32; // eax
  __int64 v33; // rdx
  unsigned int v34; // r15d
  int started; // eax
  __int64 v36; // r13
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  _QWORD *v40; // rbx
  ULONG_PTR *v41; // rax
  __int64 v43; // rax
  _QWORD *v44; // rax
  void *v45; // rcx
  int v46; // r9d
  unsigned int v47; // r9d
  int v48; // edx
  int v49; // r9d
  int v50; // r10d
  __int64 v51; // rax
  int v52; // [rsp+20h] [rbp-E0h]
  int v53; // [rsp+20h] [rbp-E0h]
  int v54; // [rsp+30h] [rbp-D0h]
  char v55; // [rsp+70h] [rbp-90h]
  _WORD ObjectInformation[2]; // [rsp+74h] [rbp-8Ch] BYREF
  char v57; // [rsp+78h] [rbp-88h]
  int v58; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned int v59; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v60; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v61; // [rsp+88h] [rbp-78h] BYREF
  __int64 v62; // [rsp+90h] [rbp-70h]
  __int64 v63; // [rsp+98h] [rbp-68h] BYREF
  _BYTE *v64; // [rsp+A0h] [rbp-60h]
  _OWORD *v65; // [rsp+A8h] [rbp-58h]
  _OWORD *v66; // [rsp+B0h] [rbp-50h]
  ULONG_PTR *v67; // [rsp+B8h] [rbp-48h]
  __int128 v68; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v69; // [rsp+D0h] [rbp-30h]
  __int64 (__fastcall *v70)(int, int, int, int, ULONG); // [rsp+E0h] [rbp-20h]
  _OWORD v71[3]; // [rsp+E8h] [rbp-18h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v72; // [rsp+120h] [rbp+20h] BYREF
  unsigned int *v73; // [rsp+140h] [rbp+40h]
  __int64 v74; // [rsp+148h] [rbp+48h]
  _WORD *v75; // [rsp+150h] [rbp+50h]
  __int64 v76; // [rsp+158h] [rbp+58h]
  int *v77; // [rsp+160h] [rbp+60h]
  __int64 v78; // [rsp+168h] [rbp+68h]
  unsigned int *v79; // [rsp+170h] [rbp+70h]
  __int64 v80; // [rsp+178h] [rbp+78h]
  __int64 v81; // [rsp+180h] [rbp+80h]
  __int64 v82; // [rsp+188h] [rbp+88h]
  __int64 v83; // [rsp+190h] [rbp+90h]
  int v84; // [rsp+198h] [rbp+98h]
  int v85; // [rsp+19Ch] [rbp+9Ch]
  __int64 v86; // [rsp+1A0h] [rbp+A0h]
  __int64 v87; // [rsp+1A8h] [rbp+A8h]
  __int64 v88; // [rsp+1B0h] [rbp+B0h]
  int v89; // [rsp+1B8h] [rbp+B8h]
  int v90; // [rsp+1BCh] [rbp+BCh]
  __int64 v91; // [rsp+1C0h] [rbp+C0h]
  __int64 v92; // [rsp+1C8h] [rbp+C8h]
  __int64 v93; // [rsp+1D0h] [rbp+D0h]
  int v94; // [rsp+1D8h] [rbp+D8h]
  int v95; // [rsp+1DCh] [rbp+DCh]
  __int64 *v96; // [rsp+1E0h] [rbp+E0h]
  __int64 v97; // [rsp+1E8h] [rbp+E8h]

  v59 = a2;
  v12 = a3;
  v62 = a7;
  v13 = 0LL;
  v14 = 0;
  v66 = a9;
  v65 = a10;
  v64 = a11;
  v67 = a1;
  v60 = a4;
  v63 = a5;
  v70 = 0LL;
  v61 = 0;
  v57 = 0;
  v68 = 0LL;
  v69 = 0LL;
  memset(v71, 0, sizeof(v71));
  if ( a2 > 2 && a2 != 5 )
  {
    ContextForFile = -1073741811;
    SetFailureLocation(a12, 0, 1, -1073741811, 0);
    goto LABEL_105;
  }
  if ( (a3 & 0xFF617CEC) != 0 )
  {
    v52 = 16;
LABEL_81:
    ContextForFile = -1073741811;
    SetFailureLocation(a12, 0, 1, -1073741811, v52);
    return (unsigned int)ContextForFile;
  }
  if ( a4 > 2 )
  {
    v52 = 32;
    goto LABEL_81;
  }
  if ( !a5 && a2 == 1 )
  {
    v52 = 48;
    goto LABEL_81;
  }
  if ( a6 )
  {
    if ( (a3 & 1) != 0 && (a3 & 0x8000) == 0 )
    {
      v52 = 64;
      goto LABEL_81;
    }
    if ( !*(_QWORD *)a6 && (*(_QWORD *)(a6 + 8) || *(_QWORD *)(a6 + 16)) )
    {
      v52 = 80;
      goto LABEL_81;
    }
    v15 = *(_QWORD *)(a6 + 8);
    if ( v15 && !a4 )
    {
      v52 = 96;
      goto LABEL_81;
    }
    v16 = *(_QWORD *)(a6 + 16);
    if ( v16 && a4 != 2 )
    {
      v52 = 112;
      goto LABEL_81;
    }
    if ( *(_QWORD *)(a6 + 24) && (*(_QWORD *)a6 || v15 || v16) )
    {
      v52 = 128;
      goto LABEL_81;
    }
  }
  v55 = CmpAcquireShutdownRundown();
  v14 = v55;
  if ( !v55 )
    return (unsigned int)-1073741431;
  v58 = 1;
  if ( a6
    && *(_QWORD *)a6
    && (VolumeClusterSize = CmpGetVolumeClusterSize(*(HANDLE *)a6, &v58),
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
          v23 = *(void **)(v13 + 1536);
          ObjectInformation[0] = 256;
          ZwSetInformationObject(v23, ObjectHandleFlagInformation, ObjectInformation, 2u);
        }
        v24 = *(void **)(a6 + 24);
        if ( v24 )
        {
          ContextForFile = ObDuplicateObject(PsInitialSystemProcess, v24, 0LL, (__int64 *)(v13 + 1552), 0, 512, 2, 0);
          if ( ContextForFile < 0 )
            goto LABEL_104;
          v45 = *(void **)(v13 + 1552);
          ObjectInformation[0] = 256;
          ZwSetInformationObject(v45, ObjectHandleFlagInformation, ObjectInformation, 2u);
        }
        if ( v60 != 1 )
        {
          if ( v60 != 2 )
            goto LABEL_33;
          v25 = *(void **)(a6 + 8);
          if ( v25 )
          {
            ContextForFile = ObDuplicateObject(
                               PsInitialSystemProcess,
                               v25,
                               0LL,
                               (__int64 *)(v13 + 1568),
                               0,
                               512,
                               v60,
                               0);
            if ( ContextForFile < 0 )
              goto LABEL_104;
            v26 = *(void **)(v13 + 1568);
            ObjectInformation[0] = 256;
            ZwSetInformationObject(v26, ObjectHandleFlagInformation, ObjectInformation, 2u);
          }
          v27 = *(void **)(a6 + 16);
          if ( !v27 )
            goto LABEL_33;
          v28 = (__int64 *)(v13 + 1576);
          goto LABEL_31;
        }
        v27 = *(void **)(a6 + 8);
        if ( v27 )
        {
          v28 = (__int64 *)(v13 + 1544);
LABEL_31:
          ContextForFile = ObDuplicateObject(PsInitialSystemProcess, v27, 0LL, v28, 0, 512, 2, 0);
          if ( ContextForFile < 0 )
            goto LABEL_104;
          v29 = (void *)*v28;
          ObjectInformation[0] = 256;
          ZwSetInformationObject(v29, ObjectHandleFlagInformation, ObjectInformation, 2u);
        }
      }
LABEL_33:
      if ( (a8 & 0x8000000) != 0 )
        *(_DWORD *)(v13 + 4152) |= 0x80u;
      if ( a8 < 0 )
        *(_DWORD *)(v13 + 4152) |= 0x800u;
      CmpAttachToRegistryProcess((__int64)v71);
      v57 = 1;
      *(_QWORD *)&v68 = CmpAllocate;
      *((_QWORD *)&v68 + 1) = CmpFree;
      *((_QWORD *)&v69 + 1) = CmpFileWrite;
      v70 = CmpFileRead;
      v32 = v59;
      *(_QWORD *)(v13 + 56) = a12;
      *(_QWORD *)a12 = v13;
      if ( v32 != 5 && v32 != 2 && (v32 || !a6 || !*(_QWORD *)a6) )
      {
        v34 = v59;
        started = HvHiveStartMemoryBacked(
                    v13,
                    v63,
                    (__int64)&v68,
                    v58,
                    v62,
                    (__int64)v66,
                    (__int64)v65,
                    (__int64)v64,
                    (__int64)&v61,
                    a12);
        ContextForFile = started;
        if ( started < 0 )
        {
          v53 = 232;
LABEL_100:
          v46 = started;
LABEL_103:
          SetFailureLocation(a12, 0, 1, v46, v53);
          goto LABEL_104;
        }
        goto LABEL_43;
      }
      v12 |= 0x20000u;
      ContextForFile = CmpVolumeManagerGetContextForFile(v30, *(void **)a6, v31, (PPRIVILEGE_SET *)(v13 + 4832));
      if ( ContextForFile >= 0 )
      {
        if ( CmpVolumeContextMustHiveFilePagesBeKeptLocal(*(_QWORD *)(v13 + 4832)) || (a8 & 0x2000000) != 0 )
          v12 |= 0x800000u;
        v34 = v59;
        LOBYTE(v33) = v59 == 0;
        started = HvHiveStartFileBacked(v13, v33, v12, v60, &v68, v58, v54, v62, v66, v65, v64, &v61, a12);
        ContextForFile = started;
        if ( started < 0 )
        {
          v53 = 228;
          goto LABEL_100;
        }
LABEL_43:
        LOBYTE(v21) = (v12 & 0x180000) == 0x80000;
        if ( ((unsigned __int8)v21 & ((a8 & 0x800000) == 0)) != 0 )
        {
          v43 = *(_QWORD *)(v13 + 64);
          if ( *(_DWORD *)(v43 + 24) < 6u || (*(_DWORD *)(v43 + 144) & 2) == 0 )
          {
            ContextForFile = -1073741811;
            goto LABEL_104;
          }
        }
        if ( ((v34 - 1) & 0xFFFFFFFA) != 0 || v34 == 6 )
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
              v60 = v47;
              v73 = &v60;
              v75 = ObjectInformation;
              v48 = *(unsigned __int16 *)(a12 + 8);
              v49 = *(unsigned __int16 *)(a12 + 10);
              v81 = a12 + 8;
              v77 = &v58;
              v83 = a12 + 12;
              v50 = *(unsigned __int8 *)(a12 + 394);
              v84 = 12 * v48;
              v88 = a12 + 108;
              v89 = 12 * v49;
              v93 = a12 + 396;
              v96 = &v63;
              LOWORD(v59) = v50;
              ObjectInformation[0] = v48;
              LOWORD(v58) = v49;
              v86 = a12 + 10;
              v91 = a12 + 394;
              v74 = 4LL;
              v76 = 2LL;
              v78 = 2LL;
              v79 = &v59;
              v80 = 2LL;
              v82 = 2LL;
              v85 = 0;
              v87 = 2LL;
              v90 = 0;
              v92 = 2LL;
              v94 = 8 * v50;
              v95 = 0;
              v63 = 0x1000000LL;
              v97 = 8LL;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_140C02130,
                (unsigned __int8 *)&word_1400224CE,
                0LL,
                0LL,
                0xDu,
                &v72);
            }
          }
        }
        if ( ContextForFile >= 0 )
        {
LABEL_115:
          if ( (a8 & 0x800000) != 0 )
          {
            v51 = *(_QWORD *)(v13 + 64);
            if ( *(_DWORD *)(v51 + 24) < 6u || (*(_DWORD *)(v51 + 144) & 2) == 0 )
            {
              HvMarkBaseBlockDirty(v13);
              *(_DWORD *)(*(_QWORD *)(v13 + 64) + 24LL) = 6;
              *(_DWORD *)(*(_QWORD *)(v13 + 64) + 144LL) |= 2u;
            }
          }
          v36 = v62;
          CmpReorganizeHive(v13);
          CmpLockRegistry();
          HvLockHiveFlusherShared(v13);
          HvLockHiveWriter(v13);
          if ( v34 )
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
            v40 = (_QWORD *)(v13 + 1600);
            if ( (a8 & 0x1000000) != 0 )
            {
              *(_QWORD *)(v13 + 1608) = v13 + 1600;
              *v40 = v40;
            }
            else
            {
              CmpLockHiveListExclusive();
              v44 = (_QWORD *)qword_140D2E918;
              if ( *(__int64 **)qword_140D2E918 != &CmpHiveListHead )
                __fastfail(3u);
              *v40 = &CmpHiveListHead;
              *(_QWORD *)(v13 + 1608) = v44;
              *v44 = v40;
              qword_140D2E918 = v13 + 1600;
              CmpUnlockHiveList();
              CmpRecheckHiveVolumePolicy(v13);
            }
            v41 = v67;
            *(_QWORD *)(v13 + 56) = 0LL;
            *v41 = v13;
            CmpReleaseShutdownRundown(v38, v37, v39);
            v14 = 0;
            if ( (DWORD2(PerfGlobalGroupMask) & 0x1000000) != 0 )
              CmpLogHiveInitializeEvent(v13, v34, v36, v61);
            ContextForFile = 0;
LABEL_57:
            CmpDetachFromRegistryProcess((__int64)v71);
            goto LABEL_58;
          }
          v53 = 256;
        }
        else
        {
          v53 = 240;
        }
        v46 = ContextForFile;
        goto LABEL_103;
      }
LABEL_104:
      v14 = v55;
LABEL_105:
      if ( v13 )
        CmpDestroyHive((PVOID)v13);
      if ( !v57 )
        goto LABEL_58;
      goto LABEL_57;
    }
    ContextForFile = -1073741670;
    SetFailureLocation(a12, 0, 1, -1073741670, 176);
  }
LABEL_58:
  if ( v14 )
    CmpReleaseShutdownRundown(v21, v20, v22);
  return (unsigned int)ContextForFile;
}
