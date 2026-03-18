/*
 * XREFs of CmLoadAppKey @ 0x1405DE288
 * Callers:
 *     CmLoadDifferencingKey @ 0x140650EAC (CmLoadDifferencingKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402029C0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x1402036A0 (CmpAllocateTransientPoolWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     ExInitializePushLock @ 0x140267800 (ExInitializePushLock.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14026C434 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14026C5B4 (_tlgKeywordOn.c)
 *     CmpLoadKeyCommon @ 0x140271C20 (CmpLoadKeyCommon.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     KeInitializeEvent @ 0x140290DE0 (KeInitializeEvent.c)
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402993F0 (ExAcquireRundownProtection_0.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402FA0C0 (ExWaitForRundownProtectionRelease.c)
 *     ExBlockOnAddressPushLock @ 0x140325580 (ExBlockOnAddressPushLock.c)
 *     SetFailureLocation @ 0x140352EE8 (SetFailureLocation.c)
 *     _tlgWriteAgg @ 0x1403735C4 (_tlgWriteAgg.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     memset @ 0x14040A280 (memset.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x1404E776C (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     CmpGetNextHive @ 0x1405DF1A0 (CmpGetNextHive.c)
 *     CmpIsThisSameFile @ 0x1405DF7CC (CmpIsThisSameFile.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1405E77E0 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpConstructNameWithStatus @ 0x1405E8840 (CmpConstructNameWithStatus.c)
 *     CmpAttachToRegistryProcess @ 0x1405EA8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x1405EC100 (CmpDetachFromRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x1405F3D20 (CmpUnlockRegistry.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     CmpOpenHiveFile @ 0x14061E8E8 (CmpOpenHiveFile.c)
 *     UNLOCK_HIVE_LOAD @ 0x14063FF30 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x140640060 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1406400C4 (LOCK_HIVE_LOAD.c)
 *     CmpDeleteHive @ 0x140644B4C (CmpDeleteHive.c)
 *     CmpCmdHiveOpen @ 0x14065E3B8 (CmpCmdHiveOpen.c)
 *     RtlEqualUnicodeString @ 0x140681E80 (RtlEqualUnicodeString.c)
 *     CmpGetLastHive @ 0x14070500C (CmpGetLastHive.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmLoadAppKey(
        _QWORD *a1,
        const UNICODE_STRING *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        POBJECT_HANDLE_INFORMATION a6,
        char a7,
        _QWORD *a8,
        ULONG_PTR *a9)
{
  __int16 v9; // di
  unsigned __int16 *v12; // rax
  char v13; // r15
  volatile signed __int32 *LastHive; // r14
  unsigned int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // r8
  PVOID TransientPoolWithTag; // rax
  __int64 v20; // rsi
  struct _KTHREAD *CurrentThread; // rax
  int v22; // edx
  int v23; // ecx
  int v24; // edx
  int v25; // eax
  int KeyCommon; // edi
  NTSTATUS v27; // eax
  struct _DMA_ADAPTER *v28; // rbx
  struct _KTHREAD *v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rdi
  _QWORD *v32; // rax
  __int64 v33; // rbx
  struct _EX_RUNDOWN_REF *v34; // rbx
  int v35; // edx
  __int64 v36; // rbx
  int v37; // eax
  NTSTATUS v38; // eax
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  void *i; // rcx
  __int64 NextHive; // rax
  __int64 v46; // rbx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rcx
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rcx
  _QWORD *v54; // rdi
  __int64 v55; // rdx
  __int64 v56; // rcx
  ULONG_PTR *v57; // rcx
  __int64 v58; // rdx
  int v59; // edx
  struct _KTHREAD *v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // r8
  _QWORD *v65; // rdx
  _QWORD *v66; // rax
  __int64 v67; // r8
  unsigned __int8 *v68; // rdx
  unsigned __int8 v69; // r9
  struct _EVENT_DATA_DESCRIPTOR *v70; // rax
  unsigned int v71; // r9d
  int v72; // r11d
  int v73; // r9d
  int v74; // r10d
  __int64 v75; // r15
  int v76; // r8d
  int v77; // r9d
  int Object; // [rsp+20h] [rbp-E0h]
  char v79; // [rsp+60h] [rbp-A0h] BYREF
  char v80; // [rsp+61h] [rbp-9Fh] BYREF
  char v81; // [rsp+62h] [rbp-9Eh]
  char v82; // [rsp+63h] [rbp-9Dh]
  char v83; // [rsp+64h] [rbp-9Ch] BYREF
  struct _DMA_ADAPTER *v84; // [rsp+68h] [rbp-98h]
  __int64 v85; // [rsp+70h] [rbp-90h] BYREF
  __int16 v86; // [rsp+78h] [rbp-88h] BYREF
  __int16 v87; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned __int16 v88; // [rsp+80h] [rbp-80h] BYREF
  __int16 v89; // [rsp+84h] [rbp-7Ch] BYREF
  __int16 v90; // [rsp+88h] [rbp-78h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-70h]
  int v92; // [rsp+98h] [rbp-68h]
  __int64 v93; // [rsp+9Ch] [rbp-64h] BYREF
  int v94; // [rsp+A4h] [rbp-5Ch]
  char *v95; // [rsp+A8h] [rbp-58h] BYREF
  PVOID P; // [rsp+B0h] [rbp-50h] BYREF
  int v97; // [rsp+B8h] [rbp-48h] BYREF
  int v98; // [rsp+BCh] [rbp-44h] BYREF
  int v99; // [rsp+C0h] [rbp-40h] BYREF
  int v100; // [rsp+C4h] [rbp-3Ch] BYREF
  int v101; // [rsp+C8h] [rbp-38h]
  int v102; // [rsp+CCh] [rbp-34h]
  int v103; // [rsp+D0h] [rbp-30h]
  __int64 v104; // [rsp+D8h] [rbp-28h]
  _BYTE v105[80]; // [rsp+E0h] [rbp-20h] BYREF
  PVOID v106; // [rsp+130h] [rbp+30h] BYREF
  PVOID v107; // [rsp+138h] [rbp+38h] BYREF
  __int64 v108; // [rsp+140h] [rbp+40h] BYREF
  __int64 v109; // [rsp+148h] [rbp+48h]
  ULONG_PTR *v110; // [rsp+150h] [rbp+50h]
  _QWORD *v111; // [rsp+158h] [rbp+58h]
  __int64 v112; // [rsp+160h] [rbp+60h]
  __int64 v113; // [rsp+168h] [rbp+68h]
  __int64 v114; // [rsp+170h] [rbp+70h] BYREF
  __int64 v115; // [rsp+178h] [rbp+78h] BYREF
  __int64 v116; // [rsp+180h] [rbp+80h] BYREF
  __int64 v117; // [rsp+188h] [rbp+88h] BYREF
  __int64 v118; // [rsp+190h] [rbp+90h] BYREF
  __int64 v119; // [rsp+198h] [rbp+98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v120[3]; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v121; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 *v122; // [rsp+1F0h] [rbp+F0h]
  __int64 v123; // [rsp+1F8h] [rbp+F8h]
  int *v124; // [rsp+200h] [rbp+100h]
  __int64 v125; // [rsp+208h] [rbp+108h]
  char *v126; // [rsp+210h] [rbp+110h]
  __int64 v127; // [rsp+218h] [rbp+118h]
  __int16 *v128; // [rsp+220h] [rbp+120h]
  __int64 v129; // [rsp+228h] [rbp+128h]
  __int16 *v130; // [rsp+230h] [rbp+130h]
  __int64 v131; // [rsp+238h] [rbp+138h]
  __int64 v132; // [rsp+240h] [rbp+140h]
  __int64 v133; // [rsp+248h] [rbp+148h]
  __int64 v134; // [rsp+250h] [rbp+150h]
  int v135; // [rsp+258h] [rbp+158h]
  int v136; // [rsp+25Ch] [rbp+15Ch]
  __int64 v137; // [rsp+260h] [rbp+160h]
  __int64 v138; // [rsp+268h] [rbp+168h]
  __int64 v139; // [rsp+270h] [rbp+170h]
  int v140; // [rsp+278h] [rbp+178h]
  int v141; // [rsp+27Ch] [rbp+17Ch]
  __int64 v142; // [rsp+280h] [rbp+180h]
  __int64 v143; // [rsp+288h] [rbp+188h]
  __int64 v144; // [rsp+290h] [rbp+190h]
  int v145; // [rsp+298h] [rbp+198h]
  int v146; // [rsp+29Ch] [rbp+19Ch]
  __int64 *v147; // [rsp+2A0h] [rbp+1A0h]
  __int64 v148; // [rsp+2A8h] [rbp+1A8h]
  struct _EVENT_DATA_DESCRIPTOR v149; // [rsp+2B0h] [rbp+1B0h] BYREF
  int *v150; // [rsp+2D0h] [rbp+1D0h]
  __int64 v151; // [rsp+2D8h] [rbp+1D8h]
  unsigned __int16 *v152; // [rsp+2E0h] [rbp+1E0h]
  __int64 v153; // [rsp+2E8h] [rbp+1E8h]
  __int16 *v154; // [rsp+2F0h] [rbp+1F0h]
  __int64 v155; // [rsp+2F8h] [rbp+1F8h]
  __int16 *v156; // [rsp+300h] [rbp+200h]
  __int64 v157; // [rsp+308h] [rbp+208h]
  __int64 v158; // [rsp+310h] [rbp+210h]
  __int64 v159; // [rsp+318h] [rbp+218h]
  __int64 v160; // [rsp+320h] [rbp+220h]
  int v161; // [rsp+328h] [rbp+228h]
  int v162; // [rsp+32Ch] [rbp+22Ch]
  __int64 v163; // [rsp+330h] [rbp+230h]
  __int64 v164; // [rsp+338h] [rbp+238h]
  __int64 v165; // [rsp+340h] [rbp+240h]
  int v166; // [rsp+348h] [rbp+248h]
  int v167; // [rsp+34Ch] [rbp+24Ch]
  __int64 v168; // [rsp+350h] [rbp+250h]
  __int64 v169; // [rsp+358h] [rbp+258h]
  __int64 v170; // [rsp+360h] [rbp+260h]
  int v171; // [rsp+368h] [rbp+268h]
  int v172; // [rsp+36Ch] [rbp+26Ch]
  char v173; // [rsp+370h] [rbp+270h] BYREF
  __int64 *v174; // [rsp+390h] [rbp+290h]
  __int64 v175; // [rsp+398h] [rbp+298h]
  int *v176; // [rsp+3A0h] [rbp+2A0h]
  __int64 v177; // [rsp+3A8h] [rbp+2A8h]
  char *v178; // [rsp+3B0h] [rbp+2B0h]
  __int64 v179; // [rsp+3B8h] [rbp+2B8h]
  __int64 *v180; // [rsp+3C0h] [rbp+2C0h]
  __int64 v181; // [rsp+3C8h] [rbp+2C8h]
  struct _EVENT_DATA_DESCRIPTOR v182; // [rsp+3D0h] [rbp+2D0h] BYREF
  __int64 *v183; // [rsp+3F0h] [rbp+2F0h]
  __int64 v184; // [rsp+3F8h] [rbp+2F8h]
  int *v185; // [rsp+400h] [rbp+300h]
  __int64 v186; // [rsp+408h] [rbp+308h]
  __int64 *v187; // [rsp+410h] [rbp+310h]
  __int64 v188; // [rsp+418h] [rbp+318h]

  v9 = a3;
  v112 = a5;
  v111 = a8;
  v101 = a3;
  v110 = a9;
  v113 = a4;
  v104 = (__int64)a6;
  v92 = 0;
  Handle = 0LL;
  memset(v105, 0, sizeof(v105));
  v12 = (unsigned __int16 *)a1[2];
  v79 = 0;
  memset(v120, 0, sizeof(v120));
  v81 = 0;
  v13 = 0;
  v82 = 0;
  LastHive = 0LL;
  v15 = *v12;
  P = 0LL;
  v109 = 0LL;
  v84 = 0LL;
  if ( (unsigned __int16)v15 >= 2u )
  {
    LODWORD(v16) = v15 >> 1;
    if ( v15 >> 1 )
    {
      do
      {
        v17 = a1[2];
        v16 = (unsigned int)(v16 - 1);
        if ( *(_WORD *)(*(_QWORD *)(v17 + 8) + 2 * v16) != 92 )
          break;
        *(_WORD *)v17 -= 2;
      }
      while ( (_DWORD)v16 );
    }
  }
  if ( *(_WORD *)a1[2] < 2u )
    return 3221225485LL;
  TransientPoolWithTag = CmpAllocateTransientPoolWithTag(PagedPool, 0x1B0uLL, 0x33394D43u, (PLOOKASIDE_LIST_EX)2);
  v20 = (__int64)TransientPoolWithTag;
  if ( !TransientPoolWithTag )
    return 3221225626LL;
  memset(TransientPoolWithTag, 0, 0x1B0uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    CmSiFreeMemory((PPRIVILEGE_SET)v20);
    return 3221225865LL;
  }
  v102 = v9 & 0x20;
  v22 = (v102 != 0 ? 119078913 : 51970049) | 0x8000000;
  if ( (v9 & 0x80u) == 0 )
    v22 = v102 != 0 ? 119078913 : 51970049;
  v23 = v22 | 0x10000000;
  if ( (v9 & 0x200) == 0 )
    v23 = v22;
  v94 = v23;
  v103 = v9 & 0x2000;
  v24 = (v103 != 0) | 0x20;
  if ( (v9 & 0x8000) == 0 )
    v24 = (v9 & 0x2000) != 0;
  HIDWORD(v93) = v24;
  v25 = CmpOpenHiveFile(a2, 8, (__int64)a6, 0LL, 0LL, (__int64)&P);
  KeyCommon = v25;
  if ( v25 == -1073741772 )
  {
    v81 = 1;
    *(_QWORD *)&v105[32] = a2;
    v105[40] = 1;
  }
  else
  {
    if ( v25 < 0 )
    {
      SetFailureLocation(v20, 0, 32, v25, 16);
      goto LABEL_102;
    }
    v106 = 0LL;
    v27 = ObReferenceObjectByHandle(Handle, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &v106, 0LL);
    v28 = (struct _DMA_ADAPTER *)v106;
    KeyCommon = v27;
    v84 = (struct _DMA_ADAPTER *)v106;
    ZwClose(Handle);
    if ( KeyCommon < 0 )
    {
      SetFailureLocation(v20, 0, 32, KeyCommon, 32);
      goto LABEL_100;
    }
    *(_QWORD *)&v105[32] = v28[2].DmaOperations;
    v105[40] = 0;
  }
  KeInitializeEvent((PRKEVENT)&v105[48], NotificationEvent, 0);
  ExInitializePushLock((PKSPIN_LOCK)&v105[72]);
  *(_QWORD *)&v105[24] = &v105[16];
  *(_QWORD *)&v105[16] = &v105[16];
  v29 = KeGetCurrentThread();
  --v29->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpAppHiveLoadListLock, 0LL);
  v30 = CmpAppHiveLoadList;
  if ( (__int64 *)CmpAppHiveLoadList == &CmpAppHiveLoadList )
  {
LABEL_32:
    if ( *(__int64 **)qword_140C47E88 == &CmpAppHiveLoadList )
    {
      *(_QWORD *)v105 = &CmpAppHiveLoadList;
      *(_QWORD *)&v105[8] = qword_140C47E88;
      *(_QWORD *)qword_140C47E88 = v105;
      qword_140C47E88 = (__int64)v105;
      ExReleasePushLockEx((ULONG_PTR)&CmpAppHiveLoadListLock, 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      goto LABEL_34;
    }
    goto LABEL_123;
  }
  v31 = *(_QWORD *)&v105[32];
  while ( 1 )
  {
    if ( !*(_BYTE *)(v30 + 40) )
    {
      if ( *(_QWORD *)(v30 + 32) == v31 )
        break;
      goto LABEL_31;
    }
    if ( RtlEqualUnicodeString(*(PCUNICODE_STRING *)(v30 + 32), a2, 1u) )
      break;
LABEL_31:
    v30 = *(_QWORD *)v30;
    if ( (__int64 *)v30 == &CmpAppHiveLoadList )
      goto LABEL_32;
  }
  v32 = *(_QWORD **)(v30 + 24);
  v33 = v30 + 16;
  if ( *v32 != v33 )
    goto LABEL_123;
  *(_QWORD *)&v105[24] = v32;
  *(_QWORD *)&v105[16] = v33;
  *v32 = &v105[16];
  *(_QWORD *)(v33 + 8) = &v105[16];
  v34 = *(struct _EX_RUNDOWN_REF **)&v105[24];
  ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)&v105[24] + 56LL));
  ExReleasePushLockEx((ULONG_PTR)&CmpAppHiveLoadListLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  KeWaitForSingleObject(&v34[4], Executive, 0, 0, 0LL);
  ExReleaseRundownProtection_0(v34 + 7);
LABEL_34:
  v36 = v104;
  v95 = 0LL;
  LOBYTE(v35) = 1;
  v80 = 1;
  v37 = CmpCmdHiveOpen(
          (_DWORD)a2,
          v35,
          (unsigned int)&v80,
          (unsigned int)&v95,
          v94,
          HIDWORD(v93),
          v104,
          (__int64)&v79,
          v20);
  while ( 1 )
  {
    KeyCommon = v37;
    if ( !v37 )
    {
      KeyCommon = CmpLoadKeyCommon(v95, a1, v101, v113, 0LL, v112, a7, v110, v80, v79, v20);
      goto LABEL_89;
    }
    if ( v37 != -1073741757 || v102 || v13 )
    {
      SetFailureLocation(v20, 0, 32, v37, 48);
      goto LABEL_89;
    }
    if ( v81 )
    {
      KeyCommon = CmpOpenHiveFile(a2, 8, v36, 0LL, 0LL, (__int64)&P);
      if ( KeyCommon < 0 )
      {
        Object = 64;
        if ( KeyCommon == -1073741772 )
          KeyCommon = -1073741757;
LABEL_77:
        SetFailureLocation(v20, 0, 32, KeyCommon, Object);
        goto LABEL_89;
      }
      v107 = 0LL;
      v38 = ObReferenceObjectByHandle(Handle, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &v107, 0LL);
      v28 = (struct _DMA_ADAPTER *)v107;
      KeyCommon = v38;
      v84 = (struct _DMA_ADAPTER *)v107;
      ZwClose(Handle);
      if ( KeyCommon < 0 )
      {
        SetFailureLocation(v20, 0, 32, KeyCommon, 80);
        goto LABEL_90;
      }
      v36 = v104;
    }
    LOCK_HIVE_LOAD();
    LOBYTE(v39) = 1;
    CmpLockRegistryFreezeAware(v39);
    LastHive = (volatile signed __int32 *)CmpGetLastHive();
    if ( LastHive )
      break;
LABEL_73:
    CmpUnlockRegistry(v41, v40);
    UNLOCK_HIVE_LOAD();
    LOBYTE(v59) = 1;
    v80 = 1;
    v79 = 0;
    v95 = 0LL;
    v37 = CmpCmdHiveOpen(
            (_DWORD)a2,
            v59,
            (unsigned int)&v80,
            (unsigned int)&v95,
            v94,
            HIDWORD(v93),
            v36,
            (__int64)&v79,
            v20);
    v13 = 1;
  }
LABEL_44:
  v42 = (unsigned int)CmpActiveAppHiveUnloadCount;
  LODWORD(v85) = CmpActiveAppHiveUnloadCount;
  while ( (_DWORD)v85 )
  {
    CmpUnlockRegistry(v42, v40);
    UNLOCK_HIVE_LOAD();
    ExBlockOnAddressPushLock((__int64)&CmpActiveAppHiveUnloadEvent, &CmpActiveAppHiveUnloadCount, &v85, 4uLL, 0LL);
    LOCK_HIVE_LOAD();
    LOBYTE(v43) = 1;
    CmpLockRegistryFreezeAware(v43);
    LODWORD(v85) = CmpActiveAppHiveUnloadCount;
  }
  for ( i = 0LL; ; i = (void *)v46 )
  {
    NextHive = CmpGetNextHive(i);
    v46 = NextHive;
    if ( !NextHive )
      break;
    v47 = *(unsigned int *)(NextHive + 4808);
    LODWORD(v93) = v47;
    if ( (_DWORD)v47 )
    {
      CmpUnlockRegistry(v47, v40);
      UNLOCK_HIVE_LOAD();
      ExBlockOnAddressPushLock(v46 + 4816, (_QWORD *)(v46 + 4808), &v93, 4uLL, 0LL);
      LOCK_HIVE_LOAD();
      LOBYTE(v48) = 1;
      CmpLockRegistryFreezeAware(v48);
      v41 = 0xFFFFFFFFLL;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v46 + 4272), 0xFFFFFFFF) == 1 )
        CmpDeleteHive((PVOID)v46);
      if ( (volatile signed __int32 *)v46 == LastHive )
        break;
      goto LABEL_44;
    }
    v40 = *(_QWORD *)(NextHive + 1536);
    if ( v40 && (unsigned __int8)CmpIsThisSameFile(v84) )
    {
      v49 = *(unsigned int *)(v46 + 4152);
      v50 = *(_DWORD *)(v46 + 160) & 0x8000;
      if ( (v49 & 0x20) == 0 || (v49 & 0x40) != 0 )
      {
        CmpUnlockRegistry(v49, v40);
        UNLOCK_HIVE_LOAD();
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v46 + 4272), 0xFFFFFFFF) == 1 )
          CmpDeleteHive((PVOID)v46);
        KeyCommon = -1073741757;
        SetFailureLocation(v20, 0, 32, -1073741757, 96);
        goto LABEL_89;
      }
      if ( v103 )
      {
        if ( !v50 && !CmpCheckHivePrimaryFileReadWriteAccess(P) )
        {
          CmpUnlockRegistry(v52, v51);
          UNLOCK_HIVE_LOAD();
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v46 + 4272), 0xFFFFFFFF) == 1 )
            CmpDeleteHive((PVOID)v46);
          KeyCommon = -1073741790;
          Object = 128;
          goto LABEL_77;
        }
      }
      else if ( v50 )
      {
        CmpUnlockRegistry(v49, v40);
        UNLOCK_HIVE_LOAD();
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v46 + 4272), 0xFFFFFFFF) == 1 )
          CmpDeleteHive((PVOID)v46);
        KeyCommon = -1073741757;
        SetFailureLocation(v20, 0, 32, -1073741757, 112);
        goto LABEL_89;
      }
      CmpAttachToRegistryProcess(v120);
      v53 = *(_QWORD *)(v46 + 2928);
      v109 = v46;
      v108 = 0LL;
      CmpConstructNameWithStatus(v53, &v108);
      v54 = v111;
      *v111 = v108;
      CmpDetachFromRegistryProcess(v120);
      if ( !*v54 )
      {
        CmpUnlockRegistry(v56, v55);
        UNLOCK_HIVE_LOAD();
        KeyCommon = -1073741670;
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v46 + 4272), 0xFFFFFFFF) == 1 )
          CmpDeleteHive((PVOID)v46);
        goto LABEL_89;
      }
      CmpReferenceKeyControlBlockUnsafe(*(_QWORD *)(v46 + 2928));
      v57 = v110;
      *v110 = *(_QWORD *)(v46 + 2928);
      CmpUnlockRegistry(v57, v58);
      UNLOCK_HIVE_LOAD();
      KeyCommon = 0;
LABEL_69:
      v41 = 0xFFFFFFFFLL;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v46 + 4272), 0xFFFFFFFF) == 1 )
        CmpDeleteHive((PVOID)v46);
      break;
    }
    if ( (volatile signed __int32 *)v46 == LastHive )
      goto LABEL_69;
  }
  if ( !v109 )
  {
    v36 = v104;
    goto LABEL_73;
  }
  v82 = 1;
LABEL_89:
  v28 = v84;
LABEL_90:
  v60 = KeGetCurrentThread();
  --v60->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpAppHiveLoadListLock, 0LL);
  v61 = *(_QWORD *)v105;
  v62 = *(_QWORD *)&v105[8];
  if ( *(_BYTE **)(*(_QWORD *)v105 + 8LL) != v105 || **(_BYTE ***)&v105[8] != v105 )
    goto LABEL_123;
  **(_QWORD **)&v105[8] = *(_QWORD *)v105;
  *(_QWORD *)(v61 + 8) = v62;
  v63 = *(_QWORD *)&v105[16];
  if ( *(_BYTE **)&v105[16] == &v105[16] )
    goto LABEL_97;
  v64 = *(_QWORD *)&v105[24];
  v65 = (_QWORD *)(*(_QWORD *)&v105[16] - 16LL);
  if ( *(_BYTE **)(*(_QWORD *)&v105[16] + 8LL) != &v105[16]
    || **(_BYTE ***)&v105[24] != &v105[16]
    || (**(_QWORD **)&v105[24] = *(_QWORD *)&v105[16],
        *(_QWORD *)(v63 + 8) = v64,
        v66 = (_QWORD *)qword_140C47E88,
        *(__int64 **)qword_140C47E88 != &CmpAppHiveLoadList) )
  {
LABEL_123:
    __fastfail(3u);
  }
  *v65 = &CmpAppHiveLoadList;
  v65[1] = v66;
  *v66 = v65;
  qword_140C47E88 = (__int64)v65;
LABEL_97:
  ExReleasePushLockEx((ULONG_PTR)&CmpAppHiveLoadListLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  KeSetEvent((PRKEVENT)&v105[48], 0, 0);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&v105[72]);
  if ( LastHive && _InterlockedExchangeAdd(LastHive + 1068, 0xFFFFFFFF) == 1 )
    CmpDeleteHive((PVOID)LastHive);
LABEL_100:
  if ( v28 )
    HalPutDmaAdapter(v28);
LABEL_102:
  if ( P )
    ExFreePoolWithTag(P, 0);
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( KeyCommon >= 0 )
  {
    if ( (unsigned int)dword_140C02130 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 0x400000000008LL) )
    {
      v175 = 8LL;
      v118 = 1LL;
      v174 = &v118;
      v68 = (unsigned __int8 *)&unk_140021FC0;
      v100 = KeyCommon;
      v176 = &v100;
      v69 = 6;
      v83 = v82;
      v178 = &v83;
      v180 = &v119;
      v70 = (struct _EVENT_DATA_DESCRIPTOR *)&v173;
      v177 = 4LL;
      v179 = 1LL;
      v119 = 0x1000000LL;
      v181 = 8LL;
LABEL_121:
      tlgWriteAgg((__int64)&dword_140C02130, v68, v67, v69, v70);
    }
  }
  else if ( *(_WORD *)(v20 + 8) || *(_WORD *)(v20 + 10) || *(_BYTE *)(v20 + 394) )
  {
    if ( (unsigned int)dword_140C02130 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_140C02130, 0x400000000008LL) )
      {
        v116 = 1LL;
        v123 = 8LL;
        v73 = *(unsigned __int16 *)(v20 + 10);
        v74 = *(unsigned __int8 *)(v20 + 394);
        v122 = &v116;
        v75 = v20 + 12;
        v87 = v74;
        v124 = &v98;
        v126 = (char *)&v85 + 4;
        v128 = &v86;
        v130 = &v87;
        v139 = v20 + 108;
        v140 = 12 * v73;
        v144 = v20 + 396;
        v147 = &v117;
        v86 = v73;
        v135 = 12 * v72;
        v137 = v20 + 10;
        v98 = KeyCommon;
        v125 = 4LL;
        WORD2(v85) = v72;
        v127 = 2LL;
        v129 = 2LL;
        v131 = 2LL;
        v132 = v20 + 8;
        v133 = 2LL;
        v134 = v20 + 12;
        v136 = 0;
        v138 = 2LL;
        v141 = 0;
        v142 = v20 + 394;
        v143 = 2LL;
        v145 = 8 * v74;
        v146 = 0;
        v117 = 0x1000000LL;
        v148 = 8LL;
        tlgWriteAgg((__int64)&dword_140C02130, (unsigned __int8 *)&byte_140022083, v20 + 394, 0xEu, &v121);
        v71 = dword_140C02130;
      }
      else
      {
        v75 = v20 + 12;
      }
      if ( v71 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 8LL) )
      {
        v99 = KeyCommon;
        v150 = &v99;
        v88 = *(_WORD *)(v20 + 8);
        v152 = &v88;
        v76 = *(unsigned __int16 *)(v20 + 10);
        v154 = &v89;
        v77 = *(unsigned __int8 *)(v20 + 394);
        v161 = 12 * v88;
        v165 = v20 + 108;
        v166 = 12 * v76;
        v90 = v77;
        v170 = v20 + 396;
        v89 = v76;
        v163 = v20 + 10;
        v168 = v20 + 394;
        v171 = 8 * v77;
        v151 = 4LL;
        v153 = 2LL;
        v155 = 2LL;
        v156 = &v90;
        v157 = 2LL;
        v158 = v20 + 8;
        v159 = 2LL;
        v160 = v75;
        v162 = 0;
        v164 = 2LL;
        v167 = 0;
        v169 = 2LL;
        v172 = 0;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C02130,
          (unsigned __int8 *)&dword_140021E84,
          0LL,
          0LL,
          0xCu,
          &v149);
      }
    }
  }
  else if ( (unsigned int)dword_140C02130 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 0x400000000008LL) )
  {
    v114 = 1LL;
    v183 = &v114;
    v68 = (unsigned __int8 *)word_14002202A;
    v184 = 8LL;
    v185 = &v97;
    v69 = 5;
    v97 = KeyCommon;
    v187 = &v115;
    v70 = &v182;
    v186 = 4LL;
    v115 = 0x1000000LL;
    v188 = 8LL;
    goto LABEL_121;
  }
  CmSiFreeMemory((PPRIVILEGE_SET)v20);
  return (unsigned int)KeyCommon;
}
