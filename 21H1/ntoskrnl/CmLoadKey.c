/*
 * XREFs of CmLoadKey @ 0x1405D5730
 * Callers:
 *     CmLoadDifferencingKey @ 0x14068C83C (CmLoadDifferencingKey.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14025C5C0 (CmpAllocateTransientPoolWithTag.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402D5DD4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402D5F54 (_tlgKeywordOn.c)
 *     CmpLoadKeyCommon @ 0x1402E1B78 (CmpLoadKeyCommon.c)
 *     CmSiFreeMemory @ 0x1402E2170 (CmSiFreeMemory.c)
 *     SetFailureLocation @ 0x140315198 (SetFailureLocation.c)
 *     _tlgWriteAgg @ 0x1403727B4 (_tlgWriteAgg.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     memset @ 0x140408F80 (memset.c)
 *     CmpQueryHiveRedirectionFileList @ 0x1405D56A4 (CmpQueryHiveRedirectionFileList.c)
 *     CmpCmdHiveOpen @ 0x1405D63B0 (CmpCmdHiveOpen.c)
 *     CmpAttachToRegistryProcess @ 0x14061FF00 (CmpAttachToRegistryProcess.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     CmpOpenHiveFile @ 0x140664008 (CmpOpenHiveFile.c)
 *     CmpDestroyHive @ 0x140715158 (CmpDestroyHive.c)
 *     CmpResolveHiveLoadConflict @ 0x14086A178 (CmpResolveHiveLoadConflict.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmLoadKey(
        _QWORD *a1,
        const UNICODE_STRING *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        char a6,
        __int64 a7,
        __int64 a8,
        char a9,
        __int64 a10,
        ULONG_PTR *a11)
{
  unsigned __int16 *v14; // rax
  unsigned int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // r8
  wchar_t *PoolWithTag; // rax
  wchar_t *v19; // r12
  UNICODE_STRING *v20; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  struct _LOOKASIDE_LIST_EX *v24; // r9
  int v25; // ebx
  PVOID TransientPoolWithTag; // rax
  __int64 v27; // rdi
  int v28; // edx
  int v29; // eax
  int v30; // ebx
  _DWORD *v31; // rsi
  char v32; // r13
  int KeyCommon; // eax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r8
  UNICODE_STRING *p_Destination; // rax
  NTSTATUS v40; // ebx
  int Conflict; // ebx
  void *v42; // rcx
  NTSTATUS v43; // eax
  __int64 v44; // r8
  _DWORD *v45; // r9
  unsigned int v46; // r9d
  int v47; // r9d
  int v48; // edx
  __int64 v49; // r14
  int v50; // r10d
  int v51; // edx
  int v52; // r9d
  int v53; // r10d
  int Object; // [rsp+20h] [rbp-E0h]
  int HandleInformation; // [rsp+28h] [rbp-D8h]
  char v56; // [rsp+60h] [rbp-A0h] BYREF
  char v57; // [rsp+61h] [rbp-9Fh] BYREF
  __int16 v58; // [rsp+64h] [rbp-9Ch] BYREF
  __int16 v59; // [rsp+68h] [rbp-98h] BYREF
  __int16 v60; // [rsp+6Ch] [rbp-94h] BYREF
  __int16 v61; // [rsp+70h] [rbp-90h] BYREF
  __int16 v62; // [rsp+74h] [rbp-8Ch] BYREF
  __int16 v63; // [rsp+78h] [rbp-88h] BYREF
  __int64 v64; // [rsp+80h] [rbp-80h] BYREF
  int v65; // [rsp+88h] [rbp-78h]
  int v66; // [rsp+8Ch] [rbp-74h] BYREF
  int v67; // [rsp+90h] [rbp-70h] BYREF
  int v68; // [rsp+94h] [rbp-6Ch] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-68h]
  PVOID v70; // [rsp+A0h] [rbp-60h] BYREF
  PVOID v71; // [rsp+A8h] [rbp-58h] BYREF
  ULONG_PTR *v72; // [rsp+B0h] [rbp-50h]
  __int64 v73; // [rsp+B8h] [rbp-48h]
  __int64 v74; // [rsp+C0h] [rbp-40h]
  __int64 v75; // [rsp+C8h] [rbp-38h]
  __int64 v76; // [rsp+D0h] [rbp-30h]
  __int64 v77; // [rsp+D8h] [rbp-28h]
  UNICODE_STRING Destination; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v79; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v80; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v81; // [rsp+100h] [rbp+0h] BYREF
  __int64 v82; // [rsp+108h] [rbp+8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v83[3]; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v84; // [rsp+140h] [rbp+40h] BYREF
  __int64 *v85; // [rsp+160h] [rbp+60h]
  __int64 v86; // [rsp+168h] [rbp+68h]
  int *v87; // [rsp+170h] [rbp+70h]
  __int64 v88; // [rsp+178h] [rbp+78h]
  __int16 *v89; // [rsp+180h] [rbp+80h]
  __int64 v90; // [rsp+188h] [rbp+88h]
  __int16 *v91; // [rsp+190h] [rbp+90h]
  __int64 v92; // [rsp+198h] [rbp+98h]
  __int16 *v93; // [rsp+1A0h] [rbp+A0h]
  __int64 v94; // [rsp+1A8h] [rbp+A8h]
  __int64 v95; // [rsp+1B0h] [rbp+B0h]
  __int64 v96; // [rsp+1B8h] [rbp+B8h]
  __int64 v97; // [rsp+1C0h] [rbp+C0h]
  int v98; // [rsp+1C8h] [rbp+C8h]
  int v99; // [rsp+1CCh] [rbp+CCh]
  __int64 v100; // [rsp+1D0h] [rbp+D0h]
  __int64 v101; // [rsp+1D8h] [rbp+D8h]
  __int64 v102; // [rsp+1E0h] [rbp+E0h]
  int v103; // [rsp+1E8h] [rbp+E8h]
  int v104; // [rsp+1ECh] [rbp+ECh]
  __int64 v105; // [rsp+1F0h] [rbp+F0h]
  __int64 v106; // [rsp+1F8h] [rbp+F8h]
  __int64 v107; // [rsp+200h] [rbp+100h]
  int v108; // [rsp+208h] [rbp+108h]
  int v109; // [rsp+20Ch] [rbp+10Ch]
  __int64 *v110; // [rsp+210h] [rbp+110h]
  __int64 v111; // [rsp+218h] [rbp+118h]
  struct _EVENT_DATA_DESCRIPTOR v112; // [rsp+220h] [rbp+120h] BYREF
  int *v113; // [rsp+240h] [rbp+140h]
  __int64 v114; // [rsp+248h] [rbp+148h]
  __int16 *v115; // [rsp+250h] [rbp+150h]
  __int64 v116; // [rsp+258h] [rbp+158h]
  __int16 *v117; // [rsp+260h] [rbp+160h]
  __int64 v118; // [rsp+268h] [rbp+168h]
  __int16 *v119; // [rsp+270h] [rbp+170h]
  __int64 v120; // [rsp+278h] [rbp+178h]
  __int64 v121; // [rsp+280h] [rbp+180h]
  __int64 v122; // [rsp+288h] [rbp+188h]
  __int64 v123; // [rsp+290h] [rbp+190h]
  int v124; // [rsp+298h] [rbp+198h]
  int v125; // [rsp+29Ch] [rbp+19Ch]
  __int64 v126; // [rsp+2A0h] [rbp+1A0h]
  __int64 v127; // [rsp+2A8h] [rbp+1A8h]
  __int64 v128; // [rsp+2B0h] [rbp+1B0h]
  int v129; // [rsp+2B8h] [rbp+1B8h]
  int v130; // [rsp+2BCh] [rbp+1BCh]
  __int64 v131; // [rsp+2C0h] [rbp+1C0h]
  __int64 v132; // [rsp+2C8h] [rbp+1C8h]
  __int64 v133; // [rsp+2D0h] [rbp+1D0h]
  int v134; // [rsp+2D8h] [rbp+1D8h]
  int v135; // [rsp+2DCh] [rbp+1DCh]
  struct _EVENT_DATA_DESCRIPTOR v136; // [rsp+2E0h] [rbp+1E0h] BYREF
  __int64 *v137; // [rsp+300h] [rbp+200h]
  __int64 v138; // [rsp+308h] [rbp+208h]
  int *v139; // [rsp+310h] [rbp+210h]
  __int64 v140; // [rsp+318h] [rbp+218h]
  __int64 *v141; // [rsp+320h] [rbp+220h]
  __int64 v142; // [rsp+328h] [rbp+228h]

  v77 = a5;
  v73 = a7;
  v75 = a8;
  v76 = a10;
  v72 = a11;
  v14 = (unsigned __int16 *)a1[2];
  v56 = 0;
  memset(v83, 0, sizeof(v83));
  v74 = a4;
  v64 = 0LL;
  v15 = *v14;
  Handle = 0LL;
  v65 = 0;
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
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x104uLL, 0x62534D43u);
  v19 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  v20 = (UNICODE_STRING *)a1[2];
  *(_QWORD *)&Destination.Length = 17039360LL;
  Destination.Buffer = PoolWithTag;
  if ( CmpQueryHiveRedirectionFileList(v20, &Destination) )
  {
    p_Destination = &Destination;
    if ( Destination.Length == 2 )
      p_Destination = (UNICODE_STRING *)a2;
    a2 = p_Destination;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v22, v23, (__int64)v24);
    ExFreePoolWithTag(v19, 0);
    return 3221225865LL;
  }
  v25 = ((a3 & 0x2000) != 0 ? 3 : 0) | 8;
  if ( (a3 & 0x4000) == 0 )
    v25 = (a3 & 0x2000) != 0 ? 3 : 0;
  TransientPoolWithTag = CmpAllocateTransientPoolWithTag(PagedPool, 0x1B0uLL, 0x33394D43u, v24);
  v27 = (__int64)TransientPoolWithTag;
  if ( !TransientPoolWithTag )
  {
    v30 = -1073741670;
    goto LABEL_22;
  }
  memset(TransientPoolWithTag, 0, 0x1B0uLL);
  v57 = 1;
  v28 = v25 | 4;
  if ( !v77 )
    v28 = v25;
  HandleInformation = v28;
  LOBYTE(v28) = 1;
  v29 = CmpCmdHiveOpen(
          (_DWORD)a2,
          v28,
          (unsigned int)&v57,
          (unsigned int)&v64,
          ((a3 & 0xFFFFF221 | (2 * (a3 & 0x480 | (2 * (a3 & 0x20 | ((a3 & 4) << 6)))))) << 19) | 0x1090001,
          HandleInformation,
          v75,
          (__int64)&v56,
          v27);
  v30 = v29;
  if ( v29 < 0 )
  {
    if ( v29 != -1073741757 )
    {
      SetFailureLocation(v27, 0, 31, v29, 16);
      v31 = (_DWORD *)v64;
      goto LABEL_20;
    }
    if ( (int)CmpOpenHiveFile(a2, 8, v75, 0LL, 0LL, 0LL) >= 0 )
    {
      v70 = 0LL;
      v40 = ObReferenceObjectByHandle(Handle, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &v70, 0LL);
      ZwClose(Handle);
      if ( v40 < 0 )
      {
        Object = 48;
      }
      else
      {
        Conflict = CmpResolveHiveLoadConflict((_DWORD)a1, (_DWORD)v70, a3, v74, v73, v27, a9, v76, (__int64)v72);
        HalPutDmaAdapter((PADAPTER_OBJECT)v70);
        if ( Conflict >= 0 )
        {
          v31 = (_DWORD *)v64;
          goto LABEL_19;
        }
        Object = 64;
      }
    }
    else
    {
      Object = 32;
    }
    v30 = -1073741757;
    SetFailureLocation(v27, 0, 31, -1073741757, Object);
    v31 = (_DWORD *)v64;
    goto LABEL_20;
  }
  v31 = (_DWORD *)v64;
  if ( (a3 & 0x2000) != 0 )
  {
    v42 = *(void **)(v64 + 1536);
    v71 = 0LL;
    v43 = ObReferenceObjectByHandle(v42, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &v71, 0LL);
    v30 = v43;
    if ( v43 < 0 )
    {
      SetFailureLocation(v27, 0, 31, v43, 80);
      goto LABEL_20;
    }
    v32 = a9;
    v30 = CmpResolveHiveLoadConflict((_DWORD)a1, (_DWORD)v71, a3, v74, v73, v27, a9, v76, (__int64)v72);
    HalPutDmaAdapter((PADAPTER_OBJECT)v71);
    if ( v30 < 0 )
    {
      if ( v30 == -1073741275 )
        goto LABEL_16;
      SetFailureLocation(v27, 0, 31, v30, 96);
LABEL_20:
      if ( v31 )
      {
        CmpAttachToRegistryProcess(v83);
        CmpDestroyHive(v31);
        KiUnstackDetachProcess((__int64)v83, 0LL, v44, v45);
      }
      goto LABEL_22;
    }
LABEL_19:
    v30 = 0;
    goto LABEL_20;
  }
  v32 = a9;
LABEL_16:
  if ( a6 )
    v31[1038] |= 0x2000u;
  KeyCommon = CmpLoadKeyCommon((char *)v31, a1, a3, v74, v77, v73, v32, v72, v57, v56, v27);
  v30 = KeyCommon;
  v31 = 0LL;
  if ( KeyCommon >= 0 )
    goto LABEL_19;
  SetFailureLocation(v27, 0, 31, KeyCommon, 112);
LABEL_22:
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v34, v35, v36);
  ExFreePoolWithTag(v19, 0);
  if ( v30 < 0 )
  {
    if ( (unsigned int)dword_140C02130 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_140C02130, 0x400000000008LL) )
      {
        v79 = 1LL;
        v85 = &v79;
        v89 = &v58;
        v87 = &v66;
        v47 = *(unsigned __int16 *)(v27 + 10);
        v48 = *(unsigned __int16 *)(v27 + 8);
        v95 = v27 + 8;
        v91 = &v59;
        v49 = v27 + 12;
        v58 = v48;
        v50 = *(unsigned __int8 *)(v27 + 394);
        v98 = 12 * v48;
        v102 = v27 + 108;
        v103 = 12 * v47;
        v107 = v27 + 396;
        v110 = &v80;
        v60 = v50;
        v59 = v47;
        v100 = v27 + 10;
        v86 = 8LL;
        v66 = v30;
        v88 = 4LL;
        v90 = 2LL;
        v92 = 2LL;
        v93 = &v60;
        v94 = 2LL;
        v96 = 2LL;
        v97 = v27 + 12;
        v99 = 0;
        v101 = 2LL;
        v104 = 0;
        v105 = v27 + 394;
        v106 = 2LL;
        v108 = 8 * v50;
        v109 = 0;
        v80 = 0x1000000LL;
        v111 = 8LL;
        tlgWriteAgg((__int64)&dword_140C02130, (unsigned __int8 *)&dword_140021C24, v27 + 394, 0xEu, &v84);
        v46 = dword_140C02130;
      }
      else
      {
        v49 = v27 + 12;
      }
      if ( v46 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 8LL) )
      {
        v67 = v30;
        v113 = &v67;
        v115 = &v61;
        v51 = *(unsigned __int16 *)(v27 + 8);
        v52 = *(unsigned __int16 *)(v27 + 10);
        v121 = v27 + 8;
        v117 = &v62;
        v53 = *(unsigned __int8 *)(v27 + 394);
        v124 = 12 * v51;
        v128 = v27 + 108;
        v129 = 12 * v52;
        v133 = v27 + 396;
        v63 = v53;
        v61 = v51;
        v62 = v52;
        v126 = v27 + 10;
        v131 = v27 + 394;
        v114 = 4LL;
        v116 = 2LL;
        v118 = 2LL;
        v119 = &v63;
        v120 = 2LL;
        v122 = 2LL;
        v123 = v49;
        v125 = 0;
        v127 = 2LL;
        v130 = 0;
        v132 = 2LL;
        v134 = 8 * v53;
        v135 = 0;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C02130,
          (unsigned __int8 *)&unk_140021A98,
          0LL,
          0LL,
          0xCu,
          &v112);
      }
    }
  }
  else if ( (unsigned int)dword_140C02130 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 0x400000000008LL) )
  {
    v81 = 1LL;
    v137 = &v81;
    v138 = 8LL;
    v139 = &v68;
    v68 = v30;
    v141 = &v82;
    v140 = 4LL;
    v82 = 0x1000000LL;
    v142 = 8LL;
    tlgWriteAgg((__int64)&dword_140C02130, (unsigned __int8 *)&byte_140021BD1, v37, 5u, &v136);
  }
  if ( v27 )
    CmSiFreeMemory((PPRIVILEGE_SET)v27);
  return (unsigned int)v30;
}
