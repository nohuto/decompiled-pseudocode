/*
 * XREFs of CmLoadAppKey @ 0x14071A870
 * Callers:
 *     CmLoadDifferencingKey @ 0x14067CE4C (CmLoadDifferencingKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     SetFailureLocation @ 0x14020A890 (SetFailureLocation.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14020A9C4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     CmpLoadKeyCommon @ 0x14020AABC (CmpLoadKeyCommon.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14024AC60 (CmpAllocateTransientPoolWithTag.c)
 *     ExInitializePushLock @ 0x1402A0840 (ExInitializePushLock.c)
 *     _tlgWriteAgg @ 0x1402A1A20 (_tlgWriteAgg.c)
 *     _tlgKeywordOn @ 0x1402A2000 (_tlgKeywordOn.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1402D6B0C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 *     ExBlockOnAddressPushLock @ 0x140369460 (ExBlockOnAddressPushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x14053EFBC (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     UNLOCK_HIVE_LOAD @ 0x14068934C (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x140689388 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1406893EC (LOCK_HIVE_LOAD.c)
 *     CmpDereferenceHive @ 0x1406A5F0C (CmpDereferenceHive.c)
 *     CmpGetLastHive @ 0x1406A5F34 (CmpGetLastHive.c)
 *     CmpLockAppHiveLoadList @ 0x1406D5E2C (CmpLockAppHiveLoadList.c)
 *     CmpUnlockAppHiveLoadList @ 0x1406D5E5C (CmpUnlockAppHiveLoadList.c)
 *     CmpCmdHiveOpen @ 0x14070AAD0 (CmpCmdHiveOpen.c)
 *     CmpOpenHiveFile @ 0x140713F8C (CmpOpenHiveFile.c)
 *     CmpIsThisSameFile @ 0x14071A464 (CmpIsThisSameFile.c)
 *     CmpGetNextHive @ 0x14071BA34 (CmpGetNextHive.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14071BC64 (CmpReferenceKeyControlBlockUnsafe.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     CmpConstructName @ 0x1407C05CC (CmpConstructName.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     CmpAcquireHiveLoadUnloadRundown @ 0x140AB4138 (CmpAcquireHiveLoadUnloadRundown.c)
 *     CmpReleaseHiveLoadUnloadRundown @ 0x140AB4178 (CmpReleaseHiveLoadUnloadRundown.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140AB4550 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AB4580 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmLoadAppKey(
        _QWORD *a1,
        const UNICODE_STRING *a2,
        int a3,
        __int64 a4,
        struct _KEVENT *a5,
        void *a6,
        char a7,
        __int64 *a8,
        ULONG_PTR *a9)
{
  unsigned __int16 *v11; // rax
  char v12; // r15
  volatile signed __int32 *LastHive; // r14
  unsigned int v14; // ecx
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r8
  PVOID TransientPoolWithTag; // rax
  int v19; // edx
  int v20; // ecx
  int v21; // edx
  signed int v22; // eax
  signed int KeyCommon; // ebx
  NTSTATUS v24; // eax
  _QWORD *v25; // rdi
  __int64 v26; // rax
  __int64 i; // rbx
  void *v28; // rdi
  signed int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rcx
  void *v35; // rcx
  __int64 NextHive; // rax
  __int64 v37; // rdi
  __int64 v38; // rcx
  void *v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rcx
  int v44; // eax
  __int64 v45; // rax
  __int64 *v46; // rbx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  ULONG_PTR *v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // r8
  unsigned int v59; // r9d
  int v60; // r11d
  int v61; // r9d
  int v62; // r10d
  __int64 v63; // r15
  __int64 v65; // rdx
  _QWORD *v66; // rcx
  _QWORD *v67; // rax
  _QWORD *v68; // rax
  __int64 v69; // rbx
  struct _EX_RUNDOWN_REF *v70; // rbx
  NTSTATUS v71; // eax
  unsigned int v72; // r9d
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // r8
  int v78; // r8d
  int v79; // r9d
  unsigned int Object; // [rsp+20h] [rbp-E0h]
  int v81; // [rsp+30h] [rbp-D0h]
  char v82[4]; // [rsp+60h] [rbp-A0h] BYREF
  _WORD v83[2]; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 v84; // [rsp+68h] [rbp-98h] BYREF
  int v85; // [rsp+70h] [rbp-90h] BYREF
  PVOID v86; // [rsp+78h] [rbp-88h]
  PVOID v87; // [rsp+80h] [rbp-80h] BYREF
  __int64 v88; // [rsp+88h] [rbp-78h] BYREF
  __int64 v89; // [rsp+90h] [rbp-70h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-68h] BYREF
  __int64 v91; // [rsp+A0h] [rbp-60h]
  int v92; // [rsp+A8h] [rbp-58h] BYREF
  int v93; // [rsp+ACh] [rbp-54h]
  int v94; // [rsp+B0h] [rbp-50h]
  int v95; // [rsp+B4h] [rbp-4Ch]
  PVOID P; // [rsp+B8h] [rbp-48h] BYREF
  int v97; // [rsp+C0h] [rbp-40h]
  _BYTE v98[80]; // [rsp+D0h] [rbp-30h] BYREF
  ULONG_PTR *v99; // [rsp+120h] [rbp+20h]
  __int64 *v100; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v101[3]; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v102; // [rsp+160h] [rbp+60h] BYREF
  __int64 *v103; // [rsp+180h] [rbp+80h]
  __int64 v104; // [rsp+188h] [rbp+88h]
  int *v105; // [rsp+190h] [rbp+90h]
  __int64 v106; // [rsp+198h] [rbp+98h]
  __int64 *v107; // [rsp+1A0h] [rbp+A0h]
  __int64 v108; // [rsp+1A8h] [rbp+A8h]
  __int64 *v109; // [rsp+1B0h] [rbp+B0h]
  __int64 v110; // [rsp+1B8h] [rbp+B8h]
  __int64 v111; // [rsp+1C0h] [rbp+C0h]
  __int64 v112; // [rsp+1C8h] [rbp+C8h]
  __int64 v113; // [rsp+1D0h] [rbp+D0h]
  int v114; // [rsp+1D8h] [rbp+D8h]
  int v115; // [rsp+1DCh] [rbp+DCh]
  __int64 v116; // [rsp+1E0h] [rbp+E0h]
  __int64 v117; // [rsp+1E8h] [rbp+E8h]
  __int64 v118; // [rsp+1F0h] [rbp+F0h]
  int v119; // [rsp+1F8h] [rbp+F8h]
  int v120; // [rsp+1FCh] [rbp+FCh]
  __int64 v121; // [rsp+200h] [rbp+100h]
  __int64 v122; // [rsp+208h] [rbp+108h]
  __int64 v123; // [rsp+210h] [rbp+110h]
  int v124; // [rsp+218h] [rbp+118h]
  int v125; // [rsp+21Ch] [rbp+11Ch]
  struct _EVENT_DATA_DESCRIPTOR v126; // [rsp+220h] [rbp+120h] BYREF
  __int64 *v127; // [rsp+240h] [rbp+140h]
  __int64 v128; // [rsp+248h] [rbp+148h]
  int *v129; // [rsp+250h] [rbp+150h]
  __int64 v130; // [rsp+258h] [rbp+158h]
  _WORD *v131; // [rsp+260h] [rbp+160h]
  __int64 v132; // [rsp+268h] [rbp+168h]
  char *v133; // [rsp+270h] [rbp+170h]
  __int64 v134; // [rsp+278h] [rbp+178h]
  __int64 *v135; // [rsp+280h] [rbp+180h]
  __int64 v136; // [rsp+288h] [rbp+188h]
  __int64 v137; // [rsp+290h] [rbp+190h]
  __int64 v138; // [rsp+298h] [rbp+198h]
  __int64 v139; // [rsp+2A0h] [rbp+1A0h]
  int v140; // [rsp+2A8h] [rbp+1A8h]
  int v141; // [rsp+2ACh] [rbp+1ACh]
  __int64 v142; // [rsp+2B0h] [rbp+1B0h]
  __int64 v143; // [rsp+2B8h] [rbp+1B8h]
  __int64 v144; // [rsp+2C0h] [rbp+1C0h]
  int v145; // [rsp+2C8h] [rbp+1C8h]
  int v146; // [rsp+2CCh] [rbp+1CCh]
  __int64 v147; // [rsp+2D0h] [rbp+1D0h]
  __int64 v148; // [rsp+2D8h] [rbp+1D8h]
  __int64 v149; // [rsp+2E0h] [rbp+1E0h]
  int v150; // [rsp+2E8h] [rbp+1E8h]
  int v151; // [rsp+2ECh] [rbp+1ECh]
  __int64 *v152; // [rsp+2F0h] [rbp+1F0h]
  __int64 v153; // [rsp+2F8h] [rbp+1F8h]

  v88 = (__int64)a5;
  v100 = a8;
  v95 = a3;
  v99 = a9;
  v89 = a4;
  v91 = (__int64)a6;
  v92 = 0;
  Handle = 0LL;
  memset(v98, 0, sizeof(v98));
  v11 = (unsigned __int16 *)a1[2];
  v82[0] = 0;
  memset(v101, 0, sizeof(v101));
  BYTE4(v84) = 0;
  v12 = 0;
  LOBYTE(v83[0]) = 0;
  LastHive = 0LL;
  v14 = *v11;
  v15 = 0LL;
  P = 0LL;
  v86 = 0LL;
  if ( (unsigned __int16)v14 >= 2u )
  {
    LODWORD(v16) = v14 >> 1;
    if ( v14 >> 1 )
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
  {
    KeyCommon = -1073741811;
    goto LABEL_113;
  }
  TransientPoolWithTag = CmpAllocateTransientPoolWithTag(PagedPool, 0x1B0uLL, 0x33394D43u, (PLOOKASIDE_LIST_EX)2);
  v15 = (__int64)TransientPoolWithTag;
  if ( !TransientPoolWithTag )
  {
    KeyCommon = -1073741670;
    goto LABEL_113;
  }
  memset(TransientPoolWithTag, 0, 0x1B0uLL);
  if ( !(unsigned __int8)CmpAcquireHiveLoadUnloadRundown() )
  {
    KeyCommon = -1073741431;
    goto LABEL_57;
  }
  v97 = v95 & 0x20;
  v19 = (v97 != 0 ? 118030337 : 50921473) | 0x8000000;
  if ( (v95 & 0x80u) == 0 )
    v19 = v97 != 0 ? 118030337 : 50921473;
  v20 = v19 | 0x10000000;
  if ( (v95 & 0x200) == 0 )
    v20 = v19;
  v94 = v20;
  v85 = v95 & 0x2000;
  v21 = (v85 != 0) | 0x20;
  if ( (v95 & 0x8000) == 0 )
    v21 = (v95 & 0x2000) != 0;
  v93 = v21;
  v22 = CmpOpenHiveFile(a2, 0, &Handle, &v92, 8u, a6, 0LL, 0LL, (__int64)&P, v15);
  KeyCommon = v22;
  if ( v22 == -1073741772 )
  {
    BYTE4(v84) = 1;
    *(_QWORD *)&v98[32] = a2;
    v98[40] = 1;
  }
  else
  {
    if ( v22 < 0 )
    {
      SetFailureLocation(v15, 0, 32, v22, 0x10u);
      goto LABEL_51;
    }
    v87 = 0LL;
    v24 = ObReferenceObjectByHandle(Handle, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &v87, 0LL);
    v25 = v87;
    KeyCommon = v24;
    v86 = v87;
    ZwClose(Handle);
    if ( KeyCommon < 0 )
    {
      SetFailureLocation(v15, 0, 32, KeyCommon, 0x20u);
      goto LABEL_49;
    }
    v26 = v25[5];
    v98[40] = 0;
    *(_QWORD *)&v98[32] = v26;
  }
  KeInitializeEvent((PRKEVENT)&v98[48], NotificationEvent, 0);
  ExInitializePushLock((PEX_RUNDOWN_REF)&v98[72]);
  *(_QWORD *)&v98[24] = &v98[16];
  *(_QWORD *)&v98[16] = &v98[16];
  CmpLockAppHiveLoadList();
  for ( i = CmpAppHiveLoadList; (__int64 *)i != &CmpAppHiveLoadList; i = *(_QWORD *)i )
  {
    if ( *(_BYTE *)(i + 40) )
    {
      if ( RtlEqualUnicodeString(*(PCUNICODE_STRING *)(i + 32), a2, 1u) )
      {
LABEL_77:
        v68 = *(_QWORD **)(i + 24);
        v69 = i + 16;
        if ( *v68 == v69 )
        {
          *(_QWORD *)&v98[24] = v68;
          *(_QWORD *)&v98[16] = v69;
          *v68 = &v98[16];
          *(_QWORD *)(v69 + 8) = &v98[16];
          v70 = *(struct _EX_RUNDOWN_REF **)&v98[24];
          ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)&v98[24] + 56LL));
          CmpUnlockAppHiveLoadList();
          KeWaitForSingleObject(&v70[4], Executive, 0, 0, 0LL);
          ExReleaseRundownProtection(v70 + 7);
          goto LABEL_21;
        }
LABEL_116:
        __fastfail(3u);
      }
    }
    else if ( *(_QWORD *)(i + 32) == *(_QWORD *)&v98[32] )
    {
      goto LABEL_77;
    }
  }
  if ( *(__int64 **)qword_140C49408 != &CmpAppHiveLoadList )
    goto LABEL_116;
  *(_QWORD *)v98 = &CmpAppHiveLoadList;
  *(_QWORD *)&v98[8] = qword_140C49408;
  *(_QWORD *)qword_140C49408 = v98;
  qword_140C49408 = (__int64)v98;
  CmpUnlockAppHiveLoadList();
LABEL_21:
  v28 = (void *)v91;
  v87 = 0LL;
  LOBYTE(v84) = 1;
  v29 = CmpCmdHiveOpen((int)a2, 1, (int)&v84, (__int64)&v87, v94, v93, v91, (__int64)v82, (void *)v15);
  while ( 1 )
  {
    KeyCommon = v29;
    if ( !v29 )
    {
      KeyCommon = CmpLoadKeyCommon((ULONG_PTR)v87, a1, v95, v89, 0LL, (struct _KEVENT *)v88, a7, v99, v84, v82[0], v15);
      goto LABEL_43;
    }
    if ( v29 != -1073741757 || v97 || v12 )
    {
      Object = 48;
      goto LABEL_105;
    }
    if ( BYTE4(v84) )
    {
      KeyCommon = CmpOpenHiveFile(a2, 0, &Handle, &v92, 8u, v28, 0LL, 0LL, (__int64)&P, v15);
      if ( KeyCommon < 0 )
      {
        Object = 64;
        if ( KeyCommon == -1073741772 )
          KeyCommon = -1073741757;
LABEL_105:
        v72 = KeyCommon;
LABEL_107:
        SetFailureLocation(v15, 0, 32, v72, Object);
        goto LABEL_43;
      }
      v87 = 0LL;
      v71 = ObReferenceObjectByHandle(Handle, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &v87, 0LL);
      v25 = v87;
      KeyCommon = v71;
      v86 = v87;
      ZwClose(Handle);
      if ( KeyCommon < 0 )
      {
        SetFailureLocation(v15, 0, 32, KeyCommon, 0x50u);
        goto LABEL_44;
      }
      v28 = (void *)v91;
    }
    LOCK_HIVE_LOAD();
    CmpLockRegistryFreezeAware(1);
    LastHive = (volatile signed __int32 *)CmpGetLastHive();
    if ( LastHive )
      break;
LABEL_99:
    CmpUnlockRegistry(v31, v30, v32, v33);
    UNLOCK_HIVE_LOAD();
    LOBYTE(v84) = 1;
    v82[0] = 0;
    v87 = 0LL;
    v29 = CmpCmdHiveOpen((int)a2, 1, (int)&v84, (__int64)&v87, v94, v93, (__int64)v28, (__int64)v82, (void *)v15);
    v12 = 1;
  }
LABEL_28:
  v34 = (unsigned int)CmpActiveAppHiveUnloadCount;
  LODWORD(v84) = CmpActiveAppHiveUnloadCount;
  while ( (_DWORD)v84 )
  {
    CmpUnlockRegistry(v34, v30, v32, v33);
    UNLOCK_HIVE_LOAD();
    ExBlockOnAddressPushLock((__int64)&CmpActiveAppHiveUnloadEvent, &CmpActiveAppHiveUnloadCount, &v84, 4uLL, 0LL);
    LOCK_HIVE_LOAD();
    CmpLockRegistryFreezeAware(1);
    LODWORD(v84) = CmpActiveAppHiveUnloadCount;
  }
  v35 = 0LL;
  while ( 1 )
  {
    NextHive = CmpGetNextHive(v35);
    v37 = NextHive;
    if ( !NextHive )
      goto LABEL_98;
    v38 = *(unsigned int *)(NextHive + 4768);
    LODWORD(v84) = v38;
    if ( (_DWORD)v38 )
    {
      CmpUnlockRegistry(v38, v30, v32, v33);
      UNLOCK_HIVE_LOAD();
      ExBlockOnAddressPushLock(v37 + 4776, (_QWORD *)(v37 + 4768), &v84, 4uLL, 0LL);
      LOCK_HIVE_LOAD();
      CmpLockRegistryFreezeAware(1);
      CmpDereferenceHive((volatile signed __int32 *)v37);
      if ( (volatile signed __int32 *)v37 != LastHive )
        goto LABEL_28;
      goto LABEL_98;
    }
    v39 = *(void **)(NextHive + 1544);
    if ( v39 )
    {
      if ( CmpIsThisSameFile((__int64)v86, v39) )
        break;
    }
    v35 = (void *)v37;
    if ( (volatile signed __int32 *)v37 == LastHive )
    {
      CmpDereferenceHive((volatile signed __int32 *)v37);
LABEL_98:
      v28 = (void *)v91;
      goto LABEL_99;
    }
  }
  v43 = *(unsigned int *)(v37 + 4112);
  v44 = *(_DWORD *)(v37 + 160) & 0x8000;
  if ( (v43 & 0x20) == 0 || (v43 & 0x40) != 0 )
  {
    CmpUnlockRegistry(v43, v40, v41, v42);
    UNLOCK_HIVE_LOAD();
    CmpDereferenceHive((volatile signed __int32 *)v37);
    v72 = -1073741757;
    Object = 96;
    KeyCommon = -1073741757;
    goto LABEL_107;
  }
  if ( v85 )
  {
    if ( !v44 && !CmpCheckHivePrimaryFileReadWriteAccess(P) )
    {
      CmpUnlockRegistry(v74, v73, v75, v76);
      UNLOCK_HIVE_LOAD();
      CmpDereferenceHive((volatile signed __int32 *)v37);
      KeyCommon = -1073741790;
      SetFailureLocation(v15, 0, 32, 0xC0000022, 0x80u);
      goto LABEL_43;
    }
  }
  else if ( v44 )
  {
    CmpUnlockRegistry(v43, v40, v41, v42);
    UNLOCK_HIVE_LOAD();
    CmpDereferenceHive((volatile signed __int32 *)v37);
    KeyCommon = -1073741757;
    SetFailureLocation(v15, 0, 32, 0xC0000043, 0x70u);
    goto LABEL_43;
  }
  CmpAttachToRegistryProcess(v101);
  v45 = CmpConstructName(*(_QWORD *)(v37 + 2936));
  v46 = v100;
  *v100 = v45;
  CmpDetachFromRegistryProcess(v101);
  if ( *v46 )
  {
    CmpReferenceKeyControlBlockUnsafe(*(_QWORD *)(v37 + 2936));
    v51 = v99;
    *v99 = *(_QWORD *)(v37 + 2936);
    CmpUnlockRegistry(v51, v52, v53, v54);
    UNLOCK_HIVE_LOAD();
    CmpDereferenceHive((volatile signed __int32 *)v37);
    LOBYTE(v83[0]) = 1;
    KeyCommon = 0;
  }
  else
  {
    CmpUnlockRegistry(v48, v47, v49, v50);
    UNLOCK_HIVE_LOAD();
    KeyCommon = -1073741670;
    CmpDereferenceHive((volatile signed __int32 *)v37);
  }
LABEL_43:
  v25 = v86;
LABEL_44:
  CmpLockAppHiveLoadList();
  v55 = *(_QWORD *)v98;
  v56 = *(_QWORD *)&v98[8];
  if ( *(_BYTE **)(*(_QWORD *)v98 + 8LL) != v98 || **(_BYTE ***)&v98[8] != v98 )
    goto LABEL_116;
  **(_QWORD **)&v98[8] = *(_QWORD *)v98;
  *(_QWORD *)(v55 + 8) = v56;
  v57 = *(_QWORD *)&v98[16];
  if ( *(_BYTE **)&v98[16] != &v98[16] )
  {
    v65 = *(_QWORD *)&v98[24];
    v66 = (_QWORD *)(*(_QWORD *)&v98[16] - 16LL);
    if ( *(_BYTE **)(*(_QWORD *)&v98[16] + 8LL) == &v98[16] && **(_BYTE ***)&v98[24] == &v98[16] )
    {
      **(_QWORD **)&v98[24] = *(_QWORD *)&v98[16];
      *(_QWORD *)(v57 + 8) = v65;
      v67 = (_QWORD *)qword_140C49408;
      if ( *(__int64 **)qword_140C49408 == &CmpAppHiveLoadList )
      {
        *v66 = &CmpAppHiveLoadList;
        v66[1] = v67;
        *v67 = v66;
        qword_140C49408 = (__int64)v66;
        goto LABEL_47;
      }
    }
    goto LABEL_116;
  }
LABEL_47:
  CmpUnlockAppHiveLoadList();
  KeSetEvent((PRKEVENT)&v98[48], 0, 0);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&v98[72]);
  if ( LastHive )
    CmpDereferenceHive(LastHive);
LABEL_49:
  if ( v25 )
    ObfDereferenceObject(v25);
LABEL_51:
  if ( P )
    ExFreePoolWithTag(P, 0);
  CmpReleaseHiveLoadUnloadRundown();
  if ( KeyCommon >= 0 )
  {
    if ( (unsigned int)dword_140C03868 > 5 && tlgKeywordOn((__int64)&dword_140C03868, 0x400000000008LL) )
    {
      v104 = 8LL;
      v89 = 1LL;
      v103 = &v89;
      v108 = 1LL;
      v105 = &v85;
      v107 = (__int64 *)v83;
      v109 = &v88;
      v85 = KeyCommon;
      v106 = 4LL;
      v88 = 0x1000000LL;
      v110 = 8LL;
      tlgWriteAgg((__int64)&dword_140C03868, (unsigned __int8 *)&byte_1400293C1, v58, 6u, &v102);
    }
    goto LABEL_67;
  }
LABEL_57:
  if ( *(_WORD *)(v15 + 8) || *(_WORD *)(v15 + 10) || *(_BYTE *)(v15 + 394) )
  {
    if ( (unsigned int)dword_140C03868 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_140C03868, 0x400000000008LL) )
      {
        v89 = 1LL;
        v61 = *(unsigned __int16 *)(v15 + 10);
        v62 = *(unsigned __int8 *)(v15 + 394);
        v127 = &v89;
        v63 = v15 + 12;
        LOWORD(v84) = v62;
        v129 = &v85;
        v131 = v83;
        v133 = (char *)&v84 + 4;
        v135 = &v84;
        v144 = v15 + 108;
        v145 = 12 * v61;
        v149 = v15 + 396;
        v152 = &v88;
        WORD2(v84) = v61;
        v140 = 12 * v60;
        v142 = v15 + 10;
        v128 = 8LL;
        v85 = KeyCommon;
        v130 = 4LL;
        v83[0] = v60;
        v132 = 2LL;
        v134 = 2LL;
        v136 = 2LL;
        v137 = v15 + 8;
        v138 = 2LL;
        v139 = v15 + 12;
        v141 = 0;
        v143 = 2LL;
        v146 = 0;
        v147 = v15 + 394;
        v148 = 2LL;
        v150 = 8 * v62;
        v151 = 0;
        v88 = 0x1000000LL;
        v153 = 8LL;
        tlgWriteAgg((__int64)&dword_140C03868, (unsigned __int8 *)&byte_14002942B, v15 + 394, 0xEu, &v126);
        v59 = dword_140C03868;
      }
      else
      {
        v63 = v15 + 12;
      }
      if ( v59 > 5 && tlgKeywordOn((__int64)&dword_140C03868, 8LL) )
      {
        v85 = KeyCommon;
        v103 = (__int64 *)&v85;
        v83[0] = *(_WORD *)(v15 + 8);
        v105 = (int *)v83;
        v78 = *(unsigned __int16 *)(v15 + 10);
        v107 = (__int64 *)((char *)&v84 + 4);
        v79 = *(unsigned __int8 *)(v15 + 394);
        v114 = 12 * v83[0];
        v118 = v15 + 108;
        v119 = 12 * v78;
        LOWORD(v84) = v79;
        v123 = v15 + 396;
        WORD2(v84) = v78;
        v116 = v15 + 10;
        v121 = v15 + 394;
        v124 = 8 * v79;
        v104 = 4LL;
        v106 = 2LL;
        v108 = 2LL;
        v109 = &v84;
        v110 = 2LL;
        v111 = v15 + 8;
        v112 = 2LL;
        v113 = v63;
        v115 = 0;
        v117 = 2LL;
        v120 = 0;
        v122 = 2LL;
        v125 = 0;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C03868,
          (unsigned __int8 *)byte_140029285,
          0LL,
          0LL,
          0xCu,
          &v102);
      }
    }
  }
  else
  {
LABEL_113:
    if ( (unsigned int)dword_140C03868 > 5 && tlgKeywordOn((__int64)&dword_140C03868, 0x400000000008LL) )
    {
      v89 = 1LL;
      v103 = &v89;
      v104 = 8LL;
      v105 = &v85;
      v85 = KeyCommon;
      v107 = &v88;
      v106 = 4LL;
      v88 = 0x1000000LL;
      v108 = 8LL;
      tlgWriteAgg((__int64)&dword_140C03868, (unsigned __int8 *)&word_14002958E, v77, 5u, &v102);
    }
  }
  if ( KeyCommon == -1073741790 )
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_LiveDumpOnAppxAllUserStoreAccessDenied__private_reporting,
      0x1C1EA01u,
      0,
      0,
      (__int64)&Feature_LiveDumpOnAppxAllUserStoreAccessDenied_logged_traits,
      0,
      v81);
  if ( v15 )
LABEL_67:
    CmSiFreeMemory((PPRIVILEGE_SET)v15);
  return (unsigned int)KeyCommon;
}
