/*
 * XREFs of CmLoadAppKey @ 0x140694928
 * Callers:
 *     CmLoadDifferencingKey @ 0x14068C83C (CmLoadDifferencingKey.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     KeInitializeEvent @ 0x140254560 (KeInitializeEvent.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14025C5C0 (CmpAllocateTransientPoolWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     ExInitializePushLock @ 0x1402C0830 (ExInitializePushLock.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402D5DD4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402D5F54 (_tlgKeywordOn.c)
 *     CmpLoadKeyCommon @ 0x1402E1B78 (CmpLoadKeyCommon.c)
 *     CmSiFreeMemory @ 0x1402E2170 (CmSiFreeMemory.c)
 *     ExBlockOnAddressPushLock @ 0x1402EBC50 (ExBlockOnAddressPushLock.c)
 *     SetFailureLocation @ 0x140315198 (SetFailureLocation.c)
 *     ExWaitForRundownProtectionRelease @ 0x1403560A0 (ExWaitForRundownProtectionRelease.c)
 *     _tlgWriteAgg @ 0x1403727B4 (_tlgWriteAgg.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     memset @ 0x140408F80 (memset.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x1404E7130 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     CmpCmdHiveOpen @ 0x1405D63B0 (CmpCmdHiveOpen.c)
 *     RtlEqualUnicodeString @ 0x140609D30 (RtlEqualUnicodeString.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14061CE00 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpConstructNameWithStatus @ 0x14061DE60 (CmpConstructNameWithStatus.c)
 *     CmpAttachToRegistryProcess @ 0x14061FF00 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140621720 (CmpDetachFromRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140629290 (CmpUnlockRegistry.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     CmpDeleteHive @ 0x14065B4F8 (CmpDeleteHive.c)
 *     CmpOpenHiveFile @ 0x140664008 (CmpOpenHiveFile.c)
 *     UNLOCK_HIVE_LOAD @ 0x140691040 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x140691170 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1406911D4 (LOCK_HIVE_LOAD.c)
 *     CmpGetNextHive @ 0x140695840 (CmpGetNextHive.c)
 *     CmpIsThisSameFile @ 0x140695E6C (CmpIsThisSameFile.c)
 *     CmpGetLastHive @ 0x1406E268C (CmpGetLastHive.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // edx
  int v26; // ecx
  int v27; // edx
  int v28; // eax
  int KeyCommon; // edi
  NTSTATUS v30; // eax
  struct _DMA_ADAPTER *v31; // rbx
  struct _KTHREAD *v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rdi
  _QWORD *v35; // rax
  __int64 v36; // rbx
  struct _EX_RUNDOWN_REF *v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  void *v44; // rbx
  int v45; // eax
  NTSTATUS v46; // eax
  void *i; // rcx
  __int64 NextHive; // rax
  __int64 v49; // rbx
  __int64 v50; // rdx
  __int64 v51; // r8
  _DWORD *v52; // r9
  int v53; // ecx
  int v54; // eax
  __int64 v55; // rcx
  _QWORD *v56; // rdi
  __int64 v57; // rdx
  __int64 v58; // r8
  _DWORD *v59; // r9
  struct _KTHREAD *v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // r8
  _QWORD *v65; // rdx
  _QWORD *v66; // rax
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rdx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // r8
  unsigned __int8 *v74; // rdx
  unsigned __int8 v75; // r9
  struct _EVENT_DATA_DESCRIPTOR *v76; // rax
  unsigned int v77; // r9d
  int v78; // r11d
  int v79; // r9d
  int v80; // r10d
  __int64 v81; // r15
  int v82; // r8d
  int v83; // r9d
  int Object; // [rsp+20h] [rbp-E0h]
  char v85; // [rsp+60h] [rbp-A0h] BYREF
  char v86; // [rsp+61h] [rbp-9Fh] BYREF
  char v87; // [rsp+62h] [rbp-9Eh]
  char v88; // [rsp+63h] [rbp-9Dh]
  char v89; // [rsp+64h] [rbp-9Ch] BYREF
  struct _DMA_ADAPTER *v90; // [rsp+68h] [rbp-98h]
  __int64 v91; // [rsp+70h] [rbp-90h] BYREF
  __int16 v92; // [rsp+78h] [rbp-88h] BYREF
  __int16 v93; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned __int16 v94; // [rsp+80h] [rbp-80h] BYREF
  __int16 v95; // [rsp+84h] [rbp-7Ch] BYREF
  __int16 v96; // [rsp+88h] [rbp-78h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-70h] BYREF
  int v98; // [rsp+98h] [rbp-68h] BYREF
  __int64 v99; // [rsp+9Ch] [rbp-64h] BYREF
  int v100; // [rsp+A4h] [rbp-5Ch]
  char *v101; // [rsp+A8h] [rbp-58h] BYREF
  PVOID P; // [rsp+B0h] [rbp-50h] BYREF
  int v103; // [rsp+B8h] [rbp-48h] BYREF
  int v104; // [rsp+BCh] [rbp-44h] BYREF
  int v105; // [rsp+C0h] [rbp-40h] BYREF
  int v106; // [rsp+C4h] [rbp-3Ch] BYREF
  int v107; // [rsp+C8h] [rbp-38h]
  int v108; // [rsp+CCh] [rbp-34h]
  int v109; // [rsp+D0h] [rbp-30h]
  __int64 v110; // [rsp+D8h] [rbp-28h]
  _BYTE v111[80]; // [rsp+E0h] [rbp-20h] BYREF
  PVOID v112; // [rsp+130h] [rbp+30h] BYREF
  PVOID v113; // [rsp+138h] [rbp+38h] BYREF
  __int64 v114; // [rsp+140h] [rbp+40h] BYREF
  __int64 v115; // [rsp+148h] [rbp+48h]
  ULONG_PTR *v116; // [rsp+150h] [rbp+50h]
  _QWORD *v117; // [rsp+158h] [rbp+58h]
  __int64 v118; // [rsp+160h] [rbp+60h]
  __int64 v119; // [rsp+168h] [rbp+68h]
  __int64 v120; // [rsp+170h] [rbp+70h] BYREF
  __int64 v121; // [rsp+178h] [rbp+78h] BYREF
  __int64 v122; // [rsp+180h] [rbp+80h] BYREF
  __int64 v123; // [rsp+188h] [rbp+88h] BYREF
  __int64 v124; // [rsp+190h] [rbp+90h] BYREF
  __int64 v125; // [rsp+198h] [rbp+98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v126[3]; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v127; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 *v128; // [rsp+1F0h] [rbp+F0h]
  __int64 v129; // [rsp+1F8h] [rbp+F8h]
  int *v130; // [rsp+200h] [rbp+100h]
  __int64 v131; // [rsp+208h] [rbp+108h]
  char *v132; // [rsp+210h] [rbp+110h]
  __int64 v133; // [rsp+218h] [rbp+118h]
  __int16 *v134; // [rsp+220h] [rbp+120h]
  __int64 v135; // [rsp+228h] [rbp+128h]
  __int16 *v136; // [rsp+230h] [rbp+130h]
  __int64 v137; // [rsp+238h] [rbp+138h]
  __int64 v138; // [rsp+240h] [rbp+140h]
  __int64 v139; // [rsp+248h] [rbp+148h]
  __int64 v140; // [rsp+250h] [rbp+150h]
  int v141; // [rsp+258h] [rbp+158h]
  int v142; // [rsp+25Ch] [rbp+15Ch]
  __int64 v143; // [rsp+260h] [rbp+160h]
  __int64 v144; // [rsp+268h] [rbp+168h]
  __int64 v145; // [rsp+270h] [rbp+170h]
  int v146; // [rsp+278h] [rbp+178h]
  int v147; // [rsp+27Ch] [rbp+17Ch]
  __int64 v148; // [rsp+280h] [rbp+180h]
  __int64 v149; // [rsp+288h] [rbp+188h]
  __int64 v150; // [rsp+290h] [rbp+190h]
  int v151; // [rsp+298h] [rbp+198h]
  int v152; // [rsp+29Ch] [rbp+19Ch]
  __int64 *v153; // [rsp+2A0h] [rbp+1A0h]
  __int64 v154; // [rsp+2A8h] [rbp+1A8h]
  struct _EVENT_DATA_DESCRIPTOR v155; // [rsp+2B0h] [rbp+1B0h] BYREF
  int *v156; // [rsp+2D0h] [rbp+1D0h]
  __int64 v157; // [rsp+2D8h] [rbp+1D8h]
  unsigned __int16 *v158; // [rsp+2E0h] [rbp+1E0h]
  __int64 v159; // [rsp+2E8h] [rbp+1E8h]
  __int16 *v160; // [rsp+2F0h] [rbp+1F0h]
  __int64 v161; // [rsp+2F8h] [rbp+1F8h]
  __int16 *v162; // [rsp+300h] [rbp+200h]
  __int64 v163; // [rsp+308h] [rbp+208h]
  __int64 v164; // [rsp+310h] [rbp+210h]
  __int64 v165; // [rsp+318h] [rbp+218h]
  __int64 v166; // [rsp+320h] [rbp+220h]
  int v167; // [rsp+328h] [rbp+228h]
  int v168; // [rsp+32Ch] [rbp+22Ch]
  __int64 v169; // [rsp+330h] [rbp+230h]
  __int64 v170; // [rsp+338h] [rbp+238h]
  __int64 v171; // [rsp+340h] [rbp+240h]
  int v172; // [rsp+348h] [rbp+248h]
  int v173; // [rsp+34Ch] [rbp+24Ch]
  __int64 v174; // [rsp+350h] [rbp+250h]
  __int64 v175; // [rsp+358h] [rbp+258h]
  __int64 v176; // [rsp+360h] [rbp+260h]
  int v177; // [rsp+368h] [rbp+268h]
  int v178; // [rsp+36Ch] [rbp+26Ch]
  char v179; // [rsp+370h] [rbp+270h] BYREF
  __int64 *v180; // [rsp+390h] [rbp+290h]
  __int64 v181; // [rsp+398h] [rbp+298h]
  int *v182; // [rsp+3A0h] [rbp+2A0h]
  __int64 v183; // [rsp+3A8h] [rbp+2A8h]
  char *v184; // [rsp+3B0h] [rbp+2B0h]
  __int64 v185; // [rsp+3B8h] [rbp+2B8h]
  __int64 *v186; // [rsp+3C0h] [rbp+2C0h]
  __int64 v187; // [rsp+3C8h] [rbp+2C8h]
  struct _EVENT_DATA_DESCRIPTOR v188; // [rsp+3D0h] [rbp+2D0h] BYREF
  __int64 *v189; // [rsp+3F0h] [rbp+2F0h]
  __int64 v190; // [rsp+3F8h] [rbp+2F8h]
  int *v191; // [rsp+400h] [rbp+300h]
  __int64 v192; // [rsp+408h] [rbp+308h]
  __int64 *v193; // [rsp+410h] [rbp+310h]
  __int64 v194; // [rsp+418h] [rbp+318h]

  v9 = a3;
  v118 = a5;
  v117 = a8;
  v107 = a3;
  v116 = a9;
  v119 = a4;
  v110 = (__int64)a6;
  v98 = 0;
  Handle = 0LL;
  memset(v111, 0, sizeof(v111));
  v12 = (unsigned __int16 *)a1[2];
  v85 = 0;
  memset(v126, 0, sizeof(v126));
  v87 = 0;
  v13 = 0;
  v88 = 0;
  LastHive = 0LL;
  v15 = *v12;
  P = 0LL;
  v115 = 0LL;
  v90 = 0LL;
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
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v22, v23, v24);
    CmSiFreeMemory((PPRIVILEGE_SET)v20);
    return 3221225865LL;
  }
  v108 = v9 & 0x20;
  v25 = (v108 != 0 ? 118030337 : 50921473) | 0x8000000;
  if ( (v9 & 0x80u) == 0 )
    v25 = v108 != 0 ? 118030337 : 50921473;
  v26 = v25 | 0x10000000;
  if ( (v9 & 0x200) == 0 )
    v26 = v25;
  v100 = v26;
  v109 = v9 & 0x2000;
  v27 = (v109 != 0) | 0x20;
  if ( (v9 & 0x8000) == 0 )
    v27 = (v9 & 0x2000) != 0;
  HIDWORD(v99) = v27;
  v28 = CmpOpenHiveFile(a2, 0, &Handle, &v98, 8u, a6, 0LL, 0LL, (__int64)&P);
  KeyCommon = v28;
  if ( v28 == -1073741772 )
  {
    v87 = 1;
    *(_QWORD *)&v111[32] = a2;
    v111[40] = 1;
  }
  else
  {
    if ( v28 < 0 )
    {
      SetFailureLocation(v20, 0, 32, v28, 16);
      goto LABEL_102;
    }
    v112 = 0LL;
    v30 = ObReferenceObjectByHandle(Handle, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &v112, 0LL);
    v31 = (struct _DMA_ADAPTER *)v112;
    KeyCommon = v30;
    v90 = (struct _DMA_ADAPTER *)v112;
    ZwClose(Handle);
    if ( KeyCommon < 0 )
    {
      SetFailureLocation(v20, 0, 32, KeyCommon, 32);
      goto LABEL_100;
    }
    *(_QWORD *)&v111[32] = v31[2].DmaOperations;
    v111[40] = 0;
  }
  KeInitializeEvent((PRKEVENT)&v111[48], NotificationEvent, 0);
  ExInitializePushLock((PKSPIN_LOCK)&v111[72]);
  *(_QWORD *)&v111[24] = &v111[16];
  *(_QWORD *)&v111[16] = &v111[16];
  v32 = KeGetCurrentThread();
  --v32->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpAppHiveLoadListLock, 0LL);
  v33 = CmpAppHiveLoadList;
  if ( (__int64 *)CmpAppHiveLoadList == &CmpAppHiveLoadList )
  {
LABEL_32:
    if ( *(__int64 **)qword_140C47FE8 == &CmpAppHiveLoadList )
    {
      *(_QWORD *)v111 = &CmpAppHiveLoadList;
      *(_QWORD *)&v111[8] = qword_140C47FE8;
      *(_QWORD *)qword_140C47FE8 = v111;
      qword_140C47FE8 = (__int64)v111;
      ExReleasePushLockEx((ULONG_PTR)&CmpAppHiveLoadListLock, 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v41, v42, v43);
      goto LABEL_34;
    }
    goto LABEL_123;
  }
  v34 = *(_QWORD *)&v111[32];
  while ( 1 )
  {
    if ( !*(_BYTE *)(v33 + 40) )
    {
      if ( *(_QWORD *)(v33 + 32) == v34 )
        break;
      goto LABEL_31;
    }
    if ( RtlEqualUnicodeString(*(PCUNICODE_STRING *)(v33 + 32), a2, 1u) )
      break;
LABEL_31:
    v33 = *(_QWORD *)v33;
    if ( (__int64 *)v33 == &CmpAppHiveLoadList )
      goto LABEL_32;
  }
  v35 = *(_QWORD **)(v33 + 24);
  v36 = v33 + 16;
  if ( *v35 != v36 )
    goto LABEL_123;
  *(_QWORD *)&v111[24] = v35;
  *(_QWORD *)&v111[16] = v36;
  *v35 = &v111[16];
  *(_QWORD *)(v36 + 8) = &v111[16];
  v37 = *(struct _EX_RUNDOWN_REF **)&v111[24];
  ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)&v111[24] + 56LL));
  ExReleasePushLockEx((ULONG_PTR)&CmpAppHiveLoadListLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v38, v39, v40);
  KeWaitForSingleObject(&v37[4], Executive, 0, 0, 0LL);
  ExReleaseRundownProtection_0(v37 + 7);
LABEL_34:
  v44 = (void *)v110;
  v101 = 0LL;
  v86 = 1;
  v45 = CmpCmdHiveOpen(a2, 1, (__int64)&v86, (__int64)&v101, v100, SBYTE4(v99), v110, (__int64)&v85, v20);
  while ( 1 )
  {
    KeyCommon = v45;
    if ( !v45 )
    {
      KeyCommon = CmpLoadKeyCommon(v101, a1, v107, v119, 0LL, v118, a7, v116, v86, v85, v20);
      goto LABEL_89;
    }
    if ( v45 != -1073741757 || v108 || v13 )
    {
      SetFailureLocation(v20, 0, 32, v45, 48);
      goto LABEL_89;
    }
    if ( v87 )
    {
      KeyCommon = CmpOpenHiveFile(a2, 0, &Handle, &v98, 8u, v44, 0LL, 0LL, (__int64)&P);
      if ( KeyCommon < 0 )
      {
        Object = 64;
        if ( KeyCommon == -1073741772 )
          KeyCommon = -1073741757;
LABEL_77:
        SetFailureLocation(v20, 0, 32, KeyCommon, Object);
        goto LABEL_89;
      }
      v113 = 0LL;
      v46 = ObReferenceObjectByHandle(Handle, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &v113, 0LL);
      v31 = (struct _DMA_ADAPTER *)v113;
      KeyCommon = v46;
      v90 = (struct _DMA_ADAPTER *)v113;
      ZwClose(Handle);
      if ( KeyCommon < 0 )
      {
        SetFailureLocation(v20, 0, 32, KeyCommon, 80);
        goto LABEL_90;
      }
      v44 = (void *)v110;
    }
    LOCK_HIVE_LOAD();
    CmpLockRegistryFreezeAware(1);
    LastHive = CmpGetLastHive();
    if ( LastHive )
      break;
LABEL_73:
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    v86 = 1;
    v85 = 0;
    v101 = 0LL;
    v45 = CmpCmdHiveOpen(a2, 1, (__int64)&v86, (__int64)&v101, v100, SBYTE4(v99), (__int64)v44, (__int64)&v85, v20);
    v13 = 1;
  }
LABEL_44:
  LODWORD(v91) = CmpActiveAppHiveUnloadCount;
  while ( (_DWORD)v91 )
  {
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    ExBlockOnAddressPushLock((__int64)&CmpActiveAppHiveUnloadEvent, &CmpActiveAppHiveUnloadCount, &v91, 4uLL, 0LL);
    LOCK_HIVE_LOAD();
    CmpLockRegistryFreezeAware(1);
    LODWORD(v91) = CmpActiveAppHiveUnloadCount;
  }
  for ( i = 0LL; ; i = (void *)v49 )
  {
    NextHive = CmpGetNextHive(i);
    v49 = NextHive;
    if ( !NextHive )
      break;
    LODWORD(v99) = *(_DWORD *)(NextHive + 4808);
    if ( (_DWORD)v99 )
    {
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD();
      ExBlockOnAddressPushLock(v49 + 4816, (_QWORD *)(v49 + 4808), &v99, 4uLL, 0LL);
      LOCK_HIVE_LOAD();
      CmpLockRegistryFreezeAware(1);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v49 + 4272), 0xFFFFFFFF) == 1 )
        CmpDeleteHive((_QWORD *)v49);
      if ( v49 == LastHive )
        break;
      goto LABEL_44;
    }
    if ( *(_QWORD *)(NextHive + 1536) && (unsigned __int8)CmpIsThisSameFile(v90) )
    {
      v53 = *(_DWORD *)(v49 + 4152);
      v54 = *(_DWORD *)(v49 + 160) & 0x8000;
      if ( (v53 & 0x20) == 0 || (v53 & 0x40) != 0 )
      {
        CmpUnlockRegistry();
        UNLOCK_HIVE_LOAD();
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v49 + 4272), 0xFFFFFFFF) == 1 )
          CmpDeleteHive((_QWORD *)v49);
        KeyCommon = -1073741757;
        SetFailureLocation(v20, 0, 32, -1073741757, 96);
        goto LABEL_89;
      }
      if ( v109 )
      {
        if ( !v54 && !CmpCheckHivePrimaryFileReadWriteAccess(P) )
        {
          CmpUnlockRegistry();
          UNLOCK_HIVE_LOAD();
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v49 + 4272), 0xFFFFFFFF) == 1 )
            CmpDeleteHive((_QWORD *)v49);
          KeyCommon = -1073741790;
          Object = 128;
          goto LABEL_77;
        }
      }
      else if ( v54 )
      {
        CmpUnlockRegistry();
        UNLOCK_HIVE_LOAD();
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v49 + 4272), 0xFFFFFFFF) == 1 )
          CmpDeleteHive((_QWORD *)v49);
        KeyCommon = -1073741757;
        SetFailureLocation(v20, 0, 32, -1073741757, 112);
        goto LABEL_89;
      }
      CmpAttachToRegistryProcess((__int64)v126, v50, v51, v52);
      v55 = *(_QWORD *)(v49 + 2928);
      v115 = v49;
      v114 = 0LL;
      CmpConstructNameWithStatus(v55, &v114);
      v56 = v117;
      *v117 = v114;
      CmpDetachFromRegistryProcess((__int64)v126, v57, v58, v59);
      if ( !*v56 )
      {
        CmpUnlockRegistry();
        UNLOCK_HIVE_LOAD();
        KeyCommon = -1073741670;
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v49 + 4272), 0xFFFFFFFF) == 1 )
          CmpDeleteHive((_QWORD *)v49);
        goto LABEL_89;
      }
      CmpReferenceKeyControlBlockUnsafe(*(volatile signed __int64 **)(v49 + 2928));
      *v116 = *(_QWORD *)(v49 + 2928);
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD();
      KeyCommon = 0;
LABEL_69:
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v49 + 4272), 0xFFFFFFFF) == 1 )
        CmpDeleteHive((_QWORD *)v49);
      break;
    }
    if ( v49 == LastHive )
      goto LABEL_69;
  }
  if ( !v115 )
  {
    v44 = (void *)v110;
    goto LABEL_73;
  }
  v88 = 1;
LABEL_89:
  v31 = v90;
LABEL_90:
  v60 = KeGetCurrentThread();
  --v60->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpAppHiveLoadListLock, 0LL);
  v61 = *(_QWORD *)v111;
  v62 = *(_QWORD *)&v111[8];
  if ( *(_BYTE **)(*(_QWORD *)v111 + 8LL) != v111 || **(_BYTE ***)&v111[8] != v111 )
    goto LABEL_123;
  **(_QWORD **)&v111[8] = *(_QWORD *)v111;
  *(_QWORD *)(v61 + 8) = v62;
  v63 = *(_QWORD *)&v111[16];
  if ( *(_BYTE **)&v111[16] == &v111[16] )
    goto LABEL_97;
  v64 = *(_QWORD *)&v111[24];
  v65 = (_QWORD *)(*(_QWORD *)&v111[16] - 16LL);
  if ( *(_BYTE **)(*(_QWORD *)&v111[16] + 8LL) != &v111[16]
    || **(_BYTE ***)&v111[24] != &v111[16]
    || (**(_QWORD **)&v111[24] = *(_QWORD *)&v111[16],
        *(_QWORD *)(v63 + 8) = v64,
        v66 = (_QWORD *)qword_140C47FE8,
        *(__int64 **)qword_140C47FE8 != &CmpAppHiveLoadList) )
  {
LABEL_123:
    __fastfail(3u);
  }
  *v65 = &CmpAppHiveLoadList;
  v65[1] = v66;
  *v66 = v65;
  qword_140C47FE8 = (__int64)v65;
LABEL_97:
  ExReleasePushLockEx((ULONG_PTR)&CmpAppHiveLoadListLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v67, v68, v69);
  KeSetEvent((PRKEVENT)&v111[48], 0, 0);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&v111[72]);
  if ( LastHive && _InterlockedExchangeAdd((volatile signed __int32 *)(LastHive + 4272), 0xFFFFFFFF) == 1 )
    CmpDeleteHive((_QWORD *)LastHive);
LABEL_100:
  if ( v31 )
    HalPutDmaAdapter(v31);
LABEL_102:
  if ( P )
    ExFreePoolWithTag(P, 0);
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v70, v71, v72);
  if ( KeyCommon >= 0 )
  {
    if ( (unsigned int)dword_140C02130 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 0x400000000008LL) )
    {
      v181 = 8LL;
      v124 = 1LL;
      v180 = &v124;
      v74 = (unsigned __int8 *)&dword_140021D84;
      v106 = KeyCommon;
      v182 = &v106;
      v75 = 6;
      v89 = v88;
      v184 = &v89;
      v186 = &v125;
      v76 = (struct _EVENT_DATA_DESCRIPTOR *)&v179;
      v183 = 4LL;
      v185 = 1LL;
      v125 = 0x1000000LL;
      v187 = 8LL;
LABEL_121:
      tlgWriteAgg((__int64)&dword_140C02130, v74, v73, v75, v76);
    }
  }
  else if ( *(_WORD *)(v20 + 8) || *(_WORD *)(v20 + 10) || *(_BYTE *)(v20 + 394) )
  {
    if ( (unsigned int)dword_140C02130 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_140C02130, 0x400000000008LL) )
      {
        v122 = 1LL;
        v129 = 8LL;
        v79 = *(unsigned __int16 *)(v20 + 10);
        v80 = *(unsigned __int8 *)(v20 + 394);
        v128 = &v122;
        v81 = v20 + 12;
        v93 = v80;
        v130 = &v104;
        v132 = (char *)&v91 + 4;
        v134 = &v92;
        v136 = &v93;
        v145 = v20 + 108;
        v146 = 12 * v79;
        v150 = v20 + 396;
        v153 = &v123;
        v92 = v79;
        v141 = 12 * v78;
        v143 = v20 + 10;
        v104 = KeyCommon;
        v131 = 4LL;
        WORD2(v91) = v78;
        v133 = 2LL;
        v135 = 2LL;
        v137 = 2LL;
        v138 = v20 + 8;
        v139 = 2LL;
        v140 = v20 + 12;
        v142 = 0;
        v144 = 2LL;
        v147 = 0;
        v148 = v20 + 394;
        v149 = 2LL;
        v151 = 8 * v80;
        v152 = 0;
        v123 = 0x1000000LL;
        v154 = 8LL;
        tlgWriteAgg((__int64)&dword_140C02130, (unsigned __int8 *)&word_140021DEE, v20 + 394, 0xEu, &v127);
        v77 = dword_140C02130;
      }
      else
      {
        v81 = v20 + 12;
      }
      if ( v77 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 8LL) )
      {
        v105 = KeyCommon;
        v156 = &v105;
        v94 = *(_WORD *)(v20 + 8);
        v158 = &v94;
        v82 = *(unsigned __int16 *)(v20 + 10);
        v160 = &v95;
        v83 = *(unsigned __int8 *)(v20 + 394);
        v167 = 12 * v94;
        v171 = v20 + 108;
        v172 = 12 * v82;
        v96 = v83;
        v176 = v20 + 396;
        v95 = v82;
        v169 = v20 + 10;
        v174 = v20 + 394;
        v177 = 8 * v83;
        v157 = 4LL;
        v159 = 2LL;
        v161 = 2LL;
        v162 = &v96;
        v163 = 2LL;
        v164 = v20 + 8;
        v165 = 2LL;
        v166 = v81;
        v168 = 0;
        v170 = 2LL;
        v173 = 0;
        v175 = 2LL;
        v178 = 0;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C02130,
          (unsigned __int8 *)byte_140021F51,
          0LL,
          0LL,
          0xCu,
          &v155);
      }
    }
  }
  else if ( (unsigned int)dword_140C02130 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 0x400000000008LL) )
  {
    v120 = 1LL;
    v189 = &v120;
    v74 = (unsigned __int8 *)byte_14002208D;
    v190 = 8LL;
    v191 = &v103;
    v75 = 5;
    v103 = KeyCommon;
    v193 = &v121;
    v76 = &v188;
    v192 = 4LL;
    v121 = 0x1000000LL;
    v194 = 8LL;
    goto LABEL_121;
  }
  CmSiFreeMemory((PPRIVILEGE_SET)v20);
  return (unsigned int)KeyCommon;
}
