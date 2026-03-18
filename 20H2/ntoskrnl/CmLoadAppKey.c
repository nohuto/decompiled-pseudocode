/*
 * XREFs of CmLoadAppKey @ 0x1406FFDC0
 * Callers:
 *     CmLoadDifferencingKey @ 0x1406FE1FC (CmLoadDifferencingKey.c)
 * Callees:
 *     CmpLoadKeyCommon @ 0x140203EFC (CmpLoadKeyCommon.c)
 *     CmpAllocateTransientPoolWithTag @ 0x140204C50 (CmpAllocateTransientPoolWithTag.c)
 *     KeInitializeEvent @ 0x14020D960 (KeInitializeEvent.c)
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402111E0 (ExAcquireRundownProtection_0.c)
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140244AF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140244C78 (_tlgKeywordOn.c)
 *     CmSiFreeMemory @ 0x140267C30 (CmSiFreeMemory.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402D5F70 (ExWaitForRundownProtectionRelease.c)
 *     ExInitializePushLock @ 0x1402D6A50 (ExInitializePushLock.c)
 *     ExBlockOnAddressPushLock @ 0x1402F3810 (ExBlockOnAddressPushLock.c)
 *     SetFailureLocation @ 0x1403238E8 (SetFailureLocation.c)
 *     _tlgWriteAgg @ 0x140375C84 (_tlgWriteAgg.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     memset @ 0x140411300 (memset.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x1404EAD18 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     CmpUnlockRegistry @ 0x140616950 (CmpUnlockRegistry.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14061CAE0 (CmpReferenceKeyControlBlockUnsafe.c)
 *     RtlEqualUnicodeString @ 0x14061FE70 (RtlEqualUnicodeString.c)
 *     CmpCmdHiveOpen @ 0x140631E44 (CmpCmdHiveOpen.c)
 *     CmpOpenHiveFile @ 0x14064F528 (CmpOpenHiveFile.c)
 *     CmpConstructNameWithStatus @ 0x140675D10 (CmpConstructNameWithStatus.c)
 *     CmpDetachFromRegistryProcess @ 0x140678E90 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1406790E0 (CmpAttachToRegistryProcess.c)
 *     CmpDeleteHive @ 0x1406A3308 (CmpDeleteHive.c)
 *     CmpGetLastHive @ 0x1406D8514 (CmpGetLastHive.c)
 *     CmpGetNextHive @ 0x140700CD8 (CmpGetNextHive.c)
 *     CmpIsThisSameFile @ 0x140700D80 (CmpIsThisSameFile.c)
 *     UNLOCK_HIVE_LOAD @ 0x1407011E0 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x140701310 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x140701374 (LOCK_HIVE_LOAD.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmLoadAppKey(
        _QWORD *a1,
        UNICODE_STRING *a2,
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
  __int64 LastHive; // r14
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
  void *v35; // rbx
  int v36; // eax
  __int64 v37; // rcx
  NTSTATUS v38; // eax
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  void *i; // rcx
  __int64 NextHive; // rax
  __int64 v44; // rbx
  __int64 v45; // rcx
  __int64 v46; // rcx
  int v47; // ecx
  int v48; // eax
  __int64 v49; // rcx
  _QWORD *v50; // rdi
  struct _KTHREAD *v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // r8
  _QWORD *v56; // rdx
  _QWORD *v57; // rax
  __int64 v58; // r8
  unsigned __int8 *v59; // rdx
  unsigned __int8 v60; // r9
  struct _EVENT_DATA_DESCRIPTOR *v61; // rax
  unsigned int v62; // r9d
  int v63; // r11d
  int v64; // r9d
  int v65; // r10d
  __int64 v66; // r15
  int v67; // r8d
  int v68; // r9d
  int Object; // [rsp+20h] [rbp-E0h]
  char v70; // [rsp+60h] [rbp-A0h] BYREF
  char v71; // [rsp+61h] [rbp-9Fh] BYREF
  char v72; // [rsp+62h] [rbp-9Eh]
  char v73; // [rsp+63h] [rbp-9Dh]
  char v74; // [rsp+64h] [rbp-9Ch] BYREF
  struct _DMA_ADAPTER *v75; // [rsp+68h] [rbp-98h]
  __int64 v76; // [rsp+70h] [rbp-90h] BYREF
  __int16 v77; // [rsp+78h] [rbp-88h] BYREF
  __int16 v78; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned __int16 v79; // [rsp+80h] [rbp-80h] BYREF
  __int16 v80; // [rsp+84h] [rbp-7Ch] BYREF
  __int16 v81; // [rsp+88h] [rbp-78h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-70h] BYREF
  int v83; // [rsp+98h] [rbp-68h] BYREF
  __int64 v84; // [rsp+9Ch] [rbp-64h] BYREF
  int v85; // [rsp+A4h] [rbp-5Ch]
  ULONG_PTR v86; // [rsp+A8h] [rbp-58h] BYREF
  PVOID P; // [rsp+B0h] [rbp-50h] BYREF
  int v88; // [rsp+B8h] [rbp-48h] BYREF
  int v89; // [rsp+BCh] [rbp-44h] BYREF
  int v90; // [rsp+C0h] [rbp-40h] BYREF
  int v91; // [rsp+C4h] [rbp-3Ch] BYREF
  int v92; // [rsp+C8h] [rbp-38h]
  int v93; // [rsp+CCh] [rbp-34h]
  int v94; // [rsp+D0h] [rbp-30h]
  __int64 v95; // [rsp+D8h] [rbp-28h]
  _BYTE v96[80]; // [rsp+E0h] [rbp-20h] BYREF
  PVOID v97; // [rsp+130h] [rbp+30h] BYREF
  PVOID v98; // [rsp+138h] [rbp+38h] BYREF
  __int64 v99; // [rsp+140h] [rbp+40h] BYREF
  __int64 v100; // [rsp+148h] [rbp+48h]
  ULONG_PTR *v101; // [rsp+150h] [rbp+50h]
  _QWORD *v102; // [rsp+158h] [rbp+58h]
  __int64 v103; // [rsp+160h] [rbp+60h]
  __int64 v104; // [rsp+168h] [rbp+68h]
  __int64 v105; // [rsp+170h] [rbp+70h] BYREF
  __int64 v106; // [rsp+178h] [rbp+78h] BYREF
  __int64 v107; // [rsp+180h] [rbp+80h] BYREF
  __int64 v108; // [rsp+188h] [rbp+88h] BYREF
  __int64 v109; // [rsp+190h] [rbp+90h] BYREF
  __int64 v110; // [rsp+198h] [rbp+98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v111[3]; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v112; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 *v113; // [rsp+1F0h] [rbp+F0h]
  __int64 v114; // [rsp+1F8h] [rbp+F8h]
  int *v115; // [rsp+200h] [rbp+100h]
  __int64 v116; // [rsp+208h] [rbp+108h]
  char *v117; // [rsp+210h] [rbp+110h]
  __int64 v118; // [rsp+218h] [rbp+118h]
  __int16 *v119; // [rsp+220h] [rbp+120h]
  __int64 v120; // [rsp+228h] [rbp+128h]
  __int16 *v121; // [rsp+230h] [rbp+130h]
  __int64 v122; // [rsp+238h] [rbp+138h]
  __int64 v123; // [rsp+240h] [rbp+140h]
  __int64 v124; // [rsp+248h] [rbp+148h]
  __int64 v125; // [rsp+250h] [rbp+150h]
  int v126; // [rsp+258h] [rbp+158h]
  int v127; // [rsp+25Ch] [rbp+15Ch]
  __int64 v128; // [rsp+260h] [rbp+160h]
  __int64 v129; // [rsp+268h] [rbp+168h]
  __int64 v130; // [rsp+270h] [rbp+170h]
  int v131; // [rsp+278h] [rbp+178h]
  int v132; // [rsp+27Ch] [rbp+17Ch]
  __int64 v133; // [rsp+280h] [rbp+180h]
  __int64 v134; // [rsp+288h] [rbp+188h]
  __int64 v135; // [rsp+290h] [rbp+190h]
  int v136; // [rsp+298h] [rbp+198h]
  int v137; // [rsp+29Ch] [rbp+19Ch]
  __int64 *v138; // [rsp+2A0h] [rbp+1A0h]
  __int64 v139; // [rsp+2A8h] [rbp+1A8h]
  struct _EVENT_DATA_DESCRIPTOR v140; // [rsp+2B0h] [rbp+1B0h] BYREF
  int *v141; // [rsp+2D0h] [rbp+1D0h]
  __int64 v142; // [rsp+2D8h] [rbp+1D8h]
  unsigned __int16 *v143; // [rsp+2E0h] [rbp+1E0h]
  __int64 v144; // [rsp+2E8h] [rbp+1E8h]
  __int16 *v145; // [rsp+2F0h] [rbp+1F0h]
  __int64 v146; // [rsp+2F8h] [rbp+1F8h]
  __int16 *v147; // [rsp+300h] [rbp+200h]
  __int64 v148; // [rsp+308h] [rbp+208h]
  __int64 v149; // [rsp+310h] [rbp+210h]
  __int64 v150; // [rsp+318h] [rbp+218h]
  __int64 v151; // [rsp+320h] [rbp+220h]
  int v152; // [rsp+328h] [rbp+228h]
  int v153; // [rsp+32Ch] [rbp+22Ch]
  __int64 v154; // [rsp+330h] [rbp+230h]
  __int64 v155; // [rsp+338h] [rbp+238h]
  __int64 v156; // [rsp+340h] [rbp+240h]
  int v157; // [rsp+348h] [rbp+248h]
  int v158; // [rsp+34Ch] [rbp+24Ch]
  __int64 v159; // [rsp+350h] [rbp+250h]
  __int64 v160; // [rsp+358h] [rbp+258h]
  __int64 v161; // [rsp+360h] [rbp+260h]
  int v162; // [rsp+368h] [rbp+268h]
  int v163; // [rsp+36Ch] [rbp+26Ch]
  char v164; // [rsp+370h] [rbp+270h] BYREF
  __int64 *v165; // [rsp+390h] [rbp+290h]
  __int64 v166; // [rsp+398h] [rbp+298h]
  int *v167; // [rsp+3A0h] [rbp+2A0h]
  __int64 v168; // [rsp+3A8h] [rbp+2A8h]
  char *v169; // [rsp+3B0h] [rbp+2B0h]
  __int64 v170; // [rsp+3B8h] [rbp+2B8h]
  __int64 *v171; // [rsp+3C0h] [rbp+2C0h]
  __int64 v172; // [rsp+3C8h] [rbp+2C8h]
  struct _EVENT_DATA_DESCRIPTOR v173; // [rsp+3D0h] [rbp+2D0h] BYREF
  __int64 *v174; // [rsp+3F0h] [rbp+2F0h]
  __int64 v175; // [rsp+3F8h] [rbp+2F8h]
  int *v176; // [rsp+400h] [rbp+300h]
  __int64 v177; // [rsp+408h] [rbp+308h]
  __int64 *v178; // [rsp+410h] [rbp+310h]
  __int64 v179; // [rsp+418h] [rbp+318h]

  v9 = a3;
  v103 = a5;
  v102 = a8;
  v92 = a3;
  v101 = a9;
  v104 = a4;
  v95 = (__int64)a6;
  v83 = 0;
  Handle = 0LL;
  memset(v96, 0, sizeof(v96));
  v12 = (unsigned __int16 *)a1[2];
  v70 = 0;
  memset(v111, 0, sizeof(v111));
  v72 = 0;
  v13 = 0;
  v73 = 0;
  LastHive = 0LL;
  v15 = *v12;
  P = 0LL;
  v100 = 0LL;
  v75 = 0LL;
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
  v93 = v9 & 0x20;
  v22 = (v93 != 0 ? 119078913 : 51970049) | 0x8000000;
  if ( (v9 & 0x80u) == 0 )
    v22 = v93 != 0 ? 119078913 : 51970049;
  v23 = v22 | 0x10000000;
  if ( (v9 & 0x200) == 0 )
    v23 = v22;
  v85 = v23;
  v94 = v9 & 0x2000;
  v24 = (v94 != 0) | 0x20;
  if ( (v9 & 0x8000) == 0 )
    v24 = (v9 & 0x2000) != 0;
  HIDWORD(v84) = v24;
  v25 = CmpOpenHiveFile(a2, 0, &Handle, &v83, 8u, a6, 0LL, 0LL, (__int64)&P);
  KeyCommon = v25;
  if ( v25 == -1073741772 )
  {
    v72 = 1;
    *(_QWORD *)&v96[32] = a2;
    v96[40] = 1;
  }
  else
  {
    if ( v25 < 0 )
    {
      SetFailureLocation(v20, 0, 32, v25, 16);
      goto LABEL_102;
    }
    v97 = 0LL;
    v27 = ObReferenceObjectByHandle(Handle, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &v97, 0LL);
    v28 = (struct _DMA_ADAPTER *)v97;
    KeyCommon = v27;
    v75 = (struct _DMA_ADAPTER *)v97;
    ZwClose(Handle);
    if ( KeyCommon < 0 )
    {
      SetFailureLocation(v20, 0, 32, KeyCommon, 32);
      goto LABEL_100;
    }
    *(_QWORD *)&v96[32] = v28[2].DmaOperations;
    v96[40] = 0;
  }
  KeInitializeEvent((PRKEVENT)&v96[48], NotificationEvent, 0);
  ExInitializePushLock((PKSPIN_LOCK)&v96[72]);
  *(_QWORD *)&v96[24] = &v96[16];
  *(_QWORD *)&v96[16] = &v96[16];
  v29 = KeGetCurrentThread();
  --v29->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpAppHiveLoadListLock, 0LL);
  v30 = CmpAppHiveLoadList;
  if ( (__int64 *)CmpAppHiveLoadList == &CmpAppHiveLoadList )
  {
LABEL_32:
    if ( *(__int64 **)qword_140C47EE8 == &CmpAppHiveLoadList )
    {
      *(_QWORD *)v96 = &CmpAppHiveLoadList;
      *(_QWORD *)&v96[8] = qword_140C47EE8;
      *(_QWORD *)qword_140C47EE8 = v96;
      qword_140C47EE8 = (__int64)v96;
      ExReleasePushLockEx((ULONG_PTR)&CmpAppHiveLoadListLock, 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      goto LABEL_34;
    }
    goto LABEL_123;
  }
  v31 = *(_QWORD *)&v96[32];
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
  *(_QWORD *)&v96[24] = v32;
  *(_QWORD *)&v96[16] = v33;
  *v32 = &v96[16];
  *(_QWORD *)(v33 + 8) = &v96[16];
  v34 = *(struct _EX_RUNDOWN_REF **)&v96[24];
  ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)&v96[24] + 56LL));
  ExReleasePushLockEx((ULONG_PTR)&CmpAppHiveLoadListLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  KeWaitForSingleObject(&v34[4], Executive, 0, 0, 0LL);
  ExReleaseRundownProtection_0(v34 + 7);
LABEL_34:
  v35 = (void *)v95;
  v86 = 0LL;
  v71 = 1;
  v36 = CmpCmdHiveOpen(a2, 1, (__int64)&v71, (__int64)&v86, v85, SBYTE4(v84), v95, (__int64)&v70, v20);
  while ( 1 )
  {
    KeyCommon = v36;
    if ( !v36 )
    {
      KeyCommon = CmpLoadKeyCommon(v86, a1, v92, v104, 0LL, v103, a7, v101, v71, v70, v20);
      goto LABEL_89;
    }
    if ( v36 != -1073741757 || v93 || v13 )
    {
      SetFailureLocation(v20, 0, 32, v36, 48);
      goto LABEL_89;
    }
    if ( v72 )
    {
      KeyCommon = CmpOpenHiveFile(a2, 0, &Handle, &v83, 8u, v35, 0LL, 0LL, (__int64)&P);
      if ( KeyCommon < 0 )
      {
        Object = 64;
        if ( KeyCommon == -1073741772 )
          KeyCommon = -1073741757;
LABEL_77:
        SetFailureLocation(v20, 0, 32, KeyCommon, Object);
        goto LABEL_89;
      }
      v98 = 0LL;
      v38 = ObReferenceObjectByHandle(Handle, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &v98, 0LL);
      v28 = (struct _DMA_ADAPTER *)v98;
      KeyCommon = v38;
      v75 = (struct _DMA_ADAPTER *)v98;
      ZwClose(Handle);
      if ( KeyCommon < 0 )
      {
        SetFailureLocation(v20, 0, 32, KeyCommon, 80);
        goto LABEL_90;
      }
      v35 = (void *)v95;
    }
    LOCK_HIVE_LOAD(v37);
    LOBYTE(v39) = 1;
    CmpLockRegistryFreezeAware(v39);
    LastHive = CmpGetLastHive();
    if ( LastHive )
      break;
LABEL_73:
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    v71 = 1;
    v70 = 0;
    v86 = 0LL;
    v36 = CmpCmdHiveOpen(a2, 1, (__int64)&v71, (__int64)&v86, v85, SBYTE4(v84), (__int64)v35, (__int64)&v70, v20);
    v13 = 1;
  }
LABEL_44:
  LODWORD(v76) = CmpActiveAppHiveUnloadCount;
  while ( (_DWORD)v76 )
  {
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    ExBlockOnAddressPushLock((__int64)&CmpActiveAppHiveUnloadEvent, &CmpActiveAppHiveUnloadCount, &v76, 4uLL, 0LL);
    LOCK_HIVE_LOAD(v40);
    LOBYTE(v41) = 1;
    CmpLockRegistryFreezeAware(v41);
    LODWORD(v76) = CmpActiveAppHiveUnloadCount;
  }
  for ( i = 0LL; ; i = (void *)v44 )
  {
    NextHive = CmpGetNextHive(i);
    v44 = NextHive;
    if ( !NextHive )
      break;
    LODWORD(v84) = *(_DWORD *)(NextHive + 4808);
    if ( (_DWORD)v84 )
    {
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD();
      ExBlockOnAddressPushLock(v44 + 4816, (_QWORD *)(v44 + 4808), &v84, 4uLL, 0LL);
      LOCK_HIVE_LOAD(v45);
      LOBYTE(v46) = 1;
      CmpLockRegistryFreezeAware(v46);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v44 + 4272), 0xFFFFFFFF) == 1 )
        CmpDeleteHive((_QWORD *)v44);
      if ( v44 == LastHive )
        break;
      goto LABEL_44;
    }
    if ( *(_QWORD *)(NextHive + 1536) && (unsigned __int8)CmpIsThisSameFile(v75) )
    {
      v47 = *(_DWORD *)(v44 + 4152);
      v48 = *(_DWORD *)(v44 + 160) & 0x8000;
      if ( (v47 & 0x20) == 0 || (v47 & 0x40) != 0 )
      {
        CmpUnlockRegistry();
        UNLOCK_HIVE_LOAD();
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v44 + 4272), 0xFFFFFFFF) == 1 )
          CmpDeleteHive((_QWORD *)v44);
        KeyCommon = -1073741757;
        SetFailureLocation(v20, 0, 32, -1073741757, 96);
        goto LABEL_89;
      }
      if ( v94 )
      {
        if ( !v48 && !CmpCheckHivePrimaryFileReadWriteAccess(P) )
        {
          CmpUnlockRegistry();
          UNLOCK_HIVE_LOAD();
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v44 + 4272), 0xFFFFFFFF) == 1 )
            CmpDeleteHive((_QWORD *)v44);
          KeyCommon = -1073741790;
          Object = 128;
          goto LABEL_77;
        }
      }
      else if ( v48 )
      {
        CmpUnlockRegistry();
        UNLOCK_HIVE_LOAD();
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v44 + 4272), 0xFFFFFFFF) == 1 )
          CmpDeleteHive((_QWORD *)v44);
        KeyCommon = -1073741757;
        SetFailureLocation(v20, 0, 32, -1073741757, 112);
        goto LABEL_89;
      }
      CmpAttachToRegistryProcess((__int64)v111);
      v49 = *(_QWORD *)(v44 + 2928);
      v100 = v44;
      v99 = 0LL;
      CmpConstructNameWithStatus(v49, &v99);
      v50 = v102;
      *v102 = v99;
      CmpDetachFromRegistryProcess((__int64)v111);
      if ( !*v50 )
      {
        CmpUnlockRegistry();
        UNLOCK_HIVE_LOAD();
        KeyCommon = -1073741670;
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v44 + 4272), 0xFFFFFFFF) == 1 )
          CmpDeleteHive((_QWORD *)v44);
        goto LABEL_89;
      }
      CmpReferenceKeyControlBlockUnsafe(*(volatile signed __int64 **)(v44 + 2928));
      *v101 = *(_QWORD *)(v44 + 2928);
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD();
      KeyCommon = 0;
LABEL_69:
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v44 + 4272), 0xFFFFFFFF) == 1 )
        CmpDeleteHive((_QWORD *)v44);
      break;
    }
    if ( v44 == LastHive )
      goto LABEL_69;
  }
  if ( !v100 )
  {
    v35 = (void *)v95;
    goto LABEL_73;
  }
  v73 = 1;
LABEL_89:
  v28 = v75;
LABEL_90:
  v51 = KeGetCurrentThread();
  --v51->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpAppHiveLoadListLock, 0LL);
  v52 = *(_QWORD *)v96;
  v53 = *(_QWORD *)&v96[8];
  if ( *(_BYTE **)(*(_QWORD *)v96 + 8LL) != v96 || **(_BYTE ***)&v96[8] != v96 )
    goto LABEL_123;
  **(_QWORD **)&v96[8] = *(_QWORD *)v96;
  *(_QWORD *)(v52 + 8) = v53;
  v54 = *(_QWORD *)&v96[16];
  if ( *(_BYTE **)&v96[16] == &v96[16] )
    goto LABEL_97;
  v55 = *(_QWORD *)&v96[24];
  v56 = (_QWORD *)(*(_QWORD *)&v96[16] - 16LL);
  if ( *(_BYTE **)(*(_QWORD *)&v96[16] + 8LL) != &v96[16]
    || **(_BYTE ***)&v96[24] != &v96[16]
    || (**(_QWORD **)&v96[24] = *(_QWORD *)&v96[16],
        *(_QWORD *)(v54 + 8) = v55,
        v57 = (_QWORD *)qword_140C47EE8,
        *(__int64 **)qword_140C47EE8 != &CmpAppHiveLoadList) )
  {
LABEL_123:
    __fastfail(3u);
  }
  *v56 = &CmpAppHiveLoadList;
  v56[1] = v57;
  *v57 = v56;
  qword_140C47EE8 = (__int64)v56;
LABEL_97:
  ExReleasePushLockEx((ULONG_PTR)&CmpAppHiveLoadListLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  KeSetEvent((PRKEVENT)&v96[48], 0, 0);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&v96[72]);
  if ( LastHive && _InterlockedExchangeAdd((volatile signed __int32 *)(LastHive + 4272), 0xFFFFFFFF) == 1 )
    CmpDeleteHive((_QWORD *)LastHive);
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
      v166 = 8LL;
      v109 = 1LL;
      v165 = &v109;
      v59 = (unsigned __int8 *)&unk_140022120;
      v91 = KeyCommon;
      v167 = &v91;
      v60 = 6;
      v74 = v73;
      v169 = &v74;
      v171 = &v110;
      v61 = (struct _EVENT_DATA_DESCRIPTOR *)&v164;
      v168 = 4LL;
      v170 = 1LL;
      v110 = 0x1000000LL;
      v172 = 8LL;
LABEL_121:
      tlgWriteAgg((__int64)&dword_140C02130, v59, v58, v60, v61);
    }
  }
  else if ( *(_WORD *)(v20 + 8) || *(_WORD *)(v20 + 10) || *(_BYTE *)(v20 + 394) )
  {
    if ( (unsigned int)dword_140C02130 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_140C02130, 0x400000000008LL) )
      {
        v107 = 1LL;
        v114 = 8LL;
        v64 = *(unsigned __int16 *)(v20 + 10);
        v65 = *(unsigned __int8 *)(v20 + 394);
        v113 = &v107;
        v66 = v20 + 12;
        v78 = v65;
        v115 = &v89;
        v117 = (char *)&v76 + 4;
        v119 = &v77;
        v121 = &v78;
        v130 = v20 + 108;
        v131 = 12 * v64;
        v135 = v20 + 396;
        v138 = &v108;
        v77 = v64;
        v126 = 12 * v63;
        v128 = v20 + 10;
        v89 = KeyCommon;
        v116 = 4LL;
        WORD2(v76) = v63;
        v118 = 2LL;
        v120 = 2LL;
        v122 = 2LL;
        v123 = v20 + 8;
        v124 = 2LL;
        v125 = v20 + 12;
        v127 = 0;
        v129 = 2LL;
        v132 = 0;
        v133 = v20 + 394;
        v134 = 2LL;
        v136 = 8 * v65;
        v137 = 0;
        v108 = 0x1000000LL;
        v139 = 8LL;
        tlgWriteAgg((__int64)&dword_140C02130, (unsigned __int8 *)&byte_1400221E3, v20 + 394, 0xEu, &v112);
        v62 = dword_140C02130;
      }
      else
      {
        v66 = v20 + 12;
      }
      if ( v62 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 8LL) )
      {
        v90 = KeyCommon;
        v141 = &v90;
        v79 = *(_WORD *)(v20 + 8);
        v143 = &v79;
        v67 = *(unsigned __int16 *)(v20 + 10);
        v145 = &v80;
        v68 = *(unsigned __int8 *)(v20 + 394);
        v152 = 12 * v79;
        v156 = v20 + 108;
        v157 = 12 * v67;
        v81 = v68;
        v161 = v20 + 396;
        v80 = v67;
        v154 = v20 + 10;
        v159 = v20 + 394;
        v162 = 8 * v68;
        v142 = 4LL;
        v144 = 2LL;
        v146 = 2LL;
        v147 = &v81;
        v148 = 2LL;
        v149 = v20 + 8;
        v150 = 2LL;
        v151 = v66;
        v153 = 0;
        v155 = 2LL;
        v158 = 0;
        v160 = 2LL;
        v163 = 0;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C02130,
          (unsigned __int8 *)&dword_140021FE4,
          0LL,
          0LL,
          0xCu,
          &v140);
      }
    }
  }
  else if ( (unsigned int)dword_140C02130 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 0x400000000008LL) )
  {
    v105 = 1LL;
    v174 = &v105;
    v59 = (unsigned __int8 *)word_14002218A;
    v175 = 8LL;
    v176 = &v88;
    v60 = 5;
    v88 = KeyCommon;
    v178 = &v106;
    v61 = &v173;
    v177 = 4LL;
    v106 = 0x1000000LL;
    v179 = 8LL;
    goto LABEL_121;
  }
  CmSiFreeMemory((PPRIVILEGE_SET)v20);
  return (unsigned int)KeyCommon;
}
