/*
 * XREFs of CmLoadKey @ 0x1406BA714
 * Callers:
 *     CmLoadDifferencingKey @ 0x14066E58C (CmLoadDifferencingKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140201A30 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x140206F90 (CmpAllocateTransientPoolWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14025FAE0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402605BC (_tlgKeywordOn.c)
 *     ExReleaseRundownProtection_0 @ 0x14027C4F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14027C9B0 (ExAcquireRundownProtection_0.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     SetFailureLocation @ 0x1402C4808 (SetFailureLocation.c)
 *     CmpLoadKeyCommon @ 0x14036195C (CmpLoadKeyCommon.c)
 *     _tlgWriteAgg @ 0x140375E94 (_tlgWriteAgg.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA580 (ZwClose.c)
 *     memset @ 0x140414200 (memset.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     CmpCmdHiveOpen @ 0x140603588 (CmpCmdHiveOpen.c)
 *     CmpOpenHiveFile @ 0x1406718C8 (CmpOpenHiveFile.c)
 *     CmpQueryHiveRedirectionFileList @ 0x1406BAAB8 (CmpQueryHiveRedirectionFileList.c)
 *     ObReferenceObjectByHandle @ 0x1406F0BC0 (ObReferenceObjectByHandle.c)
 *     CmpDestroyHive @ 0x140728F38 (CmpDestroyHive.c)
 *     CmpResolveHiveLoadConflict @ 0x14086E724 (CmpResolveHiveLoadConflict.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
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
  int v23; // ecx
  char v24; // bl
  PVOID TransientPoolWithTag; // rax
  __int64 v26; // rdi
  char v27; // dl
  int v28; // eax
  int v29; // ebx
  _DWORD *v30; // rsi
  char v31; // r13
  int KeyCommon; // eax
  __int64 v33; // rdx
  __int64 v34; // r8
  _DWORD *v35; // r9
  __int64 v36; // r8
  UNICODE_STRING *p_Destination; // rax
  NTSTATUS v39; // ebx
  int Conflict; // ebx
  void *v41; // rcx
  NTSTATUS v42; // eax
  unsigned int v43; // r9d
  int v44; // r9d
  int v45; // edx
  __int64 v46; // r14
  int v47; // r10d
  int v48; // edx
  int v49; // r9d
  int v50; // r10d
  int Object; // [rsp+20h] [rbp-E0h]
  char v52; // [rsp+60h] [rbp-A0h] BYREF
  char v53[3]; // [rsp+61h] [rbp-9Fh] BYREF
  __int16 v54; // [rsp+64h] [rbp-9Ch] BYREF
  __int16 v55; // [rsp+68h] [rbp-98h] BYREF
  __int16 v56; // [rsp+6Ch] [rbp-94h] BYREF
  __int16 v57; // [rsp+70h] [rbp-90h] BYREF
  __int16 v58; // [rsp+74h] [rbp-8Ch] BYREF
  __int16 v59; // [rsp+78h] [rbp-88h] BYREF
  __int64 v60; // [rsp+80h] [rbp-80h] BYREF
  int v61; // [rsp+88h] [rbp-78h] BYREF
  int v62; // [rsp+8Ch] [rbp-74h] BYREF
  int v63; // [rsp+90h] [rbp-70h] BYREF
  int v64; // [rsp+94h] [rbp-6Ch] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-68h] BYREF
  PVOID v66; // [rsp+A0h] [rbp-60h] BYREF
  PVOID v67; // [rsp+A8h] [rbp-58h] BYREF
  ULONG_PTR *v68; // [rsp+B0h] [rbp-50h]
  __int64 v69; // [rsp+B8h] [rbp-48h]
  __int64 v70; // [rsp+C0h] [rbp-40h]
  __int64 v71; // [rsp+C8h] [rbp-38h]
  __int64 v72; // [rsp+D0h] [rbp-30h]
  __int64 v73; // [rsp+D8h] [rbp-28h]
  UNICODE_STRING Destination; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v75; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v76; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v77; // [rsp+100h] [rbp+0h] BYREF
  __int64 v78; // [rsp+108h] [rbp+8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v79[3]; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v80; // [rsp+140h] [rbp+40h] BYREF
  __int64 *v81; // [rsp+160h] [rbp+60h]
  __int64 v82; // [rsp+168h] [rbp+68h]
  int *v83; // [rsp+170h] [rbp+70h]
  __int64 v84; // [rsp+178h] [rbp+78h]
  __int16 *v85; // [rsp+180h] [rbp+80h]
  __int64 v86; // [rsp+188h] [rbp+88h]
  __int16 *v87; // [rsp+190h] [rbp+90h]
  __int64 v88; // [rsp+198h] [rbp+98h]
  __int16 *v89; // [rsp+1A0h] [rbp+A0h]
  __int64 v90; // [rsp+1A8h] [rbp+A8h]
  __int64 v91; // [rsp+1B0h] [rbp+B0h]
  __int64 v92; // [rsp+1B8h] [rbp+B8h]
  __int64 v93; // [rsp+1C0h] [rbp+C0h]
  int v94; // [rsp+1C8h] [rbp+C8h]
  int v95; // [rsp+1CCh] [rbp+CCh]
  __int64 v96; // [rsp+1D0h] [rbp+D0h]
  __int64 v97; // [rsp+1D8h] [rbp+D8h]
  __int64 v98; // [rsp+1E0h] [rbp+E0h]
  int v99; // [rsp+1E8h] [rbp+E8h]
  int v100; // [rsp+1ECh] [rbp+ECh]
  __int64 v101; // [rsp+1F0h] [rbp+F0h]
  __int64 v102; // [rsp+1F8h] [rbp+F8h]
  __int64 v103; // [rsp+200h] [rbp+100h]
  int v104; // [rsp+208h] [rbp+108h]
  int v105; // [rsp+20Ch] [rbp+10Ch]
  __int64 *v106; // [rsp+210h] [rbp+110h]
  __int64 v107; // [rsp+218h] [rbp+118h]
  struct _EVENT_DATA_DESCRIPTOR v108; // [rsp+220h] [rbp+120h] BYREF
  int *v109; // [rsp+240h] [rbp+140h]
  __int64 v110; // [rsp+248h] [rbp+148h]
  __int16 *v111; // [rsp+250h] [rbp+150h]
  __int64 v112; // [rsp+258h] [rbp+158h]
  __int16 *v113; // [rsp+260h] [rbp+160h]
  __int64 v114; // [rsp+268h] [rbp+168h]
  __int16 *v115; // [rsp+270h] [rbp+170h]
  __int64 v116; // [rsp+278h] [rbp+178h]
  __int64 v117; // [rsp+280h] [rbp+180h]
  __int64 v118; // [rsp+288h] [rbp+188h]
  __int64 v119; // [rsp+290h] [rbp+190h]
  int v120; // [rsp+298h] [rbp+198h]
  int v121; // [rsp+29Ch] [rbp+19Ch]
  __int64 v122; // [rsp+2A0h] [rbp+1A0h]
  __int64 v123; // [rsp+2A8h] [rbp+1A8h]
  __int64 v124; // [rsp+2B0h] [rbp+1B0h]
  int v125; // [rsp+2B8h] [rbp+1B8h]
  int v126; // [rsp+2BCh] [rbp+1BCh]
  __int64 v127; // [rsp+2C0h] [rbp+1C0h]
  __int64 v128; // [rsp+2C8h] [rbp+1C8h]
  __int64 v129; // [rsp+2D0h] [rbp+1D0h]
  int v130; // [rsp+2D8h] [rbp+1D8h]
  int v131; // [rsp+2DCh] [rbp+1DCh]
  struct _EVENT_DATA_DESCRIPTOR v132; // [rsp+2E0h] [rbp+1E0h] BYREF
  __int64 *v133; // [rsp+300h] [rbp+200h]
  __int64 v134; // [rsp+308h] [rbp+208h]
  int *v135; // [rsp+310h] [rbp+210h]
  __int64 v136; // [rsp+318h] [rbp+218h]
  __int64 *v137; // [rsp+320h] [rbp+220h]
  __int64 v138; // [rsp+328h] [rbp+228h]

  v73 = a5;
  v69 = a7;
  v71 = a8;
  v72 = a10;
  v68 = a11;
  v14 = (unsigned __int16 *)a1[2];
  v52 = 0;
  memset(v79, 0, sizeof(v79));
  v70 = a4;
  v60 = 0LL;
  v15 = *v14;
  Handle = 0LL;
  v61 = 0;
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
  v23 = (a3 & 0x2000) != 0 ? 3 : 0;
  v24 = v23 | 8;
  if ( (a3 & 0x4000) == 0 )
    v24 = v23;
  TransientPoolWithTag = CmpAllocateTransientPoolWithTag(PagedPool, 0x1B0uLL, 0x33394D43u, v22);
  v26 = (__int64)TransientPoolWithTag;
  if ( !TransientPoolWithTag )
  {
    v29 = -1073741670;
    goto LABEL_22;
  }
  memset(TransientPoolWithTag, 0, 0x1B0uLL);
  v53[0] = 1;
  v27 = v24 | 4;
  if ( !v73 )
    v27 = v24;
  v28 = CmpCmdHiveOpen(
          a2,
          1,
          (__int64)v53,
          (__int64)&v60,
          ((a3 & 0xFFFFF223 | (2 * (a3 & 0x480 | (2 * (a3 & 0x20 | ((a3 & 4) << 6)))))) << 19) | 0x1190001,
          v27,
          v71,
          (__int64)&v52,
          v26);
  v29 = v28;
  if ( v28 < 0 )
  {
    if ( v28 != -1073741757 )
    {
      SetFailureLocation(v26, 0, 31, v28, 16);
      v30 = (_DWORD *)v60;
      goto LABEL_20;
    }
    if ( (int)CmpOpenHiveFile(a2, 0, &Handle, &v61, 8u, (void *)v71, 0LL, 0LL, 0LL) >= 0 )
    {
      v66 = 0LL;
      v39 = ObReferenceObjectByHandle(Handle, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &v66, 0LL);
      ZwClose(Handle);
      if ( v39 < 0 )
      {
        Object = 48;
      }
      else
      {
        Conflict = CmpResolveHiveLoadConflict((_DWORD)a1, (_DWORD)v66, a3, v70, v69, v26, a9, v72, (__int64)v68);
        HalPutDmaAdapter((PADAPTER_OBJECT)v66);
        if ( Conflict >= 0 )
        {
          v30 = (_DWORD *)v60;
          goto LABEL_19;
        }
        Object = 64;
      }
    }
    else
    {
      Object = 32;
    }
    v29 = -1073741757;
    SetFailureLocation(v26, 0, 31, -1073741757, Object);
    v30 = (_DWORD *)v60;
    goto LABEL_20;
  }
  v30 = (_DWORD *)v60;
  if ( (a3 & 0x2000) != 0 )
  {
    v41 = *(void **)(v60 + 1536);
    v67 = 0LL;
    v42 = ObReferenceObjectByHandle(v41, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &v67, 0LL);
    v29 = v42;
    if ( v42 < 0 )
    {
      SetFailureLocation(v26, 0, 31, v42, 80);
      goto LABEL_20;
    }
    v31 = a9;
    v29 = CmpResolveHiveLoadConflict((_DWORD)a1, (_DWORD)v67, a3, v70, v69, v26, a9, v72, (__int64)v68);
    HalPutDmaAdapter((PADAPTER_OBJECT)v67);
    if ( v29 < 0 )
    {
      if ( v29 == -1073741275 )
        goto LABEL_16;
      SetFailureLocation(v26, 0, 31, v29, 96);
LABEL_20:
      if ( v30 )
      {
        CmpAttachToRegistryProcess((__int64)v79, v33, v34, v35);
        CmpDestroyHive(v30);
        KiUnstackDetachProcess((__int64)v79, 0);
      }
      goto LABEL_22;
    }
LABEL_19:
    v29 = 0;
    goto LABEL_20;
  }
  v31 = a9;
LABEL_16:
  if ( a6 )
    v30[1038] |= 0x2000u;
  KeyCommon = CmpLoadKeyCommon((char *)v30, a1, a3, v70, v73, v69, v31, v68, v53[0], v52, v26);
  v29 = KeyCommon;
  v30 = 0LL;
  if ( KeyCommon >= 0 )
    goto LABEL_19;
  SetFailureLocation(v26, 0, 31, KeyCommon, 112);
LABEL_22:
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  ExFreePoolWithTag(v19, 0);
  if ( v29 < 0 )
  {
    if ( (unsigned int)dword_140C02130 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_140C02130, 0x400000000008LL) )
      {
        v75 = 1LL;
        v81 = &v75;
        v85 = &v54;
        v83 = &v62;
        v44 = *(unsigned __int16 *)(v26 + 10);
        v45 = *(unsigned __int16 *)(v26 + 8);
        v91 = v26 + 8;
        v87 = &v55;
        v46 = v26 + 12;
        v54 = v45;
        v47 = *(unsigned __int8 *)(v26 + 394);
        v94 = 12 * v45;
        v98 = v26 + 108;
        v99 = 12 * v44;
        v103 = v26 + 396;
        v106 = &v76;
        v56 = v47;
        v55 = v44;
        v96 = v26 + 10;
        v82 = 8LL;
        v62 = v29;
        v84 = 4LL;
        v86 = 2LL;
        v88 = 2LL;
        v89 = &v56;
        v90 = 2LL;
        v92 = 2LL;
        v93 = v26 + 12;
        v95 = 0;
        v97 = 2LL;
        v100 = 0;
        v101 = v26 + 394;
        v102 = 2LL;
        v104 = 8 * v47;
        v105 = 0;
        v76 = 0x1000000LL;
        v107 = 8LL;
        tlgWriteAgg((__int64)&dword_140C02130, (unsigned __int8 *)&dword_140022C84, v26 + 394, 0xEu, &v80);
        v43 = dword_140C02130;
      }
      else
      {
        v46 = v26 + 12;
      }
      if ( v43 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 8LL) )
      {
        v63 = v29;
        v109 = &v63;
        v111 = &v57;
        v48 = *(unsigned __int16 *)(v26 + 8);
        v49 = *(unsigned __int16 *)(v26 + 10);
        v117 = v26 + 8;
        v113 = &v58;
        v50 = *(unsigned __int8 *)(v26 + 394);
        v120 = 12 * v48;
        v124 = v26 + 108;
        v125 = 12 * v49;
        v129 = v26 + 396;
        v59 = v50;
        v57 = v48;
        v58 = v49;
        v122 = v26 + 10;
        v127 = v26 + 394;
        v110 = 4LL;
        v112 = 2LL;
        v114 = 2LL;
        v115 = &v59;
        v116 = 2LL;
        v118 = 2LL;
        v119 = v46;
        v121 = 0;
        v123 = 2LL;
        v126 = 0;
        v128 = 2LL;
        v130 = 8 * v50;
        v131 = 0;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C02130,
          (unsigned __int8 *)byte_140022B4B,
          0LL,
          0LL,
          0xCu,
          &v108);
      }
    }
  }
  else if ( (unsigned int)dword_140C02130 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 0x400000000008LL) )
  {
    v77 = 1LL;
    v133 = &v77;
    v134 = 8LL;
    v135 = &v64;
    v64 = v29;
    v137 = &v78;
    v136 = 4LL;
    v78 = 0x1000000LL;
    v138 = 8LL;
    tlgWriteAgg((__int64)&dword_140C02130, (unsigned __int8 *)&unk_140022AF8, v36, 5u, &v132);
  }
  if ( v26 )
    CmSiFreeMemory((PPRIVILEGE_SET)v26);
  return (unsigned int)v29;
}
