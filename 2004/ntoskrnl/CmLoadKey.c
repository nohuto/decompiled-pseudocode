/*
 * XREFs of CmLoadKey @ 0x1406525D0
 * Callers:
 *     CmLoadDifferencingKey @ 0x140650EAC (CmLoadDifferencingKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402029C0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x1402036A0 (CmpAllocateTransientPoolWithTag.c)
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14026C434 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14026C5B4 (_tlgKeywordOn.c)
 *     CmpLoadKeyCommon @ 0x140271C20 (CmpLoadKeyCommon.c)
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402993F0 (ExAcquireRundownProtection_0.c)
 *     SetFailureLocation @ 0x140352EE8 (SetFailureLocation.c)
 *     _tlgWriteAgg @ 0x1403735C4 (_tlgWriteAgg.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     memset @ 0x14040A280 (memset.c)
 *     CmpAttachToRegistryProcess @ 0x1405EA8E0 (CmpAttachToRegistryProcess.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     CmpOpenHiveFile @ 0x14061E8E8 (CmpOpenHiveFile.c)
 *     CmpQueryHiveRedirectionFileList @ 0x140652974 (CmpQueryHiveRedirectionFileList.c)
 *     CmpCmdHiveOpen @ 0x14065E3B8 (CmpCmdHiveOpen.c)
 *     CmpDestroyHive @ 0x1407174E8 (CmpDestroyHive.c)
 *     CmpResolveHiveLoadConflict @ 0x14086B4C8 (CmpResolveHiveLoadConflict.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmLoadKey(
        _QWORD *a1,
        UNICODE_STRING *a2,
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
  struct _LOOKASIDE_LIST_EX *v22; // r9
  int v23; // ebx
  PVOID TransientPoolWithTag; // rax
  __int64 v25; // rdi
  int v26; // edx
  int v27; // eax
  int v28; // ebx
  _DWORD *v29; // rsi
  char v30; // r13
  int KeyCommon; // eax
  __int64 v32; // r8
  UNICODE_STRING *p_Destination; // rax
  NTSTATUS v35; // ebx
  int Conflict; // ebx
  void *v37; // rcx
  NTSTATUS v38; // eax
  unsigned int v39; // r9d
  int v40; // r9d
  int v41; // edx
  __int64 v42; // r14
  int v43; // r10d
  int v44; // edx
  int v45; // r9d
  int v46; // r10d
  int Object; // [rsp+20h] [rbp-E0h]
  int HandleInformation; // [rsp+28h] [rbp-D8h]
  char v49; // [rsp+60h] [rbp-A0h] BYREF
  char v50; // [rsp+61h] [rbp-9Fh] BYREF
  __int16 v51; // [rsp+64h] [rbp-9Ch] BYREF
  __int16 v52; // [rsp+68h] [rbp-98h] BYREF
  __int16 v53; // [rsp+6Ch] [rbp-94h] BYREF
  __int16 v54; // [rsp+70h] [rbp-90h] BYREF
  __int16 v55; // [rsp+74h] [rbp-8Ch] BYREF
  __int16 v56; // [rsp+78h] [rbp-88h] BYREF
  __int64 v57; // [rsp+80h] [rbp-80h] BYREF
  int v58; // [rsp+88h] [rbp-78h] BYREF
  int v59; // [rsp+8Ch] [rbp-74h] BYREF
  int v60; // [rsp+90h] [rbp-70h] BYREF
  int v61; // [rsp+94h] [rbp-6Ch] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-68h] BYREF
  PVOID v63; // [rsp+A0h] [rbp-60h] BYREF
  PVOID v64; // [rsp+A8h] [rbp-58h] BYREF
  ULONG_PTR *v65; // [rsp+B0h] [rbp-50h]
  __int64 v66; // [rsp+B8h] [rbp-48h]
  __int64 v67; // [rsp+C0h] [rbp-40h]
  __int64 v68; // [rsp+C8h] [rbp-38h]
  __int64 v69; // [rsp+D0h] [rbp-30h]
  __int64 v70; // [rsp+D8h] [rbp-28h]
  UNICODE_STRING Destination; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v72; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v73; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v74; // [rsp+100h] [rbp+0h] BYREF
  __int64 v75; // [rsp+108h] [rbp+8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v76[3]; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v77; // [rsp+140h] [rbp+40h] BYREF
  __int64 *v78; // [rsp+160h] [rbp+60h]
  __int64 v79; // [rsp+168h] [rbp+68h]
  int *v80; // [rsp+170h] [rbp+70h]
  __int64 v81; // [rsp+178h] [rbp+78h]
  __int16 *v82; // [rsp+180h] [rbp+80h]
  __int64 v83; // [rsp+188h] [rbp+88h]
  __int16 *v84; // [rsp+190h] [rbp+90h]
  __int64 v85; // [rsp+198h] [rbp+98h]
  __int16 *v86; // [rsp+1A0h] [rbp+A0h]
  __int64 v87; // [rsp+1A8h] [rbp+A8h]
  __int64 v88; // [rsp+1B0h] [rbp+B0h]
  __int64 v89; // [rsp+1B8h] [rbp+B8h]
  __int64 v90; // [rsp+1C0h] [rbp+C0h]
  int v91; // [rsp+1C8h] [rbp+C8h]
  int v92; // [rsp+1CCh] [rbp+CCh]
  __int64 v93; // [rsp+1D0h] [rbp+D0h]
  __int64 v94; // [rsp+1D8h] [rbp+D8h]
  __int64 v95; // [rsp+1E0h] [rbp+E0h]
  int v96; // [rsp+1E8h] [rbp+E8h]
  int v97; // [rsp+1ECh] [rbp+ECh]
  __int64 v98; // [rsp+1F0h] [rbp+F0h]
  __int64 v99; // [rsp+1F8h] [rbp+F8h]
  __int64 v100; // [rsp+200h] [rbp+100h]
  int v101; // [rsp+208h] [rbp+108h]
  int v102; // [rsp+20Ch] [rbp+10Ch]
  __int64 *v103; // [rsp+210h] [rbp+110h]
  __int64 v104; // [rsp+218h] [rbp+118h]
  struct _EVENT_DATA_DESCRIPTOR v105; // [rsp+220h] [rbp+120h] BYREF
  int *v106; // [rsp+240h] [rbp+140h]
  __int64 v107; // [rsp+248h] [rbp+148h]
  __int16 *v108; // [rsp+250h] [rbp+150h]
  __int64 v109; // [rsp+258h] [rbp+158h]
  __int16 *v110; // [rsp+260h] [rbp+160h]
  __int64 v111; // [rsp+268h] [rbp+168h]
  __int16 *v112; // [rsp+270h] [rbp+170h]
  __int64 v113; // [rsp+278h] [rbp+178h]
  __int64 v114; // [rsp+280h] [rbp+180h]
  __int64 v115; // [rsp+288h] [rbp+188h]
  __int64 v116; // [rsp+290h] [rbp+190h]
  int v117; // [rsp+298h] [rbp+198h]
  int v118; // [rsp+29Ch] [rbp+19Ch]
  __int64 v119; // [rsp+2A0h] [rbp+1A0h]
  __int64 v120; // [rsp+2A8h] [rbp+1A8h]
  __int64 v121; // [rsp+2B0h] [rbp+1B0h]
  int v122; // [rsp+2B8h] [rbp+1B8h]
  int v123; // [rsp+2BCh] [rbp+1BCh]
  __int64 v124; // [rsp+2C0h] [rbp+1C0h]
  __int64 v125; // [rsp+2C8h] [rbp+1C8h]
  __int64 v126; // [rsp+2D0h] [rbp+1D0h]
  int v127; // [rsp+2D8h] [rbp+1D8h]
  int v128; // [rsp+2DCh] [rbp+1DCh]
  struct _EVENT_DATA_DESCRIPTOR v129; // [rsp+2E0h] [rbp+1E0h] BYREF
  __int64 *v130; // [rsp+300h] [rbp+200h]
  __int64 v131; // [rsp+308h] [rbp+208h]
  int *v132; // [rsp+310h] [rbp+210h]
  __int64 v133; // [rsp+318h] [rbp+218h]
  __int64 *v134; // [rsp+320h] [rbp+220h]
  __int64 v135; // [rsp+328h] [rbp+228h]

  v70 = a5;
  v66 = a7;
  v68 = a8;
  v69 = a10;
  v65 = a11;
  v14 = (unsigned __int16 *)a1[2];
  v49 = 0;
  memset(v76, 0, sizeof(v76));
  v67 = a4;
  v57 = 0LL;
  v15 = *v14;
  Handle = 0LL;
  v58 = 0;
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
  if ( (unsigned __int8)CmpQueryHiveRedirectionFileList(v20, &Destination) )
  {
    p_Destination = &Destination;
    if ( Destination.Length == 2 )
      p_Destination = a2;
    a2 = p_Destination;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    ExFreePoolWithTag(v19, 0);
    return 3221225865LL;
  }
  v23 = ((a3 & 0x2000) != 0 ? 3 : 0) | 8;
  if ( (a3 & 0x4000) == 0 )
    v23 = (a3 & 0x2000) != 0 ? 3 : 0;
  TransientPoolWithTag = CmpAllocateTransientPoolWithTag(PagedPool, 0x1B0uLL, 0x33394D43u, v22);
  v25 = (__int64)TransientPoolWithTag;
  if ( !TransientPoolWithTag )
  {
    v28 = -1073741670;
    goto LABEL_22;
  }
  memset(TransientPoolWithTag, 0, 0x1B0uLL);
  v50 = 1;
  v26 = v23 | 4;
  if ( !v70 )
    v26 = v23;
  HandleInformation = v26;
  LOBYTE(v26) = 1;
  v27 = CmpCmdHiveOpen(
          (_DWORD)a2,
          v26,
          (unsigned int)&v50,
          (unsigned int)&v57,
          ((a3 & 0xFFFFF223 | (2 * (a3 & 0x480 | (2 * (a3 & 0x20 | ((a3 & 4) << 6)))))) << 19) | 0x1190001,
          HandleInformation,
          v68,
          (__int64)&v49,
          v25);
  v28 = v27;
  if ( v27 < 0 )
  {
    if ( v27 != -1073741757 )
    {
      SetFailureLocation(v25, 0, 31, v27, 16);
      v29 = (_DWORD *)v57;
      goto LABEL_20;
    }
    if ( (int)CmpOpenHiveFile(a2, 0, &Handle, &v58, 8u, (void *)v68, 0LL, 0LL, 0LL) >= 0 )
    {
      v63 = 0LL;
      v35 = ObReferenceObjectByHandle(Handle, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &v63, 0LL);
      ZwClose(Handle);
      if ( v35 < 0 )
      {
        Object = 48;
      }
      else
      {
        Conflict = CmpResolveHiveLoadConflict((_DWORD)a1, (_DWORD)v63, a3, v67, v66, v25, a9, v69, (__int64)v65);
        HalPutDmaAdapter((PADAPTER_OBJECT)v63);
        if ( Conflict >= 0 )
        {
          v29 = (_DWORD *)v57;
          goto LABEL_19;
        }
        Object = 64;
      }
    }
    else
    {
      Object = 32;
    }
    v28 = -1073741757;
    SetFailureLocation(v25, 0, 31, -1073741757, Object);
    v29 = (_DWORD *)v57;
    goto LABEL_20;
  }
  v29 = (_DWORD *)v57;
  if ( (a3 & 0x2000) != 0 )
  {
    v37 = *(void **)(v57 + 1536);
    v64 = 0LL;
    v38 = ObReferenceObjectByHandle(v37, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &v64, 0LL);
    v28 = v38;
    if ( v38 < 0 )
    {
      SetFailureLocation(v25, 0, 31, v38, 80);
      goto LABEL_20;
    }
    v30 = a9;
    v28 = CmpResolveHiveLoadConflict((_DWORD)a1, (_DWORD)v64, a3, v67, v66, v25, a9, v69, (__int64)v65);
    HalPutDmaAdapter((PADAPTER_OBJECT)v64);
    if ( v28 < 0 )
    {
      if ( v28 == -1073741275 )
        goto LABEL_16;
      SetFailureLocation(v25, 0, 31, v28, 96);
LABEL_20:
      if ( v29 )
      {
        CmpAttachToRegistryProcess((__int64)v76);
        CmpDestroyHive(v29);
        KiUnstackDetachProcess((__int64)v76, 0LL);
      }
      goto LABEL_22;
    }
LABEL_19:
    v28 = 0;
    goto LABEL_20;
  }
  v30 = a9;
LABEL_16:
  if ( a6 )
    v29[1038] |= 0x2000u;
  KeyCommon = CmpLoadKeyCommon((char *)v29, a1, a3, v67, v70, v66, v30, v65, v50, v49, v25);
  v28 = KeyCommon;
  v29 = 0LL;
  if ( KeyCommon >= 0 )
    goto LABEL_19;
  SetFailureLocation(v25, 0, 31, KeyCommon, 112);
LABEL_22:
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  ExFreePoolWithTag(v19, 0);
  if ( v28 < 0 )
  {
    if ( (unsigned int)dword_140C02130 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_140C02130, 0x400000000008LL) )
      {
        v72 = 1LL;
        v78 = &v72;
        v82 = &v51;
        v80 = &v59;
        v40 = *(unsigned __int16 *)(v25 + 10);
        v41 = *(unsigned __int16 *)(v25 + 8);
        v88 = v25 + 8;
        v84 = &v52;
        v42 = v25 + 12;
        v51 = v41;
        v43 = *(unsigned __int8 *)(v25 + 394);
        v91 = 12 * v41;
        v95 = v25 + 108;
        v96 = 12 * v40;
        v100 = v25 + 396;
        v103 = &v73;
        v53 = v43;
        v52 = v40;
        v93 = v25 + 10;
        v79 = 8LL;
        v59 = v28;
        v81 = 4LL;
        v83 = 2LL;
        v85 = 2LL;
        v86 = &v53;
        v87 = 2LL;
        v89 = 2LL;
        v90 = v25 + 12;
        v92 = 0;
        v94 = 2LL;
        v97 = 0;
        v98 = v25 + 394;
        v99 = 2LL;
        v101 = 8 * v43;
        v102 = 0;
        v73 = 0x1000000LL;
        v104 = 8LL;
        tlgWriteAgg((__int64)&dword_140C02130, (unsigned __int8 *)&byte_140021BEB, v25 + 394, 0xEu, &v77);
        v39 = dword_140C02130;
      }
      else
      {
        v42 = v25 + 12;
      }
      if ( v39 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 8LL) )
      {
        v60 = v28;
        v106 = &v60;
        v108 = &v54;
        v44 = *(unsigned __int16 *)(v25 + 8);
        v45 = *(unsigned __int16 *)(v25 + 10);
        v114 = v25 + 8;
        v110 = &v55;
        v46 = *(unsigned __int8 *)(v25 + 394);
        v117 = 12 * v44;
        v121 = v25 + 108;
        v122 = 12 * v45;
        v126 = v25 + 396;
        v56 = v46;
        v54 = v44;
        v55 = v45;
        v119 = v25 + 10;
        v124 = v25 + 394;
        v107 = 4LL;
        v109 = 2LL;
        v111 = 2LL;
        v112 = &v56;
        v113 = 2LL;
        v115 = 2LL;
        v116 = v42;
        v118 = 0;
        v120 = 2LL;
        v123 = 0;
        v125 = 2LL;
        v127 = 8 * v46;
        v128 = 0;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C02130,
          (unsigned __int8 *)byte_140021D4B,
          0LL,
          0LL,
          0xCu,
          &v105);
      }
    }
  }
  else if ( (unsigned int)dword_140C02130 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 0x400000000008LL) )
  {
    v74 = 1LL;
    v130 = &v74;
    v131 = 8LL;
    v132 = &v61;
    v61 = v28;
    v134 = &v75;
    v133 = 4LL;
    v75 = 0x1000000LL;
    v135 = 8LL;
    tlgWriteAgg((__int64)&dword_140C02130, (unsigned __int8 *)&unk_140021B98, v32, 5u, &v129);
  }
  if ( v25 )
    CmSiFreeMemory((PPRIVILEGE_SET)v25);
  return (unsigned int)v28;
}
