/*
 * XREFs of CmLoadAppKey @ 0x1406663CC
 * Callers:
 *     CmLoadDifferencingKey @ 0x140664A6C (CmLoadDifferencingKey.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x140213E80 (ExBlockOnAddressPushLock.c)
 *     CmSiFreeMemory @ 0x1402253C0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14023EDD0 (CmpAllocateTransientPoolWithTag.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     SetFailureLocation @ 0x140242D88 (SetFailureLocation.c)
 *     ExInitializePushLock @ 0x140266E80 (ExInitializePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x140267780 (ExWaitForRundownProtectionRelease.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     CmpLoadKeyCommon @ 0x14026D10C (CmpLoadKeyCommon.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     _tlgWriteAgg @ 0x1403759E4 (_tlgWriteAgg.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     memset @ 0x140414300 (memset.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x1404ECAE8 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     CmpDeleteHive @ 0x1405E0094 (CmpDeleteHive.c)
 *     CmpGetLastHive @ 0x140664774 (CmpGetLastHive.c)
 *     CmpGetNextHive @ 0x1406672E4 (CmpGetNextHive.c)
 *     CmpIsThisSameFile @ 0x14066738C (CmpIsThisSameFile.c)
 *     UNLOCK_HIVE_LOAD @ 0x1406677F0 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x140667920 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x140667984 (LOCK_HIVE_LOAD.c)
 *     CmpOpenHiveFile @ 0x1406A3938 (CmpOpenHiveFile.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1406DED80 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpConstructNameWithStatus @ 0x1406E2750 (CmpConstructNameWithStatus.c)
 *     CmpDetachFromRegistryProcess @ 0x1406E589C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1406E5AF0 (CmpAttachToRegistryProcess.c)
 *     RtlEqualUnicodeString @ 0x1406F0B70 (RtlEqualUnicodeString.c)
 *     CmpCmdHiveOpen @ 0x1406F2CB8 (CmpCmdHiveOpen.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
  signed int v28; // eax
  signed int KeyCommon; // edi
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
  int v41; // edx
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rbx
  unsigned int v46; // eax
  __int64 v47; // rcx
  NTSTATUS v48; // eax
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rcx
  void *i; // rcx
  __int64 NextHive; // rax
  __int64 v57; // rbx
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // rcx
  int v62; // eax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rcx
  _QWORD *v66; // rdi
  __int64 v67; // rdx
  __int64 v68; // rcx
  ULONG_PTR *v69; // rcx
  __int64 v70; // rdx
  int v71; // edx
  struct _KTHREAD *v72; // rax
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // r8
  _QWORD *v77; // rdx
  _QWORD *v78; // rax
  __int64 v79; // rdx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rdx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // r8
  int *v86; // rdx
  unsigned __int8 v87; // r9
  struct _EVENT_DATA_DESCRIPTOR *v88; // rax
  unsigned int v89; // r9d
  int v90; // r11d
  int v91; // r9d
  int v92; // r10d
  __int64 v93; // r15
  int v94; // r8d
  int v95; // r9d
  unsigned int Object; // [rsp+20h] [rbp-E0h]
  char v97; // [rsp+60h] [rbp-A0h] BYREF
  char v98; // [rsp+61h] [rbp-9Fh] BYREF
  char v99; // [rsp+62h] [rbp-9Eh]
  char v100; // [rsp+63h] [rbp-9Dh]
  char v101; // [rsp+64h] [rbp-9Ch] BYREF
  struct _DMA_ADAPTER *v102; // [rsp+68h] [rbp-98h]
  __int64 v103; // [rsp+70h] [rbp-90h] BYREF
  __int16 v104; // [rsp+78h] [rbp-88h] BYREF
  __int16 v105; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned __int16 v106; // [rsp+80h] [rbp-80h] BYREF
  __int16 v107; // [rsp+84h] [rbp-7Ch] BYREF
  __int16 v108; // [rsp+88h] [rbp-78h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-70h]
  int v110; // [rsp+98h] [rbp-68h]
  __int64 v111; // [rsp+9Ch] [rbp-64h] BYREF
  int v112; // [rsp+A4h] [rbp-5Ch]
  ULONG_PTR v113; // [rsp+A8h] [rbp-58h] BYREF
  PVOID P; // [rsp+B0h] [rbp-50h] BYREF
  signed int v115; // [rsp+B8h] [rbp-48h] BYREF
  signed int v116; // [rsp+BCh] [rbp-44h] BYREF
  signed int v117; // [rsp+C0h] [rbp-40h] BYREF
  signed int v118; // [rsp+C4h] [rbp-3Ch] BYREF
  int v119; // [rsp+C8h] [rbp-38h]
  int v120; // [rsp+CCh] [rbp-34h]
  int v121; // [rsp+D0h] [rbp-30h]
  __int64 v122; // [rsp+D8h] [rbp-28h]
  _BYTE v123[80]; // [rsp+E0h] [rbp-20h] BYREF
  PVOID v124; // [rsp+130h] [rbp+30h] BYREF
  PVOID v125; // [rsp+138h] [rbp+38h] BYREF
  __int64 v126; // [rsp+140h] [rbp+40h] BYREF
  __int64 v127; // [rsp+148h] [rbp+48h]
  ULONG_PTR *v128; // [rsp+150h] [rbp+50h]
  _QWORD *v129; // [rsp+158h] [rbp+58h]
  __int64 v130; // [rsp+160h] [rbp+60h]
  __int64 v131; // [rsp+168h] [rbp+68h]
  __int64 v132; // [rsp+170h] [rbp+70h] BYREF
  __int64 v133; // [rsp+178h] [rbp+78h] BYREF
  __int64 v134; // [rsp+180h] [rbp+80h] BYREF
  __int64 v135; // [rsp+188h] [rbp+88h] BYREF
  __int64 v136; // [rsp+190h] [rbp+90h] BYREF
  __int64 v137; // [rsp+198h] [rbp+98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v138[3]; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v139; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 *v140; // [rsp+1F0h] [rbp+F0h]
  __int64 v141; // [rsp+1F8h] [rbp+F8h]
  signed int *v142; // [rsp+200h] [rbp+100h]
  __int64 v143; // [rsp+208h] [rbp+108h]
  char *v144; // [rsp+210h] [rbp+110h]
  __int64 v145; // [rsp+218h] [rbp+118h]
  __int16 *v146; // [rsp+220h] [rbp+120h]
  __int64 v147; // [rsp+228h] [rbp+128h]
  __int16 *v148; // [rsp+230h] [rbp+130h]
  __int64 v149; // [rsp+238h] [rbp+138h]
  __int64 v150; // [rsp+240h] [rbp+140h]
  __int64 v151; // [rsp+248h] [rbp+148h]
  __int64 v152; // [rsp+250h] [rbp+150h]
  int v153; // [rsp+258h] [rbp+158h]
  int v154; // [rsp+25Ch] [rbp+15Ch]
  __int64 v155; // [rsp+260h] [rbp+160h]
  __int64 v156; // [rsp+268h] [rbp+168h]
  __int64 v157; // [rsp+270h] [rbp+170h]
  int v158; // [rsp+278h] [rbp+178h]
  int v159; // [rsp+27Ch] [rbp+17Ch]
  __int64 v160; // [rsp+280h] [rbp+180h]
  __int64 v161; // [rsp+288h] [rbp+188h]
  __int64 v162; // [rsp+290h] [rbp+190h]
  int v163; // [rsp+298h] [rbp+198h]
  int v164; // [rsp+29Ch] [rbp+19Ch]
  __int64 *v165; // [rsp+2A0h] [rbp+1A0h]
  __int64 v166; // [rsp+2A8h] [rbp+1A8h]
  struct _EVENT_DATA_DESCRIPTOR v167; // [rsp+2B0h] [rbp+1B0h] BYREF
  signed int *v168; // [rsp+2D0h] [rbp+1D0h]
  __int64 v169; // [rsp+2D8h] [rbp+1D8h]
  unsigned __int16 *v170; // [rsp+2E0h] [rbp+1E0h]
  __int64 v171; // [rsp+2E8h] [rbp+1E8h]
  __int16 *v172; // [rsp+2F0h] [rbp+1F0h]
  __int64 v173; // [rsp+2F8h] [rbp+1F8h]
  __int16 *v174; // [rsp+300h] [rbp+200h]
  __int64 v175; // [rsp+308h] [rbp+208h]
  __int64 v176; // [rsp+310h] [rbp+210h]
  __int64 v177; // [rsp+318h] [rbp+218h]
  __int64 v178; // [rsp+320h] [rbp+220h]
  int v179; // [rsp+328h] [rbp+228h]
  int v180; // [rsp+32Ch] [rbp+22Ch]
  __int64 v181; // [rsp+330h] [rbp+230h]
  __int64 v182; // [rsp+338h] [rbp+238h]
  __int64 v183; // [rsp+340h] [rbp+240h]
  int v184; // [rsp+348h] [rbp+248h]
  int v185; // [rsp+34Ch] [rbp+24Ch]
  __int64 v186; // [rsp+350h] [rbp+250h]
  __int64 v187; // [rsp+358h] [rbp+258h]
  __int64 v188; // [rsp+360h] [rbp+260h]
  int v189; // [rsp+368h] [rbp+268h]
  int v190; // [rsp+36Ch] [rbp+26Ch]
  char v191; // [rsp+370h] [rbp+270h] BYREF
  __int64 *v192; // [rsp+390h] [rbp+290h]
  __int64 v193; // [rsp+398h] [rbp+298h]
  signed int *v194; // [rsp+3A0h] [rbp+2A0h]
  __int64 v195; // [rsp+3A8h] [rbp+2A8h]
  char *v196; // [rsp+3B0h] [rbp+2B0h]
  __int64 v197; // [rsp+3B8h] [rbp+2B8h]
  __int64 *v198; // [rsp+3C0h] [rbp+2C0h]
  __int64 v199; // [rsp+3C8h] [rbp+2C8h]
  struct _EVENT_DATA_DESCRIPTOR v200; // [rsp+3D0h] [rbp+2D0h] BYREF
  __int64 *v201; // [rsp+3F0h] [rbp+2F0h]
  __int64 v202; // [rsp+3F8h] [rbp+2F8h]
  signed int *v203; // [rsp+400h] [rbp+300h]
  __int64 v204; // [rsp+408h] [rbp+308h]
  __int64 *v205; // [rsp+410h] [rbp+310h]
  __int64 v206; // [rsp+418h] [rbp+318h]

  v9 = a3;
  v130 = a5;
  v129 = a8;
  v119 = a3;
  v128 = a9;
  v131 = a4;
  v122 = (__int64)a6;
  v110 = 0;
  Handle = 0LL;
  memset(v123, 0, sizeof(v123));
  v12 = (unsigned __int16 *)a1[2];
  v97 = 0;
  memset(v138, 0, sizeof(v138));
  v99 = 0;
  v13 = 0;
  v100 = 0;
  LastHive = 0LL;
  v15 = *v12;
  P = 0LL;
  v127 = 0LL;
  v102 = 0LL;
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
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v22, v23, v24);
    CmSiFreeMemory((PPRIVILEGE_SET)v20);
    return 3221225865LL;
  }
  v120 = v9 & 0x20;
  v25 = (v120 != 0 ? 119078913 : 51970049) | 0x8000000;
  if ( (v9 & 0x80u) == 0 )
    v25 = v120 != 0 ? 119078913 : 51970049;
  v26 = v25 | 0x10000000;
  if ( (v9 & 0x200) == 0 )
    v26 = v25;
  v112 = v26;
  v121 = v9 & 0x2000;
  v27 = (v121 != 0) | 0x20;
  if ( (v9 & 0x8000) == 0 )
    v27 = (v9 & 0x2000) != 0;
  HIDWORD(v111) = v27;
  v28 = CmpOpenHiveFile(a2, 8, (__int64)a6, 0LL, 0LL, (__int64)&P);
  KeyCommon = v28;
  if ( v28 == -1073741772 )
  {
    v99 = 1;
    *(_QWORD *)&v123[32] = a2;
    v123[40] = 1;
  }
  else
  {
    if ( v28 < 0 )
    {
      SetFailureLocation(v20, 0, 32, v28, 0x10u);
      goto LABEL_102;
    }
    v124 = 0LL;
    v30 = ObReferenceObjectByHandle(Handle, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &v124, 0LL);
    v31 = (struct _DMA_ADAPTER *)v124;
    KeyCommon = v30;
    v102 = (struct _DMA_ADAPTER *)v124;
    ZwClose(Handle);
    if ( KeyCommon < 0 )
    {
      SetFailureLocation(v20, 0, 32, KeyCommon, 0x20u);
      goto LABEL_100;
    }
    *(_QWORD *)&v123[32] = v31[2].DmaOperations;
    v123[40] = 0;
  }
  KeInitializeEvent((PRKEVENT)&v123[48], NotificationEvent, 0);
  ExInitializePushLock((PKSPIN_LOCK)&v123[72]);
  *(_QWORD *)&v123[24] = &v123[16];
  *(_QWORD *)&v123[16] = &v123[16];
  v32 = KeGetCurrentThread();
  --v32->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpAppHiveLoadListLock, 0LL);
  v33 = CmpAppHiveLoadList;
  if ( (__int64 *)CmpAppHiveLoadList == &CmpAppHiveLoadList )
  {
LABEL_32:
    if ( *(__int64 **)qword_140C48068 == &CmpAppHiveLoadList )
    {
      *(_QWORD *)v123 = &CmpAppHiveLoadList;
      *(_QWORD *)&v123[8] = qword_140C48068;
      *(_QWORD *)qword_140C48068 = v123;
      qword_140C48068 = (__int64)v123;
      ExReleasePushLockEx((ULONG_PTR)&CmpAppHiveLoadListLock, 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v42, v43, v44);
      goto LABEL_34;
    }
    goto LABEL_123;
  }
  v34 = *(_QWORD *)&v123[32];
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
  *(_QWORD *)&v123[24] = v35;
  *(_QWORD *)&v123[16] = v36;
  *v35 = &v123[16];
  *(_QWORD *)(v36 + 8) = &v123[16];
  v37 = *(struct _EX_RUNDOWN_REF **)&v123[24];
  ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)&v123[24] + 56LL));
  ExReleasePushLockEx((ULONG_PTR)&CmpAppHiveLoadListLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v38, v39, v40);
  KeWaitForSingleObject(&v37[4], Executive, 0, 0, 0LL);
  ExReleaseRundownProtection(v37 + 7);
LABEL_34:
  v45 = v122;
  v113 = 0LL;
  LOBYTE(v41) = 1;
  v98 = 1;
  v46 = CmpCmdHiveOpen(
          (_DWORD)a2,
          v41,
          (unsigned int)&v98,
          (unsigned int)&v113,
          v112,
          HIDWORD(v111),
          v122,
          (__int64)&v97,
          v20);
  while ( 1 )
  {
    KeyCommon = v46;
    if ( !v46 )
    {
      KeyCommon = CmpLoadKeyCommon(v113, a1, v119, v131, 0LL, v130, a7, v128, v98, v97, v20);
      goto LABEL_89;
    }
    if ( v46 != -1073741757 || v120 || v13 )
    {
      SetFailureLocation(v20, 0, 32, v46, 0x30u);
      goto LABEL_89;
    }
    if ( v99 )
    {
      KeyCommon = CmpOpenHiveFile(a2, 8, v45, 0LL, 0LL, (__int64)&P);
      if ( KeyCommon < 0 )
      {
        Object = 64;
        if ( KeyCommon == -1073741772 )
          KeyCommon = -1073741757;
LABEL_77:
        SetFailureLocation(v20, 0, 32, KeyCommon, Object);
        goto LABEL_89;
      }
      v125 = 0LL;
      v48 = ObReferenceObjectByHandle(Handle, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &v125, 0LL);
      v31 = (struct _DMA_ADAPTER *)v125;
      KeyCommon = v48;
      v102 = (struct _DMA_ADAPTER *)v125;
      ZwClose(Handle);
      if ( KeyCommon < 0 )
      {
        SetFailureLocation(v20, 0, 32, KeyCommon, 0x50u);
        goto LABEL_90;
      }
      v45 = v122;
    }
    LOCK_HIVE_LOAD(v47);
    LOBYTE(v49) = 1;
    CmpLockRegistryFreezeAware(v49);
    LastHive = CmpGetLastHive();
    if ( LastHive )
      break;
LABEL_73:
    CmpUnlockRegistry(v51, v50);
    UNLOCK_HIVE_LOAD();
    LOBYTE(v71) = 1;
    v98 = 1;
    v97 = 0;
    v113 = 0LL;
    v46 = CmpCmdHiveOpen(
            (_DWORD)a2,
            v71,
            (unsigned int)&v98,
            (unsigned int)&v113,
            v112,
            HIDWORD(v111),
            v45,
            (__int64)&v97,
            v20);
    v13 = 1;
  }
LABEL_44:
  v52 = (unsigned int)CmpActiveAppHiveUnloadCount;
  LODWORD(v103) = CmpActiveAppHiveUnloadCount;
  while ( (_DWORD)v103 )
  {
    CmpUnlockRegistry(v52, v50);
    UNLOCK_HIVE_LOAD();
    ExBlockOnAddressPushLock((__int64)&CmpActiveAppHiveUnloadEvent, &CmpActiveAppHiveUnloadCount, &v103, 4uLL, 0LL);
    LOCK_HIVE_LOAD(v53);
    LOBYTE(v54) = 1;
    CmpLockRegistryFreezeAware(v54);
    LODWORD(v103) = CmpActiveAppHiveUnloadCount;
  }
  for ( i = 0LL; ; i = (void *)v57 )
  {
    NextHive = CmpGetNextHive(i);
    v57 = NextHive;
    if ( !NextHive )
      break;
    v58 = *(unsigned int *)(NextHive + 4808);
    LODWORD(v111) = v58;
    if ( (_DWORD)v58 )
    {
      CmpUnlockRegistry(v58, v50);
      UNLOCK_HIVE_LOAD();
      ExBlockOnAddressPushLock(v57 + 4816, (_QWORD *)(v57 + 4808), &v111, 4uLL, 0LL);
      LOCK_HIVE_LOAD(v59);
      LOBYTE(v60) = 1;
      CmpLockRegistryFreezeAware(v60);
      v51 = 0xFFFFFFFFLL;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v57 + 4272), 0xFFFFFFFF) == 1 )
        CmpDeleteHive((_QWORD *)v57);
      if ( v57 == LastHive )
        break;
      goto LABEL_44;
    }
    v50 = *(_QWORD *)(NextHive + 1536);
    if ( v50 && (unsigned __int8)CmpIsThisSameFile(v102) )
    {
      v61 = *(unsigned int *)(v57 + 4152);
      v62 = *(_DWORD *)(v57 + 160) & 0x8000;
      if ( (v61 & 0x20) == 0 || (v61 & 0x40) != 0 )
      {
        CmpUnlockRegistry(v61, v50);
        UNLOCK_HIVE_LOAD();
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v57 + 4272), 0xFFFFFFFF) == 1 )
          CmpDeleteHive((_QWORD *)v57);
        KeyCommon = -1073741757;
        SetFailureLocation(v20, 0, 32, 0xC0000043, 0x60u);
        goto LABEL_89;
      }
      if ( v121 )
      {
        if ( !v62 && !CmpCheckHivePrimaryFileReadWriteAccess(P) )
        {
          CmpUnlockRegistry(v64, v63);
          UNLOCK_HIVE_LOAD();
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v57 + 4272), 0xFFFFFFFF) == 1 )
            CmpDeleteHive((_QWORD *)v57);
          KeyCommon = -1073741790;
          Object = 128;
          goto LABEL_77;
        }
      }
      else if ( v62 )
      {
        CmpUnlockRegistry(v61, v50);
        UNLOCK_HIVE_LOAD();
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v57 + 4272), 0xFFFFFFFF) == 1 )
          CmpDeleteHive((_QWORD *)v57);
        KeyCommon = -1073741757;
        SetFailureLocation(v20, 0, 32, 0xC0000043, 0x70u);
        goto LABEL_89;
      }
      CmpAttachToRegistryProcess(v138);
      v65 = *(_QWORD *)(v57 + 2928);
      v127 = v57;
      v126 = 0LL;
      CmpConstructNameWithStatus(v65, &v126);
      v66 = v129;
      *v129 = v126;
      CmpDetachFromRegistryProcess(v138);
      if ( !*v66 )
      {
        CmpUnlockRegistry(v68, v67);
        UNLOCK_HIVE_LOAD();
        KeyCommon = -1073741670;
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v57 + 4272), 0xFFFFFFFF) == 1 )
          CmpDeleteHive((_QWORD *)v57);
        goto LABEL_89;
      }
      CmpReferenceKeyControlBlockUnsafe(*(_QWORD *)(v57 + 2928));
      v69 = v128;
      *v128 = *(_QWORD *)(v57 + 2928);
      CmpUnlockRegistry(v69, v70);
      UNLOCK_HIVE_LOAD();
      KeyCommon = 0;
LABEL_69:
      v51 = 0xFFFFFFFFLL;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v57 + 4272), 0xFFFFFFFF) == 1 )
        CmpDeleteHive((_QWORD *)v57);
      break;
    }
    if ( v57 == LastHive )
      goto LABEL_69;
  }
  if ( !v127 )
  {
    v45 = v122;
    goto LABEL_73;
  }
  v100 = 1;
LABEL_89:
  v31 = v102;
LABEL_90:
  v72 = KeGetCurrentThread();
  --v72->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpAppHiveLoadListLock, 0LL);
  v73 = *(_QWORD *)v123;
  v74 = *(_QWORD *)&v123[8];
  if ( *(_BYTE **)(*(_QWORD *)v123 + 8LL) != v123 || **(_BYTE ***)&v123[8] != v123 )
    goto LABEL_123;
  **(_QWORD **)&v123[8] = *(_QWORD *)v123;
  *(_QWORD *)(v73 + 8) = v74;
  v75 = *(_QWORD *)&v123[16];
  if ( *(_BYTE **)&v123[16] == &v123[16] )
    goto LABEL_97;
  v76 = *(_QWORD *)&v123[24];
  v77 = (_QWORD *)(*(_QWORD *)&v123[16] - 16LL);
  if ( *(_BYTE **)(*(_QWORD *)&v123[16] + 8LL) != &v123[16]
    || **(_BYTE ***)&v123[24] != &v123[16]
    || (**(_QWORD **)&v123[24] = *(_QWORD *)&v123[16],
        *(_QWORD *)(v75 + 8) = v76,
        v78 = (_QWORD *)qword_140C48068,
        *(__int64 **)qword_140C48068 != &CmpAppHiveLoadList) )
  {
LABEL_123:
    __fastfail(3u);
  }
  *v77 = &CmpAppHiveLoadList;
  v77[1] = v78;
  *v78 = v77;
  qword_140C48068 = (__int64)v77;
LABEL_97:
  ExReleasePushLockEx((ULONG_PTR)&CmpAppHiveLoadListLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v79, v80, v81);
  KeSetEvent((PRKEVENT)&v123[48], 0, 0);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&v123[72]);
  if ( LastHive && _InterlockedExchangeAdd((volatile signed __int32 *)(LastHive + 4272), 0xFFFFFFFF) == 1 )
    CmpDeleteHive((_QWORD *)LastHive);
LABEL_100:
  if ( v31 )
    HalPutDmaAdapter(v31);
LABEL_102:
  if ( P )
    ExFreePoolWithTag(P, 0);
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v82, v83, v84);
  if ( KeyCommon >= 0 )
  {
    if ( (unsigned int)dword_140C02130 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 0x400000000008LL) )
    {
      v193 = 8LL;
      v136 = 1LL;
      v192 = &v136;
      v86 = (int *)&byte_140022C0B;
      v118 = KeyCommon;
      v194 = &v118;
      v87 = 6;
      v101 = v100;
      v196 = &v101;
      v198 = &v137;
      v88 = (struct _EVENT_DATA_DESCRIPTOR *)&v191;
      v195 = 4LL;
      v197 = 1LL;
      v137 = 0x1000000LL;
      v199 = 8LL;
LABEL_121:
      tlgWriteAgg((__int64)&dword_140C02130, (unsigned __int8 *)v86, v85, v87, v88);
    }
  }
  else if ( *(_WORD *)(v20 + 8) || *(_WORD *)(v20 + 10) || *(_BYTE *)(v20 + 394) )
  {
    if ( (unsigned int)dword_140C02130 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_140C02130, 0x400000000008LL) )
      {
        v134 = 1LL;
        v141 = 8LL;
        v91 = *(unsigned __int16 *)(v20 + 10);
        v92 = *(unsigned __int8 *)(v20 + 394);
        v140 = &v134;
        v93 = v20 + 12;
        v105 = v92;
        v142 = &v116;
        v144 = (char *)&v103 + 4;
        v146 = &v104;
        v148 = &v105;
        v157 = v20 + 108;
        v158 = 12 * v91;
        v162 = v20 + 396;
        v165 = &v135;
        v104 = v91;
        v153 = 12 * v90;
        v155 = v20 + 10;
        v116 = KeyCommon;
        v143 = 4LL;
        WORD2(v103) = v90;
        v145 = 2LL;
        v147 = 2LL;
        v149 = 2LL;
        v150 = v20 + 8;
        v151 = 2LL;
        v152 = v20 + 12;
        v154 = 0;
        v156 = 2LL;
        v159 = 0;
        v160 = v20 + 394;
        v161 = 2LL;
        v163 = 8 * v92;
        v164 = 0;
        v135 = 0x1000000LL;
        v166 = 8LL;
        tlgWriteAgg((__int64)&dword_140C02130, (unsigned __int8 *)&byte_140022DB1, v20 + 394, 0xEu, &v139);
        v89 = dword_140C02130;
      }
      else
      {
        v93 = v20 + 12;
      }
      if ( v89 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 8LL) )
      {
        v117 = KeyCommon;
        v168 = &v117;
        v106 = *(_WORD *)(v20 + 8);
        v170 = &v106;
        v94 = *(unsigned __int16 *)(v20 + 10);
        v172 = &v107;
        v95 = *(unsigned __int8 *)(v20 + 394);
        v179 = 12 * v106;
        v183 = v20 + 108;
        v184 = 12 * v94;
        v108 = v95;
        v188 = v20 + 396;
        v107 = v94;
        v181 = v20 + 10;
        v186 = v20 + 394;
        v189 = 8 * v95;
        v169 = 4LL;
        v171 = 2LL;
        v173 = 2LL;
        v174 = &v108;
        v175 = 2LL;
        v176 = v20 + 8;
        v177 = 2LL;
        v178 = v93;
        v180 = 0;
        v182 = 2LL;
        v185 = 0;
        v187 = 2LL;
        v190 = 0;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C02130,
          (unsigned __int8 *)byte_140022C75,
          0LL,
          0LL,
          0xCu,
          &v167);
      }
    }
  }
  else if ( (unsigned int)dword_140C02130 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 0x400000000008LL) )
  {
    v132 = 1LL;
    v201 = &v132;
    v86 = &dword_140022F14;
    v202 = 8LL;
    v203 = &v115;
    v87 = 5;
    v115 = KeyCommon;
    v205 = &v133;
    v88 = &v200;
    v204 = 4LL;
    v133 = 0x1000000LL;
    v206 = 8LL;
    goto LABEL_121;
  }
  CmSiFreeMemory((PPRIVILEGE_SET)v20);
  return (unsigned int)KeyCommon;
}
