/*
 * XREFs of CmLoadAppKey @ 0x14066FEEC
 * Callers:
 *     CmLoadDifferencingKey @ 0x14066E58C (CmLoadDifferencingKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140201A30 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x140206F90 (CmpAllocateTransientPoolWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14025FAE0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402605BC (_tlgKeywordOn.c)
 *     ExInitializePushLock @ 0x140278EE0 (ExInitializePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402797E0 (ExWaitForRundownProtectionRelease.c)
 *     ExReleaseRundownProtection_0 @ 0x14027C4F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14027C9B0 (ExAcquireRundownProtection_0.c)
 *     ExBlockOnAddressPushLock @ 0x14029CC60 (ExBlockOnAddressPushLock.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     SetFailureLocation @ 0x1402C4808 (SetFailureLocation.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14034AE90 (ExReleasePushLockEx.c)
 *     KeInitializeEvent @ 0x1403538F0 (KeInitializeEvent.c)
 *     CmpLoadKeyCommon @ 0x14036195C (CmpLoadKeyCommon.c)
 *     _tlgWriteAgg @ 0x140375E94 (_tlgWriteAgg.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA580 (ZwClose.c)
 *     memset @ 0x140414200 (memset.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x1404EC8A8 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1405EF620 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpConstructNameWithStatus @ 0x1405F2FF0 (CmpConstructNameWithStatus.c)
 *     CmpDetachFromRegistryProcess @ 0x1405F613C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     RtlEqualUnicodeString @ 0x140601410 (RtlEqualUnicodeString.c)
 *     CmpCmdHiveOpen @ 0x140603588 (CmpCmdHiveOpen.c)
 *     CmpGetNextHive @ 0x140670E04 (CmpGetNextHive.c)
 *     CmpIsThisSameFile @ 0x140670EAC (CmpIsThisSameFile.c)
 *     CmpOpenHiveFile @ 0x1406718C8 (CmpOpenHiveFile.c)
 *     UNLOCK_HIVE_LOAD @ 0x1406725C0 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x1406726F0 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x140672754 (LOCK_HIVE_LOAD.c)
 *     CmpGetLastHive @ 0x1406B6A70 (CmpGetLastHive.c)
 *     ObReferenceObjectByHandle @ 0x1406F0BC0 (ObReferenceObjectByHandle.c)
 *     CmpUnlockRegistry @ 0x1406F5ED0 (CmpUnlockRegistry.c)
 *     CmpDeleteHive @ 0x14071C6F4 (CmpDeleteHive.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
  __int64 v35; // rbx
  int v36; // eax
  NTSTATUS v37; // eax
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx
  void *i; // rcx
  __int64 NextHive; // rax
  __int64 v45; // rbx
  __int64 v46; // rcx
  __int64 v47; // r8
  _DWORD *v48; // r9
  __int64 v49; // rcx
  __int64 v50; // rcx
  int v51; // eax
  __int64 v52; // rcx
  __int64 v53; // rcx
  _QWORD *v54; // rdi
  __int64 v55; // rdx
  __int64 v56; // rcx
  ULONG_PTR *v57; // rcx
  __int64 v58; // rdx
  struct _KTHREAD *v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // r8
  _QWORD *v64; // rdx
  _QWORD *v65; // rax
  __int64 v66; // r8
  unsigned __int8 *v67; // rdx
  unsigned __int8 v68; // r9
  struct _EVENT_DATA_DESCRIPTOR *v69; // rax
  unsigned int v70; // r9d
  int v71; // r11d
  int v72; // r9d
  int v73; // r10d
  __int64 v74; // r15
  int v75; // r8d
  int v76; // r9d
  int Object; // [rsp+20h] [rbp-E0h]
  char v78; // [rsp+60h] [rbp-A0h] BYREF
  char v79; // [rsp+61h] [rbp-9Fh] BYREF
  char v80; // [rsp+62h] [rbp-9Eh]
  char v81; // [rsp+63h] [rbp-9Dh]
  char v82; // [rsp+64h] [rbp-9Ch] BYREF
  struct _DMA_ADAPTER *v83; // [rsp+68h] [rbp-98h]
  __int64 v84; // [rsp+70h] [rbp-90h] BYREF
  __int16 v85; // [rsp+78h] [rbp-88h] BYREF
  __int16 v86; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned __int16 v87; // [rsp+80h] [rbp-80h] BYREF
  __int16 v88; // [rsp+84h] [rbp-7Ch] BYREF
  __int16 v89; // [rsp+88h] [rbp-78h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-70h]
  int v91; // [rsp+98h] [rbp-68h]
  __int64 v92; // [rsp+9Ch] [rbp-64h] BYREF
  int v93; // [rsp+A4h] [rbp-5Ch]
  char *v94; // [rsp+A8h] [rbp-58h] BYREF
  PVOID P; // [rsp+B0h] [rbp-50h] BYREF
  int v96; // [rsp+B8h] [rbp-48h] BYREF
  int v97; // [rsp+BCh] [rbp-44h] BYREF
  int v98; // [rsp+C0h] [rbp-40h] BYREF
  int v99; // [rsp+C4h] [rbp-3Ch] BYREF
  int v100; // [rsp+C8h] [rbp-38h]
  int v101; // [rsp+CCh] [rbp-34h]
  int v102; // [rsp+D0h] [rbp-30h]
  __int64 v103; // [rsp+D8h] [rbp-28h]
  _BYTE v104[80]; // [rsp+E0h] [rbp-20h] BYREF
  PVOID v105; // [rsp+130h] [rbp+30h] BYREF
  PVOID v106; // [rsp+138h] [rbp+38h] BYREF
  __int64 v107; // [rsp+140h] [rbp+40h] BYREF
  __int64 v108; // [rsp+148h] [rbp+48h]
  ULONG_PTR *v109; // [rsp+150h] [rbp+50h]
  _QWORD *v110; // [rsp+158h] [rbp+58h]
  __int64 v111; // [rsp+160h] [rbp+60h]
  __int64 v112; // [rsp+168h] [rbp+68h]
  __int64 v113; // [rsp+170h] [rbp+70h] BYREF
  __int64 v114; // [rsp+178h] [rbp+78h] BYREF
  __int64 v115; // [rsp+180h] [rbp+80h] BYREF
  __int64 v116; // [rsp+188h] [rbp+88h] BYREF
  __int64 v117; // [rsp+190h] [rbp+90h] BYREF
  __int64 v118; // [rsp+198h] [rbp+98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v119[3]; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v120; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 *v121; // [rsp+1F0h] [rbp+F0h]
  __int64 v122; // [rsp+1F8h] [rbp+F8h]
  int *v123; // [rsp+200h] [rbp+100h]
  __int64 v124; // [rsp+208h] [rbp+108h]
  char *v125; // [rsp+210h] [rbp+110h]
  __int64 v126; // [rsp+218h] [rbp+118h]
  __int16 *v127; // [rsp+220h] [rbp+120h]
  __int64 v128; // [rsp+228h] [rbp+128h]
  __int16 *v129; // [rsp+230h] [rbp+130h]
  __int64 v130; // [rsp+238h] [rbp+138h]
  __int64 v131; // [rsp+240h] [rbp+140h]
  __int64 v132; // [rsp+248h] [rbp+148h]
  __int64 v133; // [rsp+250h] [rbp+150h]
  int v134; // [rsp+258h] [rbp+158h]
  int v135; // [rsp+25Ch] [rbp+15Ch]
  __int64 v136; // [rsp+260h] [rbp+160h]
  __int64 v137; // [rsp+268h] [rbp+168h]
  __int64 v138; // [rsp+270h] [rbp+170h]
  int v139; // [rsp+278h] [rbp+178h]
  int v140; // [rsp+27Ch] [rbp+17Ch]
  __int64 v141; // [rsp+280h] [rbp+180h]
  __int64 v142; // [rsp+288h] [rbp+188h]
  __int64 v143; // [rsp+290h] [rbp+190h]
  int v144; // [rsp+298h] [rbp+198h]
  int v145; // [rsp+29Ch] [rbp+19Ch]
  __int64 *v146; // [rsp+2A0h] [rbp+1A0h]
  __int64 v147; // [rsp+2A8h] [rbp+1A8h]
  struct _EVENT_DATA_DESCRIPTOR v148; // [rsp+2B0h] [rbp+1B0h] BYREF
  int *v149; // [rsp+2D0h] [rbp+1D0h]
  __int64 v150; // [rsp+2D8h] [rbp+1D8h]
  unsigned __int16 *v151; // [rsp+2E0h] [rbp+1E0h]
  __int64 v152; // [rsp+2E8h] [rbp+1E8h]
  __int16 *v153; // [rsp+2F0h] [rbp+1F0h]
  __int64 v154; // [rsp+2F8h] [rbp+1F8h]
  __int16 *v155; // [rsp+300h] [rbp+200h]
  __int64 v156; // [rsp+308h] [rbp+208h]
  __int64 v157; // [rsp+310h] [rbp+210h]
  __int64 v158; // [rsp+318h] [rbp+218h]
  __int64 v159; // [rsp+320h] [rbp+220h]
  int v160; // [rsp+328h] [rbp+228h]
  int v161; // [rsp+32Ch] [rbp+22Ch]
  __int64 v162; // [rsp+330h] [rbp+230h]
  __int64 v163; // [rsp+338h] [rbp+238h]
  __int64 v164; // [rsp+340h] [rbp+240h]
  int v165; // [rsp+348h] [rbp+248h]
  int v166; // [rsp+34Ch] [rbp+24Ch]
  __int64 v167; // [rsp+350h] [rbp+250h]
  __int64 v168; // [rsp+358h] [rbp+258h]
  __int64 v169; // [rsp+360h] [rbp+260h]
  int v170; // [rsp+368h] [rbp+268h]
  int v171; // [rsp+36Ch] [rbp+26Ch]
  char v172; // [rsp+370h] [rbp+270h] BYREF
  __int64 *v173; // [rsp+390h] [rbp+290h]
  __int64 v174; // [rsp+398h] [rbp+298h]
  int *v175; // [rsp+3A0h] [rbp+2A0h]
  __int64 v176; // [rsp+3A8h] [rbp+2A8h]
  char *v177; // [rsp+3B0h] [rbp+2B0h]
  __int64 v178; // [rsp+3B8h] [rbp+2B8h]
  __int64 *v179; // [rsp+3C0h] [rbp+2C0h]
  __int64 v180; // [rsp+3C8h] [rbp+2C8h]
  struct _EVENT_DATA_DESCRIPTOR v181; // [rsp+3D0h] [rbp+2D0h] BYREF
  __int64 *v182; // [rsp+3F0h] [rbp+2F0h]
  __int64 v183; // [rsp+3F8h] [rbp+2F8h]
  int *v184; // [rsp+400h] [rbp+300h]
  __int64 v185; // [rsp+408h] [rbp+308h]
  __int64 *v186; // [rsp+410h] [rbp+310h]
  __int64 v187; // [rsp+418h] [rbp+318h]

  v9 = a3;
  v111 = a5;
  v110 = a8;
  v100 = a3;
  v109 = a9;
  v112 = a4;
  v103 = (__int64)a6;
  v91 = 0;
  Handle = 0LL;
  memset(v104, 0, sizeof(v104));
  v12 = (unsigned __int16 *)a1[2];
  v78 = 0;
  memset(v119, 0, sizeof(v119));
  v80 = 0;
  v13 = 0;
  v81 = 0;
  LastHive = 0LL;
  v15 = *v12;
  P = 0LL;
  v108 = 0LL;
  v83 = 0LL;
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
  v101 = v9 & 0x20;
  v22 = (v101 != 0 ? 119078913 : 51970049) | 0x8000000;
  if ( (v9 & 0x80u) == 0 )
    v22 = v101 != 0 ? 119078913 : 51970049;
  v23 = v22 | 0x10000000;
  if ( (v9 & 0x200) == 0 )
    v23 = v22;
  v93 = v23;
  v102 = v9 & 0x2000;
  v24 = (v102 != 0) | 0x20;
  if ( (v9 & 0x8000) == 0 )
    v24 = (v9 & 0x2000) != 0;
  HIDWORD(v92) = v24;
  v25 = CmpOpenHiveFile(a2, 8, (__int64)a6, 0LL, 0LL, (__int64)&P);
  KeyCommon = v25;
  if ( v25 == -1073741772 )
  {
    v80 = 1;
    *(_QWORD *)&v104[32] = a2;
    v104[40] = 1;
  }
  else
  {
    if ( v25 < 0 )
    {
      SetFailureLocation(v20, 0, 32, v25, 16);
      goto LABEL_102;
    }
    v105 = 0LL;
    v27 = ObReferenceObjectByHandle(Handle, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &v105, 0LL);
    v28 = (struct _DMA_ADAPTER *)v105;
    KeyCommon = v27;
    v83 = (struct _DMA_ADAPTER *)v105;
    ZwClose(Handle);
    if ( KeyCommon < 0 )
    {
      SetFailureLocation(v20, 0, 32, KeyCommon, 32);
      goto LABEL_100;
    }
    *(_QWORD *)&v104[32] = v28[2].DmaOperations;
    v104[40] = 0;
  }
  KeInitializeEvent((PRKEVENT)&v104[48], NotificationEvent, 0);
  ExInitializePushLock((PKSPIN_LOCK)&v104[72]);
  *(_QWORD *)&v104[24] = &v104[16];
  *(_QWORD *)&v104[16] = &v104[16];
  v29 = KeGetCurrentThread();
  --v29->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpAppHiveLoadListLock, 0LL);
  v30 = CmpAppHiveLoadList;
  if ( (__int64 *)CmpAppHiveLoadList == &CmpAppHiveLoadList )
  {
LABEL_32:
    if ( *(__int64 **)qword_140C48018 == &CmpAppHiveLoadList )
    {
      *(_QWORD *)v104 = &CmpAppHiveLoadList;
      *(_QWORD *)&v104[8] = qword_140C48018;
      *(_QWORD *)qword_140C48018 = v104;
      qword_140C48018 = (__int64)v104;
      ExReleasePushLockEx((ULONG_PTR)&CmpAppHiveLoadListLock, 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      goto LABEL_34;
    }
    goto LABEL_123;
  }
  v31 = *(_QWORD *)&v104[32];
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
  *(_QWORD *)&v104[24] = v32;
  *(_QWORD *)&v104[16] = v33;
  *v32 = &v104[16];
  *(_QWORD *)(v33 + 8) = &v104[16];
  v34 = *(struct _EX_RUNDOWN_REF **)&v104[24];
  ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)&v104[24] + 56LL));
  ExReleasePushLockEx((ULONG_PTR)&CmpAppHiveLoadListLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  KeWaitForSingleObject(&v34[4], Executive, 0, 0, 0LL);
  ExReleaseRundownProtection_0(v34 + 7);
LABEL_34:
  v35 = v103;
  v94 = 0LL;
  v79 = 1;
  v36 = CmpCmdHiveOpen(a2, 1, (__int64)&v79, (__int64)&v94, v93, SBYTE4(v92), v103, (__int64)&v78, v20);
  while ( 1 )
  {
    KeyCommon = v36;
    if ( !v36 )
    {
      KeyCommon = CmpLoadKeyCommon(v94, a1, v100, v112, 0LL, v111, a7, v109, v79, v78, v20);
      goto LABEL_89;
    }
    if ( v36 != -1073741757 || v101 || v13 )
    {
      SetFailureLocation(v20, 0, 32, v36, 48);
      goto LABEL_89;
    }
    if ( v80 )
    {
      KeyCommon = CmpOpenHiveFile(a2, 8, v35, 0LL, 0LL, (__int64)&P);
      if ( KeyCommon < 0 )
      {
        Object = 64;
        if ( KeyCommon == -1073741772 )
          KeyCommon = -1073741757;
LABEL_77:
        SetFailureLocation(v20, 0, 32, KeyCommon, Object);
        goto LABEL_89;
      }
      v106 = 0LL;
      v37 = ObReferenceObjectByHandle(Handle, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &v106, 0LL);
      v28 = (struct _DMA_ADAPTER *)v106;
      KeyCommon = v37;
      v83 = (struct _DMA_ADAPTER *)v106;
      ZwClose(Handle);
      if ( KeyCommon < 0 )
      {
        SetFailureLocation(v20, 0, 32, KeyCommon, 80);
        goto LABEL_90;
      }
      v35 = v103;
    }
    LOCK_HIVE_LOAD();
    LOBYTE(v38) = 1;
    CmpLockRegistryFreezeAware(v38);
    LastHive = (volatile signed __int32 *)CmpGetLastHive();
    if ( LastHive )
      break;
LABEL_73:
    CmpUnlockRegistry(v40, v39);
    UNLOCK_HIVE_LOAD();
    v79 = 1;
    v78 = 0;
    v94 = 0LL;
    v36 = CmpCmdHiveOpen(a2, 1, (__int64)&v79, (__int64)&v94, v93, SBYTE4(v92), v35, (__int64)&v78, v20);
    v13 = 1;
  }
LABEL_44:
  v41 = (unsigned int)CmpActiveAppHiveUnloadCount;
  LODWORD(v84) = CmpActiveAppHiveUnloadCount;
  while ( (_DWORD)v84 )
  {
    CmpUnlockRegistry(v41, v39);
    UNLOCK_HIVE_LOAD();
    ExBlockOnAddressPushLock((__int64)&CmpActiveAppHiveUnloadEvent, &CmpActiveAppHiveUnloadCount, &v84, 4uLL, 0LL);
    LOCK_HIVE_LOAD();
    LOBYTE(v42) = 1;
    CmpLockRegistryFreezeAware(v42);
    LODWORD(v84) = CmpActiveAppHiveUnloadCount;
  }
  for ( i = 0LL; ; i = (void *)v45 )
  {
    NextHive = CmpGetNextHive(i);
    v45 = NextHive;
    if ( !NextHive )
      break;
    v46 = *(unsigned int *)(NextHive + 4808);
    LODWORD(v92) = v46;
    if ( (_DWORD)v46 )
    {
      CmpUnlockRegistry(v46, v39);
      UNLOCK_HIVE_LOAD();
      ExBlockOnAddressPushLock(v45 + 4816, (_QWORD *)(v45 + 4808), &v92, 4uLL, 0LL);
      LOCK_HIVE_LOAD();
      LOBYTE(v49) = 1;
      CmpLockRegistryFreezeAware(v49);
      v40 = 0xFFFFFFFFLL;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v45 + 4272), 0xFFFFFFFF) == 1 )
        CmpDeleteHive((PVOID)v45);
      if ( (volatile signed __int32 *)v45 == LastHive )
        break;
      goto LABEL_44;
    }
    v39 = *(_QWORD *)(NextHive + 1536);
    if ( v39 && (unsigned __int8)CmpIsThisSameFile(v83) )
    {
      v50 = *(unsigned int *)(v45 + 4152);
      v51 = *(_DWORD *)(v45 + 160) & 0x8000;
      if ( (v50 & 0x20) == 0 || (v50 & 0x40) != 0 )
      {
        CmpUnlockRegistry(v50, v39);
        UNLOCK_HIVE_LOAD();
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v45 + 4272), 0xFFFFFFFF) == 1 )
          CmpDeleteHive((PVOID)v45);
        KeyCommon = -1073741757;
        SetFailureLocation(v20, 0, 32, -1073741757, 96);
        goto LABEL_89;
      }
      if ( v102 )
      {
        if ( !v51 && !CmpCheckHivePrimaryFileReadWriteAccess(P) )
        {
          CmpUnlockRegistry(v52, v39);
          UNLOCK_HIVE_LOAD();
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v45 + 4272), 0xFFFFFFFF) == 1 )
            CmpDeleteHive((PVOID)v45);
          KeyCommon = -1073741790;
          Object = 128;
          goto LABEL_77;
        }
      }
      else if ( v51 )
      {
        CmpUnlockRegistry(v50, v39);
        UNLOCK_HIVE_LOAD();
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v45 + 4272), 0xFFFFFFFF) == 1 )
          CmpDeleteHive((PVOID)v45);
        KeyCommon = -1073741757;
        SetFailureLocation(v20, 0, 32, -1073741757, 112);
        goto LABEL_89;
      }
      CmpAttachToRegistryProcess((__int64)v119, v39, v47, v48);
      v53 = *(_QWORD *)(v45 + 2928);
      v108 = v45;
      v107 = 0LL;
      CmpConstructNameWithStatus(v53, &v107);
      v54 = v110;
      *v110 = v107;
      CmpDetachFromRegistryProcess((__int64)v119);
      if ( !*v54 )
      {
        CmpUnlockRegistry(v56, v55);
        UNLOCK_HIVE_LOAD();
        KeyCommon = -1073741670;
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v45 + 4272), 0xFFFFFFFF) == 1 )
          CmpDeleteHive((PVOID)v45);
        goto LABEL_89;
      }
      CmpReferenceKeyControlBlockUnsafe(*(volatile signed __int64 **)(v45 + 2928));
      v57 = v109;
      *v109 = *(_QWORD *)(v45 + 2928);
      CmpUnlockRegistry(v57, v58);
      UNLOCK_HIVE_LOAD();
      KeyCommon = 0;
LABEL_69:
      v40 = 0xFFFFFFFFLL;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v45 + 4272), 0xFFFFFFFF) == 1 )
        CmpDeleteHive((PVOID)v45);
      break;
    }
    if ( (volatile signed __int32 *)v45 == LastHive )
      goto LABEL_69;
  }
  if ( !v108 )
  {
    v35 = v103;
    goto LABEL_73;
  }
  v81 = 1;
LABEL_89:
  v28 = v83;
LABEL_90:
  v59 = KeGetCurrentThread();
  --v59->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpAppHiveLoadListLock, 0LL);
  v60 = *(_QWORD *)v104;
  v61 = *(_QWORD *)&v104[8];
  if ( *(_BYTE **)(*(_QWORD *)v104 + 8LL) != v104 || **(_BYTE ***)&v104[8] != v104 )
    goto LABEL_123;
  **(_QWORD **)&v104[8] = *(_QWORD *)v104;
  *(_QWORD *)(v60 + 8) = v61;
  v62 = *(_QWORD *)&v104[16];
  if ( *(_BYTE **)&v104[16] == &v104[16] )
    goto LABEL_97;
  v63 = *(_QWORD *)&v104[24];
  v64 = (_QWORD *)(*(_QWORD *)&v104[16] - 16LL);
  if ( *(_BYTE **)(*(_QWORD *)&v104[16] + 8LL) != &v104[16]
    || **(_BYTE ***)&v104[24] != &v104[16]
    || (**(_QWORD **)&v104[24] = *(_QWORD *)&v104[16],
        *(_QWORD *)(v62 + 8) = v63,
        v65 = (_QWORD *)qword_140C48018,
        *(__int64 **)qword_140C48018 != &CmpAppHiveLoadList) )
  {
LABEL_123:
    __fastfail(3u);
  }
  *v64 = &CmpAppHiveLoadList;
  v64[1] = v65;
  *v65 = v64;
  qword_140C48018 = (__int64)v64;
LABEL_97:
  ExReleasePushLockEx((ULONG_PTR)&CmpAppHiveLoadListLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  KeSetEvent((PRKEVENT)&v104[48], 0, 0);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&v104[72]);
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
      v174 = 8LL;
      v117 = 1LL;
      v173 = &v117;
      v67 = (unsigned __int8 *)&unk_140022FA0;
      v99 = KeyCommon;
      v175 = &v99;
      v68 = 6;
      v82 = v81;
      v177 = &v82;
      v179 = &v118;
      v69 = (struct _EVENT_DATA_DESCRIPTOR *)&v172;
      v176 = 4LL;
      v178 = 1LL;
      v118 = 0x1000000LL;
      v180 = 8LL;
LABEL_121:
      tlgWriteAgg((__int64)&dword_140C02130, v67, v66, v68, v69);
    }
  }
  else if ( *(_WORD *)(v20 + 8) || *(_WORD *)(v20 + 10) || *(_BYTE *)(v20 + 394) )
  {
    if ( (unsigned int)dword_140C02130 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_140C02130, 0x400000000008LL) )
      {
        v115 = 1LL;
        v122 = 8LL;
        v72 = *(unsigned __int16 *)(v20 + 10);
        v73 = *(unsigned __int8 *)(v20 + 394);
        v121 = &v115;
        v74 = v20 + 12;
        v86 = v73;
        v123 = &v97;
        v125 = (char *)&v84 + 4;
        v127 = &v85;
        v129 = &v86;
        v138 = v20 + 108;
        v139 = 12 * v72;
        v143 = v20 + 396;
        v146 = &v116;
        v85 = v72;
        v134 = 12 * v71;
        v136 = v20 + 10;
        v97 = KeyCommon;
        v124 = 4LL;
        WORD2(v84) = v71;
        v126 = 2LL;
        v128 = 2LL;
        v130 = 2LL;
        v131 = v20 + 8;
        v132 = 2LL;
        v133 = v20 + 12;
        v135 = 0;
        v137 = 2LL;
        v140 = 0;
        v141 = v20 + 394;
        v142 = 2LL;
        v144 = 8 * v73;
        v145 = 0;
        v116 = 0x1000000LL;
        v147 = 8LL;
        tlgWriteAgg((__int64)&dword_140C02130, (unsigned __int8 *)&dword_140022DE4, v20 + 394, 0xEu, &v120);
        v70 = dword_140C02130;
      }
      else
      {
        v74 = v20 + 12;
      }
      if ( v70 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 8LL) )
      {
        v98 = KeyCommon;
        v149 = &v98;
        v87 = *(_WORD *)(v20 + 8);
        v151 = &v87;
        v75 = *(unsigned __int16 *)(v20 + 10);
        v153 = &v88;
        v76 = *(unsigned __int8 *)(v20 + 394);
        v160 = 12 * v87;
        v164 = v20 + 108;
        v165 = 12 * v75;
        v89 = v76;
        v169 = v20 + 396;
        v88 = v75;
        v162 = v20 + 10;
        v167 = v20 + 394;
        v170 = 8 * v76;
        v150 = 4LL;
        v152 = 2LL;
        v154 = 2LL;
        v155 = &v89;
        v156 = 2LL;
        v157 = v20 + 8;
        v158 = 2LL;
        v159 = v74;
        v161 = 0;
        v163 = 2LL;
        v166 = 0;
        v168 = 2LL;
        v171 = 0;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C02130,
          (unsigned __int8 *)word_14002300A,
          0LL,
          0LL,
          0xCu,
          &v148);
      }
    }
  }
  else if ( (unsigned int)dword_140C02130 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 0x400000000008LL) )
  {
    v113 = 1LL;
    v182 = &v113;
    v67 = (unsigned __int8 *)&byte_140022F47;
    v183 = 8LL;
    v184 = &v96;
    v68 = 5;
    v96 = KeyCommon;
    v186 = &v114;
    v69 = &v181;
    v185 = 4LL;
    v114 = 0x1000000LL;
    v187 = 8LL;
    goto LABEL_121;
  }
  CmSiFreeMemory((PPRIVILEGE_SET)v20);
  return (unsigned int)KeyCommon;
}
