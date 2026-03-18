/*
 * XREFs of CmpCreateHive @ 0x14068A7FC
 * Callers:
 *     CmpCreateTemporaryHive @ 0x14065C990 (CmpCreateTemporaryHive.c)
 *     CmpInitHiveFromFile @ 0x1407122B0 (CmpInitHiveFromFile.c)
 *     CmRestoreKey @ 0x14090C34C (CmRestoreKey.c)
 *     CmpLoadHiveVolatile @ 0x14090D4E8 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x14090D9E8 (CmpRefreshHive.c)
 *     CmInitSystem1 @ 0x140B15F88 (CmInitSystem1.c)
 *     CmpInitializeSystemHive @ 0x140B169F0 (CmpInitializeSystemHive.c)
 *     CmpInitializePreloadedHive @ 0x140B16B94 (CmpInitializePreloadedHive.c)
 * Callees:
 *     SetFailureLocation @ 0x14020A890 (SetFailureLocation.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14020A9C4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     CmpRecheckHiveVolumePolicy @ 0x14020B1F8 (CmpRecheckHiveVolumePolicy.c)
 *     _tlgKeywordOn @ 0x1402A2000 (_tlgKeywordOn.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwSetInformationObject @ 0x14041C2E0 (ZwSetInformationObject.c)
 *     CmpAllocateForNonPagedHive @ 0x14053F520 (CmpAllocateForNonPagedHive.c)
 *     CmpDestroyHive @ 0x14065A7E0 (CmpDestroyHive.c)
 *     CmCheckRegistry @ 0x140689DC8 (CmCheckRegistry.c)
 *     CmpHiveInitialize @ 0x14068AF4C (CmpHiveInitialize.c)
 *     CmpAllocate @ 0x14068B0E0 (CmpAllocate.c)
 *     CmpReorganizeHive @ 0x14068B1C8 (CmpReorganizeHive.c)
 *     HvHiveStartFileBacked @ 0x14068B3E0 (HvHiveStartFileBacked.c)
 *     CmpVolumeContextMustHiveFilePagesBeKeptLocal @ 0x14068B6FC (CmpVolumeContextMustHiveFilePagesBeKeptLocal.c)
 *     CmpVolumeManagerGetContextForFile @ 0x14068B750 (CmpVolumeManagerGetContextForFile.c)
 *     CmpGetVolumeClusterSize @ 0x14068BEAC (CmpGetVolumeClusterSize.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x14068C0C4 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvHiveStartMemoryBacked @ 0x14068F7C4 (HvHiveStartMemoryBacked.c)
 *     HvMarkBaseBlockDirty @ 0x1406CA514 (HvMarkBaseBlockDirty.c)
 *     ObDuplicateObject @ 0x1407A1F80 (ObDuplicateObject.c)
 *     CmpLogHiveInitializeEvent @ 0x140910918 (CmpLogHiveInitializeEvent.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x140AB42A0 (CmpReleaseShutdownRundown.c)
 *     CmpLockRegistry @ 0x140AB4370 (CmpLockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140AB4550 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AB4580 (CmpDetachFromRegistryProcess.c)
 *     CmpAcquireShutdownRundown @ 0x140AB46D0 (CmpAcquireShutdownRundown.c)
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
  int v12; // r13d
  void *Pool2; // r12
  __int64 v14; // rcx
  __int64 v15; // rax
  signed int VolumeClusterSize; // eax
  signed int ContextForFile; // ebx
  int v18; // ebx
  PVOID v19; // rax
  ULONG_PTR v20; // rdi
  __int64 v21; // rcx
  __int64 *v22; // r12
  __int64 v23; // r8
  PVOID (__fastcall *v24)(SIZE_T, char, ULONG); // rax
  int v25; // edx
  unsigned int v26; // ebx
  signed int v27; // eax
  signed int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  _QWORD *v33; // rbx
  ULONG_PTR *v34; // rax
  __int64 v36; // rax
  _QWORD *v37; // rax
  unsigned int v38; // eax
  __int64 v39; // rcx
  int v40; // r9d
  int v41; // edx
  int v42; // r9d
  int v43; // r10d
  __int64 v44; // rax
  ACCESS_MASK AccessMask[2]; // [rsp+20h] [rbp-E0h]
  unsigned int AccessMaska; // [rsp+20h] [rbp-E0h]
  int v47[2]; // [rsp+28h] [rbp-D8h]
  int v48; // [rsp+30h] [rbp-D0h]
  char v49; // [rsp+70h] [rbp-90h]
  char v50; // [rsp+71h] [rbp-8Fh]
  int v52; // [rsp+7Ch] [rbp-84h] BYREF
  __int16 v53; // [rsp+80h] [rbp-80h]
  __int16 v54; // [rsp+84h] [rbp-7Ch]
  __int16 v55; // [rsp+88h] [rbp-78h]
  unsigned int v56; // [rsp+8Ch] [rbp-74h] BYREF
  __int16 v57; // [rsp+90h] [rbp-70h] BYREF
  int v58; // [rsp+94h] [rbp-6Ch]
  unsigned int v59; // [rsp+98h] [rbp-68h] BYREF
  __int64 v60; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v61; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v62; // [rsp+B0h] [rbp-50h]
  __int64 v63; // [rsp+B8h] [rbp-48h]
  __int64 v64; // [rsp+C0h] [rbp-40h]
  ULONG_PTR *v65; // [rsp+C8h] [rbp-38h]
  __int128 v66; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v67; // [rsp+E0h] [rbp-20h]
  __int64 (__fastcall *v68)(int, int, int, int, ULONG); // [rsp+F0h] [rbp-10h]
  _OWORD v69[3]; // [rsp+F8h] [rbp-8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+130h] [rbp+30h] BYREF
  __int64 *v71; // [rsp+150h] [rbp+50h]
  __int64 v72; // [rsp+158h] [rbp+58h]
  __int16 *v73; // [rsp+160h] [rbp+60h]
  __int64 v74; // [rsp+168h] [rbp+68h]
  unsigned int *v75; // [rsp+170h] [rbp+70h]
  __int64 v76; // [rsp+178h] [rbp+78h]
  int *v77; // [rsp+180h] [rbp+80h]
  __int64 v78; // [rsp+188h] [rbp+88h]
  __int64 v79; // [rsp+190h] [rbp+90h]
  __int64 v80; // [rsp+198h] [rbp+98h]
  __int64 v81; // [rsp+1A0h] [rbp+A0h]
  int v82; // [rsp+1A8h] [rbp+A8h]
  int v83; // [rsp+1ACh] [rbp+ACh]
  __int64 v84; // [rsp+1B0h] [rbp+B0h]
  __int64 v85; // [rsp+1B8h] [rbp+B8h]
  __int64 v86; // [rsp+1C0h] [rbp+C0h]
  int v87; // [rsp+1C8h] [rbp+C8h]
  int v88; // [rsp+1CCh] [rbp+CCh]
  __int64 v89; // [rsp+1D0h] [rbp+D0h]
  __int64 v90; // [rsp+1D8h] [rbp+D8h]
  __int64 v91; // [rsp+1E0h] [rbp+E0h]
  int v92; // [rsp+1E8h] [rbp+E8h]
  int v93; // [rsp+1ECh] [rbp+ECh]
  __int64 *v94; // [rsp+1F0h] [rbp+F0h]
  __int64 v95; // [rsp+1F8h] [rbp+F8h]

  v12 = a3;
  v62 = a7;
  Pool2 = 0LL;
  v64 = a9;
  v63 = a10;
  v60 = a11;
  v65 = a1;
  v56 = a4;
  v61 = a5;
  v68 = 0LL;
  v59 = 0;
  v49 = 0;
  v50 = 0;
  v66 = 0LL;
  v67 = 0LL;
  memset(v69, 0, sizeof(v69));
  if ( a2 > 2 && a2 != 5 )
  {
    ContextForFile = -1073741811;
    v38 = 0;
    goto LABEL_110;
  }
  if ( (a3 & 0xFD617CEC) != 0 )
  {
    AccessMaska = 16;
LABEL_90:
    ContextForFile = -1073741811;
    SetFailureLocation(a12, 0, 1, 0xC000000D, AccessMaska);
    return (unsigned int)ContextForFile;
  }
  if ( a4 > 2 )
  {
    AccessMaska = 32;
    goto LABEL_90;
  }
  if ( !a5 && a2 == 1 )
  {
    AccessMaska = 48;
    goto LABEL_90;
  }
  if ( a6 )
  {
    if ( (a3 & 1) != 0 && (a3 & 0x8000) == 0 )
    {
      AccessMaska = 64;
      goto LABEL_90;
    }
    if ( !*a6 && (a6[1] || a6[2]) )
    {
      AccessMaska = 80;
      goto LABEL_90;
    }
    v14 = a6[1];
    if ( v14 && !a4 )
    {
      AccessMaska = 96;
      goto LABEL_90;
    }
    v15 = a6[2];
    if ( v15 && a4 != 2 )
    {
      AccessMaska = 112;
      goto LABEL_90;
    }
    if ( a6[3] && (*a6 || v14 || v15) )
    {
      AccessMaska = 128;
      goto LABEL_90;
    }
  }
  v49 = CmpAcquireShutdownRundown();
  if ( !v49 )
    return (unsigned int)-1073741431;
  v58 = 1;
  if ( a6 )
  {
    if ( *a6 )
    {
      VolumeClusterSize = CmpGetVolumeClusterSize((HANDLE)*a6);
      ContextForFile = VolumeClusterSize;
      if ( VolumeClusterSize < 0 )
      {
        SetFailureLocation(a12, 0, 1, VolumeClusterSize, 0xA0u);
        goto LABEL_106;
      }
    }
  }
  Pool2 = (void *)ExAllocatePool2(64LL, 32LL, 892947779LL);
  if ( !Pool2 )
  {
    ContextForFile = -1073741801;
    goto LABEL_106;
  }
  v18 = v12 & 0x2000000;
  v52 = v12 & 0x2000000;
  if ( (v12 & 0x2000000) != 0 )
    v19 = CmpAllocateForNonPagedHive(0x12D8uLL, 0, 0x30314D43u);
  else
    v19 = (PVOID)CmpAllocate(0x12D8uLL);
  v20 = (ULONG_PTR)v19;
  if ( v19 )
  {
    CmpHiveInitialize(v19, Pool2);
    if ( !a6 )
      goto LABEL_37;
    if ( *a6 )
    {
      ContextForFile = ObDuplicateObject((ULONG_PTR)PsInitialSystemProcess, 0, 512, 2, 0);
      if ( ContextForFile < 0 )
        goto LABEL_116;
      v21 = *(_QWORD *)(v20 + 1544);
      v53 = 256;
      ZwSetInformationObject(v21, 4LL);
    }
    if ( a6[3] )
    {
      ContextForFile = ObDuplicateObject((ULONG_PTR)PsInitialSystemProcess, 0, 512, 2, 0);
      if ( ContextForFile < 0 )
        goto LABEL_116;
      v39 = *(_QWORD *)(v20 + 1560);
      v54 = 256;
      ZwSetInformationObject(v39, 4LL);
    }
    if ( v56 == 1 )
    {
      if ( !a6[1] )
        goto LABEL_36;
      v22 = (__int64 *)(v20 + 1552);
      ContextForFile = ObDuplicateObject((ULONG_PTR)PsInitialSystemProcess, 0, 512, 2, 0);
      if ( ContextForFile < 0 )
        goto LABEL_116;
    }
    else
    {
      if ( v56 != 2 )
        goto LABEL_36;
      if ( a6[1] )
      {
        ContextForFile = ObDuplicateObject((ULONG_PTR)PsInitialSystemProcess, 0, 512, 2, 0);
        if ( ContextForFile < 0 )
          goto LABEL_116;
        ZwSetInformationObject(*(_QWORD *)(v20 + 1576), 4LL);
      }
      if ( !a6[2] )
        goto LABEL_36;
      v22 = (__int64 *)(v20 + 1584);
      ContextForFile = ObDuplicateObject((ULONG_PTR)PsInitialSystemProcess, 0, 512, 2, 0);
      if ( ContextForFile < 0 )
        goto LABEL_116;
      v55 = 256;
    }
    ZwSetInformationObject(*v22, 4LL);
LABEL_36:
    v18 = v52;
LABEL_37:
    if ( (a8 & 0x8000000) != 0 )
      *(_DWORD *)(v20 + 4112) |= 0x80u;
    if ( a8 < 0 )
      *(_DWORD *)(v20 + 4112) |= 0x800u;
    CmpAttachToRegistryProcess(v69);
    v50 = 1;
    v24 = (PVOID (__fastcall *)(SIZE_T, char, ULONG))CmpAllocate;
    if ( v18 )
      v24 = CmpAllocateForNonPagedHive;
    *(_QWORD *)&v66 = v24;
    *((_QWORD *)&v66 + 1) = CmpFree;
    *((_QWORD *)&v67 + 1) = CmpFileWrite;
    v68 = CmpFileRead;
    *(_QWORD *)(v20 + 56) = a12;
    *(_QWORD *)a12 = v20;
    if ( a2 == 5 || a2 == 2 || !a2 && a6 && *a6 )
    {
      v12 |= 0x20000u;
      ContextForFile = CmpVolumeManagerGetContextForFile(CmpAllocateForNonPagedHive, *a6, v23, v20 + 4792);
      if ( ContextForFile < 0 )
        goto LABEL_116;
      if ( (unsigned __int8)CmpVolumeContextMustHiveFilePagesBeKeptLocal(*(_QWORD *)(v20 + 4792))
        || (a8 & 0x2000000) != 0 )
      {
        v12 |= 0x800000u;
      }
      LOBYTE(v25) = a2 == 0;
      ContextForFile = HvHiveStartFileBacked(
                         v20,
                         v25,
                         v12,
                         v56,
                         (__int64)&v66,
                         v58,
                         v48,
                         v62,
                         a8,
                         v64,
                         v63,
                         v60,
                         (__int64)&v59,
                         a12);
      if ( ContextForFile < 0 )
      {
        SetFailureLocation(a12, 0, 1, ContextForFile, 0xE4u);
        goto LABEL_116;
      }
    }
    else
    {
      ContextForFile = HvHiveStartMemoryBacked(v20, v61, (__int64)&v66, v58, v62, a8, v64, v63, v60, (__int64)&v59, a12);
      if ( ContextForFile < 0 )
      {
        SetFailureLocation(a12, 0, 1, ContextForFile, 0xE8u);
        goto LABEL_116;
      }
    }
    if ( (v12 & 0x180000) != 0x80000
      || (a8 & 0x800000) != 0
      || (v36 = *(_QWORD *)(v20 + 64), *(_DWORD *)(v36 + 24) >= 6u) && (*(_DWORD *)(v36 + 144) & 2) != 0 )
    {
      v26 = a2;
      if ( ((a2 - 1) & 0xFFFFFFFA) == 0 && a2 != 6 )
      {
        v27 = CmCheckRegistry(v20, a8, a12);
        ContextForFile = v27;
        if ( v27 == -2147483606 )
        {
          if ( (unsigned int)dword_140C03868 > 5 && tlgKeywordOn((__int64)&dword_140C03868, 0x400000000000LL) )
          {
            LODWORD(v60) = v40;
            v71 = &v60;
            v73 = &v57;
            v41 = *(unsigned __int16 *)(a12 + 8);
            v42 = *(unsigned __int16 *)(a12 + 10);
            v79 = a12 + 8;
            v75 = &v56;
            v81 = a12 + 12;
            v43 = *(unsigned __int8 *)(a12 + 394);
            v82 = 12 * v41;
            v86 = a12 + 108;
            v87 = 12 * v42;
            v91 = a12 + 396;
            v94 = &v61;
            LOWORD(v52) = v43;
            v57 = v41;
            LOWORD(v56) = v42;
            v84 = a12 + 10;
            v89 = a12 + 394;
            v72 = 4LL;
            v74 = 2LL;
            v76 = 2LL;
            v77 = &v52;
            v78 = 2LL;
            v80 = 2LL;
            v83 = 0;
            v85 = 2LL;
            v88 = 0;
            v90 = 2LL;
            v92 = 8 * v43;
            v93 = 0;
            v61 = 0x1000000LL;
            v95 = 8LL;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140C03868,
              (unsigned __int8 *)&byte_1400298CF,
              0LL,
              0LL,
              0xDu,
              &v70);
          }
        }
        else if ( v27 < 0 )
        {
          SetFailureLocation(a12, 0, 1, v27, 0xF0u);
          goto LABEL_116;
        }
        v26 = a2;
      }
      if ( (a8 & 0x800000) != 0 )
      {
        v44 = *(_QWORD *)(v20 + 64);
        if ( *(_DWORD *)(v44 + 24) < 6u || (*(_DWORD *)(v44 + 144) & 2) == 0 )
        {
          HvMarkBaseBlockDirty(v20);
          *(_DWORD *)(*(_QWORD *)(v20 + 64) + 24LL) = 6;
          *(_DWORD *)(*(_QWORD *)(v20 + 64) + 144LL) |= 2u;
        }
      }
      CmpReorganizeHive(v20);
      CmpLockRegistry();
      ExAcquirePushLockSharedEx(v20 + 72, 0LL);
      ExAcquirePushLockExclusiveEx(v20 + 80, 0LL);
      v28 = 0;
      if ( v26 )
        v28 = HvCheckAndUpdateHiveBackupTimeStamp(v20);
      else
        *(_BYTE *)(v20 + 195) = 1;
      ContextForFile = v28;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v20 + 80);
      KeAbPostRelease(v20 + 80);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 72), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v20 + 72));
      KeAbPostRelease(v20 + 72);
      CmpUnlockRegistry(v30, v29, v31, v32, *(_QWORD *)AccessMask, *(_QWORD *)v47);
      if ( ContextForFile >= 0 )
      {
        v33 = (_QWORD *)(v20 + 1608);
        if ( (a8 & 0x1000000) != 0 )
        {
          *(_QWORD *)(v20 + 1616) = v20 + 1608;
          *v33 = v33;
        }
        else
        {
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
          v37 = (_QWORD *)qword_140D3CC98;
          if ( *(__int64 **)qword_140D3CC98 != &CmpHiveListHead )
            __fastfail(3u);
          *v33 = &CmpHiveListHead;
          *(_QWORD *)(v20 + 1616) = v37;
          *v37 = v33;
          qword_140D3CC98 = v20 + 1608;
          ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
          CmpRecheckHiveVolumePolicy(v20);
        }
        v34 = v65;
        ContextForFile = 0;
        *(_QWORD *)(v20 + 56) = 0LL;
        *v34 = v20;
        CmpReleaseShutdownRundown();
        v49 = 0;
        if ( (DWORD2(PerfGlobalGroupMask) & 0x1000000) != 0 )
          CmpLogHiveInitializeEvent(v20, a2, v62, v59);
        goto LABEL_67;
      }
      SetFailureLocation(a12, 0, 1, ContextForFile, 0x100u);
    }
    else
    {
      ContextForFile = -1073741811;
    }
LABEL_116:
    CmpDestroyHive(v20);
    if ( !v50 )
      goto LABEL_68;
LABEL_67:
    CmpDetachFromRegistryProcess(v69);
    goto LABEL_68;
  }
  ContextForFile = -1073741670;
  v38 = 176;
LABEL_110:
  SetFailureLocation(a12, 0, 1, ContextForFile, v38);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
LABEL_68:
  if ( v49 )
LABEL_106:
    CmpReleaseShutdownRundown();
  return (unsigned int)ContextForFile;
}
